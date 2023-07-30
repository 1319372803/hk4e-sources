// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityChessExcelConfig.gen.cpp

// Line 12: range 00000000127AEE38-00000000127AF1AB
const char *__fastcall data::enumValToStr(data::CardFortuneType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::CardFortuneType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::CardFortuneType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
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
  map = data::getCardFortuneTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::CardFortuneType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::CardFortuneType,std::pair<std::string,std::string>>::find(map, (const std::map<data::CardFortuneType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::CardFortuneType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::CardFortuneType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::CardFortuneType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::CardFortuneType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
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
    result = "INVALID_CardFortuneType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::CardFortuneType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::CardFortuneType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 24: range 00000000127AF1AC-00000000127AF764
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::CardFortuneType>,false,true>::pointer v10; // rax
  data::CardFortuneType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::CardFortuneType> *m; // [rsp+18h] [rbp-188h]
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
    m = data::getCardFortuneTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::CardFortuneType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::CardFortuneType>::find(
                                                                                            m,
                                                                                            (const std::unordered_map<std::string,data::CardFortuneType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::CardFortuneType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::CardFortuneType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::CardFortuneType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::CardFortuneType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::CardFortuneType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
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
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::CardFortuneType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::CardFortuneType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
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

// Line 45: range 00000000127AF765-00000000127B0349
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::CardFortuneType> *i; // r14
  unsigned __int64 v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::CardFortuneType>,false,true>::pointer v12; // rax
  data::CardFortuneType second; // ecx
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
                        "<unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 8 5 it:61 208 8 9 <unknown> "
                        "240 8 4 s:44 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 200 9 <unknown>";
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::CardFortuneType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::CardFortuneType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, e);
      *(_DWORD *)(v2 + 96) = 0;
      std::pair<std::string const,data::CardFortuneType>::pair<char const(&)[10],data::CardFortuneType,true>(
        (std::pair<const std::string,data::CardFortuneType> *const)(v2 + 464),
        (const char (*)[10])byte_1A9743E0,
        (data::CardFortuneType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, byte_1A9743E0);
      *(_DWORD *)(v2 + 112) = 1;
      std::pair<std::string const,data::CardFortuneType>::pair<char const(&)[13],data::CardFortuneType,true>(
        (std::pair<const std::string,data::CardFortuneType> *const)(v2 + 504),
        (const char (*)[13])byte_1A974420,
        (data::CardFortuneType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1A974420);
      *(_DWORD *)(v2 + 128) = 2;
      std::pair<std::string const,data::CardFortuneType>::pair<char const(&)[10],data::CardFortuneType,true>(
        (std::pair<const std::string,data::CardFortuneType> *const)(v2 + 544),
        (const char (*)[10])byte_1A974460,
        (data::CardFortuneType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, byte_1A974460);
      *(_DWORD *)(v2 + 144) = 3;
      std::pair<std::string const,data::CardFortuneType>::pair<char const(&)[13],data::CardFortuneType,true>(
        (std::pair<const std::string,data::CardFortuneType> *const)(v2 + 584),
        (const char (*)[13])byte_1A9744A0,
        (data::CardFortuneType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, byte_1A9744A0);
      *(_DWORD *)(v2 + 160) = 4;
      std::pair<std::string const,data::CardFortuneType>::pair<char const(&)[13],data::CardFortuneType,true>(
        (std::pair<const std::string,data::CardFortuneType> *const)(v2 + 624),
        (const char (*)[13])byte_1A9744E0,
        (data::CardFortuneType *)(v2 + 160));
      std::allocator<std::pair<std::string const,data::CardFortuneType>>::allocator((std::allocator<std::pair<const std::string,data::CardFortuneType> > *const)(v2 + 64));
      std::unordered_map<std::string,data::CardFortuneType>::unordered_map(
        &data::enumStrToVal(char const*,data::CardFortuneType &)::m,
        (std::initializer_list<std::pair<const std::string,data::CardFortuneType> >)__PAIR128__(5LL, v2 + 464),
        0LL,
        (const std::unordered_map<std::string,data::CardFortuneType>::hasher *)(v2 + 32),
        (const std::unordered_map<std::string,data::CardFortuneType>::key_equal *)(v2 + 48),
        (const std::unordered_map<std::string,data::CardFortuneType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::CardFortuneType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::CardFortuneType>::~unordered_map,
        &data::enumStrToVal(char const*,data::CardFortuneType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::CardFortuneType>>::~allocator((std::allocator<std::pair<const std::string,data::CardFortuneType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::CardFortuneType> *)(v2 + 664);
            i != (std::pair<const std::string,data::CardFortuneType> *)(v2 + 464);
            std::pair<std::string const,data::CardFortuneType>::~pair(i) )
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
    *(std::unordered_map<std::string,data::CardFortuneType>::iterator *)(v2 + 176) = std::unordered_map<std::string,data::CardFortuneType>::find(
                                                                                       &data::enumStrToVal(char const*,data::CardFortuneType &)::m,
                                                                                       (const std::unordered_map<std::string,data::CardFortuneType>::key_type *)(v2 + 336));
    std::string::~string((void *)(v2 + 336));
    *(_DWORD *)(((v2 + 336) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 80);
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 208, v2 + 336);
    *(std::unordered_map<std::string,data::CardFortuneType>::iterator *)(v2 + 208) = std::unordered_map<std::string,data::CardFortuneType>::end(&data::enumStrToVal(char const*,data::CardFortuneType &)::m);
    v9 = (char *)(v2 + 208);
    v10 = std::__detail::operator==<std::pair<std::string const,data::CardFortuneType>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::CardFortuneType>,true> *)(v2 + 176),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::CardFortuneType>,true> *)(v2 + 208));
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
        "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
        "enumStrToVal",
        64);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 400),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)(v2 + 240));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 400));
      LODWORD(result) = -1;
    }
    else
    {
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::CardFortuneType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::CardFortuneType>,false,true> *const)(v2 + 176));
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
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "enumStrToVal",
      48);
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

// Line 73: range 00000000127B034A-00000000127B0360
const char *__cdecl data::getDescription(data::CardFortuneType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 78: range 00000000127B0361-00000000127B0516
bool __cdecl data::isValidCardFortuneType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::CardFortuneType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::CardFortuneType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 4 e:79 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidCardFortuneType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getCardFortuneTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::CardFortuneType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::CardFortuneType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getCardFortuneTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::CardFortuneType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::CardFortuneType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::CardFortuneType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::CardFortuneType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::CardFortuneType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 84: range 00000000127B0517-00000000127B0678
bool __cdecl data::isValidCardFortuneTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::CardFortuneType> *v5; // rcx
  const std::unordered_map<std::string,data::CardFortuneType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidCardFortuneTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getCardFortuneTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::CardFortuneType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::CardFortuneType>::end(v5);
  v6 = data::getCardFortuneTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::CardFortuneType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::CardFortuneType>::find(
                                                                                          v6,
                                                                                          name);
  result = std::__detail::operator!=<std::pair<std::string const,data::CardFortuneType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::CardFortuneType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::CardFortuneType>,true> *)(v2 + 64));
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

// Line 89: range 00000000127B0679-00000000127B0C93
const std::unordered_map<std::string,data::CardFortuneType> *__cdecl data::getCardFortuneTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::CardFortuneType> *i; // r14
  const std::unordered_map<std::string,data::CardFortuneType> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getCardFortuneTypeNameMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getCardFortuneTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getCardFortuneTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v0);
    *(_DWORD *)(v1 + 96) = 0;
    std::pair<std::string const,data::CardFortuneType>::pair<char const(&)[22],data::CardFortuneType,true>(
      (std::pair<const std::string,data::CardFortuneType> *const)(v1 + 176),
      (const char (*)[22])"CHESS_CARDFORTUNE_BAD",
      (data::CardFortuneType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "CHESS_CARDFORTUNE_BAD");
    *(_DWORD *)(v1 + 112) = 1;
    std::pair<std::string const,data::CardFortuneType>::pair<char const(&)[25],data::CardFortuneType,true>(
      (std::pair<const std::string,data::CardFortuneType> *const)(v1 + 216),
      (const char (*)[25])"CHESS_CARDFORTUNE_NORMAL",
      (data::CardFortuneType *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, "CHESS_CARDFORTUNE_NORMAL");
    *(_DWORD *)(v1 + 128) = 2;
    std::pair<std::string const,data::CardFortuneType>::pair<char const(&)[23],data::CardFortuneType,true>(
      (std::pair<const std::string,data::CardFortuneType> *const)(v1 + 256),
      (const char (*)[23])"CHESS_CARDFORTUNE_GOOD",
      (data::CardFortuneType *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, "CHESS_CARDFORTUNE_GOOD");
    *(_DWORD *)(v1 + 144) = 3;
    std::pair<std::string const,data::CardFortuneType>::pair<char const(&)[27],data::CardFortuneType,true>(
      (std::pair<const std::string,data::CardFortuneType> *const)(v1 + 296),
      (const char (*)[27])"CHESS_CARDFORTUNE_VERYGOOD",
      (data::CardFortuneType *)(v1 + 144));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, "CHESS_CARDFORTUNE_VERYGOOD");
    *(_DWORD *)(v1 + 160) = 4;
    std::pair<std::string const,data::CardFortuneType>::pair<char const(&)[26],data::CardFortuneType,true>(
      (std::pair<const std::string,data::CardFortuneType> *const)(v1 + 336),
      (const char (*)[26])"CHESS_CARDFORTUNE_PERFECT",
      (data::CardFortuneType *)(v1 + 160));
    std::allocator<std::pair<std::string const,data::CardFortuneType>>::allocator((std::allocator<std::pair<const std::string,data::CardFortuneType> > *const)(v1 + 80));
    std::unordered_map<std::string,data::CardFortuneType>::unordered_map(
      &data::getCardFortuneTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::CardFortuneType> >)__PAIR128__(5LL, v1 + 176),
      0LL,
      (const std::unordered_map<std::string,data::CardFortuneType>::hasher *)(v1 + 48),
      (const std::unordered_map<std::string,data::CardFortuneType>::key_equal *)(v1 + 64),
      (const std::unordered_map<std::string,data::CardFortuneType>::allocator_type *)(v1 + 80));
    __cxa_guard_release(&`guard variable for'data::getCardFortuneTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::CardFortuneType>::~unordered_map,
      &data::getCardFortuneTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::CardFortuneType>>::~allocator((std::allocator<std::pair<const std::string,data::CardFortuneType> > *const)(v1 + 80));
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::CardFortuneType> *)(v1 + 376);
          i != (std::pair<const std::string,data::CardFortuneType> *)(v1 + 176);
          std::pair<std::string const,data::CardFortuneType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getCardFortuneTypeNameMap[abi:cxx11](void)::m;
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

// Line 102: range 00000000127B0C94-00000000127B1559
const std::map<data::CardFortuneType,std::pair<std::string,std::string >> *__cdecl data::getCardFortuneTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::CardFortuneType,std::pair<std::string,std::string > > *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getCardFortuneTypeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getCardFortuneTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getCardFortuneTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 64, v0);
    *(_DWORD *)(v1 + 64) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[10],char const(&)[22],true>(
      (std::pair<std::string,std::string > *const)(v1 + 144),
      (const char (*)[10])byte_1A9743E0,
      (const char (*)[22])"CHESS_CARDFORTUNE_BAD");
    std::pair<data::CardFortuneType const,std::pair<std::string,std::string>>::pair<data::CardFortuneType,true>(
      (std::pair<const data::CardFortuneType,std::pair<std::string,std::string > > *const)(v1 + 624),
      (data::CardFortuneType *)(v1 + 64),
      (const std::pair<std::string,std::string > *)(v1 + 144));
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v1 + 64);
    *(_DWORD *)(v1 + 80) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[25],true>(
      (std::pair<std::string,std::string > *const)(v1 + 240),
      (const char (*)[13])byte_1A974420,
      (const char (*)[25])"CHESS_CARDFORTUNE_NORMAL");
    std::pair<data::CardFortuneType const,std::pair<std::string,std::string>>::pair<data::CardFortuneType,true>(
      (std::pair<const data::CardFortuneType,std::pair<std::string,std::string > > *const)(v1 + 696),
      (data::CardFortuneType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 240));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[10],char const(&)[23],true>(
      (std::pair<std::string,std::string > *const)(v1 + 336),
      (const char (*)[10])byte_1A974460,
      (const char (*)[23])"CHESS_CARDFORTUNE_GOOD");
    std::pair<data::CardFortuneType const,std::pair<std::string,std::string>>::pair<data::CardFortuneType,true>(
      (std::pair<const data::CardFortuneType,std::pair<std::string,std::string > > *const)(v1 + 768),
      (data::CardFortuneType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 336));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 3;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[27],true>(
      (std::pair<std::string,std::string > *const)(v1 + 432),
      (const char (*)[13])byte_1A9744A0,
      (const char (*)[27])"CHESS_CARDFORTUNE_VERYGOOD");
    std::pair<data::CardFortuneType const,std::pair<std::string,std::string>>::pair<data::CardFortuneType,true>(
      (std::pair<const data::CardFortuneType,std::pair<std::string,std::string > > *const)(v1 + 840),
      (data::CardFortuneType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 432));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, v1 + 112);
    *(_DWORD *)(v1 + 128) = 4;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[26],true>(
      (std::pair<std::string,std::string > *const)(v1 + 528),
      (const char (*)[13])byte_1A9744E0,
      (const char (*)[26])"CHESS_CARDFORTUNE_PERFECT");
    std::pair<data::CardFortuneType const,std::pair<std::string,std::string>>::pair<data::CardFortuneType,true>(
      (std::pair<const data::CardFortuneType,std::pair<std::string,std::string > > *const)(v1 + 912),
      (data::CardFortuneType *)(v1 + 128),
      (const std::pair<std::string,std::string > *)(v1 + 528));
    std::allocator<std::pair<data::CardFortuneType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::CardFortuneType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    std::map<data::CardFortuneType,std::pair<std::string,std::string>>::map(
      &data::getCardFortuneTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::CardFortuneType,std::pair<std::string,std::string > > >)__PAIR128__(5LL, v1 + 624),
      (const std::less<data::CardFortuneType> *)(v1 + 32),
      (const std::map<data::CardFortuneType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 48));
    __cxa_guard_release(&`guard variable for'data::getCardFortuneTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::CardFortuneType,std::pair<std::string,std::string>>::~map,
      &data::getCardFortuneTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::CardFortuneType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::CardFortuneType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::CardFortuneType,std::pair<std::string,std::string > > *)(v1 + 984);
          i != (std::pair<const data::CardFortuneType,std::pair<std::string,std::string > > *)(v1 + 624);
          std::pair<data::CardFortuneType const,std::pair<std::string,std::string>>::~pair(i) )
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
  return &data::getCardFortuneTypeEnumMap[abi:cxx11](void)::m;
};

// Line 115: range 00000000127B155A-00000000127B18CD
const char *__fastcall data::enumValToStr(data::ChessCardQualityType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::ChessCardQualityType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::ChessCardQualityType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 5 e:114 64 8 8 iter:117 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getChessCardQualityTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::ChessCardQualityType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::ChessCardQualityType,std::pair<std::string,std::string>>::find(map, (const std::map<data::ChessCardQualityType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::ChessCardQualityType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::ChessCardQualityType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::ChessCardQualityType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::ChessCardQualityType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "enumValToStr",
      120);
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
    result = "INVALID_ChessCardQualityType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::ChessCardQualityType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::ChessCardQualityType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 127: range 00000000127B18CE-00000000127B1E86
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::ChessCardQualityType>,false,true>::pointer v10; // rax
  data::ChessCardQualityType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::ChessCardQualityType> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:136 96 8 9 <unknown> 128 8 5 s:126 160 32 9 <unknown> 224 32 9 <unk"
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
    m = data::getChessCardQualityTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::ChessCardQualityType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ChessCardQualityType>::find(
                                                                                                 m,
                                                                                                 (const std::unordered_map<std::string,data::ChessCardQualityType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::ChessCardQualityType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::ChessCardQualityType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::ChessCardQualityType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ChessCardQualityType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ChessCardQualityType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
        "enumNameToVal",
        139);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::ChessCardQualityType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::ChessCardQualityType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "enumNameToVal",
      130);
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

// Line 148: range 00000000127B1E87-00000000127B28E2
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::ChessCardQualityType> *i; // r14
  unsigned __int64 v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::ChessCardQualityType>,false,true>::pointer v12; // rax
  data::ChessCardQualityType second; // ecx
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
                        " <unknown> 144 4 9 <unknown> 160 8 6 it:162 192 8 9 <unknown> 224 8 5 s:147 256 32 9 <unknown> 3"
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::ChessCardQualityType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::ChessCardQualityType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, e);
      *(_DWORD *)(v2 + 112) = 0;
      std::pair<std::string const,data::ChessCardQualityType>::pair<char const(&)[7],data::ChessCardQualityType,true>(
        (std::pair<const std::string,data::ChessCardQualityType> *const)(v2 + 448),
        (const char (*)[7])byte_1A974A80,
        (data::ChessCardQualityType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1A974A80);
      *(_DWORD *)(v2 + 128) = 1;
      std::pair<std::string const,data::ChessCardQualityType>::pair<char const(&)[4],data::ChessCardQualityType,true>(
        (std::pair<const std::string,data::ChessCardQualityType> *const)(v2 + 488),
        (const char (*)[4])off_1A974AC0,
        (data::ChessCardQualityType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, off_1A974AC0);
      *(_DWORD *)(v2 + 144) = 2;
      std::pair<std::string const,data::ChessCardQualityType>::pair<char const(&)[7],data::ChessCardQualityType,true>(
        (std::pair<const std::string,data::ChessCardQualityType> *const)(v2 + 528),
        (const char (*)[7])byte_1A974B00,
        (data::ChessCardQualityType *)(v2 + 144));
      std::allocator<std::pair<std::string const,data::ChessCardQualityType>>::allocator((std::allocator<std::pair<const std::string,data::ChessCardQualityType> > *const)(v2 + 80));
      std::unordered_map<std::string,data::ChessCardQualityType>::unordered_map(
        &data::enumStrToVal(char const*,data::ChessCardQualityType &)::m,
        (std::initializer_list<std::pair<const std::string,data::ChessCardQualityType> >)__PAIR128__(3LL, v2 + 448),
        0LL,
        (const std::unordered_map<std::string,data::ChessCardQualityType>::hasher *)(v2 + 48),
        (const std::unordered_map<std::string,data::ChessCardQualityType>::key_equal *)(v2 + 64),
        (const std::unordered_map<std::string,data::ChessCardQualityType>::allocator_type *)(v2 + 80));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::ChessCardQualityType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::ChessCardQualityType>::~unordered_map,
        &data::enumStrToVal(char const*,data::ChessCardQualityType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::ChessCardQualityType>>::~allocator((std::allocator<std::pair<const std::string,data::ChessCardQualityType> > *const)(v2 + 80));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::ChessCardQualityType> *)(v2 + 568);
            i != (std::pair<const std::string,data::ChessCardQualityType> *)(v2 + 448);
            std::pair<std::string const,data::ChessCardQualityType>::~pair(i) )
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
    *(std::unordered_map<std::string,data::ChessCardQualityType>::iterator *)(v2 + 160) = std::unordered_map<std::string,data::ChessCardQualityType>::find(
                                                                                            &data::enumStrToVal(char const*,data::ChessCardQualityType &)::m,
                                                                                            (const std::unordered_map<std::string,data::ChessCardQualityType>::key_type *)(v2 + 320));
    std::string::~string((void *)(v2 + 320));
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 96);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, v2 + 320);
    *(std::unordered_map<std::string,data::ChessCardQualityType>::iterator *)(v2 + 192) = std::unordered_map<std::string,data::ChessCardQualityType>::end(&data::enumStrToVal(char const*,data::ChessCardQualityType &)::m);
    v9 = (char *)(v2 + 192);
    v10 = std::__detail::operator==<std::pair<std::string const,data::ChessCardQualityType>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ChessCardQualityType>,true> *)(v2 + 160),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ChessCardQualityType>,true> *)(v2 + 192));
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
        "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
        "enumStrToVal",
        165);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 384),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)(v2 + 224));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::ChessCardQualityType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::ChessCardQualityType>,false,true> *const)(v2 + 160));
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
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "enumStrToVal",
      151);
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

// Line 174: range 00000000127B28E3-00000000127B28F9
const char *__cdecl data::getDescription(data::ChessCardQualityType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 179: range 00000000127B28FA-00000000127B2AAF
bool __cdecl data::isValidChessCardQualityType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::ChessCardQualityType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::ChessCardQualityType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:180 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidChessCardQualityType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getChessCardQualityTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::ChessCardQualityType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::ChessCardQualityType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getChessCardQualityTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::ChessCardQualityType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::ChessCardQualityType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::ChessCardQualityType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::ChessCardQualityType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::ChessCardQualityType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 185: range 00000000127B2AB0-00000000127B2C11
bool __cdecl data::isValidChessCardQualityTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::ChessCardQualityType> *v5; // rcx
  const std::unordered_map<std::string,data::ChessCardQualityType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidChessCardQualityTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getChessCardQualityTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::ChessCardQualityType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ChessCardQualityType>::end(v5);
  v6 = data::getChessCardQualityTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::ChessCardQualityType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::ChessCardQualityType>::find(
                                                                                               v6,
                                                                                               name);
  result = std::__detail::operator!=<std::pair<std::string const,data::ChessCardQualityType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ChessCardQualityType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ChessCardQualityType>,true> *)(v2 + 64));
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

// Line 190: range 00000000127B2C12-00000000127B30D4
const std::unordered_map<std::string,data::ChessCardQualityType> *__cdecl data::getChessCardQualityTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::ChessCardQualityType> *i; // r14
  const std::unordered_map<std::string,data::ChessCardQualityType> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getChessCardQualityTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556927;
  v3[536862723] = -234556924;
  v3[536862727] = -218103808;
  v3[536862728] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getChessCardQualityTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getChessCardQualityTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string const,data::ChessCardQualityType>::pair<char const(&)[20],data::ChessCardQualityType,true>(
      (std::pair<const std::string,data::ChessCardQualityType> *const)(v1 + 128),
      (const char (*)[20])"CARD_QUALITY_NORAML",
      (data::ChessCardQualityType *)(v1 + 80));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, "CARD_QUALITY_NORAML");
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string const,data::ChessCardQualityType>::pair<char const(&)[18],data::ChessCardQualityType,true>(
      (std::pair<const std::string,data::ChessCardQualityType> *const)(v1 + 168),
      (const char (*)[18])"CARD_QUALITY_GOOD",
      (data::ChessCardQualityType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "CARD_QUALITY_GOOD");
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string const,data::ChessCardQualityType>::pair<char const(&)[21],data::ChessCardQualityType,true>(
      (std::pair<const std::string,data::ChessCardQualityType> *const)(v1 + 208),
      (const char (*)[21])"CARD_QUALITY_PERCECT",
      (data::ChessCardQualityType *)(v1 + 112));
    std::allocator<std::pair<std::string const,data::ChessCardQualityType>>::allocator((std::allocator<std::pair<const std::string,data::ChessCardQualityType> > *const)(v1 + 64));
    std::unordered_map<std::string,data::ChessCardQualityType>::unordered_map(
      &data::getChessCardQualityTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::ChessCardQualityType> >)__PAIR128__(3LL, v1 + 128),
      0LL,
      (const std::unordered_map<std::string,data::ChessCardQualityType>::hasher *)(v1 + 32),
      (const std::unordered_map<std::string,data::ChessCardQualityType>::key_equal *)(v1 + 48),
      (const std::unordered_map<std::string,data::ChessCardQualityType>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getChessCardQualityTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::ChessCardQualityType>::~unordered_map,
      &data::getChessCardQualityTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::ChessCardQualityType>>::~allocator((std::allocator<std::pair<const std::string,data::ChessCardQualityType> > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::ChessCardQualityType> *)(v1 + 248);
          i != (std::pair<const std::string,data::ChessCardQualityType> *)(v1 + 128);
          std::pair<std::string const,data::ChessCardQualityType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getChessCardQualityTypeNameMap[abi:cxx11](void)::m;
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

// Line 201: range 00000000127B30D5-00000000127B37D3
const std::map<data::ChessCardQualityType,std::pair<std::string,std::string >> *__cdecl data::getChessCardQualityTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::ChessCardQualityType,std::pair<std::string,std::string > > *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getChessCardQualityTypeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getChessCardQualityTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getChessCardQualityTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[20],true>(
      (std::pair<std::string,std::string > *const)(v1 + 128),
      (const char (*)[7])byte_1A974A80,
      (const char (*)[20])"CARD_QUALITY_NORAML");
    std::pair<data::ChessCardQualityType const,std::pair<std::string,std::string>>::pair<data::ChessCardQualityType,true>(
      (std::pair<const data::ChessCardQualityType,std::pair<std::string,std::string > > *const)(v1 + 416),
      (data::ChessCardQualityType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[4],char const(&)[18],true>(
      (std::pair<std::string,std::string > *const)(v1 + 224),
      (const char (*)[4])off_1A974AC0,
      (const char (*)[18])"CARD_QUALITY_GOOD");
    std::pair<data::ChessCardQualityType const,std::pair<std::string,std::string>>::pair<data::ChessCardQualityType,true>(
      (std::pair<const data::ChessCardQualityType,std::pair<std::string,std::string > > *const)(v1 + 488),
      (data::ChessCardQualityType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 224));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 320),
      (const char (*)[7])byte_1A974B00,
      (const char (*)[21])"CARD_QUALITY_PERCECT");
    std::pair<data::ChessCardQualityType const,std::pair<std::string,std::string>>::pair<data::ChessCardQualityType,true>(
      (std::pair<const data::ChessCardQualityType,std::pair<std::string,std::string > > *const)(v1 + 560),
      (data::ChessCardQualityType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 320));
    std::allocator<std::pair<data::ChessCardQualityType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::ChessCardQualityType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    std::map<data::ChessCardQualityType,std::pair<std::string,std::string>>::map(
      &data::getChessCardQualityTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::ChessCardQualityType,std::pair<std::string,std::string > > >)__PAIR128__(3LL, v1 + 416),
      (const std::less<data::ChessCardQualityType> *)(v1 + 48),
      (const std::map<data::ChessCardQualityType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getChessCardQualityTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::ChessCardQualityType,std::pair<std::string,std::string>>::~map,
      &data::getChessCardQualityTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::ChessCardQualityType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::ChessCardQualityType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::ChessCardQualityType,std::pair<std::string,std::string > > *)(v1 + 632);
          i != (std::pair<const data::ChessCardQualityType,std::pair<std::string,std::string > > *)(v1 + 416);
          std::pair<data::ChessCardQualityType const,std::pair<std::string,std::string>>::~pair(i) )
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
  return &data::getChessCardQualityTypeEnumMap[abi:cxx11](void)::m;
};

// Line 212: range 00000000127B37D4-00000000127B3B47
const char *__fastcall data::enumValToStr(data::ChessCardType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::ChessCardType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::ChessCardType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 5 e:211 64 8 8 iter:214 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getChessCardTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::ChessCardType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::ChessCardType,std::pair<std::string,std::string>>::find(map, (const std::map<data::ChessCardType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::ChessCardType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::ChessCardType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::ChessCardType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::ChessCardType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "enumValToStr",
      217);
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
    result = "INVALID_ChessCardType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::ChessCardType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::ChessCardType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 224: range 00000000127B3B48-00000000127B4100
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::ChessCardType>,false,true>::pointer v10; // rax
  data::ChessCardType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::ChessCardType> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:233 96 8 9 <unknown> 128 8 5 s:223 160 32 9 <unknown> 224 32 9 <unk"
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
    m = data::getChessCardTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::ChessCardType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ChessCardType>::find(
                                                                                          m,
                                                                                          (const std::unordered_map<std::string,data::ChessCardType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::ChessCardType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::ChessCardType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::ChessCardType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ChessCardType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ChessCardType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
        "enumNameToVal",
        236);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::ChessCardType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::ChessCardType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "enumNameToVal",
      227);
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

// Line 245: range 00000000127B4101-00000000127B4BFF
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::ChessCardType> *i; // r14
  _DWORD *v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::ChessCardType>,false,true>::pointer v12; // rax
  data::ChessCardType second; // ecx
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
                        "<unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 8 6 it:260 192 8 9 <unknown> 224 8 5 s:244 256"
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::ChessCardType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::ChessCardType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, e);
      *(_DWORD *)(v2 + 96) = 0;
      std::pair<std::string const,data::ChessCardType>::pair<char const(&)[10],data::ChessCardType,true>(
        (std::pair<const std::string,data::ChessCardType> *const)(v2 + 448),
        (const char (*)[10])byte_1A974FA0,
        (data::ChessCardType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, byte_1A974FA0);
      *(_DWORD *)(v2 + 112) = 1;
      std::pair<std::string const,data::ChessCardType>::pair<char const(&)[10],data::ChessCardType,true>(
        (std::pair<const std::string,data::ChessCardType> *const)(v2 + 488),
        (const char (*)[10])byte_1A974FE0,
        (data::ChessCardType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1A974FE0);
      *(_DWORD *)(v2 + 128) = 2;
      std::pair<std::string const,data::ChessCardType>::pair<char const(&)[10],data::ChessCardType,true>(
        (std::pair<const std::string,data::ChessCardType> *const)(v2 + 528),
        (const char (*)[10])byte_1A975020,
        (data::ChessCardType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, byte_1A975020);
      *(_DWORD *)(v2 + 144) = 3;
      std::pair<std::string const,data::ChessCardType>::pair<char const(&)[10],data::ChessCardType,true>(
        (std::pair<const std::string,data::ChessCardType> *const)(v2 + 568),
        (const char (*)[10])byte_1A975060,
        (data::ChessCardType *)(v2 + 144));
      std::allocator<std::pair<std::string const,data::ChessCardType>>::allocator((std::allocator<std::pair<const std::string,data::ChessCardType> > *const)(v2 + 64));
      std::unordered_map<std::string,data::ChessCardType>::unordered_map(
        &data::enumStrToVal(char const*,data::ChessCardType &)::m,
        (std::initializer_list<std::pair<const std::string,data::ChessCardType> >)__PAIR128__(4LL, v2 + 448),
        0LL,
        (const std::unordered_map<std::string,data::ChessCardType>::hasher *)(v2 + 32),
        (const std::unordered_map<std::string,data::ChessCardType>::key_equal *)(v2 + 48),
        (const std::unordered_map<std::string,data::ChessCardType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::ChessCardType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::ChessCardType>::~unordered_map,
        &data::enumStrToVal(char const*,data::ChessCardType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::ChessCardType>>::~allocator((std::allocator<std::pair<const std::string,data::ChessCardType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::ChessCardType> *)(v2 + 608);
            i != (std::pair<const std::string,data::ChessCardType> *)(v2 + 448);
            std::pair<std::string const,data::ChessCardType>::~pair(i) )
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
    *(std::unordered_map<std::string,data::ChessCardType>::iterator *)(v2 + 160) = std::unordered_map<std::string,data::ChessCardType>::find(
                                                                                     &data::enumStrToVal(char const*,data::ChessCardType &)::m,
                                                                                     (const std::unordered_map<std::string,data::ChessCardType>::key_type *)(v2 + 320));
    std::string::~string((void *)(v2 + 320));
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 80);
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, v2 + 320);
    *(std::unordered_map<std::string,data::ChessCardType>::iterator *)(v2 + 192) = std::unordered_map<std::string,data::ChessCardType>::end(&data::enumStrToVal(char const*,data::ChessCardType &)::m);
    v9 = (char *)(v2 + 192);
    v10 = std::__detail::operator==<std::pair<std::string const,data::ChessCardType>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ChessCardType>,true> *)(v2 + 160),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ChessCardType>,true> *)(v2 + 192));
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
        "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
        "enumStrToVal",
        263);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 384),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)(v2 + 224));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::ChessCardType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::ChessCardType>,false,true> *const)(v2 + 160));
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
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "enumStrToVal",
      248);
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

// Line 272: range 00000000127B4C00-00000000127B4C16
const char *__cdecl data::getDescription(data::ChessCardType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 277: range 00000000127B4C17-00000000127B4DCC
bool __cdecl data::isValidChessCardType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::ChessCardType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::ChessCardType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:278 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidChessCardType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getChessCardTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::ChessCardType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::ChessCardType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getChessCardTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::ChessCardType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::ChessCardType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::ChessCardType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::ChessCardType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::ChessCardType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 283: range 00000000127B4DCD-00000000127B4F2E
bool __cdecl data::isValidChessCardTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::ChessCardType> *v5; // rcx
  const std::unordered_map<std::string,data::ChessCardType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidChessCardTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getChessCardTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::ChessCardType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ChessCardType>::end(v5);
  v6 = data::getChessCardTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::ChessCardType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::ChessCardType>::find(
                                                                                        v6,
                                                                                        name);
  result = std::__detail::operator!=<std::pair<std::string const,data::ChessCardType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ChessCardType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ChessCardType>,true> *)(v2 + 64));
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

// Line 288: range 00000000127B4F2F-00000000127B548E
const std::unordered_map<std::string,data::ChessCardType> *__cdecl data::getChessCardTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::ChessCardType> *i; // r14
  const std::unordered_map<std::string,data::ChessCardType> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getChessCardTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -234753535;
  v3[536862723] = -234556924;
  v3[536862724] = -234556924;
  v3[536862730] = -202116109;
  v3[536862731] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getChessCardTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getChessCardTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v0);
    *(_DWORD *)(v1 + 96) = 0;
    std::pair<std::string const,data::ChessCardType>::pair<char const(&)[17],data::ChessCardType,true>(
      (std::pair<const std::string,data::ChessCardType> *const)(v1 + 160),
      (const char (*)[17])"CHESS_CARD_CURSE",
      (data::ChessCardType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "CHESS_CARD_CURSE");
    *(_DWORD *)(v1 + 112) = 1;
    std::pair<std::string const,data::ChessCardType>::pair<char const(&)[21],data::ChessCardType,true>(
      (std::pair<const std::string,data::ChessCardType> *const)(v1 + 200),
      (const char (*)[21])"CHESS_CARD_MECHANISM",
      (data::ChessCardType *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, "CHESS_CARD_MECHANISM");
    *(_DWORD *)(v1 + 128) = 2;
    std::pair<std::string const,data::ChessCardType>::pair<char const(&)[21],data::ChessCardType,true>(
      (std::pair<const std::string,data::ChessCardType> *const)(v1 + 240),
      (const char (*)[21])"CHESS_CARD_CHALLENGE",
      (data::ChessCardType *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, "CHESS_CARD_CHALLENGE");
    *(_DWORD *)(v1 + 144) = 3;
    std::pair<std::string const,data::ChessCardType>::pair<char const(&)[22],data::ChessCardType,true>(
      (std::pair<const std::string,data::ChessCardType> *const)(v1 + 280),
      (const char (*)[22])"CHESS_CARD_STRENGTHEN",
      (data::ChessCardType *)(v1 + 144));
    std::allocator<std::pair<std::string const,data::ChessCardType>>::allocator((std::allocator<std::pair<const std::string,data::ChessCardType> > *const)(v1 + 80));
    std::unordered_map<std::string,data::ChessCardType>::unordered_map(
      &data::getChessCardTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::ChessCardType> >)__PAIR128__(4LL, v1 + 160),
      0LL,
      (const std::unordered_map<std::string,data::ChessCardType>::hasher *)(v1 + 48),
      (const std::unordered_map<std::string,data::ChessCardType>::key_equal *)(v1 + 64),
      (const std::unordered_map<std::string,data::ChessCardType>::allocator_type *)(v1 + 80));
    __cxa_guard_release(&`guard variable for'data::getChessCardTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::ChessCardType>::~unordered_map,
      &data::getChessCardTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::ChessCardType>>::~allocator((std::allocator<std::pair<const std::string,data::ChessCardType> > *const)(v1 + 80));
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::ChessCardType> *)(v1 + 320);
          i != (std::pair<const std::string,data::ChessCardType> *)(v1 + 160);
          std::pair<std::string const,data::ChessCardType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getChessCardTypeNameMap[abi:cxx11](void)::m;
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

// Line 300: range 00000000127B548F-00000000127B5C5F
const std::map<data::ChessCardType,std::pair<std::string,std::string >> *__cdecl data::getChessCardTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::ChessCardType,std::pair<std::string,std::string > > *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getChessCardTypeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getChessCardTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getChessCardTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 64, v0);
    *(_DWORD *)(v1 + 64) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[10],char const(&)[17],true>(
      (std::pair<std::string,std::string > *const)(v1 + 128),
      (const char (*)[10])byte_1A974FA0,
      (const char (*)[17])"CHESS_CARD_CURSE");
    std::pair<data::ChessCardType const,std::pair<std::string,std::string>>::pair<data::ChessCardType,true>(
      (std::pair<const data::ChessCardType,std::pair<std::string,std::string > > *const)(v1 + 512),
      (data::ChessCardType *)(v1 + 64),
      (const std::pair<std::string,std::string > *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v1 + 64);
    *(_DWORD *)(v1 + 80) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[10],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 224),
      (const char (*)[10])byte_1A974FE0,
      (const char (*)[21])"CHESS_CARD_MECHANISM");
    std::pair<data::ChessCardType const,std::pair<std::string,std::string>>::pair<data::ChessCardType,true>(
      (std::pair<const data::ChessCardType,std::pair<std::string,std::string > > *const)(v1 + 584),
      (data::ChessCardType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 224));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[10],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 320),
      (const char (*)[10])byte_1A975020,
      (const char (*)[21])"CHESS_CARD_CHALLENGE");
    std::pair<data::ChessCardType const,std::pair<std::string,std::string>>::pair<data::ChessCardType,true>(
      (std::pair<const data::ChessCardType,std::pair<std::string,std::string > > *const)(v1 + 656),
      (data::ChessCardType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 320));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 3;
    std::pair<std::string,std::string>::pair<char const(&)[10],char const(&)[22],true>(
      (std::pair<std::string,std::string > *const)(v1 + 416),
      (const char (*)[10])byte_1A975060,
      (const char (*)[22])"CHESS_CARD_STRENGTHEN");
    std::pair<data::ChessCardType const,std::pair<std::string,std::string>>::pair<data::ChessCardType,true>(
      (std::pair<const data::ChessCardType,std::pair<std::string,std::string > > *const)(v1 + 728),
      (data::ChessCardType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 416));
    std::allocator<std::pair<data::ChessCardType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::ChessCardType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    std::map<data::ChessCardType,std::pair<std::string,std::string>>::map(
      &data::getChessCardTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::ChessCardType,std::pair<std::string,std::string > > >)__PAIR128__(4LL, v1 + 512),
      (const std::less<data::ChessCardType> *)(v1 + 32),
      (const std::map<data::ChessCardType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 48));
    __cxa_guard_release(&`guard variable for'data::getChessCardTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::ChessCardType,std::pair<std::string,std::string>>::~map,
      &data::getChessCardTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::ChessCardType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::ChessCardType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::ChessCardType,std::pair<std::string,std::string > > *)(v1 + 800);
          i != (std::pair<const data::ChessCardType,std::pair<std::string,std::string > > *)(v1 + 512);
          std::pair<data::ChessCardType const,std::pair<std::string,std::string>>::~pair(i) )
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
  return &data::getChessCardTypeEnumMap[abi:cxx11](void)::m;
};

// Line 312: range 00000000127B5C60-00000000127B5FD3
const char *__fastcall data::enumValToStr(data::ChessCardTargetType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::ChessCardTargetType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::ChessCardTargetType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 5 e:311 64 8 8 iter:314 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getChessCardTargetTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::ChessCardTargetType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::ChessCardTargetType,std::pair<std::string,std::string>>::find(map, (const std::map<data::ChessCardTargetType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::ChessCardTargetType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::ChessCardTargetType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::ChessCardTargetType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::ChessCardTargetType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "enumValToStr",
      317);
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
    result = "INVALID_ChessCardTargetType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::ChessCardTargetType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::ChessCardTargetType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 324: range 00000000127B5FD4-00000000127B658C
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::ChessCardTargetType>,false,true>::pointer v10; // rax
  data::ChessCardTargetType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::ChessCardTargetType> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:333 96 8 9 <unknown> 128 8 5 s:323 160 32 9 <unknown> 224 32 9 <unk"
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
    m = data::getChessCardTargetTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::ChessCardTargetType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ChessCardTargetType>::find(
                                                                                                m,
                                                                                                (const std::unordered_map<std::string,data::ChessCardTargetType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::ChessCardTargetType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::ChessCardTargetType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::ChessCardTargetType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ChessCardTargetType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ChessCardTargetType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
        "enumNameToVal",
        336);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::ChessCardTargetType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::ChessCardTargetType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "enumNameToVal",
      327);
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

// Line 345: range 00000000127B658D-00000000127B6F56
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::ChessCardTargetType> *i; // r14
  unsigned __int64 v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::ChessCardTargetType>,false,true>::pointer v12; // rax
  data::ChessCardTargetType second; // ecx
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
                        " <unknown> 144 8 6 it:358 176 8 9 <unknown> 208 8 5 s:344 240 32 9 <unknown> 304 32 9 <unknown> "
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::ChessCardTargetType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::ChessCardTargetType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, e);
      *(_DWORD *)(v2 + 112) = 1;
      std::pair<std::string const,data::ChessCardTargetType>::pair<char const(&)[7],data::ChessCardTargetType,true>(
        (std::pair<const std::string,data::ChessCardTargetType> *const)(v2 + 432),
        (const char (*)[7])byte_1A975580,
        (data::ChessCardTargetType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1A975580);
      *(_DWORD *)(v2 + 128) = 2;
      std::pair<std::string const,data::ChessCardTargetType>::pair<char const(&)[13],data::ChessCardTargetType,true>(
        (std::pair<const std::string,data::ChessCardTargetType> *const)(v2 + 472),
        (const char (*)[13])byte_1A9755C0,
        (data::ChessCardTargetType *)(v2 + 128));
      std::allocator<std::pair<std::string const,data::ChessCardTargetType>>::allocator((std::allocator<std::pair<const std::string,data::ChessCardTargetType> > *const)(v2 + 80));
      std::unordered_map<std::string,data::ChessCardTargetType>::unordered_map(
        &data::enumStrToVal(char const*,data::ChessCardTargetType &)::m,
        (std::initializer_list<std::pair<const std::string,data::ChessCardTargetType> >)__PAIR128__(2LL, v2 + 432),
        0LL,
        (const std::unordered_map<std::string,data::ChessCardTargetType>::hasher *)(v2 + 48),
        (const std::unordered_map<std::string,data::ChessCardTargetType>::key_equal *)(v2 + 64),
        (const std::unordered_map<std::string,data::ChessCardTargetType>::allocator_type *)(v2 + 80));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::ChessCardTargetType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::ChessCardTargetType>::~unordered_map,
        &data::enumStrToVal(char const*,data::ChessCardTargetType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::ChessCardTargetType>>::~allocator((std::allocator<std::pair<const std::string,data::ChessCardTargetType> > *const)(v2 + 80));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::ChessCardTargetType> *)(v2 + 512);
            i != (std::pair<const std::string,data::ChessCardTargetType> *)(v2 + 432);
            std::pair<std::string const,data::ChessCardTargetType>::~pair(i) )
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
    *(std::unordered_map<std::string,data::ChessCardTargetType>::iterator *)(v2 + 144) = std::unordered_map<std::string,data::ChessCardTargetType>::find(
                                                                                           &data::enumStrToVal(char const*,data::ChessCardTargetType &)::m,
                                                                                           (const std::unordered_map<std::string,data::ChessCardTargetType>::key_type *)(v2 + 304));
    std::string::~string((void *)(v2 + 304));
    *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 96);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, v2 + 304);
    *(std::unordered_map<std::string,data::ChessCardTargetType>::iterator *)(v2 + 176) = std::unordered_map<std::string,data::ChessCardTargetType>::end(&data::enumStrToVal(char const*,data::ChessCardTargetType &)::m);
    v9 = (char *)(v2 + 176);
    v10 = std::__detail::operator==<std::pair<std::string const,data::ChessCardTargetType>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ChessCardTargetType>,true> *)(v2 + 144),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ChessCardTargetType>,true> *)(v2 + 176));
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
        "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
        "enumStrToVal",
        361);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 368),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)(v2 + 208));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 368));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::ChessCardTargetType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::ChessCardTargetType>,false,true> *const)(v2 + 144));
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
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "enumStrToVal",
      348);
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

// Line 370: range 00000000127B6F57-00000000127B6F6D
const char *__cdecl data::getDescription(data::ChessCardTargetType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 375: range 00000000127B6F6E-00000000127B7123
bool __cdecl data::isValidChessCardTargetType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::ChessCardTargetType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::ChessCardTargetType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:376 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidChessCardTargetType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getChessCardTargetTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::ChessCardTargetType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::ChessCardTargetType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getChessCardTargetTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::ChessCardTargetType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::ChessCardTargetType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::ChessCardTargetType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::ChessCardTargetType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::ChessCardTargetType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 381: range 00000000127B7124-00000000127B7285
bool __cdecl data::isValidChessCardTargetTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::ChessCardTargetType> *v5; // rcx
  const std::unordered_map<std::string,data::ChessCardTargetType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidChessCardTargetTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getChessCardTargetTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::ChessCardTargetType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ChessCardTargetType>::end(v5);
  v6 = data::getChessCardTargetTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::ChessCardTargetType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::ChessCardTargetType>::find(
                                                                                              v6,
                                                                                              name);
  result = std::__detail::operator!=<std::pair<std::string const,data::ChessCardTargetType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ChessCardTargetType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ChessCardTargetType>,true> *)(v2 + 64));
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

// Line 386: range 00000000127B7286-00000000127B7748
const std::unordered_map<std::string,data::ChessCardTargetType> *__cdecl data::getChessCardTargetTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::ChessCardTargetType> *i; // r14
  const std::unordered_map<std::string,data::ChessCardTargetType> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getChessCardTargetTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556927;
  v3[536862723] = -234556924;
  v3[536862727] = -218103808;
  v3[536862728] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getChessCardTargetTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getChessCardTargetTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string const,data::ChessCardTargetType>::pair<char const(&)[26],data::ChessCardTargetType,true>(
      (std::pair<const std::string,data::ChessCardTargetType> *const)(v1 + 128),
      (const char (*)[26])"CHESS_CARD_TARGET_DEFAULT",
      (data::ChessCardTargetType *)(v1 + 80));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, "CHESS_CARD_TARGET_DEFAULT");
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string const,data::ChessCardTargetType>::pair<char const(&)[22],data::ChessCardTargetType,true>(
      (std::pair<const std::string,data::ChessCardTargetType> *const)(v1 + 168),
      (const char (*)[22])"CHESS_CARD_TARGET_ALL",
      (data::ChessCardTargetType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "CHESS_CARD_TARGET_ALL");
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string const,data::ChessCardTargetType>::pair<char const(&)[26],data::ChessCardTargetType,true>(
      (std::pair<const std::string,data::ChessCardTargetType> *const)(v1 + 208),
      (const char (*)[26])"CHESS_CARD_TARGET_GADGETS",
      (data::ChessCardTargetType *)(v1 + 112));
    std::allocator<std::pair<std::string const,data::ChessCardTargetType>>::allocator((std::allocator<std::pair<const std::string,data::ChessCardTargetType> > *const)(v1 + 64));
    std::unordered_map<std::string,data::ChessCardTargetType>::unordered_map(
      &data::getChessCardTargetTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::ChessCardTargetType> >)__PAIR128__(3LL, v1 + 128),
      0LL,
      (const std::unordered_map<std::string,data::ChessCardTargetType>::hasher *)(v1 + 32),
      (const std::unordered_map<std::string,data::ChessCardTargetType>::key_equal *)(v1 + 48),
      (const std::unordered_map<std::string,data::ChessCardTargetType>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getChessCardTargetTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::ChessCardTargetType>::~unordered_map,
      &data::getChessCardTargetTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::ChessCardTargetType>>::~allocator((std::allocator<std::pair<const std::string,data::ChessCardTargetType> > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::ChessCardTargetType> *)(v1 + 248);
          i != (std::pair<const std::string,data::ChessCardTargetType> *)(v1 + 128);
          std::pair<std::string const,data::ChessCardTargetType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getChessCardTargetTypeNameMap[abi:cxx11](void)::m;
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

// Line 397: range 00000000127B7749-00000000127B7E47
const std::map<data::ChessCardTargetType,std::pair<std::string,std::string >> *__cdecl data::getChessCardTargetTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::ChessCardTargetType,std::pair<std::string,std::string > > *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getChessCardTargetTypeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getChessCardTargetTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getChessCardTargetTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[26],true>(
      (std::pair<std::string,std::string > *const)(v1 + 128),
      (const char (*)[1])byte_1A936F20,
      (const char (*)[26])"CHESS_CARD_TARGET_DEFAULT");
    std::pair<data::ChessCardTargetType const,std::pair<std::string,std::string>>::pair<data::ChessCardTargetType,true>(
      (std::pair<const data::ChessCardTargetType,std::pair<std::string,std::string > > *const)(v1 + 416),
      (data::ChessCardTargetType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[22],true>(
      (std::pair<std::string,std::string > *const)(v1 + 224),
      (const char (*)[7])byte_1A975580,
      (const char (*)[22])"CHESS_CARD_TARGET_ALL");
    std::pair<data::ChessCardTargetType const,std::pair<std::string,std::string>>::pair<data::ChessCardTargetType,true>(
      (std::pair<const data::ChessCardTargetType,std::pair<std::string,std::string > > *const)(v1 + 488),
      (data::ChessCardTargetType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 224));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[26],true>(
      (std::pair<std::string,std::string > *const)(v1 + 320),
      (const char (*)[13])byte_1A9755C0,
      (const char (*)[26])"CHESS_CARD_TARGET_GADGETS");
    std::pair<data::ChessCardTargetType const,std::pair<std::string,std::string>>::pair<data::ChessCardTargetType,true>(
      (std::pair<const data::ChessCardTargetType,std::pair<std::string,std::string > > *const)(v1 + 560),
      (data::ChessCardTargetType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 320));
    std::allocator<std::pair<data::ChessCardTargetType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::ChessCardTargetType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    std::map<data::ChessCardTargetType,std::pair<std::string,std::string>>::map(
      &data::getChessCardTargetTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::ChessCardTargetType,std::pair<std::string,std::string > > >)__PAIR128__(3LL, v1 + 416),
      (const std::less<data::ChessCardTargetType> *)(v1 + 48),
      (const std::map<data::ChessCardTargetType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getChessCardTargetTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::ChessCardTargetType,std::pair<std::string,std::string>>::~map,
      &data::getChessCardTargetTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::ChessCardTargetType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::ChessCardTargetType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::ChessCardTargetType,std::pair<std::string,std::string > > *)(v1 + 632);
          i != (std::pair<const data::ChessCardTargetType,std::pair<std::string,std::string > > *)(v1 + 416);
          std::pair<data::ChessCardTargetType const,std::pair<std::string,std::string>>::~pair(i) )
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
  return &data::getChessCardTargetTypeEnumMap[abi:cxx11](void)::m;
};

// Line 408: range 00000000127B7E48-00000000127B81BB
const char *__fastcall data::enumValToStr(data::ChessCardNumericalModificationType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::ChessCardNumericalModificationType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::ChessCardNumericalModificationType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 5 e:407 64 8 8 iter:410 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getChessCardNumericalModificationTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::ChessCardNumericalModificationType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::ChessCardNumericalModificationType,std::pair<std::string,std::string>>::find(map, (const std::map<data::ChessCardNumericalModificationType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::ChessCardNumericalModificationType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::ChessCardNumericalModificationType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::ChessCardNumericalModificationType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::ChessCardNumericalModificationType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "enumValToStr",
      413);
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
    result = "INVALID_ChessCardNumericalModificationType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::ChessCardNumericalModificationType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::ChessCardNumericalModificationType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 420: range 00000000127B81BC-00000000127B8774
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::ChessCardNumericalModificationType>,false,true>::pointer v10; // rax
  data::ChessCardNumericalModificationType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::ChessCardNumericalModificationType> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:429 96 8 9 <unknown> 128 8 5 s:419 160 32 9 <unknown> 224 32 9 <unk"
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
    m = data::getChessCardNumericalModificationTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::ChessCardNumericalModificationType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ChessCardNumericalModificationType>::find(m, (const std::unordered_map<std::string,data::ChessCardNumericalModificationType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::ChessCardNumericalModificationType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::ChessCardNumericalModificationType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::ChessCardNumericalModificationType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ChessCardNumericalModificationType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ChessCardNumericalModificationType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
        "enumNameToVal",
        432);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::ChessCardNumericalModificationType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::ChessCardNumericalModificationType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "enumNameToVal",
      423);
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

// Line 441: range 00000000127B8775-00000000127B9273
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::ChessCardNumericalModificationType> *i; // r14
  _DWORD *v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::ChessCardNumericalModificationType>,false,true>::pointer v12; // rax
  data::ChessCardNumericalModificationType second; // ecx
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
                        "<unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 8 6 it:456 192 8 9 <unknown> 224 8 5 s:440 256"
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::ChessCardNumericalModificationType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::ChessCardNumericalModificationType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, e);
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::ChessCardNumericalModificationType>::pair<char const(&)[10],data::ChessCardNumericalModificationType,true>(
        (std::pair<const std::string,data::ChessCardNumericalModificationType> *const)(v2 + 448),
        (const char (*)[10])byte_1A975960,
        (data::ChessCardNumericalModificationType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, byte_1A975960);
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::ChessCardNumericalModificationType>::pair<char const(&)[7],data::ChessCardNumericalModificationType,true>(
        (std::pair<const std::string,data::ChessCardNumericalModificationType> *const)(v2 + 488),
        (const char (*)[7])byte_1A9759A0,
        (data::ChessCardNumericalModificationType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1A9759A0);
      *(_DWORD *)(v2 + 128) = 3;
      std::pair<std::string const,data::ChessCardNumericalModificationType>::pair<char const(&)[13],data::ChessCardNumericalModificationType,true>(
        (std::pair<const std::string,data::ChessCardNumericalModificationType> *const)(v2 + 528),
        (const char (*)[13])byte_1A9759E0,
        (data::ChessCardNumericalModificationType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, byte_1A9759E0);
      *(_DWORD *)(v2 + 144) = 4;
      std::pair<std::string const,data::ChessCardNumericalModificationType>::pair<char const(&)[13],data::ChessCardNumericalModificationType,true>(
        (std::pair<const std::string,data::ChessCardNumericalModificationType> *const)(v2 + 568),
        (const char (*)[13])byte_1A975A20,
        (data::ChessCardNumericalModificationType *)(v2 + 144));
      std::allocator<std::pair<std::string const,data::ChessCardNumericalModificationType>>::allocator((std::allocator<std::pair<const std::string,data::ChessCardNumericalModificationType> > *const)(v2 + 64));
      std::unordered_map<std::string,data::ChessCardNumericalModificationType>::unordered_map(
        &data::enumStrToVal(char const*,data::ChessCardNumericalModificationType &)::m,
        (std::initializer_list<std::pair<const std::string,data::ChessCardNumericalModificationType> >)__PAIR128__(4LL, v2 + 448),
        0LL,
        (const std::unordered_map<std::string,data::ChessCardNumericalModificationType>::hasher *)(v2 + 32),
        (const std::unordered_map<std::string,data::ChessCardNumericalModificationType>::key_equal *)(v2 + 48),
        (const std::unordered_map<std::string,data::ChessCardNumericalModificationType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::ChessCardNumericalModificationType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::ChessCardNumericalModificationType>::~unordered_map,
        &data::enumStrToVal(char const*,data::ChessCardNumericalModificationType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::ChessCardNumericalModificationType>>::~allocator((std::allocator<std::pair<const std::string,data::ChessCardNumericalModificationType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::ChessCardNumericalModificationType> *)(v2 + 608);
            i != (std::pair<const std::string,data::ChessCardNumericalModificationType> *)(v2 + 448);
            std::pair<std::string const,data::ChessCardNumericalModificationType>::~pair(i) )
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
    *(std::unordered_map<std::string,data::ChessCardNumericalModificationType>::iterator *)(v2 + 160) = std::unordered_map<std::string,data::ChessCardNumericalModificationType>::find(&data::enumStrToVal(char const*,data::ChessCardNumericalModificationType &)::m, (const std::unordered_map<std::string,data::ChessCardNumericalModificationType>::key_type *)(v2 + 320));
    std::string::~string((void *)(v2 + 320));
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 80);
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, v2 + 320);
    *(std::unordered_map<std::string,data::ChessCardNumericalModificationType>::iterator *)(v2 + 192) = std::unordered_map<std::string,data::ChessCardNumericalModificationType>::end(&data::enumStrToVal(char const*,data::ChessCardNumericalModificationType &)::m);
    v9 = (char *)(v2 + 192);
    v10 = std::__detail::operator==<std::pair<std::string const,data::ChessCardNumericalModificationType>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ChessCardNumericalModificationType>,true> *)(v2 + 160),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ChessCardNumericalModificationType>,true> *)(v2 + 192));
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
        "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
        "enumStrToVal",
        459);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 384),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)(v2 + 224));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::ChessCardNumericalModificationType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::ChessCardNumericalModificationType>,false,true> *const)(v2 + 160));
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
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "enumStrToVal",
      444);
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

// Line 468: range 00000000127B9274-00000000127B928A
const char *__cdecl data::getDescription(data::ChessCardNumericalModificationType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 473: range 00000000127B928B-00000000127B9440
bool __cdecl data::isValidChessCardNumericalModificationType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::ChessCardNumericalModificationType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::ChessCardNumericalModificationType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:474 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidChessCardNumericalModificationType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getChessCardNumericalModificationTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::ChessCardNumericalModificationType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::ChessCardNumericalModificationType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getChessCardNumericalModificationTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::ChessCardNumericalModificationType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::ChessCardNumericalModificationType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::ChessCardNumericalModificationType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::ChessCardNumericalModificationType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::ChessCardNumericalModificationType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 479: range 00000000127B9441-00000000127B95A2
bool __cdecl data::isValidChessCardNumericalModificationTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::ChessCardNumericalModificationType> *v5; // rcx
  const std::unordered_map<std::string,data::ChessCardNumericalModificationType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidChessCardNumericalModificationTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getChessCardNumericalModificationTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::ChessCardNumericalModificationType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ChessCardNumericalModificationType>::end(v5);
  v6 = data::getChessCardNumericalModificationTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::ChessCardNumericalModificationType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::ChessCardNumericalModificationType>::find(v6, name);
  result = std::__detail::operator!=<std::pair<std::string const,data::ChessCardNumericalModificationType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ChessCardNumericalModificationType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ChessCardNumericalModificationType>,true> *)(v2 + 64));
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

// Line 484: range 00000000127B95A3-00000000127B9BBD
const std::unordered_map<std::string,data::ChessCardNumericalModificationType> *__cdecl data::getChessCardNumericalModificationTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::ChessCardNumericalModificationType> *i; // r14
  const std::unordered_map<std::string,data::ChessCardNumericalModificationType> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getChessCardNumericalModificationTypeNameMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getChessCardNumericalModificationTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getChessCardNumericalModificationTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v0);
    *(_DWORD *)(v1 + 96) = 0;
    std::pair<std::string const,data::ChessCardNumericalModificationType>::pair<char const(&)[28],data::ChessCardNumericalModificationType,true>(
      (std::pair<const std::string,data::ChessCardNumericalModificationType> *const)(v1 + 176),
      (const char (*)[28])"CARD_NUMERICAL_DEFAULT_TYPE",
      (data::ChessCardNumericalModificationType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "CARD_NUMERICAL_DEFAULT_TYPE");
    *(_DWORD *)(v1 + 112) = 1;
    std::pair<std::string const,data::ChessCardNumericalModificationType>::pair<char const(&)[22],data::ChessCardNumericalModificationType,true>(
      (std::pair<const std::string,data::ChessCardNumericalModificationType> *const)(v1 + 216),
      (const char (*)[22])"CARD_NUMERICAL_ATTACK",
      (data::ChessCardNumericalModificationType *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, "CARD_NUMERICAL_ATTACK");
    *(_DWORD *)(v1 + 128) = 2;
    std::pair<std::string const,data::ChessCardNumericalModificationType>::pair<char const(&)[23],data::ChessCardNumericalModificationType,true>(
      (std::pair<const std::string,data::ChessCardNumericalModificationType> *const)(v1 + 256),
      (const char (*)[23])"CARD_NUMERICAL_MASTERY",
      (data::ChessCardNumericalModificationType *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, "CARD_NUMERICAL_MASTERY");
    *(_DWORD *)(v1 + 144) = 3;
    std::pair<std::string const,data::ChessCardNumericalModificationType>::pair<char const(&)[31],data::ChessCardNumericalModificationType,true>(
      (std::pair<const std::string,data::ChessCardNumericalModificationType> *const)(v1 + 296),
      (const char (*)[31])"CARD_NUMERICAL_ATTACK_INTERVAL",
      (data::ChessCardNumericalModificationType *)(v1 + 144));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, "CARD_NUMERICAL_ATTACK_INTERVAL");
    *(_DWORD *)(v1 + 160) = 4;
    std::pair<std::string const,data::ChessCardNumericalModificationType>::pair<char const(&)[28],data::ChessCardNumericalModificationType,true>(
      (std::pair<const std::string,data::ChessCardNumericalModificationType> *const)(v1 + 336),
      (const char (*)[28])"CARD_NUMERICAL_ATTACK_RANGE",
      (data::ChessCardNumericalModificationType *)(v1 + 160));
    std::allocator<std::pair<std::string const,data::ChessCardNumericalModificationType>>::allocator((std::allocator<std::pair<const std::string,data::ChessCardNumericalModificationType> > *const)(v1 + 80));
    std::unordered_map<std::string,data::ChessCardNumericalModificationType>::unordered_map(
      &data::getChessCardNumericalModificationTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::ChessCardNumericalModificationType> >)__PAIR128__(5LL, v1 + 176),
      0LL,
      (const std::unordered_map<std::string,data::ChessCardNumericalModificationType>::hasher *)(v1 + 48),
      (const std::unordered_map<std::string,data::ChessCardNumericalModificationType>::key_equal *)(v1 + 64),
      (const std::unordered_map<std::string,data::ChessCardNumericalModificationType>::allocator_type *)(v1 + 80));
    __cxa_guard_release(&`guard variable for'data::getChessCardNumericalModificationTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::ChessCardNumericalModificationType>::~unordered_map,
      &data::getChessCardNumericalModificationTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::ChessCardNumericalModificationType>>::~allocator((std::allocator<std::pair<const std::string,data::ChessCardNumericalModificationType> > *const)(v1 + 80));
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::ChessCardNumericalModificationType> *)(v1 + 376);
          i != (std::pair<const std::string,data::ChessCardNumericalModificationType> *)(v1 + 176);
          std::pair<std::string const,data::ChessCardNumericalModificationType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getChessCardNumericalModificationTypeNameMap[abi:cxx11](void)::m;
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

// Line 497: range 00000000127B9BBE-00000000127BA483
const std::map<data::ChessCardNumericalModificationType,std::pair<std::string,std::string >> *__cdecl data::getChessCardNumericalModificationTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::ChessCardNumericalModificationType,std::pair<std::string,std::string > > *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getChessCardNumericalModificationTypeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getChessCardNumericalModificationTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getChessCardNumericalModificationTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 64, v0);
    *(_DWORD *)(v1 + 64) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[28],true>(
      (std::pair<std::string,std::string > *const)(v1 + 144),
      (const char (*)[1])byte_1A936F20,
      (const char (*)[28])"CARD_NUMERICAL_DEFAULT_TYPE");
    std::pair<data::ChessCardNumericalModificationType const,std::pair<std::string,std::string>>::pair<data::ChessCardNumericalModificationType,true>(
      (std::pair<const data::ChessCardNumericalModificationType,std::pair<std::string,std::string > > *const)(v1 + 624),
      (data::ChessCardNumericalModificationType *)(v1 + 64),
      (const std::pair<std::string,std::string > *)(v1 + 144));
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v1 + 64);
    *(_DWORD *)(v1 + 80) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[10],char const(&)[22],true>(
      (std::pair<std::string,std::string > *const)(v1 + 240),
      (const char (*)[10])byte_1A975960,
      (const char (*)[22])"CARD_NUMERICAL_ATTACK");
    std::pair<data::ChessCardNumericalModificationType const,std::pair<std::string,std::string>>::pair<data::ChessCardNumericalModificationType,true>(
      (std::pair<const data::ChessCardNumericalModificationType,std::pair<std::string,std::string > > *const)(v1 + 696),
      (data::ChessCardNumericalModificationType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 240));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[23],true>(
      (std::pair<std::string,std::string > *const)(v1 + 336),
      (const char (*)[7])byte_1A9759A0,
      (const char (*)[23])"CARD_NUMERICAL_MASTERY");
    std::pair<data::ChessCardNumericalModificationType const,std::pair<std::string,std::string>>::pair<data::ChessCardNumericalModificationType,true>(
      (std::pair<const data::ChessCardNumericalModificationType,std::pair<std::string,std::string > > *const)(v1 + 768),
      (data::ChessCardNumericalModificationType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 336));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 3;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[31],true>(
      (std::pair<std::string,std::string > *const)(v1 + 432),
      (const char (*)[13])byte_1A9759E0,
      (const char (*)[31])"CARD_NUMERICAL_ATTACK_INTERVAL");
    std::pair<data::ChessCardNumericalModificationType const,std::pair<std::string,std::string>>::pair<data::ChessCardNumericalModificationType,true>(
      (std::pair<const data::ChessCardNumericalModificationType,std::pair<std::string,std::string > > *const)(v1 + 840),
      (data::ChessCardNumericalModificationType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 432));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, v1 + 112);
    *(_DWORD *)(v1 + 128) = 4;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[28],true>(
      (std::pair<std::string,std::string > *const)(v1 + 528),
      (const char (*)[13])byte_1A975A20,
      (const char (*)[28])"CARD_NUMERICAL_ATTACK_RANGE");
    std::pair<data::ChessCardNumericalModificationType const,std::pair<std::string,std::string>>::pair<data::ChessCardNumericalModificationType,true>(
      (std::pair<const data::ChessCardNumericalModificationType,std::pair<std::string,std::string > > *const)(v1 + 912),
      (data::ChessCardNumericalModificationType *)(v1 + 128),
      (const std::pair<std::string,std::string > *)(v1 + 528));
    std::allocator<std::pair<data::ChessCardNumericalModificationType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::ChessCardNumericalModificationType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    std::map<data::ChessCardNumericalModificationType,std::pair<std::string,std::string>>::map(
      &data::getChessCardNumericalModificationTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::ChessCardNumericalModificationType,std::pair<std::string,std::string > > >)__PAIR128__(5LL, v1 + 624),
      (const std::less<data::ChessCardNumericalModificationType> *)(v1 + 32),
      (const std::map<data::ChessCardNumericalModificationType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 48));
    __cxa_guard_release(&`guard variable for'data::getChessCardNumericalModificationTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::ChessCardNumericalModificationType,std::pair<std::string,std::string>>::~map,
      &data::getChessCardNumericalModificationTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::ChessCardNumericalModificationType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::ChessCardNumericalModificationType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::ChessCardNumericalModificationType,std::pair<std::string,std::string > > *)(v1 + 984);
          i != (std::pair<const data::ChessCardNumericalModificationType,std::pair<std::string,std::string > > *)(v1 + 624);
          std::pair<data::ChessCardNumericalModificationType const,std::pair<std::string,std::string>>::~pair(i) )
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
  return &data::getChessCardNumericalModificationTypeEnumMap[abi:cxx11](void)::m;
};

// Line 510: range 00000000127BA484-00000000127BA7F7
const char *__fastcall data::enumValToStr(data::ChessCardNumericalModificationMode e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::ChessCardNumericalModificationMode,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::ChessCardNumericalModificationMode,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 5 e:509 64 8 8 iter:512 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getChessCardNumericalModificationModeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::ChessCardNumericalModificationMode,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::ChessCardNumericalModificationMode,std::pair<std::string,std::string>>::find(map, (const std::map<data::ChessCardNumericalModificationMode,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::ChessCardNumericalModificationMode,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::ChessCardNumericalModificationMode,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::ChessCardNumericalModificationMode,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::ChessCardNumericalModificationMode,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "enumValToStr",
      515);
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
    result = "INVALID_ChessCardNumericalModificationMode";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::ChessCardNumericalModificationMode const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::ChessCardNumericalModificationMode,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 522: range 00000000127BA7F8-00000000127BADB0
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::ChessCardNumericalModificationMode>,false,true>::pointer v10; // rax
  data::ChessCardNumericalModificationMode second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::ChessCardNumericalModificationMode> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:531 96 8 9 <unknown> 128 8 5 s:521 160 32 9 <unknown> 224 32 9 <unk"
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
    m = data::getChessCardNumericalModificationModeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::ChessCardNumericalModificationMode>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ChessCardNumericalModificationMode>::find(m, (const std::unordered_map<std::string,data::ChessCardNumericalModificationMode>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::ChessCardNumericalModificationMode>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::ChessCardNumericalModificationMode>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::ChessCardNumericalModificationMode>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ChessCardNumericalModificationMode>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ChessCardNumericalModificationMode>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
        "enumNameToVal",
        534);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::ChessCardNumericalModificationMode>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::ChessCardNumericalModificationMode>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "enumNameToVal",
      525);
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

// Line 543: range 00000000127BADB1-00000000127BB77A
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::ChessCardNumericalModificationMode> *i; // r14
  unsigned __int64 v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::ChessCardNumericalModificationMode>,false,true>::pointer v12; // rax
  data::ChessCardNumericalModificationMode second; // ecx
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
                        " <unknown> 144 8 6 it:556 176 8 9 <unknown> 208 8 5 s:542 240 32 9 <unknown> 304 32 9 <unknown> "
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::ChessCardNumericalModificationMode &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::ChessCardNumericalModificationMode &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, e);
      *(_DWORD *)(v2 + 112) = 1;
      std::pair<std::string const,data::ChessCardNumericalModificationMode>::pair<char const(&)[7],data::ChessCardNumericalModificationMode,true>(
        (std::pair<const std::string,data::ChessCardNumericalModificationMode> *const)(v2 + 432),
        (const char (*)[7])byte_1A975E20,
        (data::ChessCardNumericalModificationMode *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1A975E20);
      *(_DWORD *)(v2 + 128) = 2;
      std::pair<std::string const,data::ChessCardNumericalModificationMode>::pair<char const(&)[10],data::ChessCardNumericalModificationMode,true>(
        (std::pair<const std::string,data::ChessCardNumericalModificationMode> *const)(v2 + 472),
        (const char (*)[10])byte_1A975E60,
        (data::ChessCardNumericalModificationMode *)(v2 + 128));
      std::allocator<std::pair<std::string const,data::ChessCardNumericalModificationMode>>::allocator((std::allocator<std::pair<const std::string,data::ChessCardNumericalModificationMode> > *const)(v2 + 80));
      std::unordered_map<std::string,data::ChessCardNumericalModificationMode>::unordered_map(
        &data::enumStrToVal(char const*,data::ChessCardNumericalModificationMode &)::m,
        (std::initializer_list<std::pair<const std::string,data::ChessCardNumericalModificationMode> >)__PAIR128__(2LL, v2 + 432),
        0LL,
        (const std::unordered_map<std::string,data::ChessCardNumericalModificationMode>::hasher *)(v2 + 48),
        (const std::unordered_map<std::string,data::ChessCardNumericalModificationMode>::key_equal *)(v2 + 64),
        (const std::unordered_map<std::string,data::ChessCardNumericalModificationMode>::allocator_type *)(v2 + 80));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::ChessCardNumericalModificationMode &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::ChessCardNumericalModificationMode>::~unordered_map,
        &data::enumStrToVal(char const*,data::ChessCardNumericalModificationMode &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::ChessCardNumericalModificationMode>>::~allocator((std::allocator<std::pair<const std::string,data::ChessCardNumericalModificationMode> > *const)(v2 + 80));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::ChessCardNumericalModificationMode> *)(v2 + 512);
            i != (std::pair<const std::string,data::ChessCardNumericalModificationMode> *)(v2 + 432);
            std::pair<std::string const,data::ChessCardNumericalModificationMode>::~pair(i) )
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
    *(std::unordered_map<std::string,data::ChessCardNumericalModificationMode>::iterator *)(v2 + 144) = std::unordered_map<std::string,data::ChessCardNumericalModificationMode>::find(&data::enumStrToVal(char const*,data::ChessCardNumericalModificationMode &)::m, (const std::unordered_map<std::string,data::ChessCardNumericalModificationMode>::key_type *)(v2 + 304));
    std::string::~string((void *)(v2 + 304));
    *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 96);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, v2 + 304);
    *(std::unordered_map<std::string,data::ChessCardNumericalModificationMode>::iterator *)(v2 + 176) = std::unordered_map<std::string,data::ChessCardNumericalModificationMode>::end(&data::enumStrToVal(char const*,data::ChessCardNumericalModificationMode &)::m);
    v9 = (char *)(v2 + 176);
    v10 = std::__detail::operator==<std::pair<std::string const,data::ChessCardNumericalModificationMode>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ChessCardNumericalModificationMode>,true> *)(v2 + 144),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ChessCardNumericalModificationMode>,true> *)(v2 + 176));
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
        "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
        "enumStrToVal",
        559);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 368),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)(v2 + 208));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 368));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::ChessCardNumericalModificationMode>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::ChessCardNumericalModificationMode>,false,true> *const)(v2 + 144));
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
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "enumStrToVal",
      546);
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

// Line 568: range 00000000127BB77B-00000000127BB791
const char *__cdecl data::getDescription(data::ChessCardNumericalModificationMode e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 573: range 00000000127BB792-00000000127BB947
bool __cdecl data::isValidChessCardNumericalModificationMode(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::ChessCardNumericalModificationMode,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::ChessCardNumericalModificationMode,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:574 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidChessCardNumericalModificationMode;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getChessCardNumericalModificationModeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::ChessCardNumericalModificationMode,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::ChessCardNumericalModificationMode,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getChessCardNumericalModificationModeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::ChessCardNumericalModificationMode,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::ChessCardNumericalModificationMode,std::pair<std::string,std::string>>::find(v6, (const std::map<data::ChessCardNumericalModificationMode,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::ChessCardNumericalModificationMode,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::ChessCardNumericalModificationMode,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 579: range 00000000127BB948-00000000127BBAA9
bool __cdecl data::isValidChessCardNumericalModificationModeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::ChessCardNumericalModificationMode> *v5; // rcx
  const std::unordered_map<std::string,data::ChessCardNumericalModificationMode> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidChessCardNumericalModificationModeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getChessCardNumericalModificationModeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::ChessCardNumericalModificationMode>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ChessCardNumericalModificationMode>::end(v5);
  v6 = data::getChessCardNumericalModificationModeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::ChessCardNumericalModificationMode>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::ChessCardNumericalModificationMode>::find(v6, name);
  result = std::__detail::operator!=<std::pair<std::string const,data::ChessCardNumericalModificationMode>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ChessCardNumericalModificationMode>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ChessCardNumericalModificationMode>,true> *)(v2 + 64));
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

// Line 584: range 00000000127BBAAA-00000000127BBF6C
const std::unordered_map<std::string,data::ChessCardNumericalModificationMode> *__cdecl data::getChessCardNumericalModificationModeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::ChessCardNumericalModificationMode> *i; // r14
  const std::unordered_map<std::string,data::ChessCardNumericalModificationMode> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getChessCardNumericalModificationModeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556927;
  v3[536862723] = -234556924;
  v3[536862727] = -218103808;
  v3[536862728] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getChessCardNumericalModificationModeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getChessCardNumericalModificationModeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string const,data::ChessCardNumericalModificationMode>::pair<char const(&)[28],data::ChessCardNumericalModificationMode,true>(
      (std::pair<const std::string,data::ChessCardNumericalModificationMode> *const)(v1 + 128),
      (const char (*)[28])"CARD_NUMERICAL_DEFAULT_MODE",
      (data::ChessCardNumericalModificationMode *)(v1 + 80));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, "CARD_NUMERICAL_DEFAULT_MODE");
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string const,data::ChessCardNumericalModificationMode>::pair<char const(&)[20],data::ChessCardNumericalModificationMode,true>(
      (std::pair<const std::string,data::ChessCardNumericalModificationMode> *const)(v1 + 168),
      (const char (*)[20])"CARD_NUMERICAL_BASE",
      (data::ChessCardNumericalModificationMode *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "CARD_NUMERICAL_BASE");
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string const,data::ChessCardNumericalModificationMode>::pair<char const(&)[26],data::ChessCardNumericalModificationMode,true>(
      (std::pair<const std::string,data::ChessCardNumericalModificationMode> *const)(v1 + 208),
      (const char (*)[26])"CARD_NUMERICAL_PERCENTAGE",
      (data::ChessCardNumericalModificationMode *)(v1 + 112));
    std::allocator<std::pair<std::string const,data::ChessCardNumericalModificationMode>>::allocator((std::allocator<std::pair<const std::string,data::ChessCardNumericalModificationMode> > *const)(v1 + 64));
    std::unordered_map<std::string,data::ChessCardNumericalModificationMode>::unordered_map(
      &data::getChessCardNumericalModificationModeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::ChessCardNumericalModificationMode> >)__PAIR128__(3LL, v1 + 128),
      0LL,
      (const std::unordered_map<std::string,data::ChessCardNumericalModificationMode>::hasher *)(v1 + 32),
      (const std::unordered_map<std::string,data::ChessCardNumericalModificationMode>::key_equal *)(v1 + 48),
      (const std::unordered_map<std::string,data::ChessCardNumericalModificationMode>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getChessCardNumericalModificationModeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::ChessCardNumericalModificationMode>::~unordered_map,
      &data::getChessCardNumericalModificationModeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::ChessCardNumericalModificationMode>>::~allocator((std::allocator<std::pair<const std::string,data::ChessCardNumericalModificationMode> > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::ChessCardNumericalModificationMode> *)(v1 + 248);
          i != (std::pair<const std::string,data::ChessCardNumericalModificationMode> *)(v1 + 128);
          std::pair<std::string const,data::ChessCardNumericalModificationMode>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getChessCardNumericalModificationModeNameMap[abi:cxx11](void)::m;
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

// Line 595: range 00000000127BBF6D-00000000127BC66B
const std::map<data::ChessCardNumericalModificationMode,std::pair<std::string,std::string >> *__cdecl data::getChessCardNumericalModificationModeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::ChessCardNumericalModificationMode,std::pair<std::string,std::string > > *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getChessCardNumericalModificationModeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getChessCardNumericalModificationModeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getChessCardNumericalModificationModeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[28],true>(
      (std::pair<std::string,std::string > *const)(v1 + 128),
      (const char (*)[1])byte_1A936F20,
      (const char (*)[28])"CARD_NUMERICAL_DEFAULT_MODE");
    std::pair<data::ChessCardNumericalModificationMode const,std::pair<std::string,std::string>>::pair<data::ChessCardNumericalModificationMode,true>(
      (std::pair<const data::ChessCardNumericalModificationMode,std::pair<std::string,std::string > > *const)(v1 + 416),
      (data::ChessCardNumericalModificationMode *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[20],true>(
      (std::pair<std::string,std::string > *const)(v1 + 224),
      (const char (*)[7])byte_1A975E20,
      (const char (*)[20])"CARD_NUMERICAL_BASE");
    std::pair<data::ChessCardNumericalModificationMode const,std::pair<std::string,std::string>>::pair<data::ChessCardNumericalModificationMode,true>(
      (std::pair<const data::ChessCardNumericalModificationMode,std::pair<std::string,std::string > > *const)(v1 + 488),
      (data::ChessCardNumericalModificationMode *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 224));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[10],char const(&)[26],true>(
      (std::pair<std::string,std::string > *const)(v1 + 320),
      (const char (*)[10])byte_1A975E60,
      (const char (*)[26])"CARD_NUMERICAL_PERCENTAGE");
    std::pair<data::ChessCardNumericalModificationMode const,std::pair<std::string,std::string>>::pair<data::ChessCardNumericalModificationMode,true>(
      (std::pair<const data::ChessCardNumericalModificationMode,std::pair<std::string,std::string > > *const)(v1 + 560),
      (data::ChessCardNumericalModificationMode *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 320));
    std::allocator<std::pair<data::ChessCardNumericalModificationMode const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::ChessCardNumericalModificationMode,std::pair<std::string,std::string > > > *const)(v1 + 64));
    std::map<data::ChessCardNumericalModificationMode,std::pair<std::string,std::string>>::map(
      &data::getChessCardNumericalModificationModeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::ChessCardNumericalModificationMode,std::pair<std::string,std::string > > >)__PAIR128__(3LL, v1 + 416),
      (const std::less<data::ChessCardNumericalModificationMode> *)(v1 + 48),
      (const std::map<data::ChessCardNumericalModificationMode,std::pair<std::string,std::string >>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getChessCardNumericalModificationModeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::ChessCardNumericalModificationMode,std::pair<std::string,std::string>>::~map,
      &data::getChessCardNumericalModificationModeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::ChessCardNumericalModificationMode const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::ChessCardNumericalModificationMode,std::pair<std::string,std::string > > > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::ChessCardNumericalModificationMode,std::pair<std::string,std::string > > *)(v1 + 632);
          i != (std::pair<const data::ChessCardNumericalModificationMode,std::pair<std::string,std::string > > *)(v1 + 416);
          std::pair<data::ChessCardNumericalModificationMode const,std::pair<std::string,std::string>>::~pair(i) )
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
  return &data::getChessCardNumericalModificationModeEnumMap[abi:cxx11](void)::m;
};

// Line 606: range 00000000127BC66C-00000000127BC9DF
const char *__fastcall data::enumValToStr(data::ChessCardEffectType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::ChessCardEffectType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::ChessCardEffectType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 5 e:605 64 8 8 iter:608 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getChessCardEffectTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::ChessCardEffectType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::ChessCardEffectType,std::pair<std::string,std::string>>::find(map, (const std::map<data::ChessCardEffectType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::ChessCardEffectType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::ChessCardEffectType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::ChessCardEffectType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::ChessCardEffectType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "enumValToStr",
      611);
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
    result = "INVALID_ChessCardEffectType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::ChessCardEffectType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::ChessCardEffectType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 618: range 00000000127BC9E0-00000000127BCF98
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::ChessCardEffectType>,false,true>::pointer v10; // rax
  data::ChessCardEffectType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::ChessCardEffectType> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:627 96 8 9 <unknown> 128 8 5 s:617 160 32 9 <unknown> 224 32 9 <unk"
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
    m = data::getChessCardEffectTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::ChessCardEffectType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ChessCardEffectType>::find(
                                                                                                m,
                                                                                                (const std::unordered_map<std::string,data::ChessCardEffectType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::ChessCardEffectType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::ChessCardEffectType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::ChessCardEffectType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ChessCardEffectType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ChessCardEffectType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
        "enumNameToVal",
        630);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::ChessCardEffectType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::ChessCardEffectType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "enumNameToVal",
      621);
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

// Line 639: range 00000000127BCF99-00000000127BE667
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int v5; // eax
  std::pair<const std::string,data::ChessCardEffectType> *i; // r14
  const char *v7; // rsi
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::ChessCardEffectType>,false,true>::pointer v11; // rax
  data::ChessCardEffectType second; // ecx
  char v13; // dl
  unsigned int v14; // ebx
  char v17[1968]; // [rsp+20h] [rbp-7B0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1920LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "36 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 4 9 <unknown> 112 4 9 "
                        "<unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unkno"
                        "wn> 208 4 9 <unknown> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 4 9 <unknown> 28"
                        "8 4 9 <unknown> 304 4 9 <unknown> 320 4 9 <unknown> 336 4 9 <unknown> 352 4 9 <unknown> 368 4 9 "
                        "<unknown> 384 4 9 <unknown> 400 4 9 <unknown> 416 4 9 <unknown> 432 4 9 <unknown> 448 4 9 <unkno"
                        "wn> 464 4 9 <unknown> 480 4 9 <unknown> 496 8 6 it:675 528 8 9 <unknown> 560 8 5 s:638 592 32 9 "
                        "<unknown> 656 32 9 <unknown> 720 32 9 <unknown> 784 1000 9 <unknown>";
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
  v4[536862731] = -234556924;
  v4[536862732] = -234556924;
  v4[536862733] = -234556924;
  v4[536862734] = -234556924;
  v4[536862735] = 61956;
  v4[536862735] = -234881024;
  v4[536862736] = 62194;
  v4[536862736] = -234881024;
  v4[536862737] = 62194;
  v4[536862737] = -234881024;
  v4[536862738] = 62194;
  v4[536862739] = -219021312;
  v4[536862740] = 62194;
  v4[536862741] = -219021312;
  v4[536862742] = 62194;
  v4[536862743] = -219021312;
  v4[536862744] = 62194;
  v4[536862775] = -218103808;
  v4[536862776] = -202116109;
  v4[536862777] = -202116109;
  v4[536862778] = -202116109;
  v4[536862779] = -202116109;
  *(_QWORD *)(v2 + 560) = s;
  if ( *(_QWORD *)(v2 + 560) )
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::ChessCardEffectType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::ChessCardEffectType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, e);
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::ChessCardEffectType>::pair<char const(&)[10],data::ChessCardEffectType,true>(
        (std::pair<const std::string,data::ChessCardEffectType> *const)(v2 + 784),
        (const char (*)[10])byte_1A976360,
        (data::ChessCardEffectType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, byte_1A976360);
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::ChessCardEffectType>::pair<char const(&)[22],data::ChessCardEffectType,true>(
        (std::pair<const std::string,data::ChessCardEffectType> *const)(v2 + 824),
        (const char (*)[22])byte_1A9763A0,
        (data::ChessCardEffectType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1A9763A0);
      *(_DWORD *)(v2 + 128) = 3;
      std::pair<std::string const,data::ChessCardEffectType>::pair<char const(&)[22],data::ChessCardEffectType,true>(
        (std::pair<const std::string,data::ChessCardEffectType> *const)(v2 + 864),
        (const char (*)[22])byte_1A9763E0,
        (data::ChessCardEffectType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, byte_1A9763E0);
      *(_DWORD *)(v2 + 144) = 4;
      std::pair<std::string const,data::ChessCardEffectType>::pair<char const(&)[19],data::ChessCardEffectType,true>(
        (std::pair<const std::string,data::ChessCardEffectType> *const)(v2 + 904),
        (const char (*)[19])byte_1A976420,
        (data::ChessCardEffectType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, byte_1A976420);
      *(_DWORD *)(v2 + 160) = 5;
      std::pair<std::string const,data::ChessCardEffectType>::pair<char const(&)[19],data::ChessCardEffectType,true>(
        (std::pair<const std::string,data::ChessCardEffectType> *const)(v2 + 944),
        (const char (*)[19])byte_1A976460,
        (data::ChessCardEffectType *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, byte_1A976460);
      *(_DWORD *)(v2 + 176) = 6;
      std::pair<std::string const,data::ChessCardEffectType>::pair<char const(&)[19],data::ChessCardEffectType,true>(
        (std::pair<const std::string,data::ChessCardEffectType> *const)(v2 + 984),
        (const char (*)[19])byte_1A9764A0,
        (data::ChessCardEffectType *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, byte_1A9764A0);
      *(_DWORD *)(v2 + 192) = 7;
      std::pair<std::string const,data::ChessCardEffectType>::pair<char const(&)[22],data::ChessCardEffectType,true>(
        (std::pair<const std::string,data::ChessCardEffectType> *const)(v2 + 1024),
        (const char (*)[22])byte_1A9764E0,
        (data::ChessCardEffectType *)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 208, byte_1A9764E0);
      *(_DWORD *)(v2 + 208) = 8;
      std::pair<std::string const,data::ChessCardEffectType>::pair<char const(&)[22],data::ChessCardEffectType,true>(
        (std::pair<const std::string,data::ChessCardEffectType> *const)(v2 + 1064),
        (const char (*)[22])byte_1A976520,
        (data::ChessCardEffectType *)(v2 + 208));
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 224, byte_1A976520);
      *(_DWORD *)(v2 + 224) = 9;
      std::pair<std::string const,data::ChessCardEffectType>::pair<char const(&)[13],data::ChessCardEffectType,true>(
        (std::pair<const std::string,data::ChessCardEffectType> *const)(v2 + 1104),
        (const char (*)[13])byte_1A976560,
        (data::ChessCardEffectType *)(v2 + 224));
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 240, byte_1A976560);
      *(_DWORD *)(v2 + 240) = 10;
      std::pair<std::string const,data::ChessCardEffectType>::pair<char const(&)[16],data::ChessCardEffectType,true>(
        (std::pair<const std::string,data::ChessCardEffectType> *const)(v2 + 1144),
        (const char (*)[16])byte_1A9765A0,
        (data::ChessCardEffectType *)(v2 + 240));
      if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 256, byte_1A9765A0);
      *(_DWORD *)(v2 + 256) = 11;
      std::pair<std::string const,data::ChessCardEffectType>::pair<char const(&)[28],data::ChessCardEffectType,true>(
        (std::pair<const std::string,data::ChessCardEffectType> *const)(v2 + 1184),
        (const char (*)[28])byte_1A9765E0,
        (data::ChessCardEffectType *)(v2 + 256));
      if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 272, byte_1A9765E0);
      *(_DWORD *)(v2 + 272) = 12;
      std::pair<std::string const,data::ChessCardEffectType>::pair<char const(&)[10],data::ChessCardEffectType,true>(
        (std::pair<const std::string,data::ChessCardEffectType> *const)(v2 + 1224),
        (const char (*)[10])byte_1A976620,
        (data::ChessCardEffectType *)(v2 + 272));
      if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 288, byte_1A976620);
      *(_DWORD *)(v2 + 288) = 13;
      std::pair<std::string const,data::ChessCardEffectType>::pair<char const(&)[19],data::ChessCardEffectType,true>(
        (std::pair<const std::string,data::ChessCardEffectType> *const)(v2 + 1264),
        (const char (*)[19])byte_1A976660,
        (data::ChessCardEffectType *)(v2 + 288));
      if ( *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 304, byte_1A976660);
      *(_DWORD *)(v2 + 304) = 14;
      std::pair<std::string const,data::ChessCardEffectType>::pair<char const(&)[19],data::ChessCardEffectType,true>(
        (std::pair<const std::string,data::ChessCardEffectType> *const)(v2 + 1304),
        (const char (*)[19])byte_1A9766A0,
        (data::ChessCardEffectType *)(v2 + 304));
      if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 320, byte_1A9766A0);
      *(_DWORD *)(v2 + 320) = 15;
      std::pair<std::string const,data::ChessCardEffectType>::pair<char const(&)[25],data::ChessCardEffectType,true>(
        (std::pair<const std::string,data::ChessCardEffectType> *const)(v2 + 1344),
        (const char (*)[25])byte_1A9766E0,
        (data::ChessCardEffectType *)(v2 + 320));
      if ( *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 336, byte_1A9766E0);
      *(_DWORD *)(v2 + 336) = 16;
      std::pair<std::string const,data::ChessCardEffectType>::pair<char const(&)[19],data::ChessCardEffectType,true>(
        (std::pair<const std::string,data::ChessCardEffectType> *const)(v2 + 1384),
        (const char (*)[19])byte_1A976720,
        (data::ChessCardEffectType *)(v2 + 336));
      if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 352, byte_1A976720);
      *(_DWORD *)(v2 + 352) = 17;
      std::pair<std::string const,data::ChessCardEffectType>::pair<char const(&)[32],data::ChessCardEffectType,true>(
        (std::pair<const std::string,data::ChessCardEffectType> *const)(v2 + 1424),
        (const char (*)[32])byte_1A976760,
        (data::ChessCardEffectType *)(v2 + 352));
      if ( *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 368, byte_1A976760);
      *(_DWORD *)(v2 + 368) = 18;
      std::pair<std::string const,data::ChessCardEffectType>::pair<char const(&)[19],data::ChessCardEffectType,true>(
        (std::pair<const std::string,data::ChessCardEffectType> *const)(v2 + 1464),
        (const char (*)[19])byte_1A9767A0,
        (data::ChessCardEffectType *)(v2 + 368));
      if ( *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 384, byte_1A9767A0);
      *(_DWORD *)(v2 + 384) = 19;
      std::pair<std::string const,data::ChessCardEffectType>::pair<char const(&)[19],data::ChessCardEffectType,true>(
        (std::pair<const std::string,data::ChessCardEffectType> *const)(v2 + 1504),
        (const char (*)[19])byte_1A9767E0,
        (data::ChessCardEffectType *)(v2 + 384));
      if ( *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 400, byte_1A9767E0);
      *(_DWORD *)(v2 + 400) = 20;
      std::pair<std::string const,data::ChessCardEffectType>::pair<char const(&)[20],data::ChessCardEffectType,true>(
        (std::pair<const std::string,data::ChessCardEffectType> *const)(v2 + 1544),
        (const char (*)[20])byte_1A976820,
        (data::ChessCardEffectType *)(v2 + 400));
      if ( *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 416, byte_1A976820);
      *(_DWORD *)(v2 + 416) = 21;
      std::pair<std::string const,data::ChessCardEffectType>::pair<char const(&)[19],data::ChessCardEffectType,true>(
        (std::pair<const std::string,data::ChessCardEffectType> *const)(v2 + 1584),
        (const char (*)[19])byte_1A976860,
        (data::ChessCardEffectType *)(v2 + 416));
      if ( *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 432, byte_1A976860);
      *(_DWORD *)(v2 + 432) = 22;
      std::pair<std::string const,data::ChessCardEffectType>::pair<char const(&)[16],data::ChessCardEffectType,true>(
        (std::pair<const std::string,data::ChessCardEffectType> *const)(v2 + 1624),
        (const char (*)[16])byte_1A9768A0,
        (data::ChessCardEffectType *)(v2 + 432));
      if ( *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 448, byte_1A9768A0);
      *(_DWORD *)(v2 + 448) = 23;
      std::pair<std::string const,data::ChessCardEffectType>::pair<char const(&)[16],data::ChessCardEffectType,true>(
        (std::pair<const std::string,data::ChessCardEffectType> *const)(v2 + 1664),
        (const char (*)[16])byte_1A9768E0,
        (data::ChessCardEffectType *)(v2 + 448));
      if ( *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 464, byte_1A9768E0);
      *(_DWORD *)(v2 + 464) = 24;
      std::pair<std::string const,data::ChessCardEffectType>::pair<char const(&)[16],data::ChessCardEffectType,true>(
        (std::pair<const std::string,data::ChessCardEffectType> *const)(v2 + 1704),
        (const char (*)[16])byte_1A976920,
        (data::ChessCardEffectType *)(v2 + 464));
      if ( *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 480, byte_1A976920);
      *(_DWORD *)(v2 + 480) = 25;
      std::pair<std::string const,data::ChessCardEffectType>::pair<char const(&)[22],data::ChessCardEffectType,true>(
        (std::pair<const std::string,data::ChessCardEffectType> *const)(v2 + 1744),
        (const char (*)[22])byte_1A976960,
        (data::ChessCardEffectType *)(v2 + 480));
      std::allocator<std::pair<std::string const,data::ChessCardEffectType>>::allocator((std::allocator<std::pair<const std::string,data::ChessCardEffectType> > *const)(v2 + 64));
      std::unordered_map<std::string,data::ChessCardEffectType>::unordered_map(
        &data::enumStrToVal(char const*,data::ChessCardEffectType &)::m,
        (std::initializer_list<std::pair<const std::string,data::ChessCardEffectType> >)__PAIR128__(25LL, v2 + 784),
        0LL,
        (const std::unordered_map<std::string,data::ChessCardEffectType>::hasher *)(v2 + 32),
        (const std::unordered_map<std::string,data::ChessCardEffectType>::key_equal *)(v2 + 48),
        (const std::unordered_map<std::string,data::ChessCardEffectType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::ChessCardEffectType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::ChessCardEffectType>::~unordered_map,
        &data::enumStrToVal(char const*,data::ChessCardEffectType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::ChessCardEffectType>>::~allocator((std::allocator<std::pair<const std::string,data::ChessCardEffectType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::ChessCardEffectType> *)(v2 + 1784);
            i != (std::pair<const std::string,data::ChessCardEffectType> *)(v2 + 784);
            std::pair<std::string const,data::ChessCardEffectType>::~pair(i) )
      {
        --i;
      }
      __asan_poison_stack_memory(v2 + 784, 1000LL);
      *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
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
    *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((v2 + 656) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 80);
    v7 = *(const char **)(v2 + 560);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 656),
      v7,
      (const std::allocator<char> *)(v2 + 80));
    if ( *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 496, v7);
    *(std::unordered_map<std::string,data::ChessCardEffectType>::iterator *)(v2 + 496) = std::unordered_map<std::string,data::ChessCardEffectType>::find(
                                                                                           &data::enumStrToVal(char const*,data::ChessCardEffectType &)::m,
                                                                                           (const std::unordered_map<std::string,data::ChessCardEffectType>::key_type *)(v2 + 656));
    std::string::~string((void *)(v2 + 656));
    *(_DWORD *)(((v2 + 656) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 80);
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 528, v2 + 656);
    *(std::unordered_map<std::string,data::ChessCardEffectType>::iterator *)(v2 + 528) = std::unordered_map<std::string,data::ChessCardEffectType>::end(&data::enumStrToVal(char const*,data::ChessCardEffectType &)::m);
    v8 = (char *)(v2 + 528);
    v9 = std::__detail::operator==<std::pair<std::string const,data::ChessCardEffectType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ChessCardEffectType>,true> *)(v2 + 496),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ChessCardEffectType>,true> *)(v2 + 528));
    *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
    {
      *(_DWORD *)(((v2 + 720) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 720) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 751) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 17) & 7) >= *(_BYTE *)(((v2 + 751) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 720, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 720),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
        "enumStrToVal",
        678);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 720),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v10, (const char *const *)(v2 + 560));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 720));
      v5 = -1;
    }
    else
    {
      v11 = std::__detail::_Node_iterator<std::pair<std::string const,data::ChessCardEffectType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::ChessCardEffectType>,false,true> *const)(v2 + 496));
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
    if ( *(char *)(((v2 + 592) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 623) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 111) & 7) >= *(_BYTE *)(((v2 + 623) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 592, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 592),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "enumStrToVal",
      642);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
      (common::milog::MiLogStream *const)(v2 + 592),
      (const char (*)[14])"s is nullptr!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 592));
    v5 = -1;
  }
  v14 = v5;
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80E8) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 240) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1920LL, v17);
  }
  return v14;
};

// Line 687: range 00000000127BE668-00000000127BE67E
const char *__cdecl data::getDescription(data::ChessCardEffectType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 692: range 00000000127BE67F-00000000127BE834
bool __cdecl data::isValidChessCardEffectType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::ChessCardEffectType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::ChessCardEffectType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:693 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidChessCardEffectType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getChessCardEffectTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::ChessCardEffectType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::ChessCardEffectType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getChessCardEffectTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::ChessCardEffectType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::ChessCardEffectType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::ChessCardEffectType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::ChessCardEffectType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::ChessCardEffectType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 698: range 00000000127BE835-00000000127BE996
bool __cdecl data::isValidChessCardEffectTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::ChessCardEffectType> *v5; // rcx
  const std::unordered_map<std::string,data::ChessCardEffectType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidChessCardEffectTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getChessCardEffectTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::ChessCardEffectType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ChessCardEffectType>::end(v5);
  v6 = data::getChessCardEffectTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::ChessCardEffectType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::ChessCardEffectType>::find(
                                                                                              v6,
                                                                                              name);
  result = std::__detail::operator!=<std::pair<std::string const,data::ChessCardEffectType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ChessCardEffectType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ChessCardEffectType>,true> *)(v2 + 64));
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

// Line 703: range 00000000127BE997-00000000127BF9C2
const std::unordered_map<std::string,data::ChessCardEffectType> *__cdecl data::getChessCardEffectTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::ChessCardEffectType> *i; // r14
  char v6[1712]; // [rsp+10h] [rbp-6B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_5(1664LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "30 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 "
                        "<unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unkno"
                        "wn> 208 4 9 <unknown> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 4 9 <unknown> 28"
                        "8 4 9 <unknown> 304 4 9 <unknown> 320 4 9 <unknown> 336 4 9 <unknown> 352 4 9 <unknown> 368 4 9 "
                        "<unknown> 384 4 9 <unknown> 400 4 9 <unknown> 416 4 9 <unknown> 432 4 9 <unknown> 448 4 9 <unkno"
                        "wn> 464 4 9 <unknown> 480 4 9 <unknown> 496 1040 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::getChessCardEffectTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556927;
  v3[536862723] = -234556924;
  v3[536862724] = -234556924;
  v3[536862725] = -234556924;
  v3[536862726] = -234556924;
  v3[536862727] = -234556924;
  v3[536862728] = -234556924;
  v3[536862729] = -234556924;
  v3[536862730] = -234556924;
  v3[536862731] = -234556924;
  v3[536862732] = -234556924;
  v3[536862733] = -234556924;
  v3[536862734] = -234556924;
  v3[536862735] = 61956;
  v3[536862768] = -202116109;
  v3[536862769] = -202116109;
  v3[536862770] = -202116109;
  v3[536862771] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getChessCardEffectTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getChessCardEffectTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string const,data::ChessCardEffectType>::pair<char const(&)[26],data::ChessCardEffectType,true>(
      (std::pair<const std::string,data::ChessCardEffectType> *const)(v1 + 496),
      (const char (*)[26])"CHESS_CARD_EFFECT_DEFAULT",
      (data::ChessCardEffectType *)(v1 + 80));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, "CHESS_CARD_EFFECT_DEFAULT");
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string const,data::ChessCardEffectType>::pair<char const(&)[26],data::ChessCardEffectType,true>(
      (std::pair<const std::string,data::ChessCardEffectType> *const)(v1 + 536),
      (const char (*)[26])"CHESS_CARD_EFFECT_SET_SGV",
      (data::ChessCardEffectType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "CHESS_CARD_EFFECT_SET_SGV");
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string const,data::ChessCardEffectType>::pair<char const(&)[27],data::ChessCardEffectType,true>(
      (std::pair<const std::string,data::ChessCardEffectType> *const)(v1 + 576),
      (const char (*)[27])"CHESS_CARD_EFFECT_MOD_COST",
      (data::ChessCardEffectType *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, "CHESS_CARD_EFFECT_MOD_COST");
    *(_DWORD *)(v1 + 128) = 3;
    std::pair<std::string const,data::ChessCardEffectType>::pair<char const(&)[29],data::ChessCardEffectType,true>(
      (std::pair<const std::string,data::ChessCardEffectType> *const)(v1 + 616),
      (const char (*)[29])"CHESS_CARD_EFFECT_MOD_REFUND",
      (data::ChessCardEffectType *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, "CHESS_CARD_EFFECT_MOD_REFUND");
    *(_DWORD *)(v1 + 144) = 4;
    std::pair<std::string const,data::ChessCardEffectType>::pair<char const(&)[30],data::ChessCardEffectType,true>(
      (std::pair<const std::string,data::ChessCardEffectType> *const)(v1 + 656),
      (const char (*)[30])"CHESS_CARD_EFFECT_SET_HOME_HP",
      (data::ChessCardEffectType *)(v1 + 144));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, "CHESS_CARD_EFFECT_SET_HOME_HP");
    *(_DWORD *)(v1 + 160) = 5;
    std::pair<std::string const,data::ChessCardEffectType>::pair<char const(&)[30],data::ChessCardEffectType,true>(
      (std::pair<const std::string,data::ChessCardEffectType> *const)(v1 + 696),
      (const char (*)[30])"CHESS_CARD_EFFECT_ADD_HOME_HP",
      (data::ChessCardEffectType *)(v1 + 160));
    if ( *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 176, "CHESS_CARD_EFFECT_ADD_HOME_HP");
    *(_DWORD *)(v1 + 176) = 6;
    std::pair<std::string const,data::ChessCardEffectType>::pair<char const(&)[34],data::ChessCardEffectType,true>(
      (std::pair<const std::string,data::ChessCardEffectType> *const)(v1 + 736),
      (const char (*)[34])"CHESS_CARD_EFFECT_ADD_KILL_POINTS",
      (data::ChessCardEffectType *)(v1 + 176));
    if ( *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 192, "CHESS_CARD_EFFECT_ADD_KILL_POINTS");
    *(_DWORD *)(v1 + 192) = 7;
    std::pair<std::string const,data::ChessCardEffectType>::pair<char const(&)[34],data::ChessCardEffectType,true>(
      (std::pair<const std::string,data::ChessCardEffectType> *const)(v1 + 776),
      (const char (*)[34])"CHESS_CARD_EFFECT_MOD_KILL_POINTS",
      (data::ChessCardEffectType *)(v1 + 192));
    if ( *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 208, "CHESS_CARD_EFFECT_MOD_KILL_POINTS");
    *(_DWORD *)(v1 + 208) = 8;
    std::pair<std::string const,data::ChessCardEffectType>::pair<char const(&)[31],data::ChessCardEffectType,true>(
      (std::pair<const std::string,data::ChessCardEffectType> *const)(v1 + 816),
      (const char (*)[31])"CHESS_CARD_EFFECT_ADD_GEAR_NUM",
      (data::ChessCardEffectType *)(v1 + 208));
    if ( *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 224, "CHESS_CARD_EFFECT_ADD_GEAR_NUM");
    *(_DWORD *)(v1 + 224) = 9;
    std::pair<std::string const,data::ChessCardEffectType>::pair<char const(&)[29],data::ChessCardEffectType,true>(
      (std::pair<const std::string,data::ChessCardEffectType> *const)(v1 + 856),
      (const char (*)[29])"CHESS_CARD_EFFECT_KILL_GEARS",
      (data::ChessCardEffectType *)(v1 + 224));
    if ( *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 240, "CHESS_CARD_EFFECT_KILL_GEARS");
    *(_DWORD *)(v1 + 240) = 10;
    std::pair<std::string const,data::ChessCardEffectType>::pair<char const(&)[31],data::ChessCardEffectType,true>(
      (std::pair<const std::string,data::ChessCardEffectType> *const)(v1 + 896),
      (const char (*)[31])"CHESS_CARD_EFFECT_GRANT_POINTS",
      (data::ChessCardEffectType *)(v1 + 240));
    if ( *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 256, "CHESS_CARD_EFFECT_GRANT_POINTS");
    *(_DWORD *)(v1 + 256) = 11;
    std::pair<std::string const,data::ChessCardEffectType>::pair<char const(&)[32],data::ChessCardEffectType,true>(
      (std::pair<const std::string,data::ChessCardEffectType> *const)(v1 + 936),
      (const char (*)[32])"CHESS_PASSIVE_AURA_BONUS_POINTS",
      (data::ChessCardEffectType *)(v1 + 256));
    if ( *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 272, "CHESS_PASSIVE_AURA_BONUS_POINTS");
    *(_DWORD *)(v1 + 272) = 12;
    std::pair<std::string const,data::ChessCardEffectType>::pair<char const(&)[23],data::ChessCardEffectType,true>(
      (std::pair<const std::string,data::ChessCardEffectType> *const)(v1 + 976),
      (const char (*)[23])"CHESS_PASSIVE_AURA_SGV",
      (data::ChessCardEffectType *)(v1 + 272));
    if ( *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 288, "CHESS_PASSIVE_AURA_SGV");
    *(_DWORD *)(v1 + 288) = 13;
    std::pair<std::string const,data::ChessCardEffectType>::pair<char const(&)[32],data::ChessCardEffectType,true>(
      (std::pair<const std::string,data::ChessCardEffectType> *const)(v1 + 1016),
      (const char (*)[32])"CHESS_CARD_EFFECT_RANDOM_REMOVE",
      (data::ChessCardEffectType *)(v1 + 288));
    if ( *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 304, "CHESS_CARD_EFFECT_RANDOM_REMOVE");
    *(_DWORD *)(v1 + 304) = 14;
    std::pair<std::string const,data::ChessCardEffectType>::pair<char const(&)[38],data::ChessCardEffectType,true>(
      (std::pair<const std::string,data::ChessCardEffectType> *const)(v1 + 1056),
      (const char (*)[38])"CHESS_CARD_EFFECT_POINTS_ON_ROUND_END",
      (data::ChessCardEffectType *)(v1 + 304));
    if ( *(_BYTE *)(((v1 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 320) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 320, "CHESS_CARD_EFFECT_POINTS_ON_ROUND_END");
    *(_DWORD *)(v1 + 320) = 15;
    std::pair<std::string const,data::ChessCardEffectType>::pair<char const(&)[36],data::ChessCardEffectType,true>(
      (std::pair<const std::string,data::ChessCardEffectType> *const)(v1 + 1096),
      (const char (*)[36])"CHESS_CARD_EFFECT_SGV_PICK_CARD_LTE",
      (data::ChessCardEffectType *)(v1 + 320));
    if ( *(_BYTE *)(((v1 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 336) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 336, "CHESS_CARD_EFFECT_SGV_PICK_CARD_LTE");
    *(_DWORD *)(v1 + 336) = 16;
    std::pair<std::string const,data::ChessCardEffectType>::pair<char const(&)[32],data::ChessCardEffectType,true>(
      (std::pair<const std::string,data::ChessCardEffectType> *const)(v1 + 1136),
      (const char (*)[32])"CHESS_CARD_EFFECT_MOD_CARD_COST",
      (data::ChessCardEffectType *)(v1 + 336));
    if ( *(_BYTE *)(((v1 + 352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 352) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 352, "CHESS_CARD_EFFECT_MOD_CARD_COST");
    *(_DWORD *)(v1 + 352) = 17;
    std::pair<std::string const,data::ChessCardEffectType>::pair<char const(&)[43],data::ChessCardEffectType,true>(
      (std::pair<const std::string,data::ChessCardEffectType> *const)(v1 + 1176),
      (const char (*)[43])"CHESS_CARD_EFFECT_CARDS_TYPE_COUNT_NO_COST",
      (data::ChessCardEffectType *)(v1 + 352));
    if ( *(_BYTE *)(((v1 + 368) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 368) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 368, "CHESS_CARD_EFFECT_CARDS_TYPE_COUNT_NO_COST");
    *(_DWORD *)(v1 + 368) = 18;
    std::pair<std::string const,data::ChessCardEffectType>::pair<char const(&)[38],data::ChessCardEffectType,true>(
      (std::pair<const std::string,data::ChessCardEffectType> *const)(v1 + 1216),
      (const char (*)[38])"CHESS_CARD_EFFECT_MOD_CANDIDATE_CARDS",
      (data::ChessCardEffectType *)(v1 + 368));
    if ( *(_BYTE *)(((v1 + 384) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 384) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 384, "CHESS_CARD_EFFECT_MOD_CANDIDATE_CARDS");
    *(_DWORD *)(v1 + 384) = 19;
    std::pair<std::string const,data::ChessCardEffectType>::pair<char const(&)[35],data::ChessCardEffectType,true>(
      (std::pair<const std::string,data::ChessCardEffectType> *const)(v1 + 1256),
      (const char (*)[35])"CHESS_CARD_EFFECT_MOD_QUALITY_PROB",
      (data::ChessCardEffectType *)(v1 + 384));
    if ( *(_BYTE *)(((v1 + 400) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 400) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 400, "CHESS_CARD_EFFECT_MOD_QUALITY_PROB");
    *(_DWORD *)(v1 + 400) = 20;
    std::pair<std::string const,data::ChessCardEffectType>::pair<char const(&)[36],data::ChessCardEffectType,true>(
      (std::pair<const std::string,data::ChessCardEffectType> *const)(v1 + 1296),
      (const char (*)[36])"CHESS_CARD_EFFECT_FREE_CARD_REFRESH",
      (data::ChessCardEffectType *)(v1 + 400));
    if ( *(_BYTE *)(((v1 + 416) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 416) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 416, "CHESS_CARD_EFFECT_FREE_CARD_REFRESH");
    *(_DWORD *)(v1 + 416) = 21;
    std::pair<std::string const,data::ChessCardEffectType>::pair<char const(&)[35],data::ChessCardEffectType,true>(
      (std::pair<const std::string,data::ChessCardEffectType> *const)(v1 + 1336),
      (const char (*)[35])"CHESS_CARD_EFFECT_MOD_REFRESH_COST",
      (data::ChessCardEffectType *)(v1 + 416));
    if ( *(_BYTE *)(((v1 + 432) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 432) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 432, "CHESS_CARD_EFFECT_MOD_REFRESH_COST");
    *(_DWORD *)(v1 + 432) = 22;
    std::pair<std::string const,data::ChessCardEffectType>::pair<char const(&)[40],data::ChessCardEffectType,true>(
      (std::pair<const std::string,data::ChessCardEffectType> *const)(v1 + 1376),
      (const char (*)[40])"CHESS_CARD_EFFECT_CARDS_COUNT_STACK_SGV",
      (data::ChessCardEffectType *)(v1 + 432));
    if ( *(_BYTE *)(((v1 + 448) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 448) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 448, "CHESS_CARD_EFFECT_CARDS_COUNT_STACK_SGV");
    *(_DWORD *)(v1 + 448) = 23;
    std::pair<std::string const,data::ChessCardEffectType>::pair<char const(&)[35],data::ChessCardEffectType,true>(
      (std::pair<const std::string,data::ChessCardEffectType> *const)(v1 + 1416),
      (const char (*)[35])"CHESS_CARD_EFFECT_POINTS_STACK_SGV",
      (data::ChessCardEffectType *)(v1 + 448));
    if ( *(_BYTE *)(((v1 + 464) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 464) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 464, "CHESS_CARD_EFFECT_POINTS_STACK_SGV");
    *(_DWORD *)(v1 + 464) = 24;
    std::pair<std::string const,data::ChessCardEffectType>::pair<char const(&)[38],data::ChessCardEffectType,true>(
      (std::pair<const std::string,data::ChessCardEffectType> *const)(v1 + 1456),
      (const char (*)[38])"CHESS_CARD_EFFECT_CARD_TYPE_STACK_SGV",
      (data::ChessCardEffectType *)(v1 + 464));
    if ( *(_BYTE *)(((v1 + 480) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 480) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 480, "CHESS_CARD_EFFECT_CARD_TYPE_STACK_SGV");
    *(_DWORD *)(v1 + 480) = 25;
    std::pair<std::string const,data::ChessCardEffectType>::pair<char const(&)[40],data::ChessCardEffectType,true>(
      (std::pair<const std::string,data::ChessCardEffectType> *const)(v1 + 1496),
      (const char (*)[40])"CHESS_CARD_EFFECT_CARD_TYPE_FORCE_CURSE",
      (data::ChessCardEffectType *)(v1 + 480));
    std::allocator<std::pair<std::string const,data::ChessCardEffectType>>::allocator((std::allocator<std::pair<const std::string,data::ChessCardEffectType> > *const)(v1 + 64));
    std::unordered_map<std::string,data::ChessCardEffectType>::unordered_map(
      &data::getChessCardEffectTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::ChessCardEffectType> >)__PAIR128__(26LL, v1 + 496),
      0LL,
      (const std::unordered_map<std::string,data::ChessCardEffectType>::hasher *)(v1 + 32),
      (const std::unordered_map<std::string,data::ChessCardEffectType>::key_equal *)(v1 + 48),
      (const std::unordered_map<std::string,data::ChessCardEffectType>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getChessCardEffectTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::ChessCardEffectType>::~unordered_map,
      &data::getChessCardEffectTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::ChessCardEffectType>>::~allocator((std::allocator<std::pair<const std::string,data::ChessCardEffectType> > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::ChessCardEffectType> *)(v1 + 1536);
          i != (std::pair<const std::string,data::ChessCardEffectType> *)(v1 + 496);
          std::pair<std::string const,data::ChessCardEffectType>::~pair(i) )
    {
      --i;
    }
  }
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF80C8) = 0LL;
    memset(
      (void *)((unsigned __int64)(v3 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v3 + 2147450880 - (((_DWORD)v3 + 2147450888) & 0xFFFFFFF8) + 208) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    __asan_stack_free_5(v1, 1664LL, v6);
  }
  return &data::getChessCardEffectTypeNameMap[abi:cxx11](void)::m;
};

// Line 737: range 00000000127BF9C3-00000000127C1B9F
const std::map<data::ChessCardEffectType,std::pair<std::string,std::string >> *__cdecl data::getChessCardEffectTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::ChessCardEffectType,std::pair<std::string,std::string > > *i; // r14
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
  _DWORD *v21; // rax
  _DWORD *v22; // rax
  _DWORD *v23; // rax
  _DWORD *v24; // rax
  _DWORD *v25; // rax
  _DWORD *v26; // rax
  _DWORD *v27; // rax
  _DWORD *v28; // rax
  _DWORD *v29; // rax
  char v31[5040]; // [rsp+10h] [rbp-13B0h] BYREF

  v1 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_7(4992LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "55 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 4 9"
                        " <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unknown> 208 4 9 <unkn"
                        "own> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 4 9 <unknown> 288 4 9 <unknown> 3"
                        "04 4 9 <unknown> 320 4 9 <unknown> 336 4 9 <unknown> 352 4 9 <unknown> 368 4 9 <unknown> 384 4 9"
                        " <unknown> 400 4 9 <unknown> 416 4 9 <unknown> 432 4 9 <unknown> 448 4 9 <unknown> 464 4 9 <unkn"
                        "own> 480 4 9 <unknown> 496 64 9 <unknown> 592 64 9 <unknown> 688 64 9 <unknown> 784 64 9 <unknow"
                        "n> 880 64 9 <unknown> 976 64 9 <unknown> 1072 64 9 <unknown> 1168 64 9 <unknown> 1264 64 9 <unkn"
                        "own> 1360 64 9 <unknown> 1456 64 9 <unknown> 1552 64 9 <unknown> 1648 64 9 <unknown> 1744 64 9 <"
                        "unknown> 1840 64 9 <unknown> 1936 64 9 <unknown> 2032 64 9 <unknown> 2128 64 9 <unknown> 2224 64"
                        " 9 <unknown> 2320 64 9 <unknown> 2416 64 9 <unknown> 2512 64 9 <unknown> 2608 64 9 <unknown> 270"
                        "4 64 9 <unknown> 2800 64 9 <unknown> 2896 64 9 <unknown> 2992 1872 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::getChessCardEffectTypeEnumMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -234556927;
  v3[536862723] = -234556924;
  v3[536862724] = -234556924;
  v3[536862725] = -234556924;
  v3[536862726] = -234556924;
  v3[536862727] = -234556924;
  v3[536862728] = -234556924;
  v3[536862729] = -234556924;
  v3[536862730] = -234556924;
  v3[536862731] = -234556924;
  v3[536862732] = -234556924;
  v3[536862733] = -234556924;
  v3[536862734] = -234556924;
  v3[536862735] = 61956;
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
  v3[536862755] = -219021312;
  v3[536862756] = 62194;
  v3[536862758] = -219021312;
  v3[536862759] = 62194;
  v3[536862761] = -219021312;
  v3[536862762] = 62194;
  v3[536862764] = -219021312;
  v3[536862765] = 62194;
  v3[536862767] = -219021312;
  v3[536862768] = 62194;
  v3[536862770] = -219021312;
  v3[536862771] = 62194;
  v3[536862773] = -219021312;
  v3[536862774] = 62194;
  v3[536862776] = -219021312;
  v3[536862777] = 62194;
  v3[536862779] = -219021312;
  v3[536862780] = 62194;
  v3[536862782] = -219021312;
  v3[536862783] = 62194;
  v3[536862785] = -219021312;
  v3[536862786] = 62194;
  v3[536862788] = -219021312;
  v3[536862789] = 62194;
  v3[536862791] = -219021312;
  v3[536862792] = 62194;
  v3[536862794] = -219021312;
  v3[536862795] = 62194;
  v3[536862797] = -219021312;
  v3[536862798] = 62194;
  v3[536862800] = -219021312;
  v3[536862801] = 62194;
  v3[536862803] = -219021312;
  v3[536862804] = 62194;
  v3[536862806] = -219021312;
  v3[536862807] = 62194;
  v3[536862809] = -219021312;
  v3[536862810] = 62194;
  v3[536862812] = -219021312;
  v3[536862813] = 62194;
  v3[536862872] = -202116109;
  v3[536862873] = -202116109;
  v3[536862874] = -202116109;
  v3[536862875] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getChessCardEffectTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getChessCardEffectTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[26],true>(
      (std::pair<std::string,std::string > *const)(v1 + 496),
      (const char (*)[1])byte_1A936F20,
      (const char (*)[26])"CHESS_CARD_EFFECT_DEFAULT");
    std::pair<data::ChessCardEffectType const,std::pair<std::string,std::string>>::pair<data::ChessCardEffectType,true>(
      (std::pair<const data::ChessCardEffectType,std::pair<std::string,std::string > > *const)(v1 + 2992),
      (data::ChessCardEffectType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 496));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[10],char const(&)[26],true>(
      (std::pair<std::string,std::string > *const)(v1 + 592),
      (const char (*)[10])byte_1A976360,
      (const char (*)[26])"CHESS_CARD_EFFECT_SET_SGV");
    std::pair<data::ChessCardEffectType const,std::pair<std::string,std::string>>::pair<data::ChessCardEffectType,true>(
      (std::pair<const data::ChessCardEffectType,std::pair<std::string,std::string > > *const)(v1 + 3064),
      (data::ChessCardEffectType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 592));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[22],char const(&)[27],true>(
      (std::pair<std::string,std::string > *const)(v1 + 688),
      (const char (*)[22])byte_1A9763A0,
      (const char (*)[27])"CHESS_CARD_EFFECT_MOD_COST");
    std::pair<data::ChessCardEffectType const,std::pair<std::string,std::string>>::pair<data::ChessCardEffectType,true>(
      (std::pair<const data::ChessCardEffectType,std::pair<std::string,std::string > > *const)(v1 + 3136),
      (data::ChessCardEffectType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 688));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, v1 + 112);
    *(_DWORD *)(v1 + 128) = 3;
    std::pair<std::string,std::string>::pair<char const(&)[22],char const(&)[29],true>(
      (std::pair<std::string,std::string > *const)(v1 + 784),
      (const char (*)[22])byte_1A9763E0,
      (const char (*)[29])"CHESS_CARD_EFFECT_MOD_REFUND");
    std::pair<data::ChessCardEffectType const,std::pair<std::string,std::string>>::pair<data::ChessCardEffectType,true>(
      (std::pair<const data::ChessCardEffectType,std::pair<std::string,std::string > > *const)(v1 + 3208),
      (data::ChessCardEffectType *)(v1 + 128),
      (const std::pair<std::string,std::string > *)(v1 + 784));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, v1 + 128);
    *(_DWORD *)(v1 + 144) = 4;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[30],true>(
      (std::pair<std::string,std::string > *const)(v1 + 880),
      (const char (*)[19])byte_1A976420,
      (const char (*)[30])"CHESS_CARD_EFFECT_SET_HOME_HP");
    std::pair<data::ChessCardEffectType const,std::pair<std::string,std::string>>::pair<data::ChessCardEffectType,true>(
      (std::pair<const data::ChessCardEffectType,std::pair<std::string,std::string > > *const)(v1 + 3280),
      (data::ChessCardEffectType *)(v1 + 144),
      (const std::pair<std::string,std::string > *)(v1 + 880));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, v1 + 144);
    *(_DWORD *)(v1 + 160) = 5;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[30],true>(
      (std::pair<std::string,std::string > *const)(v1 + 976),
      (const char (*)[19])byte_1A976460,
      (const char (*)[30])"CHESS_CARD_EFFECT_ADD_HOME_HP");
    std::pair<data::ChessCardEffectType const,std::pair<std::string,std::string>>::pair<data::ChessCardEffectType,true>(
      (std::pair<const data::ChessCardEffectType,std::pair<std::string,std::string > > *const)(v1 + 3352),
      (data::ChessCardEffectType *)(v1 + 160),
      (const std::pair<std::string,std::string > *)(v1 + 976));
    if ( *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 176, v1 + 160);
    *(_DWORD *)(v1 + 176) = 6;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[34],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1072),
      (const char (*)[19])byte_1A9764A0,
      (const char (*)[34])"CHESS_CARD_EFFECT_ADD_KILL_POINTS");
    std::pair<data::ChessCardEffectType const,std::pair<std::string,std::string>>::pair<data::ChessCardEffectType,true>(
      (std::pair<const data::ChessCardEffectType,std::pair<std::string,std::string > > *const)(v1 + 3424),
      (data::ChessCardEffectType *)(v1 + 176),
      (const std::pair<std::string,std::string > *)(v1 + 1072));
    if ( *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 192, v1 + 176);
    *(_DWORD *)(v1 + 192) = 7;
    std::pair<std::string,std::string>::pair<char const(&)[22],char const(&)[34],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1168),
      (const char (*)[22])byte_1A9764E0,
      (const char (*)[34])"CHESS_CARD_EFFECT_MOD_KILL_POINTS");
    std::pair<data::ChessCardEffectType const,std::pair<std::string,std::string>>::pair<data::ChessCardEffectType,true>(
      (std::pair<const data::ChessCardEffectType,std::pair<std::string,std::string > > *const)(v1 + 3496),
      (data::ChessCardEffectType *)(v1 + 192),
      (const std::pair<std::string,std::string > *)(v1 + 1168));
    if ( *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 208, v1 + 192);
    *(_DWORD *)(v1 + 208) = 8;
    std::pair<std::string,std::string>::pair<char const(&)[22],char const(&)[31],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1264),
      (const char (*)[22])byte_1A976520,
      (const char (*)[31])"CHESS_CARD_EFFECT_ADD_GEAR_NUM");
    std::pair<data::ChessCardEffectType const,std::pair<std::string,std::string>>::pair<data::ChessCardEffectType,true>(
      (std::pair<const data::ChessCardEffectType,std::pair<std::string,std::string > > *const)(v1 + 3568),
      (data::ChessCardEffectType *)(v1 + 208),
      (const std::pair<std::string,std::string > *)(v1 + 1264));
    if ( *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 224, v1 + 208);
    *(_DWORD *)(v1 + 224) = 9;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[29],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1360),
      (const char (*)[13])byte_1A976560,
      (const char (*)[29])"CHESS_CARD_EFFECT_KILL_GEARS");
    std::pair<data::ChessCardEffectType const,std::pair<std::string,std::string>>::pair<data::ChessCardEffectType,true>(
      (std::pair<const data::ChessCardEffectType,std::pair<std::string,std::string > > *const)(v1 + 3640),
      (data::ChessCardEffectType *)(v1 + 224),
      (const std::pair<std::string,std::string > *)(v1 + 1360));
    if ( *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 240, v1 + 224);
    *(_DWORD *)(v1 + 240) = 10;
    std::pair<std::string,std::string>::pair<char const(&)[16],char const(&)[31],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1456),
      (const char (*)[16])byte_1A9765A0,
      (const char (*)[31])"CHESS_CARD_EFFECT_GRANT_POINTS");
    std::pair<data::ChessCardEffectType const,std::pair<std::string,std::string>>::pair<data::ChessCardEffectType,true>(
      (std::pair<const data::ChessCardEffectType,std::pair<std::string,std::string > > *const)(v1 + 3712),
      (data::ChessCardEffectType *)(v1 + 240),
      (const std::pair<std::string,std::string > *)(v1 + 1456));
    if ( *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 256, v1 + 240);
    *(_DWORD *)(v1 + 256) = 11;
    std::pair<std::string,std::string>::pair<char const(&)[28],char const(&)[32],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1552),
      (const char (*)[28])byte_1A9765E0,
      (const char (*)[32])"CHESS_PASSIVE_AURA_BONUS_POINTS");
    std::pair<data::ChessCardEffectType const,std::pair<std::string,std::string>>::pair<data::ChessCardEffectType,true>(
      (std::pair<const data::ChessCardEffectType,std::pair<std::string,std::string > > *const)(v1 + 3784),
      (data::ChessCardEffectType *)(v1 + 256),
      (const std::pair<std::string,std::string > *)(v1 + 1552));
    if ( *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 272, v1 + 256);
    *(_DWORD *)(v1 + 272) = 12;
    std::pair<std::string,std::string>::pair<char const(&)[10],char const(&)[23],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1648),
      (const char (*)[10])byte_1A976620,
      (const char (*)[23])"CHESS_PASSIVE_AURA_SGV");
    std::pair<data::ChessCardEffectType const,std::pair<std::string,std::string>>::pair<data::ChessCardEffectType,true>(
      (std::pair<const data::ChessCardEffectType,std::pair<std::string,std::string > > *const)(v1 + 3856),
      (data::ChessCardEffectType *)(v1 + 272),
      (const std::pair<std::string,std::string > *)(v1 + 1648));
    if ( *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 288, v1 + 272);
    *(_DWORD *)(v1 + 288) = 13;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[32],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1744),
      (const char (*)[19])byte_1A976660,
      (const char (*)[32])"CHESS_CARD_EFFECT_RANDOM_REMOVE");
    std::pair<data::ChessCardEffectType const,std::pair<std::string,std::string>>::pair<data::ChessCardEffectType,true>(
      (std::pair<const data::ChessCardEffectType,std::pair<std::string,std::string > > *const)(v1 + 3928),
      (data::ChessCardEffectType *)(v1 + 288),
      (const std::pair<std::string,std::string > *)(v1 + 1744));
    if ( *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 304, v1 + 288);
    *(_DWORD *)(v1 + 304) = 14;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[38],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1840),
      (const char (*)[19])byte_1A9766A0,
      (const char (*)[38])"CHESS_CARD_EFFECT_POINTS_ON_ROUND_END");
    std::pair<data::ChessCardEffectType const,std::pair<std::string,std::string>>::pair<data::ChessCardEffectType,true>(
      (std::pair<const data::ChessCardEffectType,std::pair<std::string,std::string > > *const)(v1 + 4000),
      (data::ChessCardEffectType *)(v1 + 304),
      (const std::pair<std::string,std::string > *)(v1 + 1840));
    if ( *(_BYTE *)(((v1 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 320) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 320, v1 + 304);
    *(_DWORD *)(v1 + 320) = 15;
    std::pair<std::string,std::string>::pair<char const(&)[25],char const(&)[36],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1936),
      (const char (*)[25])byte_1A9766E0,
      (const char (*)[36])"CHESS_CARD_EFFECT_SGV_PICK_CARD_LTE");
    std::pair<data::ChessCardEffectType const,std::pair<std::string,std::string>>::pair<data::ChessCardEffectType,true>(
      (std::pair<const data::ChessCardEffectType,std::pair<std::string,std::string > > *const)(v1 + 4072),
      (data::ChessCardEffectType *)(v1 + 320),
      (const std::pair<std::string,std::string > *)(v1 + 1936));
    if ( *(_BYTE *)(((v1 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 336) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 336, v1 + 320);
    *(_DWORD *)(v1 + 336) = 16;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[32],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2032),
      (const char (*)[19])byte_1A976720,
      (const char (*)[32])"CHESS_CARD_EFFECT_MOD_CARD_COST");
    std::pair<data::ChessCardEffectType const,std::pair<std::string,std::string>>::pair<data::ChessCardEffectType,true>(
      (std::pair<const data::ChessCardEffectType,std::pair<std::string,std::string > > *const)(v1 + 4144),
      (data::ChessCardEffectType *)(v1 + 336),
      (const std::pair<std::string,std::string > *)(v1 + 2032));
    if ( *(_BYTE *)(((v1 + 352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 352) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 352, v1 + 336);
    *(_DWORD *)(v1 + 352) = 17;
    std::pair<std::string,std::string>::pair<char const(&)[32],char const(&)[43],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2128),
      (const char (*)[32])byte_1A976760,
      (const char (*)[43])"CHESS_CARD_EFFECT_CARDS_TYPE_COUNT_NO_COST");
    std::pair<data::ChessCardEffectType const,std::pair<std::string,std::string>>::pair<data::ChessCardEffectType,true>(
      (std::pair<const data::ChessCardEffectType,std::pair<std::string,std::string > > *const)(v1 + 4216),
      (data::ChessCardEffectType *)(v1 + 352),
      (const std::pair<std::string,std::string > *)(v1 + 2128));
    if ( *(_BYTE *)(((v1 + 368) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 368) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 368, v1 + 352);
    *(_DWORD *)(v1 + 368) = 18;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[38],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2224),
      (const char (*)[19])byte_1A9767A0,
      (const char (*)[38])"CHESS_CARD_EFFECT_MOD_CANDIDATE_CARDS");
    std::pair<data::ChessCardEffectType const,std::pair<std::string,std::string>>::pair<data::ChessCardEffectType,true>(
      (std::pair<const data::ChessCardEffectType,std::pair<std::string,std::string > > *const)(v1 + 4288),
      (data::ChessCardEffectType *)(v1 + 368),
      (const std::pair<std::string,std::string > *)(v1 + 2224));
    if ( *(_BYTE *)(((v1 + 384) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 384) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 384, v1 + 368);
    *(_DWORD *)(v1 + 384) = 19;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[35],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2320),
      (const char (*)[19])byte_1A9767E0,
      (const char (*)[35])"CHESS_CARD_EFFECT_MOD_QUALITY_PROB");
    std::pair<data::ChessCardEffectType const,std::pair<std::string,std::string>>::pair<data::ChessCardEffectType,true>(
      (std::pair<const data::ChessCardEffectType,std::pair<std::string,std::string > > *const)(v1 + 4360),
      (data::ChessCardEffectType *)(v1 + 384),
      (const std::pair<std::string,std::string > *)(v1 + 2320));
    if ( *(_BYTE *)(((v1 + 400) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 400) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 400, v1 + 384);
    *(_DWORD *)(v1 + 400) = 20;
    std::pair<std::string,std::string>::pair<char const(&)[20],char const(&)[36],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2416),
      (const char (*)[20])byte_1A976820,
      (const char (*)[36])"CHESS_CARD_EFFECT_FREE_CARD_REFRESH");
    std::pair<data::ChessCardEffectType const,std::pair<std::string,std::string>>::pair<data::ChessCardEffectType,true>(
      (std::pair<const data::ChessCardEffectType,std::pair<std::string,std::string > > *const)(v1 + 4432),
      (data::ChessCardEffectType *)(v1 + 400),
      (const std::pair<std::string,std::string > *)(v1 + 2416));
    if ( *(_BYTE *)(((v1 + 416) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 416) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 416, v1 + 400);
    *(_DWORD *)(v1 + 416) = 21;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[35],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2512),
      (const char (*)[19])byte_1A976860,
      (const char (*)[35])"CHESS_CARD_EFFECT_MOD_REFRESH_COST");
    std::pair<data::ChessCardEffectType const,std::pair<std::string,std::string>>::pair<data::ChessCardEffectType,true>(
      (std::pair<const data::ChessCardEffectType,std::pair<std::string,std::string > > *const)(v1 + 4504),
      (data::ChessCardEffectType *)(v1 + 416),
      (const std::pair<std::string,std::string > *)(v1 + 2512));
    if ( *(_BYTE *)(((v1 + 432) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 432) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 432, v1 + 416);
    *(_DWORD *)(v1 + 432) = 22;
    std::pair<std::string,std::string>::pair<char const(&)[16],char const(&)[40],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2608),
      (const char (*)[16])byte_1A9768A0,
      (const char (*)[40])"CHESS_CARD_EFFECT_CARDS_COUNT_STACK_SGV");
    std::pair<data::ChessCardEffectType const,std::pair<std::string,std::string>>::pair<data::ChessCardEffectType,true>(
      (std::pair<const data::ChessCardEffectType,std::pair<std::string,std::string > > *const)(v1 + 4576),
      (data::ChessCardEffectType *)(v1 + 432),
      (const std::pair<std::string,std::string > *)(v1 + 2608));
    if ( *(_BYTE *)(((v1 + 448) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 448) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 448, v1 + 432);
    *(_DWORD *)(v1 + 448) = 23;
    std::pair<std::string,std::string>::pair<char const(&)[16],char const(&)[35],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2704),
      (const char (*)[16])byte_1A9768E0,
      (const char (*)[35])"CHESS_CARD_EFFECT_POINTS_STACK_SGV");
    std::pair<data::ChessCardEffectType const,std::pair<std::string,std::string>>::pair<data::ChessCardEffectType,true>(
      (std::pair<const data::ChessCardEffectType,std::pair<std::string,std::string > > *const)(v1 + 4648),
      (data::ChessCardEffectType *)(v1 + 448),
      (const std::pair<std::string,std::string > *)(v1 + 2704));
    if ( *(_BYTE *)(((v1 + 464) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 464) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 464, v1 + 448);
    *(_DWORD *)(v1 + 464) = 24;
    std::pair<std::string,std::string>::pair<char const(&)[16],char const(&)[38],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2800),
      (const char (*)[16])byte_1A976920,
      (const char (*)[38])"CHESS_CARD_EFFECT_CARD_TYPE_STACK_SGV");
    std::pair<data::ChessCardEffectType const,std::pair<std::string,std::string>>::pair<data::ChessCardEffectType,true>(
      (std::pair<const data::ChessCardEffectType,std::pair<std::string,std::string > > *const)(v1 + 4720),
      (data::ChessCardEffectType *)(v1 + 464),
      (const std::pair<std::string,std::string > *)(v1 + 2800));
    if ( *(_BYTE *)(((v1 + 480) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 480) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 480, v1 + 464);
    *(_DWORD *)(v1 + 480) = 25;
    std::pair<std::string,std::string>::pair<char const(&)[22],char const(&)[40],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2896),
      (const char (*)[22])byte_1A976960,
      (const char (*)[40])"CHESS_CARD_EFFECT_CARD_TYPE_FORCE_CURSE");
    std::pair<data::ChessCardEffectType const,std::pair<std::string,std::string>>::pair<data::ChessCardEffectType,true>(
      (std::pair<const data::ChessCardEffectType,std::pair<std::string,std::string > > *const)(v1 + 4792),
      (data::ChessCardEffectType *)(v1 + 480),
      (const std::pair<std::string,std::string > *)(v1 + 2896));
    std::allocator<std::pair<data::ChessCardEffectType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::ChessCardEffectType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    std::map<data::ChessCardEffectType,std::pair<std::string,std::string>>::map(
      &data::getChessCardEffectTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::ChessCardEffectType,std::pair<std::string,std::string > > >)__PAIR128__(26LL, v1 + 2992),
      (const std::less<data::ChessCardEffectType> *)(v1 + 48),
      (const std::map<data::ChessCardEffectType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getChessCardEffectTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::ChessCardEffectType,std::pair<std::string,std::string>>::~map,
      &data::getChessCardEffectTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::ChessCardEffectType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::ChessCardEffectType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::ChessCardEffectType,std::pair<std::string,std::string > > *)(v1 + 4864);
          i != (std::pair<const data::ChessCardEffectType,std::pair<std::string,std::string > > *)(v1 + 2992);
          std::pair<data::ChessCardEffectType const,std::pair<std::string,std::string>>::~pair(i) )
    {
      --i;
    }
    __asan_poison_stack_memory(v1 + 2992, 1872LL);
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2896));
    v5 = (_DWORD *)(((v1 + 2896) >> 3) + 2147450880);
    *v5 = -117901064;
    v5[1] = -117901064;
    *(_BYTE *)(((v1 + 480) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2800));
    v6 = (_DWORD *)(((v1 + 2800) >> 3) + 2147450880);
    *v6 = -117901064;
    v6[1] = -117901064;
    *(_BYTE *)(((v1 + 464) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2704));
    v7 = (_DWORD *)(((v1 + 2704) >> 3) + 2147450880);
    *v7 = -117901064;
    v7[1] = -117901064;
    *(_BYTE *)(((v1 + 448) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2608));
    v8 = (_DWORD *)(((v1 + 2608) >> 3) + 2147450880);
    *v8 = -117901064;
    v8[1] = -117901064;
    *(_BYTE *)(((v1 + 432) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2512));
    v9 = (_DWORD *)(((v1 + 2512) >> 3) + 2147450880);
    *v9 = -117901064;
    v9[1] = -117901064;
    *(_BYTE *)(((v1 + 416) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2416));
    v10 = (_DWORD *)(((v1 + 2416) >> 3) + 2147450880);
    *v10 = -117901064;
    v10[1] = -117901064;
    *(_BYTE *)(((v1 + 400) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2320));
    v11 = (_DWORD *)(((v1 + 2320) >> 3) + 2147450880);
    *v11 = -117901064;
    v11[1] = -117901064;
    *(_BYTE *)(((v1 + 384) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2224));
    v12 = (_DWORD *)(((v1 + 2224) >> 3) + 2147450880);
    *v12 = -117901064;
    v12[1] = -117901064;
    *(_BYTE *)(((v1 + 368) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2128));
    v13 = (_DWORD *)(((v1 + 2128) >> 3) + 2147450880);
    *v13 = -117901064;
    v13[1] = -117901064;
    *(_BYTE *)(((v1 + 352) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2032));
    v14 = (_DWORD *)(((v1 + 2032) >> 3) + 2147450880);
    *v14 = -117901064;
    v14[1] = -117901064;
    *(_BYTE *)(((v1 + 336) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1936));
    v15 = (_DWORD *)(((v1 + 1936) >> 3) + 2147450880);
    *v15 = -117901064;
    v15[1] = -117901064;
    *(_BYTE *)(((v1 + 320) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1840));
    v16 = (_DWORD *)(((v1 + 1840) >> 3) + 2147450880);
    *v16 = -117901064;
    v16[1] = -117901064;
    *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1744));
    v17 = (_DWORD *)(((v1 + 1744) >> 3) + 2147450880);
    *v17 = -117901064;
    v17[1] = -117901064;
    *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1648));
    v18 = (_DWORD *)(((v1 + 1648) >> 3) + 2147450880);
    *v18 = -117901064;
    v18[1] = -117901064;
    *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1552));
    v19 = (_DWORD *)(((v1 + 1552) >> 3) + 2147450880);
    *v19 = -117901064;
    v19[1] = -117901064;
    *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1456));
    v20 = (_DWORD *)(((v1 + 1456) >> 3) + 2147450880);
    *v20 = -117901064;
    v20[1] = -117901064;
    *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1360));
    v21 = (_DWORD *)(((v1 + 1360) >> 3) + 2147450880);
    *v21 = -117901064;
    v21[1] = -117901064;
    *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1264));
    v22 = (_DWORD *)(((v1 + 1264) >> 3) + 2147450880);
    *v22 = -117901064;
    v22[1] = -117901064;
    *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1168));
    v23 = (_DWORD *)(((v1 + 1168) >> 3) + 2147450880);
    *v23 = -117901064;
    v23[1] = -117901064;
    *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1072));
    v24 = (_DWORD *)(((v1 + 1072) >> 3) + 2147450880);
    *v24 = -117901064;
    v24[1] = -117901064;
    *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 976));
    v25 = (_DWORD *)(((v1 + 976) >> 3) + 2147450880);
    *v25 = -117901064;
    v25[1] = -117901064;
    *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 880));
    v26 = (_DWORD *)(((v1 + 880) >> 3) + 2147450880);
    *v26 = -117901064;
    v26[1] = -117901064;
    *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 784));
    v27 = (_DWORD *)(((v1 + 784) >> 3) + 2147450880);
    *v27 = -117901064;
    v27[1] = -117901064;
    *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 688));
    v28 = (_DWORD *)(((v1 + 688) >> 3) + 2147450880);
    *v28 = -117901064;
    v28[1] = -117901064;
    *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 592));
    v29 = (_DWORD *)(((v1 + 592) >> 3) + 2147450880);
    *v29 = -117901064;
    v29[1] = -117901064;
    *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 496));
  }
  if ( v31 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8268) = 0LL;
    memset(
      (void *)((unsigned __int64)(v3 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v3 + 2147450880 - (((_DWORD)v3 + 2147450888) & 0xFFFFFFF8) + 624) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    __asan_stack_free_7(v1, 4992LL, v31);
  }
  return &data::getChessCardEffectTypeEnumMap[abi:cxx11](void)::m;
};

// Line 771: range 00000000127C1BA0-00000000127C1F13
const char *__fastcall data::enumValToStr(data::ChessCardTag e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::ChessCardTag,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::ChessCardTag,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 5 e:770 64 8 8 iter:773 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getChessCardTagEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::ChessCardTag,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::ChessCardTag,std::pair<std::string,std::string>>::find(
                                                                                                     map,
                                                                                                     (const std::map<data::ChessCardTag,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::ChessCardTag,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::ChessCardTag,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::ChessCardTag,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::ChessCardTag,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "enumValToStr",
      776);
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
    result = "INVALID_ChessCardTag";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::ChessCardTag const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::ChessCardTag,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 783: range 00000000127C1F14-00000000127C24CC
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::ChessCardTag>,false,true>::pointer v10; // rax
  data::ChessCardTag second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::ChessCardTag> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:792 96 8 9 <unknown> 128 8 5 s:782 160 32 9 <unknown> 224 32 9 <unk"
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
    m = data::getChessCardTagNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::ChessCardTag>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ChessCardTag>::find(
                                                                                         m,
                                                                                         (const std::unordered_map<std::string,data::ChessCardTag>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::ChessCardTag>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::ChessCardTag>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::ChessCardTag>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ChessCardTag>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ChessCardTag>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
        "enumNameToVal",
        795);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::ChessCardTag>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::ChessCardTag>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "enumNameToVal",
      786);
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

// Line 804: range 00000000127C24CD-00000000127C322A
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::ChessCardTag> *i; // r14
  const char *v7; // rsi
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::ChessCardTag>,false,true>::pointer v11; // rax
  data::ChessCardTag second; // ecx
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
                        "wn> 208 4 9 <unknown> 224 8 6 it:823 256 8 9 <unknown> 288 8 5 s:803 320 32 9 <unknown> 384 32 9"
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::ChessCardTag &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::ChessCardTag &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, e);
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::ChessCardTag>::pair<char const(&)[7],data::ChessCardTag,true>(
        (std::pair<const std::string,data::ChessCardTag> *const)(v2 + 512),
        (const char (*)[7])byte_1A977AC0,
        (data::ChessCardTag *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, byte_1A977AC0);
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::ChessCardTag>::pair<char const(&)[7],data::ChessCardTag,true>(
        (std::pair<const std::string,data::ChessCardTag> *const)(v2 + 552),
        (const char (*)[7])byte_1A977B00,
        (data::ChessCardTag *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1A977B00);
      *(_DWORD *)(v2 + 128) = 3;
      std::pair<std::string const,data::ChessCardTag>::pair<char const(&)[7],data::ChessCardTag,true>(
        (std::pair<const std::string,data::ChessCardTag> *const)(v2 + 592),
        (const char (*)[7])byte_1A977B40,
        (data::ChessCardTag *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, byte_1A977B40);
      *(_DWORD *)(v2 + 144) = 4;
      std::pair<std::string const,data::ChessCardTag>::pair<char const(&)[7],data::ChessCardTag,true>(
        (std::pair<const std::string,data::ChessCardTag> *const)(v2 + 632),
        (const char (*)[7])byte_1A977B80,
        (data::ChessCardTag *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, byte_1A977B80);
      *(_DWORD *)(v2 + 160) = 5;
      std::pair<std::string const,data::ChessCardTag>::pair<char const(&)[7],data::ChessCardTag,true>(
        (std::pair<const std::string,data::ChessCardTag> *const)(v2 + 672),
        (const char (*)[7])byte_1A977BC0,
        (data::ChessCardTag *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, byte_1A977BC0);
      *(_DWORD *)(v2 + 176) = 6;
      std::pair<std::string const,data::ChessCardTag>::pair<char const(&)[10],data::ChessCardTag,true>(
        (std::pair<const std::string,data::ChessCardTag> *const)(v2 + 712),
        (const char (*)[10])byte_1A977C00,
        (data::ChessCardTag *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, byte_1A977C00);
      *(_DWORD *)(v2 + 192) = 7;
      std::pair<std::string const,data::ChessCardTag>::pair<char const(&)[10],data::ChessCardTag,true>(
        (std::pair<const std::string,data::ChessCardTag> *const)(v2 + 752),
        (const char (*)[10])byte_1A977C40,
        (data::ChessCardTag *)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 208, byte_1A977C40);
      *(_DWORD *)(v2 + 208) = 8;
      std::pair<std::string const,data::ChessCardTag>::pair<char const(&)[7],data::ChessCardTag,true>(
        (std::pair<const std::string,data::ChessCardTag> *const)(v2 + 792),
        (const char (*)[7])byte_1A977C80,
        (data::ChessCardTag *)(v2 + 208));
      std::allocator<std::pair<std::string const,data::ChessCardTag>>::allocator((std::allocator<std::pair<const std::string,data::ChessCardTag> > *const)(v2 + 64));
      std::unordered_map<std::string,data::ChessCardTag>::unordered_map(
        &data::enumStrToVal(char const*,data::ChessCardTag &)::m,
        (std::initializer_list<std::pair<const std::string,data::ChessCardTag> >)__PAIR128__(8LL, v2 + 512),
        0LL,
        (const std::unordered_map<std::string,data::ChessCardTag>::hasher *)(v2 + 32),
        (const std::unordered_map<std::string,data::ChessCardTag>::key_equal *)(v2 + 48),
        (const std::unordered_map<std::string,data::ChessCardTag>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::ChessCardTag &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::ChessCardTag>::~unordered_map,
        &data::enumStrToVal(char const*,data::ChessCardTag &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::ChessCardTag>>::~allocator((std::allocator<std::pair<const std::string,data::ChessCardTag> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::ChessCardTag> *)(v2 + 832);
            i != (std::pair<const std::string,data::ChessCardTag> *)(v2 + 512);
            std::pair<std::string const,data::ChessCardTag>::~pair(i) )
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
    *(std::unordered_map<std::string,data::ChessCardTag>::iterator *)(v2 + 224) = std::unordered_map<std::string,data::ChessCardTag>::find(
                                                                                    &data::enumStrToVal(char const*,data::ChessCardTag &)::m,
                                                                                    (const std::unordered_map<std::string,data::ChessCardTag>::key_type *)(v2 + 384));
    std::string::~string((void *)(v2 + 384));
    *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 80);
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 256, v2 + 384);
    *(std::unordered_map<std::string,data::ChessCardTag>::iterator *)(v2 + 256) = std::unordered_map<std::string,data::ChessCardTag>::end(&data::enumStrToVal(char const*,data::ChessCardTag &)::m);
    v8 = (char *)(v2 + 256);
    v9 = std::__detail::operator==<std::pair<std::string const,data::ChessCardTag>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ChessCardTag>,true> *)(v2 + 224),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ChessCardTag>,true> *)(v2 + 256));
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
        "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
        "enumStrToVal",
        826);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 448),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v10, (const char *const *)(v2 + 288));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v11 = std::__detail::_Node_iterator<std::pair<std::string const,data::ChessCardTag>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::ChessCardTag>,false,true> *const)(v2 + 224));
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
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "enumStrToVal",
      807);
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

// Line 835: range 00000000127C322B-00000000127C3241
const char *__cdecl data::getDescription(data::ChessCardTag e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 840: range 00000000127C3242-00000000127C33F7
bool __cdecl data::isValidChessCardTag(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::ChessCardTag,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::ChessCardTag,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:841 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidChessCardTag;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getChessCardTagEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::ChessCardTag,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::ChessCardTag,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getChessCardTagEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::ChessCardTag,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::ChessCardTag,std::pair<std::string,std::string>>::find(
                                                                                                     v6,
                                                                                                     (const std::map<data::ChessCardTag,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::ChessCardTag,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::ChessCardTag,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 846: range 00000000127C33F8-00000000127C3559
bool __cdecl data::isValidChessCardTagName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::ChessCardTag> *v5; // rcx
  const std::unordered_map<std::string,data::ChessCardTag> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidChessCardTagName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getChessCardTagNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::ChessCardTag>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ChessCardTag>::end(v5);
  v6 = data::getChessCardTagNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::ChessCardTag>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::ChessCardTag>::find(
                                                                                       v6,
                                                                                       name);
  result = std::__detail::operator!=<std::pair<std::string const,data::ChessCardTag>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ChessCardTag>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ChessCardTag>,true> *)(v2 + 64));
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

// Line 851: range 00000000127C355A-00000000127C3D5B
const std::unordered_map<std::string,data::ChessCardTag> *__cdecl data::getChessCardTagNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::ChessCardTag> *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getChessCardTagNameMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getChessCardTagNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getChessCardTagNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v0);
    *(_DWORD *)(v1 + 96) = 0;
    std::pair<std::string const,data::ChessCardTag>::pair<char const(&)[14],data::ChessCardTag,true>(
      (std::pair<const std::string,data::ChessCardTag> *const)(v1 + 240),
      (const char (*)[14])"CARD_TAG_NONE",
      (data::ChessCardTag *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "CARD_TAG_NONE");
    *(_DWORD *)(v1 + 112) = 1;
    std::pair<std::string const,data::ChessCardTag>::pair<char const(&)[15],data::ChessCardTag,true>(
      (std::pair<const std::string,data::ChessCardTag> *const)(v1 + 280),
      (const char (*)[15])"CARD_TAG_WATER",
      (data::ChessCardTag *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, "CARD_TAG_WATER");
    *(_DWORD *)(v1 + 128) = 2;
    std::pair<std::string const,data::ChessCardTag>::pair<char const(&)[14],data::ChessCardTag,true>(
      (std::pair<const std::string,data::ChessCardTag> *const)(v1 + 320),
      (const char (*)[14])"CARD_TAG_FIRE",
      (data::ChessCardTag *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, "CARD_TAG_FIRE");
    *(_DWORD *)(v1 + 144) = 3;
    std::pair<std::string const,data::ChessCardTag>::pair<char const(&)[13],data::ChessCardTag,true>(
      (std::pair<const std::string,data::ChessCardTag> *const)(v1 + 360),
      (const char (*)[13])"CARD_TAG_ICE",
      (data::ChessCardTag *)(v1 + 144));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, "CARD_TAG_ICE");
    *(_DWORD *)(v1 + 160) = 4;
    std::pair<std::string const,data::ChessCardTag>::pair<char const(&)[14],data::ChessCardTag,true>(
      (std::pair<const std::string,data::ChessCardTag> *const)(v1 + 400),
      (const char (*)[14])"CARD_TAG_WIND",
      (data::ChessCardTag *)(v1 + 160));
    if ( *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 176, "CARD_TAG_WIND");
    *(_DWORD *)(v1 + 176) = 5;
    std::pair<std::string const,data::ChessCardTag>::pair<char const(&)[18],data::ChessCardTag,true>(
      (std::pair<const std::string,data::ChessCardTag> *const)(v1 + 440),
      (const char (*)[18])"CARD_TAG_ELECTRIC",
      (data::ChessCardTag *)(v1 + 176));
    if ( *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 192, "CARD_TAG_ELECTRIC");
    *(_DWORD *)(v1 + 192) = 6;
    std::pair<std::string const,data::ChessCardTag>::pair<char const(&)[17],data::ChessCardTag,true>(
      (std::pair<const std::string,data::ChessCardTag> *const)(v1 + 480),
      (const char (*)[17])"CARD_TAG_PHYSICS",
      (data::ChessCardTag *)(v1 + 192));
    if ( *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 208, "CARD_TAG_PHYSICS");
    *(_DWORD *)(v1 + 208) = 7;
    std::pair<std::string const,data::ChessCardTag>::pair<char const(&)[14],data::ChessCardTag,true>(
      (std::pair<const std::string,data::ChessCardTag> *const)(v1 + 520),
      (const char (*)[14])"CARD_TAG_HELP",
      (data::ChessCardTag *)(v1 + 208));
    if ( *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 224, "CARD_TAG_HELP");
    *(_DWORD *)(v1 + 224) = 8;
    std::pair<std::string const,data::ChessCardTag>::pair<char const(&)[15],data::ChessCardTag,true>(
      (std::pair<const std::string,data::ChessCardTag> *const)(v1 + 560),
      (const char (*)[15])"CARD_TAG_OTHER",
      (data::ChessCardTag *)(v1 + 224));
    std::allocator<std::pair<std::string const,data::ChessCardTag>>::allocator((std::allocator<std::pair<const std::string,data::ChessCardTag> > *const)(v1 + 80));
    std::unordered_map<std::string,data::ChessCardTag>::unordered_map(
      &data::getChessCardTagNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::ChessCardTag> >)__PAIR128__(9LL, v1 + 240),
      0LL,
      (const std::unordered_map<std::string,data::ChessCardTag>::hasher *)(v1 + 48),
      (const std::unordered_map<std::string,data::ChessCardTag>::key_equal *)(v1 + 64),
      (const std::unordered_map<std::string,data::ChessCardTag>::allocator_type *)(v1 + 80));
    __cxa_guard_release(&`guard variable for'data::getChessCardTagNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::ChessCardTag>::~unordered_map,
      &data::getChessCardTagNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::ChessCardTag>>::~allocator((std::allocator<std::pair<const std::string,data::ChessCardTag> > *const)(v1 + 80));
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::ChessCardTag> *)(v1 + 600);
          i != (std::pair<const std::string,data::ChessCardTag> *)(v1 + 240);
          std::pair<std::string const,data::ChessCardTag>::~pair(i) )
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
  return &data::getChessCardTagNameMap[abi:cxx11](void)::m;
};

// Line 868: range 00000000127C3D5C-00000000127C4AFD
const std::map<data::ChessCardTag,std::pair<std::string,std::string >> *__cdecl data::getChessCardTagEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::ChessCardTag,std::pair<std::string,std::string > > *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getChessCardTagEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getChessCardTagEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getChessCardTagEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 64, v0);
    *(_DWORD *)(v1 + 64) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[14],true>(
      (std::pair<std::string,std::string > *const)(v1 + 208),
      (const char (*)[1])byte_1A936F20,
      (const char (*)[14])"CARD_TAG_NONE");
    std::pair<data::ChessCardTag const,std::pair<std::string,std::string>>::pair<data::ChessCardTag,true>(
      (std::pair<const data::ChessCardTag,std::pair<std::string,std::string > > *const)(v1 + 1072),
      (data::ChessCardTag *)(v1 + 64),
      (const std::pair<std::string,std::string > *)(v1 + 208));
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v1 + 64);
    *(_DWORD *)(v1 + 80) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[15],true>(
      (std::pair<std::string,std::string > *const)(v1 + 304),
      (const char (*)[7])byte_1A977AC0,
      (const char (*)[15])"CARD_TAG_WATER");
    std::pair<data::ChessCardTag const,std::pair<std::string,std::string>>::pair<data::ChessCardTag,true>(
      (std::pair<const data::ChessCardTag,std::pair<std::string,std::string > > *const)(v1 + 1144),
      (data::ChessCardTag *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 304));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[14],true>(
      (std::pair<std::string,std::string > *const)(v1 + 400),
      (const char (*)[7])byte_1A977B00,
      (const char (*)[14])"CARD_TAG_FIRE");
    std::pair<data::ChessCardTag const,std::pair<std::string,std::string>>::pair<data::ChessCardTag,true>(
      (std::pair<const data::ChessCardTag,std::pair<std::string,std::string > > *const)(v1 + 1216),
      (data::ChessCardTag *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 400));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 3;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[13],true>(
      (std::pair<std::string,std::string > *const)(v1 + 496),
      (const char (*)[7])byte_1A977B40,
      (const char (*)[13])"CARD_TAG_ICE");
    std::pair<data::ChessCardTag const,std::pair<std::string,std::string>>::pair<data::ChessCardTag,true>(
      (std::pair<const data::ChessCardTag,std::pair<std::string,std::string > > *const)(v1 + 1288),
      (data::ChessCardTag *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 496));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, v1 + 112);
    *(_DWORD *)(v1 + 128) = 4;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[14],true>(
      (std::pair<std::string,std::string > *const)(v1 + 592),
      (const char (*)[7])byte_1A977B80,
      (const char (*)[14])"CARD_TAG_WIND");
    std::pair<data::ChessCardTag const,std::pair<std::string,std::string>>::pair<data::ChessCardTag,true>(
      (std::pair<const data::ChessCardTag,std::pair<std::string,std::string > > *const)(v1 + 1360),
      (data::ChessCardTag *)(v1 + 128),
      (const std::pair<std::string,std::string > *)(v1 + 592));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, v1 + 128);
    *(_DWORD *)(v1 + 144) = 5;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[18],true>(
      (std::pair<std::string,std::string > *const)(v1 + 688),
      (const char (*)[7])byte_1A977BC0,
      (const char (*)[18])"CARD_TAG_ELECTRIC");
    std::pair<data::ChessCardTag const,std::pair<std::string,std::string>>::pair<data::ChessCardTag,true>(
      (std::pair<const data::ChessCardTag,std::pair<std::string,std::string > > *const)(v1 + 1432),
      (data::ChessCardTag *)(v1 + 144),
      (const std::pair<std::string,std::string > *)(v1 + 688));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, v1 + 144);
    *(_DWORD *)(v1 + 160) = 6;
    std::pair<std::string,std::string>::pair<char const(&)[10],char const(&)[17],true>(
      (std::pair<std::string,std::string > *const)(v1 + 784),
      (const char (*)[10])byte_1A977C00,
      (const char (*)[17])"CARD_TAG_PHYSICS");
    std::pair<data::ChessCardTag const,std::pair<std::string,std::string>>::pair<data::ChessCardTag,true>(
      (std::pair<const data::ChessCardTag,std::pair<std::string,std::string > > *const)(v1 + 1504),
      (data::ChessCardTag *)(v1 + 160),
      (const std::pair<std::string,std::string > *)(v1 + 784));
    if ( *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 176, v1 + 160);
    *(_DWORD *)(v1 + 176) = 7;
    std::pair<std::string,std::string>::pair<char const(&)[10],char const(&)[14],true>(
      (std::pair<std::string,std::string > *const)(v1 + 880),
      (const char (*)[10])byte_1A977C40,
      (const char (*)[14])"CARD_TAG_HELP");
    std::pair<data::ChessCardTag const,std::pair<std::string,std::string>>::pair<data::ChessCardTag,true>(
      (std::pair<const data::ChessCardTag,std::pair<std::string,std::string > > *const)(v1 + 1576),
      (data::ChessCardTag *)(v1 + 176),
      (const std::pair<std::string,std::string > *)(v1 + 880));
    if ( *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 192, v1 + 176);
    *(_DWORD *)(v1 + 192) = 8;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[15],true>(
      (std::pair<std::string,std::string > *const)(v1 + 976),
      (const char (*)[7])byte_1A977C80,
      (const char (*)[15])"CARD_TAG_OTHER");
    std::pair<data::ChessCardTag const,std::pair<std::string,std::string>>::pair<data::ChessCardTag,true>(
      (std::pair<const data::ChessCardTag,std::pair<std::string,std::string > > *const)(v1 + 1648),
      (data::ChessCardTag *)(v1 + 192),
      (const std::pair<std::string,std::string > *)(v1 + 976));
    std::allocator<std::pair<data::ChessCardTag const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::ChessCardTag,std::pair<std::string,std::string > > > *const)(v1 + 48));
    std::map<data::ChessCardTag,std::pair<std::string,std::string>>::map(
      &data::getChessCardTagEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::ChessCardTag,std::pair<std::string,std::string > > >)__PAIR128__(9LL, v1 + 1072),
      (const std::less<data::ChessCardTag> *)(v1 + 32),
      (const std::map<data::ChessCardTag,std::pair<std::string,std::string >>::allocator_type *)(v1 + 48));
    __cxa_guard_release(&`guard variable for'data::getChessCardTagEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::ChessCardTag,std::pair<std::string,std::string>>::~map,
      &data::getChessCardTagEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::ChessCardTag const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::ChessCardTag,std::pair<std::string,std::string > > > *const)(v1 + 48));
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::ChessCardTag,std::pair<std::string,std::string > > *)(v1 + 1720);
          i != (std::pair<const data::ChessCardTag,std::pair<std::string,std::string > > *)(v1 + 1072);
          std::pair<data::ChessCardTag const,std::pair<std::string,std::string>>::~pair(i) )
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
  return &data::getChessCardTagEnumMap[abi:cxx11](void)::m;
};

// Line 886: range 00000000127C4AFE-00000000127C6CE2
int32_t __cdecl data::ActivityChessPreviewExcelConfig::init(
        data::ActivityChessPreviewExcelConfig *const this,
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
  bool v19; // r14
  common::milog::MiLogStream *v20; // rax
  bool v21; // r14
  common::milog::MiLogStream *v22; // rax
  bool v23; // r14
  common::milog::MiLogStream *v24; // rax
  bool v25; // r14
  common::milog::MiLogStream *v26; // rax
  bool v27; // r14
  common::milog::MiLogStream *v28; // rax
  unsigned __int64 v29; // rax
  _DWORD *v30; // rax
  bool v31; // r15
  unsigned __int64 v32; // rax
  char *j; // r14
  _DWORD *v34; // rax
  common::milog::MiLogStream *v35; // rax
  bool t; // [rsp+0h] [rbp-800h]
  bool ta; // [rsp+0h] [rbp-800h]
  std::initializer_list<std::string > __l; // [rsp+10h] [rbp-7F0h]
  char v40[2000]; // [rsp+30h] [rbp-7D0h] BYREF

  v2 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1952LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "40 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 <unkn"
                        "own> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 288 24 9 <unknown> "
                        "352 24 9 <unknown> 416 32 11 val_str:887 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown"
                        "> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown>"
                        " 992 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <unknown> 1184 32 9 <unknown> 1248 32 9 <unkno"
                        "wn> 1312 32 9 <unknown> 1376 32 9 <unknown> 1440 32 9 <unknown> 1504 32 9 <unknown> 1568 32 9 <u"
                        "nknown> 1632 32 9 <unknown> 1696 32 9 <unknown> 1760 64 9 <unknown> 1856 64 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityChessPreviewExcelConfig::init;
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
  v4[536862777] = -218959118;
  v4[536862780] = -202116109;
  std::string::basic_string(v2 + 416);
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 480),
    &byte_1A9784C0,
    (const std::allocator<char> *)(v2 + 48));
  t = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 480), &this->activity_id) != 0;
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
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "init",
      890);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 544),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v5, (const char (*)[29])byte_1A978580);
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
      aWatcher_4,
      (const std::allocator<char> *)(v2 + 64));
    ta = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 608), (std::string *)(v2 + 416)) != 0;
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
        "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
        "init",
        895);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 672),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v7, (const char (*)[34])byte_1A978600);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
      *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v8 = ((v2 + 288) >> 3) + 2147450880;
      *(_WORD *)v8 = 0;
      *(_BYTE *)(v8 + 2) = 0;
      v9 = (_DWORD *)(((v2 + 1760) >> 3) + 2147450880);
      *v9 = 0;
      v9[1] = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 1760),
        ";",
        (const std::allocator<char> *)(v2 + 80));
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 96);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 1792),
        ",",
        (const std::allocator<char> *)(v2 + 96));
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 112));
      std::vector<std::string>::vector(
        (std::vector<std::string> *const)(v2 + 288),
        (std::initializer_list<std::string >)__PAIR128__(2LL, v2 + 1760),
        (const std::vector<std::string>::allocator_type *)(v2 + 112));
      v10 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
              (const std::string *)(v2 + 416),
              (const std::vector<std::string> *)(v2 + 288),
              &this->watcher_list,
              1) != 0;
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 288));
      v11 = ((v2 + 288) >> 3) + 2147450880;
      *(_WORD *)v11 = -1800;
      *(_BYTE *)(v11 + 2) = -8;
      std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 112));
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      for ( i = (char *)(v2 + 1824); i != (char *)(v2 + 1760); std::string::~string(i) )
        i -= 32;
      v13 = (_DWORD *)(((v2 + 1760) >> 3) + 2147450880);
      *v13 = -117901064;
      v13[1] = -117901064;
      std::allocator<char>::~allocator(v2 + 96);
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( v10 )
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
          "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
          "init",
          900);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 736),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v14, (const char (*)[34])byte_1A978600);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 736));
        *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 128);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 800),
          &byte_1A9786E0,
          (const std::allocator<char> *)(v2 + 128));
        v15 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                row,
                (const std::string *)(v2 + 800),
                &this->match_player_limit) != 0;
        std::string::~string((void *)(v2 + 800));
        *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 128);
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
        if ( v15 )
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
            "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
            "init",
            905);
          v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 864),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v16, (const char (*)[39])byte_1A978720);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 864));
          *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
          v6 = -1;
        }
        else
        {
          *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 144);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 928),
            &byte_1A978780,
            (const std::allocator<char> *)(v2 + 144));
          v17 = common::tools::TxtFile::Row::assignToNum<bool>(
                  row,
                  (const std::string *)(v2 + 928),
                  &this->open_teach_dungeon) != 0;
          std::string::~string((void *)(v2 + 928));
          *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 144);
          *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
          if ( v17 )
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
              "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
              "init",
              910);
            v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 992),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v18, (const char (*)[36])byte_1A9787C0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 992));
            *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
            v6 = -1;
          }
          else
          {
            *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 160);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1056),
              &byte_1A978820,
              (const std::allocator<char> *)(v2 + 160));
            v19 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                    row,
                    (const std::string *)(v2 + 1056),
                    &this->teach_dungeon_id) != 0;
            std::string::~string((void *)(v2 + 1056));
            *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 160);
            *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
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
                "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
                "init",
                915);
              v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1120),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(v20, (const char (*)[38])byte_1A978860);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1120));
              *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -117901064;
              v6 = -1;
            }
            else
            {
              *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 176);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1184),
                &byte_1A9788C0,
                (const std::allocator<char> *)(v2 + 176));
              v21 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                      row,
                      (const std::string *)(v2 + 1184),
                      &this->teach_map_id) != 0;
              std::string::~string((void *)(v2 + 1184));
              *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 176);
              *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
              if ( v21 )
              {
                *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 1248) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1279) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 96 + 95) & 7) >= *(_BYTE *)(((v2 + 1279) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 1248, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 1248),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
                  "init",
                  920);
                v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1248),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v22, (const char (*)[42])byte_1A978900);
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
                  &byte_1A978960,
                  (const std::allocator<char> *)(v2 + 192));
                v23 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                        row,
                        (const std::string *)(v2 + 1312),
                        &this->punish_time) != 0;
                std::string::~string((void *)(v2 + 1312));
                *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 192);
                *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
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
                    "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
                    "init",
                    925);
                  v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 1376),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    v24,
                    (const char (*)[33])byte_1A9789A0);
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
                    &byte_1A978A00,
                    (const std::allocator<char> *)(v2 + 208));
                  v25 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                          row,
                          (const std::string *)(v2 + 1440),
                          &this->series_id) != 0;
                  std::string::~string((void *)(v2 + 1440));
                  *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 208);
                  *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                  if ( v25 )
                  {
                    *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 1504) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 1535) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 - 96 + 95) & 7) >= *(_BYTE *)(((v2 + 1535) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 1504, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 1504),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
                      "init",
                      930);
                    v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 1504),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                      v26,
                      (const char (*)[38])byte_1A978A40);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1504));
                    *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = -117901064;
                    v6 = -1;
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 224);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 1568),
                      &byte_1A978AA0,
                      (const std::allocator<char> *)(v2 + 224));
                    v27 = common::tools::TxtFile::Row::assignToStr(
                            row,
                            (const std::string *)(v2 + 1568),
                            (std::string *)(v2 + 416)) != 0;
                    std::string::~string((void *)(v2 + 1568));
                    *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 224);
                    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                    if ( v27 )
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
                        "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
                        "init",
                        935);
                      v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 1632),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                        v28,
                        (const char (*)[47])byte_1A978AE0);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1632));
                      *(_DWORD *)(((v2 + 1632) >> 3) + 0x7FFF8000) = -117901064;
                      v6 = -1;
                    }
                    else
                    {
                      v29 = ((v2 + 352) >> 3) + 2147450880;
                      *(_WORD *)v29 = 0;
                      *(_BYTE *)(v29 + 2) = 0;
                      v30 = (_DWORD *)(((v2 + 1856) >> 3) + 2147450880);
                      *v30 = 0;
                      v30[1] = 0;
                      *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 240);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 1856),
                        ";",
                        (const std::allocator<char> *)(v2 + 240));
                      *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 256);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 1888),
                        ",",
                        (const std::allocator<char> *)(v2 + 256));
                      __l._M_array = (std::initializer_list<std::string >::iterator)(v2 + 1856);
                      __l._M_len = 2LL;
                      *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 272));
                      std::vector<std::string>::vector(
                        (std::vector<std::string> *const)(v2 + 352),
                        __l,
                        (const std::vector<std::string>::allocator_type *)(v2 + 272));
                      v31 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                              (const std::string *)(v2 + 416),
                              (const std::vector<std::string> *)(v2 + 352),
                              &this->teach_score_id_list,
                              1) != 0;
                      std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 352));
                      v32 = ((v2 + 352) >> 3) + 2147450880;
                      *(_WORD *)v32 = -1800;
                      *(_BYTE *)(v32 + 2) = -8;
                      std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 272));
                      *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                      for ( j = (char *)(v2 + 1920); j != (char *)(v2 + 1856); std::string::~string(j) )
                        j -= 32;
                      v34 = (_DWORD *)(((v2 + 1856) >> 3) + 2147450880);
                      *v34 = -117901064;
                      v34[1] = -117901064;
                      std::allocator<char>::~allocator(v2 + 256);
                      *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                      std::allocator<char>::~allocator(v2 + 240);
                      *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                      if ( v31 )
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
                          "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
                          "init",
                          940);
                        v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                (common::milog::MiLogStream *const)(v2 + 1696),
                                (const char (*)[16])"[CONFIG_ERROR] ");
                        common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                          v35,
                          (const char (*)[47])byte_1A978AE0);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1696));
                        *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = -117901064;
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
  std::string::~string((void *)(v2 + 416));
  if ( v40 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80EC) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862736) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450936 - (((_DWORD)v4 + 2147450944) & 0xFFFFFFF8) + 188) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1952LL, v40);
  }
  return v6;
};

// Line 948: range 00000000127C6CE4-00000000127C8A5C
int32_t __cdecl data::ActivityChessLevelExcelConfig::init(
        data::ActivityChessLevelExcelConfig *const this,
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
  unsigned __int64 v14; // rax
  _DWORD *v15; // rax
  bool v16; // r15
  unsigned __int64 v17; // rax
  char *i; // r14
  _DWORD *v19; // rax
  common::milog::MiLogStream *v20; // rax
  bool v21; // r14
  common::milog::MiLogStream *v22; // rax
  bool t; // [rsp+0h] [rbp-6D0h]
  bool ta; // [rsp+0h] [rbp-6D0h]
  bool tb; // [rsp+0h] [rbp-6D0h]
  bool tc; // [rsp+0h] [rbp-6D0h]
  bool td; // [rsp+0h] [rbp-6D0h]
  bool te; // [rsp+0h] [rbp-6D0h]
  bool tf; // [rsp+0h] [rbp-6D0h]
  bool tg; // [rsp+0h] [rbp-6D0h]
  char v32[1712]; // [rsp+20h] [rbp-6B0h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1664LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "34 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unkno"
                        "wn> 208 1 9 <unknown> 224 24 9 <unknown> 288 32 11 val_str:949 352 32 9 <unknown> 416 32 9 <unkn"
                        "own> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unkno"
                        "wn> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown> 1056 32 9 <unkno"
                        "wn> 1120 32 9 <unknown> 1184 32 9 <unknown> 1248 32 9 <unknown> 1312 32 9 <unknown> 1376 32 9 <u"
                        "nknown> 1440 32 9 <unknown> 1504 32 9 <unknown> 1568 64 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityChessLevelExcelConfig::init;
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
  v4[536862764] = -218959118;
  v4[536862766] = -218959118;
  v4[536862768] = -218959118;
  v4[536862771] = -202116109;
  std::string::basic_string(v2 + 288);
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 352),
    &byte_1A978DE0,
    (const std::allocator<char> *)(v2 + 32));
  t = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 352), &this->level) != 0;
  std::string::~string((void *)(v2 + 352));
  *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( t )
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
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "init",
      952);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 416),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v5, (const char (*)[27])byte_1A978E20);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
    *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 480),
      &byte_1A978E60,
      (const std::allocator<char> *)(v2 + 48));
    ta = common::tools::TxtFile::Row::assignToNum<unsigned int>(
           row,
           (const std::string *)(v2 + 480),
           &this->exp_to_next) != 0;
    std::string::~string((void *)(v2 + 480));
    *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
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
        "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
        "init",
        957);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 544),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(v7, (const char (*)[51])byte_1A978EA0);
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
        &byte_1A978F00,
        (const std::allocator<char> *)(v2 + 64));
      tb = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 608), &this->home_hp) != 0;
      std::string::~string((void *)(v2 + 608));
      *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( tb )
      {
        *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 672) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 672, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 672),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
          "init",
          962);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 672),
               (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v8, (const char (*)[33])byte_1A978F40);
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
          &byte_1A978FA0,
          (const std::allocator<char> *)(v2 + 80));
        tc = common::tools::TxtFile::Row::assignToNum<unsigned int>(
               row,
               (const std::string *)(v2 + 736),
               &this->initial_build) != 0;
        std::string::~string((void *)(v2 + 736));
        *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
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
            "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
            "init",
            967);
          v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v2 + 800),
                 (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v9, (const char (*)[36])byte_1A978FE0);
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
            &byte_1A979040,
            (const std::allocator<char> *)(v2 + 96));
          td = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                 row,
                 (const std::string *)(v2 + 864),
                 &this->card_count) != 0;
          std::string::~string((void *)(v2 + 864));
          *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 96);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( td )
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
              "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
              "init",
              972);
            v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 928),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v10, (const char (*)[33])byte_1A979080);
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
              &byte_1A9790E0,
              (const std::allocator<char> *)(v2 + 112));
            te = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                   row,
                   (const std::string *)(v2 + 992),
                   &this->card_cost) != 0;
            std::string::~string((void *)(v2 + 992));
            *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 112);
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
            if ( te )
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
                "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
                "init",
                977);
              v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1056),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v11, (const char (*)[33])byte_1A979120);
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
                &byte_1A979180,
                (const std::allocator<char> *)(v2 + 128));
              tf = common::tools::TxtFile::Row::assignToEnum<data::CardFortuneType>(
                     row,
                     (const std::string *)(v2 + 1120),
                     &this->card_fortune) != 0;
              std::string::~string((void *)(v2 + 1120));
              *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 128);
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
              if ( tf )
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
                  "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
                  "init",
                  982);
                v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1184),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v12, (const char (*)[27])byte_1A9791C0);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1184));
                *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = -117901064;
                v6 = -1;
              }
              else
              {
                *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 144);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1248),
                  &byte_1A979200,
                  (const std::allocator<char> *)(v2 + 144));
                tg = common::tools::TxtFile::Row::assignToStr(
                       row,
                       (const std::string *)(v2 + 1248),
                       (std::string *)(v2 + 288)) != 0;
                std::string::~string((void *)(v2 + 1248));
                *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 144);
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
                if ( tg )
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
                    "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
                    "init",
                    987);
                  v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 1312),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    v13,
                    (const char (*)[33])byte_1A979240);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1312));
                  *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = -117901064;
                  v6 = -1;
                }
                else
                {
                  v14 = ((v2 + 224) >> 3) + 2147450880;
                  *(_WORD *)v14 = 0;
                  *(_BYTE *)(v14 + 2) = 0;
                  v15 = (_DWORD *)(((v2 + 1568) >> 3) + 2147450880);
                  *v15 = 0;
                  v15[1] = 0;
                  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 160);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1568),
                    ";",
                    (const std::allocator<char> *)(v2 + 160));
                  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 176);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1600),
                    ",",
                    (const std::allocator<char> *)(v2 + 176));
                  *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 192));
                  std::vector<std::string>::vector(
                    (std::vector<std::string> *const)(v2 + 224),
                    (std::initializer_list<std::string >)__PAIR128__(2LL, v2 + 1568),
                    (const std::vector<std::string>::allocator_type *)(v2 + 192));
                  v16 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                          (const std::string *)(v2 + 288),
                          (const std::vector<std::string> *)(v2 + 224),
                          &this->fortune_list,
                          1) != 0;
                  std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 224));
                  v17 = ((v2 + 224) >> 3) + 2147450880;
                  *(_WORD *)v17 = -1800;
                  *(_BYTE *)(v17 + 2) = -8;
                  std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 192));
                  *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                  for ( i = (char *)(v2 + 1632); i != (char *)(v2 + 1568); std::string::~string(i) )
                    i -= 32;
                  v19 = (_DWORD *)(((v2 + 1568) >> 3) + 2147450880);
                  *v19 = -117901064;
                  v19[1] = -117901064;
                  std::allocator<char>::~allocator(v2 + 176);
                  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                  std::allocator<char>::~allocator(v2 + 160);
                  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                  if ( v16 )
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
                      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
                      "init",
                      992);
                    v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 1376),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                      v20,
                      (const char (*)[33])byte_1A979240);
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
                      &byte_1A9792A0,
                      (const std::allocator<char> *)(v2 + 208));
                    v21 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                            row,
                            (const std::string *)(v2 + 1440),
                            &this->free_card_count) != 0;
                    std::string::~string((void *)(v2 + 1440));
                    *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 208);
                    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                    if ( v21 )
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
                        "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
                        "init",
                        997);
                      v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 1504),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                        v22,
                        (const char (*)[39])byte_1A9792E0);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1504));
                      *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = -117901064;
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
  std::string::~string((void *)(v2 + 288));
  if ( v32 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80C8) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862732) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450920 - (((_DWORD)v4 + 2147450928) & 0xFFFFFFF8) + 168) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1664LL, v32);
  }
  return v6;
};

// Line 1005: range 00000000127C8A5E-00000000127CA5BF
int32_t __cdecl data::ActivityChessMapExcelConfig::init(
        data::ActivityChessMapExcelConfig *const this,
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
  bool v20; // r15
  common::milog::MiLogStream *v21; // rax
  bool v22; // r15
  common::milog::MiLogStream *v23; // rax
  bool v24; // r15
  common::milog::MiLogStream *v25; // rax
  bool v26; // r15
  common::milog::MiLogStream *v27; // rax
  int32_t v28; // ebx
  char v30[1680]; // [rsp+10h] [rbp-690h] BYREF

  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1632LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "33 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 <unkn"
                        "own> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unkno"
                        "wn> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknow"
                        "n> 864 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <unkno"
                        "wn> 1184 32 9 <unknown> 1248 32 9 <unknown> 1312 32 9 <unknown> 1376 32 9 <unknown> 1440 32 9 <u"
                        "nknown> 1504 32 9 <unknown> 1568 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityChessMapExcelConfig::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862724] = -234753535;
  v4[536862725] = -234753535;
  v4[536862726] = -234753535;
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
  v4[536862766] = -218959118;
  v4[536862768] = -218959118;
  v4[536862770] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 224),
    &byte_1A9795C0,
    (const std::allocator<char> *)(v2 + 48));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 224), &this->chess_map_id) != 0;
  std::string::~string((void *)(v2 + 224));
  *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
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
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "init",
      1008);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 288),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v6, (const char (*)[33])byte_1A979600);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
    v7 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 352),
      &byte_1A979660,
      (const std::allocator<char> *)(v2 + 64));
    v8 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 352), &this->map_name) != 0;
    std::string::~string((void *)(v2 + 352));
    *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
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
        "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
        "init",
        1013);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 416),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v9, (const char (*)[48])byte_1A9796A0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
      v7 = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 480),
        &byte_1A979700,
        (const std::allocator<char> *)(v2 + 80));
      v10 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 480), &this->desc) != 0;
      std::string::~string((void *)(v2 + 480));
      *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( v10 )
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
          "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
          "init",
          1018);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 544),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v11, (const char (*)[48])byte_1A979740);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
        v7 = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 608),
          &byte_1A9797A0,
          (const std::allocator<char> *)(v2 + 96));
        v12 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 608), &this->unlock_tips) != 0;
        std::string::~string((void *)(v2 + 608));
        *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( v12 )
        {
          *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 672) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 672, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 672),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
            "init",
            1023);
          v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 672),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(v13, (const char (*)[54])byte_1A979800);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
          v7 = -1;
        }
        else
        {
          *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 112);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 736),
            &byte_1A979860,
            (const std::allocator<char> *)(v2 + 112));
          v14 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 736), &this->map_icon_path) != 0;
          std::string::~string((void *)(v2 + 736));
          *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( v14 )
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
              "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
              "init",
              1028);
            v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 800),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v15, (const char (*)[36])byte_1A9798A0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 800));
            v7 = -1;
          }
          else
          {
            *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 128);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 864),
              &byte_1A979900,
              (const std::allocator<char> *)(v2 + 128));
            v16 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                    row,
                    (const std::string *)(v2 + 864),
                    &this->build_gear_limit) != 0;
            std::string::~string((void *)(v2 + 864));
            *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 128);
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
            if ( v16 )
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
                "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
                "init",
                1033);
              v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 928),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v17, (const char (*)[45])byte_1A979940);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 928));
              v7 = -1;
            }
            else
            {
              *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 144);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 992),
                &byte_1A9799A0,
                (const std::allocator<char> *)(v2 + 144));
              v18 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                      row,
                      (const std::string *)(v2 + 992),
                      &this->dungeon_id) != 0;
              std::string::~string((void *)(v2 + 992));
              *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 144);
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
              if ( v18 )
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
                  "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
                  "init",
                  1038);
                v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1056),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v19, (const char (*)[39])byte_1A9799E0);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1056));
                v7 = -1;
              }
              else
              {
                *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 160);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1120),
                  &byte_1A979A40,
                  (const std::allocator<char> *)(v2 + 160));
                v20 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                        row,
                        (const std::string *)(v2 + 1120),
                        &this->entry_point_id) != 0;
                std::string::~string((void *)(v2 + 1120));
                *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 160);
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                if ( v20 )
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
                    "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
                    "init",
                    1043);
                  v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 1184),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                    v21,
                    (const char (*)[36])byte_1A979A80);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1184));
                  v7 = -1;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 176);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1248),
                    &byte_1A979AE0,
                    (const std::allocator<char> *)(v2 + 176));
                  v22 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                          row,
                          (const std::string *)(v2 + 1248),
                          &this->unlock_day) != 0;
                  std::string::~string((void *)(v2 + 1248));
                  *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 176);
                  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                  if ( v22 )
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
                      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
                      "init",
                      1048);
                    v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 1312),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                      v23,
                      (const char (*)[33])byte_1A979B20);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1312));
                    v7 = -1;
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 192);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 1376),
                      &byte_1A979B80,
                      (const std::allocator<char> *)(v2 + 192));
                    v24 = common::tools::TxtFile::Row::assignToNum<bool>(
                            row,
                            (const std::string *)(v2 + 1376),
                            &this->is_teach_map) != 0;
                    std::string::~string((void *)(v2 + 1376));
                    *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 192);
                    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                    if ( v24 )
                    {
                      *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 1440) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 1471) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 1471) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 1440, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 1440),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
                        "init",
                        1053);
                      v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 1440),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                        v25,
                        (const char (*)[36])byte_1A979BC0);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1440));
                      v7 = -1;
                    }
                    else
                    {
                      *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 208);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 1504),
                        &byte_1A979C20,
                        (const std::allocator<char> *)(v2 + 208));
                      v26 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                              row,
                              (const std::string *)(v2 + 1504),
                              &this->prev_map_id) != 0;
                      std::string::~string((void *)(v2 + 1504));
                      *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 208);
                      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                      if ( v26 )
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
                          "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
                          "init",
                          1058);
                        v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                (common::milog::MiLogStream *const)(v2 + 1568),
                                (const char (*)[16])"[CONFIG_ERROR] ");
                        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                          v27,
                          (const char (*)[39])byte_1A979C60);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1568));
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
  v28 = v7;
  if ( v30 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8050) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8060) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8068) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8070) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8078) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8080) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8088) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8090) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8098) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80A0) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80A8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80B0) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80B8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80C0) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80C8) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1632LL, v30);
  }
  return v28;
};

// Line 1066: range 00000000127CA5C0-00000000127CB69A
int32_t __cdecl data::ActivityChessScheduleExcelConfig::init(
        data::ActivityChessScheduleExcelConfig *const this,
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
  bool t; // [rsp+8h] [rbp-408h]
  bool ta; // [rsp+8h] [rbp-408h]
  bool tb; // [rsp+8h] [rbp-408h]
  char v22[1008]; // [rsp+20h] [rbp-3F0h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(960LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "19 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 24 9 <unknown> 224 32 12 val_str:1067 288 32 9 <unknown> 352 32"
                        " 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 "
                        "9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 64 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityChessScheduleExcelConfig::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862724] = -234753535;
  v4[536862725] = -234881024;
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
  v4[536862749] = -202116109;
  std::string::basic_string(v2 + 224);
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 288),
    &byte_1A979E40,
    (const std::allocator<char> *)(v2 + 48));
  t = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 288), &this->day) != 0;
  std::string::~string((void *)(v2 + 288));
  *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( t )
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
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "init",
      1070);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 352),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v5, (const char (*)[27])byte_1A979E80);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
    *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 416),
      &byte_1A979EC0,
      (const std::allocator<char> *)(v2 + 64));
    ta = common::tools::TxtFile::Row::assignToNum<unsigned int>(
           row,
           (const std::string *)(v2 + 416),
           &this->exp_up_limit) != 0;
    std::string::~string((void *)(v2 + 416));
    *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( ta )
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
        "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
        "init",
        1075);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 480),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v7, (const char (*)[39])byte_1A979F00);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
      *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 544),
        &byte_1A979F60,
        (const std::allocator<char> *)(v2 + 80));
      tb = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 544), (std::string *)(v2 + 224)) != 0;
      std::string::~string((void *)(v2 + 544));
      *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( tb )
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
          "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
          "init",
          1080);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 608),
               (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v8, (const char (*)[39])byte_1A979FA0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
        *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
      }
      else
      {
        v9 = ((v2 + 160) >> 3) + 2147450880;
        *(_WORD *)v9 = 0;
        *(_BYTE *)(v9 + 2) = 0;
        v10 = (_DWORD *)(((v2 + 864) >> 3) + 2147450880);
        *v10 = 0;
        v10[1] = 0;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 864),
          ";",
          (const std::allocator<char> *)(v2 + 96));
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 112);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 896),
          ",",
          (const std::allocator<char> *)(v2 + 112));
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
        std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 128));
        std::vector<std::string>::vector(
          (std::vector<std::string> *const)(v2 + 160),
          (std::initializer_list<std::string >)__PAIR128__(2LL, v2 + 864),
          (const std::vector<std::string>::allocator_type *)(v2 + 128));
        v11 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                (const std::string *)(v2 + 224),
                (const std::vector<std::string> *)(v2 + 160),
                &this->open_map_list,
                1) != 0;
        std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 160));
        v12 = ((v2 + 160) >> 3) + 2147450880;
        *(_WORD *)v12 = -1800;
        *(_BYTE *)(v12 + 2) = -8;
        std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 128));
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
        for ( i = (char *)(v2 + 928); i != (char *)(v2 + 864); std::string::~string(i) )
          i -= 32;
        v14 = (_DWORD *)(((v2 + 864) >> 3) + 2147450880);
        *v14 = -117901064;
        v14[1] = -117901064;
        std::allocator<char>::~allocator(v2 + 112);
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( v11 )
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
            "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
            "init",
            1085);
          v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 672),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v15, (const char (*)[39])byte_1A979FA0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
          *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
          v6 = -1;
        }
        else
        {
          *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 144);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 736),
            &byte_1A97A000,
            (const std::allocator<char> *)(v2 + 144));
          v16 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                  row,
                  (const std::string *)(v2 + 736),
                  &this->cond_id) != 0;
          std::string::~string((void *)(v2 + 736));
          *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 144);
          *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
          if ( v16 )
          {
            *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 800) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 64 + 127) & 7) >= *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 800, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 800),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
              "init",
              1090);
            v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 800),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v17, (const char (*)[29])byte_1A97A040);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 800));
            *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
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
  std::string::~string((void *)(v2 + 224));
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862730) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450912 - (((_DWORD)v4 + 2147450920) & 0xFFFFFFF8) + 88) & 0xFFFFFFF8) >> 3));
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
  return v6;
};

// Line 1098: range 00000000127CB69C-00000000127CD3F0
int32_t __cdecl data::ActivityChessGearExcelConfig::init(
        data::ActivityChessGearExcelConfig *const this,
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
  char *i; // r14
  _DWORD *v17; // rax
  common::milog::MiLogStream *v18; // rax
  bool v19; // r14
  common::milog::MiLogStream *v20; // rax
  bool v21; // r14
  common::milog::MiLogStream *v22; // rax
  bool v23; // r14
  common::milog::MiLogStream *v24; // rax
  bool t; // [rsp+0h] [rbp-6D0h]
  bool ta; // [rsp+0h] [rbp-6D0h]
  bool tb; // [rsp+0h] [rbp-6D0h]
  bool tc; // [rsp+0h] [rbp-6D0h]
  bool td; // [rsp+0h] [rbp-6D0h]
  bool te; // [rsp+0h] [rbp-6D0h]
  char v32[1712]; // [rsp+20h] [rbp-6B0h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1664LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "34 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unkno"
                        "wn> 208 1 9 <unknown> 224 24 9 <unknown> 288 32 12 val_str:1099 352 32 9 <unknown> 416 32 9 <unk"
                        "nown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unkn"
                        "own> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown> 1056 32 9 <unkn"
                        "own> 1120 32 9 <unknown> 1184 32 9 <unknown> 1248 32 9 <unknown> 1312 32 9 <unknown> 1376 32 9 <"
                        "unknown> 1440 32 9 <unknown> 1504 32 9 <unknown> 1568 64 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityChessGearExcelConfig::init;
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
  v4[536862764] = -218959118;
  v4[536862766] = -218959118;
  v4[536862768] = -218959118;
  v4[536862771] = -202116109;
  std::string::basic_string(v2 + 288);
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 352),
    &byte_1A97A320,
    (const std::allocator<char> *)(v2 + 32));
  t = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 352), &this->gear_id) != 0;
  std::string::~string((void *)(v2 + 352));
  *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( t )
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
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "init",
      1102);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 416),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v5, (const char (*)[32])byte_1A97A360);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
    *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 480),
      &byte_1A97A3A0,
      (const std::allocator<char> *)(v2 + 48));
    ta = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 480), &this->build_cost) != 0;
    std::string::~string((void *)(v2 + 480));
    *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
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
        "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
        "init",
        1107);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 544),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v7, (const char (*)[36])byte_1A97A3E0);
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
        &byte_1A97A440,
        (const std::allocator<char> *)(v2 + 64));
      tb = common::tools::TxtFile::Row::assignToNum<unsigned int>(
             row,
             (const std::string *)(v2 + 608),
             &this->demolition_refund) != 0;
      std::string::~string((void *)(v2 + 608));
      *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( tb )
      {
        *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 672) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 672, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 672),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
          "init",
          1112);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 672),
               (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v8, (const char (*)[42])byte_1A97A480);
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
          &byte_1A97A4E0,
          (const std::allocator<char> *)(v2 + 80));
        tc = common::tools::TxtFile::Row::assignToNum<unsigned int>(
               row,
               (const std::string *)(v2 + 736),
               &this->gadget_id) != 0;
        std::string::~string((void *)(v2 + 736));
        *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
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
            "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
            "init",
            1117);
          v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v2 + 800),
                 (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v9, (const char (*)[29])byte_1A97A520);
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
            &byte_1A97A560,
            (const std::allocator<char> *)(v2 + 96));
          td = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                 row,
                 (const std::string *)(v2 + 864),
                 &this->build_limit) != 0;
          std::string::~string((void *)(v2 + 864));
          *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 96);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( td )
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
              "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
              "init",
              1122);
            v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 928),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v10, (const char (*)[33])byte_1A97A5A0);
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
              &byte_1A97A600,
              (const std::allocator<char> *)(v2 + 112));
            te = common::tools::TxtFile::Row::assignToStr(
                   row,
                   (const std::string *)(v2 + 992),
                   (std::string *)(v2 + 288)) != 0;
            std::string::~string((void *)(v2 + 992));
            *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 112);
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
            if ( te )
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
                "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
                "init",
                1127);
              v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1056),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v11, (const char (*)[39])byte_1A97A640);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1056));
              *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -117901064;
              v6 = -1;
            }
            else
            {
              v12 = ((v2 + 224) >> 3) + 2147450880;
              *(_WORD *)v12 = 0;
              *(_BYTE *)(v12 + 2) = 0;
              v13 = (_DWORD *)(((v2 + 1568) >> 3) + 2147450880);
              *v13 = 0;
              v13[1] = 0;
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 128);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1568),
                ";",
                (const std::allocator<char> *)(v2 + 128));
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 144);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1600),
                ",",
                (const std::allocator<char> *)(v2 + 144));
              *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
              std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 160));
              std::vector<std::string>::vector(
                (std::vector<std::string> *const)(v2 + 224),
                (std::initializer_list<std::string >)__PAIR128__(2LL, v2 + 1568),
                (const std::vector<std::string>::allocator_type *)(v2 + 160));
              v14 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                      (const std::string *)(v2 + 288),
                      (const std::vector<std::string> *)(v2 + 224),
                      &this->ban_dungeon_list,
                      1) != 0;
              std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 224));
              v15 = ((v2 + 224) >> 3) + 2147450880;
              *(_WORD *)v15 = -1800;
              *(_BYTE *)(v15 + 2) = -8;
              std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 160));
              *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
              for ( i = (char *)(v2 + 1632); i != (char *)(v2 + 1568); std::string::~string(i) )
                i -= 32;
              v17 = (_DWORD *)(((v2 + 1568) >> 3) + 2147450880);
              *v17 = -117901064;
              v17[1] = -117901064;
              std::allocator<char>::~allocator(v2 + 144);
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
              std::allocator<char>::~allocator(v2 + 128);
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
              if ( v14 )
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
                  "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
                  "init",
                  1132);
                v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1120),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v18, (const char (*)[39])byte_1A97A640);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1120));
                *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -117901064;
                v6 = -1;
              }
              else
              {
                *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 176);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1184),
                  &byte_1A97A6A0,
                  (const std::allocator<char> *)(v2 + 176));
                v19 = common::tools::TxtFile::Row::assignToNum<bool>(
                        row,
                        (const std::string *)(v2 + 1184),
                        &this->is_enable_rotate) != 0;
                std::string::~string((void *)(v2 + 1184));
                *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 176);
                *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                if ( v19 )
                {
                  *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 1248) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 1279) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 1279) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 1248, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 1248),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
                    "init",
                    1137);
                  v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 1248),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    v20,
                    (const char (*)[33])byte_1A97A6E0);
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
                    &byte_1A97A740,
                    (const std::allocator<char> *)(v2 + 192));
                  v21 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                          row,
                          (const std::string *)(v2 + 1312),
                          &this->init_level) != 0;
                  std::string::~string((void *)(v2 + 1312));
                  *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 192);
                  *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                  if ( v21 )
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
                      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
                      "init",
                      1142);
                    v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 1376),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                      v22,
                      (const char (*)[33])byte_1A97A780);
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
                      &byte_1A97A7E0,
                      (const std::allocator<char> *)(v2 + 208));
                    v23 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                            row,
                            (const std::string *)(v2 + 1440),
                            &this->need_chess_level) != 0;
                    std::string::~string((void *)(v2 + 1440));
                    *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 208);
                    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
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
                        "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
                        "init",
                        1147);
                      v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 1504),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                        v24,
                        (const char (*)[39])byte_1A97A820);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1504));
                      *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = -117901064;
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
  std::string::~string((void *)(v2 + 288));
  if ( v32 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80C8) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862732) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450920 - (((_DWORD)v4 + 2147450928) & 0xFFFFFFF8) + 168) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1664LL, v32);
  }
  return v6;
};

// Line 1155: range 00000000127CD3F2-00000000127CF0FE
int32_t __cdecl data::ChessCardEffect::init(data::ChessCardEffect *const this, const common::tools::TxtFile::Row *row)
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
  bool v19; // r14
  common::milog::MiLogStream *v20; // rax
  bool v21; // r14
  common::milog::MiLogStream *v22; // rax
  bool v23; // r14
  common::milog::MiLogStream *v24; // rax
  bool v25; // r14
  common::milog::MiLogStream *v26; // rax
  bool v27; // r14
  common::milog::MiLogStream *v28; // rax
  bool t; // [rsp+0h] [rbp-6D0h]
  bool ta; // [rsp+0h] [rbp-6D0h]
  char v32[1712]; // [rsp+20h] [rbp-6B0h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1664LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "34 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unkno"
                        "wn> 208 1 9 <unknown> 224 24 9 <unknown> 288 32 12 val_str:1156 352 32 9 <unknown> 416 32 9 <unk"
                        "nown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unkn"
                        "own> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown> 1056 32 9 <unkn"
                        "own> 1120 32 9 <unknown> 1184 32 9 <unknown> 1248 32 9 <unknown> 1312 32 9 <unknown> 1376 32 9 <"
                        "unknown> 1440 32 9 <unknown> 1504 32 9 <unknown> 1568 64 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ChessCardEffect::init;
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
  v4[536862764] = -218959118;
  v4[536862766] = -218959118;
  v4[536862768] = -218959118;
  v4[536862771] = -202116109;
  std::string::basic_string(v2 + 288);
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 352),
    &byte_1A97AB20,
    (const std::allocator<char> *)(v2 + 32));
  t = common::tools::TxtFile::Row::assignToEnum<data::ChessCardTargetType>(
        row,
        (const std::string *)(v2 + 352),
        &this->target_type) != 0;
  std::string::~string((void *)(v2 + 352));
  *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( t )
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
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "init",
      1159);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 416),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v5, (const char (*)[33])byte_1A97AB60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
    *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 480),
      &byte_1A97ABC0,
      (const std::allocator<char> *)(v2 + 48));
    ta = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 480), (std::string *)(v2 + 288)) != 0;
    std::string::~string((void *)(v2 + 480));
    *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
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
        "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
        "init",
        1164);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 544),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v7, (const char (*)[39])byte_1A97AC00);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
      *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v8 = ((v2 + 224) >> 3) + 2147450880;
      *(_WORD *)v8 = 0;
      *(_BYTE *)(v8 + 2) = 0;
      v9 = (_DWORD *)(((v2 + 1568) >> 3) + 2147450880);
      *v9 = 0;
      v9[1] = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 1568),
        ";",
        (const std::allocator<char> *)(v2 + 64));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 1600),
        ",",
        (const std::allocator<char> *)(v2 + 80));
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 96));
      std::vector<std::string>::vector(
        (std::vector<std::string> *const)(v2 + 224),
        (std::initializer_list<std::string >)__PAIR128__(2LL, v2 + 1568),
        (const std::vector<std::string>::allocator_type *)(v2 + 96));
      v10 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
              (const std::string *)(v2 + 288),
              (const std::vector<std::string> *)(v2 + 224),
              &this->target_param_list,
              1) != 0;
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 224));
      v11 = ((v2 + 224) >> 3) + 2147450880;
      *(_WORD *)v11 = -1800;
      *(_BYTE *)(v11 + 2) = -8;
      std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 96));
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      for ( i = (char *)(v2 + 1632); i != (char *)(v2 + 1568); std::string::~string(i) )
        i -= 32;
      v13 = (_DWORD *)(((v2 + 1568) >> 3) + 2147450880);
      *v13 = -117901064;
      v13[1] = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( v10 )
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
          "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
          "init",
          1169);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 608),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v14, (const char (*)[39])byte_1A97AC00);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
        *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 112);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 672),
          &byte_1A97AC60,
          (const std::allocator<char> *)(v2 + 112));
        v15 = common::tools::TxtFile::Row::assignToEnum<data::ChessCardEffectType>(
                row,
                (const std::string *)(v2 + 672),
                &this->effect_type) != 0;
        std::string::~string((void *)(v2 + 672));
        *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 112);
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
        if ( v15 )
        {
          *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 736) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 736, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 736),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
            "init",
            1174);
          v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 736),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v16, (const char (*)[27])byte_1A97ACA0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 736));
          *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
          v6 = -1;
        }
        else
        {
          *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 128);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 800),
            &byte_1A97ACE0,
            (const std::allocator<char> *)(v2 + 128));
          v17 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 800), &this->effect_str_param) != 0;
          std::string::~string((void *)(v2 + 800));
          *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 128);
          *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
          if ( v17 )
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
              "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
              "init",
              1179);
            v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 864),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v18, (const char (*)[36])byte_1A97AD20);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 864));
            *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
            v6 = -1;
          }
          else
          {
            *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 144);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 928),
              &byte_1A97AD80,
              (const std::allocator<char> *)(v2 + 144));
            v19 = common::tools::TxtFile::Row::assignToNum<int>(
                    row,
                    (const std::string *)(v2 + 928),
                    &this->effect_param1) != 0;
            std::string::~string((void *)(v2 + 928));
            *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 144);
            *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
            if ( v19 )
            {
              *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 992) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 992, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 992),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
                "init",
                1184);
              v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 992),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v20, (const char (*)[28])byte_1A97ADC0);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 992));
              *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
              v6 = -1;
            }
            else
            {
              *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 160);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1056),
                &byte_1A97AE00,
                (const std::allocator<char> *)(v2 + 160));
              v21 = common::tools::TxtFile::Row::assignToNum<int>(
                      row,
                      (const std::string *)(v2 + 1056),
                      &this->effect_param2) != 0;
              std::string::~string((void *)(v2 + 1056));
              *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 160);
              *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
              if ( v21 )
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
                  "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
                  "init",
                  1189);
                v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1120),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v22, (const char (*)[28])byte_1A97AE40);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1120));
                *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -117901064;
                v6 = -1;
              }
              else
              {
                *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 176);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1184),
                  &byte_1A97AE80,
                  (const std::allocator<char> *)(v2 + 176));
                v23 = common::tools::TxtFile::Row::assignToNum<int>(
                        row,
                        (const std::string *)(v2 + 1184),
                        &this->effect_param3) != 0;
                std::string::~string((void *)(v2 + 1184));
                *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 176);
                *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                if ( v23 )
                {
                  *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 1248) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 1279) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 1279) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 1248, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 1248),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
                    "init",
                    1194);
                  v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 1248),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                    v24,
                    (const char (*)[28])byte_1A97AEC0);
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
                    &byte_1A97AF00,
                    (const std::allocator<char> *)(v2 + 192));
                  v25 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                          row,
                          (const std::string *)(v2 + 1312),
                          &this->begin_round) != 0;
                  std::string::~string((void *)(v2 + 1312));
                  *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 192);
                  *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                  if ( v25 )
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
                      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
                      "init",
                      1199);
                    v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 1376),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                      v26,
                      (const char (*)[33])byte_1A97AF40);
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
                      &byte_1A97AFA0,
                      (const std::allocator<char> *)(v2 + 208));
                    v27 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                            row,
                            (const std::string *)(v2 + 1440),
                            &this->active_rounds) != 0;
                    std::string::~string((void *)(v2 + 1440));
                    *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 208);
                    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                    if ( v27 )
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
                        "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
                        "init",
                        1204);
                      v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 1504),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                        v28,
                        (const char (*)[33])byte_1A97AFE0);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1504));
                      *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = -117901064;
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
  std::string::~string((void *)(v2 + 288));
  if ( v32 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80C8) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862732) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450920 - (((_DWORD)v4 + 2147450928) & 0xFFFFFFF8) + 168) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1664LL, v32);
  }
  return v6;
};

// Line 1212: range 00000000127CF100-00000000127D5B74
int32_t __cdecl data::ActivityChessCardExcelConfig::init(
        data::ActivityChessCardExcelConfig *const this,
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
  bool v26; // r14
  common::milog::MiLogStream *v27; // rax
  bool v28; // r14
  common::milog::MiLogStream *v29; // rax
  bool v30; // r14
  common::milog::MiLogStream *v31; // rax
  bool v32; // r14
  common::milog::MiLogStream *v33; // rax
  bool v34; // r14
  common::milog::MiLogStream *v35; // rax
  bool v36; // r14
  common::milog::MiLogStream *v37; // rax
  bool v38; // r14
  common::milog::MiLogStream *v39; // rax
  bool v40; // r14
  common::milog::MiLogStream *v41; // rax
  bool v42; // r14
  common::milog::MiLogStream *v43; // rax
  bool v44; // r14
  common::milog::MiLogStream *v45; // rax
  bool v46; // r14
  data::ChessCardTargetType *p_target_type; // r14
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  bool v51; // r14
  bool v52; // r14
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  std::vector<unsigned int> *p_target_param_list; // r14
  unsigned __int64 v57; // rax
  _DWORD *v58; // rax
  bool v59; // r15
  unsigned __int64 v60; // rax
  char *k; // r14
  _DWORD *v62; // rax
  common::milog::MiLogStream *v63; // rax
  bool v64; // r14
  data::ChessCardEffectType *p_effect_type; // r14
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  bool v69; // r14
  std::string *p_effect_str_param; // r14
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rax
  bool v74; // r14
  int *p_effect_param1; // r14
  common::milog::MiLogStream *v76; // rax
  common::milog::MiLogStream *v77; // rax
  common::milog::MiLogStream *v78; // rax
  bool v79; // r14
  int *p_effect_param2; // r14
  common::milog::MiLogStream *v81; // rax
  common::milog::MiLogStream *v82; // rax
  common::milog::MiLogStream *v83; // rax
  bool v84; // r14
  int *p_effect_param3; // r14
  common::milog::MiLogStream *v86; // rax
  common::milog::MiLogStream *v87; // rax
  common::milog::MiLogStream *v88; // rax
  bool v89; // r14
  unsigned int *p_begin_round; // r14
  common::milog::MiLogStream *v91; // rax
  common::milog::MiLogStream *v92; // rax
  common::milog::MiLogStream *v93; // rax
  bool v94; // r14
  unsigned int *p_active_rounds; // r14
  common::milog::MiLogStream *v96; // rax
  common::milog::MiLogStream *v97; // rax
  common::milog::MiLogStream *v98; // rax
  bool t; // [rsp+0h] [rbp-1870h]
  bool ta; // [rsp+0h] [rbp-1870h]
  bool tb; // [rsp+0h] [rbp-1870h]
  bool tc; // [rsp+0h] [rbp-1870h]
  bool td; // [rsp+0h] [rbp-1870h]
  bool te; // [rsp+0h] [rbp-1870h]
  bool tf; // [rsp+0h] [rbp-1870h]
  bool tg; // [rsp+0h] [rbp-1870h]
  bool th; // [rsp+0h] [rbp-1870h]
  bool ti; // [rsp+0h] [rbp-1870h]
  bool tj; // [rsp+0h] [rbp-1870h]
  std::initializer_list<std::string > __l; // [rsp+10h] [rbp-1860h]
  uint32_t array_count; // [rsp+38h] [rbp-1838h]
  uint32_t i; // [rsp+3Ch] [rbp-1834h]
  char v114[6192]; // [rsp+40h] [rbp-1830h] BYREF

  v2 = (unsigned __int64)v114;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_7(6144LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "125 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9"
                        " <unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unkn"
                        "own> 208 1 9 <unknown> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 2"
                        "88 1 9 <unknown> 304 1 9 <unknown> 320 1 9 <unknown> 336 1 9 <unknown> 352 1 9 <unknown> 368 1 9"
                        " <unknown> 384 1 9 <unknown> 400 1 9 <unknown> 416 1 9 <unknown> 432 1 9 <unknown> 448 1 9 <unkn"
                        "own> 464 1 9 <unknown> 480 1 9 <unknown> 496 1 9 <unknown> 512 1 9 <unknown> 528 1 9 <unknown> 5"
                        "44 1 9 <unknown> 560 1 9 <unknown> 576 1 9 <unknown> 592 1 9 <unknown> 608 1 9 <unknown> 624 1 9"
                        " <unknown> 640 1 9 <unknown> 656 1 9 <unknown> 672 1 9 <unknown> 688 1 9 <unknown> 704 1 9 <unkn"
                        "own> 720 1 9 <unknown> 736 1 9 <unknown> 752 1 9 <unknown> 768 24 9 <unknown> 832 24 9 <unknown>"
                        " 896 32 12 val_str:1215 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 <unknown> 1152 32 9 <un"
                        "known> 1216 32 9 <unknown> 1280 32 9 <unknown> 1344 32 9 <unknown> 1408 32 9 <unknown> 1472 32 9"
                        " <unknown> 1536 32 9 <unknown> 1600 32 9 <unknown> 1664 32 9 <unknown> 1728 32 9 <unknown> 1792 "
                        "32 9 <unknown> 1856 32 9 <unknown> 1920 32 9 <unknown> 1984 32 9 <unknown> 2048 32 9 <unknown> 2"
                        "112 32 9 <unknown> 2176 32 9 <unknown> 2240 32 9 <unknown> 2304 32 9 <unknown> 2368 32 9 <unknow"
                        "n> 2432 32 9 <unknown> 2496 32 9 <unknown> 2560 32 9 <unknown> 2624 32 9 <unknown> 2688 32 9 <un"
                        "known> 2752 32 9 <unknown> 2816 32 9 <unknown> 2880 32 9 <unknown> 2944 32 9 <unknown> 3008 32 9"
                        " <unknown> 3072 32 9 <unknown> 3136 32 9 <unknown> 3200 32 9 <unknown> 3264 32 9 <unknown> 3328 "
                        "32 9 <unknown> 3392 32 9 <unknown> 3456 32 9 <unknown> 3520 32 9 <unknown> 3584 32 9 <unknown> 3"
                        "648 32 9 <unknown> 3712 32 9 <unknown> 3776 32 9 <unknown> 3840 32 9 <unknown> 3904 32 9 <unknow"
                        "n> 3968 32 9 <unknown> 4032 32 9 <unknown> 4096 32 9 <unknown> 4160 32 9 <unknown> 4224 32 9 <un"
                        "known> 4288 32 9 <unknown> 4352 32 9 <unknown> 4416 32 9 <unknown> 4480 32 9 <unknown> 4544 32 9"
                        " <unknown> 4608 32 9 <unknown> 4672 32 9 <unknown> 4736 32 9 <unknown> 4800 32 9 <unknown> 4864 "
                        "32 9 <unknown> 4928 32 9 <unknown> 4992 32 9 <unknown> 5056 32 9 <unknown> 5120 32 9 <unknown> 5"
                        "184 32 9 <unknown> 5248 32 9 <unknown> 5312 32 9 <unknown> 5376 32 9 <unknown> 5440 32 9 <unknow"
                        "n> 5504 32 9 <unknown> 5568 32 9 <unknown> 5632 64 9 <unknown> 5728 64 9 <unknown> 5824 256 13 col_name:1213";
  *(_QWORD *)(v2 + 16) = data::ActivityChessCardExcelConfig::init;
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
  v4[536862744] = -234881024;
  v4[536862745] = -218959118;
  v4[536862746] = -234881024;
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
  v4[536862898] = -218959118;
  v4[536862901] = -218959118;
  v4[536862910] = -202116109;
  v4[536862911] = -202116109;
  std::string::basic_string(v2 + 896);
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 960),
    "ID",
    (const std::allocator<char> *)(v2 + 32));
  t = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 960), &this->id) != 0;
  std::string::~string((void *)(v2 + 960));
  *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( t )
  {
    *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 1024) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 1055) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 1055) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 1024, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 1024),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "init",
      1218);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 1024),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v5, (const char (*)[23])byte_1A97BA00);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1024));
    *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
    goto LABEL_156;
  }
  *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 1088),
    &byte_1A97BA40,
    (const std::allocator<char> *)(v2 + 48));
  ta = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 1088), &this->number) != 0;
  std::string::~string((void *)(v2 + 1088));
  *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( ta )
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
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "init",
      1223);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 1152),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v7, (const char (*)[27])byte_1A97BA80);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1152));
    *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
    goto LABEL_156;
  }
  *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 1216),
    &byte_1A97BAC0,
    (const std::allocator<char> *)(v2 + 64));
  tb = common::tools::TxtFile::Row::assignToEnum<data::ChessCardTag>(row, (const std::string *)(v2 + 1216), &this->tag) != 0;
  std::string::~string((void *)(v2 + 1216));
  *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 64);
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( tb )
  {
    *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 1280) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 1311) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 1311) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 1280, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 1280),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "init",
      1228);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 1280),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v8, (const char (*)[30])byte_1A97BB00);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1280));
    *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
    goto LABEL_156;
  }
  *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 80);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 1344),
    &byte_1A97BB40,
    (const std::allocator<char> *)(v2 + 80));
  tc = common::tools::TxtFile::Row::assignToNum<unsigned int>(
         row,
         (const std::string *)(v2 + 1344),
         &this->need_chess_level) != 0;
  std::string::~string((void *)(v2 + 1344));
  *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 80);
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
  if ( tc )
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
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "init",
      1233);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 1408),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v9, (const char (*)[45])byte_1A97BB80);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1408));
    *(_DWORD *)(((v2 + 1408) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
    goto LABEL_156;
  }
  *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 96);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 1472),
    &byte_1A97BBE0,
    (const std::allocator<char> *)(v2 + 96));
  td = common::tools::TxtFile::Row::assignToNum<bool>(row, (const std::string *)(v2 + 1472), &this->is_disused) != 0;
  std::string::~string((void *)(v2 + 1472));
  *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 96);
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( td )
  {
    *(_DWORD *)(((v2 + 1536) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 1536) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 1567) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 1567) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 1536, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 1536),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "init",
      1238);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 1536),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v10, (const char (*)[33])byte_1A97BC20);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1536));
    *(_DWORD *)(((v2 + 1536) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
    goto LABEL_156;
  }
  *(_DWORD *)(((v2 + 1600) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 112);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 1600),
    &byte_1A97BC80,
    (const std::allocator<char> *)(v2 + 112));
  te = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 1600), &this->cost_points) != 0;
  std::string::~string((void *)(v2 + 1600));
  *(_DWORD *)(((v2 + 1600) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 112);
  *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
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
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "init",
      1243);
    v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 1664),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v11, (const char (*)[33])byte_1A97BCC0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1664));
    *(_DWORD *)(((v2 + 1664) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
    goto LABEL_156;
  }
  *(_DWORD *)(((v2 + 1728) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 128);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 1728),
    &byte_1A97BD20,
    (const std::allocator<char> *)(v2 + 128));
  tf = common::tools::TxtFile::Row::assignToEnum<data::ChessCardType>(
         row,
         (const std::string *)(v2 + 1728),
         &this->card_type) != 0;
  std::string::~string((void *)(v2 + 1728));
  *(_DWORD *)(((v2 + 1728) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 128);
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( tf )
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
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "init",
      1248);
    v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 1792),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v12, (const char (*)[33])byte_1A97BD60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1792));
    *(_DWORD *)(((v2 + 1792) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
    goto LABEL_156;
  }
  *(_DWORD *)(((v2 + 1856) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 144);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 1856),
    &byte_1A97BDC0,
    (const std::allocator<char> *)(v2 + 144));
  tg = common::tools::TxtFile::Row::assignToEnum<data::ChessCardQualityType>(
         row,
         (const std::string *)(v2 + 1856),
         &this->card_quality_type) != 0;
  std::string::~string((void *)(v2 + 1856));
  *(_DWORD *)(((v2 + 1856) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 144);
  *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
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
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "init",
      1253);
    v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 1920),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v13, (const char (*)[27])byte_1A97BE00);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1920));
    *(_DWORD *)(((v2 + 1920) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
    goto LABEL_156;
  }
  *(_DWORD *)(((v2 + 1984) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 160);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 1984),
    &byte_1A97BE40,
    (const std::allocator<char> *)(v2 + 160));
  th = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 1984), &this->card_count) != 0;
  std::string::~string((void *)(v2 + 1984));
  *(_DWORD *)(((v2 + 1984) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 160);
  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
  if ( th )
  {
    *(_DWORD *)(((v2 + 2048) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 2048) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 2079) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 2079) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 2048, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 2048),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "init",
      1258);
    v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 2048),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v14, (const char (*)[33])byte_1A97BE80);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2048));
    *(_DWORD *)(((v2 + 2048) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
    goto LABEL_156;
  }
  *(_DWORD *)(((v2 + 2112) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 176);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 2112),
    &byte_1A97BEE0,
    (const std::allocator<char> *)(v2 + 176));
  ti = common::tools::TxtFile::Row::assignToEnum<data::ChessCardTargetType>(
         row,
         (const std::string *)(v2 + 2112),
         &this->effect.target_type) != 0;
  std::string::~string((void *)(v2 + 2112));
  *(_DWORD *)(((v2 + 2112) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 176);
  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
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
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "init",
      1263);
    v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 2176),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v15, (const char (*)[39])byte_1A97BF20);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2176));
    *(_DWORD *)(((v2 + 2176) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
    goto LABEL_156;
  }
  *(_DWORD *)(((v2 + 2240) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 192);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 2240),
    &byte_1A97BF80,
    (const std::allocator<char> *)(v2 + 192));
  tj = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 2240), (std::string *)(v2 + 896)) != 0;
  std::string::~string((void *)(v2 + 2240));
  *(_DWORD *)(((v2 + 2240) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 192);
  *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
  if ( tj )
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
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "init",
      1268);
    v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 2304),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v16, (const char (*)[45])byte_1A97BFC0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2304));
    *(_DWORD *)(((v2 + 2304) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
    goto LABEL_156;
  }
  v17 = ((v2 + 768) >> 3) + 2147450880;
  *(_WORD *)v17 = 0;
  *(_BYTE *)(v17 + 2) = 0;
  v18 = (_DWORD *)(((v2 + 5632) >> 3) + 2147450880);
  *v18 = 0;
  v18[1] = 0;
  *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 208);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 5632),
    ";",
    (const std::allocator<char> *)(v2 + 208));
  *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 224);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 5664),
    ",",
    (const std::allocator<char> *)(v2 + 224));
  *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
  std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 240));
  std::vector<std::string>::vector(
    (std::vector<std::string> *const)(v2 + 768),
    (std::initializer_list<std::string >)__PAIR128__(2LL, v2 + 5632),
    (const std::vector<std::string>::allocator_type *)(v2 + 240));
  v19 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
          (const std::string *)(v2 + 896),
          (const std::vector<std::string> *)(v2 + 768),
          &this->effect.target_param_list,
          1) != 0;
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 768));
  v20 = ((v2 + 768) >> 3) + 2147450880;
  *(_WORD *)v20 = -1800;
  *(_BYTE *)(v20 + 2) = -8;
  std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 240));
  *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
  for ( j = (char *)(v2 + 5696); j != (char *)(v2 + 5632); std::string::~string(j) )
    j -= 32;
  v22 = (_DWORD *)(((v2 + 5632) >> 3) + 2147450880);
  *v22 = -117901064;
  v22[1] = -117901064;
  std::allocator<char>::~allocator(v2 + 224);
  *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
  std::allocator<char>::~allocator(v2 + 208);
  *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
  if ( v19 )
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
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "init",
      1273);
    v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 2368),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v23, (const char (*)[45])byte_1A97BFC0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2368));
    *(_DWORD *)(((v2 + 2368) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
    goto LABEL_156;
  }
  *(_DWORD *)(((v2 + 2432) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 256);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 2432),
    &byte_1A97C020,
    (const std::allocator<char> *)(v2 + 256));
  v24 = common::tools::TxtFile::Row::assignToEnum<data::ChessCardEffectType>(
          row,
          (const std::string *)(v2 + 2432),
          &this->effect.effect_type) != 0;
  std::string::~string((void *)(v2 + 2432));
  *(_DWORD *)(((v2 + 2432) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 256);
  *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
  if ( v24 )
  {
    *(_DWORD *)(((v2 + 2496) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 2496) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 2527) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 2527) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 2496, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 2496),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "init",
      1278);
    v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 2496),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v25, (const char (*)[33])byte_1A97C060);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2496));
    *(_DWORD *)(((v2 + 2496) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
    goto LABEL_156;
  }
  *(_DWORD *)(((v2 + 2560) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 272);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 2560),
    &byte_1A97C0C0,
    (const std::allocator<char> *)(v2 + 272));
  v26 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 2560), &this->effect.effect_str_param) != 0;
  std::string::~string((void *)(v2 + 2560));
  *(_DWORD *)(((v2 + 2560) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 272);
  *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
  if ( v26 )
  {
    *(_DWORD *)(((v2 + 2624) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 2624) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 2655) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 2655) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 2624, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 2624),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "init",
      1283);
    v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 2624),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v27, (const char (*)[42])byte_1A97C100);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2624));
    *(_DWORD *)(((v2 + 2624) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
    goto LABEL_156;
  }
  *(_DWORD *)(((v2 + 2688) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 288);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 2688),
    &byte_1A97C160,
    (const std::allocator<char> *)(v2 + 288));
  v28 = common::tools::TxtFile::Row::assignToNum<int>(
          row,
          (const std::string *)(v2 + 2688),
          &this->effect.effect_param1) != 0;
  std::string::~string((void *)(v2 + 2688));
  *(_DWORD *)(((v2 + 2688) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 288);
  *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
  if ( v28 )
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
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "init",
      1288);
    v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 2752),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v29, (const char (*)[34])byte_1A97C1A0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2752));
    *(_DWORD *)(((v2 + 2752) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
    goto LABEL_156;
  }
  *(_DWORD *)(((v2 + 2816) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 304);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 2816),
    &byte_1A97C200,
    (const std::allocator<char> *)(v2 + 304));
  v30 = common::tools::TxtFile::Row::assignToNum<int>(
          row,
          (const std::string *)(v2 + 2816),
          &this->effect.effect_param2) != 0;
  std::string::~string((void *)(v2 + 2816));
  *(_DWORD *)(((v2 + 2816) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 304);
  *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
  if ( v30 )
  {
    *(_DWORD *)(((v2 + 2880) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 2880) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 2911) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 2911) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 2880, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 2880),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "init",
      1293);
    v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 2880),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v31, (const char (*)[34])byte_1A97C240);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2880));
    *(_DWORD *)(((v2 + 2880) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
    goto LABEL_156;
  }
  *(_DWORD *)(((v2 + 2944) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 320);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 2944),
    &byte_1A97C2A0,
    (const std::allocator<char> *)(v2 + 320));
  v32 = common::tools::TxtFile::Row::assignToNum<int>(
          row,
          (const std::string *)(v2 + 2944),
          &this->effect.effect_param3) != 0;
  std::string::~string((void *)(v2 + 2944));
  *(_DWORD *)(((v2 + 2944) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 320);
  *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
  if ( v32 )
  {
    *(_DWORD *)(((v2 + 3008) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 3008) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 3039) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 3039) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 3008, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 3008),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "init",
      1298);
    v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 3008),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v33, (const char (*)[34])byte_1A97C2E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3008));
    *(_DWORD *)(((v2 + 3008) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
    goto LABEL_156;
  }
  *(_DWORD *)(((v2 + 3072) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 336);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 3072),
    &byte_1A97C340,
    (const std::allocator<char> *)(v2 + 336));
  v34 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
          row,
          (const std::string *)(v2 + 3072),
          &this->effect.begin_round) != 0;
  std::string::~string((void *)(v2 + 3072));
  *(_DWORD *)(((v2 + 3072) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 336);
  *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
  if ( v34 )
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
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "init",
      1303);
    v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 3136),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v35, (const char (*)[39])byte_1A97C380);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3136));
    *(_DWORD *)(((v2 + 3136) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
    goto LABEL_156;
  }
  *(_DWORD *)(((v2 + 3200) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 352);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 3200),
    &byte_1A97C3E0,
    (const std::allocator<char> *)(v2 + 352));
  v36 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
          row,
          (const std::string *)(v2 + 3200),
          &this->effect.active_rounds) != 0;
  std::string::~string((void *)(v2 + 3200));
  *(_DWORD *)(((v2 + 3200) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 352);
  *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
  if ( v36 )
  {
    *(_DWORD *)(((v2 + 3264) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 3264) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 3295) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 3295) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 3264, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 3264),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "init",
      1308);
    v37 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 3264),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v37, (const char (*)[39])byte_1A97C420);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3264));
    *(_DWORD *)(((v2 + 3264) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
    goto LABEL_156;
  }
  *(_DWORD *)(((v2 + 3328) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 368);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 3328),
    &byte_1A97C480,
    (const std::allocator<char> *)(v2 + 368));
  v38 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
          row,
          (const std::string *)(v2 + 3328),
          &this->curse_weight) != 0;
  std::string::~string((void *)(v2 + 3328));
  *(_DWORD *)(((v2 + 3328) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 368);
  *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
  if ( v38 )
  {
    *(_DWORD *)(((v2 + 3392) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 3392) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 3423) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 3423) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 3392, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 3392),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "init",
      1313);
    v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 3392),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v39, (const char (*)[39])byte_1A97C4C0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3392));
    *(_DWORD *)(((v2 + 3392) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
    goto LABEL_156;
  }
  *(_DWORD *)(((v2 + 3456) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 384);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 3456),
    &byte_1A97C520,
    (const std::allocator<char> *)(v2 + 384));
  v40 = common::tools::TxtFile::Row::assignToNum<bool>(
          row,
          (const std::string *)(v2 + 3456),
          &this->is_can_attach_curse) != 0;
  std::string::~string((void *)(v2 + 3456));
  *(_DWORD *)(((v2 + 3456) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 384);
  *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
  if ( v40 )
  {
    *(_DWORD *)(((v2 + 3520) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 3520) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 3551) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 3551) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 3520, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 3520),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "init",
      1318);
    v41 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 3520),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v41, (const char (*)[45])byte_1A97C560);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3520));
    *(_DWORD *)(((v2 + 3520) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
    goto LABEL_156;
  }
  *(_DWORD *)(((v2 + 3584) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 400);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 3584),
    &byte_1A97C5C0,
    (const std::allocator<char> *)(v2 + 400));
  v42 = common::tools::TxtFile::Row::assignToNum<bool>(row, (const std::string *)(v2 + 3584), &this->is_remove_on_pick) != 0;
  std::string::~string((void *)(v2 + 3584));
  *(_DWORD *)(((v2 + 3584) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 400);
  *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
  if ( v42 )
  {
    *(_DWORD *)(((v2 + 3648) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 3648) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 3679) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 3679) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 3648, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 3648),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "init",
      1323);
    v43 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 3648),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v43, (const char (*)[42])byte_1A97C600);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3648));
    *(_DWORD *)(((v2 + 3648) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
    goto LABEL_156;
  }
  *(_DWORD *)(((v2 + 3712) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 416);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 3712),
    &byte_1A97C660,
    (const std::allocator<char> *)(v2 + 416));
  v44 = common::tools::TxtFile::Row::assignToNum<bool>(row, (const std::string *)(v2 + 3712), &this->is_show_on_pick) != 0;
  std::string::~string((void *)(v2 + 3712));
  *(_DWORD *)(((v2 + 3712) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 416);
  *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
  if ( v44 )
  {
    *(_DWORD *)(((v2 + 3776) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 3776) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 3807) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 3807) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 3776, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 3776),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "init",
      1328);
    v45 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 3776),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v45, (const char (*)[45])byte_1A97C6A0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3776));
    *(_DWORD *)(((v2 + 3776) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
    goto LABEL_156;
  }
  std::vector<data::ChessCardEffect>::resize(&this->extra_effect_list, 3uLL);
  array_count = 0;
  for ( i = 0; ; ++i )
  {
    if ( i > 2 )
    {
      std::vector<data::ChessCardEffect>::resize(&this->extra_effect_list, array_count);
      v6 = 0;
      goto LABEL_156;
    }
    snprintf((char *)(v2 + 5824), 0x100uLL, asc_1A97C700, i + 1);
    *(_DWORD *)(((v2 + 3840) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 432);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 3840),
      (const char *)(v2 + 5824),
      (const std::allocator<char> *)(v2 + 432));
    v46 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 3840));
    std::string::~string((void *)(v2 + 3840));
    *(_DWORD *)(((v2 + 3840) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 432);
    *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = -8;
    if ( !v46 )
    {
      p_target_type = &std::vector<data::ChessCardEffect>::operator[](&this->extra_effect_list, i)->target_type;
      *(_DWORD *)(((v2 + 3904) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 448);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 3904),
        (const char *)(v2 + 5824),
        (const std::allocator<char> *)(v2 + 448));
      LOBYTE(p_target_type) = common::tools::TxtFile::Row::assignToEnum<data::ChessCardTargetType>(
                                row,
                                (const std::string *)(v2 + 3904),
                                p_target_type) != 0;
      std::string::~string((void *)(v2 + 3904));
      *(_DWORD *)(((v2 + 3904) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 448);
      *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = -8;
      if ( (_BYTE)p_target_type )
      {
        *(_DWORD *)(((v2 + 3968) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 3968) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 3999) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 3999) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 3968, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 3968),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
          "init",
          1340);
        v48 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 3968),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v49 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v48, (const char (*)[14])byte_1A97C740);
        v50 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(v49, (const char (*)[256])(v2 + 5824));
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v50, (const char (*)[7])byte_1A97C780);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3968));
        *(_DWORD *)(((v2 + 3968) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
        goto LABEL_156;
      }
      snprintf((char *)(v2 + 5824), 0x100uLL, asc_1A97C7C0, i + 1);
      *(_DWORD *)(((v2 + 4032) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 464);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 4032),
        (const char *)(v2 + 5824),
        (const std::allocator<char> *)(v2 + 464));
      v51 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 4032));
      std::string::~string((void *)(v2 + 4032));
      *(_DWORD *)(((v2 + 4032) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 464);
      *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = -8;
      if ( !v51 )
      {
        *(_DWORD *)(((v2 + 4096) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 480);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 4096),
          (const char *)(v2 + 5824),
          (const std::allocator<char> *)(v2 + 480));
        v52 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 4096), (std::string *)(v2 + 896)) != 0;
        std::string::~string((void *)(v2 + 4096));
        *(_DWORD *)(((v2 + 4096) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 480);
        *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = -8;
        if ( v52 )
        {
          *(_DWORD *)(((v2 + 4160) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 4160) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 4191) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 4191) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 4160, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 4160),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
            "init",
            1348);
          v53 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 4160),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v54 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v53, (const char (*)[14])byte_1A97C740);
          v55 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(v54, (const char (*)[256])(v2 + 5824));
          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v55, (const char (*)[7])byte_1A97C780);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4160));
          *(_DWORD *)(((v2 + 4160) >> 3) + 0x7FFF8000) = -117901064;
          v6 = -1;
          goto LABEL_156;
        }
        p_target_param_list = &std::vector<data::ChessCardEffect>::operator[](&this->extra_effect_list, i)->target_param_list;
        v57 = ((v2 + 832) >> 3) + 2147450880;
        *(_WORD *)v57 = 0;
        *(_BYTE *)(v57 + 2) = 0;
        v58 = (_DWORD *)(((v2 + 5728) >> 3) + 2147450880);
        *v58 = 0;
        v58[1] = 0;
        *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 496);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 5728),
          ";",
          (const std::allocator<char> *)(v2 + 496));
        *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 512);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 5760),
          ",",
          (const std::allocator<char> *)(v2 + 512));
        __l._M_array = (std::initializer_list<std::string >::iterator)(v2 + 5728);
        __l._M_len = 2LL;
        *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = 1;
        std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 528));
        std::vector<std::string>::vector(
          (std::vector<std::string> *const)(v2 + 832),
          __l,
          (const std::vector<std::string>::allocator_type *)(v2 + 528));
        v59 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                (const std::string *)(v2 + 896),
                (const std::vector<std::string> *)(v2 + 832),
                p_target_param_list,
                1) != 0;
        std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 832));
        v60 = ((v2 + 832) >> 3) + 2147450880;
        *(_WORD *)v60 = -1800;
        *(_BYTE *)(v60 + 2) = -8;
        std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 528));
        *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = -8;
        for ( k = (char *)(v2 + 5792); k != (char *)(v2 + 5728); std::string::~string(k) )
          k -= 32;
        v62 = (_DWORD *)(((v2 + 5728) >> 3) + 2147450880);
        *v62 = -117901064;
        v62[1] = -117901064;
        std::allocator<char>::~allocator(v2 + 512);
        *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = -8;
        std::allocator<char>::~allocator(v2 + 496);
        *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = -8;
        if ( v59 )
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
            "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
            "init",
            1353);
          v63 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 4224),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(v63, (const char (*)[55])byte_1A97C820);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4224));
          *(_DWORD *)(((v2 + 4224) >> 3) + 0x7FFF8000) = -117901064;
          v6 = -1;
          goto LABEL_156;
        }
        snprintf((char *)(v2 + 5824), 0x100uLL, asc_1A97C880, i + 1);
        *(_DWORD *)(((v2 + 4288) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 544);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 4288),
          (const char *)(v2 + 5824),
          (const std::allocator<char> *)(v2 + 544));
        v64 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 4288));
        std::string::~string((void *)(v2 + 4288));
        *(_DWORD *)(((v2 + 4288) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 544);
        *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = -8;
        if ( !v64 )
        {
          p_effect_type = &std::vector<data::ChessCardEffect>::operator[](&this->extra_effect_list, i)->effect_type;
          *(_DWORD *)(((v2 + 4352) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 560);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 4352),
            (const char *)(v2 + 5824),
            (const std::allocator<char> *)(v2 + 560));
          LOBYTE(p_effect_type) = common::tools::TxtFile::Row::assignToEnum<data::ChessCardEffectType>(
                                    row,
                                    (const std::string *)(v2 + 4352),
                                    p_effect_type) != 0;
          std::string::~string((void *)(v2 + 4352));
          *(_DWORD *)(((v2 + 4352) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 560);
          *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = -8;
          if ( (_BYTE)p_effect_type )
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
              "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
              "init",
              1361);
            v66 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 4416),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v67 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v66,
                    (const char (*)[14])byte_1A97C740);
            v68 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                    v67,
                    (const char (*)[256])(v2 + 5824));
            common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v68, (const char (*)[7])byte_1A97C780);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4416));
            *(_DWORD *)(((v2 + 4416) >> 3) + 0x7FFF8000) = -117901064;
            v6 = -1;
            goto LABEL_156;
          }
          snprintf((char *)(v2 + 5824), 0x100uLL, asc_1A97C8C0, i + 1);
          *(_DWORD *)(((v2 + 4480) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 576);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 4480),
            (const char *)(v2 + 5824),
            (const std::allocator<char> *)(v2 + 576));
          v69 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 4480));
          std::string::~string((void *)(v2 + 4480));
          *(_DWORD *)(((v2 + 4480) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 576);
          *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) = -8;
          if ( !v69 )
          {
            p_effect_str_param = &std::vector<data::ChessCardEffect>::operator[](&this->extra_effect_list, i)->effect_str_param;
            *(_DWORD *)(((v2 + 4544) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 592);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 4544),
              (const char *)(v2 + 5824),
              (const std::allocator<char> *)(v2 + 592));
            LOBYTE(p_effect_str_param) = common::tools::TxtFile::Row::assignToStr(
                                           row,
                                           (const std::string *)(v2 + 4544),
                                           p_effect_str_param) != 0;
            std::string::~string((void *)(v2 + 4544));
            *(_DWORD *)(((v2 + 4544) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 592);
            *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) = -8;
            if ( (_BYTE)p_effect_str_param )
            {
              *(_DWORD *)(((v2 + 4608) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 4608) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 4639) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 4639) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 4608, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 4608),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
                "init",
                1369);
              v71 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 4608),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v72 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v71,
                      (const char (*)[14])byte_1A97C740);
              v73 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                      v72,
                      (const char (*)[256])(v2 + 5824));
              common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v73, (const char (*)[7])byte_1A97C780);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4608));
              *(_DWORD *)(((v2 + 4608) >> 3) + 0x7FFF8000) = -117901064;
              v6 = -1;
              goto LABEL_156;
            }
            snprintf((char *)(v2 + 5824), 0x100uLL, asc_1A97C900, i + 1);
            *(_DWORD *)(((v2 + 4672) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 608);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 4672),
              (const char *)(v2 + 5824),
              (const std::allocator<char> *)(v2 + 608));
            v74 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 4672));
            std::string::~string((void *)(v2 + 4672));
            *(_DWORD *)(((v2 + 4672) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 608);
            *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) = -8;
            if ( !v74 )
            {
              p_effect_param1 = &std::vector<data::ChessCardEffect>::operator[](&this->extra_effect_list, i)->effect_param1;
              *(_DWORD *)(((v2 + 4736) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 624);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 4736),
                (const char *)(v2 + 5824),
                (const std::allocator<char> *)(v2 + 624));
              LOBYTE(p_effect_param1) = common::tools::TxtFile::Row::assignToNum<int>(
                                          row,
                                          (const std::string *)(v2 + 4736),
                                          p_effect_param1) != 0;
              std::string::~string((void *)(v2 + 4736));
              *(_DWORD *)(((v2 + 4736) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 624);
              *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) = -8;
              if ( (_BYTE)p_effect_param1 )
              {
                *(_DWORD *)(((v2 + 4800) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 4800) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 4831) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 4831) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 4800, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 4800),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
                  "init",
                  1377);
                v76 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 4800),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v77 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                        v76,
                        (const char (*)[14])byte_1A97C740);
                v78 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                        v77,
                        (const char (*)[256])(v2 + 5824));
                common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v78, (const char (*)[7])byte_1A97C780);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4800));
                *(_DWORD *)(((v2 + 4800) >> 3) + 0x7FFF8000) = -117901064;
                v6 = -1;
                goto LABEL_156;
              }
              snprintf((char *)(v2 + 5824), 0x100uLL, asc_1A97C940, i + 1);
              *(_DWORD *)(((v2 + 4864) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 640);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 4864),
                (const char *)(v2 + 5824),
                (const std::allocator<char> *)(v2 + 640));
              v79 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 4864));
              std::string::~string((void *)(v2 + 4864));
              *(_DWORD *)(((v2 + 4864) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 640);
              *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) = -8;
              if ( !v79 )
              {
                p_effect_param2 = &std::vector<data::ChessCardEffect>::operator[](&this->extra_effect_list, i)->effect_param2;
                *(_DWORD *)(((v2 + 4928) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 656);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 4928),
                  (const char *)(v2 + 5824),
                  (const std::allocator<char> *)(v2 + 656));
                LOBYTE(p_effect_param2) = common::tools::TxtFile::Row::assignToNum<int>(
                                            row,
                                            (const std::string *)(v2 + 4928),
                                            p_effect_param2) != 0;
                std::string::~string((void *)(v2 + 4928));
                *(_DWORD *)(((v2 + 4928) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 656);
                *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) = -8;
                if ( (_BYTE)p_effect_param2 )
                {
                  *(_DWORD *)(((v2 + 4992) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 4992) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 5023) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 5023) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 4992, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 4992),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
                    "init",
                    1385);
                  v81 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 4992),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v82 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                          v81,
                          (const char (*)[14])byte_1A97C740);
                  v83 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                          v82,
                          (const char (*)[256])(v2 + 5824));
                  common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v83, (const char (*)[7])byte_1A97C780);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4992));
                  *(_DWORD *)(((v2 + 4992) >> 3) + 0x7FFF8000) = -117901064;
                  v6 = -1;
                  goto LABEL_156;
                }
                snprintf((char *)(v2 + 5824), 0x100uLL, asc_1A97C980, i + 1);
                *(_DWORD *)(((v2 + 5056) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 672);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 5056),
                  (const char *)(v2 + 5824),
                  (const std::allocator<char> *)(v2 + 672));
                v84 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 5056));
                std::string::~string((void *)(v2 + 5056));
                *(_DWORD *)(((v2 + 5056) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 672);
                *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) = -8;
                if ( !v84 )
                {
                  p_effect_param3 = &std::vector<data::ChessCardEffect>::operator[](&this->extra_effect_list, i)->effect_param3;
                  *(_DWORD *)(((v2 + 5120) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 688);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 5120),
                    (const char *)(v2 + 5824),
                    (const std::allocator<char> *)(v2 + 688));
                  LOBYTE(p_effect_param3) = common::tools::TxtFile::Row::assignToNum<int>(
                                              row,
                                              (const std::string *)(v2 + 5120),
                                              p_effect_param3) != 0;
                  std::string::~string((void *)(v2 + 5120));
                  *(_DWORD *)(((v2 + 5120) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 688);
                  *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) = -8;
                  if ( (_BYTE)p_effect_param3 )
                  {
                    *(_DWORD *)(((v2 + 5184) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 5184) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 5215) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 5215) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 5184, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 5184),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
                      "init",
                      1393);
                    v86 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 5184),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v87 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                            v86,
                            (const char (*)[14])byte_1A97C740);
                    v88 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                            v87,
                            (const char (*)[256])(v2 + 5824));
                    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v88, (const char (*)[7])byte_1A97C780);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5184));
                    *(_DWORD *)(((v2 + 5184) >> 3) + 0x7FFF8000) = -117901064;
                    v6 = -1;
                    goto LABEL_156;
                  }
                  snprintf((char *)(v2 + 5824), 0x100uLL, asc_1A97C9C0, i + 1);
                  *(_DWORD *)(((v2 + 5248) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 704);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 5248),
                    (const char *)(v2 + 5824),
                    (const std::allocator<char> *)(v2 + 704));
                  v89 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 5248));
                  std::string::~string((void *)(v2 + 5248));
                  *(_DWORD *)(((v2 + 5248) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 704);
                  *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) = -8;
                  if ( !v89 )
                  {
                    p_begin_round = &std::vector<data::ChessCardEffect>::operator[](&this->extra_effect_list, i)->begin_round;
                    *(_DWORD *)(((v2 + 5312) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 720);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 5312),
                      (const char *)(v2 + 5824),
                      (const std::allocator<char> *)(v2 + 720));
                    LOBYTE(p_begin_round) = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                              row,
                                              (const std::string *)(v2 + 5312),
                                              p_begin_round) != 0;
                    std::string::~string((void *)(v2 + 5312));
                    *(_DWORD *)(((v2 + 5312) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 720);
                    *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) = -8;
                    if ( (_BYTE)p_begin_round )
                    {
                      *(_DWORD *)(((v2 + 5376) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 5376) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 5407) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 5407) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 5376, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 5376),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
                        "init",
                        1401);
                      v91 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 5376),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      v92 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                              v91,
                              (const char (*)[14])byte_1A97C740);
                      v93 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                              v92,
                              (const char (*)[256])(v2 + 5824));
                      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                        v93,
                        (const char (*)[7])byte_1A97C780);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5376));
                      *(_DWORD *)(((v2 + 5376) >> 3) + 0x7FFF8000) = -117901064;
                      v6 = -1;
                      goto LABEL_156;
                    }
                    snprintf((char *)(v2 + 5824), 0x100uLL, asc_1A97CA00, i + 1);
                    *(_DWORD *)(((v2 + 5440) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 736);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 5440),
                      (const char *)(v2 + 5824),
                      (const std::allocator<char> *)(v2 + 736));
                    v94 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 5440));
                    std::string::~string((void *)(v2 + 5440));
                    *(_DWORD *)(((v2 + 5440) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 736);
                    *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) = -8;
                    if ( !v94 )
                      break;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_154:
    ;
  }
  p_active_rounds = &std::vector<data::ChessCardEffect>::operator[](&this->extra_effect_list, i)->active_rounds;
  *(_DWORD *)(((v2 + 5504) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 752);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 5504),
    (const char *)(v2 + 5824),
    (const std::allocator<char> *)(v2 + 752));
  LOBYTE(p_active_rounds) = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                              row,
                              (const std::string *)(v2 + 5504),
                              p_active_rounds) != 0;
  std::string::~string((void *)(v2 + 5504));
  *(_DWORD *)(((v2 + 5504) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 752);
  *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) = -8;
  if ( !(_BYTE)p_active_rounds )
  {
    array_count = i + 1;
    goto LABEL_154;
  }
  *(_DWORD *)(((v2 + 5568) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v2 + 5568) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 5599) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 5599) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 5568, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v2 + 5568),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
    "init",
    1409);
  v96 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v2 + 5568),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v97 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v96, (const char (*)[14])byte_1A97C740);
  v98 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(v97, (const char (*)[256])(v2 + 5824));
  common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v98, (const char (*)[7])byte_1A97C780);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5568));
  *(_DWORD *)(((v2 + 5568) >> 3) + 0x7FFF8000) = -117901064;
  v6 = -1;
LABEL_156:
  std::string::~string((void *)(v2 + 896));
  if ( v114 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8068) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 112) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF8074) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF82D0) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862751) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450996 - (((_DWORD)v4 + 2147451004) & 0xFFFFFFF8) + 612) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF82F8) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_7(v2, 6144LL, v114);
  }
  return v6;
};

// Line 1421: range 00000000127D5B76-00000000127D5E81
int32_t __cdecl data::ActivityChessMapPointExcelConfig::init(
        data::ActivityChessMapPointExcelConfig *const this,
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
  *(_QWORD *)(v2 + 16) = data::ActivityChessMapPointExcelConfig::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 64),
    "ID",
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
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "init",
      1424);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v6, (const char (*)[23])byte_1A97BA00);
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

// Line 1432: range 00000000127D5E82-00000000127D618D
int32_t __cdecl data::ActivityChessAffixExcelConfig::init(
        data::ActivityChessAffixExcelConfig *const this,
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
  *(_QWORD *)(v2 + 16) = data::ActivityChessAffixExcelConfig::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 64),
    "ID",
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
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "init",
      1435);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v6, (const char (*)[23])byte_1A97BA00);
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

// Line 1444: range 00000000127D618E-00000000127D71C6
int32_t __cdecl data::ActivityChessExcelConfigMgrBase::loadActivityChessPreviewExcelConfig(
        data::ActivityChessExcelConfigMgrBase *const this,
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
  data::ActivityChessPreviewExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::ActivityChessPreviewExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessPreviewExcelConfig>,false,false>,bool> v27; // rax
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
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 6 r:1459 64 4 9 <unknown> 80 32 10 paths:1445 144 32 9 <unknown> 208 32"
                        " 9 <unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 88 "
                        "9 data:1462 656 376 25 debug_message_stream:1470 1104 32880 13 txt_file:1453";
  *(_QWORD *)(v3 + 16) = data::ActivityChessExcelConfigMgrBase::loadActivityChessPreviewExcelConfig;
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
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 80),
    "/txt/ChessPreviewData.txt",
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
        "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
        "loadActivityChessPreviewExcelConfig",
        1456);
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v3 + 208),
             (const char (*)[8])byte_1A97CC40);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1A97CC80);
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
        v13 = ((v3 + 528) >> 3) + 2147450880;
        *(_DWORD *)v13 = 0;
        *(_DWORD *)(v13 + 4) = 0;
        *(_WORD *)(v13 + 8) = 0;
        *(_BYTE *)(v13 + 10) = 0;
        data::ActivityChessPreviewExcelConfig::ActivityChessPreviewExcelConfig((data::ActivityChessPreviewExcelConfig *const)(v3 + 528));
        if ( row_ptr )
        {
          if ( data::ActivityChessPreviewExcelConfig::init(
                 (data::ActivityChessPreviewExcelConfig *const)(v3 + 528),
                 row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 656, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 656);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 656, &unk_1A97CD00);
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
              "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
              "loadActivityChessPreviewExcelConfig",
              1472);
            v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 336),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v18 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v17, (const char (*)[2])"<");
            v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, __for_begin);
            v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v19,
                    (const char (*)[11])byte_1A97CD80);
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
                    (const char (*)[13])byte_1A97CDC0);
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
            v24 = std::move<data::ActivityChessPreviewExcelConfig &>((data::ActivityChessPreviewExcelConfig *)(v3 + 528));
            v27 = std::unordered_map<unsigned int,data::ActivityChessPreviewExcelConfig>::emplace<unsigned int &,data::ActivityChessPreviewExcelConfig>(
                    &this->activity_chess_preview_excel_config_map,
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
                "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
                "loadActivityChessPreviewExcelConfig",
                1477);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 464),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                      v28,
                      (const char (*)[17])byte_1A97CE00);
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
            "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
            "loadActivityChessPreviewExcelConfig",
            1465);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 272),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
          *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::ActivityChessPreviewExcelConfig::~ActivityChessPreviewExcelConfig((data::ActivityChessPreviewExcelConfig *const)(v3 + 528));
        v30 = ((v3 + 528) >> 3) + 2147450880;
        *(_DWORD *)v30 = -117901064;
        *(_DWORD *)(v30 + 4) = -117901064;
        *(_WORD *)(v30 + 8) = -1800;
        *(_BYTE *)(v30 + 10) = -8;
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

// Line 1486: range 00000000127D71C8-00000000127D81B2
int32_t __cdecl data::ActivityChessExcelConfigMgrBase::loadActivityChessLevelExcelConfig(
        data::ActivityChessExcelConfigMgrBase *const this,
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
  data::ActivityChessLevelExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::ActivityChessLevelExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessLevelExcelConfig>,false,false>,bool> v27; // rax
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
  *(_QWORD *)(v3 + 8) = "13 48 1 9 <unknown> 64 4 6 r:1501 80 4 9 <unknown> 96 32 10 paths:1487 160 32 9 <unknown> 224 32"
                        " 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 72 "
                        "9 data:1504 656 376 25 debug_message_stream:1512 1104 32880 13 txt_file:1495";
  *(_QWORD *)(v3 + 16) = data::ActivityChessExcelConfigMgrBase::loadActivityChessLevelExcelConfig;
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
    "/txt/ChessLevelData.txt",
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
        "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
        "loadActivityChessLevelExcelConfig",
        1498);
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v3 + 224),
             (const char (*)[8])byte_1A97CC40);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1A97CC80);
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
        data::ActivityChessLevelExcelConfig::ActivityChessLevelExcelConfig((data::ActivityChessLevelExcelConfig *const)(v3 + 544));
        if ( row_ptr )
        {
          if ( data::ActivityChessLevelExcelConfig::init(
                 (data::ActivityChessLevelExcelConfig *const)(v3 + 544),
                 row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 656, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 656);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 656, &unk_1A97D000);
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
              "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
              "loadActivityChessLevelExcelConfig",
              1514);
            v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 352),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v18 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v17, (const char (*)[2])"<");
            v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, __for_begin);
            v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v19,
                    (const char (*)[11])byte_1A97CD80);
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
                    (const char (*)[13])byte_1A97CDC0);
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
            v24 = std::move<data::ActivityChessLevelExcelConfig &>((data::ActivityChessLevelExcelConfig *)(v3 + 544));
            v27 = std::unordered_map<unsigned int,data::ActivityChessLevelExcelConfig>::emplace<unsigned int &,data::ActivityChessLevelExcelConfig>(
                    &this->activity_chess_level_excel_config_map,
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
                "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
                "loadActivityChessLevelExcelConfig",
                1519);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 480),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v28,
                      (const char (*)[12])byte_1A97D040);
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
            "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
            "loadActivityChessLevelExcelConfig",
            1507);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 288),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::ActivityChessLevelExcelConfig::~ActivityChessLevelExcelConfig((data::ActivityChessLevelExcelConfig *const)(v3 + 544));
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

// Line 1528: range 00000000127D81B4-00000000127D91E9
int32_t __cdecl data::ActivityChessExcelConfigMgrBase::loadActivityChessMapExcelConfig(
        data::ActivityChessExcelConfigMgrBase *const this,
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
  data::ActivityChessMapExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::ActivityChessMapExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessMapExcelConfig>,false,false>,bool> v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  unsigned __int64 v30; // rax
  int v31; // edx
  char *i; // r14
  std::string *__for_begin; // [rsp+28h] [rbp-8698h]
  const common::tools::TxtFile::Row *row_ptr; // [rsp+48h] [rbp-8678h]
  char v37[34416]; // [rsp+50h] [rbp-8670h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_10(34368LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 48 1 9 <unknown> 64 4 6 r:1543 80 4 9 <unknown> 96 32 10 paths:1529 160 32 9 <unknown> 224 32"
                        " 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 168"
                        " 9 data:1546 784 376 25 debug_message_stream:1554 1232 32880 13 txt_file:1537";
  *(_QWORD *)(v3 + 16) = data::ActivityChessExcelConfigMgrBase::loadActivityChessMapExcelConfig;
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
  v5[536862742] = -218959360;
  v5[536862743] = -218959118;
  v5[536862744] = 62194;
  v5[536862756] = -218959360;
  v5[536862757] = -218959118;
  v5[536862758] = 62194;
  v5[536863786] = -202116109;
  v5[536863787] = -202116109;
  v5[536863788] = -202116109;
  v5[536863789] = -202116109;
  v5[536863790] = -202116109;
  v5[536863791] = -202116109;
  v5[536863792] = -202116109;
  v5[536863793] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 96),
    "/txt/ChessMapData.txt",
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
    __asan_unpoison_stack_memory(v3 + 1232, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v3 + 1232));
    v7 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v3 + 1232), v7) )
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
        "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
        "loadActivityChessMapExcelConfig",
        1540);
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v3 + 224),
             (const char (*)[8])byte_1A97CC40);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1A97CC80);
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
        v12 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v3 + 1232));
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 64);
        if ( v12 <= *(_DWORD *)(v3 + 64) )
          break;
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v3 + 1232), *(_DWORD *)(v3 + 64));
        v13 = ((v3 + 544) >> 3) + 2147450880;
        *(_DWORD *)v13 = 0;
        *(_DWORD *)(v13 + 4) = 0;
        *(_DWORD *)(v13 + 8) = 0;
        *(_DWORD *)(v13 + 12) = 0;
        *(_DWORD *)(v13 + 16) = 0;
        *(_BYTE *)(v13 + 20) = 0;
        data::ActivityChessMapExcelConfig::ActivityChessMapExcelConfig((data::ActivityChessMapExcelConfig *const)(v3 + 544));
        if ( row_ptr )
        {
          if ( data::ActivityChessMapExcelConfig::init((data::ActivityChessMapExcelConfig *const)(v3 + 544), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 784, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 784);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 784, &unk_1A97D220);
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
              "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
              "loadActivityChessMapExcelConfig",
              1556);
            v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 352),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v18 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v17, (const char (*)[2])"<");
            v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, __for_begin);
            v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v19,
                    (const char (*)[11])byte_1A97CD80);
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
                    (const char (*)[13])byte_1A97CDC0);
            *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 416, 32LL);
            }
            std::ostringstream::str(v3 + 416, v3 + 784);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, (const std::string *)(v3 + 416));
            std::string::~string((void *)(v3 + 416));
            *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
            *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            std::ostringstream::~ostringstream(v3 + 784);
            __asan_poison_stack_memory(v3 + 784, 376LL);
            v15 = 0;
          }
          else
          {
            v24 = std::move<data::ActivityChessMapExcelConfig &>((data::ActivityChessMapExcelConfig *)(v3 + 544));
            v27 = std::unordered_map<unsigned int,data::ActivityChessMapExcelConfig>::emplace<unsigned int &,data::ActivityChessMapExcelConfig>(
                    &this->activity_chess_map_excel_config_map,
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
                "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
                "loadActivityChessMapExcelConfig",
                1561);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 480),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                      v28,
                      (const char (*)[17])byte_1A97D260);
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
            "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
            "loadActivityChessMapExcelConfig",
            1549);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 288),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::ActivityChessMapExcelConfig::~ActivityChessMapExcelConfig((data::ActivityChessMapExcelConfig *const)(v3 + 544));
        v30 = ((v3 + 544) >> 3) + 2147450880;
        *(_DWORD *)v30 = -117901064;
        *(_DWORD *)(v30 + 4) = -117901064;
        *(_DWORD *)(v30 + 8) = -117901064;
        *(_DWORD *)(v30 + 12) = -117901064;
        *(_DWORD *)(v30 + 16) = -117901064;
        *(_BYTE *)(v30 + 20) = -8;
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
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v3 + 1232));
    __asan_poison_stack_memory(v3 + 1232, 32880LL);
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF90C0) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862726) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450896 - (((_DWORD)v5 + 2147450904) & 0xFFFFFFF8) + 4280) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_10(v3, 34368LL, v37);
  }
  return v2;
};

// Line 1570: range 00000000127D91EA-00000000127DA1C3
int32_t __cdecl data::ActivityChessExcelConfigMgrBase::loadActivityChessScheduleExcelConfig(
        data::ActivityChessExcelConfigMgrBase *const this,
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
  data::ActivityChessScheduleExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::ActivityChessScheduleExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessScheduleExcelConfig>,false,false>,bool> v27; // rax
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
  *(_QWORD *)(v3 + 8) = "13 48 1 9 <unknown> 64 4 6 r:1585 80 4 9 <unknown> 96 32 10 paths:1571 160 32 9 <unknown> 224 32"
                        " 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 48 "
                        "9 data:1588 624 376 25 debug_message_stream:1596 1072 32880 13 txt_file:1579";
  *(_QWORD *)(v3 + 16) = data::ActivityChessExcelConfigMgrBase::loadActivityChessScheduleExcelConfig;
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
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 96),
    "/txt/ChessScheduleData.txt",
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
        "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
        "loadActivityChessScheduleExcelConfig",
        1582);
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v3 + 224),
             (const char (*)[8])byte_1A97CC40);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1A97CC80);
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
        *(_WORD *)(v13 + 4) = 0;
        data::ActivityChessScheduleExcelConfig::ActivityChessScheduleExcelConfig((data::ActivityChessScheduleExcelConfig *const)(v3 + 544));
        if ( row_ptr )
        {
          if ( data::ActivityChessScheduleExcelConfig::init(
                 (data::ActivityChessScheduleExcelConfig *const)(v3 + 544),
                 row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 624, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 624);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 624, &unk_1A97D460);
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
              "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
              "loadActivityChessScheduleExcelConfig",
              1598);
            v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 352),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v18 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v17, (const char (*)[2])"<");
            v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, __for_begin);
            v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v19,
                    (const char (*)[11])byte_1A97CD80);
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
                    (const char (*)[13])byte_1A97CDC0);
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
            v24 = std::move<data::ActivityChessScheduleExcelConfig &>((data::ActivityChessScheduleExcelConfig *)(v3 + 544));
            v27 = std::unordered_map<unsigned int,data::ActivityChessScheduleExcelConfig>::emplace<unsigned int &,data::ActivityChessScheduleExcelConfig>(
                    &this->activity_chess_schedule_excel_config_map,
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
                "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
                "loadActivityChessScheduleExcelConfig",
                1603);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 480),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                      v28,
                      (const char (*)[10])byte_1A97D4A0);
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
            "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
            "loadActivityChessScheduleExcelConfig",
            1591);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 288),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::ActivityChessScheduleExcelConfig::~ActivityChessScheduleExcelConfig((data::ActivityChessScheduleExcelConfig *const)(v3 + 544));
        v30 = ((v3 + 544) >> 3) + 2147450880;
        *(_DWORD *)v30 = -117901064;
        *(_WORD *)(v30 + 4) = -1800;
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

// Line 1612: range 00000000127DA1C4-00000000127DB1B1
int32_t __cdecl data::ActivityChessExcelConfigMgrBase::loadActivityChessGearExcelConfig(
        data::ActivityChessExcelConfigMgrBase *const this,
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
  data::ActivityChessGearExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::ActivityChessGearExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessGearExcelConfig>,false,false>,bool> v27; // rax
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
  *(_QWORD *)(v3 + 8) = "13 48 1 9 <unknown> 64 4 6 r:1627 80 4 9 <unknown> 96 32 10 paths:1613 160 32 9 <unknown> 224 32"
                        " 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 72 "
                        "9 data:1630 656 376 25 debug_message_stream:1638 1104 32880 13 txt_file:1621";
  *(_QWORD *)(v3 + 16) = data::ActivityChessExcelConfigMgrBase::loadActivityChessGearExcelConfig;
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
    "/txt/ChessGearData.txt",
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
        "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
        "loadActivityChessGearExcelConfig",
        1624);
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v3 + 224),
             (const char (*)[8])byte_1A97CC40);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1A97CC80);
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
        data::ActivityChessGearExcelConfig::ActivityChessGearExcelConfig((data::ActivityChessGearExcelConfig *const)(v3 + 544));
        if ( row_ptr )
        {
          if ( data::ActivityChessGearExcelConfig::init((data::ActivityChessGearExcelConfig *const)(v3 + 544), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 656, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 656);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 656, &unk_1A97D6A0);
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
              "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
              "loadActivityChessGearExcelConfig",
              1640);
            v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 352),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v18 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v17, (const char (*)[2])"<");
            v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, __for_begin);
            v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v19,
                    (const char (*)[11])byte_1A97CD80);
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
                    (const char (*)[13])byte_1A97CDC0);
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
            v24 = std::move<data::ActivityChessGearExcelConfig &>((data::ActivityChessGearExcelConfig *)(v3 + 544));
            v27 = std::unordered_map<unsigned int,data::ActivityChessGearExcelConfig>::emplace<unsigned int &,data::ActivityChessGearExcelConfig>(
                    &this->activity_chess_gear_excel_config_map,
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
                "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
                "loadActivityChessGearExcelConfig",
                1645);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 480),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                      v28,
                      (const char (*)[13])byte_1A97D6E0);
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
            "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
            "loadActivityChessGearExcelConfig",
            1633);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 288),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::ActivityChessGearExcelConfig::~ActivityChessGearExcelConfig((data::ActivityChessGearExcelConfig *const)(v3 + 544));
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

// Line 1654: range 00000000127DB1B2-00000000127DC238
int32_t __cdecl data::ActivityChessExcelConfigMgrBase::loadActivityChessCardExcelConfig(
        data::ActivityChessExcelConfigMgrBase *const this,
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
  data::ActivityChessCardExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::ActivityChessCardExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessCardExcelConfig>,false,false>,bool> v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  unsigned __int64 v30; // rax
  int v31; // edx
  char *i; // r14
  std::string *__for_begin; // [rsp+28h] [rbp-8698h]
  const common::tools::TxtFile::Row *row_ptr; // [rsp+48h] [rbp-8678h]
  char v37[34416]; // [rsp+50h] [rbp-8670h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_10(34368LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 6 r:1669 64 4 9 <unknown> 80 32 10 paths:1655 144 32 9 <unknown> 208 32"
                        " 9 <unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 184"
                        " 9 data:1672 784 376 25 debug_message_stream:1680 1232 32880 13 txt_file:1663";
  *(_QWORD *)(v3 + 16) = data::ActivityChessExcelConfigMgrBase::loadActivityChessCardExcelConfig;
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
  v5[536862742] = -218959360;
  v5[536862743] = -218959118;
  v5[536862744] = 62194;
  v5[536862756] = -218959360;
  v5[536862757] = -218959118;
  v5[536862758] = 62194;
  v5[536863786] = -202116109;
  v5[536863787] = -202116109;
  v5[536863788] = -202116109;
  v5[536863789] = -202116109;
  v5[536863790] = -202116109;
  v5[536863791] = -202116109;
  v5[536863792] = -202116109;
  v5[536863793] = -202116109;
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 80),
    "/txt/ChessCardData.txt",
    (const std::allocator<char> *)(v3 + 32));
  std::allocator<char>::~allocator(v3 + 32);
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  for ( __for_begin = (std::string *)(v3 + 80); __for_begin != (std::string *)(v3 + 112); ++__for_begin )
  {
    *(_DWORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
    p_real_data_base_dir = &config->real_data_base_dir;
    if ( *(char *)(((v3 + 144) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 175) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 81) & 7) >= *(_BYTE *)(((v3 + 175) >> 3) + 0x7FFF8000) )
    {
      p_real_data_base_dir = (std::string *)32;
      __asan_report_store_n(v3 + 144, 32LL);
    }
    std::operator+<char>((std::string *)(v3 + 144), p_real_data_base_dir, __for_begin);
    std::string::operator=(__for_begin, v3 + 144);
    std::string::~string((void *)(v3 + 144));
    *(_DWORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = -117901064;
    __asan_unpoison_stack_memory(v3 + 1232, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v3 + 1232));
    v7 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v3 + 1232), v7) )
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
        "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
        "loadActivityChessCardExcelConfig",
        1666);
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v3 + 208),
             (const char (*)[8])byte_1A97CC40);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1A97CC80);
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
        v12 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v3 + 1232));
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
        if ( v12 <= *(_DWORD *)(v3 + 48) )
          break;
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v3 + 1232), *(_DWORD *)(v3 + 48));
        v13 = ((v3 + 528) >> 3) + 2147450880;
        *(_DWORD *)v13 = 0;
        *(_DWORD *)(v13 + 4) = 0;
        *(_DWORD *)(v13 + 8) = 0;
        *(_DWORD *)(v13 + 12) = 0;
        *(_DWORD *)(v13 + 16) = 0;
        *(_WORD *)(v13 + 20) = 0;
        *(_BYTE *)(v13 + 22) = 0;
        data::ActivityChessCardExcelConfig::ActivityChessCardExcelConfig((data::ActivityChessCardExcelConfig *const)(v3 + 528));
        if ( row_ptr )
        {
          if ( data::ActivityChessCardExcelConfig::init((data::ActivityChessCardExcelConfig *const)(v3 + 528), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 784, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 784);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 784, &unk_1A97D8E0);
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
              "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
              "loadActivityChessCardExcelConfig",
              1682);
            v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 336),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v18 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v17, (const char (*)[2])"<");
            v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, __for_begin);
            v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v19,
                    (const char (*)[11])byte_1A97CD80);
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
                    (const char (*)[13])byte_1A97CDC0);
            *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 400) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 81) & 7) >= *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 400, 32LL);
            }
            std::ostringstream::str(v3 + 400, v3 + 784);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, (const std::string *)(v3 + 400));
            std::string::~string((void *)(v3 + 400));
            *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
            *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            std::ostringstream::~ostringstream(v3 + 784);
            __asan_poison_stack_memory(v3 + 784, 376LL);
            v15 = 0;
          }
          else
          {
            v24 = std::move<data::ActivityChessCardExcelConfig &>((data::ActivityChessCardExcelConfig *)(v3 + 528));
            v27 = std::unordered_map<unsigned int,data::ActivityChessCardExcelConfig>::emplace<unsigned int &,data::ActivityChessCardExcelConfig>(
                    &this->activity_chess_card_excel_config_map,
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
                "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
                "loadActivityChessCardExcelConfig",
                1687);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 464),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v28, (const char (*)[9])byte_1A97D920);
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
            "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
            "loadActivityChessCardExcelConfig",
            1675);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 272),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
          *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::ActivityChessCardExcelConfig::~ActivityChessCardExcelConfig((data::ActivityChessCardExcelConfig *const)(v3 + 528));
        v30 = ((v3 + 528) >> 3) + 2147450880;
        *(_DWORD *)v30 = -117901064;
        *(_DWORD *)(v30 + 4) = -117901064;
        *(_DWORD *)(v30 + 8) = -117901064;
        *(_DWORD *)(v30 + 12) = -117901064;
        *(_DWORD *)(v30 + 16) = -117901064;
        *(_WORD *)(v30 + 20) = -1800;
        *(_BYTE *)(v30 + 22) = -8;
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
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v3 + 1232));
    __asan_poison_stack_memory(v3 + 1232, 32880LL);
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF90C0) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 4296) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_10(v3, 34368LL, v37);
  }
  return v2;
};

// Line 1696: range 00000000127DC23A-00000000127DD295
int32_t __cdecl data::ActivityChessExcelConfigMgrBase::loadActivityChessMapPointExcelConfig(
        data::ActivityChessExcelConfigMgrBase *const this,
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
  data::ActivityChessMapPointExcelConfig *v25; // rax
  unsigned int *v26; // rcx
  data::ActivityChessMapPointExcelConfig *v27; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessMapPointExcelConfig>,false,false>,bool> v28; // rax
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
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 6 r:1711 64 4 9 <unknown> 80 16 9 data:1714 112 32 10 paths:1697 176 32"
                        " 9 <unknown> 240 32 9 <unknown> 304 32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496 32 "
                        "9 <unknown> 560 376 25 debug_message_stream:1722 1008 32880 13 txt_file:1705";
  *(_QWORD *)(v3 + 16) = data::ActivityChessExcelConfigMgrBase::loadActivityChessMapPointExcelConfig;
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
    "/txt/ChessMapPointData.txt",
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
        "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
        "loadActivityChessMapPointExcelConfig",
        1708);
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v3 + 240),
             (const char (*)[8])byte_1A97CC40);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1A97CC80);
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
        v14 = &`vtable for'data::ActivityChessMapPointExcelConfig + 2;
        if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 80, v13);
        *(_QWORD *)(v3 + 80) = v14;
        if ( *(_BYTE *)(((v3 + 88) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 88) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 88, v13);
        *(_DWORD *)(v3 + 88) = 0;
        if ( row_ptr )
        {
          if ( data::ActivityChessMapPointExcelConfig::init(
                 (data::ActivityChessMapPointExcelConfig *const)(v3 + 80),
                 row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 560, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 560);
            v17 = std::operator<<<std::char_traits<char>>(v3 + 560, &unk_1A97D8E0);
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
              "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
              "loadActivityChessMapPointExcelConfig",
              1724);
            v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 368),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v19 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v18, (const char (*)[2])"<");
            v20 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, __for_begin);
            v21 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v20,
                    (const char (*)[11])byte_1A97CD80);
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
                    (const char (*)[13])byte_1A97CDC0);
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
            v25 = std::move<data::ActivityChessMapPointExcelConfig &>((data::ActivityChessMapPointExcelConfig *)(v3 + 80));
            v28 = std::unordered_map<unsigned int,data::ActivityChessMapPointExcelConfig>::emplace<unsigned int &,data::ActivityChessMapPointExcelConfig>(
                    &this->activity_chess_map_point_excel_config_map,
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
                "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
                "loadActivityChessMapPointExcelConfig",
                1729);
              v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 496),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v30 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v29, (const char (*)[9])byte_1A97D920);
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
            "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
            "loadActivityChessMapPointExcelConfig",
            1717);
          v15 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 304),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 304));
          *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v16 = 0;
        }
        data::ActivityChessMapPointExcelConfig::~ActivityChessMapPointExcelConfig((data::ActivityChessMapPointExcelConfig *const)(v3 + 80));
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

// Line 1738: range 00000000127DD296-00000000127DE2F1
int32_t __cdecl data::ActivityChessExcelConfigMgrBase::loadActivityChessAffixExcelConfig(
        data::ActivityChessExcelConfigMgrBase *const this,
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
  data::ActivityChessAffixExcelConfig *v25; // rax
  unsigned int *v26; // rcx
  data::ActivityChessAffixExcelConfig *v27; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessAffixExcelConfig>,false,false>,bool> v28; // rax
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
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 6 r:1753 64 4 9 <unknown> 80 16 9 data:1756 112 32 10 paths:1739 176 32"
                        " 9 <unknown> 240 32 9 <unknown> 304 32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496 32 "
                        "9 <unknown> 560 376 25 debug_message_stream:1764 1008 32880 13 txt_file:1747";
  *(_QWORD *)(v3 + 16) = data::ActivityChessExcelConfigMgrBase::loadActivityChessAffixExcelConfig;
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
    "/txt/ChessAffixData.txt",
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
        "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
        "loadActivityChessAffixExcelConfig",
        1750);
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v3 + 240),
             (const char (*)[8])byte_1A97CC40);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1A97CC80);
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
        v14 = &`vtable for'data::ActivityChessAffixExcelConfig + 2;
        if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 80, v13);
        *(_QWORD *)(v3 + 80) = v14;
        if ( *(_BYTE *)(((v3 + 88) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 88) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 88, v13);
        *(_DWORD *)(v3 + 88) = 0;
        if ( row_ptr )
        {
          if ( data::ActivityChessAffixExcelConfig::init((data::ActivityChessAffixExcelConfig *const)(v3 + 80), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 560, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 560);
            v17 = std::operator<<<std::char_traits<char>>(v3 + 560, &unk_1A97D8E0);
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
              "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
              "loadActivityChessAffixExcelConfig",
              1766);
            v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 368),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v19 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v18, (const char (*)[2])"<");
            v20 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, __for_begin);
            v21 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v20,
                    (const char (*)[11])byte_1A97CD80);
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
                    (const char (*)[13])byte_1A97CDC0);
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
            v25 = std::move<data::ActivityChessAffixExcelConfig &>((data::ActivityChessAffixExcelConfig *)(v3 + 80));
            v28 = std::unordered_map<unsigned int,data::ActivityChessAffixExcelConfig>::emplace<unsigned int &,data::ActivityChessAffixExcelConfig>(
                    &this->activity_chess_affix_excel_config_map,
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
                "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
                "loadActivityChessAffixExcelConfig",
                1771);
              v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 496),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v30 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v29, (const char (*)[9])byte_1A97D920);
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
            "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
            "loadActivityChessAffixExcelConfig",
            1759);
          v15 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 304),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 304));
          *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v16 = 0;
        }
        data::ActivityChessAffixExcelConfig::~ActivityChessAffixExcelConfig((data::ActivityChessAffixExcelConfig *const)(v3 + 80));
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

// Line 1780: range 00000000127DE2F2-00000000127DED8C
int32_t __cdecl data::ActivityChessExcelConfigMgrBase::loadConfig(
        data::ActivityChessExcelConfigMgrBase *const this,
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
  char v14[576]; // [rsp+10h] [rbp-240h] BYREF

  v2 = (common::milog::MiLogStream *)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(544LL);
    if ( v3 )
      v2 = (common::milog::MiLogStream *)v3;
  }
  v2->log_ = (common::milog::MiLog *)1102416563;
  v2->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"8 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown>";
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)data::ActivityChessExcelConfigMgrBase::loadConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -202116109;
  if ( data::ActivityChessExcelConfigMgrBase::loadActivityChessPreviewExcelConfig(this, config) )
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
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "loadConfig",
      1783);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
      v5,
      (const char (*)[43])"loadActivityChessPreviewExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( data::ActivityChessExcelConfigMgrBase::loadActivityChessLevelExcelConfig(this, config) )
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
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "loadConfig",
      1788);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      v7,
      (const char (*)[41])"loadActivityChessLevelExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( data::ActivityChessExcelConfigMgrBase::loadActivityChessMapExcelConfig(this, config) )
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
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "loadConfig",
      1793);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      v8,
      (const char (*)[39])"loadActivityChessMapExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else if ( data::ActivityChessExcelConfigMgrBase::loadActivityChessScheduleExcelConfig(this, config) )
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
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "loadConfig",
      1798);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
      v9,
      (const char (*)[44])"loadActivityChessScheduleExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 7);
    result = -1;
  }
  else if ( data::ActivityChessExcelConfigMgrBase::loadActivityChessGearExcelConfig(this, config) )
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
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "loadConfig",
      1803);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 9, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
      v10,
      (const char (*)[40])"loadActivityChessGearExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 9);
    result = -1;
  }
  else if ( data::ActivityChessExcelConfigMgrBase::loadActivityChessCardExcelConfig(this, config) )
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
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "loadConfig",
      1808);
    v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 11,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
      v11,
      (const char (*)[40])"loadActivityChessCardExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 11);
    result = -1;
  }
  else if ( data::ActivityChessExcelConfigMgrBase::loadActivityChessMapPointExcelConfig(this, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[13] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[13].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 65) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[13].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[13], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "loadConfig",
      1813);
    v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 13,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
      v12,
      (const char (*)[44])"loadActivityChessMapPointExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 13);
    result = -1;
  }
  else if ( data::ActivityChessExcelConfigMgrBase::loadActivityChessAffixExcelConfig(this, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[15] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[15].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[15].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[15], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 15,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/ActivityChessExcelConfig.gen.cpp",
      "loadConfig",
      1818);
    v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 15,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      v13,
      (const char (*)[41])"loadActivityChessAffixExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 15);
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v14 == (char *)v2 )
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
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 1825: range 00000000127DED8E-00000000127DEDA0
int32_t __cdecl data::ActivityChessExcelConfigMgrBase::rewriteConfig(
        data::ActivityChessExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 1830: range 00000000127DEDA2-00000000127DEDB4
int32_t __cdecl data::ActivityChessExcelConfigMgrBase::finalConfig(
        data::ActivityChessExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 1835: range 00000000127DEDB6-00000000127DEF71
data::ActivityChessPreviewExcelConfig *__fastcall data::ActivityChessExcelConfigMgrBase::findActivityChessPreviewExcelConfig(
        data::ActivityChessExcelConfigMgrBase *const this,
        __int64 activity_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ActivityChessPreviewExcelConfigMap *p_activity_chess_preview_excel_config_map; // rdx
  data::ActivityChessPreviewExcelConfigMap *v6; // rdx
  bool v7; // al
  data::ActivityChessPreviewExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 16 activity_id:1834 64 8 9 iter:1836 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityChessExcelConfigMgrBase::findActivityChessPreviewExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = activity_id;
  p_activity_chess_preview_excel_config_map = &this->activity_chess_preview_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, activity_id);
  *(std::unordered_map<unsigned int,data::ActivityChessPreviewExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityChessPreviewExcelConfig>::find(
                                                                                                     p_activity_chess_preview_excel_config_map,
                                                                                                     (const std::unordered_map<unsigned int,data::ActivityChessPreviewExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->activity_chess_preview_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ActivityChessPreviewExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityChessPreviewExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ActivityChessPreviewExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessPreviewExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessPreviewExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessPreviewExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessPreviewExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1848: range 00000000127DEF72-00000000127DF12D
const data::ActivityChessPreviewExcelConfig *__fastcall data::ActivityChessExcelConfigMgrBase::findActivityChessPreviewExcelConfig(
        const data::ActivityChessExcelConfigMgrBase *const this,
        __int64 activity_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ActivityChessPreviewExcelConfigMap *p_activity_chess_preview_excel_config_map; // rdx
  data::ActivityChessPreviewExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::ActivityChessPreviewExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 16 activity_id:1847 64 8 9 iter:1849 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityChessExcelConfigMgrBase::findActivityChessPreviewExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = activity_id;
  p_activity_chess_preview_excel_config_map = &this->activity_chess_preview_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, activity_id);
  *(std::unordered_map<unsigned int,data::ActivityChessPreviewExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityChessPreviewExcelConfig>::find(p_activity_chess_preview_excel_config_map, (const std::unordered_map<unsigned int,data::ActivityChessPreviewExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->activity_chess_preview_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ActivityChessPreviewExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityChessPreviewExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ActivityChessPreviewExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessPreviewExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessPreviewExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityChessPreviewExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityChessPreviewExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1861: range 00000000127DF12E-00000000127DF2E9
data::ActivityChessLevelExcelConfig *__fastcall data::ActivityChessExcelConfigMgrBase::findActivityChessLevelExcelConfig(
        data::ActivityChessExcelConfigMgrBase *const this,
        __int64 level)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ActivityChessLevelExcelConfigMap *p_activity_chess_level_excel_config_map; // rdx
  data::ActivityChessLevelExcelConfigMap *v6; // rdx
  bool v7; // al
  data::ActivityChessLevelExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 10 level:1860 64 8 9 iter:1862 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityChessExcelConfigMgrBase::findActivityChessLevelExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = level;
  p_activity_chess_level_excel_config_map = &this->activity_chess_level_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, level);
  *(std::unordered_map<unsigned int,data::ActivityChessLevelExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityChessLevelExcelConfig>::find(
                                                                                                   p_activity_chess_level_excel_config_map,
                                                                                                   (const std::unordered_map<unsigned int,data::ActivityChessLevelExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->activity_chess_level_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ActivityChessLevelExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityChessLevelExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ActivityChessLevelExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessLevelExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessLevelExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessLevelExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessLevelExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1874: range 00000000127DF2EA-00000000127DF4A5
const data::ActivityChessLevelExcelConfig *__fastcall data::ActivityChessExcelConfigMgrBase::findActivityChessLevelExcelConfig(
        const data::ActivityChessExcelConfigMgrBase *const this,
        __int64 level)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ActivityChessLevelExcelConfigMap *p_activity_chess_level_excel_config_map; // rdx
  data::ActivityChessLevelExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::ActivityChessLevelExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 10 level:1873 64 8 9 iter:1875 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityChessExcelConfigMgrBase::findActivityChessLevelExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = level;
  p_activity_chess_level_excel_config_map = &this->activity_chess_level_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, level);
  *(std::unordered_map<unsigned int,data::ActivityChessLevelExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityChessLevelExcelConfig>::find(p_activity_chess_level_excel_config_map, (const std::unordered_map<unsigned int,data::ActivityChessLevelExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->activity_chess_level_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ActivityChessLevelExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityChessLevelExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ActivityChessLevelExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessLevelExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessLevelExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityChessLevelExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityChessLevelExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1887: range 00000000127DF4A6-00000000127DF661
data::ActivityChessMapExcelConfig *__fastcall data::ActivityChessExcelConfigMgrBase::findActivityChessMapExcelConfig(
        data::ActivityChessExcelConfigMgrBase *const this,
        __int64 chess_map_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ActivityChessMapExcelConfigMap *p_activity_chess_map_excel_config_map; // rdx
  data::ActivityChessMapExcelConfigMap *v6; // rdx
  bool v7; // al
  data::ActivityChessMapExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 17 chess_map_id:1886 64 8 9 iter:1888 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityChessExcelConfigMgrBase::findActivityChessMapExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = chess_map_id;
  p_activity_chess_map_excel_config_map = &this->activity_chess_map_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, chess_map_id);
  *(std::unordered_map<unsigned int,data::ActivityChessMapExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityChessMapExcelConfig>::find(
                                                                                                 p_activity_chess_map_excel_config_map,
                                                                                                 (const std::unordered_map<unsigned int,data::ActivityChessMapExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->activity_chess_map_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ActivityChessMapExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityChessMapExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ActivityChessMapExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessMapExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessMapExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessMapExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessMapExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1900: range 00000000127DF662-00000000127DF81D
const data::ActivityChessMapExcelConfig *__fastcall data::ActivityChessExcelConfigMgrBase::findActivityChessMapExcelConfig(
        const data::ActivityChessExcelConfigMgrBase *const this,
        __int64 chess_map_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ActivityChessMapExcelConfigMap *p_activity_chess_map_excel_config_map; // rdx
  data::ActivityChessMapExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::ActivityChessMapExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 17 chess_map_id:1899 64 8 9 iter:1901 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityChessExcelConfigMgrBase::findActivityChessMapExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = chess_map_id;
  p_activity_chess_map_excel_config_map = &this->activity_chess_map_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, chess_map_id);
  *(std::unordered_map<unsigned int,data::ActivityChessMapExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityChessMapExcelConfig>::find(p_activity_chess_map_excel_config_map, (const std::unordered_map<unsigned int,data::ActivityChessMapExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->activity_chess_map_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ActivityChessMapExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityChessMapExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ActivityChessMapExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessMapExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessMapExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityChessMapExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityChessMapExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1913: range 00000000127DF81E-00000000127DF9DF
data::ActivityChessScheduleExcelConfig *__fastcall data::ActivityChessExcelConfigMgrBase::findActivityChessScheduleExcelConfig(
        data::ActivityChessExcelConfigMgrBase *const this,
        __int64 day)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ActivityChessScheduleExcelConfigMap *p_activity_chess_schedule_excel_config_map; // rdx
  data::ActivityChessScheduleExcelConfigMap *v6; // rdx
  bool v7; // al
  data::ActivityChessScheduleExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 8 day:1912 64 8 9 iter:1914 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityChessExcelConfigMgrBase::findActivityChessScheduleExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = day;
  p_activity_chess_schedule_excel_config_map = &this->activity_chess_schedule_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, day);
  *(std::unordered_map<unsigned int,data::ActivityChessScheduleExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityChessScheduleExcelConfig>::find(p_activity_chess_schedule_excel_config_map, (const std::unordered_map<unsigned int,data::ActivityChessScheduleExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->activity_chess_schedule_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ActivityChessScheduleExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityChessScheduleExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ActivityChessScheduleExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessScheduleExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessScheduleExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessScheduleExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessScheduleExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1926: range 00000000127DF9E0-00000000127DFBA1
const data::ActivityChessScheduleExcelConfig *__fastcall data::ActivityChessExcelConfigMgrBase::findActivityChessScheduleExcelConfig(
        const data::ActivityChessExcelConfigMgrBase *const this,
        __int64 day)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ActivityChessScheduleExcelConfigMap *p_activity_chess_schedule_excel_config_map; // rdx
  data::ActivityChessScheduleExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::ActivityChessScheduleExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 8 day:1925 64 8 9 iter:1927 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityChessExcelConfigMgrBase::findActivityChessScheduleExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = day;
  p_activity_chess_schedule_excel_config_map = &this->activity_chess_schedule_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, day);
  *(std::unordered_map<unsigned int,data::ActivityChessScheduleExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityChessScheduleExcelConfig>::find(p_activity_chess_schedule_excel_config_map, (const std::unordered_map<unsigned int,data::ActivityChessScheduleExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->activity_chess_schedule_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ActivityChessScheduleExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityChessScheduleExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ActivityChessScheduleExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessScheduleExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessScheduleExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityChessScheduleExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityChessScheduleExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1939: range 00000000127DFBA2-00000000127DFD63
data::ActivityChessGearExcelConfig *__fastcall data::ActivityChessExcelConfigMgrBase::findActivityChessGearExcelConfig(
        data::ActivityChessExcelConfigMgrBase *const this,
        __int64 gear_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ActivityChessGearExcelConfigMap *p_activity_chess_gear_excel_config_map; // rdx
  data::ActivityChessGearExcelConfigMap *v6; // rdx
  bool v7; // al
  data::ActivityChessGearExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 gear_id:1938 64 8 9 iter:1940 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityChessExcelConfigMgrBase::findActivityChessGearExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = gear_id;
  p_activity_chess_gear_excel_config_map = &this->activity_chess_gear_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, gear_id);
  *(std::unordered_map<unsigned int,data::ActivityChessGearExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityChessGearExcelConfig>::find(
                                                                                                  p_activity_chess_gear_excel_config_map,
                                                                                                  (const std::unordered_map<unsigned int,data::ActivityChessGearExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->activity_chess_gear_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ActivityChessGearExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityChessGearExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ActivityChessGearExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessGearExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessGearExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessGearExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessGearExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1952: range 00000000127DFD64-00000000127DFF25
const data::ActivityChessGearExcelConfig *__fastcall data::ActivityChessExcelConfigMgrBase::findActivityChessGearExcelConfig(
        const data::ActivityChessExcelConfigMgrBase *const this,
        __int64 gear_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ActivityChessGearExcelConfigMap *p_activity_chess_gear_excel_config_map; // rdx
  data::ActivityChessGearExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::ActivityChessGearExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 gear_id:1951 64 8 9 iter:1953 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityChessExcelConfigMgrBase::findActivityChessGearExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = gear_id;
  p_activity_chess_gear_excel_config_map = &this->activity_chess_gear_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, gear_id);
  *(std::unordered_map<unsigned int,data::ActivityChessGearExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityChessGearExcelConfig>::find(p_activity_chess_gear_excel_config_map, (const std::unordered_map<unsigned int,data::ActivityChessGearExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->activity_chess_gear_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ActivityChessGearExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityChessGearExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ActivityChessGearExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessGearExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessGearExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityChessGearExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityChessGearExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1965: range 00000000127DFF26-00000000127E00E7
data::ActivityChessCardExcelConfig *__fastcall data::ActivityChessExcelConfigMgrBase::findActivityChessCardExcelConfig(
        data::ActivityChessExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ActivityChessCardExcelConfigMap *p_activity_chess_card_excel_config_map; // rdx
  data::ActivityChessCardExcelConfigMap *v6; // rdx
  bool v7; // al
  data::ActivityChessCardExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 id:1964 64 8 9 iter:1966 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityChessExcelConfigMgrBase::findActivityChessCardExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_activity_chess_card_excel_config_map = &this->activity_chess_card_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::ActivityChessCardExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityChessCardExcelConfig>::find(
                                                                                                  p_activity_chess_card_excel_config_map,
                                                                                                  (const std::unordered_map<unsigned int,data::ActivityChessCardExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->activity_chess_card_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ActivityChessCardExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityChessCardExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ActivityChessCardExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessCardExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessCardExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessCardExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessCardExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1978: range 00000000127E00E8-00000000127E02A9
const data::ActivityChessCardExcelConfig *__fastcall data::ActivityChessExcelConfigMgrBase::findActivityChessCardExcelConfig(
        const data::ActivityChessExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ActivityChessCardExcelConfigMap *p_activity_chess_card_excel_config_map; // rdx
  data::ActivityChessCardExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::ActivityChessCardExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 id:1977 64 8 9 iter:1979 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityChessExcelConfigMgrBase::findActivityChessCardExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_activity_chess_card_excel_config_map = &this->activity_chess_card_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::ActivityChessCardExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityChessCardExcelConfig>::find(p_activity_chess_card_excel_config_map, (const std::unordered_map<unsigned int,data::ActivityChessCardExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->activity_chess_card_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ActivityChessCardExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityChessCardExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ActivityChessCardExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessCardExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessCardExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityChessCardExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityChessCardExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1991: range 00000000127E02AA-00000000127E046B
data::ActivityChessMapPointExcelConfig *__fastcall data::ActivityChessExcelConfigMgrBase::findActivityChessMapPointExcelConfig(
        data::ActivityChessExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ActivityChessMapPointExcelConfigMap *p_activity_chess_map_point_excel_config_map; // rdx
  data::ActivityChessMapPointExcelConfigMap *v6; // rdx
  bool v7; // al
  data::ActivityChessMapPointExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 id:1990 64 8 9 iter:1992 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityChessExcelConfigMgrBase::findActivityChessMapPointExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_activity_chess_map_point_excel_config_map = &this->activity_chess_map_point_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::ActivityChessMapPointExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityChessMapPointExcelConfig>::find(p_activity_chess_map_point_excel_config_map, (const std::unordered_map<unsigned int,data::ActivityChessMapPointExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->activity_chess_map_point_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ActivityChessMapPointExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityChessMapPointExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ActivityChessMapPointExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessMapPointExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessMapPointExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessMapPointExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessMapPointExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 2004: range 00000000127E046C-00000000127E062D
const data::ActivityChessMapPointExcelConfig *__fastcall data::ActivityChessExcelConfigMgrBase::findActivityChessMapPointExcelConfig(
        const data::ActivityChessExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ActivityChessMapPointExcelConfigMap *p_activity_chess_map_point_excel_config_map; // rdx
  data::ActivityChessMapPointExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::ActivityChessMapPointExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 id:2003 64 8 9 iter:2005 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityChessExcelConfigMgrBase::findActivityChessMapPointExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_activity_chess_map_point_excel_config_map = &this->activity_chess_map_point_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::ActivityChessMapPointExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityChessMapPointExcelConfig>::find(p_activity_chess_map_point_excel_config_map, (const std::unordered_map<unsigned int,data::ActivityChessMapPointExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->activity_chess_map_point_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ActivityChessMapPointExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityChessMapPointExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ActivityChessMapPointExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessMapPointExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessMapPointExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityChessMapPointExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityChessMapPointExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 2017: range 00000000127E062E-00000000127E07EF
data::ActivityChessAffixExcelConfig *__fastcall data::ActivityChessExcelConfigMgrBase::findActivityChessAffixExcelConfig(
        data::ActivityChessExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ActivityChessAffixExcelConfigMap *p_activity_chess_affix_excel_config_map; // rdx
  data::ActivityChessAffixExcelConfigMap *v6; // rdx
  bool v7; // al
  data::ActivityChessAffixExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 id:2016 64 8 9 iter:2018 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityChessExcelConfigMgrBase::findActivityChessAffixExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_activity_chess_affix_excel_config_map = &this->activity_chess_affix_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::ActivityChessAffixExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityChessAffixExcelConfig>::find(
                                                                                                   p_activity_chess_affix_excel_config_map,
                                                                                                   (const std::unordered_map<unsigned int,data::ActivityChessAffixExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->activity_chess_affix_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ActivityChessAffixExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityChessAffixExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ActivityChessAffixExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessAffixExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessAffixExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessAffixExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityChessAffixExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 2030: range 00000000127E07F0-00000000127E09B1
const data::ActivityChessAffixExcelConfig *__fastcall data::ActivityChessExcelConfigMgrBase::findActivityChessAffixExcelConfig(
        const data::ActivityChessExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ActivityChessAffixExcelConfigMap *p_activity_chess_affix_excel_config_map; // rdx
  data::ActivityChessAffixExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::ActivityChessAffixExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 id:2029 64 8 9 iter:2031 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityChessExcelConfigMgrBase::findActivityChessAffixExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_activity_chess_affix_excel_config_map = &this->activity_chess_affix_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::ActivityChessAffixExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityChessAffixExcelConfig>::find(p_activity_chess_affix_excel_config_map, (const std::unordered_map<unsigned int,data::ActivityChessAffixExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->activity_chess_affix_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ActivityChessAffixExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityChessAffixExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ActivityChessAffixExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessAffixExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityChessAffixExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityChessAffixExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityChessAffixExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/InvestigationExcelConfig.gen.cpp

// Line 12: range 00000000144E81D2-00000000144E8545
const char *__fastcall data::enumValToStr(data::InvestigationType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::InvestigationType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::InvestigationType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
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
  map = data::getInvestigationTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::InvestigationType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::InvestigationType,std::pair<std::string,std::string>>::find(map, (const std::map<data::InvestigationType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::InvestigationType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::InvestigationType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::InvestigationType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::InvestigationType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
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
    result = "INVALID_InvestigationType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::InvestigationType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::InvestigationType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 24: range 00000000144E8546-00000000144E8AFE
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::InvestigationType>,false,true>::pointer v10; // rax
  data::InvestigationType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::InvestigationType> *m; // [rsp+18h] [rbp-188h]
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
    m = data::getInvestigationTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::InvestigationType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::InvestigationType>::find(
                                                                                              m,
                                                                                              (const std::unordered_map<std::string,data::InvestigationType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::InvestigationType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::InvestigationType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::InvestigationType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::InvestigationType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::InvestigationType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
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
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::InvestigationType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::InvestigationType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
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

// Line 45: range 00000000144E8AFF-00000000144E95FD
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::InvestigationType> *i; // r14
  _DWORD *v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::InvestigationType>,false,true>::pointer v12; // rax
  data::InvestigationType second; // ecx
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::InvestigationType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::InvestigationType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, e);
      *(_DWORD *)(v2 + 96) = 0;
      std::pair<std::string const,data::InvestigationType>::pair<char const(&)[13],data::InvestigationType,true>(
        (std::pair<const std::string,data::InvestigationType> *const)(v2 + 448),
        (const char (*)[13])byte_1AD92B00,
        (data::InvestigationType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, byte_1AD92B00);
      *(_DWORD *)(v2 + 112) = 1;
      std::pair<std::string const,data::InvestigationType>::pair<char const(&)[13],data::InvestigationType,true>(
        (std::pair<const std::string,data::InvestigationType> *const)(v2 + 488),
        (const char (*)[13])byte_1AD92B40,
        (data::InvestigationType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1AD92B40);
      *(_DWORD *)(v2 + 128) = 2;
      std::pair<std::string const,data::InvestigationType>::pair<char const(&)[13],data::InvestigationType,true>(
        (std::pair<const std::string,data::InvestigationType> *const)(v2 + 528),
        (const char (*)[13])byte_1AD92B80,
        (data::InvestigationType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, byte_1AD92B80);
      *(_DWORD *)(v2 + 144) = 3;
      std::pair<std::string const,data::InvestigationType>::pair<char const(&)[13],data::InvestigationType,true>(
        (std::pair<const std::string,data::InvestigationType> *const)(v2 + 568),
        (const char (*)[13])byte_1AD92BC0,
        (data::InvestigationType *)(v2 + 144));
      std::allocator<std::pair<std::string const,data::InvestigationType>>::allocator((std::allocator<std::pair<const std::string,data::InvestigationType> > *const)(v2 + 64));
      std::unordered_map<std::string,data::InvestigationType>::unordered_map(
        &data::enumStrToVal(char const*,data::InvestigationType &)::m,
        (std::initializer_list<std::pair<const std::string,data::InvestigationType> >)__PAIR128__(4LL, v2 + 448),
        0LL,
        (const std::unordered_map<std::string,data::InvestigationType>::hasher *)(v2 + 32),
        (const std::unordered_map<std::string,data::InvestigationType>::key_equal *)(v2 + 48),
        (const std::unordered_map<std::string,data::InvestigationType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::InvestigationType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::InvestigationType>::~unordered_map,
        &data::enumStrToVal(char const*,data::InvestigationType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::InvestigationType>>::~allocator((std::allocator<std::pair<const std::string,data::InvestigationType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::InvestigationType> *)(v2 + 608);
            i != (std::pair<const std::string,data::InvestigationType> *)(v2 + 448);
            std::pair<std::string const,data::InvestigationType>::~pair(i) )
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
    *(std::unordered_map<std::string,data::InvestigationType>::iterator *)(v2 + 160) = std::unordered_map<std::string,data::InvestigationType>::find(
                                                                                         &data::enumStrToVal(char const*,data::InvestigationType &)::m,
                                                                                         (const std::unordered_map<std::string,data::InvestigationType>::key_type *)(v2 + 320));
    std::string::~string((void *)(v2 + 320));
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 80);
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, v2 + 320);
    *(std::unordered_map<std::string,data::InvestigationType>::iterator *)(v2 + 192) = std::unordered_map<std::string,data::InvestigationType>::end(&data::enumStrToVal(char const*,data::InvestigationType &)::m);
    v9 = (char *)(v2 + 192);
    v10 = std::__detail::operator==<std::pair<std::string const,data::InvestigationType>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::InvestigationType>,true> *)(v2 + 160),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::InvestigationType>,true> *)(v2 + 192));
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
        "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
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
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::InvestigationType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::InvestigationType>,false,true> *const)(v2 + 160));
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
      "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
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

// Line 72: range 00000000144E95FE-00000000144E9614
const char *__cdecl data::getDescription(data::InvestigationType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 77: range 00000000144E9615-00000000144E97CA
bool __cdecl data::isValidInvestigationType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::InvestigationType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::InvestigationType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidInvestigationType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getInvestigationTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::InvestigationType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::InvestigationType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getInvestigationTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::InvestigationType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::InvestigationType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::InvestigationType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::InvestigationType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::InvestigationType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 83: range 00000000144E97CB-00000000144E992C
bool __cdecl data::isValidInvestigationTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::InvestigationType> *v5; // rcx
  const std::unordered_map<std::string,data::InvestigationType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidInvestigationTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getInvestigationTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::InvestigationType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::InvestigationType>::end(v5);
  v6 = data::getInvestigationTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::InvestigationType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::InvestigationType>::find(
                                                                                            v6,
                                                                                            name);
  result = std::__detail::operator!=<std::pair<std::string const,data::InvestigationType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::InvestigationType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::InvestigationType>,true> *)(v2 + 64));
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

// Line 88: range 00000000144E992D-00000000144E9E8C
const std::unordered_map<std::string,data::InvestigationType> *__cdecl data::getInvestigationTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::InvestigationType> *i; // r14
  const std::unordered_map<std::string,data::InvestigationType> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getInvestigationTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -234753535;
  v3[536862723] = -234556924;
  v3[536862724] = -234556924;
  v3[536862730] = -202116109;
  v3[536862731] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getInvestigationTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getInvestigationTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v0);
    *(_DWORD *)(v1 + 96) = 0;
    std::pair<std::string const,data::InvestigationType>::pair<char const(&)[24],data::InvestigationType,true>(
      (std::pair<const std::string,data::InvestigationType> *const)(v1 + 160),
      (const char (*)[24])"INVESTIGATION_ADVENTURE",
      (data::InvestigationType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "INVESTIGATION_ADVENTURE");
    *(_DWORD *)(v1 + 112) = 1;
    std::pair<std::string const,data::InvestigationType>::pair<char const(&)[24],data::InvestigationType,true>(
      (std::pair<const std::string,data::InvestigationType> *const)(v1 + 200),
      (const char (*)[24])"INVESTIGATION_HOMEWORLD",
      (data::InvestigationType *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, "INVESTIGATION_HOMEWORLD");
    *(_DWORD *)(v1 + 128) = 2;
    std::pair<std::string const,data::InvestigationType>::pair<char const(&)[23],data::InvestigationType,true>(
      (std::pair<const std::string,data::InvestigationType> *const)(v1 + 240),
      (const char (*)[23])"INVESTIGATION_EDCATION",
      (data::InvestigationType *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, "INVESTIGATION_EDCATION");
    *(_DWORD *)(v1 + 144) = 3;
    std::pair<std::string const,data::InvestigationType>::pair<char const(&)[18],data::InvestigationType,true>(
      (std::pair<const std::string,data::InvestigationType> *const)(v1 + 280),
      (const char (*)[18])"INVESTIGATION_GCG",
      (data::InvestigationType *)(v1 + 144));
    std::allocator<std::pair<std::string const,data::InvestigationType>>::allocator((std::allocator<std::pair<const std::string,data::InvestigationType> > *const)(v1 + 80));
    std::unordered_map<std::string,data::InvestigationType>::unordered_map(
      &data::getInvestigationTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::InvestigationType> >)__PAIR128__(4LL, v1 + 160),
      0LL,
      (const std::unordered_map<std::string,data::InvestigationType>::hasher *)(v1 + 48),
      (const std::unordered_map<std::string,data::InvestigationType>::key_equal *)(v1 + 64),
      (const std::unordered_map<std::string,data::InvestigationType>::allocator_type *)(v1 + 80));
    __cxa_guard_release(&`guard variable for'data::getInvestigationTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::InvestigationType>::~unordered_map,
      &data::getInvestigationTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::InvestigationType>>::~allocator((std::allocator<std::pair<const std::string,data::InvestigationType> > *const)(v1 + 80));
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::InvestigationType> *)(v1 + 320);
          i != (std::pair<const std::string,data::InvestigationType> *)(v1 + 160);
          std::pair<std::string const,data::InvestigationType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getInvestigationTypeNameMap[abi:cxx11](void)::m;
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

// Line 100: range 00000000144E9E8D-00000000144EA65D
const std::map<data::InvestigationType,std::pair<std::string,std::string >> *__cdecl data::getInvestigationTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::InvestigationType,std::pair<std::string,std::string > > *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getInvestigationTypeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getInvestigationTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getInvestigationTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 64, v0);
    *(_DWORD *)(v1 + 64) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[24],true>(
      (std::pair<std::string,std::string > *const)(v1 + 128),
      (const char (*)[13])byte_1AD92B00,
      (const char (*)[24])"INVESTIGATION_ADVENTURE");
    std::pair<data::InvestigationType const,std::pair<std::string,std::string>>::pair<data::InvestigationType,true>(
      (std::pair<const data::InvestigationType,std::pair<std::string,std::string > > *const)(v1 + 512),
      (data::InvestigationType *)(v1 + 64),
      (const std::pair<std::string,std::string > *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v1 + 64);
    *(_DWORD *)(v1 + 80) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[24],true>(
      (std::pair<std::string,std::string > *const)(v1 + 224),
      (const char (*)[13])byte_1AD92B40,
      (const char (*)[24])"INVESTIGATION_HOMEWORLD");
    std::pair<data::InvestigationType const,std::pair<std::string,std::string>>::pair<data::InvestigationType,true>(
      (std::pair<const data::InvestigationType,std::pair<std::string,std::string > > *const)(v1 + 584),
      (data::InvestigationType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 224));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[23],true>(
      (std::pair<std::string,std::string > *const)(v1 + 320),
      (const char (*)[13])byte_1AD92B80,
      (const char (*)[23])"INVESTIGATION_EDCATION");
    std::pair<data::InvestigationType const,std::pair<std::string,std::string>>::pair<data::InvestigationType,true>(
      (std::pair<const data::InvestigationType,std::pair<std::string,std::string > > *const)(v1 + 656),
      (data::InvestigationType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 320));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 3;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[18],true>(
      (std::pair<std::string,std::string > *const)(v1 + 416),
      (const char (*)[13])byte_1AD92BC0,
      (const char (*)[18])"INVESTIGATION_GCG");
    std::pair<data::InvestigationType const,std::pair<std::string,std::string>>::pair<data::InvestigationType,true>(
      (std::pair<const data::InvestigationType,std::pair<std::string,std::string > > *const)(v1 + 728),
      (data::InvestigationType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 416));
    std::allocator<std::pair<data::InvestigationType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::InvestigationType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    std::map<data::InvestigationType,std::pair<std::string,std::string>>::map(
      &data::getInvestigationTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::InvestigationType,std::pair<std::string,std::string > > >)__PAIR128__(4LL, v1 + 512),
      (const std::less<data::InvestigationType> *)(v1 + 32),
      (const std::map<data::InvestigationType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 48));
    __cxa_guard_release(&`guard variable for'data::getInvestigationTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::InvestigationType,std::pair<std::string,std::string>>::~map,
      &data::getInvestigationTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::InvestigationType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::InvestigationType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::InvestigationType,std::pair<std::string,std::string > > *)(v1 + 800);
          i != (std::pair<const data::InvestigationType,std::pair<std::string,std::string > > *)(v1 + 512);
          std::pair<data::InvestigationType const,std::pair<std::string,std::string>>::~pair(i) )
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
  return &data::getInvestigationTypeEnumMap[abi:cxx11](void)::m;
};

// Line 112: range 00000000144EA65E-00000000144EA9D1
const char *__fastcall data::enumValToStr(data::InvestigationMonsterMapMarkCreateType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::InvestigationMonsterMapMarkCreateType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::InvestigationMonsterMapMarkCreateType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 5 e:111 64 8 8 iter:114 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getInvestigationMonsterMapMarkCreateTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::InvestigationMonsterMapMarkCreateType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::InvestigationMonsterMapMarkCreateType,std::pair<std::string,std::string>>::find(map, (const std::map<data::InvestigationMonsterMapMarkCreateType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::InvestigationMonsterMapMarkCreateType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::InvestigationMonsterMapMarkCreateType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::InvestigationMonsterMapMarkCreateType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::InvestigationMonsterMapMarkCreateType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
      "enumValToStr",
      117);
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
    result = "INVALID_InvestigationMonsterMapMarkCreateType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::InvestigationMonsterMapMarkCreateType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::InvestigationMonsterMapMarkCreateType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 124: range 00000000144EA9D2-00000000144EAF8A
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::InvestigationMonsterMapMarkCreateType>,false,true>::pointer v10; // rax
  data::InvestigationMonsterMapMarkCreateType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateType> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:133 96 8 9 <unknown> 128 8 5 s:123 160 32 9 <unknown> 224 32 9 <unk"
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
    m = data::getInvestigationMonsterMapMarkCreateTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateType>::find(m, (const std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::InvestigationMonsterMapMarkCreateType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::InvestigationMonsterMapMarkCreateType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::InvestigationMonsterMapMarkCreateType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
        "enumNameToVal",
        136);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::InvestigationMonsterMapMarkCreateType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::InvestigationMonsterMapMarkCreateType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
      "enumNameToVal",
      127);
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

// Line 145: range 00000000144EAF8B-00000000144EB9E6
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::InvestigationMonsterMapMarkCreateType> *i; // r14
  unsigned __int64 v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::InvestigationMonsterMapMarkCreateType>,false,true>::pointer v12; // rax
  data::InvestigationMonsterMapMarkCreateType second; // ecx
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
                        " <unknown> 144 4 9 <unknown> 160 8 6 it:159 192 8 9 <unknown> 224 8 5 s:144 256 32 9 <unknown> 3"
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::InvestigationMonsterMapMarkCreateType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::InvestigationMonsterMapMarkCreateType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, e);
      *(_DWORD *)(v2 + 112) = 0;
      std::pair<std::string const,data::InvestigationMonsterMapMarkCreateType>::pair<char const(&)[22],data::InvestigationMonsterMapMarkCreateType,true>(
        (std::pair<const std::string,data::InvestigationMonsterMapMarkCreateType> *const)(v2 + 448),
        (const char (*)[22])byte_1AD92F40,
        (data::InvestigationMonsterMapMarkCreateType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1AD92F40);
      *(_DWORD *)(v2 + 128) = 1;
      std::pair<std::string const,data::InvestigationMonsterMapMarkCreateType>::pair<char const(&)[13],data::InvestigationMonsterMapMarkCreateType,true>(
        (std::pair<const std::string,data::InvestigationMonsterMapMarkCreateType> *const)(v2 + 488),
        (const char (*)[13])byte_1AD92F80,
        (data::InvestigationMonsterMapMarkCreateType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, byte_1AD92F80);
      *(_DWORD *)(v2 + 144) = 2;
      std::pair<std::string const,data::InvestigationMonsterMapMarkCreateType>::pair<char const(&)[13],data::InvestigationMonsterMapMarkCreateType,true>(
        (std::pair<const std::string,data::InvestigationMonsterMapMarkCreateType> *const)(v2 + 528),
        (const char (*)[13])byte_1AD92FC0,
        (data::InvestigationMonsterMapMarkCreateType *)(v2 + 144));
      std::allocator<std::pair<std::string const,data::InvestigationMonsterMapMarkCreateType>>::allocator((std::allocator<std::pair<const std::string,data::InvestigationMonsterMapMarkCreateType> > *const)(v2 + 80));
      std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateType>::unordered_map(
        &data::enumStrToVal(char const*,data::InvestigationMonsterMapMarkCreateType &)::m,
        (std::initializer_list<std::pair<const std::string,data::InvestigationMonsterMapMarkCreateType> >)__PAIR128__(3LL, v2 + 448),
        0LL,
        (const std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateType>::hasher *)(v2 + 48),
        (const std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateType>::key_equal *)(v2 + 64),
        (const std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateType>::allocator_type *)(v2 + 80));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::InvestigationMonsterMapMarkCreateType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateType>::~unordered_map,
        &data::enumStrToVal(char const*,data::InvestigationMonsterMapMarkCreateType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::InvestigationMonsterMapMarkCreateType>>::~allocator((std::allocator<std::pair<const std::string,data::InvestigationMonsterMapMarkCreateType> > *const)(v2 + 80));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::InvestigationMonsterMapMarkCreateType> *)(v2 + 568);
            i != (std::pair<const std::string,data::InvestigationMonsterMapMarkCreateType> *)(v2 + 448);
            std::pair<std::string const,data::InvestigationMonsterMapMarkCreateType>::~pair(i) )
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
    *(std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateType>::iterator *)(v2 + 160) = std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateType>::find(&data::enumStrToVal(char const*,data::InvestigationMonsterMapMarkCreateType &)::m, (const std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateType>::key_type *)(v2 + 320));
    std::string::~string((void *)(v2 + 320));
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 96);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, v2 + 320);
    *(std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateType>::iterator *)(v2 + 192) = std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateType>::end(&data::enumStrToVal(char const*,data::InvestigationMonsterMapMarkCreateType &)::m);
    v9 = (char *)(v2 + 192);
    v10 = std::__detail::operator==<std::pair<std::string const,data::InvestigationMonsterMapMarkCreateType>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::InvestigationMonsterMapMarkCreateType>,true> *)(v2 + 160),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::InvestigationMonsterMapMarkCreateType>,true> *)(v2 + 192));
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
        "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
        "enumStrToVal",
        162);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 384),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)(v2 + 224));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::InvestigationMonsterMapMarkCreateType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::InvestigationMonsterMapMarkCreateType>,false,true> *const)(v2 + 160));
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
      "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
      "enumStrToVal",
      148);
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

// Line 171: range 00000000144EB9E7-00000000144EB9FD
const char *__cdecl data::getDescription(data::InvestigationMonsterMapMarkCreateType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 176: range 00000000144EB9FE-00000000144EBBB3
bool __cdecl data::isValidInvestigationMonsterMapMarkCreateType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::InvestigationMonsterMapMarkCreateType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::InvestigationMonsterMapMarkCreateType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:177 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidInvestigationMonsterMapMarkCreateType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getInvestigationMonsterMapMarkCreateTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::InvestigationMonsterMapMarkCreateType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::InvestigationMonsterMapMarkCreateType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getInvestigationMonsterMapMarkCreateTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::InvestigationMonsterMapMarkCreateType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::InvestigationMonsterMapMarkCreateType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::InvestigationMonsterMapMarkCreateType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::InvestigationMonsterMapMarkCreateType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::InvestigationMonsterMapMarkCreateType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 182: range 00000000144EBBB4-00000000144EBD15
bool __cdecl data::isValidInvestigationMonsterMapMarkCreateTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateType> *v5; // rcx
  const std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidInvestigationMonsterMapMarkCreateTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getInvestigationMonsterMapMarkCreateTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateType>::end(v5);
  v6 = data::getInvestigationMonsterMapMarkCreateTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateType>::find(v6, name);
  result = std::__detail::operator!=<std::pair<std::string const,data::InvestigationMonsterMapMarkCreateType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::InvestigationMonsterMapMarkCreateType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::InvestigationMonsterMapMarkCreateType>,true> *)(v2 + 64));
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

// Line 187: range 00000000144EBD16-00000000144EC1D8
const std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateType> *__cdecl data::getInvestigationMonsterMapMarkCreateTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::InvestigationMonsterMapMarkCreateType> *i; // r14
  const std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateType> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getInvestigationMonsterMapMarkCreateTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556927;
  v3[536862723] = -234556924;
  v3[536862727] = -218103808;
  v3[536862728] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getInvestigationMonsterMapMarkCreateTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getInvestigationMonsterMapMarkCreateTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string const,data::InvestigationMonsterMapMarkCreateType>::pair<char const(&)[12],data::InvestigationMonsterMapMarkCreateType,true>(
      (std::pair<const std::string,data::InvestigationMonsterMapMarkCreateType> *const)(v1 + 128),
      (const char (*)[12])"AfterUnlock",
      (data::InvestigationMonsterMapMarkCreateType *)(v1 + 80));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, "AfterUnlock");
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string const,data::InvestigationMonsterMapMarkCreateType>::pair<char const(&)[13],data::InvestigationMonsterMapMarkCreateType,true>(
      (std::pair<const std::string,data::InvestigationMonsterMapMarkCreateType> *const)(v1 + 168),
      (const char (*)[13])"NerverCreate",
      (data::InvestigationMonsterMapMarkCreateType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "NerverCreate");
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string const,data::InvestigationMonsterMapMarkCreateType>::pair<char const(&)[16],data::InvestigationMonsterMapMarkCreateType,true>(
      (std::pair<const std::string,data::InvestigationMonsterMapMarkCreateType> *const)(v1 + 208),
      (const char (*)[16])"ExtraConditions",
      (data::InvestigationMonsterMapMarkCreateType *)(v1 + 112));
    std::allocator<std::pair<std::string const,data::InvestigationMonsterMapMarkCreateType>>::allocator((std::allocator<std::pair<const std::string,data::InvestigationMonsterMapMarkCreateType> > *const)(v1 + 64));
    std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateType>::unordered_map(
      &data::getInvestigationMonsterMapMarkCreateTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::InvestigationMonsterMapMarkCreateType> >)__PAIR128__(3LL, v1 + 128),
      0LL,
      (const std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateType>::hasher *)(v1 + 32),
      (const std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateType>::key_equal *)(v1 + 48),
      (const std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateType>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getInvestigationMonsterMapMarkCreateTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateType>::~unordered_map,
      &data::getInvestigationMonsterMapMarkCreateTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::InvestigationMonsterMapMarkCreateType>>::~allocator((std::allocator<std::pair<const std::string,data::InvestigationMonsterMapMarkCreateType> > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::InvestigationMonsterMapMarkCreateType> *)(v1 + 248);
          i != (std::pair<const std::string,data::InvestigationMonsterMapMarkCreateType> *)(v1 + 128);
          std::pair<std::string const,data::InvestigationMonsterMapMarkCreateType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getInvestigationMonsterMapMarkCreateTypeNameMap[abi:cxx11](void)::m;
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

// Line 198: range 00000000144EC1D9-00000000144EC8D7
const std::map<data::InvestigationMonsterMapMarkCreateType,std::pair<std::string,std::string >> *__cdecl data::getInvestigationMonsterMapMarkCreateTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::InvestigationMonsterMapMarkCreateType,std::pair<std::string,std::string > > *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getInvestigationMonsterMapMarkCreateTypeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getInvestigationMonsterMapMarkCreateTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getInvestigationMonsterMapMarkCreateTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[22],char const(&)[12],true>(
      (std::pair<std::string,std::string > *const)(v1 + 128),
      (const char (*)[22])byte_1AD92F40,
      (const char (*)[12])"AfterUnlock");
    std::pair<data::InvestigationMonsterMapMarkCreateType const,std::pair<std::string,std::string>>::pair<data::InvestigationMonsterMapMarkCreateType,true>(
      (std::pair<const data::InvestigationMonsterMapMarkCreateType,std::pair<std::string,std::string > > *const)(v1 + 416),
      (data::InvestigationMonsterMapMarkCreateType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[13],true>(
      (std::pair<std::string,std::string > *const)(v1 + 224),
      (const char (*)[13])byte_1AD92F80,
      (const char (*)[13])"NerverCreate");
    std::pair<data::InvestigationMonsterMapMarkCreateType const,std::pair<std::string,std::string>>::pair<data::InvestigationMonsterMapMarkCreateType,true>(
      (std::pair<const data::InvestigationMonsterMapMarkCreateType,std::pair<std::string,std::string > > *const)(v1 + 488),
      (data::InvestigationMonsterMapMarkCreateType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 224));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[16],true>(
      (std::pair<std::string,std::string > *const)(v1 + 320),
      (const char (*)[13])byte_1AD92FC0,
      (const char (*)[16])"ExtraConditions");
    std::pair<data::InvestigationMonsterMapMarkCreateType const,std::pair<std::string,std::string>>::pair<data::InvestigationMonsterMapMarkCreateType,true>(
      (std::pair<const data::InvestigationMonsterMapMarkCreateType,std::pair<std::string,std::string > > *const)(v1 + 560),
      (data::InvestigationMonsterMapMarkCreateType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 320));
    std::allocator<std::pair<data::InvestigationMonsterMapMarkCreateType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::InvestigationMonsterMapMarkCreateType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    std::map<data::InvestigationMonsterMapMarkCreateType,std::pair<std::string,std::string>>::map(
      &data::getInvestigationMonsterMapMarkCreateTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::InvestigationMonsterMapMarkCreateType,std::pair<std::string,std::string > > >)__PAIR128__(3LL, v1 + 416),
      (const std::less<data::InvestigationMonsterMapMarkCreateType> *)(v1 + 48),
      (const std::map<data::InvestigationMonsterMapMarkCreateType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getInvestigationMonsterMapMarkCreateTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::InvestigationMonsterMapMarkCreateType,std::pair<std::string,std::string>>::~map,
      &data::getInvestigationMonsterMapMarkCreateTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::InvestigationMonsterMapMarkCreateType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::InvestigationMonsterMapMarkCreateType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::InvestigationMonsterMapMarkCreateType,std::pair<std::string,std::string > > *)(v1 + 632);
          i != (std::pair<const data::InvestigationMonsterMapMarkCreateType,std::pair<std::string,std::string > > *)(v1 + 416);
          std::pair<data::InvestigationMonsterMapMarkCreateType const,std::pair<std::string,std::string>>::~pair(i) )
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
  return &data::getInvestigationMonsterMapMarkCreateTypeEnumMap[abi:cxx11](void)::m;
};

// Line 209: range 00000000144EC8D8-00000000144ECC4B
const char *__fastcall data::enumValToStr(data::MonsterCategory e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::MonsterCategory,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::MonsterCategory,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 5 e:208 64 8 8 iter:211 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getMonsterCategoryEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::MonsterCategory,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::MonsterCategory,std::pair<std::string,std::string>>::find(map, (const std::map<data::MonsterCategory,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::MonsterCategory,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::MonsterCategory,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::MonsterCategory,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::MonsterCategory,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
      "enumValToStr",
      214);
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
    result = "INVALID_MonsterCategory";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::MonsterCategory const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::MonsterCategory,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 221: range 00000000144ECC4C-00000000144ED204
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::MonsterCategory>,false,true>::pointer v10; // rax
  data::MonsterCategory second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::MonsterCategory> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:230 96 8 9 <unknown> 128 8 5 s:220 160 32 9 <unknown> 224 32 9 <unk"
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
    m = data::getMonsterCategoryNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::MonsterCategory>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::MonsterCategory>::find(
                                                                                            m,
                                                                                            (const std::unordered_map<std::string,data::MonsterCategory>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::MonsterCategory>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::MonsterCategory>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::MonsterCategory>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::MonsterCategory>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::MonsterCategory>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
        "enumNameToVal",
        233);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::MonsterCategory>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::MonsterCategory>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
      "enumNameToVal",
      224);
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

// Line 242: range 00000000144ED205-00000000144EDDE9
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::MonsterCategory> *i; // r14
  unsigned __int64 v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::MonsterCategory>,false,true>::pointer v12; // rax
  data::MonsterCategory second; // ecx
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
                        "<unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 8 6 it:258 208 8 9 <unknown>"
                        " 240 8 5 s:241 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 200 9 <unknown>";
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::MonsterCategory &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::MonsterCategory &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, e);
      *(_DWORD *)(v2 + 96) = 0;
      std::pair<std::string const,data::MonsterCategory>::pair<char const(&)[7],data::MonsterCategory,true>(
        (std::pair<const std::string,data::MonsterCategory> *const)(v2 + 464),
        (const char (*)[7])byte_1AD93340,
        (data::MonsterCategory *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, byte_1AD93340);
      *(_DWORD *)(v2 + 112) = 1;
      std::pair<std::string const,data::MonsterCategory>::pair<char const(&)[13],data::MonsterCategory,true>(
        (std::pair<const std::string,data::MonsterCategory> *const)(v2 + 504),
        (const char (*)[13])byte_1AD93380,
        (data::MonsterCategory *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1AD93380);
      *(_DWORD *)(v2 + 128) = 2;
      std::pair<std::string const,data::MonsterCategory>::pair<char const(&)[13],data::MonsterCategory,true>(
        (std::pair<const std::string,data::MonsterCategory> *const)(v2 + 544),
        (const char (*)[13])byte_1AD933C0,
        (data::MonsterCategory *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, byte_1AD933C0);
      *(_DWORD *)(v2 + 144) = 3;
      std::pair<std::string const,data::MonsterCategory>::pair<char const(&)[13],data::MonsterCategory,true>(
        (std::pair<const std::string,data::MonsterCategory> *const)(v2 + 584),
        (const char (*)[13])byte_1AD93400,
        (data::MonsterCategory *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, byte_1AD93400);
      *(_DWORD *)(v2 + 160) = 4;
      std::pair<std::string const,data::MonsterCategory>::pair<char const(&)[16],data::MonsterCategory,true>(
        (std::pair<const std::string,data::MonsterCategory> *const)(v2 + 624),
        (const char (*)[16])byte_1AD93440,
        (data::MonsterCategory *)(v2 + 160));
      std::allocator<std::pair<std::string const,data::MonsterCategory>>::allocator((std::allocator<std::pair<const std::string,data::MonsterCategory> > *const)(v2 + 64));
      std::unordered_map<std::string,data::MonsterCategory>::unordered_map(
        &data::enumStrToVal(char const*,data::MonsterCategory &)::m,
        (std::initializer_list<std::pair<const std::string,data::MonsterCategory> >)__PAIR128__(5LL, v2 + 464),
        0LL,
        (const std::unordered_map<std::string,data::MonsterCategory>::hasher *)(v2 + 32),
        (const std::unordered_map<std::string,data::MonsterCategory>::key_equal *)(v2 + 48),
        (const std::unordered_map<std::string,data::MonsterCategory>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::MonsterCategory &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::MonsterCategory>::~unordered_map,
        &data::enumStrToVal(char const*,data::MonsterCategory &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::MonsterCategory>>::~allocator((std::allocator<std::pair<const std::string,data::MonsterCategory> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::MonsterCategory> *)(v2 + 664);
            i != (std::pair<const std::string,data::MonsterCategory> *)(v2 + 464);
            std::pair<std::string const,data::MonsterCategory>::~pair(i) )
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
    *(std::unordered_map<std::string,data::MonsterCategory>::iterator *)(v2 + 176) = std::unordered_map<std::string,data::MonsterCategory>::find(
                                                                                       &data::enumStrToVal(char const*,data::MonsterCategory &)::m,
                                                                                       (const std::unordered_map<std::string,data::MonsterCategory>::key_type *)(v2 + 336));
    std::string::~string((void *)(v2 + 336));
    *(_DWORD *)(((v2 + 336) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 80);
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 208, v2 + 336);
    *(std::unordered_map<std::string,data::MonsterCategory>::iterator *)(v2 + 208) = std::unordered_map<std::string,data::MonsterCategory>::end(&data::enumStrToVal(char const*,data::MonsterCategory &)::m);
    v9 = (char *)(v2 + 208);
    v10 = std::__detail::operator==<std::pair<std::string const,data::MonsterCategory>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::MonsterCategory>,true> *)(v2 + 176),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::MonsterCategory>,true> *)(v2 + 208));
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
        "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
        "enumStrToVal",
        261);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 400),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)(v2 + 240));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 400));
      LODWORD(result) = -1;
    }
    else
    {
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::MonsterCategory>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::MonsterCategory>,false,true> *const)(v2 + 176));
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
      "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
      "enumStrToVal",
      245);
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

// Line 270: range 00000000144EDDEA-00000000144EDE00
const char *__cdecl data::getDescription(data::MonsterCategory e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 275: range 00000000144EDE01-00000000144EDFB6
bool __cdecl data::isValidMonsterCategory(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::MonsterCategory,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::MonsterCategory,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:276 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidMonsterCategory;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getMonsterCategoryEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::MonsterCategory,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::MonsterCategory,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getMonsterCategoryEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::MonsterCategory,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::MonsterCategory,std::pair<std::string,std::string>>::find(v6, (const std::map<data::MonsterCategory,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::MonsterCategory,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::MonsterCategory,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 281: range 00000000144EDFB7-00000000144EE118
bool __cdecl data::isValidMonsterCategoryName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::MonsterCategory> *v5; // rcx
  const std::unordered_map<std::string,data::MonsterCategory> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidMonsterCategoryName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getMonsterCategoryNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::MonsterCategory>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::MonsterCategory>::end(v5);
  v6 = data::getMonsterCategoryNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::MonsterCategory>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::MonsterCategory>::find(
                                                                                          v6,
                                                                                          name);
  result = std::__detail::operator!=<std::pair<std::string const,data::MonsterCategory>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::MonsterCategory>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::MonsterCategory>,true> *)(v2 + 64));
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

// Line 286: range 00000000144EE119-00000000144EE733
const std::unordered_map<std::string,data::MonsterCategory> *__cdecl data::getMonsterCategoryNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::MonsterCategory> *i; // r14
  const std::unordered_map<std::string,data::MonsterCategory> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getMonsterCategoryNameMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getMonsterCategoryNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getMonsterCategoryNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v0);
    *(_DWORD *)(v1 + 96) = 0;
    std::pair<std::string const,data::MonsterCategory>::pair<char const(&)[4],data::MonsterCategory,true>(
      (std::pair<const std::string,data::MonsterCategory> *const)(v1 + 176),
      (const char (*)[4])off_1AD934C0,
      (data::MonsterCategory *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, off_1AD934C0);
    *(_DWORD *)(v1 + 112) = 1;
    std::pair<std::string const,data::MonsterCategory>::pair<char const(&)[7],data::MonsterCategory,true>(
      (std::pair<const std::string,data::MonsterCategory> *const)(v1 + 216),
      (const char (*)[7])"Common",
      (data::MonsterCategory *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, "Common");
    *(_DWORD *)(v1 + 128) = 2;
    std::pair<std::string const,data::MonsterCategory>::pair<char const(&)[6],data::MonsterCategory,true>(
      (std::pair<const std::string,data::MonsterCategory> *const)(v1 + 256),
      (const char (*)[6])"Elite",
      (data::MonsterCategory *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, "Elite");
    *(_DWORD *)(v1 + 144) = 3;
    std::pair<std::string const,data::MonsterCategory>::pair<char const(&)[5],data::MonsterCategory,true>(
      (std::pair<const std::string,data::MonsterCategory> *const)(v1 + 296),
      (const char (*)[5])"Boss",
      (data::MonsterCategory *)(v1 + 144));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, "Boss");
    *(_DWORD *)(v1 + 160) = 4;
    std::pair<std::string const,data::MonsterCategory>::pair<char const(&)[10],data::MonsterCategory,true>(
      (std::pair<const std::string,data::MonsterCategory> *const)(v1 + 336),
      (const char (*)[10])"EnumCount",
      (data::MonsterCategory *)(v1 + 160));
    std::allocator<std::pair<std::string const,data::MonsterCategory>>::allocator((std::allocator<std::pair<const std::string,data::MonsterCategory> > *const)(v1 + 80));
    std::unordered_map<std::string,data::MonsterCategory>::unordered_map(
      &data::getMonsterCategoryNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::MonsterCategory> >)__PAIR128__(5LL, v1 + 176),
      0LL,
      (const std::unordered_map<std::string,data::MonsterCategory>::hasher *)(v1 + 48),
      (const std::unordered_map<std::string,data::MonsterCategory>::key_equal *)(v1 + 64),
      (const std::unordered_map<std::string,data::MonsterCategory>::allocator_type *)(v1 + 80));
    __cxa_guard_release(&`guard variable for'data::getMonsterCategoryNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::MonsterCategory>::~unordered_map,
      &data::getMonsterCategoryNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::MonsterCategory>>::~allocator((std::allocator<std::pair<const std::string,data::MonsterCategory> > *const)(v1 + 80));
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::MonsterCategory> *)(v1 + 376);
          i != (std::pair<const std::string,data::MonsterCategory> *)(v1 + 176);
          std::pair<std::string const,data::MonsterCategory>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getMonsterCategoryNameMap[abi:cxx11](void)::m;
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

// Line 299: range 00000000144EE734-00000000144EEFF9
const std::map<data::MonsterCategory,std::pair<std::string,std::string >> *__cdecl data::getMonsterCategoryEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::MonsterCategory,std::pair<std::string,std::string > > *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getMonsterCategoryEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getMonsterCategoryEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getMonsterCategoryEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 64, v0);
    *(_DWORD *)(v1 + 64) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[4],true>(
      (std::pair<std::string,std::string > *const)(v1 + 144),
      (const char (*)[7])byte_1AD93340,
      (const char (*)[4])off_1AD934C0);
    std::pair<data::MonsterCategory const,std::pair<std::string,std::string>>::pair<data::MonsterCategory,true>(
      (std::pair<const data::MonsterCategory,std::pair<std::string,std::string > > *const)(v1 + 624),
      (data::MonsterCategory *)(v1 + 64),
      (const std::pair<std::string,std::string > *)(v1 + 144));
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v1 + 64);
    *(_DWORD *)(v1 + 80) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[7],true>(
      (std::pair<std::string,std::string > *const)(v1 + 240),
      (const char (*)[13])byte_1AD93380,
      (const char (*)[7])"Common");
    std::pair<data::MonsterCategory const,std::pair<std::string,std::string>>::pair<data::MonsterCategory,true>(
      (std::pair<const data::MonsterCategory,std::pair<std::string,std::string > > *const)(v1 + 696),
      (data::MonsterCategory *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 240));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[6],true>(
      (std::pair<std::string,std::string > *const)(v1 + 336),
      (const char (*)[13])byte_1AD933C0,
      (const char (*)[6])"Elite");
    std::pair<data::MonsterCategory const,std::pair<std::string,std::string>>::pair<data::MonsterCategory,true>(
      (std::pair<const data::MonsterCategory,std::pair<std::string,std::string > > *const)(v1 + 768),
      (data::MonsterCategory *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 336));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 3;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[5],true>(
      (std::pair<std::string,std::string > *const)(v1 + 432),
      (const char (*)[13])byte_1AD93400,
      (const char (*)[5])"Boss");
    std::pair<data::MonsterCategory const,std::pair<std::string,std::string>>::pair<data::MonsterCategory,true>(
      (std::pair<const data::MonsterCategory,std::pair<std::string,std::string > > *const)(v1 + 840),
      (data::MonsterCategory *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 432));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, v1 + 112);
    *(_DWORD *)(v1 + 128) = 4;
    std::pair<std::string,std::string>::pair<char const(&)[16],char const(&)[10],true>(
      (std::pair<std::string,std::string > *const)(v1 + 528),
      (const char (*)[16])byte_1AD93440,
      (const char (*)[10])"EnumCount");
    std::pair<data::MonsterCategory const,std::pair<std::string,std::string>>::pair<data::MonsterCategory,true>(
      (std::pair<const data::MonsterCategory,std::pair<std::string,std::string > > *const)(v1 + 912),
      (data::MonsterCategory *)(v1 + 128),
      (const std::pair<std::string,std::string > *)(v1 + 528));
    std::allocator<std::pair<data::MonsterCategory const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::MonsterCategory,std::pair<std::string,std::string > > > *const)(v1 + 48));
    std::map<data::MonsterCategory,std::pair<std::string,std::string>>::map(
      &data::getMonsterCategoryEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::MonsterCategory,std::pair<std::string,std::string > > >)__PAIR128__(5LL, v1 + 624),
      (const std::less<data::MonsterCategory> *)(v1 + 32),
      (const std::map<data::MonsterCategory,std::pair<std::string,std::string >>::allocator_type *)(v1 + 48));
    __cxa_guard_release(&`guard variable for'data::getMonsterCategoryEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::MonsterCategory,std::pair<std::string,std::string>>::~map,
      &data::getMonsterCategoryEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::MonsterCategory const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::MonsterCategory,std::pair<std::string,std::string > > > *const)(v1 + 48));
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::MonsterCategory,std::pair<std::string,std::string > > *)(v1 + 984);
          i != (std::pair<const data::MonsterCategory,std::pair<std::string,std::string > > *)(v1 + 624);
          std::pair<data::MonsterCategory const,std::pair<std::string,std::string>>::~pair(i) )
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
  return &data::getMonsterCategoryEnumMap[abi:cxx11](void)::m;
};

// Line 312: range 00000000144EEFFA-00000000144EF36D
const char *__fastcall data::enumValToStr(data::InvestigationMonsterMapMarkCreateConditionType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::InvestigationMonsterMapMarkCreateConditionType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::InvestigationMonsterMapMarkCreateConditionType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
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
  map = data::getInvestigationMonsterMapMarkCreateConditionTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::InvestigationMonsterMapMarkCreateConditionType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::InvestigationMonsterMapMarkCreateConditionType,std::pair<std::string,std::string>>::find(map, (const std::map<data::InvestigationMonsterMapMarkCreateConditionType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::InvestigationMonsterMapMarkCreateConditionType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::InvestigationMonsterMapMarkCreateConditionType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::InvestigationMonsterMapMarkCreateConditionType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::InvestigationMonsterMapMarkCreateConditionType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
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
    result = "INVALID_InvestigationMonsterMapMarkCreateConditionType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::InvestigationMonsterMapMarkCreateConditionType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::InvestigationMonsterMapMarkCreateConditionType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 324: range 00000000144EF36E-00000000144EF926
__int64 __fastcall data::enumNameToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  const char *v6; // rsi
  char *v7; // rsi
  bool Condition; // al
  common::milog::MiLogStream *v9; // rax
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::InvestigationMonsterMapMarkCreateConditionType>,false,true>::pointer v10; // rax
  data::InvestigationMonsterMapMarkCreateConditionType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateConditionType> *m; // [rsp+18h] [rbp-188h]
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
    m = data::getInvestigationMonsterMapMarkCreateConditionTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateConditionType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateConditionType>::find(m, (const std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateConditionType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateConditionType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateConditionType>::end(m);
    v7 = (char *)(v2 + 96);
    Condition = std::__detail::operator==<std::pair<std::string const,data::InvestigationMonsterMapMarkCreateConditionType>,true>(
                  (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::InvestigationMonsterMapMarkCreateConditionType>,true> *)(v2 + 64),
                  (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::InvestigationMonsterMapMarkCreateConditionType>,true> *)(v2 + 96));
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( Condition )
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
        "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
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
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::InvestigationMonsterMapMarkCreateConditionType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::InvestigationMonsterMapMarkCreateConditionType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
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

// Line 345: range 00000000144EF927-00000000144F024C
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::InvestigationMonsterMapMarkCreateConditionType> *i; // r14
  unsigned __int64 v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool Condition; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::InvestigationMonsterMapMarkCreateConditionType>,false,true>::pointer v12; // rax
  data::InvestigationMonsterMapMarkCreateConditionType second; // ecx
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
                        "it:357 144 8 9 <unknown> 176 8 5 s:344 208 32 9 <unknown> 272 32 9 <unknown> 336 32 9 <unknown> "
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::InvestigationMonsterMapMarkCreateConditionType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::InvestigationMonsterMapMarkCreateConditionType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, e);
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::InvestigationMonsterMapMarkCreateConditionType>::pair<char const(&)[25],data::InvestigationMonsterMapMarkCreateConditionType,true>(
        (std::pair<const std::string,data::InvestigationMonsterMapMarkCreateConditionType> *const)(v2 + 400),
        (const char (*)[25])byte_1AD93820,
        (data::InvestigationMonsterMapMarkCreateConditionType *)(v2 + 96));
      std::allocator<std::pair<std::string const,data::InvestigationMonsterMapMarkCreateConditionType>>::allocator((std::allocator<std::pair<const std::string,data::InvestigationMonsterMapMarkCreateConditionType> > *const)(v2 + 64));
      std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateConditionType>::unordered_map(
        &data::enumStrToVal(char const*,data::InvestigationMonsterMapMarkCreateConditionType &)::m,
        (std::initializer_list<std::pair<const std::string,data::InvestigationMonsterMapMarkCreateConditionType> >)__PAIR128__(1LL, v2 + 400),
        0LL,
        (const std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateConditionType>::hasher *)(v2 + 32),
        (const std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateConditionType>::key_equal *)(v2 + 48),
        (const std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateConditionType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::InvestigationMonsterMapMarkCreateConditionType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateConditionType>::~unordered_map,
        &data::enumStrToVal(char const*,data::InvestigationMonsterMapMarkCreateConditionType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::InvestigationMonsterMapMarkCreateConditionType>>::~allocator((std::allocator<std::pair<const std::string,data::InvestigationMonsterMapMarkCreateConditionType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::InvestigationMonsterMapMarkCreateConditionType> *)(v2 + 440);
            i != (std::pair<const std::string,data::InvestigationMonsterMapMarkCreateConditionType> *)(v2 + 400);
            std::pair<std::string const,data::InvestigationMonsterMapMarkCreateConditionType>::~pair(i) )
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
    *(std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateConditionType>::iterator *)(v2 + 112) = std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateConditionType>::find(&data::enumStrToVal(char const*,data::InvestigationMonsterMapMarkCreateConditionType &)::m, (const std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateConditionType>::key_type *)(v2 + 272));
    std::string::~string((void *)(v2 + 272));
    *(_DWORD *)(((v2 + 272) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 80);
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 144, v2 + 272);
    *(std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateConditionType>::iterator *)(v2 + 144) = std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateConditionType>::end(&data::enumStrToVal(char const*,data::InvestigationMonsterMapMarkCreateConditionType &)::m);
    v9 = (char *)(v2 + 144);
    Condition = std::__detail::operator==<std::pair<std::string const,data::InvestigationMonsterMapMarkCreateConditionType>,true>(
                  (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::InvestigationMonsterMapMarkCreateConditionType>,true> *)(v2 + 112),
                  (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::InvestigationMonsterMapMarkCreateConditionType>,true> *)(v2 + 144));
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
    if ( Condition )
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
        "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
        "enumStrToVal",
        360);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 336),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)(v2 + 176));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 336));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::InvestigationMonsterMapMarkCreateConditionType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::InvestigationMonsterMapMarkCreateConditionType>,false,true> *const)(v2 + 112));
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
      "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
      "enumStrToVal",
      348);
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

// Line 369: range 00000000144F024D-00000000144F0263
const char *__cdecl data::getDescription(data::InvestigationMonsterMapMarkCreateConditionType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 374: range 00000000144F0264-00000000144F0419
bool __cdecl data::isValidInvestigationMonsterMapMarkCreateConditionType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::InvestigationMonsterMapMarkCreateConditionType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::InvestigationMonsterMapMarkCreateConditionType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:375 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidInvestigationMonsterMapMarkCreateConditionType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getInvestigationMonsterMapMarkCreateConditionTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::InvestigationMonsterMapMarkCreateConditionType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::InvestigationMonsterMapMarkCreateConditionType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getInvestigationMonsterMapMarkCreateConditionTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::InvestigationMonsterMapMarkCreateConditionType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::InvestigationMonsterMapMarkCreateConditionType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::InvestigationMonsterMapMarkCreateConditionType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::InvestigationMonsterMapMarkCreateConditionType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::InvestigationMonsterMapMarkCreateConditionType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 380: range 00000000144F041A-00000000144F057B
bool __cdecl data::isValidInvestigationMonsterMapMarkCreateConditionTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateConditionType> *v5; // rcx
  const std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateConditionType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidInvestigationMonsterMapMarkCreateConditionTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getInvestigationMonsterMapMarkCreateConditionTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateConditionType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateConditionType>::end(v5);
  v6 = data::getInvestigationMonsterMapMarkCreateConditionTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateConditionType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateConditionType>::find(v6, name);
  result = std::__detail::operator!=<std::pair<std::string const,data::InvestigationMonsterMapMarkCreateConditionType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::InvestigationMonsterMapMarkCreateConditionType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::InvestigationMonsterMapMarkCreateConditionType>,true> *)(v2 + 64));
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

// Line 385: range 00000000144F057C-00000000144F0982
const std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateConditionType> *__cdecl data::getInvestigationMonsterMapMarkCreateConditionTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::InvestigationMonsterMapMarkCreateConditionType> *i; // r14
  const std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateConditionType> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getInvestigationMonsterMapMarkCreateConditionTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556927;
  v3[536862723] = 61956;
  v3[536862726] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getInvestigationMonsterMapMarkCreateConditionTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getInvestigationMonsterMapMarkCreateConditionTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string const,data::InvestigationMonsterMapMarkCreateConditionType>::pair<char const(&)[8],data::InvestigationMonsterMapMarkCreateConditionType,true>(
      (std::pair<const std::string,data::InvestigationMonsterMapMarkCreateConditionType> *const)(v1 + 112),
      (const char (*)[8])"Invalid",
      (data::InvestigationMonsterMapMarkCreateConditionType *)(v1 + 80));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, "Invalid");
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string const,data::InvestigationMonsterMapMarkCreateConditionType>::pair<char const(&)[14],data::InvestigationMonsterMapMarkCreateConditionType,true>(
      (std::pair<const std::string,data::InvestigationMonsterMapMarkCreateConditionType> *const)(v1 + 152),
      (const char (*)[14])"PlayerLevelGE",
      (data::InvestigationMonsterMapMarkCreateConditionType *)(v1 + 96));
    std::allocator<std::pair<std::string const,data::InvestigationMonsterMapMarkCreateConditionType>>::allocator((std::allocator<std::pair<const std::string,data::InvestigationMonsterMapMarkCreateConditionType> > *const)(v1 + 64));
    std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateConditionType>::unordered_map(
      &data::getInvestigationMonsterMapMarkCreateConditionTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::InvestigationMonsterMapMarkCreateConditionType> >)__PAIR128__(2LL, v1 + 112),
      0LL,
      (const std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateConditionType>::hasher *)(v1 + 32),
      (const std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateConditionType>::key_equal *)(v1 + 48),
      (const std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateConditionType>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getInvestigationMonsterMapMarkCreateConditionTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::InvestigationMonsterMapMarkCreateConditionType>::~unordered_map,
      &data::getInvestigationMonsterMapMarkCreateConditionTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::InvestigationMonsterMapMarkCreateConditionType>>::~allocator((std::allocator<std::pair<const std::string,data::InvestigationMonsterMapMarkCreateConditionType> > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::InvestigationMonsterMapMarkCreateConditionType> *)(v1 + 192);
          i != (std::pair<const std::string,data::InvestigationMonsterMapMarkCreateConditionType> *)(v1 + 112);
          std::pair<std::string const,data::InvestigationMonsterMapMarkCreateConditionType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getInvestigationMonsterMapMarkCreateConditionTypeNameMap[abi:cxx11](void)::m;
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

// Line 395: range 00000000144F0983-00000000144F0F40
const std::map<data::InvestigationMonsterMapMarkCreateConditionType,std::pair<std::string,std::string >> *__cdecl data::getInvestigationMonsterMapMarkCreateConditionTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::InvestigationMonsterMapMarkCreateConditionType,std::pair<std::string,std::string > > *i; // r14
  unsigned __int64 v5; // rax
  _DWORD *v6; // rax
  const std::map<data::InvestigationMonsterMapMarkCreateConditionType,std::pair<std::string,std::string >> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getInvestigationMonsterMapMarkCreateConditionTypeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getInvestigationMonsterMapMarkCreateConditionTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getInvestigationMonsterMapMarkCreateConditionTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[8],true>(
      (std::pair<std::string,std::string > *const)(v1 + 112),
      (const char (*)[1])byte_1ACFAB80,
      (const char (*)[8])"Invalid");
    std::pair<data::InvestigationMonsterMapMarkCreateConditionType const,std::pair<std::string,std::string>>::pair<data::InvestigationMonsterMapMarkCreateConditionType,true>(
      (std::pair<const data::InvestigationMonsterMapMarkCreateConditionType,std::pair<std::string,std::string > > *const)(v1 + 304),
      (data::InvestigationMonsterMapMarkCreateConditionType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[25],char const(&)[14],true>(
      (std::pair<std::string,std::string > *const)(v1 + 208),
      (const char (*)[25])byte_1AD93820,
      (const char (*)[14])"PlayerLevelGE");
    std::pair<data::InvestigationMonsterMapMarkCreateConditionType const,std::pair<std::string,std::string>>::pair<data::InvestigationMonsterMapMarkCreateConditionType,true>(
      (std::pair<const data::InvestigationMonsterMapMarkCreateConditionType,std::pair<std::string,std::string > > *const)(v1 + 376),
      (data::InvestigationMonsterMapMarkCreateConditionType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 208));
    std::allocator<std::pair<data::InvestigationMonsterMapMarkCreateConditionType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::InvestigationMonsterMapMarkCreateConditionType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    std::map<data::InvestigationMonsterMapMarkCreateConditionType,std::pair<std::string,std::string>>::map(
      &data::getInvestigationMonsterMapMarkCreateConditionTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::InvestigationMonsterMapMarkCreateConditionType,std::pair<std::string,std::string > > >)__PAIR128__(2LL, v1 + 304),
      (const std::less<data::InvestigationMonsterMapMarkCreateConditionType> *)(v1 + 48),
      (const std::map<data::InvestigationMonsterMapMarkCreateConditionType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getInvestigationMonsterMapMarkCreateConditionTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::InvestigationMonsterMapMarkCreateConditionType,std::pair<std::string,std::string>>::~map,
      &data::getInvestigationMonsterMapMarkCreateConditionTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::InvestigationMonsterMapMarkCreateConditionType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::InvestigationMonsterMapMarkCreateConditionType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::InvestigationMonsterMapMarkCreateConditionType,std::pair<std::string,std::string > > *)(v1 + 448);
          i != (std::pair<const data::InvestigationMonsterMapMarkCreateConditionType,std::pair<std::string,std::string > > *)(v1 + 304);
          std::pair<data::InvestigationMonsterMapMarkCreateConditionType const,std::pair<std::string,std::string>>::~pair(i) )
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
  result = &data::getInvestigationMonsterMapMarkCreateConditionTypeEnumMap[abi:cxx11](void)::m;
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

// Line 406: range 00000000144F0F42-00000000144F29D9
int32_t __cdecl data::InvestigationConfig::init(
        data::InvestigationConfig *const this,
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
  bool v22; // r14
  common::milog::MiLogStream *v23; // rax
  bool v24; // r14
  common::milog::MiLogStream *v25; // rax
  bool t; // [rsp+0h] [rbp-650h]
  bool ta; // [rsp+0h] [rbp-650h]
  bool tb; // [rsp+0h] [rbp-650h]
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
                        "own> 224 24 9 <unknown> 288 32 11 val_str:407 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <un"
                        "known> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unk"
                        "nown> 864 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <un"
                        "known> 1184 32 9 <unknown> 1248 32 9 <unknown> 1312 32 9 <unknown> 1376 32 9 <unknown> 1440 64 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::InvestigationConfig::init;
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
    &byte_1AD93B80,
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
      "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
      "init",
      410);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 416),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v5, (const char (*)[29])byte_1AD93BC0);
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
      &byte_1AD42E20,
      (const std::allocator<char> *)(v2 + 64));
    ta = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 480), &this->city_id) != 0;
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
        "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
        "init",
        415);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 544),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v7, (const char (*)[35])byte_1AD42E60);
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
        &byte_1AD93C00,
        (const std::allocator<char> *)(v2 + 80));
      tb = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 608), (std::string *)(v2 + 288)) != 0;
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
          "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
          "init",
          420);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 672),
               (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v8, (const char (*)[35])byte_1AD93C40);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
        *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
      }
      else
      {
        v9 = ((v2 + 224) >> 3) + 2147450880;
        *(_WORD *)v9 = 0;
        *(_BYTE *)(v9 + 2) = 0;
        v10 = (_DWORD *)(((v2 + 1440) >> 3) + 2147450880);
        *v10 = 0;
        v10[1] = 0;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 1440),
          ";",
          (const std::allocator<char> *)(v2 + 96));
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 112);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 1472),
          ",",
          (const std::allocator<char> *)(v2 + 112));
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
        std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 128));
        std::vector<std::string>::vector(
          (std::vector<std::string> *const)(v2 + 224),
          (std::initializer_list<std::string >)__PAIR128__(2LL, v2 + 1440),
          (const std::vector<std::string>::allocator_type *)(v2 + 128));
        v11 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                (const std::string *)(v2 + 288),
                (const std::vector<std::string> *)(v2 + 224),
                &this->next_investigation_id_list,
                1) != 0;
        std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 224));
        v12 = ((v2 + 224) >> 3) + 2147450880;
        *(_WORD *)v12 = -1800;
        *(_BYTE *)(v12 + 2) = -8;
        std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 128));
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
        for ( i = (char *)(v2 + 1504); i != (char *)(v2 + 1440); std::string::~string(i) )
          i -= 32;
        v14 = (_DWORD *)(((v2 + 1440) >> 3) + 2147450880);
        *v14 = -117901064;
        v14[1] = -117901064;
        std::allocator<char>::~allocator(v2 + 112);
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( v11 )
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
            "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
            "init",
            425);
          v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 736),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v15, (const char (*)[35])byte_1AD93C40);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 736));
          *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
          v6 = -1;
        }
        else
        {
          *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 144);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 800),
            &byte_1AD93CA0,
            (const std::allocator<char> *)(v2 + 144));
          v16 = common::tools::TxtFile::Row::assignToEnum<data::OpenStateType>(
                  row,
                  (const std::string *)(v2 + 800),
                  &this->unlock_open_state_type) != 0;
          std::string::~string((void *)(v2 + 800));
          *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 144);
          *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
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
              "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
              "init",
              430);
            v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 864),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v17, (const char (*)[36])byte_1AD93CE0);
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
              &byte_1AD4E820,
              (const std::allocator<char> *)(v2 + 160));
            v18 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                    row,
                    (const std::string *)(v2 + 928),
                    &this->unlock_level) != 0;
            std::string::~string((void *)(v2 + 928));
            *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 160);
            *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
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
                "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
                "init",
                435);
              v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 992),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v19, (const char (*)[33])byte_1AD4E860);
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
                &byte_1AD93D40,
                (const std::allocator<char> *)(v2 + 176));
              v20 = common::tools::TxtFile::Row::assignToNum<bool>(
                      row,
                      (const std::string *)(v2 + 1056),
                      &this->is_reward_empty) != 0;
              std::string::~string((void *)(v2 + 1056));
              *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 176);
              *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
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
                  "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
                  "init",
                  440);
                v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1120),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v21, (const char (*)[39])byte_1AD93D80);
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
                  &byte_1AD4BA20,
                  (const std::allocator<char> *)(v2 + 192));
                v22 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                        row,
                        (const std::string *)(v2 + 1184),
                        &this->reward_id) != 0;
                std::string::~string((void *)(v2 + 1184));
                *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 192);
                *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                if ( v22 )
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
                    "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
                    "init",
                    445);
                  v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 1248),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                    v23,
                    (const char (*)[29])byte_1AD4BA60);
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
                    &byte_1AD93DE0,
                    (const std::allocator<char> *)(v2 + 208));
                  v24 = common::tools::TxtFile::Row::assignToEnum<data::InvestigationType>(
                          row,
                          (const std::string *)(v2 + 1312),
                          &this->investigation_type) != 0;
                  std::string::~string((void *)(v2 + 1312));
                  *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 208);
                  *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                  if ( v24 )
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
                      "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
                      "init",
                      450);
                    v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 1376),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                      v25,
                      (const char (*)[33])byte_1AD93E20);
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

// Line 458: range 00000000144F29DA-00000000144F3DD1
int32_t __cdecl data::InvestigationTargetConfig::init(
        data::InvestigationTargetConfig *const this,
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
  std::string *v11; // r15
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  bool v15; // r15
  common::milog::MiLogStream *v16; // rax
  bool v17; // r15
  common::milog::MiLogStream *v18; // rax
  bool v19; // r15
  common::milog::MiLogStream *v20; // rax
  bool v21; // r15
  common::milog::MiLogStream *v22; // rax
  int32_t v23; // ebx
  uint32_t array_count; // [rsp+18h] [rbp-5D8h]
  uint32_t i; // [rsp+1Ch] [rbp-5D4h]
  char v27[1488]; // [rsp+20h] [rbp-5D0h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1440LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "24 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <un"
                        "known> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unk"
                        "nown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unkn"
                        "own> 992 32 9 <unknown> 1056 32 9 <unknown> 1120 256 12 col_name:459";
  *(_QWORD *)(v2 + 16) = data::InvestigationTargetConfig::init;
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
  v4[536862763] = -202116109;
  v4[536862764] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 160),
    "ID",
    (const std::allocator<char> *)(v2 + 32));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 160), &this->id) != 0;
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
      "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
      "init",
      463);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 224),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v6, (const char (*)[23])byte_1AD3A120);
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
      asc_1AD8C0C0,
      (const std::allocator<char> *)(v2 + 48));
    v8 = common::tools::TxtFile::Row::assignToEnum<data::WatcherTriggerType>(
           row,
           (const std::string *)(v2 + 288),
           &this->trigger_config.trigger_type) != 0;
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
        "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
        "init",
        468);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 352),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v9, (const char (*)[41])byte_1AD8C100);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
      v7 = -1;
    }
    else
    {
      std::vector<std::string>::resize(&this->trigger_config.param_list, 5uLL);
      array_count = 0;
      for ( i = 0; i <= 4; ++i )
      {
        snprintf((char *)(v2 + 1120), 0x100uLL, asc_1AD8C160, i + 1);
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 64);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 416),
          (const char *)(v2 + 1120),
          (const std::allocator<char> *)(v2 + 64));
        v10 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 416));
        std::string::~string((void *)(v2 + 416));
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 64);
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
        if ( !v10 )
        {
          v11 = std::vector<std::string>::operator[](&this->trigger_config.param_list, i);
          *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 80);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 480),
            (const char *)(v2 + 1120),
            (const std::allocator<char> *)(v2 + 80));
          LOBYTE(v11) = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 480), v11) != 0;
          std::string::~string((void *)(v2 + 480));
          *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 80);
          *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
          if ( (_BYTE)v11 )
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
              "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
              "init",
              480);
            v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 544),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v12,
                    (const char (*)[14])byte_1AD38B80);
            v14 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                    v13,
                    (const char (*)[256])(v2 + 1120));
            common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])byte_1AD38BC0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
            v7 = -1;
            goto LABEL_38;
          }
          array_count = i + 1;
        }
      }
      std::vector<std::string>::resize(&this->trigger_config.param_list, array_count);
      *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 96);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 608),
        &byte_1AD8C1A0,
        (const std::allocator<char> *)(v2 + 96));
      v15 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
              row,
              (const std::string *)(v2 + 608),
              &this->progress) != 0;
      std::string::~string((void *)(v2 + 608));
      *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 96);
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      if ( v15 )
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
          "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
          "init",
          489);
        v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 672),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v16, (const char (*)[27])byte_1AD8C1E0);
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
          &byte_1AD8C220,
          (const std::allocator<char> *)(v2 + 112));
        v17 = common::tools::TxtFile::Row::assignToNum<bool>(row, (const std::string *)(v2 + 736), &this->is_disuse) != 0;
        std::string::~string((void *)(v2 + 736));
        *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 112);
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
        if ( v17 )
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
            "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
            "init",
            494);
          v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 800),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v18, (const char (*)[30])byte_1AD8C260);
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
            &byte_1AD94060,
            (const std::allocator<char> *)(v2 + 128));
          v19 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                  row,
                  (const std::string *)(v2 + 864),
                  &this->investigation_id) != 0;
          std::string::~string((void *)(v2 + 864));
          *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 128);
          *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
          if ( v19 )
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
              "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
              "init",
              499);
            v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 928),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v20, (const char (*)[35])byte_1AD940A0);
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
              &byte_1AD4BA20,
              (const std::allocator<char> *)(v2 + 144));
            v21 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                    row,
                    (const std::string *)(v2 + 992),
                    &this->reward_id) != 0;
            std::string::~string((void *)(v2 + 992));
            *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 144);
            *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
            if ( v21 )
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
                "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
                "init",
                504);
              v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1056),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v22, (const char (*)[29])byte_1AD4BA60);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1056));
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
LABEL_38:
  v23 = v7;
  if ( v27 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8088) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80AC) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1440LL, v27);
  }
  return v23;
};

// Line 512: range 00000000144F3DD2-00000000144F435A
int32_t __cdecl data::InvestigationMonsterMapMarkCreateCondition::init(
        data::InvestigationMonsterMapMarkCreateCondition *const this,
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
  *(_QWORD *)(v2 + 16) = data::InvestigationMonsterMapMarkCreateCondition::init;
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
    &byte_1AD94100,
    (const std::allocator<char> *)(v2 + 32));
  v5 = common::tools::TxtFile::Row::assignToEnum<data::InvestigationMonsterMapMarkCreateConditionType>(
         row,
         (const std::string *)(v2 + 64),
         &this->condition_type) != 0;
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
      "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
      "init",
      515);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v6, (const char (*)[33])byte_1AD94140);
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
      &byte_1AD941A0,
      (const std::allocator<char> *)(v2 + 48));
    v8 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
           row,
           (const std::string *)(v2 + 192),
           &this->condition_param) != 0;
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
        "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
        "init",
        520);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 256),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v9, (const char (*)[33])byte_1AD941E0);
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

// Line 528: range 00000000144F435C-00000000144F76CA
int32_t __cdecl data::InvestigationMonsterConfig::init(
        data::InvestigationMonsterConfig *const this,
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
  unsigned __int64 v18; // rax
  _DWORD *v19; // rax
  bool v20; // r15
  unsigned __int64 v21; // rax
  char *j; // r14
  _DWORD *v23; // rax
  common::milog::MiLogStream *v24; // rax
  bool v25; // r14
  common::milog::MiLogStream *v26; // rax
  bool v27; // r14
  common::milog::MiLogStream *v28; // rax
  bool v29; // r14
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
  bool v42; // r14
  common::milog::MiLogStream *v43; // rax
  bool v44; // r14
  common::milog::MiLogStream *v45; // rax
  bool v46; // r14
  common::milog::MiLogStream *v47; // rax
  bool v48; // r14
  common::milog::MiLogStream *v49; // rax
  bool v50; // r14
  common::milog::MiLogStream *v51; // rax
  bool t; // [rsp+0h] [rbp-BF0h]
  bool ta; // [rsp+0h] [rbp-BF0h]
  bool tb; // [rsp+0h] [rbp-BF0h]
  std::initializer_list<std::string > __l; // [rsp+10h] [rbp-BE0h]
  std::initializer_list<std::string > v57; // [rsp+20h] [rbp-BD0h]
  char v58[2992]; // [rsp+40h] [rbp-BB0h] BYREF

  v2 = (unsigned __int64)v58;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(2944LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "61 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 <unkn"
                        "own> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 288 1 9 <unknown> 3"
                        "04 1 9 <unknown> 320 1 9 <unknown> 336 1 9 <unknown> 352 1 9 <unknown> 368 1 9 <unknown> 384 1 9"
                        " <unknown> 400 1 9 <unknown> 416 24 9 <unknown> 480 24 9 <unknown> 544 24 9 <unknown> 608 32 11 "
                        "val_str:529 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9"
                        " <unknown> 992 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <unknown> 1184 32 9 <unknown> 1248 3"
                        "2 9 <unknown> 1312 32 9 <unknown> 1376 32 9 <unknown> 1440 32 9 <unknown> 1504 32 9 <unknown> 15"
                        "68 32 9 <unknown> 1632 32 9 <unknown> 1696 32 9 <unknown> 1760 32 9 <unknown> 1824 32 9 <unknown"
                        "> 1888 32 9 <unknown> 1952 32 9 <unknown> 2016 32 9 <unknown> 2080 32 9 <unknown> 2144 32 9 <unk"
                        "nown> 2208 32 9 <unknown> 2272 32 9 <unknown> 2336 32 9 <unknown> 2400 32 9 <unknown> 2464 32 9 "
                        "<unknown> 2528 32 9 <unknown> 2592 32 9 <unknown> 2656 64 9 <unknown> 2752 64 9 <unknown> 2848 64 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::InvestigationMonsterConfig::init;
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
  v4[536862733] = -234881024;
  v4[536862734] = -218959118;
  v4[536862735] = -234881024;
  v4[536862736] = -218959118;
  v4[536862737] = -234881024;
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
  v4[536862796] = -218959118;
  v4[536862798] = -218959118;
  v4[536862800] = -218959118;
  v4[536862802] = -218959118;
  v4[536862805] = -218959118;
  v4[536862808] = -218959118;
  v4[536862811] = -202116109;
  std::string::basic_string(v2 + 608);
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 672),
    "ID",
    (const std::allocator<char> *)(v2 + 48));
  t = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 672), &this->id) != 0;
  std::string::~string((void *)(v2 + 672));
  *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( t )
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
      "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
      "init",
      532);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 736),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v5, (const char (*)[23])byte_1AD3A120);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 736));
    *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 800),
      &byte_1AD42E20,
      (const std::allocator<char> *)(v2 + 64));
    ta = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 800), &this->city_id) != 0;
    std::string::~string((void *)(v2 + 800));
    *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( ta )
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
        "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
        "init",
        537);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 864),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v7, (const char (*)[35])byte_1AD42E60);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 864));
      *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 928),
        &byte_1AD946E0,
        (const std::allocator<char> *)(v2 + 80));
      tb = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 928), (std::string *)(v2 + 608)) != 0;
      std::string::~string((void *)(v2 + 928));
      *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( tb )
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
          "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
          "init",
          542);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 992),
               (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v8, (const char (*)[35])byte_1AD94720);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 992));
        *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
      }
      else
      {
        v9 = ((v2 + 416) >> 3) + 2147450880;
        *(_WORD *)v9 = 0;
        *(_BYTE *)(v9 + 2) = 0;
        v10 = (_DWORD *)(((v2 + 2656) >> 3) + 2147450880);
        *v10 = 0;
        v10[1] = 0;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 2656),
          ";",
          (const std::allocator<char> *)(v2 + 96));
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 112);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 2688),
          ",",
          (const std::allocator<char> *)(v2 + 112));
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
        std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 128));
        std::vector<std::string>::vector(
          (std::vector<std::string> *const)(v2 + 416),
          (std::initializer_list<std::string >)__PAIR128__(2LL, v2 + 2656),
          (const std::vector<std::string>::allocator_type *)(v2 + 128));
        v11 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                (const std::string *)(v2 + 608),
                (const std::vector<std::string> *)(v2 + 416),
                &this->monster_id_list,
                1) != 0;
        std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 416));
        v12 = ((v2 + 416) >> 3) + 2147450880;
        *(_WORD *)v12 = -1800;
        *(_BYTE *)(v12 + 2) = -8;
        std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 128));
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
        for ( i = (char *)(v2 + 2720); i != (char *)(v2 + 2656); std::string::~string(i) )
          i -= 32;
        v14 = (_DWORD *)(((v2 + 2656) >> 3) + 2147450880);
        *v14 = -117901064;
        v14[1] = -117901064;
        std::allocator<char>::~allocator(v2 + 112);
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( v11 )
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
            "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
            "init",
            547);
          v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 1056),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v15, (const char (*)[35])byte_1AD94720);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1056));
          *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -117901064;
          v6 = -1;
        }
        else
        {
          *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 144);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1120),
            &byte_1AD94780,
            (const std::allocator<char> *)(v2 + 144));
          v16 = common::tools::TxtFile::Row::assignToStr(
                  row,
                  (const std::string *)(v2 + 1120),
                  (std::string *)(v2 + 608)) != 0;
          std::string::~string((void *)(v2 + 1120));
          *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 144);
          *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
          if ( v16 )
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
              "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
              "init",
              552);
            v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 1184),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v17, (const char (*)[40])byte_1AD947C0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1184));
            *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = -117901064;
            v6 = -1;
          }
          else
          {
            v18 = ((v2 + 480) >> 3) + 2147450880;
            *(_WORD *)v18 = 0;
            *(_BYTE *)(v18 + 2) = 0;
            v19 = (_DWORD *)(((v2 + 2752) >> 3) + 2147450880);
            *v19 = 0;
            v19[1] = 0;
            *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 160);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 2752),
              ";",
              (const std::allocator<char> *)(v2 + 160));
            *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 176);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 2784),
              ",",
              (const std::allocator<char> *)(v2 + 176));
            __l._M_array = (std::initializer_list<std::string >::iterator)(v2 + 2752);
            __l._M_len = 2LL;
            *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
            std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 192));
            std::vector<std::string>::vector(
              (std::vector<std::string> *const)(v2 + 480),
              __l,
              (const std::vector<std::string>::allocator_type *)(v2 + 192));
            v20 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                    (const std::string *)(v2 + 608),
                    (const std::vector<std::string> *)(v2 + 480),
                    &this->group_id_list,
                    1) != 0;
            std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 480));
            v21 = ((v2 + 480) >> 3) + 2147450880;
            *(_WORD *)v21 = -1800;
            *(_BYTE *)(v21 + 2) = -8;
            std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 192));
            *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
            for ( j = (char *)(v2 + 2816); j != (char *)(v2 + 2752); std::string::~string(j) )
              j -= 32;
            v23 = (_DWORD *)(((v2 + 2752) >> 3) + 2147450880);
            *v23 = -117901064;
            v23[1] = -117901064;
            std::allocator<char>::~allocator(v2 + 176);
            *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
            std::allocator<char>::~allocator(v2 + 160);
            *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
            if ( v20 )
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
                "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
                "init",
                557);
              v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1248),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v24, (const char (*)[40])byte_1AD947C0);
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
                &byte_1AD94820,
                (const std::allocator<char> *)(v2 + 208));
              v25 = common::tools::TxtFile::Row::assignToStr(
                      row,
                      (const std::string *)(v2 + 1312),
                      &this->exist_group_variable) != 0;
              std::string::~string((void *)(v2 + 1312));
              *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 208);
              *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
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
                  "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
                  "init",
                  562);
                v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1376),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v26, (const char (*)[44])byte_1AD94860);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1376));
                *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = -117901064;
                v6 = -1;
              }
              else
              {
                *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 224);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1440),
                  &byte_1AD948C0,
                  (const std::allocator<char> *)(v2 + 224));
                v27 = common::tools::TxtFile::Row::assignToNum<bool>(
                        row,
                        (const std::string *)(v2 + 1440),
                        &this->is_use_group_position) != 0;
                std::string::~string((void *)(v2 + 1440));
                *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 224);
                *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
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
                    "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
                    "init",
                    567);
                  v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 1504),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                    v28,
                    (const char (*)[44])byte_1AD94900);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1504));
                  *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = -117901064;
                  v6 = -1;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 240);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1568),
                    &byte_1AD94960,
                    (const std::allocator<char> *)(v2 + 240));
                  v29 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                          row,
                          (const std::string *)(v2 + 1568),
                          &this->unlock_parent_quest_id) != 0;
                  std::string::~string((void *)(v2 + 1568));
                  *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 240);
                  *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                  if ( v29 )
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
                      "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
                      "init",
                      572);
                    v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 1632),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                      v30,
                      (const char (*)[36])byte_1AD949A0);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1632));
                    *(_DWORD *)(((v2 + 1632) >> 3) + 0x7FFF8000) = -117901064;
                    v6 = -1;
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 256);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 1696),
                      &byte_1AD94A00,
                      (const std::allocator<char> *)(v2 + 256));
                    v31 = common::tools::TxtFile::Row::assignToStr(
                            row,
                            (const std::string *)(v2 + 1696),
                            (std::string *)(v2 + 608)) != 0;
                    std::string::~string((void *)(v2 + 1696));
                    *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 256);
                    *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                    if ( v31 )
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
                        "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
                        "init",
                        577);
                      v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 1760),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                        v32,
                        (const char (*)[45])byte_1AD94A40);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1760));
                      *(_DWORD *)(((v2 + 1760) >> 3) + 0x7FFF8000) = -117901064;
                      v6 = -1;
                    }
                    else
                    {
                      v33 = ((v2 + 544) >> 3) + 2147450880;
                      *(_WORD *)v33 = 0;
                      *(_BYTE *)(v33 + 2) = 0;
                      v34 = (_DWORD *)(((v2 + 2848) >> 3) + 2147450880);
                      *v34 = 0;
                      v34[1] = 0;
                      *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 272);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 2848),
                        ";",
                        (const std::allocator<char> *)(v2 + 272));
                      *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 288);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 2880),
                        ",",
                        (const std::allocator<char> *)(v2 + 288));
                      v57._M_array = (std::initializer_list<std::string >::iterator)(v2 + 2848);
                      v57._M_len = 2LL;
                      *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 304));
                      std::vector<std::string>::vector(
                        (std::vector<std::string> *const)(v2 + 544),
                        v57,
                        (const std::vector<std::string>::allocator_type *)(v2 + 304));
                      v35 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                              (const std::string *)(v2 + 608),
                              (const std::vector<std::string> *)(v2 + 544),
                              &this->unlock_wq_parent_quest_id_list,
                              1) != 0;
                      std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 544));
                      v36 = ((v2 + 544) >> 3) + 2147450880;
                      *(_WORD *)v36 = -1800;
                      *(_BYTE *)(v36 + 2) = -8;
                      std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 304));
                      *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
                      for ( k = (char *)(v2 + 2912); k != (char *)(v2 + 2848); std::string::~string(k) )
                        k -= 32;
                      v38 = (_DWORD *)(((v2 + 2848) >> 3) + 2147450880);
                      *v38 = -117901064;
                      v38[1] = -117901064;
                      std::allocator<char>::~allocator(v2 + 288);
                      *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
                      std::allocator<char>::~allocator(v2 + 272);
                      *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                      if ( v35 )
                      {
                        *(_DWORD *)(((v2 + 1824) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v2 + 1824) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v2 + 1855) >> 3) + 0x7FFF8000) != 0
                          && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 1855) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v2 + 1824, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v2 + 1824),
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
                          "init",
                          582);
                        v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                (common::milog::MiLogStream *const)(v2 + 1824),
                                (const char (*)[16])"[CONFIG_ERROR] ");
                        common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                          v39,
                          (const char (*)[45])byte_1AD94A40);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1824));
                        *(_DWORD *)(((v2 + 1824) >> 3) + 0x7FFF8000) = -117901064;
                        v6 = -1;
                      }
                      else
                      {
                        *(_DWORD *)(((v2 + 1888) >> 3) + 0x7FFF8000) = 0;
                        *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 320);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 1888),
                          &byte_1AD94AA0,
                          (const std::allocator<char> *)(v2 + 320));
                        v40 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                row,
                                (const std::string *)(v2 + 1888),
                                &this->active_unlock_quest_activity_id) != 0;
                        std::string::~string((void *)(v2 + 1888));
                        *(_DWORD *)(((v2 + 1888) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 320);
                        *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
                        if ( v40 )
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
                            "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
                            "init",
                            587);
                          v41 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                  (common::milog::MiLogStream *const)(v2 + 1952),
                                  (const char (*)[16])"[CONFIG_ERROR] ");
                          common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                            v41,
                            (const char (*)[35])byte_1AD94AE0);
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1952));
                          *(_DWORD *)(((v2 + 1952) >> 3) + 0x7FFF8000) = -117901064;
                          v6 = -1;
                        }
                        else
                        {
                          *(_DWORD *)(((v2 + 2016) >> 3) + 0x7FFF8000) = 0;
                          *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 1;
                          std::allocator<char>::allocator(v2 + 336);
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)(v2 + 2016),
                            &byte_1AD94B40,
                            (const std::allocator<char> *)(v2 + 336));
                          v42 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                  row,
                                  (const std::string *)(v2 + 2016),
                                  &this->reward_preview_id) != 0;
                          std::string::~string((void *)(v2 + 2016));
                          *(_DWORD *)(((v2 + 2016) >> 3) + 0x7FFF8000) = -117901064;
                          std::allocator<char>::~allocator(v2 + 336);
                          *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
                          if ( v42 )
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
                              "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
                              "init",
                              592);
                            v43 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                    (common::milog::MiLogStream *const)(v2 + 2080),
                                    (const char (*)[16])"[CONFIG_ERROR] ");
                            common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                              v43,
                              (const char (*)[35])byte_1AD94B80);
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2080));
                            *(_DWORD *)(((v2 + 2080) >> 3) + 0x7FFF8000) = -117901064;
                            v6 = -1;
                          }
                          else
                          {
                            *(_DWORD *)(((v2 + 2144) >> 3) + 0x7FFF8000) = 0;
                            *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 1;
                            std::allocator<char>::allocator(v2 + 352);
                            std::string::basic_string<std::allocator<char>>(
                              (std::string *const)(v2 + 2144),
                              &byte_1AD94BE0,
                              (const std::allocator<char> *)(v2 + 352));
                            v44 = common::tools::TxtFile::Row::assignToEnum<data::InvestigationMonsterMapMarkCreateType>(
                                    row,
                                    (const std::string *)(v2 + 2144),
                                    &this->map_mark_create_type) != 0;
                            std::string::~string((void *)(v2 + 2144));
                            *(_DWORD *)(((v2 + 2144) >> 3) + 0x7FFF8000) = -117901064;
                            std::allocator<char>::~allocator(v2 + 352);
                            *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
                            if ( v44 )
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
                                "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
                                "init",
                                597);
                              v45 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                      (common::milog::MiLogStream *const)(v2 + 2208),
                                      (const char (*)[16])"[CONFIG_ERROR] ");
                              common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                                v45,
                                (const char (*)[45])byte_1AD94C20);
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2208));
                              *(_DWORD *)(((v2 + 2208) >> 3) + 0x7FFF8000) = -117901064;
                              v6 = -1;
                            }
                            else
                            {
                              *(_DWORD *)(((v2 + 2272) >> 3) + 0x7FFF8000) = 0;
                              *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = 1;
                              std::allocator<char>::allocator(v2 + 368);
                              std::string::basic_string<std::allocator<char>>(
                                (std::string *const)(v2 + 2272),
                                asc_1AD94C80,
                                (const std::allocator<char> *)(v2 + 368));
                              v46 = common::tools::TxtFile::Row::assignToEnum<data::InvestigationMonsterMapMarkCreateConditionType>(
                                      row,
                                      (const std::string *)(v2 + 2272),
                                      &this->map_mark_create_condition.condition_type) != 0;
                              std::string::~string((void *)(v2 + 2272));
                              *(_DWORD *)(((v2 + 2272) >> 3) + 0x7FFF8000) = -117901064;
                              std::allocator<char>::~allocator(v2 + 368);
                              *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
                              if ( v46 )
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
                                  "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
                                  "init",
                                  602);
                                v47 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                        (common::milog::MiLogStream *const)(v2 + 2336),
                                        (const char (*)[16])"[CONFIG_ERROR] ");
                                common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                                  v47,
                                  (const char (*)[59])byte_1AD94CE0);
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2336));
                                *(_DWORD *)(((v2 + 2336) >> 3) + 0x7FFF8000) = -117901064;
                                v6 = -1;
                              }
                              else
                              {
                                *(_DWORD *)(((v2 + 2400) >> 3) + 0x7FFF8000) = 0;
                                *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 1;
                                std::allocator<char>::allocator(v2 + 384);
                                std::string::basic_string<std::allocator<char>>(
                                  (std::string *const)(v2 + 2400),
                                  asc_1AD94D40,
                                  (const std::allocator<char> *)(v2 + 384));
                                v48 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                        row,
                                        (const std::string *)(v2 + 2400),
                                        &this->map_mark_create_condition.condition_param) != 0;
                                std::string::~string((void *)(v2 + 2400));
                                *(_DWORD *)(((v2 + 2400) >> 3) + 0x7FFF8000) = -117901064;
                                std::allocator<char>::~allocator(v2 + 384);
                                *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
                                if ( v48 )
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
                                    "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
                                    "init",
                                    607);
                                  v49 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                          (common::milog::MiLogStream *const)(v2 + 2464),
                                          (const char (*)[16])"[CONFIG_ERROR] ");
                                  common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                                    v49,
                                    (const char (*)[59])byte_1AD94DA0);
                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2464));
                                  *(_DWORD *)(((v2 + 2464) >> 3) + 0x7FFF8000) = -117901064;
                                  v6 = -1;
                                }
                                else
                                {
                                  *(_DWORD *)(((v2 + 2528) >> 3) + 0x7FFF8000) = 0;
                                  *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = 1;
                                  std::allocator<char>::allocator(v2 + 400);
                                  std::string::basic_string<std::allocator<char>>(
                                    (std::string *const)(v2 + 2528),
                                    &byte_1AD94E00,
                                    (const std::allocator<char> *)(v2 + 400));
                                  v50 = common::tools::TxtFile::Row::assignToEnum<data::MonsterCategory>(
                                          row,
                                          (const std::string *)(v2 + 2528),
                                          &this->monster_category) != 0;
                                  std::string::~string((void *)(v2 + 2528));
                                  *(_DWORD *)(((v2 + 2528) >> 3) + 0x7FFF8000) = -117901064;
                                  std::allocator<char>::~allocator(v2 + 400);
                                  *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
                                  if ( v50 )
                                  {
                                    *(_DWORD *)(((v2 + 2592) >> 3) + 0x7FFF8000) = 0;
                                    if ( *(char *)(((v2 + 2592) >> 3) + 0x7FFF8000) < 0
                                      || *(_BYTE *)(((v2 + 2623) >> 3) + 0x7FFF8000) != 0
                                      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 2623) >> 3) + 0x7FFF8000) )
                                    {
                                      __asan_report_store_n(v2 + 2592, 32LL);
                                    }
                                    common::milog::MiLogStream::create(
                                      (common::milog::MiLogStream *)(v2 + 2592),
                                      &common::milog::MiLogDefault::default_log_obj_,
                                      4u,
                                      "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
                                      "init",
                                      612);
                                    v51 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                            (common::milog::MiLogStream *const)(v2 + 2592),
                                            (const char (*)[16])"[CONFIG_ERROR] ");
                                    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                      v51,
                                      (const char (*)[33])byte_1AD94E40);
                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2592));
                                    *(_DWORD *)(((v2 + 2592) >> 3) + 0x7FFF8000) = -117901064;
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
  std::string::~string((void *)(v2 + 608));
  if ( v58 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 76) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8168) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862742) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450960 - (((_DWORD)v4 + 2147450968) & 0xFFFFFFF8) + 288) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 2944LL, v58);
  }
  return v6;
};

// Line 620: range 00000000144F76CC-00000000144F851B
int32_t __cdecl data::InvestigationDungeonConfig::init(
        data::InvestigationDungeonConfig *const this,
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
                        "<unknown> 128 24 9 <unknown> 192 32 11 val_str:621 256 32 9 <unknown> 320 32 9 <unknown> 384 32 "
                        "9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 64 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::InvestigationDungeonConfig::init;
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
    &byte_1AD94FE0,
    (const std::allocator<char> *)(v2 + 32));
  t = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 256), &this->entrance_id) != 0;
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
      "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
      "init",
      624);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 320),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v5, (const char (*)[29])byte_1AD95020);
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
      &byte_1AD42E20,
      (const std::allocator<char> *)(v2 + 48));
    ta = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 384), &this->city_id) != 0;
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
        "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
        "init",
        629);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 448),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v7, (const char (*)[35])byte_1AD42E60);
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
        &byte_1AD95060,
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
          "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
          "init",
          634);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 576),
               (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(v8, (const char (*)[38])byte_1AD950A0);
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
                &this->dungeon_id_list,
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
            "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
            "init",
            639);
          v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 640),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(v15, (const char (*)[38])byte_1AD950A0);
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

// Line 648: range 00000000144F851C-00000000144F9531
int32_t __cdecl data::InvestigationExcelConfigMgrBase::loadInvestigationConfig(
        data::InvestigationExcelConfigMgrBase *const this,
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
  data::InvestigationConfig *v24; // rax
  unsigned int *v25; // rcx
  data::InvestigationConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::InvestigationConfig>,false,false>,bool> v27; // rax
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
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 5 r:663 64 4 9 <unknown> 80 32 9 paths:649 144 32 9 <unknown> 208 32 9 "
                        "<unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 64 8 d"
                        "ata:666 624 376 24 debug_message_stream:674 1072 32880 12 txt_file:657";
  *(_QWORD *)(v3 + 16) = data::InvestigationExcelConfigMgrBase::loadInvestigationConfig;
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
    "/txt/InvestigationData.txt",
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
        "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
        "loadInvestigationConfig",
        660);
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
        v12 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v3 + 1072));
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
        if ( v12 <= *(_DWORD *)(v3 + 48) )
          break;
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v3 + 1072), *(_DWORD *)(v3 + 48));
        v13 = (_DWORD *)(((v3 + 528) >> 3) + 2147450880);
        *v13 = 0;
        v13[1] = 0;
        data::InvestigationConfig::InvestigationConfig((data::InvestigationConfig *const)(v3 + 528));
        if ( row_ptr )
        {
          if ( data::InvestigationConfig::init((data::InvestigationConfig *const)(v3 + 528), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 624, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 624);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 624, &unk_1AD3B5A0);
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
              "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
              "loadInvestigationConfig",
              676);
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
            v24 = std::move<data::InvestigationConfig &>((data::InvestigationConfig *)(v3 + 528));
            v27 = std::unordered_map<unsigned int,data::InvestigationConfig>::emplace<unsigned int &,data::InvestigationConfig>(
                    &this->investigation_config_map,
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
                "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
                "loadInvestigationConfig",
                681);
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
            && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 272, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 272),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
            "loadInvestigationConfig",
            669);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 272),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
          *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::InvestigationConfig::~InvestigationConfig((data::InvestigationConfig *const)(v3 + 528));
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

// Line 690: range 00000000144F9532-00000000144FA7D8
int32_t __cdecl data::InvestigationExcelConfigMgrBase::loadInvestigationTargetConfig(
        data::InvestigationExcelConfigMgrBase *const this,
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
  data::InvestigationTargetConfig *v23; // rax
  unsigned int *v24; // rcx
  data::InvestigationTargetConfig *v25; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::InvestigationTargetConfig>,false,false>,bool> v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  unsigned __int64 v29; // rax
  int v30; // edx
  char *i; // r14
  int32_t v33; // [rsp+1Ch] [rbp-86F4h]
  std::string *__for_begin; // [rsp+38h] [rbp-86D8h]
  const common::tools::TxtFile::Row *row_ptr; // [rsp+58h] [rbp-86B8h]
  char v37[34480]; // [rsp+60h] [rbp-86B0h] BYREF

  v2 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_10(34432LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "16 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 4 5 r:708 128 4 9 <un"
                        "known> 144 32 9 <unknown> 208 32 9 <unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unk"
                        "nown> 464 32 9 <unknown> 528 120 8 data:711 688 128 9 paths:691 848 376 24 debug_message_stream:"
                        "719 1296 32880 12 txt_file:702";
  *(_QWORD *)(v2 + 16) = data::InvestigationExcelConfigMgrBase::loadInvestigationTargetConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -234556927;
  v4[536862724] = 61956;
  v4[536862725] = -219021312;
  v4[536862726] = 62194;
  v4[536862727] = -219021312;
  v4[536862728] = 62194;
  v4[536862729] = -219021312;
  v4[536862730] = 62194;
  v4[536862731] = -219021312;
  v4[536862732] = 62194;
  v4[536862733] = -219021312;
  v4[536862734] = 62194;
  v4[536862735] = -219021312;
  v4[536862736] = 62194;
  v4[536862740] = -218959360;
  v4[536862741] = 62194;
  v4[536862745] = -219021312;
  v4[536862746] = 62194;
  v4[536862758] = -218959360;
  v4[536862759] = -218959118;
  v4[536862760] = 62194;
  v4[536863788] = -202116109;
  v4[536863789] = -202116109;
  v4[536863790] = -202116109;
  v4[536863791] = -202116109;
  v4[536863792] = -202116109;
  v4[536863793] = -202116109;
  v4[536863794] = -202116109;
  v4[536863795] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 688),
    "/txt/InvestigationTargetData.txt",
    (const std::allocator<char> *)(v2 + 48));
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 720),
    "/txt/InvestigationHomeworldData.txt",
    (const std::allocator<char> *)(v2 + 64));
  std::allocator<char>::~allocator(v2 + 64);
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 80);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 752),
    "/txt/InvestigationCharAscendData.txt",
    (const std::allocator<char> *)(v2 + 80));
  std::allocator<char>::~allocator(v2 + 80);
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 96);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 784),
    "/txt/InvestigationGCGData.txt",
    (const std::allocator<char> *)(v2 + 96));
  std::allocator<char>::~allocator(v2 + 96);
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  for ( __for_begin = (std::string *)(v2 + 688); __for_begin != (std::string *)(v2 + 816); ++__for_begin )
  {
    *(_DWORD *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    p_real_data_base_dir = &config->real_data_base_dir;
    if ( *(char *)(((v2 + 144) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 175) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 81) & 7) >= *(_BYTE *)(((v2 + 175) >> 3) + 0x7FFF8000) )
    {
      p_real_data_base_dir = (std::string *)32;
      __asan_report_store_n(v2 + 144, 32LL);
    }
    std::operator+<char>((std::string *)(v2 + 144), p_real_data_base_dir, __for_begin);
    std::string::operator=(__for_begin, v2 + 144);
    std::string::~string((void *)(v2 + 144));
    *(_DWORD *)(((v2 + 144) >> 3) + 0x7FFF8000) = -117901064;
    __asan_unpoison_stack_memory(v2 + 1296, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v2 + 1296));
    v6 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v2 + 1296), v6) )
    {
      *(_DWORD *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 208) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 239) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 17) & 7) >= *(_BYTE *)(((v2 + 239) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 208, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 208),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
        "loadInvestigationTargetConfig",
        705);
      v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v2 + 208),
             (const char (*)[8])byte_1AD383A0);
      v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])byte_1AD383E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 208));
      *(_DWORD *)(((v2 + 208) >> 3) + 0x7FFF8000) = -117901064;
      v33 = -1;
      v9 = 0;
    }
    else
    {
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 4;
      v10 = *(unsigned __int8 *)(((v2 + 112) >> 3) + 0x7FFF8000);
      if ( (_BYTE)v10 != 0 && (char)v10 <= 3 )
        __asan_report_store4(v2 + 112, v6);
      for ( *(_DWORD *)(v2 + 112) = 0; ; ++*(_DWORD *)(v2 + 112) )
      {
        v11 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v2 + 1296));
        if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v2 + 112);
        if ( v11 <= *(_DWORD *)(v2 + 112) )
          break;
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v2 + 1296), *(_DWORD *)(v2 + 112));
        v12 = ((v2 + 528) >> 3) + 2147450880;
        *(_DWORD *)v12 = 0;
        *(_DWORD *)(v12 + 4) = 0;
        *(_DWORD *)(v12 + 8) = 0;
        *(_WORD *)(v12 + 12) = 0;
        *(_BYTE *)(v12 + 14) = 0;
        data::InvestigationTargetConfig::InvestigationTargetConfig((data::InvestigationTargetConfig *const)(v2 + 528));
        if ( row_ptr )
        {
          if ( data::InvestigationTargetConfig::init((data::InvestigationTargetConfig *const)(v2 + 528), row_ptr) )
          {
            __asan_unpoison_stack_memory(v2 + 848, 376LL);
            std::ostringstream::basic_ostringstream(v2 + 848);
            v15 = std::operator<<<std::char_traits<char>>(v2 + 848, &unk_1AD3B5A0);
            if ( *(_BYTE *)(((v2 + 536) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 536) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v2 + 536);
            std::ostream::operator<<(v15, *(unsigned int *)(v2 + 536));
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
              4u,
              "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
              "loadInvestigationTargetConfig",
              721);
            v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 336),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v17 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v16, (const char (*)[2])"<");
            v18 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, __for_begin);
            v19 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v18,
                    (const char (*)[11])byte_1AD384E0);
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v2 + 112);
            v20 = (unsigned int)(*(_DWORD *)(v2 + 112) + 1);
            if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v2 + 128, v20);
            *(_DWORD *)(v2 + 128) = v20;
            v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v19,
                    (const unsigned int *)(v2 + 128));
            v22 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v21,
                    (const char (*)[13])byte_1AD38520);
            *(_DWORD *)(((v2 + 400) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 400) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 431) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 81) & 7) >= *(_BYTE *)(((v2 + 431) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 400, 32LL);
            }
            std::ostringstream::str(v2 + 400, v2 + 848);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, (const std::string *)(v2 + 400));
            std::string::~string((void *)(v2 + 400));
            *(_DWORD *)(((v2 + 400) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 336));
            *(_DWORD *)(((v2 + 336) >> 3) + 0x7FFF8000) = -117901064;
            v33 = -1;
            std::ostringstream::~ostringstream(v2 + 848);
            __asan_poison_stack_memory(v2 + 848, 376LL);
            v14 = 0;
          }
          else
          {
            v23 = std::move<data::InvestigationTargetConfig &>((data::InvestigationTargetConfig *)(v2 + 528));
            v26 = std::unordered_map<unsigned int,data::InvestigationTargetConfig>::emplace<unsigned int &,data::InvestigationTargetConfig>(
                    &this->investigation_target_config_map,
                    (unsigned int *)(v2 + 536),
                    v23,
                    v24,
                    v25);
            if ( !v26.second )
            {
              *(_DWORD *)(((v2 + 464) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 464) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 495) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 17) & 7) >= *(_BYTE *)(((v2 + 495) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 464, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 464),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
                "loadInvestigationTargetConfig",
                726);
              v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 464),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v28 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v27, (const char (*)[9])byte_1AD3B5E0);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v28,
                (const unsigned int *)(v2 + 536));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 464));
              *(_DWORD *)(((v2 + 464) >> 3) + 0x7FFF8000) = -117901064;
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
          *(_DWORD *)(((v2 + 272) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 272) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 303) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 47) & 7) >= *(_BYTE *)(((v2 + 303) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 272, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 272),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
            "loadInvestigationTargetConfig",
            714);
          v13 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v2 + 272),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 112));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 272));
          *(_DWORD *)(((v2 + 272) >> 3) + 0x7FFF8000) = -117901064;
          v33 = -1;
          v14 = 0;
        }
        data::InvestigationTargetConfig::~InvestigationTargetConfig((data::InvestigationTargetConfig *const)(v2 + 528));
        v29 = ((v2 + 528) >> 3) + 2147450880;
        *(_DWORD *)v29 = -117901064;
        *(_DWORD *)(v29 + 4) = -117901064;
        *(_DWORD *)(v29 + 8) = -117901064;
        *(_WORD *)(v29 + 12) = -1800;
        *(_BYTE *)(v29 + 14) = -8;
        if ( v14 != 1 )
        {
          v30 = 0;
          goto LABEL_45;
        }
        if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v2 + 112);
      }
      v30 = 1;
LABEL_45:
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      v9 = v30 == 1;
    }
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v2 + 1296));
    __asan_poison_stack_memory(v2 + 1296, 32880LL);
    if ( !v9 )
      goto LABEL_49;
  }
  v33 = 0;
LABEL_49:
  for ( i = (char *)(v2 + 816); i != (char *)(v2 + 688); std::string::~string(i) )
    i -= 32;
  if ( v37 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 88) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF8064) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF90C8) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862747) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450980 - (((_DWORD)v4 + 2147450988) & 0xFFFFFFF8) + 4204) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_10(v2, 34432LL, v37);
  }
  return v33;
};

// Line 735: range 00000000144FA7DA-00000000144FB80F
int32_t __cdecl data::InvestigationExcelConfigMgrBase::loadInvestigationMonsterConfig(
        data::InvestigationExcelConfigMgrBase *const this,
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
  data::InvestigationMonsterConfig *v24; // rax
  unsigned int *v25; // rcx
  data::InvestigationMonsterConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::InvestigationMonsterConfig>,false,false>,bool> v27; // rax
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
  *(_QWORD *)(v3 + 8) = "13 48 1 9 <unknown> 64 4 5 r:750 80 4 9 <unknown> 96 32 9 paths:736 160 32 9 <unknown> 224 32 9 "
                        "<unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 168 8 "
                        "data:753 784 376 24 debug_message_stream:761 1232 32880 12 txt_file:744";
  *(_QWORD *)(v3 + 16) = data::InvestigationExcelConfigMgrBase::loadInvestigationMonsterConfig;
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
    "/txt/InvestigationMonsterData.txt",
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
        "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
        "loadInvestigationMonsterConfig",
        747);
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
        data::InvestigationMonsterConfig::InvestigationMonsterConfig((data::InvestigationMonsterConfig *const)(v3 + 544));
        if ( row_ptr )
        {
          if ( data::InvestigationMonsterConfig::init((data::InvestigationMonsterConfig *const)(v3 + 544), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 784, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 784);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 784, &unk_1AD3B5A0);
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
              "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
              "loadInvestigationMonsterConfig",
              763);
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
            v24 = std::move<data::InvestigationMonsterConfig &>((data::InvestigationMonsterConfig *)(v3 + 544));
            v27 = std::unordered_map<unsigned int,data::InvestigationMonsterConfig>::emplace<unsigned int &,data::InvestigationMonsterConfig>(
                    &this->investigation_monster_config_map,
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
                "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
                "loadInvestigationMonsterConfig",
                768);
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
            && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 288, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 288),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
            "loadInvestigationMonsterConfig",
            756);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 288),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::InvestigationMonsterConfig::~InvestigationMonsterConfig((data::InvestigationMonsterConfig *const)(v3 + 544));
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

// Line 777: range 00000000144FB810-00000000144FC7E3
int32_t __cdecl data::InvestigationExcelConfigMgrBase::loadInvestigationDungeonConfig(
        data::InvestigationExcelConfigMgrBase *const this,
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
  data::InvestigationDungeonConfig *v24; // rax
  unsigned int *v25; // rcx
  data::InvestigationDungeonConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::InvestigationDungeonConfig>,false,false>,bool> v27; // rax
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
  *(_QWORD *)(v3 + 8) = "13 48 1 9 <unknown> 64 4 5 r:792 80 4 9 <unknown> 96 32 9 paths:778 160 32 9 <unknown> 224 32 9 "
                        "<unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 40 8 d"
                        "ata:795 624 376 24 debug_message_stream:803 1072 32880 12 txt_file:786";
  *(_QWORD *)(v3 + 16) = data::InvestigationExcelConfigMgrBase::loadInvestigationDungeonConfig;
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
    "/txt/InvestigationDungeonData.txt",
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
        "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
        "loadInvestigationDungeonConfig",
        789);
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
        data::InvestigationDungeonConfig::InvestigationDungeonConfig((data::InvestigationDungeonConfig *const)(v3 + 544));
        if ( row_ptr )
        {
          if ( data::InvestigationDungeonConfig::init((data::InvestigationDungeonConfig *const)(v3 + 544), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 624, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 624);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 624, &unk_1AD95900);
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
              "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
              "loadInvestigationDungeonConfig",
              805);
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
            v24 = std::move<data::InvestigationDungeonConfig &>((data::InvestigationDungeonConfig *)(v3 + 544));
            v27 = std::unordered_map<unsigned int,data::InvestigationDungeonConfig>::emplace<unsigned int &,data::InvestigationDungeonConfig>(
                    &this->investigation_dungeon_config_map,
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
                "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
                "loadInvestigationDungeonConfig",
                810);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 480),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                      v28,
                      (const char (*)[17])byte_1AD95940);
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
            "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
            "loadInvestigationDungeonConfig",
            798);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 288),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::InvestigationDungeonConfig::~InvestigationDungeonConfig((data::InvestigationDungeonConfig *const)(v3 + 544));
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

// Line 819: range 00000000144FC7E4-00000000144FCD8E
int32_t __cdecl data::InvestigationExcelConfigMgrBase::loadConfig(
        data::InvestigationExcelConfigMgrBase *const this,
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
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)data::InvestigationExcelConfigMgrBase::loadConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  if ( data::InvestigationExcelConfigMgrBase::loadInvestigationConfig(this, config) )
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
      "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
      "loadConfig",
      822);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      v5,
      (const char (*)[31])"loadInvestigationConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( data::InvestigationExcelConfigMgrBase::loadInvestigationTargetConfig(this, config) )
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
      "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
      "loadConfig",
      827);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      v7,
      (const char (*)[37])"loadInvestigationTargetConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( data::InvestigationExcelConfigMgrBase::loadInvestigationMonsterConfig(this, config) )
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
      "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
      "loadConfig",
      832);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      v8,
      (const char (*)[38])"loadInvestigationMonsterConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else if ( data::InvestigationExcelConfigMgrBase::loadInvestigationDungeonConfig(this, config) )
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
      "./src/txt_data_auto/InvestigationExcelConfig.gen.cpp",
      "loadConfig",
      837);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      v9,
      (const char (*)[38])"loadInvestigationDungeonConfig failed");
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

// Line 844: range 00000000144FCD90-00000000144FCDA2
int32_t __cdecl data::InvestigationExcelConfigMgrBase::rewriteConfig(
        data::InvestigationExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 849: range 00000000144FCDA4-00000000144FCDB6
int32_t __cdecl data::InvestigationExcelConfigMgrBase::finalConfig(
        data::InvestigationExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 854: range 00000000144FCDB8-00000000144FCF73
data::InvestigationConfig *__fastcall data::InvestigationExcelConfigMgrBase::findInvestigationConfig(
        data::InvestigationExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::InvestigationConfigMap *p_investigation_config_map; // rdx
  data::InvestigationConfigMap *v6; // rdx
  bool v7; // al
  data::InvestigationConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:853 64 8 8 iter:855 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::InvestigationExcelConfigMgrBase::findInvestigationConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_investigation_config_map = &this->investigation_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::InvestigationConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::InvestigationConfig>::find(
                                                                                         p_investigation_config_map,
                                                                                         (const std::unordered_map<unsigned int,data::InvestigationConfig>::key_type *)(v2 + 48));
  v6 = &this->investigation_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::InvestigationConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::InvestigationConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::InvestigationConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InvestigationConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InvestigationConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::InvestigationConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::InvestigationConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 867: range 00000000144FCF74-00000000144FD12F
const data::InvestigationConfig *__fastcall data::InvestigationExcelConfigMgrBase::findInvestigationConfig(
        const data::InvestigationExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::InvestigationConfigMap *p_investigation_config_map; // rdx
  data::InvestigationConfigMap *v6; // rdx
  bool v7; // al
  const data::InvestigationConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:866 64 8 8 iter:868 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::InvestigationExcelConfigMgrBase::findInvestigationConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_investigation_config_map = &this->investigation_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::InvestigationConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::InvestigationConfig>::find(
                                                                                               p_investigation_config_map,
                                                                                               (const std::unordered_map<unsigned int,data::InvestigationConfig>::key_type *)(v2 + 48));
  v6 = &this->investigation_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::InvestigationConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::InvestigationConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::InvestigationConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InvestigationConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InvestigationConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::InvestigationConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::InvestigationConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 880: range 00000000144FD130-00000000144FD2EB
data::InvestigationTargetConfig *__fastcall data::InvestigationExcelConfigMgrBase::findInvestigationTargetConfig(
        data::InvestigationExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::InvestigationTargetConfigMap *p_investigation_target_config_map; // rdx
  data::InvestigationTargetConfigMap *v6; // rdx
  bool v7; // al
  data::InvestigationTargetConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:879 64 8 8 iter:881 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::InvestigationExcelConfigMgrBase::findInvestigationTargetConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_investigation_target_config_map = &this->investigation_target_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::InvestigationTargetConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::InvestigationTargetConfig>::find(
                                                                                               p_investigation_target_config_map,
                                                                                               (const std::unordered_map<unsigned int,data::InvestigationTargetConfig>::key_type *)(v2 + 48));
  v6 = &this->investigation_target_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::InvestigationTargetConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::InvestigationTargetConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::InvestigationTargetConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InvestigationTargetConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InvestigationTargetConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::InvestigationTargetConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::InvestigationTargetConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 893: range 00000000144FD2EC-00000000144FD4A7
const data::InvestigationTargetConfig *__fastcall data::InvestigationExcelConfigMgrBase::findInvestigationTargetConfig(
        const data::InvestigationExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::InvestigationTargetConfigMap *p_investigation_target_config_map; // rdx
  data::InvestigationTargetConfigMap *v6; // rdx
  bool v7; // al
  const data::InvestigationTargetConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:892 64 8 8 iter:894 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::InvestigationExcelConfigMgrBase::findInvestigationTargetConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_investigation_target_config_map = &this->investigation_target_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::InvestigationTargetConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::InvestigationTargetConfig>::find(
                                                                                                     p_investigation_target_config_map,
                                                                                                     (const std::unordered_map<unsigned int,data::InvestigationTargetConfig>::key_type *)(v2 + 48));
  v6 = &this->investigation_target_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::InvestigationTargetConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::InvestigationTargetConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::InvestigationTargetConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InvestigationTargetConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InvestigationTargetConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::InvestigationTargetConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::InvestigationTargetConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 906: range 00000000144FD4A8-00000000144FD663
data::InvestigationMonsterConfig *__fastcall data::InvestigationExcelConfigMgrBase::findInvestigationMonsterConfig(
        data::InvestigationExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::InvestigationMonsterConfigMap *p_investigation_monster_config_map; // rdx
  data::InvestigationMonsterConfigMap *v6; // rdx
  bool v7; // al
  data::InvestigationMonsterConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:905 64 8 8 iter:907 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::InvestigationExcelConfigMgrBase::findInvestigationMonsterConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_investigation_monster_config_map = &this->investigation_monster_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::InvestigationMonsterConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::InvestigationMonsterConfig>::find(
                                                                                                p_investigation_monster_config_map,
                                                                                                (const std::unordered_map<unsigned int,data::InvestigationMonsterConfig>::key_type *)(v2 + 48));
  v6 = &this->investigation_monster_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::InvestigationMonsterConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::InvestigationMonsterConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::InvestigationMonsterConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InvestigationMonsterConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InvestigationMonsterConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::InvestigationMonsterConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::InvestigationMonsterConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 919: range 00000000144FD664-00000000144FD81F
const data::InvestigationMonsterConfig *__fastcall data::InvestigationExcelConfigMgrBase::findInvestigationMonsterConfig(
        const data::InvestigationExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::InvestigationMonsterConfigMap *p_investigation_monster_config_map; // rdx
  data::InvestigationMonsterConfigMap *v6; // rdx
  bool v7; // al
  const data::InvestigationMonsterConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:918 64 8 8 iter:920 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::InvestigationExcelConfigMgrBase::findInvestigationMonsterConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_investigation_monster_config_map = &this->investigation_monster_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::InvestigationMonsterConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::InvestigationMonsterConfig>::find(p_investigation_monster_config_map, (const std::unordered_map<unsigned int,data::InvestigationMonsterConfig>::key_type *)(v2 + 48));
  v6 = &this->investigation_monster_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::InvestigationMonsterConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::InvestigationMonsterConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::InvestigationMonsterConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InvestigationMonsterConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InvestigationMonsterConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::InvestigationMonsterConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::InvestigationMonsterConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 932: range 00000000144FD820-00000000144FD9E1
data::InvestigationDungeonConfig *__fastcall data::InvestigationExcelConfigMgrBase::findInvestigationDungeonConfig(
        data::InvestigationExcelConfigMgrBase *const this,
        __int64 entrance_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::InvestigationDungeonConfigMap *p_investigation_dungeon_config_map; // rdx
  data::InvestigationDungeonConfigMap *v6; // rdx
  bool v7; // al
  data::InvestigationDungeonConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 entrance_id:931 64 8 8 iter:933 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::InvestigationExcelConfigMgrBase::findInvestigationDungeonConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = entrance_id;
  p_investigation_dungeon_config_map = &this->investigation_dungeon_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, entrance_id);
  *(std::unordered_map<unsigned int,data::InvestigationDungeonConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::InvestigationDungeonConfig>::find(
                                                                                                p_investigation_dungeon_config_map,
                                                                                                (const std::unordered_map<unsigned int,data::InvestigationDungeonConfig>::key_type *)(v2 + 48));
  v6 = &this->investigation_dungeon_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::InvestigationDungeonConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::InvestigationDungeonConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::InvestigationDungeonConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InvestigationDungeonConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InvestigationDungeonConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::InvestigationDungeonConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::InvestigationDungeonConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 945: range 00000000144FD9E2-00000000144FDBA3
const data::InvestigationDungeonConfig *__fastcall data::InvestigationExcelConfigMgrBase::findInvestigationDungeonConfig(
        const data::InvestigationExcelConfigMgrBase *const this,
        __int64 entrance_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::InvestigationDungeonConfigMap *p_investigation_dungeon_config_map; // rdx
  data::InvestigationDungeonConfigMap *v6; // rdx
  bool v7; // al
  const data::InvestigationDungeonConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 entrance_id:944 64 8 8 iter:946 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::InvestigationExcelConfigMgrBase::findInvestigationDungeonConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = entrance_id;
  p_investigation_dungeon_config_map = &this->investigation_dungeon_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, entrance_id);
  *(std::unordered_map<unsigned int,data::InvestigationDungeonConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::InvestigationDungeonConfig>::find(p_investigation_dungeon_config_map, (const std::unordered_map<unsigned int,data::InvestigationDungeonConfig>::key_type *)(v2 + 48));
  v6 = &this->investigation_dungeon_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::InvestigationDungeonConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::InvestigationDungeonConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::InvestigationDungeonConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InvestigationDungeonConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InvestigationDungeonConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::InvestigationDungeonConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::InvestigationDungeonConfig>,false,false> *const)(v2 + 64))->second;
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

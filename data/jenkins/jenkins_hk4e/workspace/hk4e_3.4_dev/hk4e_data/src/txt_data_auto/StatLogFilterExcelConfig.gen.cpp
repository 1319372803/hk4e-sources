// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/StatLogFilterExcelConfig.gen.cpp

// Line 12: range 000000000CBA9DCE-000000000CBAA146
const char *__fastcall data::enumValToStr(data::OriHurtFilterType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::OriHurtFilterType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::OriHurtFilterType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
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
  map = data::getOriHurtFilterTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::OriHurtFilterType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::OriHurtFilterType,std::pair<std::string,std::string>>::find(map, (const std::map<data::OriHurtFilterType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::OriHurtFilterType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::OriHurtFilterType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::OriHurtFilterType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::OriHurtFilterType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/StatLogFilterExcelConfig.gen.cpp",
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
    result = "INVALID_OriHurtFilterType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::OriHurtFilterType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::OriHurtFilterType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 24: range 000000000CBAA147-000000000CBAA6FF
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::OriHurtFilterType>,false,true>::pointer v10; // rax
  data::OriHurtFilterType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::OriHurtFilterType> *m; // [rsp+18h] [rbp-188h]
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
    m = data::getOriHurtFilterTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::OriHurtFilterType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::OriHurtFilterType>::find(
                                                                                              m,
                                                                                              (const std::unordered_map<std::string,data::OriHurtFilterType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::OriHurtFilterType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::OriHurtFilterType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::OriHurtFilterType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::OriHurtFilterType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::OriHurtFilterType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/StatLogFilterExcelConfig.gen.cpp",
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
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::OriHurtFilterType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::OriHurtFilterType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/StatLogFilterExcelConfig.gen.cpp",
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

// Line 45: range 000000000CBAA700-000000000CBAB15B
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::OriHurtFilterType> *i; // r14
  unsigned __int64 v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::OriHurtFilterType>,false,true>::pointer v12; // rax
  data::OriHurtFilterType second; // ecx
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::OriHurtFilterType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::OriHurtFilterType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, e);
      *(_DWORD *)(v2 + 112) = 1;
      std::pair<std::string const,data::OriHurtFilterType>::pair<char const(&)[19],data::OriHurtFilterType,true>(
        (std::pair<const std::string,data::OriHurtFilterType> *const)(v2 + 448),
        (const char (*)[19])byte_1A147B20,
        (data::OriHurtFilterType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1A147B20);
      *(_DWORD *)(v2 + 128) = 2;
      std::pair<std::string const,data::OriHurtFilterType>::pair<char const(&)[21],data::OriHurtFilterType,true>(
        (std::pair<const std::string,data::OriHurtFilterType> *const)(v2 + 488),
        (const char (*)[21])byte_1A147B60,
        (data::OriHurtFilterType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, byte_1A147B60);
      *(_DWORD *)(v2 + 144) = 3;
      std::pair<std::string const,data::OriHurtFilterType>::pair<char const(&)[20],data::OriHurtFilterType,true>(
        (std::pair<const std::string,data::OriHurtFilterType> *const)(v2 + 528),
        (const char (*)[20])byte_1A147BA0,
        (data::OriHurtFilterType *)(v2 + 144));
      std::allocator<std::pair<std::string const,data::OriHurtFilterType>>::allocator((std::allocator<std::pair<const std::string,data::OriHurtFilterType> > *const)(v2 + 80));
      std::unordered_map<std::string,data::OriHurtFilterType>::unordered_map(
        &data::enumStrToVal(char const*,data::OriHurtFilterType &)::m,
        (std::initializer_list<std::pair<const std::string,data::OriHurtFilterType> >)__PAIR128__(3LL, v2 + 448),
        0LL,
        (const std::unordered_map<std::string,data::OriHurtFilterType>::hasher *)(v2 + 48),
        (const std::unordered_map<std::string,data::OriHurtFilterType>::key_equal *)(v2 + 64),
        (const std::unordered_map<std::string,data::OriHurtFilterType>::allocator_type *)(v2 + 80));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::OriHurtFilterType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::OriHurtFilterType>::~unordered_map,
        &data::enumStrToVal(char const*,data::OriHurtFilterType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::OriHurtFilterType>>::~allocator((std::allocator<std::pair<const std::string,data::OriHurtFilterType> > *const)(v2 + 80));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::OriHurtFilterType> *)(v2 + 568);
            i != (std::pair<const std::string,data::OriHurtFilterType> *)(v2 + 448);
            std::pair<std::string const,data::OriHurtFilterType>::~pair(i) )
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
    *(std::unordered_map<std::string,data::OriHurtFilterType>::iterator *)(v2 + 160) = std::unordered_map<std::string,data::OriHurtFilterType>::find(
                                                                                         &data::enumStrToVal(char const*,data::OriHurtFilterType &)::m,
                                                                                         (const std::unordered_map<std::string,data::OriHurtFilterType>::key_type *)(v2 + 320));
    std::string::~string((void *)(v2 + 320));
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 96);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, v2 + 320);
    *(std::unordered_map<std::string,data::OriHurtFilterType>::iterator *)(v2 + 192) = std::unordered_map<std::string,data::OriHurtFilterType>::end(&data::enumStrToVal(char const*,data::OriHurtFilterType &)::m);
    v9 = (char *)(v2 + 192);
    v10 = std::__detail::operator==<std::pair<std::string const,data::OriHurtFilterType>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::OriHurtFilterType>,true> *)(v2 + 160),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::OriHurtFilterType>,true> *)(v2 + 192));
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
        "./src/txt_data_auto/StatLogFilterExcelConfig.gen.cpp",
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
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::OriHurtFilterType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::OriHurtFilterType>,false,true> *const)(v2 + 160));
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
      "./src/txt_data_auto/StatLogFilterExcelConfig.gen.cpp",
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

// Line 71: range 000000000CBAB15C-000000000CBAB172
const char *__cdecl data::getDescription(data::OriHurtFilterType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 76: range 000000000CBAB173-000000000CBAB329
bool __cdecl data::isValidOriHurtFilterType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t v5; // ecx
  char v6; // al
  const std::map<data::OriHurtFilterType,std::pair<std::string,std::string >> *v7; // rcx
  const std::map<data::OriHurtFilterType,std::pair<std::string,std::string >> *v8; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 4 e:77 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidOriHurtFilterType;
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
  v7 = data::getOriHurtFilterTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::OriHurtFilterType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::OriHurtFilterType,std::pair<std::string,std::string>>::end(v7);
  v8 = data::getOriHurtFilterTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::OriHurtFilterType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::OriHurtFilterType,std::pair<std::string,std::string>>::find(v8, (const std::map<data::OriHurtFilterType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::OriHurtFilterType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::OriHurtFilterType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 82: range 000000000CBAB32A-000000000CBAB48B
bool __cdecl data::isValidOriHurtFilterTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::OriHurtFilterType> *v5; // rcx
  const std::unordered_map<std::string,data::OriHurtFilterType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidOriHurtFilterTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getOriHurtFilterTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::OriHurtFilterType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::OriHurtFilterType>::end(v5);
  v6 = data::getOriHurtFilterTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::OriHurtFilterType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::OriHurtFilterType>::find(
                                                                                            v6,
                                                                                            name);
  result = std::__detail::operator!=<std::pair<std::string const,data::OriHurtFilterType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::OriHurtFilterType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::OriHurtFilterType>,true> *)(v2 + 64));
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

// Line 87: range 000000000CBAB48C-000000000CBAB9EB
const std::unordered_map<std::string,data::OriHurtFilterType> *__cdecl data::getOriHurtFilterTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::OriHurtFilterType> *i; // r14
  const std::unordered_map<std::string,data::OriHurtFilterType> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getOriHurtFilterTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -234753535;
  v3[536862723] = -234556924;
  v3[536862724] = -234556924;
  v3[536862730] = -202116109;
  v3[536862731] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getOriHurtFilterTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getOriHurtFilterTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v0);
    *(_DWORD *)(v1 + 96) = 0;
    std::pair<std::string const,data::OriHurtFilterType>::pair<char const(&)[5],data::OriHurtFilterType,true>(
      (std::pair<const std::string,data::OriHurtFilterType> *const)(v1 + 160),
      (const char (*)[5])"NONE",
      (data::OriHurtFilterType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "NONE");
    *(_DWORD *)(v1 + 112) = 1;
    std::pair<std::string const,data::OriHurtFilterType>::pair<char const(&)[9],data::OriHurtFilterType,true>(
      (std::pair<const std::string,data::OriHurtFilterType> *const)(v1 + 200),
      (const char (*)[9])"OVERDOSE",
      (data::OriHurtFilterType *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, "OVERDOSE");
    *(_DWORD *)(v1 + 128) = 2;
    std::pair<std::string const,data::OriHurtFilterType>::pair<char const(&)[14],data::OriHurtFilterType,true>(
      (std::pair<const std::string,data::OriHurtFilterType> *const)(v1 + 240),
      (const char (*)[14])"MODIFIER_NAME",
      (data::OriHurtFilterType *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, "MODIFIER_NAME");
    *(_DWORD *)(v1 + 144) = 3;
    std::pair<std::string const,data::OriHurtFilterType>::pair<char const(&)[13],data::OriHurtFilterType,true>(
      (std::pair<const std::string,data::OriHurtFilterType> *const)(v1 + 280),
      (const char (*)[13])"ABILITY_NAME",
      (data::OriHurtFilterType *)(v1 + 144));
    std::allocator<std::pair<std::string const,data::OriHurtFilterType>>::allocator((std::allocator<std::pair<const std::string,data::OriHurtFilterType> > *const)(v1 + 80));
    std::unordered_map<std::string,data::OriHurtFilterType>::unordered_map(
      &data::getOriHurtFilterTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::OriHurtFilterType> >)__PAIR128__(4LL, v1 + 160),
      0LL,
      (const std::unordered_map<std::string,data::OriHurtFilterType>::hasher *)(v1 + 48),
      (const std::unordered_map<std::string,data::OriHurtFilterType>::key_equal *)(v1 + 64),
      (const std::unordered_map<std::string,data::OriHurtFilterType>::allocator_type *)(v1 + 80));
    __cxa_guard_release(&`guard variable for'data::getOriHurtFilterTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::OriHurtFilterType>::~unordered_map,
      &data::getOriHurtFilterTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::OriHurtFilterType>>::~allocator((std::allocator<std::pair<const std::string,data::OriHurtFilterType> > *const)(v1 + 80));
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::OriHurtFilterType> *)(v1 + 320);
          i != (std::pair<const std::string,data::OriHurtFilterType> *)(v1 + 160);
          std::pair<std::string const,data::OriHurtFilterType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getOriHurtFilterTypeNameMap[abi:cxx11](void)::m;
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

// Line 99: range 000000000CBAB9EC-000000000CBAC1BC
const std::map<data::OriHurtFilterType,std::pair<std::string,std::string >> *__cdecl data::getOriHurtFilterTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::OriHurtFilterType,std::pair<std::string,std::string > > *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getOriHurtFilterTypeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getOriHurtFilterTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getOriHurtFilterTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 64, v0);
    *(_DWORD *)(v1 + 64) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[5],true>(
      (std::pair<std::string,std::string > *const)(v1 + 128),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[5])"NONE");
    std::pair<data::OriHurtFilterType const,std::pair<std::string,std::string>>::pair<data::OriHurtFilterType,true>(
      (std::pair<const data::OriHurtFilterType,std::pair<std::string,std::string > > *const)(v1 + 512),
      (data::OriHurtFilterType *)(v1 + 64),
      (const std::pair<std::string,std::string > *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v1 + 64);
    *(_DWORD *)(v1 + 80) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[9],true>(
      (std::pair<std::string,std::string > *const)(v1 + 224),
      (const char (*)[19])byte_1A147B20,
      (const char (*)[9])"OVERDOSE");
    std::pair<data::OriHurtFilterType const,std::pair<std::string,std::string>>::pair<data::OriHurtFilterType,true>(
      (std::pair<const data::OriHurtFilterType,std::pair<std::string,std::string > > *const)(v1 + 584),
      (data::OriHurtFilterType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 224));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[21],char const(&)[14],true>(
      (std::pair<std::string,std::string > *const)(v1 + 320),
      (const char (*)[21])byte_1A147B60,
      (const char (*)[14])"MODIFIER_NAME");
    std::pair<data::OriHurtFilterType const,std::pair<std::string,std::string>>::pair<data::OriHurtFilterType,true>(
      (std::pair<const data::OriHurtFilterType,std::pair<std::string,std::string > > *const)(v1 + 656),
      (data::OriHurtFilterType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 320));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 3;
    std::pair<std::string,std::string>::pair<char const(&)[20],char const(&)[13],true>(
      (std::pair<std::string,std::string > *const)(v1 + 416),
      (const char (*)[20])byte_1A147BA0,
      (const char (*)[13])"ABILITY_NAME");
    std::pair<data::OriHurtFilterType const,std::pair<std::string,std::string>>::pair<data::OriHurtFilterType,true>(
      (std::pair<const data::OriHurtFilterType,std::pair<std::string,std::string > > *const)(v1 + 728),
      (data::OriHurtFilterType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 416));
    std::allocator<std::pair<data::OriHurtFilterType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::OriHurtFilterType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    std::map<data::OriHurtFilterType,std::pair<std::string,std::string>>::map(
      &data::getOriHurtFilterTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::OriHurtFilterType,std::pair<std::string,std::string > > >)__PAIR128__(4LL, v1 + 512),
      (const std::less<data::OriHurtFilterType> *)(v1 + 32),
      (const std::map<data::OriHurtFilterType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 48));
    __cxa_guard_release(&`guard variable for'data::getOriHurtFilterTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::OriHurtFilterType,std::pair<std::string,std::string>>::~map,
      &data::getOriHurtFilterTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::OriHurtFilterType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::OriHurtFilterType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::OriHurtFilterType,std::pair<std::string,std::string > > *)(v1 + 800);
          i != (std::pair<const data::OriHurtFilterType,std::pair<std::string,std::string > > *)(v1 + 512);
          std::pair<data::OriHurtFilterType const,std::pair<std::string,std::string>>::~pair(i) )
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
  return &data::getOriHurtFilterTypeEnumMap[abi:cxx11](void)::m;
};

// Line 112: range 000000000CBAC1BE-000000000CBAE86B
int32_t __cdecl data::CombatStatLogFilterExcelConfig::init(
        data::CombatStatLogFilterExcelConfig *const this,
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
                        "2 11 val_str:113 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832"
                        " 32 9 <unknown> 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 <unknown> 11"
                        "52 32 9 <unknown> 1216 32 9 <unknown> 1280 32 9 <unknown> 1344 32 9 <unknown> 1408 32 9 <unknown"
                        "> 1472 32 9 <unknown> 1536 32 9 <unknown> 1600 32 9 <unknown> 1664 32 9 <unknown> 1728 32 9 <unk"
                        "nown> 1792 32 9 <unknown> 1856 32 9 <unknown> 1920 64 9 <unknown> 2016 64 9 <unknown> 2112 64 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::CombatStatLogFilterExcelConfig::init;
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
    &byte_1A1480A0,
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
      "./src/txt_data_auto/StatLogFilterExcelConfig.gen.cpp",
      "init",
      116);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 640),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v5, (const char (*)[29])byte_1A1480E0);
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
      &byte_1A148120,
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
        "./src/txt_data_auto/StatLogFilterExcelConfig.gen.cpp",
        "init",
        121);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 768),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v7, (const char (*)[33])byte_1A148160);
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
      v10 = common::tools::StringUtils::splitToListBySeps(
              (const std::string *)(v2 + 512),
              (const std::vector<std::string> *)(v2 + 320),
              &this->region_list,
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
          "./src/txt_data_auto/StatLogFilterExcelConfig.gen.cpp",
          "init",
          126);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 832),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v14, (const char (*)[33])byte_1A148160);
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
          aUid_3,
          (const std::allocator<char> *)(v2 + 112));
        v15 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 896), (std::string *)(v2 + 512)) != 0;
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
            "./src/txt_data_auto/StatLogFilterExcelConfig.gen.cpp",
            "init",
            131);
          v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 960),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v16, (const char (*)[30])byte_1A148200);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 960));
          *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = -117901064;
          v6 = -1;
        }
        else
        {
          v17 = ((v2 + 384) >> 3) + 2147450880;
          *(_WORD *)v17 = 0;
          *(_BYTE *)(v17 + 2) = 0;
          v18 = (_DWORD *)(((v2 + 2016) >> 3) + 2147450880);
          *v18 = 0;
          v18[1] = 0;
          *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 128);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 2016),
            ";",
            (const std::allocator<char> *)(v2 + 128));
          *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 144);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 2048),
            ",",
            (const std::allocator<char> *)(v2 + 144));
          __l._M_array = (std::initializer_list<std::string >::iterator)(v2 + 2016);
          __l._M_len = 2LL;
          *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
          std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 160));
          std::vector<std::string>::vector(
            (std::vector<std::string> *const)(v2 + 384),
            __l,
            (const std::vector<std::string>::allocator_type *)(v2 + 160));
          v19 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                  (const std::string *)(v2 + 512),
                  (const std::vector<std::string> *)(v2 + 384),
                  &this->uid_filter_param,
                  1) != 0;
          std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 384));
          v20 = ((v2 + 384) >> 3) + 2147450880;
          *(_WORD *)v20 = -1800;
          *(_BYTE *)(v20 + 2) = -8;
          std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 160));
          *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
          for ( j = (char *)(v2 + 2080); j != (char *)(v2 + 2016); std::string::~string(j) )
            j -= 32;
          v22 = (_DWORD *)(((v2 + 2016) >> 3) + 2147450880);
          *v22 = -117901064;
          v22[1] = -117901064;
          std::allocator<char>::~allocator(v2 + 144);
          *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
          std::allocator<char>::~allocator(v2 + 128);
          *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
          if ( v19 )
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
              "./src/txt_data_auto/StatLogFilterExcelConfig.gen.cpp",
              "init",
              136);
            v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 1024),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v23, (const char (*)[30])byte_1A148200);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1024));
            *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -117901064;
            v6 = -1;
          }
          else
          {
            *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 176);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1088),
              &byte_1A148240,
              (const std::allocator<char> *)(v2 + 176));
            v24 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 1088), &this->begin_time_str) != 0;
            std::string::~string((void *)(v2 + 1088));
            *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 176);
            *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
            if ( v24 )
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
                "./src/txt_data_auto/StatLogFilterExcelConfig.gen.cpp",
                "init",
                141);
              v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1152),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v25, (const char (*)[33])byte_1A148280);
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
                &byte_1A1482E0,
                (const std::allocator<char> *)(v2 + 192));
              v26 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 1216), &this->end_time_str) != 0;
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
                  "./src/txt_data_auto/StatLogFilterExcelConfig.gen.cpp",
                  "init",
                  146);
                v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1280),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v27, (const char (*)[33])byte_1A148320);
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
                  &byte_1A148380,
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
                    "./src/txt_data_auto/StatLogFilterExcelConfig.gen.cpp",
                    "init",
                    151);
                  v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 1408),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                    v29,
                    (const char (*)[39])byte_1A1483C0);
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
                          &this->player_level_range,
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
                      "./src/txt_data_auto/StatLogFilterExcelConfig.gen.cpp",
                      "init",
                      156);
                    v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 1472),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                      v36,
                      (const char (*)[39])byte_1A1483C0);
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
                      &byte_1A148420,
                      (const std::allocator<char> *)(v2 + 272));
                    v37 = common::tools::TxtFile::Row::assignToStr(
                            row,
                            (const std::string *)(v2 + 1536),
                            &this->world_id_list) != 0;
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
                        "./src/txt_data_auto/StatLogFilterExcelConfig.gen.cpp",
                        "init",
                        161);
                      v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 1600),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                        v38,
                        (const char (*)[32])byte_1A148460);
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
                        &byte_1A1484A0,
                        (const std::allocator<char> *)(v2 + 288));
                      v39 = common::tools::TxtFile::Row::assignToStr(
                              row,
                              (const std::string *)(v2 + 1664),
                              &this->dungeon_id_list) != 0;
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
                          "./src/txt_data_auto/StatLogFilterExcelConfig.gen.cpp",
                          "init",
                          166);
                        v40 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                (common::milog::MiLogStream *const)(v2 + 1728),
                                (const char (*)[16])"[CONFIG_ERROR] ");
                        common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                          v40,
                          (const char (*)[29])byte_1A1484E0);
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
                          &byte_1A148520,
                          (const std::allocator<char> *)(v2 + 304));
                        v41 = common::tools::TxtFile::Row::assignToStr(
                                row,
                                (const std::string *)(v2 + 1792),
                                &this->monster_id_list) != 0;
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
                            "./src/txt_data_auto/StatLogFilterExcelConfig.gen.cpp",
                            "init",
                            171);
                          v42 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                  (common::milog::MiLogStream *const)(v2 + 1856),
                                  (const char (*)[16])"[CONFIG_ERROR] ");
                          common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                            v42,
                            (const char (*)[29])byte_1A148560);
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

// Line 179: range 000000000CBAE86C-000000000CBAF599
int32_t __cdecl data::OriHurtFilterExcelConfig::init(
        data::OriHurtFilterExcelConfig *const this,
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
  std::string *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  uint32_t array_count; // [rsp+18h] [rbp-438h]
  uint32_t i; // [rsp+1Ch] [rbp-434h]
  char v19[1072]; // [rsp+20h] [rbp-430h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(1024LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "15 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 32 "
                        "9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9"
                        " <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 256 12 col_name:180";
  *(_QWORD *)(v2 + 16) = data::OriHurtFilterExcelConfig::init;
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
  v4[536862750] = -202116109;
  v4[536862751] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 128),
    &byte_1A1486C0,
    (const std::allocator<char> *)(v2 + 48));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 128), &this->config_id) != 0;
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
      "./src/txt_data_auto/StatLogFilterExcelConfig.gen.cpp",
      "init",
      184);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 192),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v6, (const char (*)[29])byte_1A148700);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = -1;
    goto LABEL_26;
  }
  *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 256),
    &byte_1A148740,
    (const std::allocator<char> *)(v2 + 64));
  v8 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 256), &this->filter_name) != 0;
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
      "./src/txt_data_auto/StatLogFilterExcelConfig.gen.cpp",
      "init",
      189);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 320),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v9, (const char (*)[39])byte_1A148780);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
    result = -1;
    goto LABEL_26;
  }
  *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 80);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 384),
    &byte_1A1487E0,
    (const std::allocator<char> *)(v2 + 80));
  v10 = common::tools::TxtFile::Row::assignToEnum<data::OriHurtFilterType>(
          row,
          (const std::string *)(v2 + 384),
          &this->filter_type) != 0;
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
      "./src/txt_data_auto/StatLogFilterExcelConfig.gen.cpp",
      "init",
      194);
    v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v11, (const char (*)[33])byte_1A148820);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
    result = -1;
    goto LABEL_26;
  }
  std::vector<std::string>::resize(&this->filter_params, 4uLL);
  array_count = 0;
  for ( i = 0; ; ++i )
  {
    if ( i > 3 )
    {
      std::vector<std::string>::resize(&this->filter_params, array_count);
      result = 0;
      goto LABEL_26;
    }
    snprintf((char *)(v2 + 704), 0x100uLL, &byte_1A148880, i + 1);
    *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 96);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 512),
      (const char *)(v2 + 704),
      (const std::allocator<char> *)(v2 + 96));
    v12 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 512));
    std::string::~string((void *)(v2 + 512));
    *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 96);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( !v12 )
      break;
LABEL_24:
    ;
  }
  v13 = std::vector<std::string>::operator[](&this->filter_params, i);
  *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 112);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 576),
    (const char *)(v2 + 704),
    (const std::allocator<char> *)(v2 + 112));
  LOBYTE(v13) = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 576), v13) != 0;
  std::string::~string((void *)(v2 + 576));
  *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 112);
  *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
  if ( !(_BYTE)v13 )
  {
    array_count = i + 1;
    goto LABEL_24;
  }
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
    "./src/txt_data_auto/StatLogFilterExcelConfig.gen.cpp",
    "init",
    206);
  v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v2 + 640),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v15 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v14, (const char (*)[14])byte_1A143560);
  v16 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(v15, (const char (*)[256])(v2 + 704));
  common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v16, (const char (*)[7])byte_1A1435A0);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 640));
  result = -1;
LABEL_26:
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8034) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF804C) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8054) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8078) = 0LL;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8078) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 219: range 000000000CBAF59A-000000000CBB0647
int32_t __cdecl data::StatLogFilterExcelConfigMgrBase::loadCombatStatLogFilterExcelConfig(
        data::StatLogFilterExcelConfigMgrBase *const this,
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
  data::CombatStatLogFilterExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::CombatStatLogFilterExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::CombatStatLogFilterExcelConfig>,false,false>,bool> v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  unsigned __int64 v30; // rax
  int v31; // edx
  char *i; // r14
  std::string *__for_begin; // [rsp+28h] [rbp-86D8h]
  const common::tools::TxtFile::Row *row_ptr; // [rsp+48h] [rbp-86B8h]
  char v37[34480]; // [rsp+50h] [rbp-86B0h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_10(34432LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 5 r:234 64 4 9 <unknown> 80 32 9 paths:220 144 32 9 <unknown> 208 32 9 "
                        "<unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 248 8 "
                        "data:237 848 376 24 debug_message_stream:245 1296 32880 12 txt_file:228";
  *(_QWORD *)(v3 + 16) = data::StatLogFilterExcelConfigMgrBase::loadCombatStatLogFilterExcelConfig;
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
  v5[536862744] = -218959360;
  v5[536862745] = -218959118;
  v5[536862746] = 62194;
  v5[536862758] = -218959360;
  v5[536862759] = -218959118;
  v5[536862760] = 62194;
  v5[536863788] = -202116109;
  v5[536863789] = -202116109;
  v5[536863790] = -202116109;
  v5[536863791] = -202116109;
  v5[536863792] = -202116109;
  v5[536863793] = -202116109;
  v5[536863794] = -202116109;
  v5[536863795] = -202116109;
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 80),
    "/txt/CombatFilterData.txt",
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
    __asan_unpoison_stack_memory(v3 + 1296, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v3 + 1296));
    v7 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v3 + 1296), v7) )
    {
      *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 208) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 17) & 7) >= *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 208, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 208),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_auto/StatLogFilterExcelConfig.gen.cpp",
        "loadCombatStatLogFilterExcelConfig",
        231);
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v3 + 208),
             (const char (*)[8])byte_1A1445A0);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1A1445E0);
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
        v12 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v3 + 1296));
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
        if ( v12 <= *(_DWORD *)(v3 + 48) )
          break;
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v3 + 1296), *(_DWORD *)(v3 + 48));
        v13 = ((v3 + 528) >> 3) + 2147450880;
        *(_DWORD *)v13 = 0;
        *(_DWORD *)(v13 + 4) = 0;
        *(_DWORD *)(v13 + 8) = 0;
        *(_DWORD *)(v13 + 12) = 0;
        *(_DWORD *)(v13 + 16) = 0;
        *(_DWORD *)(v13 + 20) = 0;
        *(_DWORD *)(v13 + 24) = 0;
        *(_WORD *)(v13 + 28) = 0;
        *(_BYTE *)(v13 + 30) = 0;
        data::CombatStatLogFilterExcelConfig::CombatStatLogFilterExcelConfig((data::CombatStatLogFilterExcelConfig *const)(v3 + 528));
        if ( row_ptr )
        {
          if ( data::CombatStatLogFilterExcelConfig::init(
                 (data::CombatStatLogFilterExcelConfig *const)(v3 + 528),
                 row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 848, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 848);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 848, &unk_1A144CE0);
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
              "./src/txt_data_auto/StatLogFilterExcelConfig.gen.cpp",
              "loadCombatStatLogFilterExcelConfig",
              247);
            v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 336),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v18 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v17, (const char (*)[2])"<");
            v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, __for_begin);
            v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v19,
                    (const char (*)[11])byte_1A1446E0);
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
                    (const char (*)[13])byte_1A144720);
            *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 400) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 81) & 7) >= *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 400, 32LL);
            }
            std::ostringstream::str(v3 + 400, v3 + 848);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, (const std::string *)(v3 + 400));
            std::string::~string((void *)(v3 + 400));
            *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
            *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            std::ostringstream::~ostringstream(v3 + 848);
            __asan_poison_stack_memory(v3 + 848, 376LL);
            v15 = 0;
          }
          else
          {
            v24 = std::move<data::CombatStatLogFilterExcelConfig &>((data::CombatStatLogFilterExcelConfig *)(v3 + 528));
            v27 = std::unordered_map<unsigned int,data::CombatStatLogFilterExcelConfig>::emplace<unsigned int &,data::CombatStatLogFilterExcelConfig>(
                    &this->combat_stat_log_filter_excel_config_map,
                    (unsigned int *)(v3 + 536),
                    v24,
                    v25,
                    v26);
            if ( !v27.second )
            {
              *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 464) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 17) & 7) >= *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 464, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 464),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_auto/StatLogFilterExcelConfig.gen.cpp",
                "loadCombatStatLogFilterExcelConfig",
                252);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 464),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v28, (const char (*)[9])byte_1A144D20);
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
            "./src/txt_data_auto/StatLogFilterExcelConfig.gen.cpp",
            "loadCombatStatLogFilterExcelConfig",
            240);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 272),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
          *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::CombatStatLogFilterExcelConfig::~CombatStatLogFilterExcelConfig((data::CombatStatLogFilterExcelConfig *const)(v3 + 528));
        v30 = ((v3 + 528) >> 3) + 2147450880;
        *(_DWORD *)v30 = -117901064;
        *(_DWORD *)(v30 + 4) = -117901064;
        *(_DWORD *)(v30 + 8) = -117901064;
        *(_DWORD *)(v30 + 12) = -117901064;
        *(_DWORD *)(v30 + 16) = -117901064;
        *(_DWORD *)(v30 + 20) = -117901064;
        *(_DWORD *)(v30 + 24) = -117901064;
        *(_WORD *)(v30 + 28) = -1800;
        *(_BYTE *)(v30 + 30) = -8;
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
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v3 + 1296));
    __asan_poison_stack_memory(v3 + 1296, 32880LL);
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF90C8) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 4304) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_10(v3, 34432LL, v37);
  }
  return v2;
};

// Line 261: range 000000000CBB0648-000000000CBB1677
int32_t __cdecl data::StatLogFilterExcelConfigMgrBase::loadOriHurtFilterExcelConfig(
        data::StatLogFilterExcelConfigMgrBase *const this,
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
  data::OriHurtFilterExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::OriHurtFilterExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::OriHurtFilterExcelConfig>,false,false>,bool> v27; // rax
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
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 5 r:276 64 4 9 <unknown> 80 32 9 paths:262 144 32 9 <unknown> 208 32 9 "
                        "<unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 96 8 d"
                        "ata:279 656 376 24 debug_message_stream:287 1104 32880 12 txt_file:270";
  *(_QWORD *)(v3 + 16) = data::StatLogFilterExcelConfigMgrBase::loadOriHurtFilterExcelConfig;
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
    "/txt/OriHurtFilterData.txt",
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
        "./src/txt_data_auto/StatLogFilterExcelConfig.gen.cpp",
        "loadOriHurtFilterExcelConfig",
        273);
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v3 + 208),
             (const char (*)[8])byte_1A1445A0);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1A1445E0);
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
        data::OriHurtFilterExcelConfig::OriHurtFilterExcelConfig((data::OriHurtFilterExcelConfig *const)(v3 + 528));
        if ( row_ptr )
        {
          if ( data::OriHurtFilterExcelConfig::init((data::OriHurtFilterExcelConfig *const)(v3 + 528), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 656, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 656);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 656, &unk_1A1472A0);
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
              "./src/txt_data_auto/StatLogFilterExcelConfig.gen.cpp",
              "loadOriHurtFilterExcelConfig",
              289);
            v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 336),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v18 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v17, (const char (*)[2])"<");
            v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, __for_begin);
            v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v19,
                    (const char (*)[11])byte_1A1446E0);
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
                    (const char (*)[13])byte_1A144720);
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
            v24 = std::move<data::OriHurtFilterExcelConfig &>((data::OriHurtFilterExcelConfig *)(v3 + 528));
            v27 = std::unordered_map<unsigned int,data::OriHurtFilterExcelConfig>::emplace<unsigned int &,data::OriHurtFilterExcelConfig>(
                    &this->ori_hurt_filter_excel_config_map,
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
                "./src/txt_data_auto/StatLogFilterExcelConfig.gen.cpp",
                "loadOriHurtFilterExcelConfig",
                294);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 464),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                      v28,
                      (const char (*)[15])byte_1A1472E0);
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
            "./src/txt_data_auto/StatLogFilterExcelConfig.gen.cpp",
            "loadOriHurtFilterExcelConfig",
            282);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 272),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
          *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::OriHurtFilterExcelConfig::~OriHurtFilterExcelConfig((data::OriHurtFilterExcelConfig *const)(v3 + 528));
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

// Line 303: range 000000000CBB1678-000000000CBB199C
int32_t __cdecl data::StatLogFilterExcelConfigMgrBase::loadConfig(
        data::StatLogFilterExcelConfigMgrBase *const this,
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
  *(_QWORD *)(v2 + 16) = data::StatLogFilterExcelConfigMgrBase::loadConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  if ( data::StatLogFilterExcelConfigMgrBase::loadCombatStatLogFilterExcelConfig(this, config) )
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
      "./src/txt_data_auto/StatLogFilterExcelConfig.gen.cpp",
      "loadConfig",
      306);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
      v5,
      (const char (*)[42])"loadCombatStatLogFilterExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else if ( data::StatLogFilterExcelConfigMgrBase::loadOriHurtFilterExcelConfig(this, config) )
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
      "./src/txt_data_auto/StatLogFilterExcelConfig.gen.cpp",
      "loadConfig",
      311);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      v7,
      (const char (*)[36])"loadOriHurtFilterExcelConfig failed");
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

// Line 318: range 000000000CBB199E-000000000CBB19B0
int32_t __cdecl data::StatLogFilterExcelConfigMgrBase::rewriteConfig(
        data::StatLogFilterExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 323: range 000000000CBB19B2-000000000CBB19C4
int32_t __cdecl data::StatLogFilterExcelConfigMgrBase::finalConfig(
        data::StatLogFilterExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 328: range 000000000CBB19C6-000000000CBB1B81
data::CombatStatLogFilterExcelConfig *__fastcall data::StatLogFilterExcelConfigMgrBase::findCombatStatLogFilterExcelConfig(
        data::StatLogFilterExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::CombatStatLogFilterExcelConfigMap *p_combat_stat_log_filter_excel_config_map; // rdx
  data::CombatStatLogFilterExcelConfigMap *v6; // rdx
  bool v7; // al
  data::CombatStatLogFilterExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:327 64 8 8 iter:329 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::StatLogFilterExcelConfigMgrBase::findCombatStatLogFilterExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_combat_stat_log_filter_excel_config_map = &this->combat_stat_log_filter_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::CombatStatLogFilterExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::CombatStatLogFilterExcelConfig>::find(
                                                                                                    p_combat_stat_log_filter_excel_config_map,
                                                                                                    (const std::unordered_map<unsigned int,data::CombatStatLogFilterExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->combat_stat_log_filter_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::CombatStatLogFilterExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::CombatStatLogFilterExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::CombatStatLogFilterExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CombatStatLogFilterExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CombatStatLogFilterExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::CombatStatLogFilterExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::CombatStatLogFilterExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 341: range 000000000CBB1B82-000000000CBB1D3D
const data::CombatStatLogFilterExcelConfig *__fastcall data::StatLogFilterExcelConfigMgrBase::findCombatStatLogFilterExcelConfig(
        const data::StatLogFilterExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::CombatStatLogFilterExcelConfigMap *p_combat_stat_log_filter_excel_config_map; // rdx
  data::CombatStatLogFilterExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::CombatStatLogFilterExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:340 64 8 8 iter:342 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::StatLogFilterExcelConfigMgrBase::findCombatStatLogFilterExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_combat_stat_log_filter_excel_config_map = &this->combat_stat_log_filter_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::CombatStatLogFilterExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::CombatStatLogFilterExcelConfig>::find(p_combat_stat_log_filter_excel_config_map, (const std::unordered_map<unsigned int,data::CombatStatLogFilterExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->combat_stat_log_filter_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::CombatStatLogFilterExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::CombatStatLogFilterExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::CombatStatLogFilterExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CombatStatLogFilterExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CombatStatLogFilterExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CombatStatLogFilterExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CombatStatLogFilterExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 354: range 000000000CBB1D3E-000000000CBB1EF9
data::OriHurtFilterExcelConfig *__fastcall data::StatLogFilterExcelConfigMgrBase::findOriHurtFilterExcelConfig(
        data::StatLogFilterExcelConfigMgrBase *const this,
        __int64 config_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::OriHurtFilterExcelConfigMap *p_ori_hurt_filter_excel_config_map; // rdx
  data::OriHurtFilterExcelConfigMap *v6; // rdx
  bool v7; // al
  data::OriHurtFilterExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 config_id:353 64 8 8 iter:355 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::StatLogFilterExcelConfigMgrBase::findOriHurtFilterExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = config_id;
  p_ori_hurt_filter_excel_config_map = &this->ori_hurt_filter_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, config_id);
  *(std::unordered_map<unsigned int,data::OriHurtFilterExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::OriHurtFilterExcelConfig>::find(
                                                                                              p_ori_hurt_filter_excel_config_map,
                                                                                              (const std::unordered_map<unsigned int,data::OriHurtFilterExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->ori_hurt_filter_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::OriHurtFilterExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::OriHurtFilterExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::OriHurtFilterExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::OriHurtFilterExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::OriHurtFilterExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::OriHurtFilterExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::OriHurtFilterExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 367: range 000000000CBB1EFA-000000000CBB20B5
const data::OriHurtFilterExcelConfig *__fastcall data::StatLogFilterExcelConfigMgrBase::findOriHurtFilterExcelConfig(
        const data::StatLogFilterExcelConfigMgrBase *const this,
        __int64 config_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::OriHurtFilterExcelConfigMap *p_ori_hurt_filter_excel_config_map; // rdx
  data::OriHurtFilterExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::OriHurtFilterExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 config_id:366 64 8 8 iter:368 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::StatLogFilterExcelConfigMgrBase::findOriHurtFilterExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = config_id;
  p_ori_hurt_filter_excel_config_map = &this->ori_hurt_filter_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, config_id);
  *(std::unordered_map<unsigned int,data::OriHurtFilterExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::OriHurtFilterExcelConfig>::find(
                                                                                                    p_ori_hurt_filter_excel_config_map,
                                                                                                    (const std::unordered_map<unsigned int,data::OriHurtFilterExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->ori_hurt_filter_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::OriHurtFilterExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::OriHurtFilterExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::OriHurtFilterExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::OriHurtFilterExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::OriHurtFilterExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::OriHurtFilterExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::OriHurtFilterExcelConfig>,false,false> *const)(v2 + 64))->second;
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

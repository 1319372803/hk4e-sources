// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/HuntingExcelConfig.gen.cpp

// Line 12: range 00000000144BCE28-00000000144BD19B
const char *__fastcall data::enumValToStr(data::HuntingOfferDifficultyType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::HuntingOfferDifficultyType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::HuntingOfferDifficultyType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
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
  map = data::getHuntingOfferDifficultyTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::HuntingOfferDifficultyType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::HuntingOfferDifficultyType,std::pair<std::string,std::string>>::find(map, (const std::map<data::HuntingOfferDifficultyType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::HuntingOfferDifficultyType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::HuntingOfferDifficultyType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::HuntingOfferDifficultyType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::HuntingOfferDifficultyType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
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
    result = "INVALID_HuntingOfferDifficultyType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::HuntingOfferDifficultyType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::HuntingOfferDifficultyType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 24: range 00000000144BD19C-00000000144BD754
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::HuntingOfferDifficultyType>,false,true>::pointer v10; // rax
  data::HuntingOfferDifficultyType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::HuntingOfferDifficultyType> *m; // [rsp+18h] [rbp-188h]
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
    m = data::getHuntingOfferDifficultyTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::HuntingOfferDifficultyType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::HuntingOfferDifficultyType>::find(m, (const std::unordered_map<std::string,data::HuntingOfferDifficultyType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::HuntingOfferDifficultyType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::HuntingOfferDifficultyType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::HuntingOfferDifficultyType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::HuntingOfferDifficultyType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::HuntingOfferDifficultyType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
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
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::HuntingOfferDifficultyType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::HuntingOfferDifficultyType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
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

// Line 45: range 00000000144BD755-00000000144BE1B0
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::HuntingOfferDifficultyType> *i; // r14
  unsigned __int64 v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::HuntingOfferDifficultyType>,false,true>::pointer v12; // rax
  data::HuntingOfferDifficultyType second; // ecx
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::HuntingOfferDifficultyType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::HuntingOfferDifficultyType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, e);
      *(_DWORD *)(v2 + 112) = 0;
      std::pair<std::string const,data::HuntingOfferDifficultyType>::pair<char const(&)[4],data::HuntingOfferDifficultyType,true>(
        (std::pair<const std::string,data::HuntingOfferDifficultyType> *const)(v2 + 448),
        (const char (*)[4])off_1AD8CEA0,
        (data::HuntingOfferDifficultyType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, off_1AD8CEA0);
      *(_DWORD *)(v2 + 128) = 1;
      std::pair<std::string const,data::HuntingOfferDifficultyType>::pair<char const(&)[4],data::HuntingOfferDifficultyType,true>(
        (std::pair<const std::string,data::HuntingOfferDifficultyType> *const)(v2 + 488),
        (const char (*)[4])off_1AD8CEE0,
        (data::HuntingOfferDifficultyType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, off_1AD8CEE0);
      *(_DWORD *)(v2 + 144) = 2;
      std::pair<std::string const,data::HuntingOfferDifficultyType>::pair<char const(&)[4],data::HuntingOfferDifficultyType,true>(
        (std::pair<const std::string,data::HuntingOfferDifficultyType> *const)(v2 + 528),
        (const char (*)[4])off_1AD8CF20,
        (data::HuntingOfferDifficultyType *)(v2 + 144));
      std::allocator<std::pair<std::string const,data::HuntingOfferDifficultyType>>::allocator((std::allocator<std::pair<const std::string,data::HuntingOfferDifficultyType> > *const)(v2 + 80));
      std::unordered_map<std::string,data::HuntingOfferDifficultyType>::unordered_map(
        &data::enumStrToVal(char const*,data::HuntingOfferDifficultyType &)::m,
        (std::initializer_list<std::pair<const std::string,data::HuntingOfferDifficultyType> >)__PAIR128__(
                                                                                                 3LL,
                                                                                                 v2 + 448),
        0LL,
        (const std::unordered_map<std::string,data::HuntingOfferDifficultyType>::hasher *)(v2 + 48),
        (const std::unordered_map<std::string,data::HuntingOfferDifficultyType>::key_equal *)(v2 + 64),
        (const std::unordered_map<std::string,data::HuntingOfferDifficultyType>::allocator_type *)(v2 + 80));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::HuntingOfferDifficultyType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::HuntingOfferDifficultyType>::~unordered_map,
        &data::enumStrToVal(char const*,data::HuntingOfferDifficultyType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::HuntingOfferDifficultyType>>::~allocator((std::allocator<std::pair<const std::string,data::HuntingOfferDifficultyType> > *const)(v2 + 80));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::HuntingOfferDifficultyType> *)(v2 + 568);
            i != (std::pair<const std::string,data::HuntingOfferDifficultyType> *)(v2 + 448);
            std::pair<std::string const,data::HuntingOfferDifficultyType>::~pair(i) )
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
    *(std::unordered_map<std::string,data::HuntingOfferDifficultyType>::iterator *)(v2 + 160) = std::unordered_map<std::string,data::HuntingOfferDifficultyType>::find(
                                                                                                  &data::enumStrToVal(char const*,data::HuntingOfferDifficultyType &)::m,
                                                                                                  (const std::unordered_map<std::string,data::HuntingOfferDifficultyType>::key_type *)(v2 + 320));
    std::string::~string((void *)(v2 + 320));
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 96);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, v2 + 320);
    *(std::unordered_map<std::string,data::HuntingOfferDifficultyType>::iterator *)(v2 + 192) = std::unordered_map<std::string,data::HuntingOfferDifficultyType>::end(&data::enumStrToVal(char const*,data::HuntingOfferDifficultyType &)::m);
    v9 = (char *)(v2 + 192);
    v10 = std::__detail::operator==<std::pair<std::string const,data::HuntingOfferDifficultyType>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::HuntingOfferDifficultyType>,true> *)(v2 + 160),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::HuntingOfferDifficultyType>,true> *)(v2 + 192));
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
        "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
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
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::HuntingOfferDifficultyType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::HuntingOfferDifficultyType>,false,true> *const)(v2 + 160));
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
      "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
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

// Line 71: range 00000000144BE1B1-00000000144BE1C7
const char *__cdecl data::getDescription(data::HuntingOfferDifficultyType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 76: range 00000000144BE1C8-00000000144BE37D
bool __cdecl data::isValidHuntingOfferDifficultyType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::HuntingOfferDifficultyType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::HuntingOfferDifficultyType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidHuntingOfferDifficultyType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getHuntingOfferDifficultyTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::HuntingOfferDifficultyType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::HuntingOfferDifficultyType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getHuntingOfferDifficultyTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::HuntingOfferDifficultyType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::HuntingOfferDifficultyType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::HuntingOfferDifficultyType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::HuntingOfferDifficultyType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::HuntingOfferDifficultyType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 82: range 00000000144BE37E-00000000144BE4DF
bool __cdecl data::isValidHuntingOfferDifficultyTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::HuntingOfferDifficultyType> *v5; // rcx
  const std::unordered_map<std::string,data::HuntingOfferDifficultyType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidHuntingOfferDifficultyTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getHuntingOfferDifficultyTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::HuntingOfferDifficultyType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::HuntingOfferDifficultyType>::end(v5);
  v6 = data::getHuntingOfferDifficultyTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::HuntingOfferDifficultyType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::HuntingOfferDifficultyType>::find(
                                                                                                     v6,
                                                                                                     name);
  result = std::__detail::operator!=<std::pair<std::string const,data::HuntingOfferDifficultyType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::HuntingOfferDifficultyType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::HuntingOfferDifficultyType>,true> *)(v2 + 64));
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

// Line 87: range 00000000144BE4E0-00000000144BE9A2
const std::unordered_map<std::string,data::HuntingOfferDifficultyType> *__cdecl data::getHuntingOfferDifficultyTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::HuntingOfferDifficultyType> *i; // r14
  const std::unordered_map<std::string,data::HuntingOfferDifficultyType> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getHuntingOfferDifficultyTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556927;
  v3[536862723] = -234556924;
  v3[536862727] = -218103808;
  v3[536862728] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getHuntingOfferDifficultyTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getHuntingOfferDifficultyTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string const,data::HuntingOfferDifficultyType>::pair<char const(&)[24],data::HuntingOfferDifficultyType,true>(
      (std::pair<const std::string,data::HuntingOfferDifficultyType> *const)(v1 + 128),
      (const char (*)[24])"HUNTING_DIFFICULTY_EASY",
      (data::HuntingOfferDifficultyType *)(v1 + 80));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, "HUNTING_DIFFICULTY_EASY");
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string const,data::HuntingOfferDifficultyType>::pair<char const(&)[26],data::HuntingOfferDifficultyType,true>(
      (std::pair<const std::string,data::HuntingOfferDifficultyType> *const)(v1 + 168),
      (const char (*)[26])"HUNTING_DIFFICULTY_MEDIUM",
      (data::HuntingOfferDifficultyType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "HUNTING_DIFFICULTY_MEDIUM");
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string const,data::HuntingOfferDifficultyType>::pair<char const(&)[24],data::HuntingOfferDifficultyType,true>(
      (std::pair<const std::string,data::HuntingOfferDifficultyType> *const)(v1 + 208),
      (const char (*)[24])"HUNTING_DIFFICULTY_HARD",
      (data::HuntingOfferDifficultyType *)(v1 + 112));
    std::allocator<std::pair<std::string const,data::HuntingOfferDifficultyType>>::allocator((std::allocator<std::pair<const std::string,data::HuntingOfferDifficultyType> > *const)(v1 + 64));
    std::unordered_map<std::string,data::HuntingOfferDifficultyType>::unordered_map(
      &data::getHuntingOfferDifficultyTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::HuntingOfferDifficultyType> >)__PAIR128__(3LL, v1 + 128),
      0LL,
      (const std::unordered_map<std::string,data::HuntingOfferDifficultyType>::hasher *)(v1 + 32),
      (const std::unordered_map<std::string,data::HuntingOfferDifficultyType>::key_equal *)(v1 + 48),
      (const std::unordered_map<std::string,data::HuntingOfferDifficultyType>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getHuntingOfferDifficultyTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::HuntingOfferDifficultyType>::~unordered_map,
      &data::getHuntingOfferDifficultyTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::HuntingOfferDifficultyType>>::~allocator((std::allocator<std::pair<const std::string,data::HuntingOfferDifficultyType> > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::HuntingOfferDifficultyType> *)(v1 + 248);
          i != (std::pair<const std::string,data::HuntingOfferDifficultyType> *)(v1 + 128);
          std::pair<std::string const,data::HuntingOfferDifficultyType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getHuntingOfferDifficultyTypeNameMap[abi:cxx11](void)::m;
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

// Line 98: range 00000000144BE9A3-00000000144BF0A1
const std::map<data::HuntingOfferDifficultyType,std::pair<std::string,std::string >> *__cdecl data::getHuntingOfferDifficultyTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::HuntingOfferDifficultyType,std::pair<std::string,std::string > > *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getHuntingOfferDifficultyTypeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getHuntingOfferDifficultyTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getHuntingOfferDifficultyTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[4],char const(&)[24],true>(
      (std::pair<std::string,std::string > *const)(v1 + 128),
      (const char (*)[4])off_1AD8CEA0,
      (const char (*)[24])"HUNTING_DIFFICULTY_EASY");
    std::pair<data::HuntingOfferDifficultyType const,std::pair<std::string,std::string>>::pair<data::HuntingOfferDifficultyType,true>(
      (std::pair<const data::HuntingOfferDifficultyType,std::pair<std::string,std::string > > *const)(v1 + 416),
      (data::HuntingOfferDifficultyType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[4],char const(&)[26],true>(
      (std::pair<std::string,std::string > *const)(v1 + 224),
      (const char (*)[4])off_1AD8CEE0,
      (const char (*)[26])"HUNTING_DIFFICULTY_MEDIUM");
    std::pair<data::HuntingOfferDifficultyType const,std::pair<std::string,std::string>>::pair<data::HuntingOfferDifficultyType,true>(
      (std::pair<const data::HuntingOfferDifficultyType,std::pair<std::string,std::string > > *const)(v1 + 488),
      (data::HuntingOfferDifficultyType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 224));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[4],char const(&)[24],true>(
      (std::pair<std::string,std::string > *const)(v1 + 320),
      (const char (*)[4])off_1AD8CF20,
      (const char (*)[24])"HUNTING_DIFFICULTY_HARD");
    std::pair<data::HuntingOfferDifficultyType const,std::pair<std::string,std::string>>::pair<data::HuntingOfferDifficultyType,true>(
      (std::pair<const data::HuntingOfferDifficultyType,std::pair<std::string,std::string > > *const)(v1 + 560),
      (data::HuntingOfferDifficultyType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 320));
    std::allocator<std::pair<data::HuntingOfferDifficultyType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::HuntingOfferDifficultyType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    std::map<data::HuntingOfferDifficultyType,std::pair<std::string,std::string>>::map(
      &data::getHuntingOfferDifficultyTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::HuntingOfferDifficultyType,std::pair<std::string,std::string > > >)__PAIR128__(3LL, v1 + 416),
      (const std::less<data::HuntingOfferDifficultyType> *)(v1 + 48),
      (const std::map<data::HuntingOfferDifficultyType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getHuntingOfferDifficultyTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::HuntingOfferDifficultyType,std::pair<std::string,std::string>>::~map,
      &data::getHuntingOfferDifficultyTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::HuntingOfferDifficultyType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::HuntingOfferDifficultyType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::HuntingOfferDifficultyType,std::pair<std::string,std::string > > *)(v1 + 632);
          i != (std::pair<const data::HuntingOfferDifficultyType,std::pair<std::string,std::string > > *)(v1 + 416);
          std::pair<data::HuntingOfferDifficultyType const,std::pair<std::string,std::string>>::~pair(i) )
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
  return &data::getHuntingOfferDifficultyTypeEnumMap[abi:cxx11](void)::m;
};

// Line 109: range 00000000144BF0A2-00000000144BF415
const char *__fastcall data::enumValToStr(data::HuntingMonsterCreatePosType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::HuntingMonsterCreatePosType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::HuntingMonsterCreatePosType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
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
  map = data::getHuntingMonsterCreatePosTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::HuntingMonsterCreatePosType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::HuntingMonsterCreatePosType,std::pair<std::string,std::string>>::find(map, (const std::map<data::HuntingMonsterCreatePosType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::HuntingMonsterCreatePosType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::HuntingMonsterCreatePosType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::HuntingMonsterCreatePosType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::HuntingMonsterCreatePosType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
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
    result = "INVALID_HuntingMonsterCreatePosType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::HuntingMonsterCreatePosType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::HuntingMonsterCreatePosType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 121: range 00000000144BF416-00000000144BF9CE
__int64 __fastcall data::enumNameToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  const char *v6; // rsi
  char *v7; // rsi
  bool Pos; // al
  common::milog::MiLogStream *v9; // rax
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::HuntingMonsterCreatePosType>,false,true>::pointer v10; // rax
  data::HuntingMonsterCreatePosType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::HuntingMonsterCreatePosType> *m; // [rsp+18h] [rbp-188h]
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
    m = data::getHuntingMonsterCreatePosTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::HuntingMonsterCreatePosType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::HuntingMonsterCreatePosType>::find(m, (const std::unordered_map<std::string,data::HuntingMonsterCreatePosType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::HuntingMonsterCreatePosType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::HuntingMonsterCreatePosType>::end(m);
    v7 = (char *)(v2 + 96);
    Pos = std::__detail::operator==<std::pair<std::string const,data::HuntingMonsterCreatePosType>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::HuntingMonsterCreatePosType>,true> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::HuntingMonsterCreatePosType>,true> *)(v2 + 96));
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( Pos )
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
        "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
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
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::HuntingMonsterCreatePosType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::HuntingMonsterCreatePosType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
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

// Line 142: range 00000000144BF9CF-00000000144C042A
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::HuntingMonsterCreatePosType> *i; // r14
  unsigned __int64 v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool Pos; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::HuntingMonsterCreatePosType>,false,true>::pointer v12; // rax
  data::HuntingMonsterCreatePosType second; // ecx
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
                        " <unknown> 144 4 9 <unknown> 160 8 6 it:156 192 8 9 <unknown> 224 8 5 s:141 256 32 9 <unknown> 3"
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::HuntingMonsterCreatePosType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::HuntingMonsterCreatePosType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, e);
      *(_DWORD *)(v2 + 112) = 1;
      std::pair<std::string const,data::HuntingMonsterCreatePosType>::pair<char const(&)[7],data::HuntingMonsterCreatePosType,true>(
        (std::pair<const std::string,data::HuntingMonsterCreatePosType> *const)(v2 + 448),
        (const char (*)[7])byte_1AD8D260,
        (data::HuntingMonsterCreatePosType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1AD8D260);
      *(_DWORD *)(v2 + 128) = 2;
      std::pair<std::string const,data::HuntingMonsterCreatePosType>::pair<char const(&)[7],data::HuntingMonsterCreatePosType,true>(
        (std::pair<const std::string,data::HuntingMonsterCreatePosType> *const)(v2 + 488),
        (const char (*)[7])byte_1AD8D2A0,
        (data::HuntingMonsterCreatePosType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, byte_1AD8D2A0);
      *(_DWORD *)(v2 + 144) = 3;
      std::pair<std::string const,data::HuntingMonsterCreatePosType>::pair<char const(&)[7],data::HuntingMonsterCreatePosType,true>(
        (std::pair<const std::string,data::HuntingMonsterCreatePosType> *const)(v2 + 528),
        (const char (*)[7])byte_1AD8D2E0,
        (data::HuntingMonsterCreatePosType *)(v2 + 144));
      std::allocator<std::pair<std::string const,data::HuntingMonsterCreatePosType>>::allocator((std::allocator<std::pair<const std::string,data::HuntingMonsterCreatePosType> > *const)(v2 + 80));
      std::unordered_map<std::string,data::HuntingMonsterCreatePosType>::unordered_map(
        &data::enumStrToVal(char const*,data::HuntingMonsterCreatePosType &)::m,
        (std::initializer_list<std::pair<const std::string,data::HuntingMonsterCreatePosType> >)__PAIR128__(
                                                                                                  3LL,
                                                                                                  v2 + 448),
        0LL,
        (const std::unordered_map<std::string,data::HuntingMonsterCreatePosType>::hasher *)(v2 + 48),
        (const std::unordered_map<std::string,data::HuntingMonsterCreatePosType>::key_equal *)(v2 + 64),
        (const std::unordered_map<std::string,data::HuntingMonsterCreatePosType>::allocator_type *)(v2 + 80));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::HuntingMonsterCreatePosType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::HuntingMonsterCreatePosType>::~unordered_map,
        &data::enumStrToVal(char const*,data::HuntingMonsterCreatePosType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::HuntingMonsterCreatePosType>>::~allocator((std::allocator<std::pair<const std::string,data::HuntingMonsterCreatePosType> > *const)(v2 + 80));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::HuntingMonsterCreatePosType> *)(v2 + 568);
            i != (std::pair<const std::string,data::HuntingMonsterCreatePosType> *)(v2 + 448);
            std::pair<std::string const,data::HuntingMonsterCreatePosType>::~pair(i) )
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
    *(std::unordered_map<std::string,data::HuntingMonsterCreatePosType>::iterator *)(v2 + 160) = std::unordered_map<std::string,data::HuntingMonsterCreatePosType>::find(
                                                                                                   &data::enumStrToVal(char const*,data::HuntingMonsterCreatePosType &)::m,
                                                                                                   (const std::unordered_map<std::string,data::HuntingMonsterCreatePosType>::key_type *)(v2 + 320));
    std::string::~string((void *)(v2 + 320));
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 96);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, v2 + 320);
    *(std::unordered_map<std::string,data::HuntingMonsterCreatePosType>::iterator *)(v2 + 192) = std::unordered_map<std::string,data::HuntingMonsterCreatePosType>::end(&data::enumStrToVal(char const*,data::HuntingMonsterCreatePosType &)::m);
    v9 = (char *)(v2 + 192);
    Pos = std::__detail::operator==<std::pair<std::string const,data::HuntingMonsterCreatePosType>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::HuntingMonsterCreatePosType>,true> *)(v2 + 160),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::HuntingMonsterCreatePosType>,true> *)(v2 + 192));
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( Pos )
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
        "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
        "enumStrToVal",
        159);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 384),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)(v2 + 224));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::HuntingMonsterCreatePosType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::HuntingMonsterCreatePosType>,false,true> *const)(v2 + 160));
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
      "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
      "enumStrToVal",
      145);
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

// Line 168: range 00000000144C042B-00000000144C0441
const char *__cdecl data::getDescription(data::HuntingMonsterCreatePosType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 173: range 00000000144C0442-00000000144C05F7
bool __cdecl data::isValidHuntingMonsterCreatePosType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::HuntingMonsterCreatePosType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::HuntingMonsterCreatePosType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:174 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidHuntingMonsterCreatePosType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getHuntingMonsterCreatePosTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::HuntingMonsterCreatePosType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::HuntingMonsterCreatePosType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getHuntingMonsterCreatePosTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::HuntingMonsterCreatePosType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::HuntingMonsterCreatePosType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::HuntingMonsterCreatePosType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::HuntingMonsterCreatePosType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::HuntingMonsterCreatePosType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 179: range 00000000144C05F8-00000000144C0759
bool __cdecl data::isValidHuntingMonsterCreatePosTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::HuntingMonsterCreatePosType> *v5; // rcx
  const std::unordered_map<std::string,data::HuntingMonsterCreatePosType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidHuntingMonsterCreatePosTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getHuntingMonsterCreatePosTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::HuntingMonsterCreatePosType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::HuntingMonsterCreatePosType>::end(v5);
  v6 = data::getHuntingMonsterCreatePosTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::HuntingMonsterCreatePosType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::HuntingMonsterCreatePosType>::find(v6, name);
  result = std::__detail::operator!=<std::pair<std::string const,data::HuntingMonsterCreatePosType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::HuntingMonsterCreatePosType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::HuntingMonsterCreatePosType>,true> *)(v2 + 64));
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

// Line 184: range 00000000144C075A-00000000144C0CB9
const std::unordered_map<std::string,data::HuntingMonsterCreatePosType> *__cdecl data::getHuntingMonsterCreatePosTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::HuntingMonsterCreatePosType> *i; // r14
  const std::unordered_map<std::string,data::HuntingMonsterCreatePosType> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getHuntingMonsterCreatePosTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -234753535;
  v3[536862723] = -234556924;
  v3[536862724] = -234556924;
  v3[536862730] = -202116109;
  v3[536862731] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getHuntingMonsterCreatePosTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getHuntingMonsterCreatePosTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v0);
    *(_DWORD *)(v1 + 96) = 0;
    std::pair<std::string const,data::HuntingMonsterCreatePosType>::pair<char const(&)[17],data::HuntingMonsterCreatePosType,true>(
      (std::pair<const std::string,data::HuntingMonsterCreatePosType> *const)(v1 + 160),
      (const char (*)[17])"HUNTING_POS_NONE",
      (data::HuntingMonsterCreatePosType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "HUNTING_POS_NONE");
    *(_DWORD *)(v1 + 112) = 1;
    std::pair<std::string const,data::HuntingMonsterCreatePosType>::pair<char const(&)[19],data::HuntingMonsterCreatePosType,true>(
      (std::pair<const std::string,data::HuntingMonsterCreatePosType> *const)(v1 + 200),
      (const char (*)[19])"HUNTING_POS_GROUND",
      (data::HuntingMonsterCreatePosType *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, "HUNTING_POS_GROUND");
    *(_DWORD *)(v1 + 128) = 2;
    std::pair<std::string const,data::HuntingMonsterCreatePosType>::pair<char const(&)[24],data::HuntingMonsterCreatePosType,true>(
      (std::pair<const std::string,data::HuntingMonsterCreatePosType> *const)(v1 + 240),
      (const char (*)[24])"HUNTING_POS_SHOAL_WATER",
      (data::HuntingMonsterCreatePosType *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, "HUNTING_POS_SHOAL_WATER");
    *(_DWORD *)(v1 + 144) = 3;
    std::pair<std::string const,data::HuntingMonsterCreatePosType>::pair<char const(&)[26],data::HuntingMonsterCreatePosType,true>(
      (std::pair<const std::string,data::HuntingMonsterCreatePosType> *const)(v1 + 280),
      (const char (*)[26])"HUNTING_POS_SNOW_MOUNTAIN",
      (data::HuntingMonsterCreatePosType *)(v1 + 144));
    std::allocator<std::pair<std::string const,data::HuntingMonsterCreatePosType>>::allocator((std::allocator<std::pair<const std::string,data::HuntingMonsterCreatePosType> > *const)(v1 + 80));
    std::unordered_map<std::string,data::HuntingMonsterCreatePosType>::unordered_map(
      &data::getHuntingMonsterCreatePosTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::HuntingMonsterCreatePosType> >)__PAIR128__(4LL, v1 + 160),
      0LL,
      (const std::unordered_map<std::string,data::HuntingMonsterCreatePosType>::hasher *)(v1 + 48),
      (const std::unordered_map<std::string,data::HuntingMonsterCreatePosType>::key_equal *)(v1 + 64),
      (const std::unordered_map<std::string,data::HuntingMonsterCreatePosType>::allocator_type *)(v1 + 80));
    __cxa_guard_release(&`guard variable for'data::getHuntingMonsterCreatePosTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::HuntingMonsterCreatePosType>::~unordered_map,
      &data::getHuntingMonsterCreatePosTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::HuntingMonsterCreatePosType>>::~allocator((std::allocator<std::pair<const std::string,data::HuntingMonsterCreatePosType> > *const)(v1 + 80));
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::HuntingMonsterCreatePosType> *)(v1 + 320);
          i != (std::pair<const std::string,data::HuntingMonsterCreatePosType> *)(v1 + 160);
          std::pair<std::string const,data::HuntingMonsterCreatePosType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getHuntingMonsterCreatePosTypeNameMap[abi:cxx11](void)::m;
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

// Line 196: range 00000000144C0CBA-00000000144C148A
const std::map<data::HuntingMonsterCreatePosType,std::pair<std::string,std::string >> *__cdecl data::getHuntingMonsterCreatePosTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::HuntingMonsterCreatePosType,std::pair<std::string,std::string > > *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getHuntingMonsterCreatePosTypeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getHuntingMonsterCreatePosTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getHuntingMonsterCreatePosTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 64, v0);
    *(_DWORD *)(v1 + 64) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[17],true>(
      (std::pair<std::string,std::string > *const)(v1 + 128),
      (const char (*)[1])byte_1ACFAB80,
      (const char (*)[17])"HUNTING_POS_NONE");
    std::pair<data::HuntingMonsterCreatePosType const,std::pair<std::string,std::string>>::pair<data::HuntingMonsterCreatePosType,true>(
      (std::pair<const data::HuntingMonsterCreatePosType,std::pair<std::string,std::string > > *const)(v1 + 512),
      (data::HuntingMonsterCreatePosType *)(v1 + 64),
      (const std::pair<std::string,std::string > *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v1 + 64);
    *(_DWORD *)(v1 + 80) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[19],true>(
      (std::pair<std::string,std::string > *const)(v1 + 224),
      (const char (*)[7])byte_1AD8D260,
      (const char (*)[19])"HUNTING_POS_GROUND");
    std::pair<data::HuntingMonsterCreatePosType const,std::pair<std::string,std::string>>::pair<data::HuntingMonsterCreatePosType,true>(
      (std::pair<const data::HuntingMonsterCreatePosType,std::pair<std::string,std::string > > *const)(v1 + 584),
      (data::HuntingMonsterCreatePosType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 224));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[24],true>(
      (std::pair<std::string,std::string > *const)(v1 + 320),
      (const char (*)[7])byte_1AD8D2A0,
      (const char (*)[24])"HUNTING_POS_SHOAL_WATER");
    std::pair<data::HuntingMonsterCreatePosType const,std::pair<std::string,std::string>>::pair<data::HuntingMonsterCreatePosType,true>(
      (std::pair<const data::HuntingMonsterCreatePosType,std::pair<std::string,std::string > > *const)(v1 + 656),
      (data::HuntingMonsterCreatePosType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 320));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 3;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[26],true>(
      (std::pair<std::string,std::string > *const)(v1 + 416),
      (const char (*)[7])byte_1AD8D2E0,
      (const char (*)[26])"HUNTING_POS_SNOW_MOUNTAIN");
    std::pair<data::HuntingMonsterCreatePosType const,std::pair<std::string,std::string>>::pair<data::HuntingMonsterCreatePosType,true>(
      (std::pair<const data::HuntingMonsterCreatePosType,std::pair<std::string,std::string > > *const)(v1 + 728),
      (data::HuntingMonsterCreatePosType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 416));
    std::allocator<std::pair<data::HuntingMonsterCreatePosType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::HuntingMonsterCreatePosType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    std::map<data::HuntingMonsterCreatePosType,std::pair<std::string,std::string>>::map(
      &data::getHuntingMonsterCreatePosTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::HuntingMonsterCreatePosType,std::pair<std::string,std::string > > >)__PAIR128__(4LL, v1 + 512),
      (const std::less<data::HuntingMonsterCreatePosType> *)(v1 + 32),
      (const std::map<data::HuntingMonsterCreatePosType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 48));
    __cxa_guard_release(&`guard variable for'data::getHuntingMonsterCreatePosTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::HuntingMonsterCreatePosType,std::pair<std::string,std::string>>::~map,
      &data::getHuntingMonsterCreatePosTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::HuntingMonsterCreatePosType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::HuntingMonsterCreatePosType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::HuntingMonsterCreatePosType,std::pair<std::string,std::string > > *)(v1 + 800);
          i != (std::pair<const data::HuntingMonsterCreatePosType,std::pair<std::string,std::string > > *)(v1 + 512);
          std::pair<data::HuntingMonsterCreatePosType const,std::pair<std::string,std::string>>::~pair(i) )
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
  return &data::getHuntingMonsterCreatePosTypeEnumMap[abi:cxx11](void)::m;
};

// Line 208: range 00000000144C148B-00000000144C17FE
const char *__fastcall data::enumValToStr(data::HuntingCluePointType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::HuntingCluePointType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::HuntingCluePointType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 5 e:207 64 8 8 iter:210 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getHuntingCluePointTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::HuntingCluePointType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::HuntingCluePointType,std::pair<std::string,std::string>>::find(map, (const std::map<data::HuntingCluePointType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::HuntingCluePointType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::HuntingCluePointType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::HuntingCluePointType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::HuntingCluePointType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
      "enumValToStr",
      213);
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
    result = "INVALID_HuntingCluePointType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::HuntingCluePointType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::HuntingCluePointType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 220: range 00000000144C17FF-00000000144C1DB7
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::HuntingCluePointType>,false,true>::pointer v10; // rax
  data::HuntingCluePointType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::HuntingCluePointType> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:229 96 8 9 <unknown> 128 8 5 s:219 160 32 9 <unknown> 224 32 9 <unk"
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
    m = data::getHuntingCluePointTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::HuntingCluePointType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::HuntingCluePointType>::find(
                                                                                                 m,
                                                                                                 (const std::unordered_map<std::string,data::HuntingCluePointType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::HuntingCluePointType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::HuntingCluePointType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::HuntingCluePointType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::HuntingCluePointType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::HuntingCluePointType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
        "enumNameToVal",
        232);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::HuntingCluePointType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::HuntingCluePointType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
      "enumNameToVal",
      223);
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

// Line 241: range 00000000144C1DB8-00000000144C28B6
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::HuntingCluePointType> *i; // r14
  _DWORD *v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::HuntingCluePointType>,false,true>::pointer v12; // rax
  data::HuntingCluePointType second; // ecx
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
                        "<unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 8 6 it:256 192 8 9 <unknown> 224 8 5 s:240 256"
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::HuntingCluePointType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::HuntingCluePointType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, e);
      *(_DWORD *)(v2 + 96) = 0;
      std::pair<std::string const,data::HuntingCluePointType>::pair<char const(&)[7],data::HuntingCluePointType,true>(
        (std::pair<const std::string,data::HuntingCluePointType> *const)(v2 + 448),
        (const char (*)[7])byte_1AD8D6A0,
        (data::HuntingCluePointType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, byte_1AD8D6A0);
      *(_DWORD *)(v2 + 112) = 1;
      std::pair<std::string const,data::HuntingCluePointType>::pair<char const(&)[7],data::HuntingCluePointType,true>(
        (std::pair<const std::string,data::HuntingCluePointType> *const)(v2 + 488),
        (const char (*)[7])byte_1AD8D6E0,
        (data::HuntingCluePointType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1AD8D6E0);
      *(_DWORD *)(v2 + 128) = 2;
      std::pair<std::string const,data::HuntingCluePointType>::pair<char const(&)[10],data::HuntingCluePointType,true>(
        (std::pair<const std::string,data::HuntingCluePointType> *const)(v2 + 528),
        (const char (*)[10])byte_1AD8D720,
        (data::HuntingCluePointType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, byte_1AD8D720);
      *(_DWORD *)(v2 + 144) = 3;
      std::pair<std::string const,data::HuntingCluePointType>::pair<char const(&)[7],data::HuntingCluePointType,true>(
        (std::pair<const std::string,data::HuntingCluePointType> *const)(v2 + 568),
        (const char (*)[7])byte_1AD8D760,
        (data::HuntingCluePointType *)(v2 + 144));
      std::allocator<std::pair<std::string const,data::HuntingCluePointType>>::allocator((std::allocator<std::pair<const std::string,data::HuntingCluePointType> > *const)(v2 + 64));
      std::unordered_map<std::string,data::HuntingCluePointType>::unordered_map(
        &data::enumStrToVal(char const*,data::HuntingCluePointType &)::m,
        (std::initializer_list<std::pair<const std::string,data::HuntingCluePointType> >)__PAIR128__(4LL, v2 + 448),
        0LL,
        (const std::unordered_map<std::string,data::HuntingCluePointType>::hasher *)(v2 + 32),
        (const std::unordered_map<std::string,data::HuntingCluePointType>::key_equal *)(v2 + 48),
        (const std::unordered_map<std::string,data::HuntingCluePointType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::HuntingCluePointType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::HuntingCluePointType>::~unordered_map,
        &data::enumStrToVal(char const*,data::HuntingCluePointType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::HuntingCluePointType>>::~allocator((std::allocator<std::pair<const std::string,data::HuntingCluePointType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::HuntingCluePointType> *)(v2 + 608);
            i != (std::pair<const std::string,data::HuntingCluePointType> *)(v2 + 448);
            std::pair<std::string const,data::HuntingCluePointType>::~pair(i) )
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
    *(std::unordered_map<std::string,data::HuntingCluePointType>::iterator *)(v2 + 160) = std::unordered_map<std::string,data::HuntingCluePointType>::find(
                                                                                            &data::enumStrToVal(char const*,data::HuntingCluePointType &)::m,
                                                                                            (const std::unordered_map<std::string,data::HuntingCluePointType>::key_type *)(v2 + 320));
    std::string::~string((void *)(v2 + 320));
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 80);
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, v2 + 320);
    *(std::unordered_map<std::string,data::HuntingCluePointType>::iterator *)(v2 + 192) = std::unordered_map<std::string,data::HuntingCluePointType>::end(&data::enumStrToVal(char const*,data::HuntingCluePointType &)::m);
    v9 = (char *)(v2 + 192);
    v10 = std::__detail::operator==<std::pair<std::string const,data::HuntingCluePointType>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::HuntingCluePointType>,true> *)(v2 + 160),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::HuntingCluePointType>,true> *)(v2 + 192));
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
        "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
        "enumStrToVal",
        259);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 384),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)(v2 + 224));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::HuntingCluePointType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::HuntingCluePointType>,false,true> *const)(v2 + 160));
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
      "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
      "enumStrToVal",
      244);
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

// Line 268: range 00000000144C28B7-00000000144C28CD
const char *__cdecl data::getDescription(data::HuntingCluePointType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 273: range 00000000144C28CE-00000000144C2A83
bool __cdecl data::isValidHuntingCluePointType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::HuntingCluePointType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::HuntingCluePointType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:274 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidHuntingCluePointType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getHuntingCluePointTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::HuntingCluePointType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::HuntingCluePointType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getHuntingCluePointTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::HuntingCluePointType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::HuntingCluePointType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::HuntingCluePointType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::HuntingCluePointType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::HuntingCluePointType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 279: range 00000000144C2A84-00000000144C2BE5
bool __cdecl data::isValidHuntingCluePointTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::HuntingCluePointType> *v5; // rcx
  const std::unordered_map<std::string,data::HuntingCluePointType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidHuntingCluePointTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getHuntingCluePointTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::HuntingCluePointType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::HuntingCluePointType>::end(v5);
  v6 = data::getHuntingCluePointTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::HuntingCluePointType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::HuntingCluePointType>::find(
                                                                                               v6,
                                                                                               name);
  result = std::__detail::operator!=<std::pair<std::string const,data::HuntingCluePointType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::HuntingCluePointType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::HuntingCluePointType>,true> *)(v2 + 64));
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

// Line 284: range 00000000144C2BE6-00000000144C3145
const std::unordered_map<std::string,data::HuntingCluePointType> *__cdecl data::getHuntingCluePointTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::HuntingCluePointType> *i; // r14
  const std::unordered_map<std::string,data::HuntingCluePointType> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getHuntingCluePointTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -234753535;
  v3[536862723] = -234556924;
  v3[536862724] = -234556924;
  v3[536862730] = -202116109;
  v3[536862731] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getHuntingCluePointTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getHuntingCluePointTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v0);
    *(_DWORD *)(v1 + 96) = 0;
    std::pair<std::string const,data::HuntingCluePointType>::pair<char const(&)[21],data::HuntingCluePointType,true>(
      (std::pair<const std::string,data::HuntingCluePointType> *const)(v1 + 160),
      (const char (*)[21])"HUNTING_CLUE_ITERACT",
      (data::HuntingCluePointType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "HUNTING_CLUE_ITERACT");
    *(_DWORD *)(v1 + 112) = 1;
    std::pair<std::string const,data::HuntingCluePointType>::pair<char const(&)[21],data::HuntingCluePointType,true>(
      (std::pair<const std::string,data::HuntingCluePointType> *const)(v1 + 200),
      (const char (*)[21])"HUNTING_CLUE_MONSTER",
      (data::HuntingCluePointType *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, "HUNTING_CLUE_MONSTER");
    *(_DWORD *)(v1 + 128) = 2;
    std::pair<std::string const,data::HuntingCluePointType>::pair<char const(&)[20],data::HuntingCluePointType,true>(
      (std::pair<const std::string,data::HuntingCluePointType> *const)(v1 + 240),
      (const char (*)[20])"HUNTING_CLUE_GATHER",
      (data::HuntingCluePointType *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, "HUNTING_CLUE_GATHER");
    *(_DWORD *)(v1 + 144) = 3;
    std::pair<std::string const,data::HuntingCluePointType>::pair<char const(&)[19],data::HuntingCluePointType,true>(
      (std::pair<const std::string,data::HuntingCluePointType> *const)(v1 + 280),
      (const char (*)[19])"HUNTING_CLUE_FINAL",
      (data::HuntingCluePointType *)(v1 + 144));
    std::allocator<std::pair<std::string const,data::HuntingCluePointType>>::allocator((std::allocator<std::pair<const std::string,data::HuntingCluePointType> > *const)(v1 + 80));
    std::unordered_map<std::string,data::HuntingCluePointType>::unordered_map(
      &data::getHuntingCluePointTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::HuntingCluePointType> >)__PAIR128__(4LL, v1 + 160),
      0LL,
      (const std::unordered_map<std::string,data::HuntingCluePointType>::hasher *)(v1 + 48),
      (const std::unordered_map<std::string,data::HuntingCluePointType>::key_equal *)(v1 + 64),
      (const std::unordered_map<std::string,data::HuntingCluePointType>::allocator_type *)(v1 + 80));
    __cxa_guard_release(&`guard variable for'data::getHuntingCluePointTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::HuntingCluePointType>::~unordered_map,
      &data::getHuntingCluePointTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::HuntingCluePointType>>::~allocator((std::allocator<std::pair<const std::string,data::HuntingCluePointType> > *const)(v1 + 80));
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::HuntingCluePointType> *)(v1 + 320);
          i != (std::pair<const std::string,data::HuntingCluePointType> *)(v1 + 160);
          std::pair<std::string const,data::HuntingCluePointType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getHuntingCluePointTypeNameMap[abi:cxx11](void)::m;
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

// Line 296: range 00000000144C3146-00000000144C3916
const std::map<data::HuntingCluePointType,std::pair<std::string,std::string >> *__cdecl data::getHuntingCluePointTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::HuntingCluePointType,std::pair<std::string,std::string > > *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getHuntingCluePointTypeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getHuntingCluePointTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getHuntingCluePointTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 64, v0);
    *(_DWORD *)(v1 + 64) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 128),
      (const char (*)[7])byte_1AD8D6A0,
      (const char (*)[21])"HUNTING_CLUE_ITERACT");
    std::pair<data::HuntingCluePointType const,std::pair<std::string,std::string>>::pair<data::HuntingCluePointType,true>(
      (std::pair<const data::HuntingCluePointType,std::pair<std::string,std::string > > *const)(v1 + 512),
      (data::HuntingCluePointType *)(v1 + 64),
      (const std::pair<std::string,std::string > *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v1 + 64);
    *(_DWORD *)(v1 + 80) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 224),
      (const char (*)[7])byte_1AD8D6E0,
      (const char (*)[21])"HUNTING_CLUE_MONSTER");
    std::pair<data::HuntingCluePointType const,std::pair<std::string,std::string>>::pair<data::HuntingCluePointType,true>(
      (std::pair<const data::HuntingCluePointType,std::pair<std::string,std::string > > *const)(v1 + 584),
      (data::HuntingCluePointType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 224));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[10],char const(&)[20],true>(
      (std::pair<std::string,std::string > *const)(v1 + 320),
      (const char (*)[10])byte_1AD8D720,
      (const char (*)[20])"HUNTING_CLUE_GATHER");
    std::pair<data::HuntingCluePointType const,std::pair<std::string,std::string>>::pair<data::HuntingCluePointType,true>(
      (std::pair<const data::HuntingCluePointType,std::pair<std::string,std::string > > *const)(v1 + 656),
      (data::HuntingCluePointType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 320));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 3;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[19],true>(
      (std::pair<std::string,std::string > *const)(v1 + 416),
      (const char (*)[7])byte_1AD8D760,
      (const char (*)[19])"HUNTING_CLUE_FINAL");
    std::pair<data::HuntingCluePointType const,std::pair<std::string,std::string>>::pair<data::HuntingCluePointType,true>(
      (std::pair<const data::HuntingCluePointType,std::pair<std::string,std::string > > *const)(v1 + 728),
      (data::HuntingCluePointType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 416));
    std::allocator<std::pair<data::HuntingCluePointType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::HuntingCluePointType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    std::map<data::HuntingCluePointType,std::pair<std::string,std::string>>::map(
      &data::getHuntingCluePointTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::HuntingCluePointType,std::pair<std::string,std::string > > >)__PAIR128__(4LL, v1 + 512),
      (const std::less<data::HuntingCluePointType> *)(v1 + 32),
      (const std::map<data::HuntingCluePointType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 48));
    __cxa_guard_release(&`guard variable for'data::getHuntingCluePointTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::HuntingCluePointType,std::pair<std::string,std::string>>::~map,
      &data::getHuntingCluePointTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::HuntingCluePointType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::HuntingCluePointType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::HuntingCluePointType,std::pair<std::string,std::string > > *)(v1 + 800);
          i != (std::pair<const data::HuntingCluePointType,std::pair<std::string,std::string > > *)(v1 + 512);
          std::pair<data::HuntingCluePointType const,std::pair<std::string,std::string>>::~pair(i) )
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
  return &data::getHuntingCluePointTypeEnumMap[abi:cxx11](void)::m;
};

// Line 308: range 00000000144C3917-00000000144C3C8A
const char *__fastcall data::enumValToStr(data::HuntingMonsterGroupType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::HuntingMonsterGroupType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::HuntingMonsterGroupType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 5 e:307 64 8 8 iter:310 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getHuntingMonsterGroupTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::HuntingMonsterGroupType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::HuntingMonsterGroupType,std::pair<std::string,std::string>>::find(map, (const std::map<data::HuntingMonsterGroupType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::HuntingMonsterGroupType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::HuntingMonsterGroupType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::HuntingMonsterGroupType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::HuntingMonsterGroupType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
      "enumValToStr",
      313);
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
    result = "INVALID_HuntingMonsterGroupType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::HuntingMonsterGroupType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::HuntingMonsterGroupType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 320: range 00000000144C3C8B-00000000144C4243
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::HuntingMonsterGroupType>,false,true>::pointer v10; // rax
  data::HuntingMonsterGroupType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::HuntingMonsterGroupType> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:329 96 8 9 <unknown> 128 8 5 s:319 160 32 9 <unknown> 224 32 9 <unk"
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
    m = data::getHuntingMonsterGroupTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::HuntingMonsterGroupType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::HuntingMonsterGroupType>::find(
                                                                                                    m,
                                                                                                    (const std::unordered_map<std::string,data::HuntingMonsterGroupType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::HuntingMonsterGroupType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::HuntingMonsterGroupType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::HuntingMonsterGroupType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::HuntingMonsterGroupType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::HuntingMonsterGroupType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
        "enumNameToVal",
        332);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::HuntingMonsterGroupType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::HuntingMonsterGroupType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
      "enumNameToVal",
      323);
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

// Line 341: range 00000000144C4244-00000000144C4C0D
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::HuntingMonsterGroupType> *i; // r14
  unsigned __int64 v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::HuntingMonsterGroupType>,false,true>::pointer v12; // rax
  data::HuntingMonsterGroupType second; // ecx
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
                        " <unknown> 144 8 6 it:354 176 8 9 <unknown> 208 8 5 s:340 240 32 9 <unknown> 304 32 9 <unknown> "
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::HuntingMonsterGroupType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::HuntingMonsterGroupType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, e);
      *(_DWORD *)(v2 + 112) = 1;
      std::pair<std::string const,data::HuntingMonsterGroupType>::pair<char const(&)[10],data::HuntingMonsterGroupType,true>(
        (std::pair<const std::string,data::HuntingMonsterGroupType> *const)(v2 + 432),
        (const char (*)[10])byte_1AD8DAC0,
        (data::HuntingMonsterGroupType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1AD8DAC0);
      *(_DWORD *)(v2 + 128) = 2;
      std::pair<std::string const,data::HuntingMonsterGroupType>::pair<char const(&)[10],data::HuntingMonsterGroupType,true>(
        (std::pair<const std::string,data::HuntingMonsterGroupType> *const)(v2 + 472),
        (const char (*)[10])byte_1AD8DB00,
        (data::HuntingMonsterGroupType *)(v2 + 128));
      std::allocator<std::pair<std::string const,data::HuntingMonsterGroupType>>::allocator((std::allocator<std::pair<const std::string,data::HuntingMonsterGroupType> > *const)(v2 + 80));
      std::unordered_map<std::string,data::HuntingMonsterGroupType>::unordered_map(
        &data::enumStrToVal(char const*,data::HuntingMonsterGroupType &)::m,
        (std::initializer_list<std::pair<const std::string,data::HuntingMonsterGroupType> >)__PAIR128__(2LL, v2 + 432),
        0LL,
        (const std::unordered_map<std::string,data::HuntingMonsterGroupType>::hasher *)(v2 + 48),
        (const std::unordered_map<std::string,data::HuntingMonsterGroupType>::key_equal *)(v2 + 64),
        (const std::unordered_map<std::string,data::HuntingMonsterGroupType>::allocator_type *)(v2 + 80));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::HuntingMonsterGroupType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::HuntingMonsterGroupType>::~unordered_map,
        &data::enumStrToVal(char const*,data::HuntingMonsterGroupType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::HuntingMonsterGroupType>>::~allocator((std::allocator<std::pair<const std::string,data::HuntingMonsterGroupType> > *const)(v2 + 80));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::HuntingMonsterGroupType> *)(v2 + 512);
            i != (std::pair<const std::string,data::HuntingMonsterGroupType> *)(v2 + 432);
            std::pair<std::string const,data::HuntingMonsterGroupType>::~pair(i) )
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
    *(std::unordered_map<std::string,data::HuntingMonsterGroupType>::iterator *)(v2 + 144) = std::unordered_map<std::string,data::HuntingMonsterGroupType>::find(
                                                                                               &data::enumStrToVal(char const*,data::HuntingMonsterGroupType &)::m,
                                                                                               (const std::unordered_map<std::string,data::HuntingMonsterGroupType>::key_type *)(v2 + 304));
    std::string::~string((void *)(v2 + 304));
    *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 96);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, v2 + 304);
    *(std::unordered_map<std::string,data::HuntingMonsterGroupType>::iterator *)(v2 + 176) = std::unordered_map<std::string,data::HuntingMonsterGroupType>::end(&data::enumStrToVal(char const*,data::HuntingMonsterGroupType &)::m);
    v9 = (char *)(v2 + 176);
    v10 = std::__detail::operator==<std::pair<std::string const,data::HuntingMonsterGroupType>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::HuntingMonsterGroupType>,true> *)(v2 + 144),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::HuntingMonsterGroupType>,true> *)(v2 + 176));
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
        "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
        "enumStrToVal",
        357);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 368),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)(v2 + 208));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 368));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::HuntingMonsterGroupType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::HuntingMonsterGroupType>,false,true> *const)(v2 + 144));
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
      "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
      "enumStrToVal",
      344);
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

// Line 366: range 00000000144C4C0E-00000000144C4C24
const char *__cdecl data::getDescription(data::HuntingMonsterGroupType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 371: range 00000000144C4C25-00000000144C4DDA
bool __cdecl data::isValidHuntingMonsterGroupType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::HuntingMonsterGroupType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::HuntingMonsterGroupType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:372 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidHuntingMonsterGroupType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getHuntingMonsterGroupTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::HuntingMonsterGroupType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::HuntingMonsterGroupType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getHuntingMonsterGroupTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::HuntingMonsterGroupType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::HuntingMonsterGroupType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::HuntingMonsterGroupType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::HuntingMonsterGroupType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::HuntingMonsterGroupType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 377: range 00000000144C4DDB-00000000144C4F3C
bool __cdecl data::isValidHuntingMonsterGroupTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::HuntingMonsterGroupType> *v5; // rcx
  const std::unordered_map<std::string,data::HuntingMonsterGroupType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidHuntingMonsterGroupTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getHuntingMonsterGroupTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::HuntingMonsterGroupType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::HuntingMonsterGroupType>::end(v5);
  v6 = data::getHuntingMonsterGroupTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::HuntingMonsterGroupType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::HuntingMonsterGroupType>::find(
                                                                                                  v6,
                                                                                                  name);
  result = std::__detail::operator!=<std::pair<std::string const,data::HuntingMonsterGroupType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::HuntingMonsterGroupType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::HuntingMonsterGroupType>,true> *)(v2 + 64));
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

// Line 382: range 00000000144C4F3D-00000000144C53FF
const std::unordered_map<std::string,data::HuntingMonsterGroupType> *__cdecl data::getHuntingMonsterGroupTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::HuntingMonsterGroupType> *i; // r14
  const std::unordered_map<std::string,data::HuntingMonsterGroupType> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getHuntingMonsterGroupTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556927;
  v3[536862723] = -234556924;
  v3[536862727] = -218103808;
  v3[536862728] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getHuntingMonsterGroupTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getHuntingMonsterGroupTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string const,data::HuntingMonsterGroupType>::pair<char const(&)[24],data::HuntingMonsterGroupType,true>(
      (std::pair<const std::string,data::HuntingMonsterGroupType> *const)(v1 + 128),
      (const char (*)[24])"HUNTING_GROUP_TYPE_NONE",
      (data::HuntingMonsterGroupType *)(v1 + 80));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, "HUNTING_GROUP_TYPE_NONE");
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string const,data::HuntingMonsterGroupType>::pair<char const(&)[24],data::HuntingMonsterGroupType,true>(
      (std::pair<const std::string,data::HuntingMonsterGroupType> *const)(v1 + 168),
      (const char (*)[24])"HUNTING_GROUP_TYPE_CLUE",
      (data::HuntingMonsterGroupType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "HUNTING_GROUP_TYPE_CLUE");
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string const,data::HuntingMonsterGroupType>::pair<char const(&)[30],data::HuntingMonsterGroupType,true>(
      (std::pair<const std::string,data::HuntingMonsterGroupType> *const)(v1 + 208),
      (const char (*)[30])"HUNTING_GROUP_TYPE_ASSOCIATED",
      (data::HuntingMonsterGroupType *)(v1 + 112));
    std::allocator<std::pair<std::string const,data::HuntingMonsterGroupType>>::allocator((std::allocator<std::pair<const std::string,data::HuntingMonsterGroupType> > *const)(v1 + 64));
    std::unordered_map<std::string,data::HuntingMonsterGroupType>::unordered_map(
      &data::getHuntingMonsterGroupTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::HuntingMonsterGroupType> >)__PAIR128__(3LL, v1 + 128),
      0LL,
      (const std::unordered_map<std::string,data::HuntingMonsterGroupType>::hasher *)(v1 + 32),
      (const std::unordered_map<std::string,data::HuntingMonsterGroupType>::key_equal *)(v1 + 48),
      (const std::unordered_map<std::string,data::HuntingMonsterGroupType>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getHuntingMonsterGroupTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::HuntingMonsterGroupType>::~unordered_map,
      &data::getHuntingMonsterGroupTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::HuntingMonsterGroupType>>::~allocator((std::allocator<std::pair<const std::string,data::HuntingMonsterGroupType> > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::HuntingMonsterGroupType> *)(v1 + 248);
          i != (std::pair<const std::string,data::HuntingMonsterGroupType> *)(v1 + 128);
          std::pair<std::string const,data::HuntingMonsterGroupType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getHuntingMonsterGroupTypeNameMap[abi:cxx11](void)::m;
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

// Line 393: range 00000000144C5400-00000000144C5AFE
const std::map<data::HuntingMonsterGroupType,std::pair<std::string,std::string >> *__cdecl data::getHuntingMonsterGroupTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::HuntingMonsterGroupType,std::pair<std::string,std::string > > *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getHuntingMonsterGroupTypeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getHuntingMonsterGroupTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getHuntingMonsterGroupTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[24],true>(
      (std::pair<std::string,std::string > *const)(v1 + 128),
      (const char (*)[1])byte_1ACFAB80,
      (const char (*)[24])"HUNTING_GROUP_TYPE_NONE");
    std::pair<data::HuntingMonsterGroupType const,std::pair<std::string,std::string>>::pair<data::HuntingMonsterGroupType,true>(
      (std::pair<const data::HuntingMonsterGroupType,std::pair<std::string,std::string > > *const)(v1 + 416),
      (data::HuntingMonsterGroupType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[10],char const(&)[24],true>(
      (std::pair<std::string,std::string > *const)(v1 + 224),
      (const char (*)[10])byte_1AD8DAC0,
      (const char (*)[24])"HUNTING_GROUP_TYPE_CLUE");
    std::pair<data::HuntingMonsterGroupType const,std::pair<std::string,std::string>>::pair<data::HuntingMonsterGroupType,true>(
      (std::pair<const data::HuntingMonsterGroupType,std::pair<std::string,std::string > > *const)(v1 + 488),
      (data::HuntingMonsterGroupType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 224));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[10],char const(&)[30],true>(
      (std::pair<std::string,std::string > *const)(v1 + 320),
      (const char (*)[10])byte_1AD8DB00,
      (const char (*)[30])"HUNTING_GROUP_TYPE_ASSOCIATED");
    std::pair<data::HuntingMonsterGroupType const,std::pair<std::string,std::string>>::pair<data::HuntingMonsterGroupType,true>(
      (std::pair<const data::HuntingMonsterGroupType,std::pair<std::string,std::string > > *const)(v1 + 560),
      (data::HuntingMonsterGroupType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 320));
    std::allocator<std::pair<data::HuntingMonsterGroupType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::HuntingMonsterGroupType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    std::map<data::HuntingMonsterGroupType,std::pair<std::string,std::string>>::map(
      &data::getHuntingMonsterGroupTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::HuntingMonsterGroupType,std::pair<std::string,std::string > > >)__PAIR128__(3LL, v1 + 416),
      (const std::less<data::HuntingMonsterGroupType> *)(v1 + 48),
      (const std::map<data::HuntingMonsterGroupType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getHuntingMonsterGroupTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::HuntingMonsterGroupType,std::pair<std::string,std::string>>::~map,
      &data::getHuntingMonsterGroupTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::HuntingMonsterGroupType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::HuntingMonsterGroupType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::HuntingMonsterGroupType,std::pair<std::string,std::string > > *)(v1 + 632);
          i != (std::pair<const data::HuntingMonsterGroupType,std::pair<std::string,std::string > > *)(v1 + 416);
          std::pair<data::HuntingMonsterGroupType const,std::pair<std::string,std::string>>::~pair(i) )
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
  return &data::getHuntingMonsterGroupTypeEnumMap[abi:cxx11](void)::m;
};

// Line 404: range 00000000144C5AFF-00000000144C5E72
const char *__fastcall data::enumValToStr(data::HuntingRefreshCondType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::HuntingRefreshCondType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::HuntingRefreshCondType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 5 e:403 64 8 8 iter:406 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getHuntingRefreshCondTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::HuntingRefreshCondType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::HuntingRefreshCondType,std::pair<std::string,std::string>>::find(map, (const std::map<data::HuntingRefreshCondType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::HuntingRefreshCondType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::HuntingRefreshCondType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::HuntingRefreshCondType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::HuntingRefreshCondType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
      "enumValToStr",
      409);
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
    result = "INVALID_HuntingRefreshCondType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::HuntingRefreshCondType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::HuntingRefreshCondType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 416: range 00000000144C5E73-00000000144C642B
__int64 __fastcall data::enumNameToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  const char *v6; // rsi
  char *v7; // rsi
  bool refreshed; // al
  common::milog::MiLogStream *v9; // rax
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::HuntingRefreshCondType>,false,true>::pointer v10; // rax
  data::HuntingRefreshCondType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::HuntingRefreshCondType> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:425 96 8 9 <unknown> 128 8 5 s:415 160 32 9 <unknown> 224 32 9 <unk"
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
    m = data::getHuntingRefreshCondTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::HuntingRefreshCondType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::HuntingRefreshCondType>::find(
                                                                                                   m,
                                                                                                   (const std::unordered_map<std::string,data::HuntingRefreshCondType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::HuntingRefreshCondType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::HuntingRefreshCondType>::end(m);
    v7 = (char *)(v2 + 96);
    refreshed = std::__detail::operator==<std::pair<std::string const,data::HuntingRefreshCondType>,true>(
                  (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::HuntingRefreshCondType>,true> *)(v2 + 64),
                  (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::HuntingRefreshCondType>,true> *)(v2 + 96));
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( refreshed )
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
        "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
        "enumNameToVal",
        428);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::HuntingRefreshCondType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::HuntingRefreshCondType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
      "enumNameToVal",
      419);
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

// Line 437: range 00000000144C642C-00000000144C6DF5
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::HuntingRefreshCondType> *i; // r14
  unsigned __int64 v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool refreshed; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::HuntingRefreshCondType>,false,true>::pointer v12; // rax
  data::HuntingRefreshCondType second; // ecx
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
                        " <unknown> 144 8 6 it:450 176 8 9 <unknown> 208 8 5 s:436 240 32 9 <unknown> 304 32 9 <unknown> "
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::HuntingRefreshCondType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::HuntingRefreshCondType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, e);
      *(_DWORD *)(v2 + 112) = 1;
      std::pair<std::string const,data::HuntingRefreshCondType>::pair<char const(&)[7],data::HuntingRefreshCondType,true>(
        (std::pair<const std::string,data::HuntingRefreshCondType> *const)(v2 + 432),
        (const char (*)[7])byte_1AD496E0,
        (data::HuntingRefreshCondType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1AD496E0);
      *(_DWORD *)(v2 + 128) = 2;
      std::pair<std::string const,data::HuntingRefreshCondType>::pair<char const(&)[7],data::HuntingRefreshCondType,true>(
        (std::pair<const std::string,data::HuntingRefreshCondType> *const)(v2 + 472),
        (const char (*)[7])byte_1AD8DE60,
        (data::HuntingRefreshCondType *)(v2 + 128));
      std::allocator<std::pair<std::string const,data::HuntingRefreshCondType>>::allocator((std::allocator<std::pair<const std::string,data::HuntingRefreshCondType> > *const)(v2 + 80));
      std::unordered_map<std::string,data::HuntingRefreshCondType>::unordered_map(
        &data::enumStrToVal(char const*,data::HuntingRefreshCondType &)::m,
        (std::initializer_list<std::pair<const std::string,data::HuntingRefreshCondType> >)__PAIR128__(2LL, v2 + 432),
        0LL,
        (const std::unordered_map<std::string,data::HuntingRefreshCondType>::hasher *)(v2 + 48),
        (const std::unordered_map<std::string,data::HuntingRefreshCondType>::key_equal *)(v2 + 64),
        (const std::unordered_map<std::string,data::HuntingRefreshCondType>::allocator_type *)(v2 + 80));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::HuntingRefreshCondType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::HuntingRefreshCondType>::~unordered_map,
        &data::enumStrToVal(char const*,data::HuntingRefreshCondType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::HuntingRefreshCondType>>::~allocator((std::allocator<std::pair<const std::string,data::HuntingRefreshCondType> > *const)(v2 + 80));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::HuntingRefreshCondType> *)(v2 + 512);
            i != (std::pair<const std::string,data::HuntingRefreshCondType> *)(v2 + 432);
            std::pair<std::string const,data::HuntingRefreshCondType>::~pair(i) )
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
    *(std::unordered_map<std::string,data::HuntingRefreshCondType>::iterator *)(v2 + 144) = std::unordered_map<std::string,data::HuntingRefreshCondType>::find(
                                                                                              &data::enumStrToVal(char const*,data::HuntingRefreshCondType &)::m,
                                                                                              (const std::unordered_map<std::string,data::HuntingRefreshCondType>::key_type *)(v2 + 304));
    std::string::~string((void *)(v2 + 304));
    *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 96);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, v2 + 304);
    *(std::unordered_map<std::string,data::HuntingRefreshCondType>::iterator *)(v2 + 176) = std::unordered_map<std::string,data::HuntingRefreshCondType>::end(&data::enumStrToVal(char const*,data::HuntingRefreshCondType &)::m);
    v9 = (char *)(v2 + 176);
    refreshed = std::__detail::operator==<std::pair<std::string const,data::HuntingRefreshCondType>,true>(
                  (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::HuntingRefreshCondType>,true> *)(v2 + 144),
                  (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::HuntingRefreshCondType>,true> *)(v2 + 176));
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
    if ( refreshed )
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
        "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
        "enumStrToVal",
        453);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 368),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)(v2 + 208));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 368));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::HuntingRefreshCondType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::HuntingRefreshCondType>,false,true> *const)(v2 + 144));
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
      "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
      "enumStrToVal",
      440);
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

// Line 462: range 00000000144C6DF6-00000000144C6E0C
const char *__cdecl data::getDescription(data::HuntingRefreshCondType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 467: range 00000000144C6E0D-00000000144C6FC2
bool __cdecl data::isValidHuntingRefreshCondType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::HuntingRefreshCondType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::HuntingRefreshCondType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:468 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidHuntingRefreshCondType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getHuntingRefreshCondTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::HuntingRefreshCondType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::HuntingRefreshCondType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getHuntingRefreshCondTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::HuntingRefreshCondType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::HuntingRefreshCondType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::HuntingRefreshCondType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::HuntingRefreshCondType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::HuntingRefreshCondType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 473: range 00000000144C6FC3-00000000144C7124
bool __cdecl data::isValidHuntingRefreshCondTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::HuntingRefreshCondType> *v5; // rcx
  const std::unordered_map<std::string,data::HuntingRefreshCondType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidHuntingRefreshCondTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getHuntingRefreshCondTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::HuntingRefreshCondType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::HuntingRefreshCondType>::end(v5);
  v6 = data::getHuntingRefreshCondTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::HuntingRefreshCondType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::HuntingRefreshCondType>::find(
                                                                                                 v6,
                                                                                                 name);
  result = std::__detail::operator!=<std::pair<std::string const,data::HuntingRefreshCondType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::HuntingRefreshCondType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::HuntingRefreshCondType>,true> *)(v2 + 64));
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

// Line 478: range 00000000144C7125-00000000144C75E7
const std::unordered_map<std::string,data::HuntingRefreshCondType> *__cdecl data::getHuntingRefreshCondTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::HuntingRefreshCondType> *i; // r14
  const std::unordered_map<std::string,data::HuntingRefreshCondType> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getHuntingRefreshCondTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556927;
  v3[536862723] = -234556924;
  v3[536862727] = -218103808;
  v3[536862728] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getHuntingRefreshCondTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getHuntingRefreshCondTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string const,data::HuntingRefreshCondType>::pair<char const(&)[26],data::HuntingRefreshCondType,true>(
      (std::pair<const std::string,data::HuntingRefreshCondType> *const)(v1 + 128),
      (const char (*)[26])"HUNTING_REFRESH_COND_NONE",
      (data::HuntingRefreshCondType *)(v1 + 80));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, "HUNTING_REFRESH_COND_NONE");
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string const,data::HuntingRefreshCondType>::pair<char const(&)[26],data::HuntingRefreshCondType,true>(
      (std::pair<const std::string,data::HuntingRefreshCondType> *const)(v1 + 168),
      (const char (*)[26])"HUNTING_REFRESH_COND_TIME",
      (data::HuntingRefreshCondType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "HUNTING_REFRESH_COND_TIME");
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string const,data::HuntingRefreshCondType>::pair<char const(&)[29],data::HuntingRefreshCondType,true>(
      (std::pair<const std::string,data::HuntingRefreshCondType> *const)(v1 + 208),
      (const char (*)[29])"HUNTING_REFRESH_COND_WEATHER",
      (data::HuntingRefreshCondType *)(v1 + 112));
    std::allocator<std::pair<std::string const,data::HuntingRefreshCondType>>::allocator((std::allocator<std::pair<const std::string,data::HuntingRefreshCondType> > *const)(v1 + 64));
    std::unordered_map<std::string,data::HuntingRefreshCondType>::unordered_map(
      &data::getHuntingRefreshCondTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::HuntingRefreshCondType> >)__PAIR128__(3LL, v1 + 128),
      0LL,
      (const std::unordered_map<std::string,data::HuntingRefreshCondType>::hasher *)(v1 + 32),
      (const std::unordered_map<std::string,data::HuntingRefreshCondType>::key_equal *)(v1 + 48),
      (const std::unordered_map<std::string,data::HuntingRefreshCondType>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getHuntingRefreshCondTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::HuntingRefreshCondType>::~unordered_map,
      &data::getHuntingRefreshCondTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::HuntingRefreshCondType>>::~allocator((std::allocator<std::pair<const std::string,data::HuntingRefreshCondType> > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::HuntingRefreshCondType> *)(v1 + 248);
          i != (std::pair<const std::string,data::HuntingRefreshCondType> *)(v1 + 128);
          std::pair<std::string const,data::HuntingRefreshCondType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getHuntingRefreshCondTypeNameMap[abi:cxx11](void)::m;
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

// Line 489: range 00000000144C75E8-00000000144C7CE6
const std::map<data::HuntingRefreshCondType,std::pair<std::string,std::string >> *__cdecl data::getHuntingRefreshCondTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::HuntingRefreshCondType,std::pair<std::string,std::string > > *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getHuntingRefreshCondTypeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getHuntingRefreshCondTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getHuntingRefreshCondTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[26],true>(
      (std::pair<std::string,std::string > *const)(v1 + 128),
      (const char (*)[1])byte_1ACFAB80,
      (const char (*)[26])"HUNTING_REFRESH_COND_NONE");
    std::pair<data::HuntingRefreshCondType const,std::pair<std::string,std::string>>::pair<data::HuntingRefreshCondType,true>(
      (std::pair<const data::HuntingRefreshCondType,std::pair<std::string,std::string > > *const)(v1 + 416),
      (data::HuntingRefreshCondType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[26],true>(
      (std::pair<std::string,std::string > *const)(v1 + 224),
      (const char (*)[7])byte_1AD496E0,
      (const char (*)[26])"HUNTING_REFRESH_COND_TIME");
    std::pair<data::HuntingRefreshCondType const,std::pair<std::string,std::string>>::pair<data::HuntingRefreshCondType,true>(
      (std::pair<const data::HuntingRefreshCondType,std::pair<std::string,std::string > > *const)(v1 + 488),
      (data::HuntingRefreshCondType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 224));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[29],true>(
      (std::pair<std::string,std::string > *const)(v1 + 320),
      (const char (*)[7])byte_1AD8DE60,
      (const char (*)[29])"HUNTING_REFRESH_COND_WEATHER");
    std::pair<data::HuntingRefreshCondType const,std::pair<std::string,std::string>>::pair<data::HuntingRefreshCondType,true>(
      (std::pair<const data::HuntingRefreshCondType,std::pair<std::string,std::string > > *const)(v1 + 560),
      (data::HuntingRefreshCondType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 320));
    std::allocator<std::pair<data::HuntingRefreshCondType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::HuntingRefreshCondType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    std::map<data::HuntingRefreshCondType,std::pair<std::string,std::string>>::map(
      &data::getHuntingRefreshCondTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::HuntingRefreshCondType,std::pair<std::string,std::string > > >)__PAIR128__(3LL, v1 + 416),
      (const std::less<data::HuntingRefreshCondType> *)(v1 + 48),
      (const std::map<data::HuntingRefreshCondType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getHuntingRefreshCondTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::HuntingRefreshCondType,std::pair<std::string,std::string>>::~map,
      &data::getHuntingRefreshCondTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::HuntingRefreshCondType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::HuntingRefreshCondType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::HuntingRefreshCondType,std::pair<std::string,std::string > > *)(v1 + 632);
          i != (std::pair<const data::HuntingRefreshCondType,std::pair<std::string,std::string > > *)(v1 + 416);
          std::pair<data::HuntingRefreshCondType const,std::pair<std::string,std::string>>::~pair(i) )
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
  return &data::getHuntingRefreshCondTypeEnumMap[abi:cxx11](void)::m;
};

// Line 500: range 00000000144C7CE7-00000000144C805A
const char *__fastcall data::enumValToStr(data::HuntingMonsterFinishType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::HuntingMonsterFinishType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::HuntingMonsterFinishType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 5 e:499 64 8 8 iter:502 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getHuntingMonsterFinishTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::HuntingMonsterFinishType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::HuntingMonsterFinishType,std::pair<std::string,std::string>>::find(map, (const std::map<data::HuntingMonsterFinishType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::HuntingMonsterFinishType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::HuntingMonsterFinishType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::HuntingMonsterFinishType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::HuntingMonsterFinishType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
      "enumValToStr",
      505);
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
    result = "INVALID_HuntingMonsterFinishType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::HuntingMonsterFinishType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::HuntingMonsterFinishType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 512: range 00000000144C805B-00000000144C8613
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::HuntingMonsterFinishType>,false,true>::pointer v10; // rax
  data::HuntingMonsterFinishType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::HuntingMonsterFinishType> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:521 96 8 9 <unknown> 128 8 5 s:511 160 32 9 <unknown> 224 32 9 <unk"
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
    m = data::getHuntingMonsterFinishTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::HuntingMonsterFinishType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::HuntingMonsterFinishType>::find(
                                                                                                     m,
                                                                                                     (const std::unordered_map<std::string,data::HuntingMonsterFinishType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::HuntingMonsterFinishType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::HuntingMonsterFinishType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::HuntingMonsterFinishType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::HuntingMonsterFinishType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::HuntingMonsterFinishType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
        "enumNameToVal",
        524);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::HuntingMonsterFinishType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::HuntingMonsterFinishType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
      "enumNameToVal",
      515);
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

// Line 533: range 00000000144C8614-00000000144C8FDD
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::HuntingMonsterFinishType> *i; // r14
  unsigned __int64 v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::HuntingMonsterFinishType>,false,true>::pointer v12; // rax
  data::HuntingMonsterFinishType second; // ecx
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
                        " <unknown> 144 8 6 it:546 176 8 9 <unknown> 208 8 5 s:532 240 32 9 <unknown> 304 32 9 <unknown> "
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::HuntingMonsterFinishType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::HuntingMonsterFinishType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, e);
      *(_DWORD *)(v2 + 112) = 1;
      std::pair<std::string const,data::HuntingMonsterFinishType>::pair<char const(&)[13],data::HuntingMonsterFinishType,true>(
        (std::pair<const std::string,data::HuntingMonsterFinishType> *const)(v2 + 432),
        (const char (*)[13])byte_1AD8E1E0,
        (data::HuntingMonsterFinishType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1AD8E1E0);
      *(_DWORD *)(v2 + 128) = 2;
      std::pair<std::string const,data::HuntingMonsterFinishType>::pair<char const(&)[13],data::HuntingMonsterFinishType,true>(
        (std::pair<const std::string,data::HuntingMonsterFinishType> *const)(v2 + 472),
        (const char (*)[13])byte_1AD8E220,
        (data::HuntingMonsterFinishType *)(v2 + 128));
      std::allocator<std::pair<std::string const,data::HuntingMonsterFinishType>>::allocator((std::allocator<std::pair<const std::string,data::HuntingMonsterFinishType> > *const)(v2 + 80));
      std::unordered_map<std::string,data::HuntingMonsterFinishType>::unordered_map(
        &data::enumStrToVal(char const*,data::HuntingMonsterFinishType &)::m,
        (std::initializer_list<std::pair<const std::string,data::HuntingMonsterFinishType> >)__PAIR128__(2LL, v2 + 432),
        0LL,
        (const std::unordered_map<std::string,data::HuntingMonsterFinishType>::hasher *)(v2 + 48),
        (const std::unordered_map<std::string,data::HuntingMonsterFinishType>::key_equal *)(v2 + 64),
        (const std::unordered_map<std::string,data::HuntingMonsterFinishType>::allocator_type *)(v2 + 80));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::HuntingMonsterFinishType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::HuntingMonsterFinishType>::~unordered_map,
        &data::enumStrToVal(char const*,data::HuntingMonsterFinishType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::HuntingMonsterFinishType>>::~allocator((std::allocator<std::pair<const std::string,data::HuntingMonsterFinishType> > *const)(v2 + 80));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::HuntingMonsterFinishType> *)(v2 + 512);
            i != (std::pair<const std::string,data::HuntingMonsterFinishType> *)(v2 + 432);
            std::pair<std::string const,data::HuntingMonsterFinishType>::~pair(i) )
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
    *(std::unordered_map<std::string,data::HuntingMonsterFinishType>::iterator *)(v2 + 144) = std::unordered_map<std::string,data::HuntingMonsterFinishType>::find(
                                                                                                &data::enumStrToVal(char const*,data::HuntingMonsterFinishType &)::m,
                                                                                                (const std::unordered_map<std::string,data::HuntingMonsterFinishType>::key_type *)(v2 + 304));
    std::string::~string((void *)(v2 + 304));
    *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 96);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, v2 + 304);
    *(std::unordered_map<std::string,data::HuntingMonsterFinishType>::iterator *)(v2 + 176) = std::unordered_map<std::string,data::HuntingMonsterFinishType>::end(&data::enumStrToVal(char const*,data::HuntingMonsterFinishType &)::m);
    v9 = (char *)(v2 + 176);
    v10 = std::__detail::operator==<std::pair<std::string const,data::HuntingMonsterFinishType>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::HuntingMonsterFinishType>,true> *)(v2 + 144),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::HuntingMonsterFinishType>,true> *)(v2 + 176));
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
        "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
        "enumStrToVal",
        549);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 368),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)(v2 + 208));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 368));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::HuntingMonsterFinishType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::HuntingMonsterFinishType>,false,true> *const)(v2 + 144));
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
      "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
      "enumStrToVal",
      536);
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

// Line 558: range 00000000144C8FDE-00000000144C8FF4
const char *__cdecl data::getDescription(data::HuntingMonsterFinishType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 563: range 00000000144C8FF5-00000000144C91AA
bool __cdecl data::isValidHuntingMonsterFinishType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::HuntingMonsterFinishType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::HuntingMonsterFinishType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:564 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidHuntingMonsterFinishType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getHuntingMonsterFinishTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::HuntingMonsterFinishType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::HuntingMonsterFinishType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getHuntingMonsterFinishTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::HuntingMonsterFinishType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::HuntingMonsterFinishType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::HuntingMonsterFinishType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::HuntingMonsterFinishType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::HuntingMonsterFinishType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 569: range 00000000144C91AB-00000000144C930C
bool __cdecl data::isValidHuntingMonsterFinishTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::HuntingMonsterFinishType> *v5; // rcx
  const std::unordered_map<std::string,data::HuntingMonsterFinishType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidHuntingMonsterFinishTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getHuntingMonsterFinishTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::HuntingMonsterFinishType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::HuntingMonsterFinishType>::end(v5);
  v6 = data::getHuntingMonsterFinishTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::HuntingMonsterFinishType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::HuntingMonsterFinishType>::find(
                                                                                                   v6,
                                                                                                   name);
  result = std::__detail::operator!=<std::pair<std::string const,data::HuntingMonsterFinishType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::HuntingMonsterFinishType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::HuntingMonsterFinishType>,true> *)(v2 + 64));
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

// Line 574: range 00000000144C930D-00000000144C97CF
const std::unordered_map<std::string,data::HuntingMonsterFinishType> *__cdecl data::getHuntingMonsterFinishTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::HuntingMonsterFinishType> *i; // r14
  const std::unordered_map<std::string,data::HuntingMonsterFinishType> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getHuntingMonsterFinishTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556927;
  v3[536862723] = -234556924;
  v3[536862727] = -218103808;
  v3[536862728] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getHuntingMonsterFinishTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getHuntingMonsterFinishTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string const,data::HuntingMonsterFinishType>::pair<char const(&)[25],data::HuntingMonsterFinishType,true>(
      (std::pair<const std::string,data::HuntingMonsterFinishType> *const)(v1 + 128),
      (const char (*)[25])"HUNTING_FINISH_TYPE_NONE",
      (data::HuntingMonsterFinishType *)(v1 + 80));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, "HUNTING_FINISH_TYPE_NONE");
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string const,data::HuntingMonsterFinishType>::pair<char const(&)[24],data::HuntingMonsterFinishType,true>(
      (std::pair<const std::string,data::HuntingMonsterFinishType> *const)(v1 + 168),
      (const char (*)[24])"HUNTING_FINISH_TYPE_ALL",
      (data::HuntingMonsterFinishType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "HUNTING_FINISH_TYPE_ALL");
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string const,data::HuntingMonsterFinishType>::pair<char const(&)[35],data::HuntingMonsterFinishType,true>(
      (std::pair<const std::string,data::HuntingMonsterFinishType> *const)(v1 + 208),
      (const char (*)[35])"HUNTING_FINISH_TYPE_TARGET_MONSTER",
      (data::HuntingMonsterFinishType *)(v1 + 112));
    std::allocator<std::pair<std::string const,data::HuntingMonsterFinishType>>::allocator((std::allocator<std::pair<const std::string,data::HuntingMonsterFinishType> > *const)(v1 + 64));
    std::unordered_map<std::string,data::HuntingMonsterFinishType>::unordered_map(
      &data::getHuntingMonsterFinishTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::HuntingMonsterFinishType> >)__PAIR128__(3LL, v1 + 128),
      0LL,
      (const std::unordered_map<std::string,data::HuntingMonsterFinishType>::hasher *)(v1 + 32),
      (const std::unordered_map<std::string,data::HuntingMonsterFinishType>::key_equal *)(v1 + 48),
      (const std::unordered_map<std::string,data::HuntingMonsterFinishType>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getHuntingMonsterFinishTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::HuntingMonsterFinishType>::~unordered_map,
      &data::getHuntingMonsterFinishTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::HuntingMonsterFinishType>>::~allocator((std::allocator<std::pair<const std::string,data::HuntingMonsterFinishType> > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::HuntingMonsterFinishType> *)(v1 + 248);
          i != (std::pair<const std::string,data::HuntingMonsterFinishType> *)(v1 + 128);
          std::pair<std::string const,data::HuntingMonsterFinishType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getHuntingMonsterFinishTypeNameMap[abi:cxx11](void)::m;
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

// Line 585: range 00000000144C97D0-00000000144C9ECE
const std::map<data::HuntingMonsterFinishType,std::pair<std::string,std::string >> *__cdecl data::getHuntingMonsterFinishTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::HuntingMonsterFinishType,std::pair<std::string,std::string > > *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getHuntingMonsterFinishTypeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getHuntingMonsterFinishTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getHuntingMonsterFinishTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[25],true>(
      (std::pair<std::string,std::string > *const)(v1 + 128),
      (const char (*)[1])byte_1ACFAB80,
      (const char (*)[25])"HUNTING_FINISH_TYPE_NONE");
    std::pair<data::HuntingMonsterFinishType const,std::pair<std::string,std::string>>::pair<data::HuntingMonsterFinishType,true>(
      (std::pair<const data::HuntingMonsterFinishType,std::pair<std::string,std::string > > *const)(v1 + 416),
      (data::HuntingMonsterFinishType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[24],true>(
      (std::pair<std::string,std::string > *const)(v1 + 224),
      (const char (*)[13])byte_1AD8E1E0,
      (const char (*)[24])"HUNTING_FINISH_TYPE_ALL");
    std::pair<data::HuntingMonsterFinishType const,std::pair<std::string,std::string>>::pair<data::HuntingMonsterFinishType,true>(
      (std::pair<const data::HuntingMonsterFinishType,std::pair<std::string,std::string > > *const)(v1 + 488),
      (data::HuntingMonsterFinishType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 224));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[35],true>(
      (std::pair<std::string,std::string > *const)(v1 + 320),
      (const char (*)[13])byte_1AD8E220,
      (const char (*)[35])"HUNTING_FINISH_TYPE_TARGET_MONSTER");
    std::pair<data::HuntingMonsterFinishType const,std::pair<std::string,std::string>>::pair<data::HuntingMonsterFinishType,true>(
      (std::pair<const data::HuntingMonsterFinishType,std::pair<std::string,std::string > > *const)(v1 + 560),
      (data::HuntingMonsterFinishType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 320));
    std::allocator<std::pair<data::HuntingMonsterFinishType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::HuntingMonsterFinishType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    std::map<data::HuntingMonsterFinishType,std::pair<std::string,std::string>>::map(
      &data::getHuntingMonsterFinishTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::HuntingMonsterFinishType,std::pair<std::string,std::string > > >)__PAIR128__(3LL, v1 + 416),
      (const std::less<data::HuntingMonsterFinishType> *)(v1 + 48),
      (const std::map<data::HuntingMonsterFinishType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getHuntingMonsterFinishTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::HuntingMonsterFinishType,std::pair<std::string,std::string>>::~map,
      &data::getHuntingMonsterFinishTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::HuntingMonsterFinishType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::HuntingMonsterFinishType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::HuntingMonsterFinishType,std::pair<std::string,std::string > > *)(v1 + 632);
          i != (std::pair<const data::HuntingMonsterFinishType,std::pair<std::string,std::string > > *)(v1 + 416);
          std::pair<data::HuntingMonsterFinishType const,std::pair<std::string,std::string>>::~pair(i) )
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
  return &data::getHuntingMonsterFinishTypeEnumMap[abi:cxx11](void)::m;
};

// Line 597: range 00000000144C9ED0-00000000144CABDF
int32_t __cdecl data::HuntingRefreshExcelConfig::init(
        data::HuntingRefreshExcelConfig *const this,
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
  *(_QWORD *)(v2 + 16) = data::HuntingRefreshExcelConfig::init;
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
      "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
      "init",
      600);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 192),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v6, (const char (*)[23])byte_1AD3A120);
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
      &byte_1AD4AB40,
      (const std::allocator<char> *)(v2 + 64));
    v8 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 256), &this->city_id) != 0;
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
        "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
        "init",
        605);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 320),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v9, (const char (*)[29])byte_1AD4AB80);
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
        &byte_1AD8E380,
        (const std::allocator<char> *)(v2 + 80));
      v10 = common::tools::TxtFile::Row::assignToEnum<data::HuntingOfferDifficultyType>(
              row,
              (const std::string *)(v2 + 384),
              &this->difficulty) != 0;
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
          "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
          "init",
          610);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 448),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v11, (const char (*)[27])byte_1AD8E3C0);
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
          "RegionId",
          (const std::allocator<char> *)(v2 + 96));
        v12 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                row,
                (const std::string *)(v2 + 512),
                &this->region_id) != 0;
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
            "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
            "init",
            615);
          v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 576),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v13, (const char (*)[29])byte_1AD8E440);
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
            &byte_1AD8E480,
            (const std::allocator<char> *)(v2 + 112));
          v14 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                  row,
                  (const std::string *)(v2 + 640),
                  &this->finish_reward_id) != 0;
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
              "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
              "init",
              620);
            v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 704),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v15, (const char (*)[35])byte_1AD8E4C0);
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

// Line 628: range 00000000144CABE0-00000000144CDF6B
int32_t __cdecl data::HuntingRegionExcelConfig::init(
        data::HuntingRegionExcelConfig *const this,
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
  unsigned __int64 v10; // rax
  _DWORD *v11; // rax
  bool v12; // r13
  unsigned __int64 v13; // rax
  char *i; // rbx
  _DWORD *v15; // rax
  common::milog::MiLogStream *v16; // rax
  bool v17; // bl
  common::milog::MiLogStream *v18; // rax
  bool v19; // bl
  common::milog::MiLogStream *v20; // rax
  unsigned __int64 v21; // rax
  _DWORD *v22; // rax
  bool v23; // r13
  unsigned __int64 v24; // rax
  char *j; // rbx
  _DWORD *v26; // rax
  common::milog::MiLogStream *v27; // rax
  bool v28; // bl
  common::milog::MiLogStream *v29; // rax
  unsigned __int64 v30; // rax
  _DWORD *v31; // rax
  bool v32; // r13
  unsigned __int64 v33; // rax
  char *k; // rbx
  _DWORD *v35; // rax
  common::milog::MiLogStream *v36; // rax
  bool v37; // bl
  common::milog::MiLogStream *v38; // rax
  unsigned __int64 v39; // rax
  _DWORD *v40; // rax
  bool v41; // r13
  unsigned __int64 v42; // rax
  char *m; // rbx
  _DWORD *v44; // rax
  common::milog::MiLogStream *v45; // rax
  bool v46; // bl
  common::milog::MiLogStream *v47; // rax
  unsigned __int64 v48; // rax
  _DWORD *v49; // rax
  bool v50; // r13
  unsigned __int64 v51; // rax
  char *n; // rbx
  _DWORD *v53; // rax
  common::milog::MiLogStream *v54; // rax
  bool v55; // bl
  common::milog::MiLogStream *v56; // rax
  unsigned __int64 v57; // rax
  _DWORD *v58; // rax
  bool v59; // r13
  unsigned __int64 v60; // rax
  char *ii; // rbx
  _DWORD *v62; // rax
  common::milog::MiLogStream *v63; // rax
  std::initializer_list<std::string > __l; // [rsp+10h] [rbp-BE0h]
  std::initializer_list<std::string > v66; // [rsp+20h] [rbp-BD0h]
  std::initializer_list<std::string > v67; // [rsp+30h] [rbp-BC0h]
  std::initializer_list<std::string > v68; // [rsp+40h] [rbp-BB0h]
  std::initializer_list<std::string > v69; // [rsp+50h] [rbp-BA0h]
  std::initializer_list<std::string > v70; // [rsp+60h] [rbp-B90h]
  char v71[2928]; // [rsp+80h] [rbp-B70h] BYREF

  v2 = (unsigned __int64)v71;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(2880LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "61 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unkno"
                        "wn> 208 1 9 <unknown> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 28"
                        "8 1 9 <unknown> 304 1 9 <unknown> 320 1 9 <unknown> 336 1 9 <unknown> 352 1 9 <unknown> 368 1 9 "
                        "<unknown> 384 1 9 <unknown> 400 1 9 <unknown> 416 1 9 <unknown> 432 1 9 <unknown> 448 24 9 <unkn"
                        "own> 512 24 9 <unknown> 576 24 9 <unknown> 640 24 9 <unknown> 704 24 9 <unknown> 768 24 9 <unkno"
                        "wn> 832 32 11 val_str:629 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 <u"
                        "nknown> 1152 32 9 <unknown> 1216 32 9 <unknown> 1280 32 9 <unknown> 1344 32 9 <unknown> 1408 32 "
                        "9 <unknown> 1472 32 9 <unknown> 1536 32 9 <unknown> 1600 32 9 <unknown> 1664 32 9 <unknown> 1728"
                        " 32 9 <unknown> 1792 32 9 <unknown> 1856 32 9 <unknown> 1920 32 9 <unknown> 1984 32 9 <unknown> "
                        "2048 32 9 <unknown> 2112 32 9 <unknown> 2176 32 9 <unknown> 2240 32 9 <unknown> 2304 64 9 <unkno"
                        "wn> 2400 64 9 <unknown> 2496 64 9 <unknown> 2592 64 9 <unknown> 2688 64 9 <unknown> 2784 64 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::HuntingRegionExcelConfig::init;
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
  v4[536862734] = -234881024;
  v4[536862735] = -218959118;
  v4[536862736] = -234881024;
  v4[536862737] = -218959118;
  v4[536862738] = -234881024;
  v4[536862739] = -218959118;
  v4[536862740] = -234881024;
  v4[536862741] = -218959118;
  v4[536862742] = -234881024;
  v4[536862743] = -218959118;
  v4[536862744] = -234881024;
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
  v4[536862794] = -218959118;
  v4[536862797] = -218959118;
  v4[536862800] = -218959118;
  v4[536862803] = -218959118;
  v4[536862806] = -218959118;
  v4[536862809] = -202116109;
  std::string::basic_string(v2 + 832);
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 896),
    "ID",
    (const std::allocator<char> *)(v2 + 32));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 896), &this->id) != 0;
  std::string::~string((void *)(v2 + 896));
  *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
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
      "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
      "init",
      632);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 960),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v6, (const char (*)[23])byte_1AD3A120);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 960));
    *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 1024),
      &byte_1AD8E9C0,
      (const std::allocator<char> *)(v2 + 48));
    v8 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 1024), (std::string *)(v2 + 832)) != 0;
    std::string::~string((void *)(v2 + 1024));
    *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
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
        "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
        "init",
        637);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 1088),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v9, (const char (*)[36])byte_1AD8EA00);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1088));
      *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -117901064;
      v7 = -1;
    }
    else
    {
      v10 = ((v2 + 448) >> 3) + 2147450880;
      *(_WORD *)v10 = 0;
      *(_BYTE *)(v10 + 2) = 0;
      v11 = (_DWORD *)(((v2 + 2304) >> 3) + 2147450880);
      *v11 = 0;
      v11[1] = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 2304),
        ";",
        (const std::allocator<char> *)(v2 + 64));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 2336),
        ",",
        (const std::allocator<char> *)(v2 + 80));
      __l._M_array = (std::initializer_list<std::string >::iterator)(v2 + 2304);
      __l._M_len = 2LL;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 96));
      std::vector<std::string>::vector(
        (std::vector<std::string> *const)(v2 + 448),
        __l,
        (const std::vector<std::string>::allocator_type *)(v2 + 96));
      v12 = common::tools::StringUtils::splitToListBySeps<float>(
              (const std::string *)(v2 + 832),
              (const std::vector<std::string> *)(v2 + 448),
              &this->center_pos_list,
              1) != 0;
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 448));
      v13 = ((v2 + 448) >> 3) + 2147450880;
      *(_WORD *)v13 = -1800;
      *(_BYTE *)(v13 + 2) = -8;
      std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 96));
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      for ( i = (char *)(v2 + 2368); i != (char *)(v2 + 2304); std::string::~string(i) )
        i -= 32;
      v15 = (_DWORD *)(((v2 + 2304) >> 3) + 2147450880);
      *v15 = -117901064;
      v15[1] = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( v12 )
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
          "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
          "init",
          642);
        v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 1152),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v16, (const char (*)[36])byte_1AD8EA00);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1152));
        *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = -117901064;
        v7 = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 112);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 1216),
          &byte_1AD8EA60,
          (const std::allocator<char> *)(v2 + 112));
        v17 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                row,
                (const std::string *)(v2 + 1216),
                &this->center_radius) != 0;
        std::string::~string((void *)(v2 + 1216));
        *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 112);
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
        if ( v17 )
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
            "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
            "init",
            647);
          v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 1280),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v18, (const char (*)[33])byte_1AD8EAA0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1280));
          *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = -117901064;
          v7 = -1;
        }
        else
        {
          *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 128);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1344),
            &byte_1AD8EB00,
            (const std::allocator<char> *)(v2 + 128));
          v19 = common::tools::TxtFile::Row::assignToStr(
                  row,
                  (const std::string *)(v2 + 1344),
                  (std::string *)(v2 + 832)) != 0;
          std::string::~string((void *)(v2 + 1344));
          *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 128);
          *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
          if ( v19 )
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
              "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
              "init",
              652);
            v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 1408),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v20, (const char (*)[41])byte_1AD8EB40);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1408));
            *(_DWORD *)(((v2 + 1408) >> 3) + 0x7FFF8000) = -117901064;
            v7 = -1;
          }
          else
          {
            v21 = ((v2 + 512) >> 3) + 2147450880;
            *(_WORD *)v21 = 0;
            *(_BYTE *)(v21 + 2) = 0;
            v22 = (_DWORD *)(((v2 + 2400) >> 3) + 2147450880);
            *v22 = 0;
            v22[1] = 0;
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
            v66._M_array = (std::initializer_list<std::string >::iterator)(v2 + 2400);
            v66._M_len = 2LL;
            *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
            std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 176));
            std::vector<std::string>::vector(
              (std::vector<std::string> *const)(v2 + 512),
              v66,
              (const std::vector<std::string>::allocator_type *)(v2 + 176));
            v23 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                    (const std::string *)(v2 + 832),
                    (const std::vector<std::string> *)(v2 + 512),
                    &this->safe_clue_group,
                    1) != 0;
            std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 512));
            v24 = ((v2 + 512) >> 3) + 2147450880;
            *(_WORD *)v24 = -1800;
            *(_BYTE *)(v24 + 2) = -8;
            std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 176));
            *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
            for ( j = (char *)(v2 + 2464); j != (char *)(v2 + 2400); std::string::~string(j) )
              j -= 32;
            v26 = (_DWORD *)(((v2 + 2400) >> 3) + 2147450880);
            *v26 = -117901064;
            v26[1] = -117901064;
            std::allocator<char>::~allocator(v2 + 160);
            *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
            std::allocator<char>::~allocator(v2 + 144);
            *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
            if ( v23 )
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
                "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
                "init",
                657);
              v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1472),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v27, (const char (*)[41])byte_1AD8EB40);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1472));
              *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = -117901064;
              v7 = -1;
            }
            else
            {
              *(_DWORD *)(((v2 + 1536) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 192);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1536),
                &byte_1AD8EBA0,
                (const std::allocator<char> *)(v2 + 192));
              v28 = common::tools::TxtFile::Row::assignToStr(
                      row,
                      (const std::string *)(v2 + 1536),
                      (std::string *)(v2 + 832)) != 0;
              std::string::~string((void *)(v2 + 1536));
              *(_DWORD *)(((v2 + 1536) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 192);
              *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
              if ( v28 )
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
                  "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
                  "init",
                  662);
                v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1600),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v29, (const char (*)[35])byte_1AD8EBE0);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1600));
                *(_DWORD *)(((v2 + 1600) >> 3) + 0x7FFF8000) = -117901064;
                v7 = -1;
              }
              else
              {
                v30 = ((v2 + 576) >> 3) + 2147450880;
                *(_WORD *)v30 = 0;
                *(_BYTE *)(v30 + 2) = 0;
                v31 = (_DWORD *)(((v2 + 2496) >> 3) + 2147450880);
                *v31 = 0;
                v31[1] = 0;
                *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 208);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 2496),
                  ";",
                  (const std::allocator<char> *)(v2 + 208));
                *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 224);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 2528),
                  ",",
                  (const std::allocator<char> *)(v2 + 224));
                v67._M_array = (std::initializer_list<std::string >::iterator)(v2 + 2496);
                v67._M_len = 2LL;
                *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
                std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 240));
                std::vector<std::string>::vector(
                  (std::vector<std::string> *const)(v2 + 576),
                  v67,
                  (const std::vector<std::string>::allocator_type *)(v2 + 240));
                v32 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                        (const std::string *)(v2 + 832),
                        (const std::vector<std::string> *)(v2 + 576),
                        &this->clue_group,
                        1) != 0;
                std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 576));
                v33 = ((v2 + 576) >> 3) + 2147450880;
                *(_WORD *)v33 = -1800;
                *(_BYTE *)(v33 + 2) = -8;
                std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 240));
                *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                for ( k = (char *)(v2 + 2560); k != (char *)(v2 + 2496); std::string::~string(k) )
                  k -= 32;
                v35 = (_DWORD *)(((v2 + 2496) >> 3) + 2147450880);
                *v35 = -117901064;
                v35[1] = -117901064;
                std::allocator<char>::~allocator(v2 + 224);
                *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                std::allocator<char>::~allocator(v2 + 208);
                *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                if ( v32 )
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
                    "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
                    "init",
                    667);
                  v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 1664),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                    v36,
                    (const char (*)[35])byte_1AD8EBE0);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1664));
                  *(_DWORD *)(((v2 + 1664) >> 3) + 0x7FFF8000) = -117901064;
                  v7 = -1;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1728) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 256);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1728),
                    &byte_1AD8EC40,
                    (const std::allocator<char> *)(v2 + 256));
                  v37 = common::tools::TxtFile::Row::assignToStr(
                          row,
                          (const std::string *)(v2 + 1728),
                          (std::string *)(v2 + 832)) != 0;
                  std::string::~string((void *)(v2 + 1728));
                  *(_DWORD *)(((v2 + 1728) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 256);
                  *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                  if ( v37 )
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
                      "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
                      "init",
                      672);
                    v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 1792),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                      v38,
                      (const char (*)[38])byte_1AD8EC80);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1792));
                    *(_DWORD *)(((v2 + 1792) >> 3) + 0x7FFF8000) = -117901064;
                    v7 = -1;
                  }
                  else
                  {
                    v39 = ((v2 + 640) >> 3) + 2147450880;
                    *(_WORD *)v39 = 0;
                    *(_BYTE *)(v39 + 2) = 0;
                    v40 = (_DWORD *)(((v2 + 2592) >> 3) + 2147450880);
                    *v40 = 0;
                    v40[1] = 0;
                    *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 272);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 2592),
                      ";",
                      (const std::allocator<char> *)(v2 + 272));
                    *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 288);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 2624),
                      ",",
                      (const std::allocator<char> *)(v2 + 288));
                    v68._M_array = (std::initializer_list<std::string >::iterator)(v2 + 2592);
                    v68._M_len = 2LL;
                    *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 304));
                    std::vector<std::string>::vector(
                      (std::vector<std::string> *const)(v2 + 640),
                      v68,
                      (const std::vector<std::string>::allocator_type *)(v2 + 304));
                    v41 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                            (const std::string *)(v2 + 832),
                            (const std::vector<std::string> *)(v2 + 640),
                            &this->safe_destination_group,
                            1) != 0;
                    std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 640));
                    v42 = ((v2 + 640) >> 3) + 2147450880;
                    *(_WORD *)v42 = -1800;
                    *(_BYTE *)(v42 + 2) = -8;
                    std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 304));
                    *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
                    for ( m = (char *)(v2 + 2656); m != (char *)(v2 + 2592); std::string::~string(m) )
                      m -= 32;
                    v44 = (_DWORD *)(((v2 + 2592) >> 3) + 2147450880);
                    *v44 = -117901064;
                    v44[1] = -117901064;
                    std::allocator<char>::~allocator(v2 + 288);
                    *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
                    std::allocator<char>::~allocator(v2 + 272);
                    *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
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
                        "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
                        "init",
                        677);
                      v45 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 1856),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                        v45,
                        (const char (*)[38])byte_1AD8EC80);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1856));
                      *(_DWORD *)(((v2 + 1856) >> 3) + 0x7FFF8000) = -117901064;
                      v7 = -1;
                    }
                    else
                    {
                      *(_DWORD *)(((v2 + 1920) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 320);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 1920),
                        &byte_1AD8ECE0,
                        (const std::allocator<char> *)(v2 + 320));
                      v46 = common::tools::TxtFile::Row::assignToStr(
                              row,
                              (const std::string *)(v2 + 1920),
                              (std::string *)(v2 + 832)) != 0;
                      std::string::~string((void *)(v2 + 1920));
                      *(_DWORD *)(((v2 + 1920) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 320);
                      *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
                      if ( v46 )
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
                          "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
                          "init",
                          682);
                        v47 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                (common::milog::MiLogStream *const)(v2 + 1984),
                                (const char (*)[16])"[CONFIG_ERROR] ");
                        common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                          v47,
                          (const char (*)[32])byte_1AD8ED20);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1984));
                        *(_DWORD *)(((v2 + 1984) >> 3) + 0x7FFF8000) = -117901064;
                        v7 = -1;
                      }
                      else
                      {
                        v48 = ((v2 + 704) >> 3) + 2147450880;
                        *(_WORD *)v48 = 0;
                        *(_BYTE *)(v48 + 2) = 0;
                        v49 = (_DWORD *)(((v2 + 2688) >> 3) + 2147450880);
                        *v49 = 0;
                        v49[1] = 0;
                        *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 336);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 2688),
                          ";",
                          (const std::allocator<char> *)(v2 + 336));
                        *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 352);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 2720),
                          ",",
                          (const std::allocator<char> *)(v2 + 352));
                        v69._M_array = (std::initializer_list<std::string >::iterator)(v2 + 2688);
                        v69._M_len = 2LL;
                        *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 368));
                        std::vector<std::string>::vector(
                          (std::vector<std::string> *const)(v2 + 704),
                          v69,
                          (const std::vector<std::string>::allocator_type *)(v2 + 368));
                        v50 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                                (const std::string *)(v2 + 832),
                                (const std::vector<std::string> *)(v2 + 704),
                                &this->destination_group,
                                1) != 0;
                        std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 704));
                        v51 = ((v2 + 704) >> 3) + 2147450880;
                        *(_WORD *)v51 = -1800;
                        *(_BYTE *)(v51 + 2) = -8;
                        std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 368));
                        *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
                        for ( n = (char *)(v2 + 2752); n != (char *)(v2 + 2688); std::string::~string(n) )
                          n -= 32;
                        v53 = (_DWORD *)(((v2 + 2688) >> 3) + 2147450880);
                        *v53 = -117901064;
                        v53[1] = -117901064;
                        std::allocator<char>::~allocator(v2 + 352);
                        *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
                        std::allocator<char>::~allocator(v2 + 336);
                        *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
                        if ( v50 )
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
                            "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
                            "init",
                            687);
                          v54 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                  (common::milog::MiLogStream *const)(v2 + 2048),
                                  (const char (*)[16])"[CONFIG_ERROR] ");
                          common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                            v54,
                            (const char (*)[32])byte_1AD8ED20);
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2048));
                          *(_DWORD *)(((v2 + 2048) >> 3) + 0x7FFF8000) = -117901064;
                          v7 = -1;
                        }
                        else
                        {
                          *(_DWORD *)(((v2 + 2112) >> 3) + 0x7FFF8000) = 0;
                          *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 1;
                          std::allocator<char>::allocator(v2 + 384);
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)(v2 + 2112),
                            &byte_1AD8ED60,
                            (const std::allocator<char> *)(v2 + 384));
                          v55 = common::tools::TxtFile::Row::assignToStr(
                                  row,
                                  (const std::string *)(v2 + 2112),
                                  (std::string *)(v2 + 832)) != 0;
                          std::string::~string((void *)(v2 + 2112));
                          *(_DWORD *)(((v2 + 2112) >> 3) + 0x7FFF8000) = -117901064;
                          std::allocator<char>::~allocator(v2 + 384);
                          *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
                          if ( v55 )
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
                              "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
                              "init",
                              692);
                            v56 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                    (common::milog::MiLogStream *const)(v2 + 2176),
                                    (const char (*)[16])"[CONFIG_ERROR] ");
                            common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                              v56,
                              (const char (*)[35])byte_1AD8EDA0);
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2176));
                            *(_DWORD *)(((v2 + 2176) >> 3) + 0x7FFF8000) = -117901064;
                            v7 = -1;
                          }
                          else
                          {
                            v57 = ((v2 + 768) >> 3) + 2147450880;
                            *(_WORD *)v57 = 0;
                            *(_BYTE *)(v57 + 2) = 0;
                            v58 = (_DWORD *)(((v2 + 2784) >> 3) + 2147450880);
                            *v58 = 0;
                            v58[1] = 0;
                            *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = 1;
                            std::allocator<char>::allocator(v2 + 400);
                            std::string::basic_string<std::allocator<char>>(
                              (std::string *const)(v2 + 2784),
                              ";",
                              (const std::allocator<char> *)(v2 + 400));
                            *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = 1;
                            std::allocator<char>::allocator(v2 + 416);
                            std::string::basic_string<std::allocator<char>>(
                              (std::string *const)(v2 + 2816),
                              ",",
                              (const std::allocator<char> *)(v2 + 416));
                            v70._M_array = (std::initializer_list<std::string >::iterator)(v2 + 2784);
                            v70._M_len = 2LL;
                            *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = 1;
                            std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 432));
                            std::vector<std::string>::vector(
                              (std::vector<std::string> *const)(v2 + 768),
                              v70,
                              (const std::vector<std::string>::allocator_type *)(v2 + 432));
                            v59 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                                    (const std::string *)(v2 + 832),
                                    (const std::vector<std::string> *)(v2 + 768),
                                    &this->certain_final_monster_id,
                                    1) != 0;
                            std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 768));
                            v60 = ((v2 + 768) >> 3) + 2147450880;
                            *(_WORD *)v60 = -1800;
                            *(_BYTE *)(v60 + 2) = -8;
                            std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 432));
                            *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = -8;
                            for ( ii = (char *)(v2 + 2848); ii != (char *)(v2 + 2784); std::string::~string(ii) )
                              ii -= 32;
                            v62 = (_DWORD *)(((v2 + 2784) >> 3) + 2147450880);
                            *v62 = -117901064;
                            v62[1] = -117901064;
                            std::allocator<char>::~allocator(v2 + 416);
                            *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
                            std::allocator<char>::~allocator(v2 + 400);
                            *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
                            if ( v59 )
                            {
                              *(_DWORD *)(((v2 + 2240) >> 3) + 0x7FFF8000) = 0;
                              if ( *(char *)(((v2 + 2240) >> 3) + 0x7FFF8000) < 0
                                || *(_BYTE *)(((v2 + 2271) >> 3) + 0x7FFF8000) != 0
                                && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 2271) >> 3) + 0x7FFF8000) )
                              {
                                __asan_report_store_n(v2 + 2240, 32LL);
                              }
                              common::milog::MiLogStream::create(
                                (common::milog::MiLogStream *)(v2 + 2240),
                                &common::milog::MiLogDefault::default_log_obj_,
                                4u,
                                "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
                                "init",
                                697);
                              v63 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                      (common::milog::MiLogStream *const)(v2 + 2240),
                                      (const char (*)[16])"[CONFIG_ERROR] ");
                              common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                                v63,
                                (const char (*)[35])byte_1AD8EDA0);
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2240));
                              *(_DWORD *)(((v2 + 2240) >> 3) + 0x7FFF8000) = -117901064;
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
  std::string::~string((void *)(v2 + 832));
  if ( v71 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 104) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF806C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8160) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862749) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450988 - (((_DWORD)v4 + 2147450996) & 0xFFFFFFF8) + 252) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 2880LL, v71);
  }
  return v7;
};

// Line 705: range 00000000144CDF6C-00000000144CF25C
int32_t __cdecl data::HuntingGroupInfoExcelConfig::init(
        data::HuntingGroupInfoExcelConfig *const this,
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
  bool t; // [rsp+0h] [rbp-490h]
  bool ta; // [rsp+0h] [rbp-490h]
  bool tb; // [rsp+0h] [rbp-490h]
  bool tc; // [rsp+0h] [rbp-490h]
  char v24[1136]; // [rsp+20h] [rbp-470h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1088LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "22 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 24 9 <unknown> 224 32 11 val_str:706 288 32 9 "
                        "<unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <"
                        "unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <u"
                        "nknown> 992 64 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::HuntingGroupInfoExcelConfig::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
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
  v4[536862748] = -218959118;
  v4[536862750] = -218959118;
  v4[536862753] = -202116109;
  std::string::basic_string(v2 + 224);
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 288),
    "GroupID",
    (const std::allocator<char> *)(v2 + 32));
  t = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 288), &this->group_id) != 0;
  std::string::~string((void *)(v2 + 288));
  *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
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
      "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
      "init",
      709);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 352),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v5, (const char (*)[28])byte_1AD61BE0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
    *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 416),
      "RegionId",
      (const std::allocator<char> *)(v2 + 48));
    ta = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 416), &this->region_id) != 0;
    std::string::~string((void *)(v2 + 416));
    *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( ta )
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
        "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
        "init",
        714);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 480),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v7, (const char (*)[29])byte_1AD8E440);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
      *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 544),
        &byte_1AD8EFA0,
        (const std::allocator<char> *)(v2 + 64));
      tb = common::tools::TxtFile::Row::assignToEnum<data::HuntingCluePointType>(
             row,
             (const std::string *)(v2 + 544),
             &this->point_type) != 0;
      std::string::~string((void *)(v2 + 544));
      *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
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
          "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
          "init",
          719);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 608),
               (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v8, (const char (*)[36])byte_1AD8EFE0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
        *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 672),
          &byte_1AD8F040,
          (const std::allocator<char> *)(v2 + 80));
        tc = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 672), (std::string *)(v2 + 224)) != 0;
        std::string::~string((void *)(v2 + 672));
        *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( tc )
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
            "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
            "init",
            724);
          v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v2 + 736),
                 (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v9, (const char (*)[32])byte_1AD8F080);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 736));
          *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
          v6 = -1;
        }
        else
        {
          v10 = ((v2 + 160) >> 3) + 2147450880;
          *(_WORD *)v10 = 0;
          *(_BYTE *)(v10 + 2) = 0;
          v11 = (_DWORD *)(((v2 + 992) >> 3) + 2147450880);
          *v11 = 0;
          v11[1] = 0;
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 96);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 992),
            ";",
            (const std::allocator<char> *)(v2 + 96));
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 112);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1024),
            ",",
            (const std::allocator<char> *)(v2 + 112));
          *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
          std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 128));
          std::vector<std::string>::vector(
            (std::vector<std::string> *const)(v2 + 160),
            (std::initializer_list<std::string >)__PAIR128__(2LL, v2 + 992),
            (const std::vector<std::string>::allocator_type *)(v2 + 128));
          v12 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                  (const std::string *)(v2 + 224),
                  (const std::vector<std::string> *)(v2 + 160),
                  &this->ref_index,
                  1) != 0;
          std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 160));
          v13 = ((v2 + 160) >> 3) + 2147450880;
          *(_WORD *)v13 = -1800;
          *(_BYTE *)(v13 + 2) = -8;
          std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 128));
          *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
          for ( i = (char *)(v2 + 1056); i != (char *)(v2 + 992); std::string::~string(i) )
            i -= 32;
          v15 = (_DWORD *)(((v2 + 992) >> 3) + 2147450880);
          *v15 = -117901064;
          v15[1] = -117901064;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          std::allocator<char>::~allocator(v2 + 96);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( v12 )
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
              "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
              "init",
              729);
            v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 800),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v16, (const char (*)[32])byte_1AD8F080);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 800));
            *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
            v6 = -1;
          }
          else
          {
            *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 144);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 864),
              &byte_1AD8F0C0,
              (const std::allocator<char> *)(v2 + 144));
            v17 = common::tools::TxtFile::Row::assignToEnum<data::HuntingMonsterCreatePosType>(
                    row,
                    (const std::string *)(v2 + 864),
                    &this->pos_type) != 0;
            std::string::~string((void *)(v2 + 864));
            *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 144);
            *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
            if ( v17 )
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
                "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
                "init",
                734);
              v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 928),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v18, (const char (*)[36])byte_1AD8F100);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 928));
              *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
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
  std::string::~string((void *)(v2 + 224));
  if ( v24 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8080) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862730) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450912 - (((_DWORD)v4 + 2147450920) & 0xFFFFFFF8) + 104) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1088LL, v24);
  }
  return v6;
};

// Line 742: range 00000000144CF25E-00000000144D03F1
int32_t __cdecl data::HuntingClueMonsterExcelConfig::init(
        data::HuntingClueMonsterExcelConfig *const this,
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
  *(_QWORD *)(v2 + 16) = data::HuntingClueMonsterExcelConfig::init;
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
    "ConfigID",
    (const std::allocator<char> *)(v2 + 48));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 160), &this->config_id) != 0;
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
      "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
      "init",
      745);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 224),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v6, (const char (*)[29])byte_1AD8F1A0);
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
      &byte_1AD4B360,
      (const std::allocator<char> *)(v2 + 64));
    v8 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 288), &this->monster_id) != 0;
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
        "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
        "init",
        750);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 352),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v9, (const char (*)[29])byte_1AD4B3A0);
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
        &byte_1AD8F1E0,
        (const std::allocator<char> *)(v2 + 80));
      v10 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
              row,
              (const std::string *)(v2 + 416),
              &this->revise_level_id) != 0;
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
          "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
          "init",
          755);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 480),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v11, (const char (*)[35])byte_1AD8F220);
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
          &byte_1AD8F280,
          (const std::allocator<char> *)(v2 + 96));
        v12 = common::tools::TxtFile::Row::assignToEnum<data::HuntingMonsterGroupType>(
                row,
                (const std::string *)(v2 + 544),
                &this->group_type) != 0;
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
            "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
            "init",
            760);
          v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 608),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v13, (const char (*)[30])byte_1AD8F2C0);
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
            &byte_1AD8F300,
            (const std::allocator<char> *)(v2 + 112));
          v14 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                  row,
                  (const std::string *)(v2 + 672),
                  &this->monster_group_id) != 0;
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
              "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
              "init",
              765);
            v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 736),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v15, (const char (*)[26])byte_1AD8F340);
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
              &byte_1AD52740,
              (const std::allocator<char> *)(v2 + 128));
            v16 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                    row,
                    (const std::string *)(v2 + 800),
                    &this->level) != 0;
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
                "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
                "init",
                770);
              v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 864),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v17, (const char (*)[27])byte_1AD52780);
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
                &byte_1AD8F380,
                (const std::allocator<char> *)(v2 + 144));
              v18 = common::tools::TxtFile::Row::assignToNum<bool>(
                      row,
                      (const std::string *)(v2 + 928),
                      &this->is_clue_monster) != 0;
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
                  "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
                  "init",
                  775);
                v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 992),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v19, (const char (*)[42])byte_1AD8F3C0);
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

// Line 783: range 00000000144D03F2-00000000144D0E8A
int32_t __cdecl data::HuntingClueGatherExcelConfig::init(
        data::HuntingClueGatherExcelConfig *const this,
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
  *(_QWORD *)(v2 + 16) = data::HuntingClueGatherExcelConfig::init;
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
    "ConfigID",
    (const std::allocator<char> *)(v2 + 32));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 96), &this->config_id) != 0;
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
      "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
      "init",
      786);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 160),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v6, (const char (*)[29])byte_1AD8F1A0);
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
      "GatherID",
      (const std::allocator<char> *)(v2 + 48));
    v8 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 224), &this->gather_id) != 0;
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
        "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
        "init",
        791);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v9, (const char (*)[29])byte_1AD8F460);
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
        &byte_1AD8F300,
        (const std::allocator<char> *)(v2 + 64));
      v10 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
              row,
              (const std::string *)(v2 + 352),
              &this->gather_group_id) != 0;
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
          "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
          "init",
          796);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 416),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v11, (const char (*)[26])byte_1AD8F340);
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
          &byte_1AD8F4A0,
          (const std::allocator<char> *)(v2 + 80));
        v12 = common::tools::TxtFile::Row::assignToNum<bool>(
                row,
                (const std::string *)(v2 + 480),
                &this->is_clue_gather) != 0;
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
            "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
            "init",
            801);
          v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 544),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v13, (const char (*)[45])byte_1AD8F4E0);
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

// Line 809: range 00000000144D0E8C-00000000144D1A17
int32_t __cdecl data::HuntingRefreshCond::init(
        data::HuntingRefreshCond *const this,
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
  int32_t result; // eax
  bool t; // [rsp+8h] [rbp-2E8h]
  bool ta; // [rsp+8h] [rbp-2E8h]
  char v18[720]; // [rsp+20h] [rbp-2D0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(672LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "13 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 24 "
                        "9 <unknown> 192 32 11 val_str:810 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 3"
                        "2 9 <unknown> 512 32 9 <unknown> 576 64 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::HuntingRefreshCond::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
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
  v4[536862740] = -202116109;
  std::string::basic_string(v2 + 192);
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 256),
    &byte_1AD3FD80,
    (const std::allocator<char> *)(v2 + 48));
  t = common::tools::TxtFile::Row::assignToEnum<data::HuntingRefreshCondType>(
        row,
        (const std::string *)(v2 + 256),
        &this->cond_type) != 0;
  std::string::~string((void *)(v2 + 256));
  *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
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
      "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
      "init",
      813);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 320),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v5, (const char (*)[27])byte_1AD3FDC0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 384),
      &byte_1AD3FE00,
      (const std::allocator<char> *)(v2 + 64));
    ta = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 384), (std::string *)(v2 + 192)) != 0;
    std::string::~string((void *)(v2 + 384));
    *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( ta )
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
        "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
        "init",
        818);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 448),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v7, (const char (*)[27])byte_1AD3FE40);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
      *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v8 = ((v2 + 128) >> 3) + 2147450880;
      *(_WORD *)v8 = 0;
      *(_BYTE *)(v8 + 2) = 0;
      v9 = (_DWORD *)(((v2 + 576) >> 3) + 2147450880);
      *v9 = 0;
      v9[1] = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 576),
        ";",
        (const std::allocator<char> *)(v2 + 80));
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 96);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 608),
        ",",
        (const std::allocator<char> *)(v2 + 96));
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 112));
      std::vector<std::string>::vector(
        (std::vector<std::string> *const)(v2 + 128),
        (std::initializer_list<std::string >)__PAIR128__(2LL, v2 + 576),
        (const std::vector<std::string>::allocator_type *)(v2 + 112));
      v10 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
              (const std::string *)(v2 + 192),
              (const std::vector<std::string> *)(v2 + 128),
              &this->param,
              1) != 0;
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 128));
      v11 = ((v2 + 128) >> 3) + 2147450880;
      *(_WORD *)v11 = -1800;
      *(_BYTE *)(v11 + 2) = -8;
      std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 112));
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      for ( i = (char *)(v2 + 640); i != (char *)(v2 + 576); std::string::~string(i) )
        i -= 32;
      v13 = (_DWORD *)(((v2 + 576) >> 3) + 2147450880);
      *v13 = -117901064;
      v13[1] = -117901064;
      std::allocator<char>::~allocator(v2 + 96);
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( v10 )
      {
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 96 + 127) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 512, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 512),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
          "init",
          823);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 512),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v14, (const char (*)[27])byte_1AD3FE40);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
      }
      else
      {
        v6 = 0;
      }
    }
  }
  std::string::~string((void *)(v2 + 192));
  result = v6;
  if ( v18 == (char *)v2 )
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

// Line 831: range 00000000144D1A18-00000000144D62A3
int32_t __cdecl data::HuntingMonsterExcelConfig::init(
        data::HuntingMonsterExcelConfig *const this,
        const common::tools::TxtFile::Row *row)
{
  unsigned __int64 v2; // r15
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool v5; // r12
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r12d
  bool v8; // r12
  common::milog::MiLogStream *v9; // rax
  bool v10; // r12
  common::milog::MiLogStream *v11; // rax
  bool v12; // r12
  common::milog::MiLogStream *v13; // rax
  bool v14; // r12
  common::milog::MiLogStream *v15; // rax
  unsigned __int64 v16; // rax
  _DWORD *v17; // rax
  bool v18; // r14
  unsigned __int64 v19; // rax
  char *j; // r12
  _DWORD *v21; // rax
  common::milog::MiLogStream *v22; // rax
  bool v23; // r12
  common::milog::MiLogStream *v24; // rax
  bool v25; // r12
  common::milog::MiLogStream *v26; // rax
  bool v27; // r12
  common::milog::MiLogStream *v28; // rax
  bool v29; // r12
  common::milog::MiLogStream *v30; // rax
  bool v31; // r12
  common::milog::MiLogStream *v32; // rax
  unsigned __int64 v33; // rax
  _DWORD *v34; // rax
  bool v35; // r14
  unsigned __int64 v36; // rax
  char *k; // r12
  _DWORD *v38; // rax
  common::milog::MiLogStream *v39; // rax
  bool v40; // r12
  common::milog::MiLogStream *v41; // rax
  bool v42; // r12
  common::milog::MiLogStream *v43; // rax
  bool v44; // r12
  common::milog::MiLogStream *v45; // rax
  bool v46; // r12
  data::HuntingRefreshCondType *p_cond_type; // r12
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  bool v51; // r12
  bool v52; // r12
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  std::vector<unsigned int> *p_param; // r12
  unsigned __int64 v57; // rax
  _DWORD *v58; // rax
  bool v59; // r14
  unsigned __int64 v60; // rax
  char *m; // r12
  _DWORD *v62; // rax
  common::milog::MiLogStream *v63; // rax
  bool v64; // r12
  common::milog::MiLogStream *v65; // rax
  bool v66; // r12
  common::milog::MiLogStream *v67; // rax
  unsigned __int64 v68; // rax
  _DWORD *v69; // rax
  bool v70; // r14
  unsigned __int64 v71; // rax
  char *n; // r12
  _DWORD *v73; // rax
  common::milog::MiLogStream *v74; // rax
  bool v75; // r12
  common::milog::MiLogStream *v76; // rax
  bool v77; // r12
  common::milog::MiLogStream *v78; // rax
  std::initializer_list<std::string > __l; // [rsp+10h] [rbp-11D0h]
  std::initializer_list<std::string > v81; // [rsp+20h] [rbp-11C0h]
  std::initializer_list<std::string > v82; // [rsp+30h] [rbp-11B0h]
  std::initializer_list<std::string > v83; // [rsp+40h] [rbp-11A0h]
  uint32_t array_count; // [rsp+68h] [rbp-1178h]
  uint32_t i; // [rsp+6Ch] [rbp-1174h]
  char v86[4464]; // [rsp+70h] [rbp-1170h] BYREF

  v2 = (unsigned __int64)v86;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_7(4416LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "87 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 <unkn"
                        "own> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 288 1 9 <unknown> 3"
                        "04 1 9 <unknown> 320 1 9 <unknown> 336 1 9 <unknown> 352 1 9 <unknown> 368 1 9 <unknown> 384 1 9"
                        " <unknown> 400 1 9 <unknown> 416 1 9 <unknown> 432 1 9 <unknown> 448 1 9 <unknown> 464 1 9 <unkn"
                        "own> 480 1 9 <unknown> 496 1 9 <unknown> 512 1 9 <unknown> 528 1 9 <unknown> 544 1 9 <unknown> 5"
                        "60 1 9 <unknown> 576 24 9 <unknown> 640 24 9 <unknown> 704 24 9 <unknown> 768 24 9 <unknown> 832"
                        " 32 11 val_str:834 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 <unknown>"
                        " 1152 32 9 <unknown> 1216 32 9 <unknown> 1280 32 9 <unknown> 1344 32 9 <unknown> 1408 32 9 <unkn"
                        "own> 1472 32 9 <unknown> 1536 32 9 <unknown> 1600 32 9 <unknown> 1664 32 9 <unknown> 1728 32 9 <"
                        "unknown> 1792 32 9 <unknown> 1856 32 9 <unknown> 1920 32 9 <unknown> 1984 32 9 <unknown> 2048 32"
                        " 9 <unknown> 2112 32 9 <unknown> 2176 32 9 <unknown> 2240 32 9 <unknown> 2304 32 9 <unknown> 236"
                        "8 32 9 <unknown> 2432 32 9 <unknown> 2496 32 9 <unknown> 2560 32 9 <unknown> 2624 32 9 <unknown>"
                        " 2688 32 9 <unknown> 2752 32 9 <unknown> 2816 32 9 <unknown> 2880 32 9 <unknown> 2944 32 9 <unkn"
                        "own> 3008 32 9 <unknown> 3072 32 9 <unknown> 3136 32 9 <unknown> 3200 32 9 <unknown> 3264 32 9 <"
                        "unknown> 3328 32 9 <unknown> 3392 32 9 <unknown> 3456 32 9 <unknown> 3520 32 9 <unknown> 3584 32"
                        " 9 <unknown> 3648 32 9 <unknown> 3712 64 9 <unknown> 3808 64 9 <unknown> 3904 64 9 <unknown> 400"
                        "0 64 9 <unknown> 4096 256 12 col_name:832";
  *(_QWORD *)(v2 + 16) = data::HuntingMonsterExcelConfig::init;
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
  v4[536862738] = -234881024;
  v4[536862739] = -218959118;
  v4[536862740] = -234881024;
  v4[536862741] = -218959118;
  v4[536862742] = -234881024;
  v4[536862743] = -218959118;
  v4[536862744] = -234881024;
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
  v4[536862838] = -218959118;
  v4[536862841] = -218959118;
  v4[536862844] = -218959118;
  v4[536862847] = -218959118;
  v4[536862856] = -202116109;
  v4[536862857] = -202116109;
  std::string::basic_string(v2 + 832);
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 896),
    "ConfigID",
    (const std::allocator<char> *)(v2 + 48));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 896), &this->config_id) != 0;
  std::string::~string((void *)(v2 + 896));
  *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
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
      "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
      "init",
      837);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 960),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v6, (const char (*)[29])byte_1AD8F1A0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 960));
    *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 1024),
      &byte_1AD4B360,
      (const std::allocator<char> *)(v2 + 64));
    v8 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
           row,
           (const std::string *)(v2 + 1024),
           &this->monster_id) != 0;
    std::string::~string((void *)(v2 + 1024));
    *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
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
        "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
        "init",
        842);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 1088),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v9, (const char (*)[29])byte_1AD4B3A0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1088));
      *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -117901064;
      v7 = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 1152),
        &byte_1AD8FCE0,
        (const std::allocator<char> *)(v2 + 80));
      v10 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
              row,
              (const std::string *)(v2 + 1152),
              &this->associated_monster_group_id) != 0;
      std::string::~string((void *)(v2 + 1152));
      *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( v10 )
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
          "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
          "init",
          847);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 1216),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(v11, (const char (*)[38])byte_1AD8FD20);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1216));
        *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = -117901064;
        v7 = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 1280),
          &byte_1AD8FD80,
          (const std::allocator<char> *)(v2 + 96));
        v12 = common::tools::TxtFile::Row::assignToEnum<data::HuntingMonsterFinishType>(
                row,
                (const std::string *)(v2 + 1280),
                &this->hunting_finish_type) != 0;
        std::string::~string((void *)(v2 + 1280));
        *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( v12 )
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
            "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
            "init",
            852);
          v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 1344),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v13, (const char (*)[39])byte_1AD8FDC0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1344));
          *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = -117901064;
          v7 = -1;
        }
        else
        {
          *(_DWORD *)(((v2 + 1408) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 112);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1408),
            "affix",
            (const std::allocator<char> *)(v2 + 112));
          v14 = common::tools::TxtFile::Row::assignToStr(
                  row,
                  (const std::string *)(v2 + 1408),
                  (std::string *)(v2 + 832)) != 0;
          std::string::~string((void *)(v2 + 1408));
          *(_DWORD *)(((v2 + 1408) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( v14 )
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
              "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
              "init",
              857);
            v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 1472),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v15, (const char (*)[26])byte_1AD8FE60);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1472));
            *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = -117901064;
            v7 = -1;
          }
          else
          {
            v16 = ((v2 + 576) >> 3) + 2147450880;
            *(_WORD *)v16 = 0;
            *(_BYTE *)(v16 + 2) = 0;
            v17 = (_DWORD *)(((v2 + 3712) >> 3) + 2147450880);
            *v17 = 0;
            v17[1] = 0;
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 128);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 3712),
              ";",
              (const std::allocator<char> *)(v2 + 128));
            *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 144);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 3744),
              ",",
              (const std::allocator<char> *)(v2 + 144));
            __l._M_array = (std::initializer_list<std::string >::iterator)(v2 + 3712);
            __l._M_len = 2LL;
            *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
            std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 160));
            std::vector<std::string>::vector(
              (std::vector<std::string> *const)(v2 + 576),
              __l,
              (const std::vector<std::string>::allocator_type *)(v2 + 160));
            v18 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                    (const std::string *)(v2 + 832),
                    (const std::vector<std::string> *)(v2 + 576),
                    &this->affix,
                    1) != 0;
            std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 576));
            v19 = ((v2 + 576) >> 3) + 2147450880;
            *(_WORD *)v19 = -1800;
            *(_BYTE *)(v19 + 2) = -8;
            std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 160));
            *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
            for ( j = (char *)(v2 + 3776); j != (char *)(v2 + 3712); std::string::~string(j) )
              j -= 32;
            v21 = (_DWORD *)(((v2 + 3712) >> 3) + 2147450880);
            *v21 = -117901064;
            v21[1] = -117901064;
            std::allocator<char>::~allocator(v2 + 144);
            *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
            std::allocator<char>::~allocator(v2 + 128);
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
            if ( v18 )
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
                "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
                "init",
                862);
              v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1536),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v22, (const char (*)[26])byte_1AD8FE60);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1536));
              *(_DWORD *)(((v2 + 1536) >> 3) + 0x7FFF8000) = -117901064;
              v7 = -1;
            }
            else
            {
              *(_DWORD *)(((v2 + 1600) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 176);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1600),
                "AbilityGroup",
                (const std::allocator<char> *)(v2 + 176));
              v23 = common::tools::TxtFile::Row::assignToStr(
                      row,
                      (const std::string *)(v2 + 1600),
                      &this->ability_group) != 0;
              std::string::~string((void *)(v2 + 1600));
              *(_DWORD *)(((v2 + 1600) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 176);
              *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
              if ( v23 )
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
                  "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
                  "init",
                  867);
                v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1664),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v24, (const char (*)[33])byte_1AD4A880);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1664));
                *(_DWORD *)(((v2 + 1664) >> 3) + 0x7FFF8000) = -117901064;
                v7 = -1;
              }
              else
              {
                *(_DWORD *)(((v2 + 1728) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 192);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1728),
                  &byte_1AD8FEA0,
                  (const std::allocator<char> *)(v2 + 192));
                v25 = common::tools::TxtFile::Row::assignToEnum<data::HuntingMonsterCreatePosType>(
                        row,
                        (const std::string *)(v2 + 1728),
                        &this->create_pos_type) != 0;
                std::string::~string((void *)(v2 + 1728));
                *(_DWORD *)(((v2 + 1728) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 192);
                *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                if ( v25 )
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
                    "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
                    "init",
                    872);
                  v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 1792),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                    v26,
                    (const char (*)[39])byte_1AD8FEE0);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1792));
                  *(_DWORD *)(((v2 + 1792) >> 3) + 0x7FFF8000) = -117901064;
                  v7 = -1;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1856) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 208);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1856),
                    &byte_1AD52740,
                    (const std::allocator<char> *)(v2 + 208));
                  v27 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                          row,
                          (const std::string *)(v2 + 1856),
                          &this->level) != 0;
                  std::string::~string((void *)(v2 + 1856));
                  *(_DWORD *)(((v2 + 1856) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 208);
                  *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                  if ( v27 )
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
                      "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
                      "init",
                      877);
                    v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 1920),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                      v28,
                      (const char (*)[27])byte_1AD52780);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1920));
                    *(_DWORD *)(((v2 + 1920) >> 3) + 0x7FFF8000) = -117901064;
                    v7 = -1;
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 1984) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 224);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 1984),
                      &byte_1AD8F1E0,
                      (const std::allocator<char> *)(v2 + 224));
                    v29 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                            row,
                            (const std::string *)(v2 + 1984),
                            &this->revise_level_id) != 0;
                    std::string::~string((void *)(v2 + 1984));
                    *(_DWORD *)(((v2 + 1984) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 224);
                    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                    if ( v29 )
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
                        "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
                        "init",
                        882);
                      v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 2048),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                        v30,
                        (const char (*)[35])byte_1AD8F220);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2048));
                      *(_DWORD *)(((v2 + 2048) >> 3) + 0x7FFF8000) = -117901064;
                      v7 = -1;
                    }
                    else
                    {
                      *(_DWORD *)(((v2 + 2112) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 240);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 2112),
                        &byte_1AD8FF40,
                        (const std::allocator<char> *)(v2 + 240));
                      v31 = common::tools::TxtFile::Row::assignToStr(
                              row,
                              (const std::string *)(v2 + 2112),
                              (std::string *)(v2 + 832)) != 0;
                      std::string::~string((void *)(v2 + 2112));
                      *(_DWORD *)(((v2 + 2112) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 240);
                      *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                      if ( v31 )
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
                          "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
                          "init",
                          887);
                        v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                (common::milog::MiLogStream *const)(v2 + 2176),
                                (const char (*)[16])"[CONFIG_ERROR] ");
                        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                          v32,
                          (const char (*)[33])byte_1AD8FF80);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2176));
                        *(_DWORD *)(((v2 + 2176) >> 3) + 0x7FFF8000) = -117901064;
                        v7 = -1;
                      }
                      else
                      {
                        v33 = ((v2 + 640) >> 3) + 2147450880;
                        *(_WORD *)v33 = 0;
                        *(_BYTE *)(v33 + 2) = 0;
                        v34 = (_DWORD *)(((v2 + 3808) >> 3) + 2147450880);
                        *v34 = 0;
                        v34[1] = 0;
                        *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 256);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 3808),
                          ";",
                          (const std::allocator<char> *)(v2 + 256));
                        *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 272);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 3840),
                          ",",
                          (const std::allocator<char> *)(v2 + 272));
                        v81._M_array = (std::initializer_list<std::string >::iterator)(v2 + 3808);
                        v81._M_len = 2LL;
                        *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 288));
                        std::vector<std::string>::vector(
                          (std::vector<std::string> *const)(v2 + 640),
                          v81,
                          (const std::vector<std::string>::allocator_type *)(v2 + 288));
                        v35 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                                (const std::string *)(v2 + 832),
                                (const std::vector<std::string> *)(v2 + 640),
                                &this->city_list,
                                1) != 0;
                        std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 640));
                        v36 = ((v2 + 640) >> 3) + 2147450880;
                        *(_WORD *)v36 = -1800;
                        *(_BYTE *)(v36 + 2) = -8;
                        std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 288));
                        *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
                        for ( k = (char *)(v2 + 3872); k != (char *)(v2 + 3808); std::string::~string(k) )
                          k -= 32;
                        v38 = (_DWORD *)(((v2 + 3808) >> 3) + 2147450880);
                        *v38 = -117901064;
                        v38[1] = -117901064;
                        std::allocator<char>::~allocator(v2 + 272);
                        *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                        std::allocator<char>::~allocator(v2 + 256);
                        *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                        if ( v35 )
                        {
                          *(_DWORD *)(((v2 + 2240) >> 3) + 0x7FFF8000) = 0;
                          if ( *(char *)(((v2 + 2240) >> 3) + 0x7FFF8000) < 0
                            || *(_BYTE *)(((v2 + 2271) >> 3) + 0x7FFF8000) != 0
                            && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 2271) >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_store_n(v2 + 2240, 32LL);
                          }
                          common::milog::MiLogStream::create(
                            (common::milog::MiLogStream *)(v2 + 2240),
                            &common::milog::MiLogDefault::default_log_obj_,
                            4u,
                            "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
                            "init",
                            892);
                          v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                  (common::milog::MiLogStream *const)(v2 + 2240),
                                  (const char (*)[16])"[CONFIG_ERROR] ");
                          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                            v39,
                            (const char (*)[33])byte_1AD8FF80);
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2240));
                          *(_DWORD *)(((v2 + 2240) >> 3) + 0x7FFF8000) = -117901064;
                          v7 = -1;
                        }
                        else
                        {
                          *(_DWORD *)(((v2 + 2304) >> 3) + 0x7FFF8000) = 0;
                          *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 1;
                          std::allocator<char>::allocator(v2 + 304);
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)(v2 + 2304),
                            &byte_1AD8E380,
                            (const std::allocator<char> *)(v2 + 304));
                          v40 = common::tools::TxtFile::Row::assignToEnum<data::HuntingOfferDifficultyType>(
                                  row,
                                  (const std::string *)(v2 + 2304),
                                  &this->difficulty) != 0;
                          std::string::~string((void *)(v2 + 2304));
                          *(_DWORD *)(((v2 + 2304) >> 3) + 0x7FFF8000) = -117901064;
                          std::allocator<char>::~allocator(v2 + 304);
                          *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
                          if ( v40 )
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
                              "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
                              "init",
                              897);
                            v41 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                    (common::milog::MiLogStream *const)(v2 + 2368),
                                    (const char (*)[16])"[CONFIG_ERROR] ");
                            common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                              v41,
                              (const char (*)[27])byte_1AD8E3C0);
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2368));
                            *(_DWORD *)(((v2 + 2368) >> 3) + 0x7FFF8000) = -117901064;
                            v7 = -1;
                          }
                          else
                          {
                            *(_DWORD *)(((v2 + 2432) >> 3) + 0x7FFF8000) = 0;
                            *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 1;
                            std::allocator<char>::allocator(v2 + 320);
                            std::string::basic_string<std::allocator<char>>(
                              (std::string *const)(v2 + 2432),
                              &byte_1AD8FFE0,
                              (const std::allocator<char> *)(v2 + 320));
                            v42 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                    row,
                                    (const std::string *)(v2 + 2432),
                                    &this->limit_time) != 0;
                            std::string::~string((void *)(v2 + 2432));
                            *(_DWORD *)(((v2 + 2432) >> 3) + 0x7FFF8000) = -117901064;
                            std::allocator<char>::~allocator(v2 + 320);
                            *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
                            if ( v42 )
                            {
                              *(_DWORD *)(((v2 + 2496) >> 3) + 0x7FFF8000) = 0;
                              if ( *(char *)(((v2 + 2496) >> 3) + 0x7FFF8000) < 0
                                || *(_BYTE *)(((v2 + 2527) >> 3) + 0x7FFF8000) != 0
                                && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 2527) >> 3) + 0x7FFF8000) )
                              {
                                __asan_report_store_n(v2 + 2496, 32LL);
                              }
                              common::milog::MiLogStream::create(
                                (common::milog::MiLogStream *)(v2 + 2496),
                                &common::milog::MiLogDefault::default_log_obj_,
                                4u,
                                "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
                                "init",
                                902);
                              v43 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                      (common::milog::MiLogStream *const)(v2 + 2496),
                                      (const char (*)[16])"[CONFIG_ERROR] ");
                              common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                v43,
                                (const char (*)[33])byte_1AD90020);
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2496));
                              *(_DWORD *)(((v2 + 2496) >> 3) + 0x7FFF8000) = -117901064;
                              v7 = -1;
                            }
                            else
                            {
                              *(_DWORD *)(((v2 + 2560) >> 3) + 0x7FFF8000) = 0;
                              *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 1;
                              std::allocator<char>::allocator(v2 + 336);
                              std::string::basic_string<std::allocator<char>>(
                                (std::string *const)(v2 + 2560),
                                &byte_1AD90080,
                                (const std::allocator<char> *)(v2 + 336));
                              v44 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                      row,
                                      (const std::string *)(v2 + 2560),
                                      &this->search_point_num) != 0;
                              std::string::~string((void *)(v2 + 2560));
                              *(_DWORD *)(((v2 + 2560) >> 3) + 0x7FFF8000) = -117901064;
                              std::allocator<char>::~allocator(v2 + 336);
                              *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
                              if ( v44 )
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
                                  "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
                                  "init",
                                  907);
                                v45 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                        (common::milog::MiLogStream *const)(v2 + 2624),
                                        (const char (*)[16])"[CONFIG_ERROR] ");
                                common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                  v45,
                                  (const char (*)[39])byte_1AD900C0);
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2624));
                                *(_DWORD *)(((v2 + 2624) >> 3) + 0x7FFF8000) = -117901064;
                                v7 = -1;
                              }
                              else
                              {
                                std::vector<data::HuntingRefreshCond>::resize(&this->refresh_cond, 2uLL);
                                array_count = 0;
                                for ( i = 0; i <= 1; ++i )
                                {
                                  snprintf((char *)(v2 + 4096), 0x100uLL, asc_1AD90120, i + 1);
                                  *(_DWORD *)(((v2 + 2688) >> 3) + 0x7FFF8000) = 0;
                                  *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 1;
                                  std::allocator<char>::allocator(v2 + 352);
                                  std::string::basic_string<std::allocator<char>>(
                                    (std::string *const)(v2 + 2688),
                                    (const char *)(v2 + 4096),
                                    (const std::allocator<char> *)(v2 + 352));
                                  v46 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 2688));
                                  std::string::~string((void *)(v2 + 2688));
                                  *(_DWORD *)(((v2 + 2688) >> 3) + 0x7FFF8000) = -117901064;
                                  std::allocator<char>::~allocator(v2 + 352);
                                  *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
                                  if ( !v46 )
                                  {
                                    p_cond_type = &std::vector<data::HuntingRefreshCond>::operator[](
                                                     &this->refresh_cond,
                                                     i)->cond_type;
                                    *(_DWORD *)(((v2 + 2752) >> 3) + 0x7FFF8000) = 0;
                                    *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = 1;
                                    std::allocator<char>::allocator(v2 + 368);
                                    std::string::basic_string<std::allocator<char>>(
                                      (std::string *const)(v2 + 2752),
                                      (const char *)(v2 + 4096),
                                      (const std::allocator<char> *)(v2 + 368));
                                    LOBYTE(p_cond_type) = common::tools::TxtFile::Row::assignToEnum<data::HuntingRefreshCondType>(
                                                            row,
                                                            (const std::string *)(v2 + 2752),
                                                            p_cond_type) != 0;
                                    std::string::~string((void *)(v2 + 2752));
                                    *(_DWORD *)(((v2 + 2752) >> 3) + 0x7FFF8000) = -117901064;
                                    std::allocator<char>::~allocator(v2 + 368);
                                    *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
                                    if ( (_BYTE)p_cond_type )
                                    {
                                      *(_DWORD *)(((v2 + 2816) >> 3) + 0x7FFF8000) = 0;
                                      if ( *(char *)(((v2 + 2816) >> 3) + 0x7FFF8000) < 0
                                        || *(_BYTE *)(((v2 + 2847) >> 3) + 0x7FFF8000) != 0
                                        && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 2847) >> 3) + 0x7FFF8000) )
                                      {
                                        __asan_report_store_n(v2 + 2816, 32LL);
                                      }
                                      common::milog::MiLogStream::create(
                                        (common::milog::MiLogStream *)(v2 + 2816),
                                        &common::milog::MiLogDefault::default_log_obj_,
                                        4u,
                                        "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
                                        "init",
                                        919);
                                      v48 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                              (common::milog::MiLogStream *const)(v2 + 2816),
                                              (const char (*)[16])"[CONFIG_ERROR] ");
                                      v49 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                              v48,
                                              (const char (*)[14])byte_1AD38B80);
                                      v50 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                                              v49,
                                              (const char (*)[256])(v2 + 4096));
                                      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                                        v50,
                                        (const char (*)[7])byte_1AD38BC0);
                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2816));
                                      *(_DWORD *)(((v2 + 2816) >> 3) + 0x7FFF8000) = -117901064;
                                      v7 = -1;
                                      goto LABEL_115;
                                    }
                                    snprintf((char *)(v2 + 4096), 0x100uLL, asc_1AD90160, i + 1);
                                    *(_DWORD *)(((v2 + 2880) >> 3) + 0x7FFF8000) = 0;
                                    *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 1;
                                    std::allocator<char>::allocator(v2 + 384);
                                    std::string::basic_string<std::allocator<char>>(
                                      (std::string *const)(v2 + 2880),
                                      (const char *)(v2 + 4096),
                                      (const std::allocator<char> *)(v2 + 384));
                                    v51 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 2880));
                                    std::string::~string((void *)(v2 + 2880));
                                    *(_DWORD *)(((v2 + 2880) >> 3) + 0x7FFF8000) = -117901064;
                                    std::allocator<char>::~allocator(v2 + 384);
                                    *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
                                    if ( !v51 )
                                    {
                                      *(_DWORD *)(((v2 + 2944) >> 3) + 0x7FFF8000) = 0;
                                      *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = 1;
                                      std::allocator<char>::allocator(v2 + 400);
                                      std::string::basic_string<std::allocator<char>>(
                                        (std::string *const)(v2 + 2944),
                                        (const char *)(v2 + 4096),
                                        (const std::allocator<char> *)(v2 + 400));
                                      v52 = common::tools::TxtFile::Row::assignToStr(
                                              row,
                                              (const std::string *)(v2 + 2944),
                                              (std::string *)(v2 + 832)) != 0;
                                      std::string::~string((void *)(v2 + 2944));
                                      *(_DWORD *)(((v2 + 2944) >> 3) + 0x7FFF8000) = -117901064;
                                      std::allocator<char>::~allocator(v2 + 400);
                                      *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
                                      if ( v52 )
                                      {
                                        *(_DWORD *)(((v2 + 3008) >> 3) + 0x7FFF8000) = 0;
                                        if ( *(char *)(((v2 + 3008) >> 3) + 0x7FFF8000) < 0
                                          || *(_BYTE *)(((v2 + 3039) >> 3) + 0x7FFF8000) != 0
                                          && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 3039) >> 3) + 0x7FFF8000) )
                                        {
                                          __asan_report_store_n(v2 + 3008, 32LL);
                                        }
                                        common::milog::MiLogStream::create(
                                          (common::milog::MiLogStream *)(v2 + 3008),
                                          &common::milog::MiLogDefault::default_log_obj_,
                                          4u,
                                          "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
                                          "init",
                                          927);
                                        v53 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                (common::milog::MiLogStream *const)(v2 + 3008),
                                                (const char (*)[16])"[CONFIG_ERROR] ");
                                        v54 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                                v53,
                                                (const char (*)[14])byte_1AD38B80);
                                        v55 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                                                v54,
                                                (const char (*)[256])(v2 + 4096));
                                        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                                          v55,
                                          (const char (*)[7])byte_1AD38BC0);
                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3008));
                                        *(_DWORD *)(((v2 + 3008) >> 3) + 0x7FFF8000) = -117901064;
                                        v7 = -1;
                                        goto LABEL_115;
                                      }
                                      p_param = &std::vector<data::HuntingRefreshCond>::operator[](
                                                   &this->refresh_cond,
                                                   i)->param;
                                      v57 = ((v2 + 704) >> 3) + 2147450880;
                                      *(_WORD *)v57 = 0;
                                      *(_BYTE *)(v57 + 2) = 0;
                                      v58 = (_DWORD *)(((v2 + 3904) >> 3) + 2147450880);
                                      *v58 = 0;
                                      v58[1] = 0;
                                      *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = 1;
                                      std::allocator<char>::allocator(v2 + 416);
                                      std::string::basic_string<std::allocator<char>>(
                                        (std::string *const)(v2 + 3904),
                                        ";",
                                        (const std::allocator<char> *)(v2 + 416));
                                      *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = 1;
                                      std::allocator<char>::allocator(v2 + 432);
                                      std::string::basic_string<std::allocator<char>>(
                                        (std::string *const)(v2 + 3936),
                                        ",",
                                        (const std::allocator<char> *)(v2 + 432));
                                      v82._M_array = (std::initializer_list<std::string >::iterator)(v2 + 3904);
                                      v82._M_len = 2LL;
                                      *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = 1;
                                      std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 448));
                                      std::vector<std::string>::vector(
                                        (std::vector<std::string> *const)(v2 + 704),
                                        v82,
                                        (const std::vector<std::string>::allocator_type *)(v2 + 448));
                                      v59 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                                              (const std::string *)(v2 + 832),
                                              (const std::vector<std::string> *)(v2 + 704),
                                              p_param,
                                              1) != 0;
                                      std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 704));
                                      v60 = ((v2 + 704) >> 3) + 2147450880;
                                      *(_WORD *)v60 = -1800;
                                      *(_BYTE *)(v60 + 2) = -8;
                                      std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 448));
                                      *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = -8;
                                      for ( m = (char *)(v2 + 3968); m != (char *)(v2 + 3904); std::string::~string(m) )
                                        m -= 32;
                                      v62 = (_DWORD *)(((v2 + 3904) >> 3) + 2147450880);
                                      *v62 = -117901064;
                                      v62[1] = -117901064;
                                      std::allocator<char>::~allocator(v2 + 432);
                                      *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = -8;
                                      std::allocator<char>::~allocator(v2 + 416);
                                      *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
                                      if ( v59 )
                                      {
                                        *(_DWORD *)(((v2 + 3072) >> 3) + 0x7FFF8000) = 0;
                                        if ( *(char *)(((v2 + 3072) >> 3) + 0x7FFF8000) < 0
                                          || *(_BYTE *)(((v2 + 3103) >> 3) + 0x7FFF8000) != 0
                                          && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 3103) >> 3) + 0x7FFF8000) )
                                        {
                                          __asan_report_store_n(v2 + 3072, 32LL);
                                        }
                                        common::milog::MiLogStream::create(
                                          (common::milog::MiLogStream *)(v2 + 3072),
                                          &common::milog::MiLogDefault::default_log_obj_,
                                          4u,
                                          "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
                                          "init",
                                          932);
                                        v63 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                (common::milog::MiLogStream *const)(v2 + 3072),
                                                (const char (*)[16])"[CONFIG_ERROR] ");
                                        common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                                          v63,
                                          (const char (*)[43])byte_1AD901A0);
                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3072));
                                        *(_DWORD *)(((v2 + 3072) >> 3) + 0x7FFF8000) = -117901064;
                                        v7 = -1;
                                        goto LABEL_115;
                                      }
                                      array_count = i + 1;
                                    }
                                  }
                                }
                                std::vector<data::HuntingRefreshCond>::resize(&this->refresh_cond, array_count);
                                *(_DWORD *)(((v2 + 3136) >> 3) + 0x7FFF8000) = 0;
                                *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = 1;
                                std::allocator<char>::allocator(v2 + 464);
                                std::string::basic_string<std::allocator<char>>(
                                  (std::string *const)(v2 + 3136),
                                  "Initial Pose",
                                  (const std::allocator<char> *)(v2 + 464));
                                v64 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                        row,
                                        (const std::string *)(v2 + 3136),
                                        &this->initial_pose) != 0;
                                std::string::~string((void *)(v2 + 3136));
                                *(_DWORD *)(((v2 + 3136) >> 3) + 0x7FFF8000) = -117901064;
                                std::allocator<char>::~allocator(v2 + 464);
                                *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = -8;
                                if ( v64 )
                                {
                                  *(_DWORD *)(((v2 + 3200) >> 3) + 0x7FFF8000) = 0;
                                  if ( *(char *)(((v2 + 3200) >> 3) + 0x7FFF8000) < 0
                                    || *(_BYTE *)(((v2 + 3231) >> 3) + 0x7FFF8000) != 0
                                    && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 3231) >> 3) + 0x7FFF8000) )
                                  {
                                    __asan_report_store_n(v2 + 3200, 32LL);
                                  }
                                  common::milog::MiLogStream::create(
                                    (common::milog::MiLogStream *)(v2 + 3200),
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    4u,
                                    "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
                                    "init",
                                    941);
                                  v65 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                          (common::milog::MiLogStream *const)(v2 + 3200),
                                          (const char (*)[16])"[CONFIG_ERROR] ");
                                  common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                    v65,
                                    (const char (*)[33])byte_1AD90240);
                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3200));
                                  *(_DWORD *)(((v2 + 3200) >> 3) + 0x7FFF8000) = -117901064;
                                  v7 = -1;
                                }
                                else
                                {
                                  *(_DWORD *)(((v2 + 3264) >> 3) + 0x7FFF8000) = 0;
                                  *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = 1;
                                  std::allocator<char>::allocator(v2 + 480);
                                  std::string::basic_string<std::allocator<char>>(
                                    (std::string *const)(v2 + 3264),
                                    "SuiteID",
                                    (const std::allocator<char> *)(v2 + 480));
                                  v66 = common::tools::TxtFile::Row::assignToStr(
                                          row,
                                          (const std::string *)(v2 + 3264),
                                          (std::string *)(v2 + 832)) != 0;
                                  std::string::~string((void *)(v2 + 3264));
                                  *(_DWORD *)(((v2 + 3264) >> 3) + 0x7FFF8000) = -117901064;
                                  std::allocator<char>::~allocator(v2 + 480);
                                  *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = -8;
                                  if ( v66 )
                                  {
                                    *(_DWORD *)(((v2 + 3328) >> 3) + 0x7FFF8000) = 0;
                                    if ( *(char *)(((v2 + 3328) >> 3) + 0x7FFF8000) < 0
                                      || *(_BYTE *)(((v2 + 3359) >> 3) + 0x7FFF8000) != 0
                                      && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 3359) >> 3) + 0x7FFF8000) )
                                    {
                                      __asan_report_store_n(v2 + 3328, 32LL);
                                    }
                                    common::milog::MiLogStream::create(
                                      (common::milog::MiLogStream *)(v2 + 3328),
                                      &common::milog::MiLogDefault::default_log_obj_,
                                      4u,
                                      "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
                                      "init",
                                      946);
                                    v67 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                            (common::milog::MiLogStream *const)(v2 + 3328),
                                            (const char (*)[16])"[CONFIG_ERROR] ");
                                    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                                      v67,
                                      (const char (*)[28])byte_1AD902E0);
                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3328));
                                    *(_DWORD *)(((v2 + 3328) >> 3) + 0x7FFF8000) = -117901064;
                                    v7 = -1;
                                  }
                                  else
                                  {
                                    v68 = ((v2 + 768) >> 3) + 2147450880;
                                    *(_WORD *)v68 = 0;
                                    *(_BYTE *)(v68 + 2) = 0;
                                    v69 = (_DWORD *)(((v2 + 4000) >> 3) + 2147450880);
                                    *v69 = 0;
                                    v69[1] = 0;
                                    *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = 1;
                                    std::allocator<char>::allocator(v2 + 496);
                                    std::string::basic_string<std::allocator<char>>(
                                      (std::string *const)(v2 + 4000),
                                      ";",
                                      (const std::allocator<char> *)(v2 + 496));
                                    *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = 1;
                                    std::allocator<char>::allocator(v2 + 512);
                                    std::string::basic_string<std::allocator<char>>(
                                      (std::string *const)(v2 + 4032),
                                      ",",
                                      (const std::allocator<char> *)(v2 + 512));
                                    v83._M_array = (std::initializer_list<std::string >::iterator)(v2 + 4000);
                                    v83._M_len = 2LL;
                                    *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = 1;
                                    std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 528));
                                    std::vector<std::string>::vector(
                                      (std::vector<std::string> *const)(v2 + 768),
                                      v83,
                                      (const std::vector<std::string>::allocator_type *)(v2 + 528));
                                    v70 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                                            (const std::string *)(v2 + 832),
                                            (const std::vector<std::string> *)(v2 + 768),
                                            &this->suite_id,
                                            1) != 0;
                                    std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 768));
                                    v71 = ((v2 + 768) >> 3) + 2147450880;
                                    *(_WORD *)v71 = -1800;
                                    *(_BYTE *)(v71 + 2) = -8;
                                    std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 528));
                                    *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = -8;
                                    for ( n = (char *)(v2 + 4064); n != (char *)(v2 + 4000); std::string::~string(n) )
                                      n -= 32;
                                    v73 = (_DWORD *)(((v2 + 4000) >> 3) + 2147450880);
                                    *v73 = -117901064;
                                    v73[1] = -117901064;
                                    std::allocator<char>::~allocator(v2 + 512);
                                    *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = -8;
                                    std::allocator<char>::~allocator(v2 + 496);
                                    *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = -8;
                                    if ( v70 )
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
                                        "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
                                        "init",
                                        951);
                                      v74 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                              (common::milog::MiLogStream *const)(v2 + 3392),
                                              (const char (*)[16])"[CONFIG_ERROR] ");
                                      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                                        v74,
                                        (const char (*)[28])byte_1AD902E0);
                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3392));
                                      *(_DWORD *)(((v2 + 3392) >> 3) + 0x7FFF8000) = -117901064;
                                      v7 = -1;
                                    }
                                    else
                                    {
                                      *(_DWORD *)(((v2 + 3456) >> 3) + 0x7FFF8000) = 0;
                                      *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = 1;
                                      std::allocator<char>::allocator(v2 + 544);
                                      std::string::basic_string<std::allocator<char>>(
                                        (std::string *const)(v2 + 3456),
                                        &byte_1AD90320,
                                        (const std::allocator<char> *)(v2 + 544));
                                      v75 = common::tools::TxtFile::Row::assignToNum<bool>(
                                              row,
                                              (const std::string *)(v2 + 3456),
                                              &this->is_disable_wandering) != 0;
                                      std::string::~string((void *)(v2 + 3456));
                                      *(_DWORD *)(((v2 + 3456) >> 3) + 0x7FFF8000) = -117901064;
                                      std::allocator<char>::~allocator(v2 + 544);
                                      *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = -8;
                                      if ( v75 )
                                      {
                                        *(_DWORD *)(((v2 + 3520) >> 3) + 0x7FFF8000) = 0;
                                        if ( *(char *)(((v2 + 3520) >> 3) + 0x7FFF8000) < 0
                                          || *(_BYTE *)(((v2 + 3551) >> 3) + 0x7FFF8000) != 0
                                          && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 3551) >> 3) + 0x7FFF8000) )
                                        {
                                          __asan_report_store_n(v2 + 3520, 32LL);
                                        }
                                        common::milog::MiLogStream::create(
                                          (common::milog::MiLogStream *)(v2 + 3520),
                                          &common::milog::MiLogDefault::default_log_obj_,
                                          4u,
                                          "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
                                          "init",
                                          956);
                                        v76 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                (common::milog::MiLogStream *const)(v2 + 3520),
                                                (const char (*)[16])"[CONFIG_ERROR] ");
                                        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                          v76,
                                          (const char (*)[39])byte_1AD90360);
                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3520));
                                        *(_DWORD *)(((v2 + 3520) >> 3) + 0x7FFF8000) = -117901064;
                                        v7 = -1;
                                      }
                                      else
                                      {
                                        *(_DWORD *)(((v2 + 3584) >> 3) + 0x7FFF8000) = 0;
                                        *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = 1;
                                        std::allocator<char>::allocator(v2 + 560);
                                        std::string::basic_string<std::allocator<char>>(
                                          (std::string *const)(v2 + 3584),
                                          "RouteID",
                                          (const std::allocator<char> *)(v2 + 560));
                                        v77 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                                row,
                                                (const std::string *)(v2 + 3584),
                                                &this->route_id) != 0;
                                        std::string::~string((void *)(v2 + 3584));
                                        *(_DWORD *)(((v2 + 3584) >> 3) + 0x7FFF8000) = -117901064;
                                        std::allocator<char>::~allocator(v2 + 560);
                                        *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = -8;
                                        if ( v77 )
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
                                            "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
                                            "init",
                                            961);
                                          v78 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                  (common::milog::MiLogStream *const)(v2 + 3648),
                                                  (const char (*)[16])"[CONFIG_ERROR] ");
                                          common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                                            v78,
                                            (const char (*)[28])byte_1AD90400);
                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3648));
                                          *(_DWORD *)(((v2 + 3648) >> 3) + 0x7FFF8000) = -117901064;
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
LABEL_115:
  std::string::~string((void *)(v2 + 832));
  if ( v86 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 104) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF806C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81F8) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862749) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450988 - (((_DWORD)v4 + 2147450996) & 0xFFFFFFF8) + 404) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF8220) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_7(v2, 4416LL, v86);
  }
  return v7;
};

// Line 970: range 00000000144D62A4-00000000144D741B
int32_t __cdecl data::HuntingExcelConfigMgrBase::loadHuntingRefreshExcelConfig(
        data::HuntingExcelConfigMgrBase *const this,
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
  __int64 v19; // rcx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rcx
  __int64 v24; // rsi
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  data::HuntingRefreshExcelConfig *refreshed; // rax
  unsigned int *v28; // rcx
  data::HuntingRefreshExcelConfig *v29; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingRefreshExcelConfig>,false,false>,bool> v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  int v33; // edx
  char *i; // r14
  std::string *__for_begin; // [rsp+28h] [rbp-85D8h]
  const common::tools::TxtFile::Row *row_ptr; // [rsp+48h] [rbp-85B8h]
  char v39[34224]; // [rsp+50h] [rbp-85B0h] BYREF

  v3 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_10(34176LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 5 r:985 64 4 9 <unknown> 80 32 9 paths:971 144 32 9 <unknown> 208 32 9 "
                        "<unknown> 272 32 8 data:988 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 32 9 <u"
                        "nknown> 592 376 24 debug_message_stream:996 1040 32880 12 txt_file:979";
  *(_QWORD *)(v3 + 16) = data::HuntingExcelConfigMgrBase::loadHuntingRefreshExcelConfig;
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
    (std::string *const)(v3 + 80),
    "/txt/HuntingRefreshData.txt",
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
    __asan_unpoison_stack_memory(v3 + 1040, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v3 + 1040));
    v7 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v3 + 1040), v7) )
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
        "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
        "loadHuntingRefreshExcelConfig",
        982);
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
        v12 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v3 + 1040));
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
        if ( v12 <= *(_DWORD *)(v3 + 48) )
          break;
        v13 = *(unsigned int *)(v3 + 48);
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v3 + 1040), v13);
        *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
        v14 = &`vtable for'data::HuntingRefreshExcelConfig + 2;
        if ( *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 272, v13);
        *(_QWORD *)(v3 + 272) = v14;
        if ( *(_BYTE *)(((v3 + 280) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 280) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 280, v13);
        *(_DWORD *)(v3 + 280) = 0;
        v15 = (((_BYTE)v3 + 28) & 7u) + 3;
        if ( *(_BYTE *)(((v3 + 284) >> 3) + 0x7FFF8000) != 0
          && (char)(((v3 + 28) & 7) + 3) >= *(_BYTE *)(((v3 + 284) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v3 + 284, v15);
        }
        *(_DWORD *)(v3 + 284) = 0;
        if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 288, v15);
        *(_DWORD *)(v3 + 288) = 0;
        v16 = (((_BYTE)v3 + 36) & 7u) + 3;
        if ( *(_BYTE *)(((v3 + 292) >> 3) + 0x7FFF8000) != 0
          && (char)(((v3 + 36) & 7) + 3) >= *(_BYTE *)(((v3 + 292) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v3 + 292, v16);
        }
        *(_DWORD *)(v3 + 292) = 0;
        if ( *(_BYTE *)(((v3 + 296) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 296) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 296, v16);
        *(_DWORD *)(v3 + 296) = 0;
        if ( row_ptr )
        {
          if ( data::HuntingRefreshExcelConfig::init((data::HuntingRefreshExcelConfig *const)(v3 + 272), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 592, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 592);
            v19 = std::operator<<<std::char_traits<char>>(v3 + 592, &unk_1AD3B5A0);
            if ( *(_BYTE *)(((v3 + 280) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 280) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 280);
            std::ostream::operator<<(v19, *(unsigned int *)(v3 + 280));
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
              "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
              "loadHuntingRefreshExcelConfig",
              998);
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
            refreshed = std::move<data::HuntingRefreshExcelConfig &>((data::HuntingRefreshExcelConfig *)(v3 + 272));
            v30 = std::unordered_map<unsigned int,data::HuntingRefreshExcelConfig>::emplace<unsigned int &,data::HuntingRefreshExcelConfig>(
                    &this->hunting_refresh_excel_config_map,
                    (unsigned int *)(v3 + 280),
                    refreshed,
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
                "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
                "loadHuntingRefreshExcelConfig",
                1003);
              v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 528),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v32 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v31, (const char (*)[9])byte_1AD3B5E0);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v32,
                (const unsigned int *)(v3 + 280));
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
            "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
            "loadHuntingRefreshExcelConfig",
            991);
          v17 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 336),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
          *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v18 = 0;
        }
        data::HuntingRefreshExcelConfig::~HuntingRefreshExcelConfig((data::HuntingRefreshExcelConfig *const)(v3 + 272));
        *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
        if ( v18 != 1 )
        {
          v33 = 0;
          goto LABEL_57;
        }
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
      }
      v33 = 1;
LABEL_57:
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      v10 = v33 == 1;
    }
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v3 + 1040));
    __asan_poison_stack_memory(v3 + 1040, 32880LL);
    if ( !v10 )
      goto LABEL_61;
  }
  v2 = 0;
LABEL_61:
  for ( i = (char *)(v3 + 112); i != (char *)(v3 + 80); std::string::~string(i) )
    i -= 32;
  if ( v39 == (char *)v3 )
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
    __asan_stack_free_10(v3, 34176LL, v39);
  }
  return v2;
};

// Line 1012: range 00000000144D741C-00000000144D8451
int32_t __cdecl data::HuntingExcelConfigMgrBase::loadHuntingRegionExcelConfig(
        data::HuntingExcelConfigMgrBase *const this,
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
  data::HuntingRegionExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::HuntingRegionExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingRegionExcelConfig>,false,false>,bool> v27; // rax
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
  *(_QWORD *)(v3 + 8) = "13 48 1 9 <unknown> 64 4 6 r:1027 80 4 9 <unknown> 96 32 10 paths:1013 160 32 9 <unknown> 224 32"
                        " 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 168"
                        " 9 data:1030 784 376 25 debug_message_stream:1038 1232 32880 13 txt_file:1021";
  *(_QWORD *)(v3 + 16) = data::HuntingExcelConfigMgrBase::loadHuntingRegionExcelConfig;
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
    "/txt/HuntingRegionData.txt",
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
        "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
        "loadHuntingRegionExcelConfig",
        1024);
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
        data::HuntingRegionExcelConfig::HuntingRegionExcelConfig((data::HuntingRegionExcelConfig *const)(v3 + 544));
        if ( row_ptr )
        {
          if ( data::HuntingRegionExcelConfig::init((data::HuntingRegionExcelConfig *const)(v3 + 544), row_ptr) )
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
              "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
              "loadHuntingRegionExcelConfig",
              1040);
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
            v24 = std::move<data::HuntingRegionExcelConfig &>((data::HuntingRegionExcelConfig *)(v3 + 544));
            v27 = std::unordered_map<unsigned int,data::HuntingRegionExcelConfig>::emplace<unsigned int &,data::HuntingRegionExcelConfig>(
                    &this->hunting_region_excel_config_map,
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
                "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
                "loadHuntingRegionExcelConfig",
                1045);
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
            "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
            "loadHuntingRegionExcelConfig",
            1033);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 288),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::HuntingRegionExcelConfig::~HuntingRegionExcelConfig((data::HuntingRegionExcelConfig *const)(v3 + 544));
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

// Line 1054: range 00000000144D8452-00000000144D9475
int32_t __cdecl data::HuntingExcelConfigMgrBase::loadHuntingGroupInfoExcelConfig(
        data::HuntingExcelConfigMgrBase *const this,
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
  data::HuntingGroupInfoExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::HuntingGroupInfoExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingGroupInfoExcelConfig>,false,false>,bool> v27; // rax
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
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 6 r:1069 64 4 9 <unknown> 80 32 10 paths:1055 144 32 9 <unknown> 208 32"
                        " 9 <unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 56 "
                        "9 data:1072 624 376 25 debug_message_stream:1080 1072 32880 13 txt_file:1063";
  *(_QWORD *)(v3 + 16) = data::HuntingExcelConfigMgrBase::loadHuntingGroupInfoExcelConfig;
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
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 80),
    "/txt/HuntingGroupInfoData.txt",
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
        "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
        "loadHuntingGroupInfoExcelConfig",
        1066);
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
        v13 = ((v3 + 528) >> 3) + 2147450880;
        *(_DWORD *)v13 = 0;
        *(_WORD *)(v13 + 4) = 0;
        *(_BYTE *)(v13 + 6) = 0;
        data::HuntingGroupInfoExcelConfig::HuntingGroupInfoExcelConfig((data::HuntingGroupInfoExcelConfig *const)(v3 + 528));
        if ( row_ptr )
        {
          if ( data::HuntingGroupInfoExcelConfig::init((data::HuntingGroupInfoExcelConfig *const)(v3 + 528), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 624, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 624);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 624, &unk_1AD90920);
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
              "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
              "loadHuntingGroupInfoExcelConfig",
              1082);
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
            v24 = std::move<data::HuntingGroupInfoExcelConfig &>((data::HuntingGroupInfoExcelConfig *)(v3 + 528));
            v27 = std::unordered_map<unsigned int,data::HuntingGroupInfoExcelConfig>::emplace<unsigned int &,data::HuntingGroupInfoExcelConfig>(
                    &this->hunting_group_info_excel_config_map,
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
                "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
                "loadHuntingGroupInfoExcelConfig",
                1087);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 464),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v28,
                      (const char (*)[14])byte_1AD90960);
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
            "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
            "loadHuntingGroupInfoExcelConfig",
            1075);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 272),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
          *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::HuntingGroupInfoExcelConfig::~HuntingGroupInfoExcelConfig((data::HuntingGroupInfoExcelConfig *const)(v3 + 528));
        v30 = ((v3 + 528) >> 3) + 2147450880;
        *(_DWORD *)v30 = -117901064;
        *(_WORD *)(v30 + 4) = -1800;
        *(_BYTE *)(v30 + 6) = -8;
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

// Line 1096: range 00000000144D9476-00000000144DA50E
int32_t __cdecl data::HuntingExcelConfigMgrBase::loadHuntingClueMonsterExcelConfig(
        data::HuntingExcelConfigMgrBase *const this,
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
  char v14; // dl
  __int64 v15; // rsi
  __int64 *v16; // rdx
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
  data::HuntingClueMonsterExcelConfig *v27; // rax
  unsigned int *v28; // rcx
  data::HuntingClueMonsterExcelConfig *v29; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingClueMonsterExcelConfig>,false,false>,bool> v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  unsigned __int64 v33; // rax
  int v34; // edx
  char *i; // r14
  std::string *__for_begin; // [rsp+28h] [rbp-85F8h]
  const common::tools::TxtFile::Row *row_ptr; // [rsp+48h] [rbp-85D8h]
  char v40[34256]; // [rsp+50h] [rbp-85D0h] BYREF

  v3 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_10(34208LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 48 1 9 <unknown> 64 4 6 r:1111 80 4 9 <unknown> 96 32 10 paths:1097 160 32 9 <unknown> 224 32"
                        " 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 40 "
                        "9 data:1114 624 376 25 debug_message_stream:1122 1072 32880 13 txt_file:1105";
  *(_QWORD *)(v3 + 16) = data::HuntingExcelConfigMgrBase::loadHuntingClueMonsterExcelConfig;
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
    "/txt/HuntingClueMonsterData.txt",
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
        "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
        "loadHuntingClueMonsterExcelConfig",
        1108);
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
        v15 = *(unsigned int *)(v3 + 64);
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v3 + 1072), v15);
        v13 = ((v3 + 544) >> 3) + 2147450880;
        *(_DWORD *)v13 = 0;
        *(_BYTE *)(v13 + 4) = 0;
        v14 = *(_BYTE *)(((v3 + 583) >> 3) + 0x7FFF8000);
        LOBYTE(v15) = v14 != 0;
        if ( *(char *)(((v3 + 544) >> 3) + 0x7FFF8000) < 0 || v14 != 0 && (char)((v3 + 71) & 7) >= v14 )
        {
          v15 = 40LL;
          __asan_report_store_n(v3 + 544, 40LL);
        }
        *(_QWORD *)(v3 + 544) = 0LL;
        *(_QWORD *)(v3 + 552) = 0LL;
        *(_QWORD *)(v3 + 560) = 0LL;
        *(_QWORD *)(v3 + 568) = 0LL;
        *(_QWORD *)(v3 + 576) = 0LL;
        v16 = &`vtable for'data::HuntingClueMonsterExcelConfig + 2;
        if ( *(_BYTE *)(((v3 + 544) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 544, v15);
        *(_QWORD *)(v3 + 544) = v16;
        if ( row_ptr )
        {
          if ( data::HuntingClueMonsterExcelConfig::init(
                 (data::HuntingClueMonsterExcelConfig *const)(v3 + 544),
                 row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 624, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 624);
            v19 = std::operator<<<std::char_traits<char>>(v3 + 624, &unk_1AD90B60);
            if ( *(_BYTE *)(((v3 + 552) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 552) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 552);
            std::ostream::operator<<(v19, *(unsigned int *)(v3 + 552));
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
              "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
              "loadHuntingClueMonsterExcelConfig",
              1124);
            v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 352),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v21 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v20, (const char (*)[2])"<");
            v22 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, __for_begin);
            v23 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v22,
                    (const char (*)[11])byte_1AD384E0);
            *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 64);
            v24 = (unsigned int)(*(_DWORD *)(v3 + 64) + 1);
            if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v3 + 80, v24);
            *(_DWORD *)(v3 + 80) = v24;
            v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v23,
                    (const unsigned int *)(v3 + 80));
            v26 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v25,
                    (const char (*)[13])byte_1AD38520);
            *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 416, 32LL);
            }
            std::ostringstream::str(v3 + 416, v3 + 624);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v26, (const std::string *)(v3 + 416));
            std::string::~string((void *)(v3 + 416));
            *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
            *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            std::ostringstream::~ostringstream(v3 + 624);
            __asan_poison_stack_memory(v3 + 624, 376LL);
            v18 = 0;
          }
          else
          {
            v27 = std::move<data::HuntingClueMonsterExcelConfig &>((data::HuntingClueMonsterExcelConfig *)(v3 + 544));
            v30 = std::unordered_map<unsigned int,data::HuntingClueMonsterExcelConfig>::emplace<unsigned int &,data::HuntingClueMonsterExcelConfig>(
                    &this->hunting_clue_monster_excel_config_map,
                    (unsigned int *)(v3 + 552),
                    v27,
                    v28,
                    v29);
            if ( !v30.second )
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
                "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
                "loadHuntingClueMonsterExcelConfig",
                1129);
              v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 480),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v32 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                      v31,
                      (const char (*)[15])byte_1AD90BA0);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v32,
                (const unsigned int *)(v3 + 552));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
              *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
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
            "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
            "loadHuntingClueMonsterExcelConfig",
            1117);
          v17 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 288),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v18 = 0;
        }
        data::HuntingClueMonsterExcelConfig::~HuntingClueMonsterExcelConfig((data::HuntingClueMonsterExcelConfig *const)(v3 + 544));
        v33 = ((v3 + 544) >> 3) + 2147450880;
        *(_DWORD *)v33 = -117901064;
        *(_BYTE *)(v33 + 4) = -8;
        if ( v18 != 1 )
        {
          v34 = 0;
          goto LABEL_49;
        }
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 64);
      }
      v34 = 1;
LABEL_49:
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      v10 = v34 == 1;
    }
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v3 + 1072));
    __asan_poison_stack_memory(v3 + 1072, 32880LL);
    if ( !v10 )
      goto LABEL_53;
  }
  v2 = 0;
LABEL_53:
  for ( i = (char *)(v3 + 128); i != (char *)(v3 + 96); std::string::~string(i) )
    i -= 32;
  if ( v40 == (char *)v3 )
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
    __asan_stack_free_10(v3, 34208LL, v40);
  }
  return v2;
};

// Line 1138: range 00000000144DA510-00000000144DB64D
int32_t __cdecl data::HuntingExcelConfigMgrBase::loadHuntingClueGatherExcelConfig(
        data::HuntingExcelConfigMgrBase *const this,
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
  __int64 v17; // rsi
  __int64 v18; // rdx
  common::milog::MiLogStream *v19; // rax
  int v20; // r14d
  __int64 v21; // rcx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rcx
  __int64 v26; // rsi
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  data::HuntingClueGatherExcelConfig *v29; // rax
  unsigned int *v30; // rcx
  data::HuntingClueGatherExcelConfig *v31; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingClueGatherExcelConfig>,false,false>,bool> v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  unsigned __int64 v35; // rax
  int v36; // edx
  char *i; // r14
  std::string *__for_begin; // [rsp+28h] [rbp-85D8h]
  const common::tools::TxtFile::Row *row_ptr; // [rsp+48h] [rbp-85B8h]
  char v42[34224]; // [rsp+50h] [rbp-85B0h] BYREF

  v3 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_10(34176LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 6 r:1153 64 4 9 <unknown> 80 24 9 data:1156 144 32 10 paths:1139 208 32"
                        " 9 <unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 32 "
                        "9 <unknown> 592 376 25 debug_message_stream:1164 1040 32880 13 txt_file:1147";
  *(_QWORD *)(v3 + 16) = data::HuntingExcelConfigMgrBase::loadHuntingClueGatherExcelConfig;
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
    "/txt/HuntingClueGatherData.txt",
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
        "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
        "loadHuntingClueGatherExcelConfig",
        1150);
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
        v15 = &`vtable for'data::HuntingClueGatherExcelConfig + 2;
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
        v17 = ((_BYTE)v3 + 100) & 7;
        v18 = (*(_BYTE *)(((v3 + 100) >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v17 >= *(_BYTE *)(((v3 + 100) >> 3) + 0x7FFF8000));
        if ( (_BYTE)v18 )
          __asan_report_store1(v3 + 100, v17, v18);
        *(_BYTE *)(v3 + 100) = 0;
        if ( row_ptr )
        {
          if ( data::HuntingClueGatherExcelConfig::init((data::HuntingClueGatherExcelConfig *const)(v3 + 80), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 592, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 592);
            v21 = std::operator<<<std::char_traits<char>>(v3 + 592, &unk_1AD90B60);
            if ( *(_BYTE *)(((v3 + 88) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 88) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 88);
            std::ostream::operator<<(v21, *(unsigned int *)(v3 + 88));
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
              "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
              "loadHuntingClueGatherExcelConfig",
              1166);
            v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 400),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v23 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v22, (const char (*)[2])"<");
            v24 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, __for_begin);
            v25 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v24,
                    (const char (*)[11])byte_1AD384E0);
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 48);
            v26 = (unsigned int)(*(_DWORD *)(v3 + 48) + 1);
            if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v3 + 64, v26);
            *(_DWORD *)(v3 + 64) = v26;
            v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v25,
                    (const unsigned int *)(v3 + 64));
            v28 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v27,
                    (const char (*)[13])byte_1AD38520);
            *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 464) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 17) & 7) >= *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 464, 32LL);
            }
            std::ostringstream::str(v3 + 464, v3 + 592);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v28, (const std::string *)(v3 + 464));
            std::string::~string((void *)(v3 + 464));
            *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 400));
            *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            std::ostringstream::~ostringstream(v3 + 592);
            __asan_poison_stack_memory(v3 + 592, 376LL);
            v20 = 0;
          }
          else
          {
            v29 = std::move<data::HuntingClueGatherExcelConfig &>((data::HuntingClueGatherExcelConfig *)(v3 + 80));
            v32 = std::unordered_map<unsigned int,data::HuntingClueGatherExcelConfig>::emplace<unsigned int &,data::HuntingClueGatherExcelConfig>(
                    &this->hunting_clue_gather_excel_config_map,
                    (unsigned int *)(v3 + 88),
                    v29,
                    v30,
                    v31);
            if ( !v32.second )
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
                "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
                "loadHuntingClueGatherExcelConfig",
                1171);
              v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 528),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v34 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                      v33,
                      (const char (*)[15])byte_1AD90BA0);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v34,
                (const unsigned int *)(v3 + 88));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 528));
              *(_DWORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v20 = 0;
            }
            else
            {
              v20 = 1;
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
            "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
            "loadHuntingClueGatherExcelConfig",
            1159);
          v19 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 336),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
          *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v20 = 0;
        }
        data::HuntingClueGatherExcelConfig::~HuntingClueGatherExcelConfig((data::HuntingClueGatherExcelConfig *const)(v3 + 80));
        v35 = ((v3 + 80) >> 3) + 2147450880;
        *(_WORD *)v35 = -1800;
        *(_BYTE *)(v35 + 2) = -8;
        if ( v20 != 1 )
        {
          v36 = 0;
          goto LABEL_55;
        }
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
      }
      v36 = 1;
LABEL_55:
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      v10 = v36 == 1;
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
  if ( v42 == (char *)v3 )
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
    __asan_stack_free_10(v3, 34176LL, v42);
  }
  return v2;
};

// Line 1180: range 00000000144DB64E-00000000144DC69B
int32_t __cdecl data::HuntingExcelConfigMgrBase::loadHuntingMonsterExcelConfig(
        data::HuntingExcelConfigMgrBase *const this,
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
  data::HuntingMonsterExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::HuntingMonsterExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingMonsterExcelConfig>,false,false>,bool> v27; // rax
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
  *(_QWORD *)(v3 + 8) = "13 48 1 9 <unknown> 64 4 6 r:1195 80 4 9 <unknown> 96 32 10 paths:1181 160 32 9 <unknown> 224 32"
                        " 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 200"
                        " 9 data:1198 816 376 25 debug_message_stream:1206 1264 32880 13 txt_file:1189";
  *(_QWORD *)(v3 + 16) = data::HuntingExcelConfigMgrBase::loadHuntingMonsterExcelConfig;
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
    "/txt/HuntingMonsterData.txt",
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
        "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
        "loadHuntingMonsterExcelConfig",
        1192);
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
        data::HuntingMonsterExcelConfig::HuntingMonsterExcelConfig((data::HuntingMonsterExcelConfig *const)(v3 + 544));
        if ( row_ptr )
        {
          if ( data::HuntingMonsterExcelConfig::init((data::HuntingMonsterExcelConfig *const)(v3 + 544), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 816, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 816);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 816, &unk_1AD90B60);
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
              "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
              "loadHuntingMonsterExcelConfig",
              1208);
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
            v24 = std::move<data::HuntingMonsterExcelConfig &>((data::HuntingMonsterExcelConfig *)(v3 + 544));
            v27 = std::unordered_map<unsigned int,data::HuntingMonsterExcelConfig>::emplace<unsigned int &,data::HuntingMonsterExcelConfig>(
                    &this->hunting_monster_excel_config_map,
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
                "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
                "loadHuntingMonsterExcelConfig",
                1213);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 480),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                      v28,
                      (const char (*)[15])byte_1AD90BA0);
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
            "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
            "loadHuntingMonsterExcelConfig",
            1201);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 288),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::HuntingMonsterExcelConfig::~HuntingMonsterExcelConfig((data::HuntingMonsterExcelConfig *const)(v3 + 544));
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

// Line 1222: range 00000000144DC69C-00000000144DCEBE
int32_t __cdecl data::HuntingExcelConfigMgrBase::loadConfig(
        data::HuntingExcelConfigMgrBase *const this,
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
  char v12[448]; // [rsp+10h] [rbp-1C0h] BYREF

  v2 = (common::milog::MiLogStream *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(416LL);
    if ( v3 )
      v2 = (common::milog::MiLogStream *)v3;
  }
  v2->log_ = (common::milog::MiLog *)1102416563;
  v2->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"6 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown>";
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)data::HuntingExcelConfigMgrBase::loadConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -202116109;
  if ( data::HuntingExcelConfigMgrBase::loadHuntingRefreshExcelConfig(this, config) )
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
      "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
      "loadConfig",
      1225);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      v5,
      (const char (*)[37])"loadHuntingRefreshExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( data::HuntingExcelConfigMgrBase::loadHuntingRegionExcelConfig(this, config) )
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
      "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
      "loadConfig",
      1230);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      v7,
      (const char (*)[36])"loadHuntingRegionExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( data::HuntingExcelConfigMgrBase::loadHuntingGroupInfoExcelConfig(this, config) )
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
      "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
      "loadConfig",
      1235);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      v8,
      (const char (*)[39])"loadHuntingGroupInfoExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else if ( data::HuntingExcelConfigMgrBase::loadHuntingClueMonsterExcelConfig(this, config) )
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
      "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
      "loadConfig",
      1240);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      v9,
      (const char (*)[41])"loadHuntingClueMonsterExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 7);
    result = -1;
  }
  else if ( data::HuntingExcelConfigMgrBase::loadHuntingClueGatherExcelConfig(this, config) )
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
      "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
      "loadConfig",
      1245);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 9, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
      v10,
      (const char (*)[40])"loadHuntingClueGatherExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 9);
    result = -1;
  }
  else if ( data::HuntingExcelConfigMgrBase::loadHuntingMonsterExcelConfig(this, config) )
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
      "./src/txt_data_auto/HuntingExcelConfig.gen.cpp",
      "loadConfig",
      1250);
    v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 11,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      v11,
      (const char (*)[37])"loadHuntingMonsterExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 11);
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v12 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 1257: range 00000000144DCEC0-00000000144DCED2
int32_t __cdecl data::HuntingExcelConfigMgrBase::rewriteConfig(
        data::HuntingExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 1262: range 00000000144DCED4-00000000144DCEE6
int32_t __cdecl data::HuntingExcelConfigMgrBase::finalConfig(
        data::HuntingExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 1267: range 00000000144DCEE8-00000000144DD0A3
data::HuntingRefreshExcelConfig *__fastcall data::HuntingExcelConfigMgrBase::findHuntingRefreshExcelConfig(
        data::HuntingExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::HuntingRefreshExcelConfigMap *p_hunting_refresh_excel_config_map; // rdx
  data::HuntingRefreshExcelConfigMap *v6; // rdx
  bool refreshed; // al
  data::HuntingRefreshExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 id:1266 64 8 9 iter:1268 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::HuntingExcelConfigMgrBase::findHuntingRefreshExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_hunting_refresh_excel_config_map = &this->hunting_refresh_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::HuntingRefreshExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::HuntingRefreshExcelConfig>::find(
                                                                                               p_hunting_refresh_excel_config_map,
                                                                                               (const std::unordered_map<unsigned int,data::HuntingRefreshExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->hunting_refresh_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::HuntingRefreshExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::HuntingRefreshExcelConfig>::end(v6);
  refreshed = std::__detail::operator==<std::pair<unsigned int const,data::HuntingRefreshExcelConfig>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HuntingRefreshExcelConfig>,false> *)(v2 + 64),
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HuntingRefreshExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( refreshed )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingRefreshExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingRefreshExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1280: range 00000000144DD0A4-00000000144DD25F
const data::HuntingRefreshExcelConfig *__fastcall data::HuntingExcelConfigMgrBase::findHuntingRefreshExcelConfig(
        const data::HuntingExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::HuntingRefreshExcelConfigMap *p_hunting_refresh_excel_config_map; // rdx
  data::HuntingRefreshExcelConfigMap *v6; // rdx
  bool refreshed; // al
  const data::HuntingRefreshExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 id:1279 64 8 9 iter:1281 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::HuntingExcelConfigMgrBase::findHuntingRefreshExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_hunting_refresh_excel_config_map = &this->hunting_refresh_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::HuntingRefreshExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::HuntingRefreshExcelConfig>::find(
                                                                                                     p_hunting_refresh_excel_config_map,
                                                                                                     (const std::unordered_map<unsigned int,data::HuntingRefreshExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->hunting_refresh_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::HuntingRefreshExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::HuntingRefreshExcelConfig>::end(v6);
  refreshed = std::__detail::operator==<std::pair<unsigned int const,data::HuntingRefreshExcelConfig>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HuntingRefreshExcelConfig>,false> *)(v2 + 64),
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HuntingRefreshExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( refreshed )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::HuntingRefreshExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::HuntingRefreshExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1293: range 00000000144DD260-00000000144DD41B
data::HuntingRegionExcelConfig *__fastcall data::HuntingExcelConfigMgrBase::findHuntingRegionExcelConfig(
        data::HuntingExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::HuntingRegionExcelConfigMap *p_hunting_region_excel_config_map; // rdx
  data::HuntingRegionExcelConfigMap *v6; // rdx
  bool v7; // al
  data::HuntingRegionExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 id:1292 64 8 9 iter:1294 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::HuntingExcelConfigMgrBase::findHuntingRegionExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_hunting_region_excel_config_map = &this->hunting_region_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::HuntingRegionExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::HuntingRegionExcelConfig>::find(
                                                                                              p_hunting_region_excel_config_map,
                                                                                              (const std::unordered_map<unsigned int,data::HuntingRegionExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->hunting_region_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::HuntingRegionExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::HuntingRegionExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::HuntingRegionExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HuntingRegionExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HuntingRegionExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingRegionExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingRegionExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1306: range 00000000144DD41C-00000000144DD5D7
const data::HuntingRegionExcelConfig *__fastcall data::HuntingExcelConfigMgrBase::findHuntingRegionExcelConfig(
        const data::HuntingExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::HuntingRegionExcelConfigMap *p_hunting_region_excel_config_map; // rdx
  data::HuntingRegionExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::HuntingRegionExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 id:1305 64 8 9 iter:1307 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::HuntingExcelConfigMgrBase::findHuntingRegionExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_hunting_region_excel_config_map = &this->hunting_region_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::HuntingRegionExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::HuntingRegionExcelConfig>::find(
                                                                                                    p_hunting_region_excel_config_map,
                                                                                                    (const std::unordered_map<unsigned int,data::HuntingRegionExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->hunting_region_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::HuntingRegionExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::HuntingRegionExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::HuntingRegionExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HuntingRegionExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HuntingRegionExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::HuntingRegionExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::HuntingRegionExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1319: range 00000000144DD5D8-00000000144DD793
data::HuntingGroupInfoExcelConfig *__fastcall data::HuntingExcelConfigMgrBase::findHuntingGroupInfoExcelConfig(
        data::HuntingExcelConfigMgrBase *const this,
        __int64 group_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::HuntingGroupInfoExcelConfigMap *p_hunting_group_info_excel_config_map; // rdx
  data::HuntingGroupInfoExcelConfigMap *v6; // rdx
  bool v7; // al
  data::HuntingGroupInfoExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 group_id:1318 64 8 9 iter:1320 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::HuntingExcelConfigMgrBase::findHuntingGroupInfoExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = group_id;
  p_hunting_group_info_excel_config_map = &this->hunting_group_info_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, group_id);
  *(std::unordered_map<unsigned int,data::HuntingGroupInfoExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::HuntingGroupInfoExcelConfig>::find(
                                                                                                 p_hunting_group_info_excel_config_map,
                                                                                                 (const std::unordered_map<unsigned int,data::HuntingGroupInfoExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->hunting_group_info_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::HuntingGroupInfoExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::HuntingGroupInfoExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::HuntingGroupInfoExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HuntingGroupInfoExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HuntingGroupInfoExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingGroupInfoExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingGroupInfoExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1332: range 00000000144DD794-00000000144DD94F
const data::HuntingGroupInfoExcelConfig *__fastcall data::HuntingExcelConfigMgrBase::findHuntingGroupInfoExcelConfig(
        const data::HuntingExcelConfigMgrBase *const this,
        __int64 group_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::HuntingGroupInfoExcelConfigMap *p_hunting_group_info_excel_config_map; // rdx
  data::HuntingGroupInfoExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::HuntingGroupInfoExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 group_id:1331 64 8 9 iter:1333 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::HuntingExcelConfigMgrBase::findHuntingGroupInfoExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = group_id;
  p_hunting_group_info_excel_config_map = &this->hunting_group_info_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, group_id);
  *(std::unordered_map<unsigned int,data::HuntingGroupInfoExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::HuntingGroupInfoExcelConfig>::find(p_hunting_group_info_excel_config_map, (const std::unordered_map<unsigned int,data::HuntingGroupInfoExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->hunting_group_info_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::HuntingGroupInfoExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::HuntingGroupInfoExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::HuntingGroupInfoExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HuntingGroupInfoExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HuntingGroupInfoExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::HuntingGroupInfoExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::HuntingGroupInfoExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1345: range 00000000144DD950-00000000144DDB11
data::HuntingClueMonsterExcelConfig *__fastcall data::HuntingExcelConfigMgrBase::findHuntingClueMonsterExcelConfig(
        data::HuntingExcelConfigMgrBase *const this,
        __int64 config_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::HuntingClueMonsterExcelConfigMap *p_hunting_clue_monster_excel_config_map; // rdx
  data::HuntingClueMonsterExcelConfigMap *v6; // rdx
  bool v7; // al
  data::HuntingClueMonsterExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 config_id:1344 64 8 9 iter:1346 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::HuntingExcelConfigMgrBase::findHuntingClueMonsterExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = config_id;
  p_hunting_clue_monster_excel_config_map = &this->hunting_clue_monster_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, config_id);
  *(std::unordered_map<unsigned int,data::HuntingClueMonsterExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::HuntingClueMonsterExcelConfig>::find(
                                                                                                   p_hunting_clue_monster_excel_config_map,
                                                                                                   (const std::unordered_map<unsigned int,data::HuntingClueMonsterExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->hunting_clue_monster_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::HuntingClueMonsterExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::HuntingClueMonsterExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::HuntingClueMonsterExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HuntingClueMonsterExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HuntingClueMonsterExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingClueMonsterExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingClueMonsterExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1358: range 00000000144DDB12-00000000144DDCD3
const data::HuntingClueMonsterExcelConfig *__fastcall data::HuntingExcelConfigMgrBase::findHuntingClueMonsterExcelConfig(
        const data::HuntingExcelConfigMgrBase *const this,
        __int64 config_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::HuntingClueMonsterExcelConfigMap *p_hunting_clue_monster_excel_config_map; // rdx
  data::HuntingClueMonsterExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::HuntingClueMonsterExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 config_id:1357 64 8 9 iter:1359 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::HuntingExcelConfigMgrBase::findHuntingClueMonsterExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = config_id;
  p_hunting_clue_monster_excel_config_map = &this->hunting_clue_monster_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, config_id);
  *(std::unordered_map<unsigned int,data::HuntingClueMonsterExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::HuntingClueMonsterExcelConfig>::find(p_hunting_clue_monster_excel_config_map, (const std::unordered_map<unsigned int,data::HuntingClueMonsterExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->hunting_clue_monster_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::HuntingClueMonsterExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::HuntingClueMonsterExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::HuntingClueMonsterExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HuntingClueMonsterExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HuntingClueMonsterExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::HuntingClueMonsterExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::HuntingClueMonsterExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1371: range 00000000144DDCD4-00000000144DDE95
data::HuntingClueGatherExcelConfig *__fastcall data::HuntingExcelConfigMgrBase::findHuntingClueGatherExcelConfig(
        data::HuntingExcelConfigMgrBase *const this,
        __int64 config_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::HuntingClueGatherExcelConfigMap *p_hunting_clue_gather_excel_config_map; // rdx
  data::HuntingClueGatherExcelConfigMap *v6; // rdx
  bool v7; // al
  data::HuntingClueGatherExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 config_id:1370 64 8 9 iter:1372 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::HuntingExcelConfigMgrBase::findHuntingClueGatherExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = config_id;
  p_hunting_clue_gather_excel_config_map = &this->hunting_clue_gather_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, config_id);
  *(std::unordered_map<unsigned int,data::HuntingClueGatherExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::HuntingClueGatherExcelConfig>::find(
                                                                                                  p_hunting_clue_gather_excel_config_map,
                                                                                                  (const std::unordered_map<unsigned int,data::HuntingClueGatherExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->hunting_clue_gather_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::HuntingClueGatherExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::HuntingClueGatherExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::HuntingClueGatherExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HuntingClueGatherExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HuntingClueGatherExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingClueGatherExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingClueGatherExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1384: range 00000000144DDE96-00000000144DE057
const data::HuntingClueGatherExcelConfig *__fastcall data::HuntingExcelConfigMgrBase::findHuntingClueGatherExcelConfig(
        const data::HuntingExcelConfigMgrBase *const this,
        __int64 config_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::HuntingClueGatherExcelConfigMap *p_hunting_clue_gather_excel_config_map; // rdx
  data::HuntingClueGatherExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::HuntingClueGatherExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 config_id:1383 64 8 9 iter:1385 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::HuntingExcelConfigMgrBase::findHuntingClueGatherExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = config_id;
  p_hunting_clue_gather_excel_config_map = &this->hunting_clue_gather_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, config_id);
  *(std::unordered_map<unsigned int,data::HuntingClueGatherExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::HuntingClueGatherExcelConfig>::find(p_hunting_clue_gather_excel_config_map, (const std::unordered_map<unsigned int,data::HuntingClueGatherExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->hunting_clue_gather_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::HuntingClueGatherExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::HuntingClueGatherExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::HuntingClueGatherExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HuntingClueGatherExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HuntingClueGatherExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::HuntingClueGatherExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::HuntingClueGatherExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1397: range 00000000144DE058-00000000144DE219
data::HuntingMonsterExcelConfig *__fastcall data::HuntingExcelConfigMgrBase::findHuntingMonsterExcelConfig(
        data::HuntingExcelConfigMgrBase *const this,
        __int64 config_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::HuntingMonsterExcelConfigMap *p_hunting_monster_excel_config_map; // rdx
  data::HuntingMonsterExcelConfigMap *v6; // rdx
  bool v7; // al
  data::HuntingMonsterExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 config_id:1396 64 8 9 iter:1398 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::HuntingExcelConfigMgrBase::findHuntingMonsterExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = config_id;
  p_hunting_monster_excel_config_map = &this->hunting_monster_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, config_id);
  *(std::unordered_map<unsigned int,data::HuntingMonsterExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::HuntingMonsterExcelConfig>::find(
                                                                                               p_hunting_monster_excel_config_map,
                                                                                               (const std::unordered_map<unsigned int,data::HuntingMonsterExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->hunting_monster_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::HuntingMonsterExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::HuntingMonsterExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::HuntingMonsterExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HuntingMonsterExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HuntingMonsterExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingMonsterExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::HuntingMonsterExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1410: range 00000000144DE21A-00000000144DE3DB
const data::HuntingMonsterExcelConfig *__fastcall data::HuntingExcelConfigMgrBase::findHuntingMonsterExcelConfig(
        const data::HuntingExcelConfigMgrBase *const this,
        __int64 config_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::HuntingMonsterExcelConfigMap *p_hunting_monster_excel_config_map; // rdx
  data::HuntingMonsterExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::HuntingMonsterExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 config_id:1409 64 8 9 iter:1411 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::HuntingExcelConfigMgrBase::findHuntingMonsterExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = config_id;
  p_hunting_monster_excel_config_map = &this->hunting_monster_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, config_id);
  *(std::unordered_map<unsigned int,data::HuntingMonsterExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::HuntingMonsterExcelConfig>::find(
                                                                                                     p_hunting_monster_excel_config_map,
                                                                                                     (const std::unordered_map<unsigned int,data::HuntingMonsterExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->hunting_monster_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::HuntingMonsterExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::HuntingMonsterExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::HuntingMonsterExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HuntingMonsterExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HuntingMonsterExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::HuntingMonsterExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::HuntingMonsterExcelConfig>,false,false> *const)(v2 + 64))->second;
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

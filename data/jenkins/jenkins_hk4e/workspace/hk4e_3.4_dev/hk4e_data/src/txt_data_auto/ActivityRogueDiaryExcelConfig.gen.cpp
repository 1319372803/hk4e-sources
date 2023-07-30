// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp

// Line 12: range 00000000137CB2C8-00000000137CB640
const char *__fastcall data::enumValToStr(data::RogueDiaryStageDifficultyType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::RogueDiaryStageDifficultyType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::RogueDiaryStageDifficultyType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
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
  map = data::getRogueDiaryStageDifficultyTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::RogueDiaryStageDifficultyType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::RogueDiaryStageDifficultyType,std::pair<std::string,std::string>>::find(map, (const std::map<data::RogueDiaryStageDifficultyType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::RogueDiaryStageDifficultyType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::RogueDiaryStageDifficultyType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::RogueDiaryStageDifficultyType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::RogueDiaryStageDifficultyType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
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
    result = "INVALID_RogueDiaryStageDifficultyType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::RogueDiaryStageDifficultyType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::RogueDiaryStageDifficultyType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 24: range 00000000137CB641-00000000137CBBF9
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::RogueDiaryStageDifficultyType>,false,true>::pointer v10; // rax
  data::RogueDiaryStageDifficultyType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::RogueDiaryStageDifficultyType> *m; // [rsp+18h] [rbp-188h]
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
    m = data::getRogueDiaryStageDifficultyTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::RogueDiaryStageDifficultyType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::RogueDiaryStageDifficultyType>::find(m, (const std::unordered_map<std::string,data::RogueDiaryStageDifficultyType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::RogueDiaryStageDifficultyType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::RogueDiaryStageDifficultyType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::RogueDiaryStageDifficultyType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RogueDiaryStageDifficultyType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RogueDiaryStageDifficultyType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
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
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::RogueDiaryStageDifficultyType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::RogueDiaryStageDifficultyType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
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

// Line 45: range 00000000137CBBFA-00000000137CC655
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::RogueDiaryStageDifficultyType> *i; // r14
  unsigned __int64 v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::RogueDiaryStageDifficultyType>,false,true>::pointer v12; // rax
  data::RogueDiaryStageDifficultyType second; // ecx
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::RogueDiaryStageDifficultyType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::RogueDiaryStageDifficultyType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, e);
      *(_DWORD *)(v2 + 112) = 1;
      std::pair<std::string const,data::RogueDiaryStageDifficultyType>::pair<char const(&)[7],data::RogueDiaryStageDifficultyType,true>(
        (std::pair<const std::string,data::RogueDiaryStageDifficultyType> *const)(v2 + 448),
        (const char (*)[7])byte_1ABFA8A0,
        (data::RogueDiaryStageDifficultyType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1ABFA8A0);
      *(_DWORD *)(v2 + 128) = 2;
      std::pair<std::string const,data::RogueDiaryStageDifficultyType>::pair<char const(&)[7],data::RogueDiaryStageDifficultyType,true>(
        (std::pair<const std::string,data::RogueDiaryStageDifficultyType> *const)(v2 + 488),
        (const char (*)[7])byte_1ABFA8E0,
        (data::RogueDiaryStageDifficultyType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, byte_1ABFA8E0);
      *(_DWORD *)(v2 + 144) = 3;
      std::pair<std::string const,data::RogueDiaryStageDifficultyType>::pair<char const(&)[7],data::RogueDiaryStageDifficultyType,true>(
        (std::pair<const std::string,data::RogueDiaryStageDifficultyType> *const)(v2 + 528),
        (const char (*)[7])byte_1ABFA920,
        (data::RogueDiaryStageDifficultyType *)(v2 + 144));
      std::allocator<std::pair<std::string const,data::RogueDiaryStageDifficultyType>>::allocator((std::allocator<std::pair<const std::string,data::RogueDiaryStageDifficultyType> > *const)(v2 + 80));
      std::unordered_map<std::string,data::RogueDiaryStageDifficultyType>::unordered_map(
        &data::enumStrToVal(char const*,data::RogueDiaryStageDifficultyType &)::m,
        (std::initializer_list<std::pair<const std::string,data::RogueDiaryStageDifficultyType> >)__PAIR128__(
                                                                                                    3LL,
                                                                                                    v2 + 448),
        0LL,
        (const std::unordered_map<std::string,data::RogueDiaryStageDifficultyType>::hasher *)(v2 + 48),
        (const std::unordered_map<std::string,data::RogueDiaryStageDifficultyType>::key_equal *)(v2 + 64),
        (const std::unordered_map<std::string,data::RogueDiaryStageDifficultyType>::allocator_type *)(v2 + 80));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::RogueDiaryStageDifficultyType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::RogueDiaryStageDifficultyType>::~unordered_map,
        &data::enumStrToVal(char const*,data::RogueDiaryStageDifficultyType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::RogueDiaryStageDifficultyType>>::~allocator((std::allocator<std::pair<const std::string,data::RogueDiaryStageDifficultyType> > *const)(v2 + 80));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::RogueDiaryStageDifficultyType> *)(v2 + 568);
            i != (std::pair<const std::string,data::RogueDiaryStageDifficultyType> *)(v2 + 448);
            std::pair<std::string const,data::RogueDiaryStageDifficultyType>::~pair(i) )
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
    *(std::unordered_map<std::string,data::RogueDiaryStageDifficultyType>::iterator *)(v2 + 160) = std::unordered_map<std::string,data::RogueDiaryStageDifficultyType>::find(
                                                                                                     &data::enumStrToVal(char const*,data::RogueDiaryStageDifficultyType &)::m,
                                                                                                     (const std::unordered_map<std::string,data::RogueDiaryStageDifficultyType>::key_type *)(v2 + 320));
    std::string::~string((void *)(v2 + 320));
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 96);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, v2 + 320);
    *(std::unordered_map<std::string,data::RogueDiaryStageDifficultyType>::iterator *)(v2 + 192) = std::unordered_map<std::string,data::RogueDiaryStageDifficultyType>::end(&data::enumStrToVal(char const*,data::RogueDiaryStageDifficultyType &)::m);
    v9 = (char *)(v2 + 192);
    v10 = std::__detail::operator==<std::pair<std::string const,data::RogueDiaryStageDifficultyType>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RogueDiaryStageDifficultyType>,true> *)(v2 + 160),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RogueDiaryStageDifficultyType>,true> *)(v2 + 192));
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
        "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
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
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::RogueDiaryStageDifficultyType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::RogueDiaryStageDifficultyType>,false,true> *const)(v2 + 160));
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
      "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
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

// Line 71: range 00000000137CC656-00000000137CC66C
const char *__cdecl data::getDescription(data::RogueDiaryStageDifficultyType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 76: range 00000000137CC66D-00000000137CC823
bool __cdecl data::isValidRogueDiaryStageDifficultyType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t v5; // ecx
  char v6; // al
  const std::map<data::RogueDiaryStageDifficultyType,std::pair<std::string,std::string >> *v7; // rcx
  const std::map<data::RogueDiaryStageDifficultyType,std::pair<std::string,std::string >> *v8; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidRogueDiaryStageDifficultyType;
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
  v7 = data::getRogueDiaryStageDifficultyTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::RogueDiaryStageDifficultyType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::RogueDiaryStageDifficultyType,std::pair<std::string,std::string>>::end(v7);
  v8 = data::getRogueDiaryStageDifficultyTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::RogueDiaryStageDifficultyType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::RogueDiaryStageDifficultyType,std::pair<std::string,std::string>>::find(v8, (const std::map<data::RogueDiaryStageDifficultyType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::RogueDiaryStageDifficultyType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::RogueDiaryStageDifficultyType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 82: range 00000000137CC824-00000000137CC985
bool __cdecl data::isValidRogueDiaryStageDifficultyTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::RogueDiaryStageDifficultyType> *v5; // rcx
  const std::unordered_map<std::string,data::RogueDiaryStageDifficultyType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidRogueDiaryStageDifficultyTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getRogueDiaryStageDifficultyTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::RogueDiaryStageDifficultyType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::RogueDiaryStageDifficultyType>::end(v5);
  v6 = data::getRogueDiaryStageDifficultyTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::RogueDiaryStageDifficultyType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::RogueDiaryStageDifficultyType>::find(v6, name);
  result = std::__detail::operator!=<std::pair<std::string const,data::RogueDiaryStageDifficultyType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RogueDiaryStageDifficultyType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RogueDiaryStageDifficultyType>,true> *)(v2 + 64));
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

// Line 87: range 00000000137CC986-00000000137CCEE5
const std::unordered_map<std::string,data::RogueDiaryStageDifficultyType> *__cdecl data::getRogueDiaryStageDifficultyTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::RogueDiaryStageDifficultyType> *i; // r14
  const std::unordered_map<std::string,data::RogueDiaryStageDifficultyType> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getRogueDiaryStageDifficultyTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -234753535;
  v3[536862723] = -234556924;
  v3[536862724] = -234556924;
  v3[536862730] = -202116109;
  v3[536862731] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getRogueDiaryStageDifficultyTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getRogueDiaryStageDifficultyTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v0);
    *(_DWORD *)(v1 + 96) = 0;
    std::pair<std::string const,data::RogueDiaryStageDifficultyType>::pair<char const(&)[34],data::RogueDiaryStageDifficultyType,true>(
      (std::pair<const std::string,data::RogueDiaryStageDifficultyType> *const)(v1 + 160),
      (const char (*)[34])"ROGUE_DIARY_STAGE_DIFFICULTY_NONE",
      (data::RogueDiaryStageDifficultyType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "ROGUE_DIARY_STAGE_DIFFICULTY_NONE");
    *(_DWORD *)(v1 + 112) = 1;
    std::pair<std::string const,data::RogueDiaryStageDifficultyType>::pair<char const(&)[36],data::RogueDiaryStageDifficultyType,true>(
      (std::pair<const std::string,data::RogueDiaryStageDifficultyType> *const)(v1 + 200),
      (const char (*)[36])"ROGUE_DIARY_STAGE_DIFFICULTY_NORMAL",
      (data::RogueDiaryStageDifficultyType *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, "ROGUE_DIARY_STAGE_DIFFICULTY_NORMAL");
    *(_DWORD *)(v1 + 128) = 2;
    std::pair<std::string const,data::RogueDiaryStageDifficultyType>::pair<char const(&)[34],data::RogueDiaryStageDifficultyType,true>(
      (std::pair<const std::string,data::RogueDiaryStageDifficultyType> *const)(v1 + 240),
      (const char (*)[34])"ROGUE_DIARY_STAGE_DIFFICULTY_HARD",
      (data::RogueDiaryStageDifficultyType *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, "ROGUE_DIARY_STAGE_DIFFICULTY_HARD");
    *(_DWORD *)(v1 + 144) = 3;
    std::pair<std::string const,data::RogueDiaryStageDifficultyType>::pair<char const(&)[36],data::RogueDiaryStageDifficultyType,true>(
      (std::pair<const std::string,data::RogueDiaryStageDifficultyType> *const)(v1 + 280),
      (const char (*)[36])"ROGUE_DIARY_STAGE_DIFFICULTY_INSANE",
      (data::RogueDiaryStageDifficultyType *)(v1 + 144));
    std::allocator<std::pair<std::string const,data::RogueDiaryStageDifficultyType>>::allocator((std::allocator<std::pair<const std::string,data::RogueDiaryStageDifficultyType> > *const)(v1 + 80));
    std::unordered_map<std::string,data::RogueDiaryStageDifficultyType>::unordered_map(
      &data::getRogueDiaryStageDifficultyTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::RogueDiaryStageDifficultyType> >)__PAIR128__(
                                                                                                  4LL,
                                                                                                  v1 + 160),
      0LL,
      (const std::unordered_map<std::string,data::RogueDiaryStageDifficultyType>::hasher *)(v1 + 48),
      (const std::unordered_map<std::string,data::RogueDiaryStageDifficultyType>::key_equal *)(v1 + 64),
      (const std::unordered_map<std::string,data::RogueDiaryStageDifficultyType>::allocator_type *)(v1 + 80));
    __cxa_guard_release(&`guard variable for'data::getRogueDiaryStageDifficultyTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::RogueDiaryStageDifficultyType>::~unordered_map,
      &data::getRogueDiaryStageDifficultyTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::RogueDiaryStageDifficultyType>>::~allocator((std::allocator<std::pair<const std::string,data::RogueDiaryStageDifficultyType> > *const)(v1 + 80));
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::RogueDiaryStageDifficultyType> *)(v1 + 320);
          i != (std::pair<const std::string,data::RogueDiaryStageDifficultyType> *)(v1 + 160);
          std::pair<std::string const,data::RogueDiaryStageDifficultyType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getRogueDiaryStageDifficultyTypeNameMap[abi:cxx11](void)::m;
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

// Line 99: range 00000000137CCEE6-00000000137CD6B6
const std::map<data::RogueDiaryStageDifficultyType,std::pair<std::string,std::string >> *__cdecl data::getRogueDiaryStageDifficultyTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::RogueDiaryStageDifficultyType,std::pair<std::string,std::string > > *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getRogueDiaryStageDifficultyTypeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getRogueDiaryStageDifficultyTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getRogueDiaryStageDifficultyTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 64, v0);
    *(_DWORD *)(v1 + 64) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[34],true>(
      (std::pair<std::string,std::string > *const)(v1 + 128),
      (const char (*)[1])byte_1ABBC960,
      (const char (*)[34])"ROGUE_DIARY_STAGE_DIFFICULTY_NONE");
    std::pair<data::RogueDiaryStageDifficultyType const,std::pair<std::string,std::string>>::pair<data::RogueDiaryStageDifficultyType,true>(
      (std::pair<const data::RogueDiaryStageDifficultyType,std::pair<std::string,std::string > > *const)(v1 + 512),
      (data::RogueDiaryStageDifficultyType *)(v1 + 64),
      (const std::pair<std::string,std::string > *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v1 + 64);
    *(_DWORD *)(v1 + 80) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[36],true>(
      (std::pair<std::string,std::string > *const)(v1 + 224),
      (const char (*)[7])byte_1ABFA8A0,
      (const char (*)[36])"ROGUE_DIARY_STAGE_DIFFICULTY_NORMAL");
    std::pair<data::RogueDiaryStageDifficultyType const,std::pair<std::string,std::string>>::pair<data::RogueDiaryStageDifficultyType,true>(
      (std::pair<const data::RogueDiaryStageDifficultyType,std::pair<std::string,std::string > > *const)(v1 + 584),
      (data::RogueDiaryStageDifficultyType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 224));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[34],true>(
      (std::pair<std::string,std::string > *const)(v1 + 320),
      (const char (*)[7])byte_1ABFA8E0,
      (const char (*)[34])"ROGUE_DIARY_STAGE_DIFFICULTY_HARD");
    std::pair<data::RogueDiaryStageDifficultyType const,std::pair<std::string,std::string>>::pair<data::RogueDiaryStageDifficultyType,true>(
      (std::pair<const data::RogueDiaryStageDifficultyType,std::pair<std::string,std::string > > *const)(v1 + 656),
      (data::RogueDiaryStageDifficultyType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 320));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 3;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[36],true>(
      (std::pair<std::string,std::string > *const)(v1 + 416),
      (const char (*)[7])byte_1ABFA920,
      (const char (*)[36])"ROGUE_DIARY_STAGE_DIFFICULTY_INSANE");
    std::pair<data::RogueDiaryStageDifficultyType const,std::pair<std::string,std::string>>::pair<data::RogueDiaryStageDifficultyType,true>(
      (std::pair<const data::RogueDiaryStageDifficultyType,std::pair<std::string,std::string > > *const)(v1 + 728),
      (data::RogueDiaryStageDifficultyType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 416));
    std::allocator<std::pair<data::RogueDiaryStageDifficultyType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::RogueDiaryStageDifficultyType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    std::map<data::RogueDiaryStageDifficultyType,std::pair<std::string,std::string>>::map(
      &data::getRogueDiaryStageDifficultyTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::RogueDiaryStageDifficultyType,std::pair<std::string,std::string > > >)__PAIR128__(4LL, v1 + 512),
      (const std::less<data::RogueDiaryStageDifficultyType> *)(v1 + 32),
      (const std::map<data::RogueDiaryStageDifficultyType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 48));
    __cxa_guard_release(&`guard variable for'data::getRogueDiaryStageDifficultyTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::RogueDiaryStageDifficultyType,std::pair<std::string,std::string>>::~map,
      &data::getRogueDiaryStageDifficultyTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::RogueDiaryStageDifficultyType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::RogueDiaryStageDifficultyType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::RogueDiaryStageDifficultyType,std::pair<std::string,std::string > > *)(v1 + 800);
          i != (std::pair<const data::RogueDiaryStageDifficultyType,std::pair<std::string,std::string > > *)(v1 + 512);
          std::pair<data::RogueDiaryStageDifficultyType const,std::pair<std::string,std::string>>::~pair(i) )
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
  return &data::getRogueDiaryStageDifficultyTypeEnumMap[abi:cxx11](void)::m;
};

// Line 111: range 00000000137CD6B7-00000000137CDA2F
const char *__fastcall data::enumValToStr(data::RogueDiaryTiredType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::RogueDiaryTiredType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::RogueDiaryTiredType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 5 e:110 64 8 8 iter:113 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getRogueDiaryTiredTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::RogueDiaryTiredType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::RogueDiaryTiredType,std::pair<std::string,std::string>>::find(map, (const std::map<data::RogueDiaryTiredType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::RogueDiaryTiredType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::RogueDiaryTiredType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::RogueDiaryTiredType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::RogueDiaryTiredType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
      "enumValToStr",
      116);
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
    result = "INVALID_RogueDiaryTiredType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::RogueDiaryTiredType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::RogueDiaryTiredType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 123: range 00000000137CDA30-00000000137CDFE8
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::RogueDiaryTiredType>,false,true>::pointer v10; // rax
  data::RogueDiaryTiredType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::RogueDiaryTiredType> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:132 96 8 9 <unknown> 128 8 5 s:122 160 32 9 <unknown> 224 32 9 <unk"
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
    m = data::getRogueDiaryTiredTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::RogueDiaryTiredType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::RogueDiaryTiredType>::find(
                                                                                                m,
                                                                                                (const std::unordered_map<std::string,data::RogueDiaryTiredType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::RogueDiaryTiredType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::RogueDiaryTiredType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::RogueDiaryTiredType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RogueDiaryTiredType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RogueDiaryTiredType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
        "enumNameToVal",
        135);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::RogueDiaryTiredType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::RogueDiaryTiredType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
      "enumNameToVal",
      126);
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

// Line 144: range 00000000137CDFE9-00000000137CEA44
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::RogueDiaryTiredType> *i; // r14
  unsigned __int64 v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::RogueDiaryTiredType>,false,true>::pointer v12; // rax
  data::RogueDiaryTiredType second; // ecx
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
                        " <unknown> 144 4 9 <unknown> 160 8 6 it:158 192 8 9 <unknown> 224 8 5 s:143 256 32 9 <unknown> 3"
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::RogueDiaryTiredType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::RogueDiaryTiredType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, e);
      *(_DWORD *)(v2 + 112) = 1;
      std::pair<std::string const,data::RogueDiaryTiredType>::pair<char const(&)[13],data::RogueDiaryTiredType,true>(
        (std::pair<const std::string,data::RogueDiaryTiredType> *const)(v2 + 448),
        (const char (*)[13])byte_1ABFAEE0,
        (data::RogueDiaryTiredType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1ABFAEE0);
      *(_DWORD *)(v2 + 128) = 2;
      std::pair<std::string const,data::RogueDiaryTiredType>::pair<char const(&)[13],data::RogueDiaryTiredType,true>(
        (std::pair<const std::string,data::RogueDiaryTiredType> *const)(v2 + 488),
        (const char (*)[13])byte_1ABFAF20,
        (data::RogueDiaryTiredType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, byte_1ABFAF20);
      *(_DWORD *)(v2 + 144) = 3;
      std::pair<std::string const,data::RogueDiaryTiredType>::pair<char const(&)[13],data::RogueDiaryTiredType,true>(
        (std::pair<const std::string,data::RogueDiaryTiredType> *const)(v2 + 528),
        (const char (*)[13])byte_1ABFAF60,
        (data::RogueDiaryTiredType *)(v2 + 144));
      std::allocator<std::pair<std::string const,data::RogueDiaryTiredType>>::allocator((std::allocator<std::pair<const std::string,data::RogueDiaryTiredType> > *const)(v2 + 80));
      std::unordered_map<std::string,data::RogueDiaryTiredType>::unordered_map(
        &data::enumStrToVal(char const*,data::RogueDiaryTiredType &)::m,
        (std::initializer_list<std::pair<const std::string,data::RogueDiaryTiredType> >)__PAIR128__(3LL, v2 + 448),
        0LL,
        (const std::unordered_map<std::string,data::RogueDiaryTiredType>::hasher *)(v2 + 48),
        (const std::unordered_map<std::string,data::RogueDiaryTiredType>::key_equal *)(v2 + 64),
        (const std::unordered_map<std::string,data::RogueDiaryTiredType>::allocator_type *)(v2 + 80));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::RogueDiaryTiredType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::RogueDiaryTiredType>::~unordered_map,
        &data::enumStrToVal(char const*,data::RogueDiaryTiredType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::RogueDiaryTiredType>>::~allocator((std::allocator<std::pair<const std::string,data::RogueDiaryTiredType> > *const)(v2 + 80));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::RogueDiaryTiredType> *)(v2 + 568);
            i != (std::pair<const std::string,data::RogueDiaryTiredType> *)(v2 + 448);
            std::pair<std::string const,data::RogueDiaryTiredType>::~pair(i) )
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
    *(std::unordered_map<std::string,data::RogueDiaryTiredType>::iterator *)(v2 + 160) = std::unordered_map<std::string,data::RogueDiaryTiredType>::find(
                                                                                           &data::enumStrToVal(char const*,data::RogueDiaryTiredType &)::m,
                                                                                           (const std::unordered_map<std::string,data::RogueDiaryTiredType>::key_type *)(v2 + 320));
    std::string::~string((void *)(v2 + 320));
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 96);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, v2 + 320);
    *(std::unordered_map<std::string,data::RogueDiaryTiredType>::iterator *)(v2 + 192) = std::unordered_map<std::string,data::RogueDiaryTiredType>::end(&data::enumStrToVal(char const*,data::RogueDiaryTiredType &)::m);
    v9 = (char *)(v2 + 192);
    v10 = std::__detail::operator==<std::pair<std::string const,data::RogueDiaryTiredType>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RogueDiaryTiredType>,true> *)(v2 + 160),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RogueDiaryTiredType>,true> *)(v2 + 192));
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
        "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
        "enumStrToVal",
        161);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 384),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)(v2 + 224));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::RogueDiaryTiredType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::RogueDiaryTiredType>,false,true> *const)(v2 + 160));
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
      "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
      "enumStrToVal",
      147);
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

// Line 170: range 00000000137CEA45-00000000137CEA5B
const char *__cdecl data::getDescription(data::RogueDiaryTiredType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 175: range 00000000137CEA5C-00000000137CEC12
bool __cdecl data::isValidRogueDiaryTiredType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t v5; // ecx
  char v6; // al
  const std::map<data::RogueDiaryTiredType,std::pair<std::string,std::string >> *v7; // rcx
  const std::map<data::RogueDiaryTiredType,std::pair<std::string,std::string >> *v8; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:176 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidRogueDiaryTiredType;
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
  v7 = data::getRogueDiaryTiredTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::RogueDiaryTiredType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::RogueDiaryTiredType,std::pair<std::string,std::string>>::end(v7);
  v8 = data::getRogueDiaryTiredTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::RogueDiaryTiredType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::RogueDiaryTiredType,std::pair<std::string,std::string>>::find(v8, (const std::map<data::RogueDiaryTiredType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::RogueDiaryTiredType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::RogueDiaryTiredType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 181: range 00000000137CEC13-00000000137CED74
bool __cdecl data::isValidRogueDiaryTiredTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::RogueDiaryTiredType> *v5; // rcx
  const std::unordered_map<std::string,data::RogueDiaryTiredType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidRogueDiaryTiredTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getRogueDiaryTiredTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::RogueDiaryTiredType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::RogueDiaryTiredType>::end(v5);
  v6 = data::getRogueDiaryTiredTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::RogueDiaryTiredType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::RogueDiaryTiredType>::find(
                                                                                              v6,
                                                                                              name);
  result = std::__detail::operator!=<std::pair<std::string const,data::RogueDiaryTiredType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RogueDiaryTiredType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RogueDiaryTiredType>,true> *)(v2 + 64));
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

// Line 186: range 00000000137CED75-00000000137CF2D4
const std::unordered_map<std::string,data::RogueDiaryTiredType> *__cdecl data::getRogueDiaryTiredTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::RogueDiaryTiredType> *i; // r14
  const std::unordered_map<std::string,data::RogueDiaryTiredType> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getRogueDiaryTiredTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -234753535;
  v3[536862723] = -234556924;
  v3[536862724] = -234556924;
  v3[536862730] = -202116109;
  v3[536862731] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getRogueDiaryTiredTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getRogueDiaryTiredTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v0);
    *(_DWORD *)(v1 + 96) = 0;
    std::pair<std::string const,data::RogueDiaryTiredType>::pair<char const(&)[23],data::RogueDiaryTiredType,true>(
      (std::pair<const std::string,data::RogueDiaryTiredType> *const)(v1 + 160),
      (const char (*)[23])"ROGUE_DIARY_TIRED_NONE",
      (data::RogueDiaryTiredType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "ROGUE_DIARY_TIRED_NONE");
    *(_DWORD *)(v1 + 112) = 1;
    std::pair<std::string const,data::RogueDiaryTiredType>::pair<char const(&)[25],data::RogueDiaryTiredType,true>(
      (std::pair<const std::string,data::RogueDiaryTiredType> *const)(v1 + 200),
      (const char (*)[25])"ROGUE_DIARY_TIRED_SELECT",
      (data::RogueDiaryTiredType *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, "ROGUE_DIARY_TIRED_SELECT");
    *(_DWORD *)(v1 + 128) = 2;
    std::pair<std::string const,data::RogueDiaryTiredType>::pair<char const(&)[25],data::RogueDiaryTiredType,true>(
      (std::pair<const std::string,data::RogueDiaryTiredType> *const)(v1 + 240),
      (const char (*)[25])"ROGUE_DIARY_TIRED_RANDOM",
      (data::RogueDiaryTiredType *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, "ROGUE_DIARY_TIRED_RANDOM");
    *(_DWORD *)(v1 + 144) = 3;
    std::pair<std::string const,data::RogueDiaryTiredType>::pair<char const(&)[22],data::RogueDiaryTiredType,true>(
      (std::pair<const std::string,data::RogueDiaryTiredType> *const)(v1 + 280),
      (const char (*)[22])"ROGUE_DIARY_TIRED_ALL",
      (data::RogueDiaryTiredType *)(v1 + 144));
    std::allocator<std::pair<std::string const,data::RogueDiaryTiredType>>::allocator((std::allocator<std::pair<const std::string,data::RogueDiaryTiredType> > *const)(v1 + 80));
    std::unordered_map<std::string,data::RogueDiaryTiredType>::unordered_map(
      &data::getRogueDiaryTiredTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::RogueDiaryTiredType> >)__PAIR128__(4LL, v1 + 160),
      0LL,
      (const std::unordered_map<std::string,data::RogueDiaryTiredType>::hasher *)(v1 + 48),
      (const std::unordered_map<std::string,data::RogueDiaryTiredType>::key_equal *)(v1 + 64),
      (const std::unordered_map<std::string,data::RogueDiaryTiredType>::allocator_type *)(v1 + 80));
    __cxa_guard_release(&`guard variable for'data::getRogueDiaryTiredTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::RogueDiaryTiredType>::~unordered_map,
      &data::getRogueDiaryTiredTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::RogueDiaryTiredType>>::~allocator((std::allocator<std::pair<const std::string,data::RogueDiaryTiredType> > *const)(v1 + 80));
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::RogueDiaryTiredType> *)(v1 + 320);
          i != (std::pair<const std::string,data::RogueDiaryTiredType> *)(v1 + 160);
          std::pair<std::string const,data::RogueDiaryTiredType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getRogueDiaryTiredTypeNameMap[abi:cxx11](void)::m;
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

// Line 198: range 00000000137CF2D5-00000000137CFAA5
const std::map<data::RogueDiaryTiredType,std::pair<std::string,std::string >> *__cdecl data::getRogueDiaryTiredTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::RogueDiaryTiredType,std::pair<std::string,std::string > > *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getRogueDiaryTiredTypeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getRogueDiaryTiredTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getRogueDiaryTiredTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 64, v0);
    *(_DWORD *)(v1 + 64) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[23],true>(
      (std::pair<std::string,std::string > *const)(v1 + 128),
      (const char (*)[1])byte_1ABBC960,
      (const char (*)[23])"ROGUE_DIARY_TIRED_NONE");
    std::pair<data::RogueDiaryTiredType const,std::pair<std::string,std::string>>::pair<data::RogueDiaryTiredType,true>(
      (std::pair<const data::RogueDiaryTiredType,std::pair<std::string,std::string > > *const)(v1 + 512),
      (data::RogueDiaryTiredType *)(v1 + 64),
      (const std::pair<std::string,std::string > *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v1 + 64);
    *(_DWORD *)(v1 + 80) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[25],true>(
      (std::pair<std::string,std::string > *const)(v1 + 224),
      (const char (*)[13])byte_1ABFAEE0,
      (const char (*)[25])"ROGUE_DIARY_TIRED_SELECT");
    std::pair<data::RogueDiaryTiredType const,std::pair<std::string,std::string>>::pair<data::RogueDiaryTiredType,true>(
      (std::pair<const data::RogueDiaryTiredType,std::pair<std::string,std::string > > *const)(v1 + 584),
      (data::RogueDiaryTiredType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 224));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[25],true>(
      (std::pair<std::string,std::string > *const)(v1 + 320),
      (const char (*)[13])byte_1ABFAF20,
      (const char (*)[25])"ROGUE_DIARY_TIRED_RANDOM");
    std::pair<data::RogueDiaryTiredType const,std::pair<std::string,std::string>>::pair<data::RogueDiaryTiredType,true>(
      (std::pair<const data::RogueDiaryTiredType,std::pair<std::string,std::string > > *const)(v1 + 656),
      (data::RogueDiaryTiredType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 320));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 3;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[22],true>(
      (std::pair<std::string,std::string > *const)(v1 + 416),
      (const char (*)[13])byte_1ABFAF60,
      (const char (*)[22])"ROGUE_DIARY_TIRED_ALL");
    std::pair<data::RogueDiaryTiredType const,std::pair<std::string,std::string>>::pair<data::RogueDiaryTiredType,true>(
      (std::pair<const data::RogueDiaryTiredType,std::pair<std::string,std::string > > *const)(v1 + 728),
      (data::RogueDiaryTiredType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 416));
    std::allocator<std::pair<data::RogueDiaryTiredType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::RogueDiaryTiredType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    std::map<data::RogueDiaryTiredType,std::pair<std::string,std::string>>::map(
      &data::getRogueDiaryTiredTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::RogueDiaryTiredType,std::pair<std::string,std::string > > >)__PAIR128__(4LL, v1 + 512),
      (const std::less<data::RogueDiaryTiredType> *)(v1 + 32),
      (const std::map<data::RogueDiaryTiredType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 48));
    __cxa_guard_release(&`guard variable for'data::getRogueDiaryTiredTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::RogueDiaryTiredType,std::pair<std::string,std::string>>::~map,
      &data::getRogueDiaryTiredTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::RogueDiaryTiredType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::RogueDiaryTiredType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::RogueDiaryTiredType,std::pair<std::string,std::string > > *)(v1 + 800);
          i != (std::pair<const data::RogueDiaryTiredType,std::pair<std::string,std::string > > *)(v1 + 512);
          std::pair<data::RogueDiaryTiredType const,std::pair<std::string,std::string>>::~pair(i) )
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
  return &data::getRogueDiaryTiredTypeEnumMap[abi:cxx11](void)::m;
};

// Line 210: range 00000000137CFAA6-00000000137CFE1E
const char *__fastcall data::enumValToStr(data::RogueDiaryBuffType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::RogueDiaryBuffType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::RogueDiaryBuffType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 5 e:209 64 8 8 iter:212 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getRogueDiaryBuffTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::RogueDiaryBuffType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::RogueDiaryBuffType,std::pair<std::string,std::string>>::find(map, (const std::map<data::RogueDiaryBuffType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::RogueDiaryBuffType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::RogueDiaryBuffType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::RogueDiaryBuffType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::RogueDiaryBuffType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
      "enumValToStr",
      215);
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
    result = "INVALID_RogueDiaryBuffType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::RogueDiaryBuffType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::RogueDiaryBuffType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 222: range 00000000137CFE1F-00000000137D03D7
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::RogueDiaryBuffType>,false,true>::pointer v10; // rax
  data::RogueDiaryBuffType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::RogueDiaryBuffType> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:231 96 8 9 <unknown> 128 8 5 s:221 160 32 9 <unknown> 224 32 9 <unk"
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
    m = data::getRogueDiaryBuffTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::RogueDiaryBuffType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::RogueDiaryBuffType>::find(
                                                                                               m,
                                                                                               (const std::unordered_map<std::string,data::RogueDiaryBuffType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::RogueDiaryBuffType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::RogueDiaryBuffType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::RogueDiaryBuffType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RogueDiaryBuffType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RogueDiaryBuffType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
        "enumNameToVal",
        234);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::RogueDiaryBuffType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::RogueDiaryBuffType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
      "enumNameToVal",
      225);
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

// Line 243: range 00000000137D03D8-00000000137D0DA1
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::RogueDiaryBuffType> *i; // r14
  unsigned __int64 v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::RogueDiaryBuffType>,false,true>::pointer v12; // rax
  data::RogueDiaryBuffType second; // ecx
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
                        " <unknown> 144 8 6 it:256 176 8 9 <unknown> 208 8 5 s:242 240 32 9 <unknown> 304 32 9 <unknown> "
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::RogueDiaryBuffType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::RogueDiaryBuffType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, e);
      *(_DWORD *)(v2 + 112) = 1;
      std::pair<std::string const,data::RogueDiaryBuffType>::pair<char const(&)[2],data::RogueDiaryBuffType,true>(
        (std::pair<const std::string,data::RogueDiaryBuffType> *const)(v2 + 432),
        (const char (*)[2])"R",
        (data::RogueDiaryBuffType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "R");
      *(_DWORD *)(v2 + 128) = 2;
      std::pair<std::string const,data::RogueDiaryBuffType>::pair<char const(&)[3],data::RogueDiaryBuffType,true>(
        (std::pair<const std::string,data::RogueDiaryBuffType> *const)(v2 + 472),
        (const char (*)[3])"SR",
        (data::RogueDiaryBuffType *)(v2 + 128));
      std::allocator<std::pair<std::string const,data::RogueDiaryBuffType>>::allocator((std::allocator<std::pair<const std::string,data::RogueDiaryBuffType> > *const)(v2 + 80));
      std::unordered_map<std::string,data::RogueDiaryBuffType>::unordered_map(
        &data::enumStrToVal(char const*,data::RogueDiaryBuffType &)::m,
        (std::initializer_list<std::pair<const std::string,data::RogueDiaryBuffType> >)__PAIR128__(2LL, v2 + 432),
        0LL,
        (const std::unordered_map<std::string,data::RogueDiaryBuffType>::hasher *)(v2 + 48),
        (const std::unordered_map<std::string,data::RogueDiaryBuffType>::key_equal *)(v2 + 64),
        (const std::unordered_map<std::string,data::RogueDiaryBuffType>::allocator_type *)(v2 + 80));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::RogueDiaryBuffType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::RogueDiaryBuffType>::~unordered_map,
        &data::enumStrToVal(char const*,data::RogueDiaryBuffType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::RogueDiaryBuffType>>::~allocator((std::allocator<std::pair<const std::string,data::RogueDiaryBuffType> > *const)(v2 + 80));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::RogueDiaryBuffType> *)(v2 + 512);
            i != (std::pair<const std::string,data::RogueDiaryBuffType> *)(v2 + 432);
            std::pair<std::string const,data::RogueDiaryBuffType>::~pair(i) )
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
    *(std::unordered_map<std::string,data::RogueDiaryBuffType>::iterator *)(v2 + 144) = std::unordered_map<std::string,data::RogueDiaryBuffType>::find(
                                                                                          &data::enumStrToVal(char const*,data::RogueDiaryBuffType &)::m,
                                                                                          (const std::unordered_map<std::string,data::RogueDiaryBuffType>::key_type *)(v2 + 304));
    std::string::~string((void *)(v2 + 304));
    *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 96);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, v2 + 304);
    *(std::unordered_map<std::string,data::RogueDiaryBuffType>::iterator *)(v2 + 176) = std::unordered_map<std::string,data::RogueDiaryBuffType>::end(&data::enumStrToVal(char const*,data::RogueDiaryBuffType &)::m);
    v9 = (char *)(v2 + 176);
    v10 = std::__detail::operator==<std::pair<std::string const,data::RogueDiaryBuffType>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RogueDiaryBuffType>,true> *)(v2 + 144),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RogueDiaryBuffType>,true> *)(v2 + 176));
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
        "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
        "enumStrToVal",
        259);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 368),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)(v2 + 208));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 368));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::RogueDiaryBuffType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::RogueDiaryBuffType>,false,true> *const)(v2 + 144));
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
      "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
      "enumStrToVal",
      246);
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

// Line 268: range 00000000137D0DA2-00000000137D0DB8
const char *__cdecl data::getDescription(data::RogueDiaryBuffType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 273: range 00000000137D0DB9-00000000137D0F6F
bool __cdecl data::isValidRogueDiaryBuffType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t v5; // ecx
  char v6; // al
  const std::map<data::RogueDiaryBuffType,std::pair<std::string,std::string >> *v7; // rcx
  const std::map<data::RogueDiaryBuffType,std::pair<std::string,std::string >> *v8; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:274 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidRogueDiaryBuffType;
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
  v7 = data::getRogueDiaryBuffTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::RogueDiaryBuffType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::RogueDiaryBuffType,std::pair<std::string,std::string>>::end(v7);
  v8 = data::getRogueDiaryBuffTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::RogueDiaryBuffType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::RogueDiaryBuffType,std::pair<std::string,std::string>>::find(v8, (const std::map<data::RogueDiaryBuffType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::RogueDiaryBuffType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::RogueDiaryBuffType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 279: range 00000000137D0F70-00000000137D10D1
bool __cdecl data::isValidRogueDiaryBuffTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::RogueDiaryBuffType> *v5; // rcx
  const std::unordered_map<std::string,data::RogueDiaryBuffType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidRogueDiaryBuffTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getRogueDiaryBuffTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::RogueDiaryBuffType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::RogueDiaryBuffType>::end(v5);
  v6 = data::getRogueDiaryBuffTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::RogueDiaryBuffType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::RogueDiaryBuffType>::find(
                                                                                             v6,
                                                                                             name);
  result = std::__detail::operator!=<std::pair<std::string const,data::RogueDiaryBuffType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RogueDiaryBuffType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RogueDiaryBuffType>,true> *)(v2 + 64));
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

// Line 284: range 00000000137D10D2-00000000137D1594
const std::unordered_map<std::string,data::RogueDiaryBuffType> *__cdecl data::getRogueDiaryBuffTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::RogueDiaryBuffType> *i; // r14
  const std::unordered_map<std::string,data::RogueDiaryBuffType> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getRogueDiaryBuffTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556927;
  v3[536862723] = -234556924;
  v3[536862727] = -218103808;
  v3[536862728] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getRogueDiaryBuffTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getRogueDiaryBuffTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string const,data::RogueDiaryBuffType>::pair<char const(&)[22],data::RogueDiaryBuffType,true>(
      (std::pair<const std::string,data::RogueDiaryBuffType> *const)(v1 + 128),
      (const char (*)[22])"ROGUE_DIARY_BUFF_NONE",
      (data::RogueDiaryBuffType *)(v1 + 80));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, "ROGUE_DIARY_BUFF_NONE");
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string const,data::RogueDiaryBuffType>::pair<char const(&)[19],data::RogueDiaryBuffType,true>(
      (std::pair<const std::string,data::RogueDiaryBuffType> *const)(v1 + 168),
      (const char (*)[19])"ROGUE_DIARY_BUFF_R",
      (data::RogueDiaryBuffType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "ROGUE_DIARY_BUFF_R");
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string const,data::RogueDiaryBuffType>::pair<char const(&)[20],data::RogueDiaryBuffType,true>(
      (std::pair<const std::string,data::RogueDiaryBuffType> *const)(v1 + 208),
      (const char (*)[20])"ROGUE_DIARY_BUFF_SR",
      (data::RogueDiaryBuffType *)(v1 + 112));
    std::allocator<std::pair<std::string const,data::RogueDiaryBuffType>>::allocator((std::allocator<std::pair<const std::string,data::RogueDiaryBuffType> > *const)(v1 + 64));
    std::unordered_map<std::string,data::RogueDiaryBuffType>::unordered_map(
      &data::getRogueDiaryBuffTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::RogueDiaryBuffType> >)__PAIR128__(3LL, v1 + 128),
      0LL,
      (const std::unordered_map<std::string,data::RogueDiaryBuffType>::hasher *)(v1 + 32),
      (const std::unordered_map<std::string,data::RogueDiaryBuffType>::key_equal *)(v1 + 48),
      (const std::unordered_map<std::string,data::RogueDiaryBuffType>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getRogueDiaryBuffTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::RogueDiaryBuffType>::~unordered_map,
      &data::getRogueDiaryBuffTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::RogueDiaryBuffType>>::~allocator((std::allocator<std::pair<const std::string,data::RogueDiaryBuffType> > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::RogueDiaryBuffType> *)(v1 + 248);
          i != (std::pair<const std::string,data::RogueDiaryBuffType> *)(v1 + 128);
          std::pair<std::string const,data::RogueDiaryBuffType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getRogueDiaryBuffTypeNameMap[abi:cxx11](void)::m;
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

// Line 295: range 00000000137D1595-00000000137D1C93
const std::map<data::RogueDiaryBuffType,std::pair<std::string,std::string >> *__cdecl data::getRogueDiaryBuffTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::RogueDiaryBuffType,std::pair<std::string,std::string > > *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getRogueDiaryBuffTypeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getRogueDiaryBuffTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getRogueDiaryBuffTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[22],true>(
      (std::pair<std::string,std::string > *const)(v1 + 128),
      (const char (*)[1])byte_1ABBC960,
      (const char (*)[22])"ROGUE_DIARY_BUFF_NONE");
    std::pair<data::RogueDiaryBuffType const,std::pair<std::string,std::string>>::pair<data::RogueDiaryBuffType,true>(
      (std::pair<const data::RogueDiaryBuffType,std::pair<std::string,std::string > > *const)(v1 + 416),
      (data::RogueDiaryBuffType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[2],char const(&)[19],true>(
      (std::pair<std::string,std::string > *const)(v1 + 224),
      (const char (*)[2])"R",
      (const char (*)[19])"ROGUE_DIARY_BUFF_R");
    std::pair<data::RogueDiaryBuffType const,std::pair<std::string,std::string>>::pair<data::RogueDiaryBuffType,true>(
      (std::pair<const data::RogueDiaryBuffType,std::pair<std::string,std::string > > *const)(v1 + 488),
      (data::RogueDiaryBuffType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 224));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[3],char const(&)[20],true>(
      (std::pair<std::string,std::string > *const)(v1 + 320),
      (const char (*)[3])"SR",
      (const char (*)[20])"ROGUE_DIARY_BUFF_SR");
    std::pair<data::RogueDiaryBuffType const,std::pair<std::string,std::string>>::pair<data::RogueDiaryBuffType,true>(
      (std::pair<const data::RogueDiaryBuffType,std::pair<std::string,std::string > > *const)(v1 + 560),
      (data::RogueDiaryBuffType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 320));
    std::allocator<std::pair<data::RogueDiaryBuffType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::RogueDiaryBuffType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    std::map<data::RogueDiaryBuffType,std::pair<std::string,std::string>>::map(
      &data::getRogueDiaryBuffTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::RogueDiaryBuffType,std::pair<std::string,std::string > > >)__PAIR128__(3LL, v1 + 416),
      (const std::less<data::RogueDiaryBuffType> *)(v1 + 48),
      (const std::map<data::RogueDiaryBuffType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getRogueDiaryBuffTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::RogueDiaryBuffType,std::pair<std::string,std::string>>::~map,
      &data::getRogueDiaryBuffTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::RogueDiaryBuffType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::RogueDiaryBuffType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::RogueDiaryBuffType,std::pair<std::string,std::string > > *)(v1 + 632);
          i != (std::pair<const data::RogueDiaryBuffType,std::pair<std::string,std::string > > *)(v1 + 416);
          std::pair<data::RogueDiaryBuffType const,std::pair<std::string,std::string>>::~pair(i) )
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
  return &data::getRogueDiaryBuffTypeEnumMap[abi:cxx11](void)::m;
};

// Line 306: range 00000000137D1C94-00000000137D200C
const char *__fastcall data::enumValToStr(data::RogueDiaryBuffEffectType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::RogueDiaryBuffEffectType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::RogueDiaryBuffEffectType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 5 e:305 64 8 8 iter:308 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getRogueDiaryBuffEffectTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::RogueDiaryBuffEffectType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::RogueDiaryBuffEffectType,std::pair<std::string,std::string>>::find(map, (const std::map<data::RogueDiaryBuffEffectType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::RogueDiaryBuffEffectType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::RogueDiaryBuffEffectType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::RogueDiaryBuffEffectType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::RogueDiaryBuffEffectType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
      "enumValToStr",
      311);
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
    result = "INVALID_RogueDiaryBuffEffectType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::RogueDiaryBuffEffectType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::RogueDiaryBuffEffectType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 318: range 00000000137D200D-00000000137D25C5
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::RogueDiaryBuffEffectType>,false,true>::pointer v10; // rax
  data::RogueDiaryBuffEffectType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::RogueDiaryBuffEffectType> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:327 96 8 9 <unknown> 128 8 5 s:317 160 32 9 <unknown> 224 32 9 <unk"
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
    m = data::getRogueDiaryBuffEffectTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::RogueDiaryBuffEffectType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::RogueDiaryBuffEffectType>::find(
                                                                                                     m,
                                                                                                     (const std::unordered_map<std::string,data::RogueDiaryBuffEffectType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::RogueDiaryBuffEffectType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::RogueDiaryBuffEffectType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::RogueDiaryBuffEffectType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RogueDiaryBuffEffectType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RogueDiaryBuffEffectType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
        "enumNameToVal",
        330);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::RogueDiaryBuffEffectType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::RogueDiaryBuffEffectType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
      "enumNameToVal",
      321);
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

// Line 339: range 00000000137D25C6-00000000137D2F8F
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::RogueDiaryBuffEffectType> *i; // r14
  unsigned __int64 v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::RogueDiaryBuffEffectType>,false,true>::pointer v12; // rax
  data::RogueDiaryBuffEffectType second; // ecx
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
                        " <unknown> 144 8 6 it:352 176 8 9 <unknown> 208 8 5 s:338 240 32 9 <unknown> 304 32 9 <unknown> "
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::RogueDiaryBuffEffectType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::RogueDiaryBuffEffectType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, e);
      *(_DWORD *)(v2 + 112) = 1;
      std::pair<std::string const,data::RogueDiaryBuffEffectType>::pair<char const(&)[16],data::RogueDiaryBuffEffectType,true>(
        (std::pair<const std::string,data::RogueDiaryBuffEffectType> *const)(v2 + 432),
        (const char (*)[16])byte_1ABFB7E0,
        (data::RogueDiaryBuffEffectType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1ABFB7E0);
      *(_DWORD *)(v2 + 128) = 2;
      std::pair<std::string const,data::RogueDiaryBuffEffectType>::pair<char const(&)[16],data::RogueDiaryBuffEffectType,true>(
        (std::pair<const std::string,data::RogueDiaryBuffEffectType> *const)(v2 + 472),
        (const char (*)[16])byte_1ABFB820,
        (data::RogueDiaryBuffEffectType *)(v2 + 128));
      std::allocator<std::pair<std::string const,data::RogueDiaryBuffEffectType>>::allocator((std::allocator<std::pair<const std::string,data::RogueDiaryBuffEffectType> > *const)(v2 + 80));
      std::unordered_map<std::string,data::RogueDiaryBuffEffectType>::unordered_map(
        &data::enumStrToVal(char const*,data::RogueDiaryBuffEffectType &)::m,
        (std::initializer_list<std::pair<const std::string,data::RogueDiaryBuffEffectType> >)__PAIR128__(2LL, v2 + 432),
        0LL,
        (const std::unordered_map<std::string,data::RogueDiaryBuffEffectType>::hasher *)(v2 + 48),
        (const std::unordered_map<std::string,data::RogueDiaryBuffEffectType>::key_equal *)(v2 + 64),
        (const std::unordered_map<std::string,data::RogueDiaryBuffEffectType>::allocator_type *)(v2 + 80));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::RogueDiaryBuffEffectType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::RogueDiaryBuffEffectType>::~unordered_map,
        &data::enumStrToVal(char const*,data::RogueDiaryBuffEffectType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::RogueDiaryBuffEffectType>>::~allocator((std::allocator<std::pair<const std::string,data::RogueDiaryBuffEffectType> > *const)(v2 + 80));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::RogueDiaryBuffEffectType> *)(v2 + 512);
            i != (std::pair<const std::string,data::RogueDiaryBuffEffectType> *)(v2 + 432);
            std::pair<std::string const,data::RogueDiaryBuffEffectType>::~pair(i) )
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
    *(std::unordered_map<std::string,data::RogueDiaryBuffEffectType>::iterator *)(v2 + 144) = std::unordered_map<std::string,data::RogueDiaryBuffEffectType>::find(
                                                                                                &data::enumStrToVal(char const*,data::RogueDiaryBuffEffectType &)::m,
                                                                                                (const std::unordered_map<std::string,data::RogueDiaryBuffEffectType>::key_type *)(v2 + 304));
    std::string::~string((void *)(v2 + 304));
    *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 96);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, v2 + 304);
    *(std::unordered_map<std::string,data::RogueDiaryBuffEffectType>::iterator *)(v2 + 176) = std::unordered_map<std::string,data::RogueDiaryBuffEffectType>::end(&data::enumStrToVal(char const*,data::RogueDiaryBuffEffectType &)::m);
    v9 = (char *)(v2 + 176);
    v10 = std::__detail::operator==<std::pair<std::string const,data::RogueDiaryBuffEffectType>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RogueDiaryBuffEffectType>,true> *)(v2 + 144),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RogueDiaryBuffEffectType>,true> *)(v2 + 176));
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
        "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
        "enumStrToVal",
        355);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 368),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)(v2 + 208));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 368));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::RogueDiaryBuffEffectType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::RogueDiaryBuffEffectType>,false,true> *const)(v2 + 144));
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
      "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
      "enumStrToVal",
      342);
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

// Line 364: range 00000000137D2F90-00000000137D2FA6
const char *__cdecl data::getDescription(data::RogueDiaryBuffEffectType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 369: range 00000000137D2FA7-00000000137D315D
bool __cdecl data::isValidRogueDiaryBuffEffectType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t v5; // ecx
  char v6; // al
  const std::map<data::RogueDiaryBuffEffectType,std::pair<std::string,std::string >> *v7; // rcx
  const std::map<data::RogueDiaryBuffEffectType,std::pair<std::string,std::string >> *v8; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:370 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidRogueDiaryBuffEffectType;
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
  v7 = data::getRogueDiaryBuffEffectTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::RogueDiaryBuffEffectType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::RogueDiaryBuffEffectType,std::pair<std::string,std::string>>::end(v7);
  v8 = data::getRogueDiaryBuffEffectTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::RogueDiaryBuffEffectType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::RogueDiaryBuffEffectType,std::pair<std::string,std::string>>::find(v8, (const std::map<data::RogueDiaryBuffEffectType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::RogueDiaryBuffEffectType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::RogueDiaryBuffEffectType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 375: range 00000000137D315E-00000000137D32BF
bool __cdecl data::isValidRogueDiaryBuffEffectTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::RogueDiaryBuffEffectType> *v5; // rcx
  const std::unordered_map<std::string,data::RogueDiaryBuffEffectType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidRogueDiaryBuffEffectTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getRogueDiaryBuffEffectTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::RogueDiaryBuffEffectType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::RogueDiaryBuffEffectType>::end(v5);
  v6 = data::getRogueDiaryBuffEffectTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::RogueDiaryBuffEffectType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::RogueDiaryBuffEffectType>::find(
                                                                                                   v6,
                                                                                                   name);
  result = std::__detail::operator!=<std::pair<std::string const,data::RogueDiaryBuffEffectType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RogueDiaryBuffEffectType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RogueDiaryBuffEffectType>,true> *)(v2 + 64));
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

// Line 380: range 00000000137D32C0-00000000137D3782
const std::unordered_map<std::string,data::RogueDiaryBuffEffectType> *__cdecl data::getRogueDiaryBuffEffectTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::RogueDiaryBuffEffectType> *i; // r14
  const std::unordered_map<std::string,data::RogueDiaryBuffEffectType> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getRogueDiaryBuffEffectTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556927;
  v3[536862723] = -234556924;
  v3[536862727] = -218103808;
  v3[536862728] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getRogueDiaryBuffEffectTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getRogueDiaryBuffEffectTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string const,data::RogueDiaryBuffEffectType>::pair<char const(&)[29],data::RogueDiaryBuffEffectType,true>(
      (std::pair<const std::string,data::RogueDiaryBuffEffectType> *const)(v1 + 128),
      (const char (*)[29])"ROGUE_DIARY_BUFF_EFFECT_NONE",
      (data::RogueDiaryBuffEffectType *)(v1 + 80));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, "ROGUE_DIARY_BUFF_EFFECT_NONE");
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string const,data::RogueDiaryBuffEffectType>::pair<char const(&)[32],data::RogueDiaryBuffEffectType,true>(
      (std::pair<const std::string,data::RogueDiaryBuffEffectType> *const)(v1 + 168),
      (const char (*)[32])"ROGUE_DIARY_BUFF_EFFECT_ABILITY",
      (data::RogueDiaryBuffEffectType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "ROGUE_DIARY_BUFF_EFFECT_ABILITY");
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string const,data::RogueDiaryBuffEffectType>::pair<char const(&)[38],data::RogueDiaryBuffEffectType,true>(
      (std::pair<const std::string,data::RogueDiaryBuffEffectType> *const)(v1 + 208),
      (const char (*)[38])"ROGUE_DIARY_BUFF_EFFECT_UNLOCK_TALENT",
      (data::RogueDiaryBuffEffectType *)(v1 + 112));
    std::allocator<std::pair<std::string const,data::RogueDiaryBuffEffectType>>::allocator((std::allocator<std::pair<const std::string,data::RogueDiaryBuffEffectType> > *const)(v1 + 64));
    std::unordered_map<std::string,data::RogueDiaryBuffEffectType>::unordered_map(
      &data::getRogueDiaryBuffEffectTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::RogueDiaryBuffEffectType> >)__PAIR128__(3LL, v1 + 128),
      0LL,
      (const std::unordered_map<std::string,data::RogueDiaryBuffEffectType>::hasher *)(v1 + 32),
      (const std::unordered_map<std::string,data::RogueDiaryBuffEffectType>::key_equal *)(v1 + 48),
      (const std::unordered_map<std::string,data::RogueDiaryBuffEffectType>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getRogueDiaryBuffEffectTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::RogueDiaryBuffEffectType>::~unordered_map,
      &data::getRogueDiaryBuffEffectTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::RogueDiaryBuffEffectType>>::~allocator((std::allocator<std::pair<const std::string,data::RogueDiaryBuffEffectType> > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::RogueDiaryBuffEffectType> *)(v1 + 248);
          i != (std::pair<const std::string,data::RogueDiaryBuffEffectType> *)(v1 + 128);
          std::pair<std::string const,data::RogueDiaryBuffEffectType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getRogueDiaryBuffEffectTypeNameMap[abi:cxx11](void)::m;
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

// Line 391: range 00000000137D3783-00000000137D3E81
const std::map<data::RogueDiaryBuffEffectType,std::pair<std::string,std::string >> *__cdecl data::getRogueDiaryBuffEffectTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::RogueDiaryBuffEffectType,std::pair<std::string,std::string > > *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getRogueDiaryBuffEffectTypeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getRogueDiaryBuffEffectTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getRogueDiaryBuffEffectTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[29],true>(
      (std::pair<std::string,std::string > *const)(v1 + 128),
      (const char (*)[1])byte_1ABBC960,
      (const char (*)[29])"ROGUE_DIARY_BUFF_EFFECT_NONE");
    std::pair<data::RogueDiaryBuffEffectType const,std::pair<std::string,std::string>>::pair<data::RogueDiaryBuffEffectType,true>(
      (std::pair<const data::RogueDiaryBuffEffectType,std::pair<std::string,std::string > > *const)(v1 + 416),
      (data::RogueDiaryBuffEffectType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[16],char const(&)[32],true>(
      (std::pair<std::string,std::string > *const)(v1 + 224),
      (const char (*)[16])byte_1ABFB7E0,
      (const char (*)[32])"ROGUE_DIARY_BUFF_EFFECT_ABILITY");
    std::pair<data::RogueDiaryBuffEffectType const,std::pair<std::string,std::string>>::pair<data::RogueDiaryBuffEffectType,true>(
      (std::pair<const data::RogueDiaryBuffEffectType,std::pair<std::string,std::string > > *const)(v1 + 488),
      (data::RogueDiaryBuffEffectType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 224));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[16],char const(&)[38],true>(
      (std::pair<std::string,std::string > *const)(v1 + 320),
      (const char (*)[16])byte_1ABFB820,
      (const char (*)[38])"ROGUE_DIARY_BUFF_EFFECT_UNLOCK_TALENT");
    std::pair<data::RogueDiaryBuffEffectType const,std::pair<std::string,std::string>>::pair<data::RogueDiaryBuffEffectType,true>(
      (std::pair<const data::RogueDiaryBuffEffectType,std::pair<std::string,std::string > > *const)(v1 + 560),
      (data::RogueDiaryBuffEffectType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 320));
    std::allocator<std::pair<data::RogueDiaryBuffEffectType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::RogueDiaryBuffEffectType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    std::map<data::RogueDiaryBuffEffectType,std::pair<std::string,std::string>>::map(
      &data::getRogueDiaryBuffEffectTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::RogueDiaryBuffEffectType,std::pair<std::string,std::string > > >)__PAIR128__(3LL, v1 + 416),
      (const std::less<data::RogueDiaryBuffEffectType> *)(v1 + 48),
      (const std::map<data::RogueDiaryBuffEffectType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getRogueDiaryBuffEffectTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::RogueDiaryBuffEffectType,std::pair<std::string,std::string>>::~map,
      &data::getRogueDiaryBuffEffectTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::RogueDiaryBuffEffectType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::RogueDiaryBuffEffectType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::RogueDiaryBuffEffectType,std::pair<std::string,std::string > > *)(v1 + 632);
          i != (std::pair<const data::RogueDiaryBuffEffectType,std::pair<std::string,std::string > > *)(v1 + 416);
          std::pair<data::RogueDiaryBuffEffectType const,std::pair<std::string,std::string>>::~pair(i) )
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
  return &data::getRogueDiaryBuffEffectTypeEnumMap[abi:cxx11](void)::m;
};

// Line 402: range 00000000137D3E82-00000000137D41FA
const char *__fastcall data::enumValToStr(data::RogueDiaryResourceType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::RogueDiaryResourceType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::RogueDiaryResourceType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 5 e:401 64 8 8 iter:404 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getRogueDiaryResourceTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::RogueDiaryResourceType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::RogueDiaryResourceType,std::pair<std::string,std::string>>::find(map, (const std::map<data::RogueDiaryResourceType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::RogueDiaryResourceType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::RogueDiaryResourceType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::RogueDiaryResourceType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::RogueDiaryResourceType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
      "enumValToStr",
      407);
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
    result = "INVALID_RogueDiaryResourceType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::RogueDiaryResourceType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::RogueDiaryResourceType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 414: range 00000000137D41FB-00000000137D47B3
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::RogueDiaryResourceType>,false,true>::pointer v10; // rax
  data::RogueDiaryResourceType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::RogueDiaryResourceType> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:423 96 8 9 <unknown> 128 8 5 s:413 160 32 9 <unknown> 224 32 9 <unk"
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
    m = data::getRogueDiaryResourceTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::RogueDiaryResourceType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::RogueDiaryResourceType>::find(
                                                                                                   m,
                                                                                                   (const std::unordered_map<std::string,data::RogueDiaryResourceType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::RogueDiaryResourceType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::RogueDiaryResourceType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::RogueDiaryResourceType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RogueDiaryResourceType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RogueDiaryResourceType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
        "enumNameToVal",
        426);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::RogueDiaryResourceType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::RogueDiaryResourceType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
      "enumNameToVal",
      417);
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

// Line 435: range 00000000137D47B4-00000000137D5436
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::RogueDiaryResourceType> *i; // r14
  unsigned __int64 v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::RogueDiaryResourceType>,false,true>::pointer v12; // rax
  data::RogueDiaryResourceType second; // ecx
  char v14; // dl
  char v16[848]; // [rsp+20h] [rbp-350h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(800LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "17 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 4 9 <unknown> 128 4 9"
                        " <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unknown> 208 8 6 it:45"
                        "2 240 8 9 <unknown> 272 8 5 s:434 304 32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496 240 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -234556927;
  v4[536862724] = -234556924;
  v4[536862725] = -234556924;
  v4[536862726] = 61956;
  v4[536862726] = -234881024;
  v4[536862727] = 62194;
  v4[536862727] = -234881024;
  v4[536862728] = 62194;
  v4[536862728] = -234881024;
  v4[536862729] = 62194;
  v4[536862730] = -219021312;
  v4[536862731] = 62194;
  v4[536862732] = -219021312;
  v4[536862733] = 62194;
  v4[536862734] = -219021312;
  v4[536862735] = 62194;
  v4[536862743] = -202116109;
  v4[536862744] = -202116109;
  *(_QWORD *)(v2 + 272) = s;
  if ( *(_QWORD *)(v2 + 272) )
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::RogueDiaryResourceType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::RogueDiaryResourceType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, e);
      *(_DWORD *)(v2 + 112) = 0;
      std::pair<std::string const,data::RogueDiaryResourceType>::pair<char const(&)[7],data::RogueDiaryResourceType,true>(
        (std::pair<const std::string,data::RogueDiaryResourceType> *const)(v2 + 496),
        (const char (*)[7])byte_1ABFBBE0,
        (data::RogueDiaryResourceType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1ABFBBE0);
      *(_DWORD *)(v2 + 128) = 1;
      std::pair<std::string const,data::RogueDiaryResourceType>::pair<char const(&)[7],data::RogueDiaryResourceType,true>(
        (std::pair<const std::string,data::RogueDiaryResourceType> *const)(v2 + 536),
        (const char (*)[7])byte_1ABFBC20,
        (data::RogueDiaryResourceType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, byte_1ABFBC20);
      *(_DWORD *)(v2 + 144) = 2;
      std::pair<std::string const,data::RogueDiaryResourceType>::pair<char const(&)[8],data::RogueDiaryResourceType,true>(
        (std::pair<const std::string,data::RogueDiaryResourceType> *const)(v2 + 576),
        (const char (*)[8])byte_1ABFBC60,
        (data::RogueDiaryResourceType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, byte_1ABFBC60);
      *(_DWORD *)(v2 + 160) = 3;
      std::pair<std::string const,data::RogueDiaryResourceType>::pair<char const(&)[7],data::RogueDiaryResourceType,true>(
        (std::pair<const std::string,data::RogueDiaryResourceType> *const)(v2 + 616),
        (const char (*)[7])byte_1ABFBCA0,
        (data::RogueDiaryResourceType *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, byte_1ABFBCA0);
      *(_DWORD *)(v2 + 176) = 4;
      std::pair<std::string const,data::RogueDiaryResourceType>::pair<char const(&)[7],data::RogueDiaryResourceType,true>(
        (std::pair<const std::string,data::RogueDiaryResourceType> *const)(v2 + 656),
        (const char (*)[7])byte_1ABFBCE0,
        (data::RogueDiaryResourceType *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, byte_1ABFBCE0);
      *(_DWORD *)(v2 + 192) = 5;
      std::pair<std::string const,data::RogueDiaryResourceType>::pair<char const(&)[7],data::RogueDiaryResourceType,true>(
        (std::pair<const std::string,data::RogueDiaryResourceType> *const)(v2 + 696),
        (const char (*)[7])byte_1ABFBD20,
        (data::RogueDiaryResourceType *)(v2 + 192));
      std::allocator<std::pair<std::string const,data::RogueDiaryResourceType>>::allocator((std::allocator<std::pair<const std::string,data::RogueDiaryResourceType> > *const)(v2 + 80));
      std::unordered_map<std::string,data::RogueDiaryResourceType>::unordered_map(
        &data::enumStrToVal(char const*,data::RogueDiaryResourceType &)::m,
        (std::initializer_list<std::pair<const std::string,data::RogueDiaryResourceType> >)__PAIR128__(6LL, v2 + 496),
        0LL,
        (const std::unordered_map<std::string,data::RogueDiaryResourceType>::hasher *)(v2 + 48),
        (const std::unordered_map<std::string,data::RogueDiaryResourceType>::key_equal *)(v2 + 64),
        (const std::unordered_map<std::string,data::RogueDiaryResourceType>::allocator_type *)(v2 + 80));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::RogueDiaryResourceType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::RogueDiaryResourceType>::~unordered_map,
        &data::enumStrToVal(char const*,data::RogueDiaryResourceType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::RogueDiaryResourceType>>::~allocator((std::allocator<std::pair<const std::string,data::RogueDiaryResourceType> > *const)(v2 + 80));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::RogueDiaryResourceType> *)(v2 + 736);
            i != (std::pair<const std::string,data::RogueDiaryResourceType> *)(v2 + 496);
            std::pair<std::string const,data::RogueDiaryResourceType>::~pair(i) )
      {
        --i;
      }
      v7 = ((v2 + 496) >> 3) + 2147450880;
      *(_DWORD *)v7 = -117901064;
      *(_DWORD *)(v7 + 4) = -117901064;
      *(_DWORD *)(v7 + 8) = -117901064;
      *(_DWORD *)(v7 + 12) = -117901064;
      *(_DWORD *)(v7 + 16) = -117901064;
      *(_DWORD *)(v7 + 20) = -117901064;
      *(_DWORD *)(v7 + 24) = -117901064;
      *(_WORD *)(v7 + 28) = -1800;
      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((v2 + 368) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 96);
    v8 = *(const char **)(v2 + 272);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 368),
      v8,
      (const std::allocator<char> *)(v2 + 96));
    if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 208, v8);
    *(std::unordered_map<std::string,data::RogueDiaryResourceType>::iterator *)(v2 + 208) = std::unordered_map<std::string,data::RogueDiaryResourceType>::find(
                                                                                              &data::enumStrToVal(char const*,data::RogueDiaryResourceType &)::m,
                                                                                              (const std::unordered_map<std::string,data::RogueDiaryResourceType>::key_type *)(v2 + 368));
    std::string::~string((void *)(v2 + 368));
    *(_DWORD *)(((v2 + 368) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 96);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 240, v2 + 368);
    *(std::unordered_map<std::string,data::RogueDiaryResourceType>::iterator *)(v2 + 240) = std::unordered_map<std::string,data::RogueDiaryResourceType>::end(&data::enumStrToVal(char const*,data::RogueDiaryResourceType &)::m);
    v9 = (char *)(v2 + 240);
    v10 = std::__detail::operator==<std::pair<std::string const,data::RogueDiaryResourceType>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RogueDiaryResourceType>,true> *)(v2 + 208),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RogueDiaryResourceType>,true> *)(v2 + 240));
    *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
    if ( v10 )
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
        3u,
        "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
        "enumStrToVal",
        455);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 432),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)(v2 + 272));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 432));
      LODWORD(result) = -1;
    }
    else
    {
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::RogueDiaryResourceType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::RogueDiaryResourceType>,false,true> *const)(v2 + 208));
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
    if ( *(char *)(((v2 + 304) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 304, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 304),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
      "enumStrToVal",
      438);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
      (common::milog::MiLogStream *const)(v2 + 304),
      (const char (*)[14])"s is nullptr!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
    LODWORD(result) = -1;
  }
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF805C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 100) & 0xFFFFFFF8) >> 3));
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
  return (unsigned int)result;
};

// Line 464: range 00000000137D5437-00000000137D544D
const char *__cdecl data::getDescription(data::RogueDiaryResourceType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 469: range 00000000137D544E-00000000137D5604
bool __cdecl data::isValidRogueDiaryResourceType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t v5; // ecx
  char v6; // al
  const std::map<data::RogueDiaryResourceType,std::pair<std::string,std::string >> *v7; // rcx
  const std::map<data::RogueDiaryResourceType,std::pair<std::string,std::string >> *v8; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:470 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidRogueDiaryResourceType;
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
  v7 = data::getRogueDiaryResourceTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::RogueDiaryResourceType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::RogueDiaryResourceType,std::pair<std::string,std::string>>::end(v7);
  v8 = data::getRogueDiaryResourceTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::RogueDiaryResourceType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::RogueDiaryResourceType,std::pair<std::string,std::string>>::find(v8, (const std::map<data::RogueDiaryResourceType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::RogueDiaryResourceType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::RogueDiaryResourceType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 475: range 00000000137D5605-00000000137D5766
bool __cdecl data::isValidRogueDiaryResourceTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::RogueDiaryResourceType> *v5; // rcx
  const std::unordered_map<std::string,data::RogueDiaryResourceType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidRogueDiaryResourceTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getRogueDiaryResourceTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::RogueDiaryResourceType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::RogueDiaryResourceType>::end(v5);
  v6 = data::getRogueDiaryResourceTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::RogueDiaryResourceType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::RogueDiaryResourceType>::find(
                                                                                                 v6,
                                                                                                 name);
  result = std::__detail::operator!=<std::pair<std::string const,data::RogueDiaryResourceType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RogueDiaryResourceType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RogueDiaryResourceType>,true> *)(v2 + 64));
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

// Line 480: range 00000000137D5767-00000000137D5E10
const std::unordered_map<std::string,data::RogueDiaryResourceType> *__cdecl data::getRogueDiaryResourceTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::RogueDiaryResourceType> *i; // r14
  const std::unordered_map<std::string,data::RogueDiaryResourceType> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getRogueDiaryResourceTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556927;
  v3[536862723] = -234556924;
  v3[536862724] = -234556924;
  v3[536862725] = 61956;
  v3[536862733] = -202116109;
  v3[536862734] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getRogueDiaryResourceTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getRogueDiaryResourceTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string const,data::RogueDiaryResourceType>::pair<char const(&)[22],data::RogueDiaryResourceType,true>(
      (std::pair<const std::string,data::RogueDiaryResourceType> *const)(v1 + 176),
      (const char (*)[22])"ROGUE_DIARY_GET_FIGHT",
      (data::RogueDiaryResourceType *)(v1 + 80));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, "ROGUE_DIARY_GET_FIGHT");
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string const,data::RogueDiaryResourceType>::pair<char const(&)[26],data::RogueDiaryResourceType,true>(
      (std::pair<const std::string,data::RogueDiaryResourceType> *const)(v1 + 216),
      (const char (*)[26])"ROGUE_DIARY_GET_CHALLENGE",
      (data::RogueDiaryResourceType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "ROGUE_DIARY_GET_CHALLENGE");
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string const,data::RogueDiaryResourceType>::pair<char const(&)[21],data::RogueDiaryResourceType,true>(
      (std::pair<const std::string,data::RogueDiaryResourceType> *const)(v1 + 256),
      (const char (*)[21])"ROGUE_DIARY_GET_BOSS",
      (data::RogueDiaryResourceType *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, "ROGUE_DIARY_GET_BOSS");
    *(_DWORD *)(v1 + 128) = 3;
    std::pair<std::string const,data::RogueDiaryResourceType>::pair<char const(&)[23],data::RogueDiaryResourceType,true>(
      (std::pair<const std::string,data::RogueDiaryResourceType> *const)(v1 + 296),
      (const char (*)[23])"ROGUE_DIARY_USE_REROLL",
      (data::RogueDiaryResourceType *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, "ROGUE_DIARY_USE_REROLL");
    *(_DWORD *)(v1 + 144) = 4;
    std::pair<std::string const,data::RogueDiaryResourceType>::pair<char const(&)[24],data::RogueDiaryResourceType,true>(
      (std::pair<const std::string,data::RogueDiaryResourceType> *const)(v1 + 336),
      (const char (*)[24])"ROGUE_DIARY_GET_BUYCARD",
      (data::RogueDiaryResourceType *)(v1 + 144));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, "ROGUE_DIARY_GET_BUYCARD");
    *(_DWORD *)(v1 + 160) = 5;
    std::pair<std::string const,data::RogueDiaryResourceType>::pair<char const(&)[23],data::RogueDiaryResourceType,true>(
      (std::pair<const std::string,data::RogueDiaryResourceType> *const)(v1 + 376),
      (const char (*)[23])"ROGUE_DIARY_GET_REVIVE",
      (data::RogueDiaryResourceType *)(v1 + 160));
    std::allocator<std::pair<std::string const,data::RogueDiaryResourceType>>::allocator((std::allocator<std::pair<const std::string,data::RogueDiaryResourceType> > *const)(v1 + 64));
    std::unordered_map<std::string,data::RogueDiaryResourceType>::unordered_map(
      &data::getRogueDiaryResourceTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::RogueDiaryResourceType> >)__PAIR128__(6LL, v1 + 176),
      0LL,
      (const std::unordered_map<std::string,data::RogueDiaryResourceType>::hasher *)(v1 + 32),
      (const std::unordered_map<std::string,data::RogueDiaryResourceType>::key_equal *)(v1 + 48),
      (const std::unordered_map<std::string,data::RogueDiaryResourceType>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getRogueDiaryResourceTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::RogueDiaryResourceType>::~unordered_map,
      &data::getRogueDiaryResourceTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::RogueDiaryResourceType>>::~allocator((std::allocator<std::pair<const std::string,data::RogueDiaryResourceType> > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::RogueDiaryResourceType> *)(v1 + 416);
          i != (std::pair<const std::string,data::RogueDiaryResourceType> *)(v1 + 176);
          std::pair<std::string const,data::RogueDiaryResourceType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getRogueDiaryResourceTypeNameMap[abi:cxx11](void)::m;
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

// Line 494: range 00000000137D5E11-00000000137D6801
const std::map<data::RogueDiaryResourceType,std::pair<std::string,std::string >> *__cdecl data::getRogueDiaryResourceTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::RogueDiaryResourceType,std::pair<std::string,std::string > > *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getRogueDiaryResourceTypeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getRogueDiaryResourceTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getRogueDiaryResourceTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[22],true>(
      (std::pair<std::string,std::string > *const)(v1 + 176),
      (const char (*)[7])byte_1ABFBBE0,
      (const char (*)[22])"ROGUE_DIARY_GET_FIGHT");
    std::pair<data::RogueDiaryResourceType const,std::pair<std::string,std::string>>::pair<data::RogueDiaryResourceType,true>(
      (std::pair<const data::RogueDiaryResourceType,std::pair<std::string,std::string > > *const)(v1 + 752),
      (data::RogueDiaryResourceType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 176));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[26],true>(
      (std::pair<std::string,std::string > *const)(v1 + 272),
      (const char (*)[7])byte_1ABFBC20,
      (const char (*)[26])"ROGUE_DIARY_GET_CHALLENGE");
    std::pair<data::RogueDiaryResourceType const,std::pair<std::string,std::string>>::pair<data::RogueDiaryResourceType,true>(
      (std::pair<const data::RogueDiaryResourceType,std::pair<std::string,std::string > > *const)(v1 + 824),
      (data::RogueDiaryResourceType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 272));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[8],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 368),
      (const char (*)[8])byte_1ABFBC60,
      (const char (*)[21])"ROGUE_DIARY_GET_BOSS");
    std::pair<data::RogueDiaryResourceType const,std::pair<std::string,std::string>>::pair<data::RogueDiaryResourceType,true>(
      (std::pair<const data::RogueDiaryResourceType,std::pair<std::string,std::string > > *const)(v1 + 896),
      (data::RogueDiaryResourceType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 368));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, v1 + 112);
    *(_DWORD *)(v1 + 128) = 3;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[23],true>(
      (std::pair<std::string,std::string > *const)(v1 + 464),
      (const char (*)[7])byte_1ABFBCA0,
      (const char (*)[23])"ROGUE_DIARY_USE_REROLL");
    std::pair<data::RogueDiaryResourceType const,std::pair<std::string,std::string>>::pair<data::RogueDiaryResourceType,true>(
      (std::pair<const data::RogueDiaryResourceType,std::pair<std::string,std::string > > *const)(v1 + 968),
      (data::RogueDiaryResourceType *)(v1 + 128),
      (const std::pair<std::string,std::string > *)(v1 + 464));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, v1 + 128);
    *(_DWORD *)(v1 + 144) = 4;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[24],true>(
      (std::pair<std::string,std::string > *const)(v1 + 560),
      (const char (*)[7])byte_1ABFBCE0,
      (const char (*)[24])"ROGUE_DIARY_GET_BUYCARD");
    std::pair<data::RogueDiaryResourceType const,std::pair<std::string,std::string>>::pair<data::RogueDiaryResourceType,true>(
      (std::pair<const data::RogueDiaryResourceType,std::pair<std::string,std::string > > *const)(v1 + 1040),
      (data::RogueDiaryResourceType *)(v1 + 144),
      (const std::pair<std::string,std::string > *)(v1 + 560));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, v1 + 144);
    *(_DWORD *)(v1 + 160) = 5;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[23],true>(
      (std::pair<std::string,std::string > *const)(v1 + 656),
      (const char (*)[7])byte_1ABFBD20,
      (const char (*)[23])"ROGUE_DIARY_GET_REVIVE");
    std::pair<data::RogueDiaryResourceType const,std::pair<std::string,std::string>>::pair<data::RogueDiaryResourceType,true>(
      (std::pair<const data::RogueDiaryResourceType,std::pair<std::string,std::string > > *const)(v1 + 1112),
      (data::RogueDiaryResourceType *)(v1 + 160),
      (const std::pair<std::string,std::string > *)(v1 + 656));
    std::allocator<std::pair<data::RogueDiaryResourceType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::RogueDiaryResourceType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    std::map<data::RogueDiaryResourceType,std::pair<std::string,std::string>>::map(
      &data::getRogueDiaryResourceTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::RogueDiaryResourceType,std::pair<std::string,std::string > > >)__PAIR128__(6LL, v1 + 752),
      (const std::less<data::RogueDiaryResourceType> *)(v1 + 48),
      (const std::map<data::RogueDiaryResourceType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getRogueDiaryResourceTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::RogueDiaryResourceType,std::pair<std::string,std::string>>::~map,
      &data::getRogueDiaryResourceTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::RogueDiaryResourceType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::RogueDiaryResourceType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::RogueDiaryResourceType,std::pair<std::string,std::string > > *)(v1 + 1184);
          i != (std::pair<const data::RogueDiaryResourceType,std::pair<std::string,std::string > > *)(v1 + 752);
          std::pair<data::RogueDiaryResourceType const,std::pair<std::string,std::string>>::~pair(i) )
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
  return &data::getRogueDiaryResourceTypeEnumMap[abi:cxx11](void)::m;
};

// Line 509: range 00000000137D6802-00000000137D763F
int32_t __cdecl data::RogueDiaryRoundExcelConfig::init(
        data::RogueDiaryRoundExcelConfig *const this,
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
  int32_t result; // eax
  bool t; // [rsp+8h] [rbp-368h]
  bool ta; // [rsp+8h] [rbp-368h]
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
                        "<unknown> 128 24 9 <unknown> 192 32 11 val_str:510 256 32 9 <unknown> 320 32 9 <unknown> 384 32 "
                        "9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 64 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::RogueDiaryRoundExcelConfig::init;
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
    &byte_1ABFC240,
    (const std::allocator<char> *)(v2 + 32));
  t = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 256), &this->room_count) != 0;
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
      "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
      "init",
      513);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 320),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v5, (const char (*)[33])byte_1ABFC300);
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
      &byte_1ABFC360,
      (const std::allocator<char> *)(v2 + 48));
    ta = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 384), (std::string *)(v2 + 192)) != 0;
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
        "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
        "init",
        518);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 448),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v7, (const char (*)[33])byte_1ABFC3A0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
      *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v8 = ((v2 + 128) >> 3) + 2147450880;
      *(_WORD *)v8 = 0;
      *(_BYTE *)(v8 + 2) = 0;
      v9 = (_DWORD *)(((v2 + 704) >> 3) + 2147450880);
      *v9 = 0;
      v9[1] = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 704),
        ";",
        (const std::allocator<char> *)(v2 + 64));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 736),
        ",",
        (const std::allocator<char> *)(v2 + 80));
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 96));
      std::vector<std::string>::vector(
        (std::vector<std::string> *const)(v2 + 128),
        (std::initializer_list<std::string >)__PAIR128__(2LL, v2 + 704),
        (const std::vector<std::string>::allocator_type *)(v2 + 96));
      v10 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
              (const std::string *)(v2 + 192),
              (const std::vector<std::string> *)(v2 + 128),
              &this->round_room_config_list,
              1) != 0;
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 128));
      v11 = ((v2 + 128) >> 3) + 2147450880;
      *(_WORD *)v11 = -1800;
      *(_BYTE *)(v11 + 2) = -8;
      std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 96));
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      for ( i = (char *)(v2 + 768); i != (char *)(v2 + 704); std::string::~string(i) )
        i -= 32;
      v13 = (_DWORD *)(((v2 + 704) >> 3) + 2147450880);
      *v13 = -117901064;
      v13[1] = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( v10 )
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
          "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
          "init",
          523);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 512),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v14, (const char (*)[33])byte_1ABFC3A0);
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
          &byte_1ABFC480,
          (const std::allocator<char> *)(v2 + 112));
        v15 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                row,
                (const std::string *)(v2 + 576),
                &this->hp_correction) != 0;
        std::string::~string((void *)(v2 + 576));
        *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 112);
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
        if ( v15 )
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
            "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
            "init",
            528);
          v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 640),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v16, (const char (*)[33])byte_1ABFC4C0);
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

// Line 536: range 00000000137D7640-00000000137DA64C
int32_t __cdecl data::RogueDiaryStageExcelConfig::init(
        data::RogueDiaryStageExcelConfig *const this,
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
  unsigned __int64 v10; // rax
  _DWORD *v11; // rax
  bool v12; // r14
  unsigned __int64 v13; // rax
  char *i; // r12
  _DWORD *v15; // rax
  common::milog::MiLogStream *v16; // rax
  bool v17; // r12
  common::milog::MiLogStream *v18; // rax
  unsigned __int64 v19; // rax
  _DWORD *v20; // rax
  bool v21; // r14
  unsigned __int64 v22; // rax
  char *j; // r12
  _DWORD *v24; // rax
  common::milog::MiLogStream *v25; // rax
  bool v26; // r12
  common::milog::MiLogStream *v27; // rax
  unsigned __int64 v28; // rax
  _DWORD *v29; // rax
  bool v30; // r14
  unsigned __int64 v31; // rax
  char *k; // r12
  _DWORD *v33; // rax
  common::milog::MiLogStream *v34; // rax
  bool v35; // r12
  common::milog::MiLogStream *v36; // rax
  bool v37; // r12
  common::milog::MiLogStream *v38; // rax
  bool v39; // r12
  common::milog::MiLogStream *v40; // rax
  bool v41; // r12
  common::milog::MiLogStream *v42; // rax
  bool v43; // r12
  common::milog::MiLogStream *v44; // rax
  bool v45; // r12
  common::milog::MiLogStream *v46; // rax
  bool v47; // r12
  common::milog::MiLogStream *v48; // rax
  unsigned __int64 v49; // rax
  _DWORD *v50; // rax
  bool v51; // r14
  unsigned __int64 v52; // rax
  char *m; // r12
  _DWORD *v54; // rax
  common::milog::MiLogStream *v55; // rax
  std::initializer_list<std::string > __l; // [rsp+10h] [rbp-B60h]
  std::initializer_list<std::string > v58; // [rsp+20h] [rbp-B50h]
  std::initializer_list<std::string > v59; // [rsp+30h] [rbp-B40h]
  std::initializer_list<std::string > v60; // [rsp+40h] [rbp-B30h]
  char v61[2832]; // [rsp+60h] [rbp-B10h] BYREF

  v2 = (unsigned __int64)v61;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(2784LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "58 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 <unkn"
                        "own> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 288 1 9 <unknown> 3"
                        "04 1 9 <unknown> 320 1 9 <unknown> 336 1 9 <unknown> 352 1 9 <unknown> 368 1 9 <unknown> 384 1 9"
                        " <unknown> 400 1 9 <unknown> 416 24 9 <unknown> 480 24 9 <unknown> 544 24 9 <unknown> 608 24 9 <"
                        "unknown> 672 32 11 val_str:537 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9"
                        " <unknown> 992 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <unknown> 1184 32 9 <unknown> 1248 3"
                        "2 9 <unknown> 1312 32 9 <unknown> 1376 32 9 <unknown> 1440 32 9 <unknown> 1504 32 9 <unknown> 15"
                        "68 32 9 <unknown> 1632 32 9 <unknown> 1696 32 9 <unknown> 1760 32 9 <unknown> 1824 32 9 <unknown"
                        "> 1888 32 9 <unknown> 1952 32 9 <unknown> 2016 32 9 <unknown> 2080 32 9 <unknown> 2144 32 9 <unk"
                        "nown> 2208 32 9 <unknown> 2272 32 9 <unknown> 2336 32 9 <unknown> 2400 64 9 <unknown> 2496 64 9 "
                        "<unknown> 2592 64 9 <unknown> 2688 64 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::RogueDiaryStageExcelConfig::init;
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
  v4[536862797] = -218959118;
  v4[536862800] = -218959118;
  v4[536862803] = -218959118;
  v4[536862806] = -202116109;
  std::string::basic_string(v2 + 672);
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 736),
    &byte_1ABFC980,
    (const std::allocator<char> *)(v2 + 48));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 736), &this->id) != 0;
  std::string::~string((void *)(v2 + 736));
  *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
  {
    *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 800) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 800, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 800),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
      "init",
      540);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 800),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v6, (const char (*)[29])byte_1ABFC9C0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 800));
    *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 864),
      &byte_1ABFCA00,
      (const std::allocator<char> *)(v2 + 64));
    v8 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 864), (std::string *)(v2 + 672)) != 0;
    std::string::~string((void *)(v2 + 864));
    *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
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
        "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
        "init",
        545);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 928),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v9, (const char (*)[42])byte_1ABFCA40);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 928));
      *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
      v7 = -1;
    }
    else
    {
      v10 = ((v2 + 416) >> 3) + 2147450880;
      *(_WORD *)v10 = 0;
      *(_BYTE *)(v10 + 2) = 0;
      v11 = (_DWORD *)(((v2 + 2400) >> 3) + 2147450880);
      *v11 = 0;
      v11[1] = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 2400),
        ";",
        (const std::allocator<char> *)(v2 + 80));
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 96);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 2432),
        ",",
        (const std::allocator<char> *)(v2 + 96));
      __l._M_array = (std::initializer_list<std::string >::iterator)(v2 + 2400);
      __l._M_len = 2LL;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 112));
      std::vector<std::string>::vector(
        (std::vector<std::string> *const)(v2 + 416),
        __l,
        (const std::vector<std::string>::allocator_type *)(v2 + 112));
      v12 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
              (const std::string *)(v2 + 672),
              (const std::vector<std::string> *)(v2 + 416),
              &this->normal_dungeon_id_list,
              1) != 0;
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 416));
      v13 = ((v2 + 416) >> 3) + 2147450880;
      *(_WORD *)v13 = -1800;
      *(_BYTE *)(v13 + 2) = -8;
      std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 112));
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      for ( i = (char *)(v2 + 2464); i != (char *)(v2 + 2400); std::string::~string(i) )
        i -= 32;
      v15 = (_DWORD *)(((v2 + 2400) >> 3) + 2147450880);
      *v15 = -117901064;
      v15[1] = -117901064;
      std::allocator<char>::~allocator(v2 + 96);
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( v12 )
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
          "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
          "init",
          550);
        v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 992),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v16, (const char (*)[42])byte_1ABFCA40);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 992));
        *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
        v7 = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 128);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 1056),
          &byte_1ABFCAA0,
          (const std::allocator<char> *)(v2 + 128));
        v17 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 1056), (std::string *)(v2 + 672)) != 0;
        std::string::~string((void *)(v2 + 1056));
        *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 128);
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
        if ( v17 )
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
            "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
            "init",
            555);
          v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 1120),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v18, (const char (*)[42])byte_1ABFCAE0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1120));
          *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -117901064;
          v7 = -1;
        }
        else
        {
          v19 = ((v2 + 480) >> 3) + 2147450880;
          *(_WORD *)v19 = 0;
          *(_BYTE *)(v19 + 2) = 0;
          v20 = (_DWORD *)(((v2 + 2496) >> 3) + 2147450880);
          *v20 = 0;
          v20[1] = 0;
          *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 144);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 2496),
            ";",
            (const std::allocator<char> *)(v2 + 144));
          *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 160);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 2528),
            ",",
            (const std::allocator<char> *)(v2 + 160));
          v58._M_array = (std::initializer_list<std::string >::iterator)(v2 + 2496);
          v58._M_len = 2LL;
          *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
          std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 176));
          std::vector<std::string>::vector(
            (std::vector<std::string> *const)(v2 + 480),
            v58,
            (const std::vector<std::string>::allocator_type *)(v2 + 176));
          v21 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                  (const std::string *)(v2 + 672),
                  (const std::vector<std::string> *)(v2 + 480),
                  &this->hard_dungeon_id_list,
                  1) != 0;
          std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 480));
          v22 = ((v2 + 480) >> 3) + 2147450880;
          *(_WORD *)v22 = -1800;
          *(_BYTE *)(v22 + 2) = -8;
          std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 176));
          *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
          for ( j = (char *)(v2 + 2560); j != (char *)(v2 + 2496); std::string::~string(j) )
            j -= 32;
          v24 = (_DWORD *)(((v2 + 2496) >> 3) + 2147450880);
          *v24 = -117901064;
          v24[1] = -117901064;
          std::allocator<char>::~allocator(v2 + 160);
          *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
          std::allocator<char>::~allocator(v2 + 144);
          *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
          if ( v21 )
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
              "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
              "init",
              560);
            v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 1184),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v25, (const char (*)[42])byte_1ABFCAE0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1184));
            *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = -117901064;
            v7 = -1;
          }
          else
          {
            *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 192);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1248),
              &byte_1ABFCB40,
              (const std::allocator<char> *)(v2 + 192));
            v26 = common::tools::TxtFile::Row::assignToStr(
                    row,
                    (const std::string *)(v2 + 1248),
                    (std::string *)(v2 + 672)) != 0;
            std::string::~string((void *)(v2 + 1248));
            *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 192);
            *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
            if ( v26 )
            {
              *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 1312) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 1343) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 1343) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 1312, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 1312),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
                "init",
                565);
              v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1312),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v27, (const char (*)[42])byte_1ABFCB80);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1312));
              *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = -117901064;
              v7 = -1;
            }
            else
            {
              v28 = ((v2 + 544) >> 3) + 2147450880;
              *(_WORD *)v28 = 0;
              *(_BYTE *)(v28 + 2) = 0;
              v29 = (_DWORD *)(((v2 + 2592) >> 3) + 2147450880);
              *v29 = 0;
              v29[1] = 0;
              *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 208);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 2592),
                ";",
                (const std::allocator<char> *)(v2 + 208));
              *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 224);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 2624),
                ",",
                (const std::allocator<char> *)(v2 + 224));
              v59._M_array = (std::initializer_list<std::string >::iterator)(v2 + 2592);
              v59._M_len = 2LL;
              *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
              std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 240));
              std::vector<std::string>::vector(
                (std::vector<std::string> *const)(v2 + 544),
                v59,
                (const std::vector<std::string>::allocator_type *)(v2 + 240));
              v30 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                      (const std::string *)(v2 + 672),
                      (const std::vector<std::string> *)(v2 + 544),
                      &this->insane_dungeon_id_list,
                      1) != 0;
              std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 544));
              v31 = ((v2 + 544) >> 3) + 2147450880;
              *(_WORD *)v31 = -1800;
              *(_BYTE *)(v31 + 2) = -8;
              std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 240));
              *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
              for ( k = (char *)(v2 + 2656); k != (char *)(v2 + 2592); std::string::~string(k) )
                k -= 32;
              v33 = (_DWORD *)(((v2 + 2592) >> 3) + 2147450880);
              *v33 = -117901064;
              v33[1] = -117901064;
              std::allocator<char>::~allocator(v2 + 224);
              *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
              std::allocator<char>::~allocator(v2 + 208);
              *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
              if ( v30 )
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
                  "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
                  "init",
                  570);
                v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1376),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v34, (const char (*)[42])byte_1ABFCB80);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1376));
                *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = -117901064;
                v7 = -1;
              }
              else
              {
                *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 256);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1440),
                  &byte_1ABFCBE0,
                  (const std::allocator<char> *)(v2 + 256));
                v35 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                        row,
                        (const std::string *)(v2 + 1440),
                        &this->optional_card_count) != 0;
                std::string::~string((void *)(v2 + 1440));
                *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 256);
                *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                if ( v35 )
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
                    "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
                    "init",
                    575);
                  v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 1504),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                    v36,
                    (const char (*)[39])byte_1ABFCC20);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1504));
                  *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = -117901064;
                  v7 = -1;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 272);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1568),
                    &byte_1ABFCC80,
                    (const std::allocator<char> *)(v2 + 272));
                  v37 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                          row,
                          (const std::string *)(v2 + 1568),
                          &this->chosen_card_count) != 0;
                  std::string::~string((void *)(v2 + 1568));
                  *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 272);
                  *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                  if ( v37 )
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
                      "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
                      "init",
                      580);
                    v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 1632),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                      v38,
                      (const char (*)[39])byte_1ABFCCC0);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1632));
                    *(_DWORD *)(((v2 + 1632) >> 3) + 0x7FFF8000) = -117901064;
                    v7 = -1;
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 288);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 1696),
                      &byte_1ABFCD20,
                      (const std::allocator<char> *)(v2 + 288));
                    v39 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                            row,
                            (const std::string *)(v2 + 1696),
                            &this->card_depot_id) != 0;
                    std::string::~string((void *)(v2 + 1696));
                    *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 288);
                    *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
                    if ( v39 )
                    {
                      *(_DWORD *)(((v2 + 1760) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 1760) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 1791) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 1791) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 1760, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 1760),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
                        "init",
                        585);
                      v40 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 1760),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                        v40,
                        (const char (*)[29])byte_1ABFCD60);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1760));
                      *(_DWORD *)(((v2 + 1760) >> 3) + 0x7FFF8000) = -117901064;
                      v7 = -1;
                    }
                    else
                    {
                      *(_DWORD *)(((v2 + 1824) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 304);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 1824),
                        &byte_1ABFCDA0,
                        (const std::allocator<char> *)(v2 + 304));
                      v41 = common::tools::TxtFile::Row::assignToEnum<data::RogueDiaryTiredType>(
                              row,
                              (const std::string *)(v2 + 1824),
                              &this->tired_type) != 0;
                      std::string::~string((void *)(v2 + 1824));
                      *(_DWORD *)(((v2 + 1824) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 304);
                      *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
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
                          "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
                          "init",
                          590);
                        v42 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                (common::milog::MiLogStream *const)(v2 + 1888),
                                (const char (*)[16])"[CONFIG_ERROR] ");
                        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                          v42,
                          (const char (*)[33])byte_1ABFCDE0);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1888));
                        *(_DWORD *)(((v2 + 1888) >> 3) + 0x7FFF8000) = -117901064;
                        v7 = -1;
                      }
                      else
                      {
                        *(_DWORD *)(((v2 + 1952) >> 3) + 0x7FFF8000) = 0;
                        *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 320);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 1952),
                          &byte_1ABFCE40,
                          (const std::allocator<char> *)(v2 + 320));
                        v43 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                row,
                                (const std::string *)(v2 + 1952),
                                &this->tired_reserve_avatar_count) != 0;
                        std::string::~string((void *)(v2 + 1952));
                        *(_DWORD *)(((v2 + 1952) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 320);
                        *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
                        if ( v43 )
                        {
                          *(_DWORD *)(((v2 + 2016) >> 3) + 0x7FFF8000) = 0;
                          if ( *(char *)(((v2 + 2016) >> 3) + 0x7FFF8000) < 0
                            || *(_BYTE *)(((v2 + 2047) >> 3) + 0x7FFF8000) != 0
                            && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 2047) >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_store_n(v2 + 2016, 32LL);
                          }
                          common::milog::MiLogStream::create(
                            (common::milog::MiLogStream *)(v2 + 2016),
                            &common::milog::MiLogDefault::default_log_obj_,
                            4u,
                            "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
                            "init",
                            595);
                          v44 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                  (common::milog::MiLogStream *const)(v2 + 2016),
                                  (const char (*)[16])"[CONFIG_ERROR] ");
                          common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                            v44,
                            (const char (*)[42])byte_1ABFCE80);
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2016));
                          *(_DWORD *)(((v2 + 2016) >> 3) + 0x7FFF8000) = -117901064;
                          v7 = -1;
                        }
                        else
                        {
                          *(_DWORD *)(((v2 + 2080) >> 3) + 0x7FFF8000) = 0;
                          *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 1;
                          std::allocator<char>::allocator(v2 + 336);
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)(v2 + 2080),
                            &byte_1ABFCEE0,
                            (const std::allocator<char> *)(v2 + 336));
                          v45 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                  row,
                                  (const std::string *)(v2 + 2080),
                                  &this->tired_round_count) != 0;
                          std::string::~string((void *)(v2 + 2080));
                          *(_DWORD *)(((v2 + 2080) >> 3) + 0x7FFF8000) = -117901064;
                          std::allocator<char>::~allocator(v2 + 336);
                          *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
                          if ( v45 )
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
                              "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
                              "init",
                              600);
                            v46 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                    (common::milog::MiLogStream *const)(v2 + 2144),
                                    (const char (*)[16])"[CONFIG_ERROR] ");
                            common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                              v46,
                              (const char (*)[33])byte_1ABFCF20);
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2144));
                            *(_DWORD *)(((v2 + 2144) >> 3) + 0x7FFF8000) = -117901064;
                            v7 = -1;
                          }
                          else
                          {
                            *(_DWORD *)(((v2 + 2208) >> 3) + 0x7FFF8000) = 0;
                            *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 1;
                            std::allocator<char>::allocator(v2 + 352);
                            std::string::basic_string<std::allocator<char>>(
                              (std::string *const)(v2 + 2208),
                              &byte_1ABFCF80,
                              (const std::allocator<char> *)(v2 + 352));
                            v47 = common::tools::TxtFile::Row::assignToStr(
                                    row,
                                    (const std::string *)(v2 + 2208),
                                    (std::string *)(v2 + 672)) != 0;
                            std::string::~string((void *)(v2 + 2208));
                            *(_DWORD *)(((v2 + 2208) >> 3) + 0x7FFF8000) = -117901064;
                            std::allocator<char>::~allocator(v2 + 352);
                            *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
                            if ( v47 )
                            {
                              *(_DWORD *)(((v2 + 2272) >> 3) + 0x7FFF8000) = 0;
                              if ( *(char *)(((v2 + 2272) >> 3) + 0x7FFF8000) < 0
                                || *(_BYTE *)(((v2 + 2303) >> 3) + 0x7FFF8000) != 0
                                && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 2303) >> 3) + 0x7FFF8000) )
                              {
                                __asan_report_store_n(v2 + 2272, 32LL);
                              }
                              common::milog::MiLogStream::create(
                                (common::milog::MiLogStream *)(v2 + 2272),
                                &common::milog::MiLogDefault::default_log_obj_,
                                4u,
                                "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
                                "init",
                                605);
                              v48 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                      (common::milog::MiLogStream *const)(v2 + 2272),
                                      (const char (*)[16])"[CONFIG_ERROR] ");
                              common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                v48,
                                (const char (*)[39])byte_1ABFCFC0);
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2272));
                              *(_DWORD *)(((v2 + 2272) >> 3) + 0x7FFF8000) = -117901064;
                              v7 = -1;
                            }
                            else
                            {
                              v49 = ((v2 + 608) >> 3) + 2147450880;
                              *(_WORD *)v49 = 0;
                              *(_BYTE *)(v49 + 2) = 0;
                              v50 = (_DWORD *)(((v2 + 2688) >> 3) + 2147450880);
                              *v50 = 0;
                              v50[1] = 0;
                              *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = 1;
                              std::allocator<char>::allocator(v2 + 368);
                              std::string::basic_string<std::allocator<char>>(
                                (std::string *const)(v2 + 2688),
                                ";",
                                (const std::allocator<char> *)(v2 + 368));
                              *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 1;
                              std::allocator<char>::allocator(v2 + 384);
                              std::string::basic_string<std::allocator<char>>(
                                (std::string *const)(v2 + 2720),
                                ",",
                                (const std::allocator<char> *)(v2 + 384));
                              v60._M_array = (std::initializer_list<std::string >::iterator)(v2 + 2688);
                              v60._M_len = 2LL;
                              *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = 1;
                              std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 400));
                              std::vector<std::string>::vector(
                                (std::vector<std::string> *const)(v2 + 608),
                                v60,
                                (const std::vector<std::string>::allocator_type *)(v2 + 400));
                              v51 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                                      (const std::string *)(v2 + 672),
                                      (const std::vector<std::string> *)(v2 + 608),
                                      &this->trial_avatar_list,
                                      1) != 0;
                              std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 608));
                              v52 = ((v2 + 608) >> 3) + 2147450880;
                              *(_WORD *)v52 = -1800;
                              *(_BYTE *)(v52 + 2) = -8;
                              std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 400));
                              *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
                              for ( m = (char *)(v2 + 2752); m != (char *)(v2 + 2688); std::string::~string(m) )
                                m -= 32;
                              v54 = (_DWORD *)(((v2 + 2688) >> 3) + 2147450880);
                              *v54 = -117901064;
                              v54[1] = -117901064;
                              std::allocator<char>::~allocator(v2 + 384);
                              *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
                              std::allocator<char>::~allocator(v2 + 368);
                              *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
                              if ( v51 )
                              {
                                *(_DWORD *)(((v2 + 2336) >> 3) + 0x7FFF8000) = 0;
                                if ( *(char *)(((v2 + 2336) >> 3) + 0x7FFF8000) < 0
                                  || *(_BYTE *)(((v2 + 2367) >> 3) + 0x7FFF8000) != 0
                                  && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 2367) >> 3) + 0x7FFF8000) )
                                {
                                  __asan_report_store_n(v2 + 2336, 32LL);
                                }
                                common::milog::MiLogStream::create(
                                  (common::milog::MiLogStream *)(v2 + 2336),
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  4u,
                                  "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
                                  "init",
                                  610);
                                v55 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                        (common::milog::MiLogStream *const)(v2 + 2336),
                                        (const char (*)[16])"[CONFIG_ERROR] ");
                                common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                  v55,
                                  (const char (*)[39])byte_1ABFCFC0);
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2336));
                                *(_DWORD *)(((v2 + 2336) >> 3) + 0x7FFF8000) = -117901064;
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
  std::string::~string((void *)(v2 + 672));
  if ( v61 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 84) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8154) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862744) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450968 - (((_DWORD)v4 + 2147450976) & 0xFFFFFFF8) + 260) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 2784LL, v61);
  }
  return v7;
};

// Line 618: range 00000000137DA64E-00000000137DC3A3
int32_t __cdecl data::RogueDiaryDungeonExcelConfig::init(
        data::RogueDiaryDungeonExcelConfig *const this,
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
  char *j; // r14
  _DWORD *v13; // rax
  common::milog::MiLogStream *v14; // rax
  bool v15; // r14
  unsigned int *p_room_count; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  bool v20; // r14
  bool v21; // r14
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  std::vector<unsigned int> *p_round_room_config_list; // r14
  unsigned __int64 v26; // rax
  _DWORD *v27; // rax
  bool v28; // r15
  unsigned __int64 v29; // rax
  char *k; // r14
  _DWORD *v31; // rax
  common::milog::MiLogStream *v32; // rax
  bool v33; // r14
  unsigned int *p_hp_correction; // r14
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  bool t; // [rsp+0h] [rbp-7F0h]
  bool ta; // [rsp+0h] [rbp-7F0h]
  std::initializer_list<std::string > __l; // [rsp+10h] [rbp-7E0h]
  uint32_t array_count; // [rsp+38h] [rbp-7B8h]
  uint32_t i; // [rsp+3Ch] [rbp-7B4h]
  char v44[1968]; // [rsp+40h] [rbp-7B0h] BYREF

  v2 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1920LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "35 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unkno"
                        "wn> 208 1 9 <unknown> 224 1 9 <unknown> 240 1 9 <unknown> 256 24 9 <unknown> 320 24 9 <unknown> "
                        "384 32 11 val_str:621 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown"
                        "> 704 32 9 <unknown> 768 32 9 <unknown> 832 32 9 <unknown> 896 32 9 <unknown> 960 32 9 <unknown>"
                        " 1024 32 9 <unknown> 1088 32 9 <unknown> 1152 32 9 <unknown> 1216 32 9 <unknown> 1280 32 9 <unkn"
                        "own> 1344 32 9 <unknown> 1408 64 9 <unknown> 1504 64 9 <unknown> 1600 256 12 col_name:619";
  *(_QWORD *)(v2 + 16) = data::RogueDiaryDungeonExcelConfig::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862724] = -234753535;
  v4[536862725] = -234753535;
  v4[536862726] = -234753535;
  v4[536862727] = -234753535;
  v4[536862728] = -234881024;
  v4[536862729] = -218959118;
  v4[536862730] = -234881024;
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
  v4[536862757] = -218959118;
  v4[536862759] = -218959118;
  v4[536862761] = -218959118;
  v4[536862763] = -218959118;
  v4[536862766] = -218959118;
  v4[536862769] = -218959118;
  v4[536862778] = -202116109;
  v4[536862779] = -202116109;
  std::string::basic_string(v2 + 384);
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 448),
    &byte_1ABFD2C0,
    (const std::allocator<char> *)(v2 + 32));
  t = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 448), &this->dungeon_id) != 0;
  std::string::~string((void *)(v2 + 448));
  *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( t )
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
      "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
      "init",
      624);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 512),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v5, (const char (*)[29])byte_1ABFD300);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
    *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
    goto LABEL_46;
  }
  *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 576),
    &byte_1ABFD340,
    (const std::allocator<char> *)(v2 + 48));
  ta = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 576), (std::string *)(v2 + 384)) != 0;
  std::string::~string((void *)(v2 + 576));
  *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( ta )
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
      "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
      "init",
      629);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 640),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(v7, (const char (*)[38])byte_1ABFD380);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 640));
    *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
    goto LABEL_46;
  }
  v8 = ((v2 + 256) >> 3) + 2147450880;
  *(_WORD *)v8 = 0;
  *(_BYTE *)(v8 + 2) = 0;
  v9 = (_DWORD *)(((v2 + 1408) >> 3) + 2147450880);
  *v9 = 0;
  v9[1] = 0;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 1408),
    ";",
    (const std::allocator<char> *)(v2 + 64));
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 80);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 1440),
    ",",
    (const std::allocator<char> *)(v2 + 80));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
  std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 96));
  std::vector<std::string>::vector(
    (std::vector<std::string> *const)(v2 + 256),
    (std::initializer_list<std::string >)__PAIR128__(2LL, v2 + 1408),
    (const std::vector<std::string>::allocator_type *)(v2 + 96));
  v10 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
          (const std::string *)(v2 + 384),
          (const std::vector<std::string> *)(v2 + 256),
          &this->group_list,
          1) != 0;
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 256));
  v11 = ((v2 + 256) >> 3) + 2147450880;
  *(_WORD *)v11 = -1800;
  *(_BYTE *)(v11 + 2) = -8;
  std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  for ( j = (char *)(v2 + 1472); j != (char *)(v2 + 1408); std::string::~string(j) )
    j -= 32;
  v13 = (_DWORD *)(((v2 + 1408) >> 3) + 2147450880);
  *v13 = -117901064;
  v13[1] = -117901064;
  std::allocator<char>::~allocator(v2 + 80);
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
  std::allocator<char>::~allocator(v2 + 64);
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v10 )
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
      "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
      "init",
      634);
    v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 704),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(v14, (const char (*)[38])byte_1ABFD380);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
    *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
    goto LABEL_46;
  }
  std::vector<data::RogueDiaryRoundExcelConfig>::resize(&this->round_list, 6uLL);
  array_count = 0;
  for ( i = 0; ; ++i )
  {
    if ( i > 5 )
    {
      std::vector<data::RogueDiaryRoundExcelConfig>::resize(&this->round_list, array_count);
      v6 = 0;
      goto LABEL_46;
    }
    snprintf((char *)(v2 + 1600), 0x100uLL, &byte_1ABFD3E0, i + 1);
    *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 112);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 768),
      (const char *)(v2 + 1600),
      (const std::allocator<char> *)(v2 + 112));
    v15 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 768));
    std::string::~string((void *)(v2 + 768));
    *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 112);
    *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
    if ( !v15 )
    {
      p_room_count = &std::vector<data::RogueDiaryRoundExcelConfig>::operator[](&this->round_list, i)->room_count;
      *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 128);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 832),
        (const char *)(v2 + 1600),
        (const std::allocator<char> *)(v2 + 128));
      LOBYTE(p_room_count) = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                               row,
                               (const std::string *)(v2 + 832),
                               p_room_count) != 0;
      std::string::~string((void *)(v2 + 832));
      *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 128);
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      if ( (_BYTE)p_room_count )
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
          "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
          "init",
          646);
        v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 896),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v18 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v17, (const char (*)[14])byte_1ABFD420);
        v19 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(v18, (const char (*)[256])(v2 + 1600));
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v19, (const char (*)[7])byte_1ABFD460);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 896));
        *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
        goto LABEL_46;
      }
      snprintf((char *)(v2 + 1600), 0x100uLL, &byte_1ABFD4A0, i + 1);
      *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 144);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 960),
        (const char *)(v2 + 1600),
        (const std::allocator<char> *)(v2 + 144));
      v20 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 960));
      std::string::~string((void *)(v2 + 960));
      *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 144);
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
      if ( !v20 )
      {
        *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 160);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 1024),
          (const char *)(v2 + 1600),
          (const std::allocator<char> *)(v2 + 160));
        v21 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 1024), (std::string *)(v2 + 384)) != 0;
        std::string::~string((void *)(v2 + 1024));
        *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 160);
        *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
        if ( v21 )
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
            "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
            "init",
            654);
          v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 1088),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v23 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v22, (const char (*)[14])byte_1ABFD420);
          v24 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(v23, (const char (*)[256])(v2 + 1600));
          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v24, (const char (*)[7])byte_1ABFD460);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1088));
          *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -117901064;
          v6 = -1;
          goto LABEL_46;
        }
        p_round_room_config_list = &std::vector<data::RogueDiaryRoundExcelConfig>::operator[](&this->round_list, i)->round_room_config_list;
        v26 = ((v2 + 320) >> 3) + 2147450880;
        *(_WORD *)v26 = 0;
        *(_BYTE *)(v26 + 2) = 0;
        v27 = (_DWORD *)(((v2 + 1504) >> 3) + 2147450880);
        *v27 = 0;
        v27[1] = 0;
        *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 176);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 1504),
          ";",
          (const std::allocator<char> *)(v2 + 176));
        *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 192);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 1536),
          ",",
          (const std::allocator<char> *)(v2 + 192));
        __l._M_array = (std::initializer_list<std::string >::iterator)(v2 + 1504);
        __l._M_len = 2LL;
        *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
        std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 208));
        std::vector<std::string>::vector(
          (std::vector<std::string> *const)(v2 + 320),
          __l,
          (const std::vector<std::string>::allocator_type *)(v2 + 208));
        v28 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                (const std::string *)(v2 + 384),
                (const std::vector<std::string> *)(v2 + 320),
                p_round_room_config_list,
                1) != 0;
        std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 320));
        v29 = ((v2 + 320) >> 3) + 2147450880;
        *(_WORD *)v29 = -1800;
        *(_BYTE *)(v29 + 2) = -8;
        std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 208));
        *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
        for ( k = (char *)(v2 + 1568); k != (char *)(v2 + 1504); std::string::~string(k) )
          k -= 32;
        v31 = (_DWORD *)(((v2 + 1504) >> 3) + 2147450880);
        *v31 = -117901064;
        v31[1] = -117901064;
        std::allocator<char>::~allocator(v2 + 192);
        *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
        std::allocator<char>::~allocator(v2 + 176);
        *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
        if ( v28 )
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
            "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
            "init",
            659);
          v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 1152),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v32, (const char (*)[41])byte_1ABFD4E0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1152));
          *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = -117901064;
          v6 = -1;
          goto LABEL_46;
        }
        snprintf((char *)(v2 + 1600), 0x100uLL, &byte_1ABFD540, i + 1);
        *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 224);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 1216),
          (const char *)(v2 + 1600),
          (const std::allocator<char> *)(v2 + 224));
        v33 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 1216));
        std::string::~string((void *)(v2 + 1216));
        *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 224);
        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
        if ( !v33 )
          break;
      }
    }
LABEL_44:
    ;
  }
  p_hp_correction = &std::vector<data::RogueDiaryRoundExcelConfig>::operator[](&this->round_list, i)->hp_correction;
  *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 240);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 1280),
    (const char *)(v2 + 1600),
    (const std::allocator<char> *)(v2 + 240));
  LOBYTE(p_hp_correction) = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                              row,
                              (const std::string *)(v2 + 1280),
                              p_hp_correction) != 0;
  std::string::~string((void *)(v2 + 1280));
  *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 240);
  *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
  if ( !(_BYTE)p_hp_correction )
  {
    array_count = i + 1;
    goto LABEL_44;
  }
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
    "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
    "init",
    667);
  v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v2 + 1344),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v36 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v35, (const char (*)[14])byte_1ABFD420);
  v37 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(v36, (const char (*)[256])(v2 + 1600));
  common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v37, (const char (*)[7])byte_1ABFD460);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1344));
  *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = -117901064;
  v6 = -1;
LABEL_46:
  std::string::~string((void *)(v2 + 384));
  if ( v44 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80C0) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862735) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450932 - (((_DWORD)v4 + 2147450940) & 0xFFFFFFF8) + 148) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF80E8) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1920LL, v44);
  }
  return v6;
};

// Line 679: range 00000000137DC3A4-00000000137DD3F7
int32_t __cdecl data::RogueDiaryRoomTypeConfig::init(
        data::RogueDiaryRoomTypeConfig *const this,
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
  unsigned __int64 v16; // rax
  _DWORD *v17; // rax
  bool v18; // r15
  unsigned __int64 v19; // rax
  char *j; // r14
  _DWORD *v21; // rax
  common::milog::MiLogStream *v22; // rax
  bool split_list; // [rsp+8h] [rbp-3F8h]
  std::initializer_list<std::string > __l; // [rsp+10h] [rbp-3F0h]
  char v26[976]; // [rsp+30h] [rbp-3D0h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(928LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "19 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 24 9 <unknown> 224 24 9 <unknown> 288 32 11 va"
                        "l_str:680 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <"
                        "unknown> 672 32 9 <unknown> 736 64 9 <unknown> 832 64 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::RogueDiaryRoomTypeConfig::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862724] = -234753535;
  v4[536862725] = -234881024;
  v4[536862726] = -218959118;
  v4[536862727] = -234881024;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -218959118;
  v4[536862740] = -218959118;
  v4[536862742] = -218959118;
  v4[536862745] = -218959118;
  v4[536862748] = -202116109;
  std::string::basic_string(v2 + 288);
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 352),
    &byte_1ABFD700,
    (const std::allocator<char> *)(v2 + 32));
  split_list = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 352), (std::string *)(v2 + 288)) != 0;
  std::string::~string((void *)(v2 + 352));
  *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( split_list )
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
      "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
      "init",
      683);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 416),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v5, (const char (*)[48])byte_1ABFD740);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
    *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    v7 = ((v2 + 160) >> 3) + 2147450880;
    *(_WORD *)v7 = 0;
    *(_BYTE *)(v7 + 2) = 0;
    v8 = (_DWORD *)(((v2 + 736) >> 3) + 2147450880);
    *v8 = 0;
    v8[1] = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 736),
      ";",
      (const std::allocator<char> *)(v2 + 48));
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 768),
      ",",
      (const std::allocator<char> *)(v2 + 64));
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
    std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 80));
    std::vector<std::string>::vector(
      (std::vector<std::string> *const)(v2 + 160),
      (std::initializer_list<std::string >)__PAIR128__(2LL, v2 + 736),
      (const std::vector<std::string>::allocator_type *)(v2 + 80));
    v9 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
           (const std::string *)(v2 + 288),
           (const std::vector<std::string> *)(v2 + 160),
           &this->normal_room_config_list,
           1) != 0;
    std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 160));
    v10 = ((v2 + 160) >> 3) + 2147450880;
    *(_WORD *)v10 = -1800;
    *(_BYTE *)(v10 + 2) = -8;
    std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 80));
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    for ( i = (char *)(v2 + 800); i != (char *)(v2 + 736); std::string::~string(i) )
      i -= 32;
    v12 = (_DWORD *)(((v2 + 736) >> 3) + 2147450880);
    *v12 = -117901064;
    v12[1] = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
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
        "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
        "init",
        688);
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 480),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v13, (const char (*)[48])byte_1ABFD740);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
      *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 96);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 544),
        &byte_1ABFD7A0,
        (const std::allocator<char> *)(v2 + 96));
      v14 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 544), (std::string *)(v2 + 288)) != 0;
      std::string::~string((void *)(v2 + 544));
      *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 96);
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      if ( v14 )
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
          "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
          "init",
          693);
        v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 608),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v15, (const char (*)[45])byte_1ABFD7E0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
        *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
      }
      else
      {
        v16 = ((v2 + 224) >> 3) + 2147450880;
        *(_WORD *)v16 = 0;
        *(_BYTE *)(v16 + 2) = 0;
        v17 = (_DWORD *)(((v2 + 832) >> 3) + 2147450880);
        *v17 = 0;
        v17[1] = 0;
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 112);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 832),
          ";",
          (const std::allocator<char> *)(v2 + 112));
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 128);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 864),
          ",",
          (const std::allocator<char> *)(v2 + 128));
        __l._M_array = (std::initializer_list<std::string >::iterator)(v2 + 832);
        __l._M_len = 2LL;
        *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
        std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 144));
        std::vector<std::string>::vector(
          (std::vector<std::string> *const)(v2 + 224),
          __l,
          (const std::vector<std::string>::allocator_type *)(v2 + 144));
        v18 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                (const std::string *)(v2 + 288),
                (const std::vector<std::string> *)(v2 + 224),
                &this->hard_room_config_list,
                1) != 0;
        std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 224));
        v19 = ((v2 + 224) >> 3) + 2147450880;
        *(_WORD *)v19 = -1800;
        *(_BYTE *)(v19 + 2) = -8;
        std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 144));
        *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
        for ( j = (char *)(v2 + 896); j != (char *)(v2 + 832); std::string::~string(j) )
          j -= 32;
        v21 = (_DWORD *)(((v2 + 832) >> 3) + 2147450880);
        *v21 = -117901064;
        v21[1] = -117901064;
        std::allocator<char>::~allocator(v2 + 128);
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
        std::allocator<char>::~allocator(v2 + 112);
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
        if ( v18 )
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
            "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
            "init",
            698);
          v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 672),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v22, (const char (*)[45])byte_1ABFD7E0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
          *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
          v6 = -1;
        }
        else
        {
          v6 = 0;
        }
      }
    }
  }
  std::string::~string((void *)(v2 + 288));
  if ( v26 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF806C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862732) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450920 - (((_DWORD)v4 + 2147450928) & 0xFFFFFFF8) + 76) & 0xFFFFFFF8) >> 3));
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8070) = -168430091;
  }
  return v6;
};

// Line 706: range 00000000137DD3F8-00000000137DED06
int32_t __cdecl data::RogueDiaryRoundRoomExcelConfig::init(
        data::RogueDiaryRoundRoomExcelConfig *const this,
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
  bool v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::vector<unsigned int> *p_normal_room_config_list; // r14
  unsigned __int64 v16; // rax
  _DWORD *v17; // rax
  unsigned __int64 v18; // rax
  char *j; // r14
  _DWORD *v20; // rax
  common::milog::MiLogStream *v21; // rax
  bool v22; // r14
  bool v23; // r14
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  std::vector<unsigned int> *p_hard_room_config_list; // r14
  unsigned __int64 v28; // rax
  _DWORD *v29; // rax
  unsigned __int64 v30; // rax
  char *k; // r14
  _DWORD *v32; // rax
  common::milog::MiLogStream *v33; // rax
  bool v35; // [rsp+Fh] [rbp-711h]
  bool v36; // [rsp+Fh] [rbp-711h]
  std::initializer_list<std::string > __l; // [rsp+10h] [rbp-710h]
  std::initializer_list<std::string > v38; // [rsp+20h] [rbp-700h]
  uint32_t array_count; // [rsp+48h] [rbp-6D8h]
  uint32_t i; // [rsp+4Ch] [rbp-6D4h]
  char v41[1744]; // [rsp+50h] [rbp-6D0h] BYREF

  v2 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1696LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "30 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unkno"
                        "wn> 208 1 9 <unknown> 224 24 9 <unknown> 288 24 9 <unknown> 352 32 11 val_str:709 416 32 9 <unkn"
                        "own> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unkno"
                        "wn> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown> 1056 32 9 <unkno"
                        "wn> 1120 32 9 <unknown> 1184 64 9 <unknown> 1280 64 9 <unknown> 1376 256 12 col_name:707";
  *(_QWORD *)(v2 + 16) = data::RogueDiaryRoundRoomExcelConfig::init;
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
  v4[536862759] = -218959118;
  v4[536862762] = -218959118;
  v4[536862771] = -202116109;
  v4[536862772] = -202116109;
  std::string::basic_string(v2 + 352);
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 416),
    &byte_1ABFDA80,
    (const std::allocator<char> *)(v2 + 32));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 416), &this->id) != 0;
  std::string::~string((void *)(v2 + 416));
  *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
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
      "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
      "init",
      712);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 480),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v6, (const char (*)[32])byte_1ABFDAC0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
    *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
    goto LABEL_41;
  }
  *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 544),
    &byte_1ABFDB00,
    (const std::allocator<char> *)(v2 + 48));
  v8 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
         row,
         (const std::string *)(v2 + 544),
         &this->hard_room_count) != 0;
  std::string::~string((void *)(v2 + 544));
  *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
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
      "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
      "init",
      717);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 608),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v9, (const char (*)[39])byte_1ABFDB40);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
    *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
    goto LABEL_41;
  }
  std::vector<data::RogueDiaryRoomTypeConfig>::resize(&this->room_type_config_list, 3uLL);
  array_count = 0;
  for ( i = 0; ; ++i )
  {
    if ( i > 2 )
    {
      std::vector<data::RogueDiaryRoomTypeConfig>::resize(&this->room_type_config_list, array_count);
      v7 = 0;
      goto LABEL_41;
    }
    snprintf((char *)(v2 + 1376), 0x100uLL, &byte_1ABFDBA0, i + 1);
    *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 672),
      (const char *)(v2 + 1376),
      (const std::allocator<char> *)(v2 + 64));
    v10 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 672));
    std::string::~string((void *)(v2 + 672));
    *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( !v10 )
    {
      *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 736),
        (const char *)(v2 + 1376),
        (const std::allocator<char> *)(v2 + 80));
      v11 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 736), (std::string *)(v2 + 352)) != 0;
      std::string::~string((void *)(v2 + 736));
      *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( v11 )
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
          "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
          "init",
          729);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 800),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v12, (const char (*)[14])byte_1ABFD420);
        v14 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(v13, (const char (*)[256])(v2 + 1376));
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])byte_1ABFD460);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 800));
        *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
        v7 = -1;
        goto LABEL_41;
      }
      p_normal_room_config_list = &std::vector<data::RogueDiaryRoomTypeConfig>::operator[](
                                     &this->room_type_config_list,
                                     i)->normal_room_config_list;
      v16 = ((v2 + 224) >> 3) + 2147450880;
      *(_WORD *)v16 = 0;
      *(_BYTE *)(v16 + 2) = 0;
      v17 = (_DWORD *)(((v2 + 1184) >> 3) + 2147450880);
      *v17 = 0;
      v17[1] = 0;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 96);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 1184),
        ";",
        (const std::allocator<char> *)(v2 + 96));
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 112);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 1216),
        ",",
        (const std::allocator<char> *)(v2 + 112));
      __l._M_array = (std::initializer_list<std::string >::iterator)(v2 + 1184);
      __l._M_len = 2LL;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 128));
      std::vector<std::string>::vector(
        (std::vector<std::string> *const)(v2 + 224),
        __l,
        (const std::vector<std::string>::allocator_type *)(v2 + 128));
      v35 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
              (const std::string *)(v2 + 352),
              (const std::vector<std::string> *)(v2 + 224),
              p_normal_room_config_list,
              1) != 0;
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 224));
      v18 = ((v2 + 224) >> 3) + 2147450880;
      *(_WORD *)v18 = -1800;
      *(_BYTE *)(v18 + 2) = -8;
      std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 128));
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      for ( j = (char *)(v2 + 1248); j != (char *)(v2 + 1184); std::string::~string(j) )
        j -= 32;
      v20 = (_DWORD *)(((v2 + 1184) >> 3) + 2147450880);
      *v20 = -117901064;
      v20[1] = -117901064;
      std::allocator<char>::~allocator(v2 + 112);
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      std::allocator<char>::~allocator(v2 + 96);
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      if ( v35 )
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
          "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
          "init",
          734);
        v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 864),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(v21, (const char (*)[56])byte_1ABFDC00);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 864));
        *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
        v7 = -1;
        goto LABEL_41;
      }
      snprintf((char *)(v2 + 1376), 0x100uLL, &byte_1ABFDC60, i + 1);
      *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 144);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 928),
        (const char *)(v2 + 1376),
        (const std::allocator<char> *)(v2 + 144));
      v22 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 928));
      std::string::~string((void *)(v2 + 928));
      *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 144);
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
      if ( !v22 )
        break;
    }
LABEL_39:
    ;
  }
  *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 160);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 992),
    (const char *)(v2 + 1376),
    (const std::allocator<char> *)(v2 + 160));
  v23 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 992), (std::string *)(v2 + 352)) != 0;
  std::string::~string((void *)(v2 + 992));
  *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 160);
  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
  if ( v23 )
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
      "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
      "init",
      742);
    v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 1056),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v25 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v24, (const char (*)[14])byte_1ABFD420);
    v26 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(v25, (const char (*)[256])(v2 + 1376));
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v26, (const char (*)[7])byte_1ABFD460);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1056));
    *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
    goto LABEL_41;
  }
  p_hard_room_config_list = &std::vector<data::RogueDiaryRoomTypeConfig>::operator[](&this->room_type_config_list, i)->hard_room_config_list;
  v28 = ((v2 + 288) >> 3) + 2147450880;
  *(_WORD *)v28 = 0;
  *(_BYTE *)(v28 + 2) = 0;
  v29 = (_DWORD *)(((v2 + 1280) >> 3) + 2147450880);
  *v29 = 0;
  v29[1] = 0;
  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 176);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 1280),
    ";",
    (const std::allocator<char> *)(v2 + 176));
  *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 192);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 1312),
    ",",
    (const std::allocator<char> *)(v2 + 192));
  v38._M_array = (std::initializer_list<std::string >::iterator)(v2 + 1280);
  v38._M_len = 2LL;
  *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
  std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 208));
  std::vector<std::string>::vector(
    (std::vector<std::string> *const)(v2 + 288),
    v38,
    (const std::vector<std::string>::allocator_type *)(v2 + 208));
  v36 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
          (const std::string *)(v2 + 352),
          (const std::vector<std::string> *)(v2 + 288),
          p_hard_room_config_list,
          1) != 0;
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 288));
  v30 = ((v2 + 288) >> 3) + 2147450880;
  *(_WORD *)v30 = -1800;
  *(_BYTE *)(v30 + 2) = -8;
  std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 208));
  *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
  for ( k = (char *)(v2 + 1344); k != (char *)(v2 + 1280); std::string::~string(k) )
    k -= 32;
  v32 = (_DWORD *)(((v2 + 1280) >> 3) + 2147450880);
  *v32 = -117901064;
  v32[1] = -117901064;
  std::allocator<char>::~allocator(v2 + 192);
  *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
  std::allocator<char>::~allocator(v2 + 176);
  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
  if ( !v36 )
  {
    array_count = i + 1;
    goto LABEL_39;
  }
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
    "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
    "init",
    747);
  v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v2 + 1120),
          (const char (*)[16])"[CONFIG_ERROR] ");
  common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(v33, (const char (*)[53])byte_1ABFDCC0);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1120));
  *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -117901064;
  v7 = -1;
LABEL_41:
  std::string::~string((void *)(v2 + 352));
  if ( v41 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80A4) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862734) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450928 - (((_DWORD)v4 + 2147450936) & 0xFFFFFFF8) + 124) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF80CC) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1696LL, v41);
  }
  return v7;
};

// Line 759: range 00000000137DED08-00000000137DFE9B
int32_t __cdecl data::RogueDiaryRoomExcelConfig::init(
        data::RogueDiaryRoomExcelConfig *const this,
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
  *(_QWORD *)(v2 + 16) = data::RogueDiaryRoomExcelConfig::init;
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
    "id",
    (const std::allocator<char> *)(v2 + 48));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 160), &this->id) != 0;
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
      "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
      "init",
      762);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 224),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v6, (const char (*)[23])byte_1ABFDF00);
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
      &byte_1ABFDF40,
      (const std::allocator<char> *)(v2 + 64));
    v8 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
           row,
           (const std::string *)(v2 + 288),
           &this->normal_tide_id) != 0;
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
        "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
        "init",
        767);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 352),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v9, (const char (*)[44])byte_1ABFDF80);
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
        &byte_1ABFDFE0,
        (const std::allocator<char> *)(v2 + 80));
      v10 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
              row,
              (const std::string *)(v2 + 416),
              &this->hard_tide_id) != 0;
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
          "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
          "init",
          772);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 480),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v11, (const char (*)[44])byte_1ABFE020);
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
          &byte_1ABFE080,
          (const std::allocator<char> *)(v2 + 96));
        v12 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                row,
                (const std::string *)(v2 + 544),
                &this->challenge_id) != 0;
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
            "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
            "init",
            777);
          v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 608),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v13, (const char (*)[35])byte_1ABFE0C0);
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
            &byte_1ABFE120,
            (const std::allocator<char> *)(v2 + 112));
          v14 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                  row,
                  (const std::string *)(v2 + 672),
                  &this->coin_reward_normal) != 0;
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
              "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
              "init",
              782);
            v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 736),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v15, (const char (*)[39])byte_1ABFE160);
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
              &byte_1ABFE1C0,
              (const std::allocator<char> *)(v2 + 128));
            v16 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                    row,
                    (const std::string *)(v2 + 800),
                    &this->coin_reward_hard) != 0;
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
                "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
                "init",
                787);
              v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 864),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v17, (const char (*)[39])byte_1ABFE200);
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
                aBoss_7,
                (const std::allocator<char> *)(v2 + 144));
              v18 = common::tools::TxtFile::Row::assignToNum<bool>(row, (const std::string *)(v2 + 928), &this->is_boss) != 0;
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
                  "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
                  "init",
                  792);
                v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 992),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v19, (const char (*)[31])byte_1ABFE2A0);
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

// Line 800: range 00000000137DFE9C-00000000137E0934
int32_t __cdecl data::RogueDiaryBuffDataExcelConfig::init(
        data::RogueDiaryBuffDataExcelConfig *const this,
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
  *(_QWORD *)(v2 + 16) = data::RogueDiaryBuffDataExcelConfig::init;
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
      "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
      "init",
      803);
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
      &byte_1ABFE3C0,
      (const std::allocator<char> *)(v2 + 48));
    v8 = common::tools::TxtFile::Row::assignToEnum<data::RogueDiaryBuffType>(
           row,
           (const std::string *)(v2 + 224),
           &this->type) != 0;
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
        "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
        "init",
        808);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v9, (const char (*)[27])byte_1ABFE400);
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
        &byte_1ABFE440,
        (const std::allocator<char> *)(v2 + 64));
      v10 = common::tools::TxtFile::Row::assignToEnum<data::RogueDiaryBuffEffectType>(
              row,
              (const std::string *)(v2 + 352),
              &this->effect_type) != 0;
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
          "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
          "init",
          813);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 416),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v11, (const char (*)[33])byte_1ABFE480);
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
          "AbilityName",
          (const std::allocator<char> *)(v2 + 80));
        v12 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 480), &this->ability_group) != 0;
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
            "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
            "init",
            818);
          v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 544),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v13, (const char (*)[32])byte_1ABFE520);
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

// Line 826: range 00000000137E0936-00000000137E13CE
int32_t __cdecl data::RogueDiaryCardWeightExcelConfig::init(
        data::RogueDiaryCardWeightExcelConfig *const this,
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
  *(_QWORD *)(v2 + 16) = data::RogueDiaryCardWeightExcelConfig::init;
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
      "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
      "init",
      829);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 160),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v6, (const char (*)[29])byte_1ABFE5A0);
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
      aSr_1,
      (const std::allocator<char> *)(v2 + 48));
    v8 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 224), &this->sr_count) != 0;
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
        "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
        "init",
        834);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v9, (const char (*)[29])byte_1ABFE620);
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
        "Weight",
        (const std::allocator<char> *)(v2 + 64));
      v10 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 352), &this->weight) != 0;
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
          "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
          "init",
          839);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 416),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v11, (const char (*)[27])byte_1ABFE6A0);
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
          "ReselectWeight",
          (const std::allocator<char> *)(v2 + 80));
        v12 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                row,
                (const std::string *)(v2 + 480),
                &this->retry_weight) != 0;
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
            "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
            "init",
            844);
          v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 544),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v13, (const char (*)[35])byte_1ABFE720);
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

// Line 852: range 00000000137E13D0-00000000137E20DF
int32_t __cdecl data::RogueDiaryCardDepotExcelConfig::init(
        data::RogueDiaryCardDepotExcelConfig *const this,
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
  *(_QWORD *)(v2 + 16) = data::RogueDiaryCardDepotExcelConfig::init;
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
    "ConfigID",
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
      "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
      "init",
      855);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 192),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v6, (const char (*)[29])byte_1ABFE5A0);
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
      "PoolID",
      (const std::allocator<char> *)(v2 + 64));
    v8 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 256), &this->depot_id) != 0;
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
        "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
        "init",
        860);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 320),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v9, (const char (*)[27])byte_1ABFE8E0);
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
        "BuffID",
        (const std::allocator<char> *)(v2 + 80));
      v10 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 384), &this->buff_id) != 0;
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
          "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
          "init",
          865);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 448),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v11, (const char (*)[27])byte_1ABFE960);
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
          "BuffLevel",
          (const std::allocator<char> *)(v2 + 96));
        v12 = common::tools::TxtFile::Row::assignToEnum<data::RogueDiaryBuffType>(
                row,
                (const std::string *)(v2 + 512),
                &this->buff_type) != 0;
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
            "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
            "init",
            870);
          v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 576),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v13, (const char (*)[30])byte_1ABFE9E0);
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
            "Weight",
            (const std::allocator<char> *)(v2 + 112));
          v14 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                  row,
                  (const std::string *)(v2 + 640),
                  &this->weight) != 0;
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
              "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
              "init",
              875);
            v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 704),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v15, (const char (*)[27])byte_1ABFE6A0);
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

// Line 883: range 00000000137E20E0-00000000137E2902
int32_t __cdecl data::RogueDiaryPreviewExcelConfig::init(
        data::RogueDiaryPreviewExcelConfig *const this,
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
  *(_QWORD *)(v2 + 16) = data::RogueDiaryPreviewExcelConfig::init;
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
    &byte_1ABFEAE0,
    (const std::allocator<char> *)(v2 + 48));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 96), &this->activity_id) != 0;
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
      "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
      "init",
      886);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 160),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v6, (const char (*)[29])byte_1ABFEB20);
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
      "RoomID",
      (const std::allocator<char> *)(v2 + 64));
    v8 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
           row,
           (const std::string *)(v2 + 224),
           &this->room_scene_id) != 0;
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
        "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
        "init",
        891);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v9, (const char (*)[27])byte_1ABFEBA0);
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
        "SceneID",
        (const std::allocator<char> *)(v2 + 80));
      v10 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
              row,
              (const std::string *)(v2 + 352),
              &this->world_scene_id) != 0;
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
          "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
          "init",
          896);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 416),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v11, (const char (*)[28])byte_1ABFEC20);
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

// Line 904: range 00000000137E2904-00000000137E3126
int32_t __cdecl data::RogueDiaryResourceExcelConfig::init(
        data::RogueDiaryResourceExcelConfig *const this,
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
  *(_QWORD *)(v2 + 16) = data::RogueDiaryResourceExcelConfig::init;
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
    "ConfigID",
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
      "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
      "init",
      907);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 160),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v6, (const char (*)[29])byte_1ABFE5A0);
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
      &byte_1ABFEC60,
      (const std::allocator<char> *)(v2 + 64));
    v8 = common::tools::TxtFile::Row::assignToEnum<data::RogueDiaryResourceType>(
           row,
           (const std::string *)(v2 + 224),
           &this->type) != 0;
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
        "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
        "init",
        912);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v9, (const char (*)[33])byte_1ABFECA0);
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
        &byte_1ABFED00,
        (const std::allocator<char> *)(v2 + 80));
      v10 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 352), &this->value) != 0;
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
          "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
          "init",
          917);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 416),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v11, (const char (*)[30])byte_1ABFED40);
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

// Line 925: range 00000000137E3128-00000000137E36B0
int32_t __cdecl data::RogueDiaryPortalExcelConfig::init(
        data::RogueDiaryPortalExcelConfig *const this,
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
  *(_QWORD *)(v2 + 16) = data::RogueDiaryPortalExcelConfig::init;
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
    "GroupID",
    (const std::allocator<char> *)(v2 + 32));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 64), &this->group_id) != 0;
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
      "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
      "init",
      928);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v6, (const char (*)[28])byte_1ABFEE40);
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
      &byte_1ABFEE80,
      (const std::allocator<char> *)(v2 + 48));
    v8 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 192), &this->point_id) != 0;
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
        "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
        "init",
        933);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 256),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v9, (const char (*)[32])byte_1ABFEEC0);
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

// Line 942: range 00000000137E36B2-00000000137E46D2
int32_t __cdecl data::ActivityRogueDiaryExcelConfigMgrBase::loadRogueDiaryStageExcelConfig(
        data::ActivityRogueDiaryExcelConfigMgrBase *const this,
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
  data::RogueDiaryStageExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::RogueDiaryStageExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryStageExcelConfig>,false,false>,bool> v27; // rax
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
  *(_QWORD *)(v3 + 8) = "13 48 1 9 <unknown> 64 4 5 r:957 80 4 9 <unknown> 96 32 9 paths:943 160 32 9 <unknown> 224 32 9 "
                        "<unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 136 8 "
                        "data:960 752 376 24 debug_message_stream:968 1200 32880 12 txt_file:951";
  *(_QWORD *)(v3 + 16) = data::ActivityRogueDiaryExcelConfigMgrBase::loadRogueDiaryStageExcelConfig;
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
    "/txt/RogueDiaryPhaseData.txt",
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
        "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
        "loadRogueDiaryStageExcelConfig",
        954);
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
        data::RogueDiaryStageExcelConfig::RogueDiaryStageExcelConfig((data::RogueDiaryStageExcelConfig *const)(v3 + 544));
        if ( row_ptr )
        {
          if ( data::RogueDiaryStageExcelConfig::init((data::RogueDiaryStageExcelConfig *const)(v3 + 544), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 752, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 752);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 752, &unk_1ABFF160);
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
              "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
              "loadRogueDiaryStageExcelConfig",
              970);
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
            v24 = std::move<data::RogueDiaryStageExcelConfig &>((data::RogueDiaryStageExcelConfig *)(v3 + 544));
            v27 = std::unordered_map<unsigned int,data::RogueDiaryStageExcelConfig>::emplace<unsigned int &,data::RogueDiaryStageExcelConfig>(
                    &this->rogue_diary_stage_excel_config_map,
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
                "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
                "loadRogueDiaryStageExcelConfig",
                975);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 480),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v28, (const char (*)[9])byte_1ABFF260);
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
            "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
            "loadRogueDiaryStageExcelConfig",
            963);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 288),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::RogueDiaryStageExcelConfig::~RogueDiaryStageExcelConfig((data::RogueDiaryStageExcelConfig *const)(v3 + 544));
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

// Line 984: range 00000000137E46D4-00000000137E56E9
int32_t __cdecl data::ActivityRogueDiaryExcelConfigMgrBase::loadRogueDiaryDungeonExcelConfig(
        data::ActivityRogueDiaryExcelConfigMgrBase *const this,
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
  data::RogueDiaryDungeonExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::RogueDiaryDungeonExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryDungeonExcelConfig>,false,false>,bool> v27; // rax
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
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 5 r:999 64 4 9 <unknown> 80 32 9 paths:985 144 32 9 <unknown> 208 32 9 "
                        "<unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 64 9 d"
                        "ata:1002 624 376 25 debug_message_stream:1010 1072 32880 12 txt_file:993";
  *(_QWORD *)(v3 + 16) = data::ActivityRogueDiaryExcelConfigMgrBase::loadRogueDiaryDungeonExcelConfig;
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
    "/txt/RogueDiaryDungeonData.txt",
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
        "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
        "loadRogueDiaryDungeonExcelConfig",
        996);
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
        v12 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v3 + 1072));
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
        if ( v12 <= *(_DWORD *)(v3 + 48) )
          break;
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v3 + 1072), *(_DWORD *)(v3 + 48));
        v13 = (_DWORD *)(((v3 + 528) >> 3) + 2147450880);
        *v13 = 0;
        v13[1] = 0;
        data::RogueDiaryDungeonExcelConfig::RogueDiaryDungeonExcelConfig((data::RogueDiaryDungeonExcelConfig *const)(v3 + 528));
        if ( row_ptr )
        {
          if ( data::RogueDiaryDungeonExcelConfig::init((data::RogueDiaryDungeonExcelConfig *const)(v3 + 528), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 624, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 624);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 624, &unk_1ABFF460);
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
              "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
              "loadRogueDiaryDungeonExcelConfig",
              1012);
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
            v24 = std::move<data::RogueDiaryDungeonExcelConfig &>((data::RogueDiaryDungeonExcelConfig *)(v3 + 528));
            v27 = std::unordered_map<unsigned int,data::RogueDiaryDungeonExcelConfig>::emplace<unsigned int &,data::RogueDiaryDungeonExcelConfig>(
                    &this->rogue_diary_dungeon_excel_config_map,
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
                "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
                "loadRogueDiaryDungeonExcelConfig",
                1017);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 464),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      v28,
                      (const char (*)[16])byte_1ABFF4A0);
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
            "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
            "loadRogueDiaryDungeonExcelConfig",
            1005);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 272),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
          *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::RogueDiaryDungeonExcelConfig::~RogueDiaryDungeonExcelConfig((data::RogueDiaryDungeonExcelConfig *const)(v3 + 528));
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

// Line 1026: range 00000000137E56EA-00000000137E66BA
int32_t __cdecl data::ActivityRogueDiaryExcelConfigMgrBase::loadRogueDiaryRoundRoomExcelConfig(
        data::ActivityRogueDiaryExcelConfigMgrBase *const this,
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
  data::RogueDiaryRoundRoomExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::RogueDiaryRoundRoomExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryRoundRoomExcelConfig>,false,false>,bool> v27; // rax
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
  *(_QWORD *)(v3 + 8) = "13 48 1 9 <unknown> 64 4 6 r:1041 80 4 9 <unknown> 96 32 10 paths:1027 160 32 9 <unknown> 224 32"
                        " 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 40 "
                        "9 data:1044 624 376 25 debug_message_stream:1052 1072 32880 13 txt_file:1035";
  *(_QWORD *)(v3 + 16) = data::ActivityRogueDiaryExcelConfigMgrBase::loadRogueDiaryRoundRoomExcelConfig;
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
    "/txt/RogueDiaryRoundData.txt",
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
        "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
        "loadRogueDiaryRoundRoomExcelConfig",
        1038);
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
        data::RogueDiaryRoundRoomExcelConfig::RogueDiaryRoundRoomExcelConfig((data::RogueDiaryRoundRoomExcelConfig *const)(v3 + 544));
        if ( row_ptr )
        {
          if ( data::RogueDiaryRoundRoomExcelConfig::init(
                 (data::RogueDiaryRoundRoomExcelConfig *const)(v3 + 544),
                 row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 624, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 624);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 624, &unk_1ABFF160);
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
              "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
              "loadRogueDiaryRoundRoomExcelConfig",
              1054);
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
            v24 = std::move<data::RogueDiaryRoundRoomExcelConfig &>((data::RogueDiaryRoundRoomExcelConfig *)(v3 + 544));
            v27 = std::unordered_map<unsigned int,data::RogueDiaryRoundRoomExcelConfig>::emplace<unsigned int &,data::RogueDiaryRoundRoomExcelConfig>(
                    &this->rogue_diary_round_room_excel_config_map,
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
                "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
                "loadRogueDiaryRoundRoomExcelConfig",
                1059);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 480),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v28, (const char (*)[9])byte_1ABFF260);
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
            "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
            "loadRogueDiaryRoundRoomExcelConfig",
            1047);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 288),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::RogueDiaryRoundRoomExcelConfig::~RogueDiaryRoundRoomExcelConfig((data::RogueDiaryRoundRoomExcelConfig *const)(v3 + 544));
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

// Line 1068: range 00000000137E66BC-00000000137E7754
int32_t __cdecl data::ActivityRogueDiaryExcelConfigMgrBase::loadRogueDiaryRoomExcelConfig(
        data::ActivityRogueDiaryExcelConfigMgrBase *const this,
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
  data::RogueDiaryRoomExcelConfig *v27; // rax
  unsigned int *v28; // rcx
  data::RogueDiaryRoomExcelConfig *v29; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryRoomExcelConfig>,false,false>,bool> v30; // rax
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
  *(_QWORD *)(v3 + 8) = "13 48 1 9 <unknown> 64 4 6 r:1083 80 4 9 <unknown> 96 32 10 paths:1069 160 32 9 <unknown> 224 32"
                        " 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 40 "
                        "9 data:1086 624 376 25 debug_message_stream:1094 1072 32880 13 txt_file:1077";
  *(_QWORD *)(v3 + 16) = data::ActivityRogueDiaryExcelConfigMgrBase::loadRogueDiaryRoomExcelConfig;
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
    "/txt/RogueDiaryMonsterPoolData.txt",
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
        "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
        "loadRogueDiaryRoomExcelConfig",
        1080);
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
        v16 = &`vtable for'data::RogueDiaryRoomExcelConfig + 2;
        if ( *(_BYTE *)(((v3 + 544) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 544, v15);
        *(_QWORD *)(v3 + 544) = v16;
        if ( row_ptr )
        {
          if ( data::RogueDiaryRoomExcelConfig::init((data::RogueDiaryRoomExcelConfig *const)(v3 + 544), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 624, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 624);
            v19 = std::operator<<<std::char_traits<char>>(v3 + 624, &unk_1ABFF160);
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
              "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
              "loadRogueDiaryRoomExcelConfig",
              1096);
            v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 352),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v21 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v20, (const char (*)[2])"<");
            v22 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, __for_begin);
            v23 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v22,
                    (const char (*)[11])byte_1ABFF1E0);
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
                    (const char (*)[13])byte_1ABFF220);
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
            v27 = std::move<data::RogueDiaryRoomExcelConfig &>((data::RogueDiaryRoomExcelConfig *)(v3 + 544));
            v30 = std::unordered_map<unsigned int,data::RogueDiaryRoomExcelConfig>::emplace<unsigned int &,data::RogueDiaryRoomExcelConfig>(
                    &this->rogue_diary_room_excel_config_map,
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
                "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
                "loadRogueDiaryRoomExcelConfig",
                1101);
              v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 480),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v32 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v31, (const char (*)[9])byte_1ABFF260);
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
            "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
            "loadRogueDiaryRoomExcelConfig",
            1089);
          v17 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 288),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v18 = 0;
        }
        data::RogueDiaryRoomExcelConfig::~RogueDiaryRoomExcelConfig((data::RogueDiaryRoomExcelConfig *const)(v3 + 544));
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

// Line 1110: range 00000000137E7756-00000000137E877C
int32_t __cdecl data::ActivityRogueDiaryExcelConfigMgrBase::loadRogueDiaryBuffDataExcelConfig(
        data::ActivityRogueDiaryExcelConfigMgrBase *const this,
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
  data::RogueDiaryBuffDataExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::RogueDiaryBuffDataExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryBuffDataExcelConfig>,false,false>,bool> v27; // rax
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
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 6 r:1125 64 4 9 <unknown> 80 32 10 paths:1111 144 32 9 <unknown> 208 32"
                        " 9 <unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 56 "
                        "9 data:1128 624 376 25 debug_message_stream:1136 1072 32880 13 txt_file:1119";
  *(_QWORD *)(v3 + 16) = data::ActivityRogueDiaryExcelConfigMgrBase::loadRogueDiaryBuffDataExcelConfig;
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
    "/txt/RogueDiaryBuffData.txt",
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
        "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
        "loadRogueDiaryBuffDataExcelConfig",
        1122);
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
        data::RogueDiaryBuffDataExcelConfig::RogueDiaryBuffDataExcelConfig((data::RogueDiaryBuffDataExcelConfig *const)(v3 + 528));
        if ( row_ptr )
        {
          if ( data::RogueDiaryBuffDataExcelConfig::init(
                 (data::RogueDiaryBuffDataExcelConfig *const)(v3 + 528),
                 row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 624, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 624);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 624, &unk_1ABFF160);
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
              "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
              "loadRogueDiaryBuffDataExcelConfig",
              1138);
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
            v24 = std::move<data::RogueDiaryBuffDataExcelConfig &>((data::RogueDiaryBuffDataExcelConfig *)(v3 + 528));
            v27 = std::unordered_map<unsigned int,data::RogueDiaryBuffDataExcelConfig>::emplace<unsigned int &,data::RogueDiaryBuffDataExcelConfig>(
                    &this->rogue_diary_buff_data_excel_config_map,
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
                "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
                "loadRogueDiaryBuffDataExcelConfig",
                1143);
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
            && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 272, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 272),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
            "loadRogueDiaryBuffDataExcelConfig",
            1131);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 272),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
          *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::RogueDiaryBuffDataExcelConfig::~RogueDiaryBuffDataExcelConfig((data::RogueDiaryBuffDataExcelConfig *const)(v3 + 528));
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

// Line 1152: range 00000000137E877E-00000000137E98C1
int32_t __cdecl data::ActivityRogueDiaryExcelConfigMgrBase::loadRogueDiaryCardWeightExcelConfig(
        data::ActivityRogueDiaryExcelConfigMgrBase *const this,
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
  data::RogueDiaryCardWeightExcelConfig *v27; // rax
  unsigned int *v28; // rcx
  data::RogueDiaryCardWeightExcelConfig *v29; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryCardWeightExcelConfig>,false,false>,bool> v30; // rax
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
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 6 r:1167 64 4 9 <unknown> 80 24 9 data:1170 144 32 10 paths:1153 208 32"
                        " 9 <unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 32 "
                        "9 <unknown> 592 376 25 debug_message_stream:1178 1040 32880 13 txt_file:1161";
  *(_QWORD *)(v3 + 16) = data::ActivityRogueDiaryExcelConfigMgrBase::loadRogueDiaryCardWeightExcelConfig;
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
    "/txt/RogueDiaryCardWeightData.txt",
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
        "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
        "loadRogueDiaryCardWeightExcelConfig",
        1164);
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
        v15 = &`vtable for'data::RogueDiaryCardWeightExcelConfig + 2;
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
          if ( data::RogueDiaryCardWeightExcelConfig::init(
                 (data::RogueDiaryCardWeightExcelConfig *const)(v3 + 80),
                 row_ptr) )
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
              "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
              "loadRogueDiaryCardWeightExcelConfig",
              1180);
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
            v27 = std::move<data::RogueDiaryCardWeightExcelConfig &>((data::RogueDiaryCardWeightExcelConfig *)(v3 + 80));
            v30 = std::unordered_map<unsigned int,data::RogueDiaryCardWeightExcelConfig>::emplace<unsigned int &,data::RogueDiaryCardWeightExcelConfig>(
                    &this->rogue_diary_card_weight_excel_config_map,
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
                "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
                "loadRogueDiaryCardWeightExcelConfig",
                1185);
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
            "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
            "loadRogueDiaryCardWeightExcelConfig",
            1173);
          v17 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 336),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
          *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v18 = 0;
        }
        data::RogueDiaryCardWeightExcelConfig::~RogueDiaryCardWeightExcelConfig((data::RogueDiaryCardWeightExcelConfig *const)(v3 + 80));
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

// Line 1194: range 00000000137E98C2-00000000137EAA3C
int32_t __cdecl data::ActivityRogueDiaryExcelConfigMgrBase::loadRogueDiaryCardDepotExcelConfig(
        data::ActivityRogueDiaryExcelConfigMgrBase *const this,
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
  data::RogueDiaryCardDepotExcelConfig *v27; // rax
  unsigned int *v28; // rcx
  data::RogueDiaryCardDepotExcelConfig *v29; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryCardDepotExcelConfig>,false,false>,bool> v30; // rax
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
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 6 r:1209 64 4 9 <unknown> 80 32 10 paths:1195 144 32 9 <unknown> 208 32"
                        " 9 <unknown> 272 32 9 data:1212 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 32 "
                        "9 <unknown> 592 376 25 debug_message_stream:1220 1040 32880 13 txt_file:1203";
  *(_QWORD *)(v3 + 16) = data::ActivityRogueDiaryExcelConfigMgrBase::loadRogueDiaryCardDepotExcelConfig;
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
    "/txt/RogueDiaryCardPoolData.txt",
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
        "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
        "loadRogueDiaryCardDepotExcelConfig",
        1206);
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
        v12 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v3 + 1040));
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
        if ( v12 <= *(_DWORD *)(v3 + 48) )
          break;
        v13 = *(unsigned int *)(v3 + 48);
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v3 + 1040), v13);
        *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
        v14 = &`vtable for'data::RogueDiaryCardDepotExcelConfig + 2;
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
          if ( data::RogueDiaryCardDepotExcelConfig::init(
                 (data::RogueDiaryCardDepotExcelConfig *const)(v3 + 272),
                 row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 592, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 592);
            v19 = std::operator<<<std::char_traits<char>>(v3 + 592, &unk_1ABFF160);
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
              "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
              "loadRogueDiaryCardDepotExcelConfig",
              1222);
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
            v27 = std::move<data::RogueDiaryCardDepotExcelConfig &>((data::RogueDiaryCardDepotExcelConfig *)(v3 + 272));
            v30 = std::unordered_map<unsigned int,data::RogueDiaryCardDepotExcelConfig>::emplace<unsigned int &,data::RogueDiaryCardDepotExcelConfig>(
                    &this->rogue_diary_card_depot_excel_config_map,
                    (unsigned int *)(v3 + 280),
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
                "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
                "loadRogueDiaryCardDepotExcelConfig",
                1227);
              v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 528),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v32 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v31, (const char (*)[9])byte_1ABFF260);
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
            "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
            "loadRogueDiaryCardDepotExcelConfig",
            1215);
          v17 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 336),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
          *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v18 = 0;
        }
        data::RogueDiaryCardDepotExcelConfig::~RogueDiaryCardDepotExcelConfig((data::RogueDiaryCardDepotExcelConfig *const)(v3 + 272));
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

// Line 1236: range 00000000137EAA3E-00000000137EBB39
int32_t __cdecl data::ActivityRogueDiaryExcelConfigMgrBase::loadRogueDiaryPreviewExcelConfig(
        data::ActivityRogueDiaryExcelConfigMgrBase *const this,
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
  data::RogueDiaryPreviewExcelConfig *v27; // rax
  unsigned int *v28; // rcx
  data::RogueDiaryPreviewExcelConfig *v29; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryPreviewExcelConfig>,false,false>,bool> v30; // rax
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
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 6 r:1251 64 4 9 <unknown> 80 24 9 data:1254 144 32 10 paths:1237 208 32"
                        " 9 <unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 32 "
                        "9 <unknown> 592 376 25 debug_message_stream:1262 1040 32880 13 txt_file:1245";
  *(_QWORD *)(v3 + 16) = data::ActivityRogueDiaryExcelConfigMgrBase::loadRogueDiaryPreviewExcelConfig;
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
    "/txt/RogueDiaryPreviewData.txt",
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
        "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
        "loadRogueDiaryPreviewExcelConfig",
        1248);
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
        v15 = &`vtable for'data::RogueDiaryPreviewExcelConfig + 2;
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
          if ( data::RogueDiaryPreviewExcelConfig::init((data::RogueDiaryPreviewExcelConfig *const)(v3 + 80), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 592, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 592);
            v19 = std::operator<<<std::char_traits<char>>(v3 + 592, &unk_1ABFFF80);
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
              "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
              "loadRogueDiaryPreviewExcelConfig",
              1264);
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
            v27 = std::move<data::RogueDiaryPreviewExcelConfig &>((data::RogueDiaryPreviewExcelConfig *)(v3 + 80));
            v30 = std::unordered_map<unsigned int,data::RogueDiaryPreviewExcelConfig>::emplace<unsigned int &,data::RogueDiaryPreviewExcelConfig>(
                    &this->rogue_diary_preview_excel_config_map,
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
                "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
                "loadRogueDiaryPreviewExcelConfig",
                1269);
              v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 528),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v32 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                      v31,
                      (const char (*)[17])byte_1ABFFFC0);
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
            "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
            "loadRogueDiaryPreviewExcelConfig",
            1257);
          v17 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 336),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
          *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v18 = 0;
        }
        data::RogueDiaryPreviewExcelConfig::~RogueDiaryPreviewExcelConfig((data::RogueDiaryPreviewExcelConfig *const)(v3 + 80));
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

// Line 1278: range 00000000137EBB3A-00000000137ECC35
int32_t __cdecl data::ActivityRogueDiaryExcelConfigMgrBase::loadRogueDiaryResourceExcelConfig(
        data::ActivityRogueDiaryExcelConfigMgrBase *const this,
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
  data::RogueDiaryResourceExcelConfig *v27; // rax
  unsigned int *v28; // rcx
  data::RogueDiaryResourceExcelConfig *v29; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryResourceExcelConfig>,false,false>,bool> v30; // rax
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
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 6 r:1293 64 4 9 <unknown> 80 24 9 data:1296 144 32 10 paths:1279 208 32"
                        " 9 <unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 32 "
                        "9 <unknown> 592 376 25 debug_message_stream:1304 1040 32880 13 txt_file:1287";
  *(_QWORD *)(v3 + 16) = data::ActivityRogueDiaryExcelConfigMgrBase::loadRogueDiaryResourceExcelConfig;
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
    "/txt/RogueDiaryResourceData.txt",
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
        "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
        "loadRogueDiaryResourceExcelConfig",
        1290);
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
        v15 = &`vtable for'data::RogueDiaryResourceExcelConfig + 2;
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
          if ( data::RogueDiaryResourceExcelConfig::init((data::RogueDiaryResourceExcelConfig *const)(v3 + 80), row_ptr) )
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
              "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
              "loadRogueDiaryResourceExcelConfig",
              1306);
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
            v27 = std::move<data::RogueDiaryResourceExcelConfig &>((data::RogueDiaryResourceExcelConfig *)(v3 + 80));
            v30 = std::unordered_map<unsigned int,data::RogueDiaryResourceExcelConfig>::emplace<unsigned int &,data::RogueDiaryResourceExcelConfig>(
                    &this->rogue_diary_resource_excel_config_map,
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
                "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
                "loadRogueDiaryResourceExcelConfig",
                1311);
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
            "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
            "loadRogueDiaryResourceExcelConfig",
            1299);
          v17 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 336),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
          *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v18 = 0;
        }
        data::RogueDiaryResourceExcelConfig::~RogueDiaryResourceExcelConfig((data::RogueDiaryResourceExcelConfig *const)(v3 + 80));
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

// Line 1320: range 00000000137ECC36-00000000137EDCD9
int32_t __cdecl data::ActivityRogueDiaryExcelConfigMgrBase::loadRogueDiaryPortalExcelConfig(
        data::ActivityRogueDiaryExcelConfigMgrBase *const this,
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
  data::RogueDiaryPortalExcelConfig *v25; // rax
  unsigned int *v26; // rcx
  data::RogueDiaryPortalExcelConfig *v27; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryPortalExcelConfig>,false,false>,bool> v28; // rax
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
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 6 r:1335 64 4 9 <unknown> 80 16 9 data:1338 112 32 10 paths:1321 176 32"
                        " 9 <unknown> 240 32 9 <unknown> 304 32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496 32 "
                        "9 <unknown> 560 376 25 debug_message_stream:1346 1008 32880 13 txt_file:1329";
  *(_QWORD *)(v3 + 16) = data::ActivityRogueDiaryExcelConfigMgrBase::loadRogueDiaryPortalExcelConfig;
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
    "/txt/RogueDiaryPortalData.txt",
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
        "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
        "loadRogueDiaryPortalExcelConfig",
        1332);
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v3 + 240),
             (const char (*)[8])byte_1ABFF0A0);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1ABFF0E0);
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
        v14 = &`vtable for'data::RogueDiaryPortalExcelConfig + 2;
        if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 80, v13);
        *(_QWORD *)(v3 + 80) = v14;
        if ( *(_BYTE *)(((v3 + 88) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 88) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 88, v13);
        *(_DWORD *)(v3 + 88) = 0;
        if ( *(_BYTE *)(((v3 + 92) >> 3) + 0x7FFF8000) != 0
          && (char)(((v3 + 92) & 7) + 3) >= *(_BYTE *)(((v3 + 92) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v3 + 92, (((_BYTE)v3 + 92) & 7u) + 3);
        }
        *(_DWORD *)(v3 + 92) = 0;
        if ( row_ptr )
        {
          if ( data::RogueDiaryPortalExcelConfig::init((data::RogueDiaryPortalExcelConfig *const)(v3 + 80), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 560, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 560);
            v17 = std::operator<<<std::char_traits<char>>(v3 + 560, &unk_1AC00360);
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
              "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
              "loadRogueDiaryPortalExcelConfig",
              1348);
            v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 368),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v19 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v18, (const char (*)[2])"<");
            v20 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, __for_begin);
            v21 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v20,
                    (const char (*)[11])byte_1ABFF1E0);
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
                    (const char (*)[13])byte_1ABFF220);
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
            v25 = std::move<data::RogueDiaryPortalExcelConfig &>((data::RogueDiaryPortalExcelConfig *)(v3 + 80));
            v28 = std::unordered_map<unsigned int,data::RogueDiaryPortalExcelConfig>::emplace<unsigned int &,data::RogueDiaryPortalExcelConfig>(
                    &this->rogue_diary_portal_excel_config_map,
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
                "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
                "loadRogueDiaryPortalExcelConfig",
                1353);
              v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 496),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v30 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v29,
                      (const char (*)[14])byte_1AC003A0);
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
            "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
            "loadRogueDiaryPortalExcelConfig",
            1341);
          v15 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 304),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 304));
          *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v16 = 0;
        }
        data::RogueDiaryPortalExcelConfig::~RogueDiaryPortalExcelConfig((data::RogueDiaryPortalExcelConfig *const)(v3 + 80));
        *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) = -1800;
        if ( v16 != 1 )
        {
          v31 = 0;
          goto LABEL_51;
        }
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
      }
      v31 = 1;
LABEL_51:
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      v10 = v31 == 1;
    }
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v3 + 1008));
    __asan_poison_stack_memory(v3 + 1008, 32880LL);
    if ( !v10 )
      goto LABEL_55;
  }
  v2 = 0;
LABEL_55:
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

// Line 1362: range 00000000137EDCDA-00000000137EE9EF
int32_t __cdecl data::ActivityRogueDiaryExcelConfigMgrBase::loadConfig(
        data::ActivityRogueDiaryExcelConfigMgrBase *const this,
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
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)data::ActivityRogueDiaryExcelConfigMgrBase::loadConfig;
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
  if ( data::ActivityRogueDiaryExcelConfigMgrBase::loadRogueDiaryStageExcelConfig(this, config) )
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
      "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
      "loadConfig",
      1365);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      v5,
      (const char (*)[38])"loadRogueDiaryStageExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( data::ActivityRogueDiaryExcelConfigMgrBase::loadRogueDiaryDungeonExcelConfig(this, config) )
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
      "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
      "loadConfig",
      1370);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
      v7,
      (const char (*)[40])"loadRogueDiaryDungeonExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( data::ActivityRogueDiaryExcelConfigMgrBase::loadRogueDiaryRoundRoomExcelConfig(this, config) )
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
      "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
      "loadConfig",
      1375);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
      v8,
      (const char (*)[42])"loadRogueDiaryRoundRoomExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else if ( data::ActivityRogueDiaryExcelConfigMgrBase::loadRogueDiaryRoomExcelConfig(this, config) )
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
      "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
      "loadConfig",
      1380);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      v9,
      (const char (*)[37])"loadRogueDiaryRoomExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 7);
    result = -1;
  }
  else if ( data::ActivityRogueDiaryExcelConfigMgrBase::loadRogueDiaryBuffDataExcelConfig(this, config) )
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
      "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
      "loadConfig",
      1385);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 9, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      v10,
      (const char (*)[41])"loadRogueDiaryBuffDataExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 9);
    result = -1;
  }
  else if ( data::ActivityRogueDiaryExcelConfigMgrBase::loadRogueDiaryCardWeightExcelConfig(this, config) )
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
      "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
      "loadConfig",
      1390);
    v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 11,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
      v11,
      (const char (*)[43])"loadRogueDiaryCardWeightExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 11);
    result = -1;
  }
  else if ( data::ActivityRogueDiaryExcelConfigMgrBase::loadRogueDiaryCardDepotExcelConfig(this, config) )
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
      "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
      "loadConfig",
      1395);
    v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 13,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
      v12,
      (const char (*)[42])"loadRogueDiaryCardDepotExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 13);
    result = -1;
  }
  else if ( data::ActivityRogueDiaryExcelConfigMgrBase::loadRogueDiaryPreviewExcelConfig(this, config) )
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
      "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
      "loadConfig",
      1400);
    v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 15,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
      v13,
      (const char (*)[40])"loadRogueDiaryPreviewExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 15);
    result = -1;
  }
  else if ( data::ActivityRogueDiaryExcelConfigMgrBase::loadRogueDiaryResourceExcelConfig(this, config) )
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
      "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
      "loadConfig",
      1405);
    v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 17,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      v14,
      (const char (*)[41])"loadRogueDiaryResourceExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 17);
    result = -1;
  }
  else if ( data::ActivityRogueDiaryExcelConfigMgrBase::loadRogueDiaryPortalExcelConfig(this, config) )
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
      "./src/txt_data_auto/ActivityRogueDiaryExcelConfig.gen.cpp",
      "loadConfig",
      1410);
    v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 19,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      v15,
      (const char (*)[39])"loadRogueDiaryPortalExcelConfig failed");
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

// Line 1417: range 00000000137EE9F0-00000000137EEA02
int32_t __cdecl data::ActivityRogueDiaryExcelConfigMgrBase::rewriteConfig(
        data::ActivityRogueDiaryExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 1422: range 00000000137EEA04-00000000137EEA16
int32_t __cdecl data::ActivityRogueDiaryExcelConfigMgrBase::finalConfig(
        data::ActivityRogueDiaryExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 1427: range 00000000137EEA18-00000000137EEBD3
data::RogueDiaryStageExcelConfig *__fastcall data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryStageExcelConfig(
        data::ActivityRogueDiaryExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::RogueDiaryStageExcelConfigMap *p_rogue_diary_stage_excel_config_map; // rdx
  data::RogueDiaryStageExcelConfigMap *v6; // rdx
  bool v7; // al
  data::RogueDiaryStageExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 id:1426 64 8 9 iter:1428 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryStageExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_rogue_diary_stage_excel_config_map = &this->rogue_diary_stage_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::RogueDiaryStageExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::RogueDiaryStageExcelConfig>::find(
                                                                                                p_rogue_diary_stage_excel_config_map,
                                                                                                (const std::unordered_map<unsigned int,data::RogueDiaryStageExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->rogue_diary_stage_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::RogueDiaryStageExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::RogueDiaryStageExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::RogueDiaryStageExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryStageExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryStageExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryStageExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryStageExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1440: range 00000000137EEBD4-00000000137EED8F
const data::RogueDiaryStageExcelConfig *__fastcall data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryStageExcelConfig(
        const data::ActivityRogueDiaryExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::RogueDiaryStageExcelConfigMap *p_rogue_diary_stage_excel_config_map; // rdx
  data::RogueDiaryStageExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::RogueDiaryStageExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 id:1439 64 8 9 iter:1441 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryStageExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_rogue_diary_stage_excel_config_map = &this->rogue_diary_stage_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::RogueDiaryStageExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::RogueDiaryStageExcelConfig>::find(p_rogue_diary_stage_excel_config_map, (const std::unordered_map<unsigned int,data::RogueDiaryStageExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->rogue_diary_stage_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::RogueDiaryStageExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::RogueDiaryStageExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::RogueDiaryStageExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryStageExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryStageExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RogueDiaryStageExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RogueDiaryStageExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1453: range 00000000137EED90-00000000137EEF4B
data::RogueDiaryDungeonExcelConfig *__fastcall data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryDungeonExcelConfig(
        data::ActivityRogueDiaryExcelConfigMgrBase *const this,
        __int64 dungeon_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::RogueDiaryDungeonExcelConfigMap *p_rogue_diary_dungeon_excel_config_map; // rdx
  data::RogueDiaryDungeonExcelConfigMap *v6; // rdx
  bool v7; // al
  data::RogueDiaryDungeonExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 dungeon_id:1452 64 8 9 iter:1454 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryDungeonExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  p_rogue_diary_dungeon_excel_config_map = &this->rogue_diary_dungeon_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, dungeon_id);
  *(std::unordered_map<unsigned int,data::RogueDiaryDungeonExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::RogueDiaryDungeonExcelConfig>::find(
                                                                                                  p_rogue_diary_dungeon_excel_config_map,
                                                                                                  (const std::unordered_map<unsigned int,data::RogueDiaryDungeonExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->rogue_diary_dungeon_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::RogueDiaryDungeonExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::RogueDiaryDungeonExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::RogueDiaryDungeonExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryDungeonExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryDungeonExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryDungeonExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryDungeonExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1466: range 00000000137EEF4C-00000000137EF107
const data::RogueDiaryDungeonExcelConfig *__fastcall data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryDungeonExcelConfig(
        const data::ActivityRogueDiaryExcelConfigMgrBase *const this,
        __int64 dungeon_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::RogueDiaryDungeonExcelConfigMap *p_rogue_diary_dungeon_excel_config_map; // rdx
  data::RogueDiaryDungeonExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::RogueDiaryDungeonExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 dungeon_id:1465 64 8 9 iter:1467 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryDungeonExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  p_rogue_diary_dungeon_excel_config_map = &this->rogue_diary_dungeon_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, dungeon_id);
  *(std::unordered_map<unsigned int,data::RogueDiaryDungeonExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::RogueDiaryDungeonExcelConfig>::find(p_rogue_diary_dungeon_excel_config_map, (const std::unordered_map<unsigned int,data::RogueDiaryDungeonExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->rogue_diary_dungeon_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::RogueDiaryDungeonExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::RogueDiaryDungeonExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::RogueDiaryDungeonExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryDungeonExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryDungeonExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RogueDiaryDungeonExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RogueDiaryDungeonExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1479: range 00000000137EF108-00000000137EF2C3
data::RogueDiaryRoundRoomExcelConfig *__fastcall data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryRoundRoomExcelConfig(
        data::ActivityRogueDiaryExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::RogueDiaryRoundRoomExcelConfigMap *p_rogue_diary_round_room_excel_config_map; // rdx
  data::RogueDiaryRoundRoomExcelConfigMap *v6; // rdx
  bool v7; // al
  data::RogueDiaryRoundRoomExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 id:1478 64 8 9 iter:1480 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryRoundRoomExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_rogue_diary_round_room_excel_config_map = &this->rogue_diary_round_room_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::RogueDiaryRoundRoomExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::RogueDiaryRoundRoomExcelConfig>::find(
                                                                                                    p_rogue_diary_round_room_excel_config_map,
                                                                                                    (const std::unordered_map<unsigned int,data::RogueDiaryRoundRoomExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->rogue_diary_round_room_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::RogueDiaryRoundRoomExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::RogueDiaryRoundRoomExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::RogueDiaryRoundRoomExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryRoundRoomExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryRoundRoomExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryRoundRoomExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryRoundRoomExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1492: range 00000000137EF2C4-00000000137EF47F
const data::RogueDiaryRoundRoomExcelConfig *__fastcall data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryRoundRoomExcelConfig(
        const data::ActivityRogueDiaryExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::RogueDiaryRoundRoomExcelConfigMap *p_rogue_diary_round_room_excel_config_map; // rdx
  data::RogueDiaryRoundRoomExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::RogueDiaryRoundRoomExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 id:1491 64 8 9 iter:1493 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryRoundRoomExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_rogue_diary_round_room_excel_config_map = &this->rogue_diary_round_room_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::RogueDiaryRoundRoomExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::RogueDiaryRoundRoomExcelConfig>::find(p_rogue_diary_round_room_excel_config_map, (const std::unordered_map<unsigned int,data::RogueDiaryRoundRoomExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->rogue_diary_round_room_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::RogueDiaryRoundRoomExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::RogueDiaryRoundRoomExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::RogueDiaryRoundRoomExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryRoundRoomExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryRoundRoomExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RogueDiaryRoundRoomExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RogueDiaryRoundRoomExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1505: range 00000000137EF480-00000000137EF641
data::RogueDiaryRoomExcelConfig *__fastcall data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryRoomExcelConfig(
        data::ActivityRogueDiaryExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::RogueDiaryRoomExcelConfigMap *p_rogue_diary_room_excel_config_map; // rdx
  data::RogueDiaryRoomExcelConfigMap *v6; // rdx
  bool v7; // al
  data::RogueDiaryRoomExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 id:1504 64 8 9 iter:1506 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryRoomExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_rogue_diary_room_excel_config_map = &this->rogue_diary_room_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::RogueDiaryRoomExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::RogueDiaryRoomExcelConfig>::find(
                                                                                               p_rogue_diary_room_excel_config_map,
                                                                                               (const std::unordered_map<unsigned int,data::RogueDiaryRoomExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->rogue_diary_room_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::RogueDiaryRoomExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::RogueDiaryRoomExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::RogueDiaryRoomExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryRoomExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryRoomExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryRoomExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryRoomExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1518: range 00000000137EF642-00000000137EF803
const data::RogueDiaryRoomExcelConfig *__fastcall data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryRoomExcelConfig(
        const data::ActivityRogueDiaryExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::RogueDiaryRoomExcelConfigMap *p_rogue_diary_room_excel_config_map; // rdx
  data::RogueDiaryRoomExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::RogueDiaryRoomExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 id:1517 64 8 9 iter:1519 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryRoomExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_rogue_diary_room_excel_config_map = &this->rogue_diary_room_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::RogueDiaryRoomExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::RogueDiaryRoomExcelConfig>::find(
                                                                                                     p_rogue_diary_room_excel_config_map,
                                                                                                     (const std::unordered_map<unsigned int,data::RogueDiaryRoomExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->rogue_diary_room_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::RogueDiaryRoomExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::RogueDiaryRoomExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::RogueDiaryRoomExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryRoomExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryRoomExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RogueDiaryRoomExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RogueDiaryRoomExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1531: range 00000000137EF804-00000000137EF9C5
data::RogueDiaryBuffDataExcelConfig *__fastcall data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryBuffDataExcelConfig(
        data::ActivityRogueDiaryExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::RogueDiaryBuffDataExcelConfigMap *p_rogue_diary_buff_data_excel_config_map; // rdx
  data::RogueDiaryBuffDataExcelConfigMap *v6; // rdx
  bool v7; // al
  data::RogueDiaryBuffDataExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 id:1530 64 8 9 iter:1532 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryBuffDataExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_rogue_diary_buff_data_excel_config_map = &this->rogue_diary_buff_data_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::RogueDiaryBuffDataExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::RogueDiaryBuffDataExcelConfig>::find(
                                                                                                   p_rogue_diary_buff_data_excel_config_map,
                                                                                                   (const std::unordered_map<unsigned int,data::RogueDiaryBuffDataExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->rogue_diary_buff_data_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::RogueDiaryBuffDataExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::RogueDiaryBuffDataExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::RogueDiaryBuffDataExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryBuffDataExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryBuffDataExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryBuffDataExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryBuffDataExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1544: range 00000000137EF9C6-00000000137EFB87
const data::RogueDiaryBuffDataExcelConfig *__fastcall data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryBuffDataExcelConfig(
        const data::ActivityRogueDiaryExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::RogueDiaryBuffDataExcelConfigMap *p_rogue_diary_buff_data_excel_config_map; // rdx
  data::RogueDiaryBuffDataExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::RogueDiaryBuffDataExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 id:1543 64 8 9 iter:1545 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryBuffDataExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_rogue_diary_buff_data_excel_config_map = &this->rogue_diary_buff_data_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::RogueDiaryBuffDataExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::RogueDiaryBuffDataExcelConfig>::find(p_rogue_diary_buff_data_excel_config_map, (const std::unordered_map<unsigned int,data::RogueDiaryBuffDataExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->rogue_diary_buff_data_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::RogueDiaryBuffDataExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::RogueDiaryBuffDataExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::RogueDiaryBuffDataExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryBuffDataExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryBuffDataExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RogueDiaryBuffDataExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RogueDiaryBuffDataExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1557: range 00000000137EFB88-00000000137EFD49
data::RogueDiaryCardWeightExcelConfig *__fastcall data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryCardWeightExcelConfig(
        data::ActivityRogueDiaryExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::RogueDiaryCardWeightExcelConfigMap *p_rogue_diary_card_weight_excel_config_map; // rdx
  data::RogueDiaryCardWeightExcelConfigMap *v6; // rdx
  bool v7; // al
  data::RogueDiaryCardWeightExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 id:1556 64 8 9 iter:1558 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryCardWeightExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_rogue_diary_card_weight_excel_config_map = &this->rogue_diary_card_weight_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::RogueDiaryCardWeightExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::RogueDiaryCardWeightExcelConfig>::find(
                                                                                                     p_rogue_diary_card_weight_excel_config_map,
                                                                                                     (const std::unordered_map<unsigned int,data::RogueDiaryCardWeightExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->rogue_diary_card_weight_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::RogueDiaryCardWeightExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::RogueDiaryCardWeightExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::RogueDiaryCardWeightExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryCardWeightExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryCardWeightExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryCardWeightExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryCardWeightExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1570: range 00000000137EFD4A-00000000137EFF0B
const data::RogueDiaryCardWeightExcelConfig *__fastcall data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryCardWeightExcelConfig(
        const data::ActivityRogueDiaryExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::RogueDiaryCardWeightExcelConfigMap *p_rogue_diary_card_weight_excel_config_map; // rdx
  data::RogueDiaryCardWeightExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::RogueDiaryCardWeightExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 id:1569 64 8 9 iter:1571 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryCardWeightExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_rogue_diary_card_weight_excel_config_map = &this->rogue_diary_card_weight_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::RogueDiaryCardWeightExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::RogueDiaryCardWeightExcelConfig>::find(p_rogue_diary_card_weight_excel_config_map, (const std::unordered_map<unsigned int,data::RogueDiaryCardWeightExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->rogue_diary_card_weight_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::RogueDiaryCardWeightExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::RogueDiaryCardWeightExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::RogueDiaryCardWeightExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryCardWeightExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryCardWeightExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RogueDiaryCardWeightExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RogueDiaryCardWeightExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1583: range 00000000137EFF0C-00000000137F00CD
data::RogueDiaryCardDepotExcelConfig *__fastcall data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryCardDepotExcelConfig(
        data::ActivityRogueDiaryExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::RogueDiaryCardDepotExcelConfigMap *p_rogue_diary_card_depot_excel_config_map; // rdx
  data::RogueDiaryCardDepotExcelConfigMap *v6; // rdx
  bool v7; // al
  data::RogueDiaryCardDepotExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 id:1582 64 8 9 iter:1584 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryCardDepotExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_rogue_diary_card_depot_excel_config_map = &this->rogue_diary_card_depot_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::RogueDiaryCardDepotExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::RogueDiaryCardDepotExcelConfig>::find(
                                                                                                    p_rogue_diary_card_depot_excel_config_map,
                                                                                                    (const std::unordered_map<unsigned int,data::RogueDiaryCardDepotExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->rogue_diary_card_depot_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::RogueDiaryCardDepotExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::RogueDiaryCardDepotExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::RogueDiaryCardDepotExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryCardDepotExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryCardDepotExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryCardDepotExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryCardDepotExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1596: range 00000000137F00CE-00000000137F028F
const data::RogueDiaryCardDepotExcelConfig *__fastcall data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryCardDepotExcelConfig(
        const data::ActivityRogueDiaryExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::RogueDiaryCardDepotExcelConfigMap *p_rogue_diary_card_depot_excel_config_map; // rdx
  data::RogueDiaryCardDepotExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::RogueDiaryCardDepotExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 id:1595 64 8 9 iter:1597 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryCardDepotExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_rogue_diary_card_depot_excel_config_map = &this->rogue_diary_card_depot_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::RogueDiaryCardDepotExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::RogueDiaryCardDepotExcelConfig>::find(p_rogue_diary_card_depot_excel_config_map, (const std::unordered_map<unsigned int,data::RogueDiaryCardDepotExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->rogue_diary_card_depot_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::RogueDiaryCardDepotExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::RogueDiaryCardDepotExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::RogueDiaryCardDepotExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryCardDepotExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryCardDepotExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RogueDiaryCardDepotExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RogueDiaryCardDepotExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1609: range 00000000137F0290-00000000137F0451
data::RogueDiaryPreviewExcelConfig *__fastcall data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryPreviewExcelConfig(
        data::ActivityRogueDiaryExcelConfigMgrBase *const this,
        __int64 activity_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::RogueDiaryPreviewExcelConfigMap *p_rogue_diary_preview_excel_config_map; // rdx
  data::RogueDiaryPreviewExcelConfigMap *v6; // rdx
  bool v7; // al
  data::RogueDiaryPreviewExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 16 activity_id:1608 64 8 9 iter:1610 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryPreviewExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = activity_id;
  p_rogue_diary_preview_excel_config_map = &this->rogue_diary_preview_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, activity_id);
  *(std::unordered_map<unsigned int,data::RogueDiaryPreviewExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::RogueDiaryPreviewExcelConfig>::find(
                                                                                                  p_rogue_diary_preview_excel_config_map,
                                                                                                  (const std::unordered_map<unsigned int,data::RogueDiaryPreviewExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->rogue_diary_preview_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::RogueDiaryPreviewExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::RogueDiaryPreviewExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::RogueDiaryPreviewExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryPreviewExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryPreviewExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryPreviewExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryPreviewExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1622: range 00000000137F0452-00000000137F0613
const data::RogueDiaryPreviewExcelConfig *__fastcall data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryPreviewExcelConfig(
        const data::ActivityRogueDiaryExcelConfigMgrBase *const this,
        __int64 activity_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::RogueDiaryPreviewExcelConfigMap *p_rogue_diary_preview_excel_config_map; // rdx
  data::RogueDiaryPreviewExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::RogueDiaryPreviewExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 16 activity_id:1621 64 8 9 iter:1623 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryPreviewExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = activity_id;
  p_rogue_diary_preview_excel_config_map = &this->rogue_diary_preview_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, activity_id);
  *(std::unordered_map<unsigned int,data::RogueDiaryPreviewExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::RogueDiaryPreviewExcelConfig>::find(p_rogue_diary_preview_excel_config_map, (const std::unordered_map<unsigned int,data::RogueDiaryPreviewExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->rogue_diary_preview_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::RogueDiaryPreviewExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::RogueDiaryPreviewExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::RogueDiaryPreviewExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryPreviewExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryPreviewExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RogueDiaryPreviewExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RogueDiaryPreviewExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1635: range 00000000137F0614-00000000137F07D5
data::RogueDiaryResourceExcelConfig *__fastcall data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryResourceExcelConfig(
        data::ActivityRogueDiaryExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::RogueDiaryResourceExcelConfigMap *p_rogue_diary_resource_excel_config_map; // rdx
  data::RogueDiaryResourceExcelConfigMap *v6; // rdx
  bool v7; // al
  data::RogueDiaryResourceExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 id:1634 64 8 9 iter:1636 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryResourceExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_rogue_diary_resource_excel_config_map = &this->rogue_diary_resource_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::RogueDiaryResourceExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::RogueDiaryResourceExcelConfig>::find(
                                                                                                   p_rogue_diary_resource_excel_config_map,
                                                                                                   (const std::unordered_map<unsigned int,data::RogueDiaryResourceExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->rogue_diary_resource_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::RogueDiaryResourceExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::RogueDiaryResourceExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::RogueDiaryResourceExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryResourceExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryResourceExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryResourceExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryResourceExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1648: range 00000000137F07D6-00000000137F0997
const data::RogueDiaryResourceExcelConfig *__fastcall data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryResourceExcelConfig(
        const data::ActivityRogueDiaryExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::RogueDiaryResourceExcelConfigMap *p_rogue_diary_resource_excel_config_map; // rdx
  data::RogueDiaryResourceExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::RogueDiaryResourceExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 id:1647 64 8 9 iter:1649 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryResourceExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_rogue_diary_resource_excel_config_map = &this->rogue_diary_resource_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::RogueDiaryResourceExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::RogueDiaryResourceExcelConfig>::find(p_rogue_diary_resource_excel_config_map, (const std::unordered_map<unsigned int,data::RogueDiaryResourceExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->rogue_diary_resource_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::RogueDiaryResourceExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::RogueDiaryResourceExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::RogueDiaryResourceExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryResourceExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryResourceExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RogueDiaryResourceExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RogueDiaryResourceExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1661: range 00000000137F0998-00000000137F0B59
data::RogueDiaryPortalExcelConfig *__fastcall data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryPortalExcelConfig(
        data::ActivityRogueDiaryExcelConfigMgrBase *const this,
        __int64 group_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::RogueDiaryPortalExcelConfigMap *p_rogue_diary_portal_excel_config_map; // rdx
  data::RogueDiaryPortalExcelConfigMap *v6; // rdx
  bool v7; // al
  data::RogueDiaryPortalExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 group_id:1660 64 8 9 iter:1662 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryPortalExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = group_id;
  p_rogue_diary_portal_excel_config_map = &this->rogue_diary_portal_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, group_id);
  *(std::unordered_map<unsigned int,data::RogueDiaryPortalExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::RogueDiaryPortalExcelConfig>::find(
                                                                                                 p_rogue_diary_portal_excel_config_map,
                                                                                                 (const std::unordered_map<unsigned int,data::RogueDiaryPortalExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->rogue_diary_portal_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::RogueDiaryPortalExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::RogueDiaryPortalExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::RogueDiaryPortalExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryPortalExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryPortalExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryPortalExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDiaryPortalExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1674: range 00000000137F0B5A-00000000137F0D1B
const data::RogueDiaryPortalExcelConfig *__fastcall data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryPortalExcelConfig(
        const data::ActivityRogueDiaryExcelConfigMgrBase *const this,
        __int64 group_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::RogueDiaryPortalExcelConfigMap *p_rogue_diary_portal_excel_config_map; // rdx
  data::RogueDiaryPortalExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::RogueDiaryPortalExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 group_id:1673 64 8 9 iter:1675 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityRogueDiaryExcelConfigMgrBase::findRogueDiaryPortalExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = group_id;
  p_rogue_diary_portal_excel_config_map = &this->rogue_diary_portal_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, group_id);
  *(std::unordered_map<unsigned int,data::RogueDiaryPortalExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::RogueDiaryPortalExcelConfig>::find(p_rogue_diary_portal_excel_config_map, (const std::unordered_map<unsigned int,data::RogueDiaryPortalExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->rogue_diary_portal_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::RogueDiaryPortalExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::RogueDiaryPortalExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::RogueDiaryPortalExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryPortalExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDiaryPortalExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RogueDiaryPortalExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RogueDiaryPortalExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp

// Line 12: range 00000000138FC468-00000000138FC7DB
const char *__fastcall data::enumValToStr(data::TalentPointType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::TalentPointType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::TalentPointType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
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
  map = data::getTalentPointTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::TalentPointType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::TalentPointType,std::pair<std::string,std::string>>::find(map, (const std::map<data::TalentPointType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::TalentPointType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::TalentPointType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::TalentPointType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::TalentPointType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
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
    result = "INVALID_TalentPointType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::TalentPointType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::TalentPointType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 24: range 00000000138FC7DC-00000000138FCD94
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::TalentPointType>,false,true>::pointer v10; // rax
  data::TalentPointType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::TalentPointType> *m; // [rsp+18h] [rbp-188h]
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
    m = data::getTalentPointTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::TalentPointType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::TalentPointType>::find(
                                                                                            m,
                                                                                            (const std::unordered_map<std::string,data::TalentPointType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::TalentPointType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::TalentPointType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::TalentPointType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::TalentPointType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::TalentPointType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
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
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::TalentPointType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::TalentPointType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
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

// Line 45: range 00000000138FCD95-00000000138FD75E
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::TalentPointType> *i; // r14
  unsigned __int64 v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::TalentPointType>,false,true>::pointer v12; // rax
  data::TalentPointType second; // ecx
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::TalentPointType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::TalentPointType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, e);
      *(_DWORD *)(v2 + 112) = 1;
      std::pair<std::string const,data::TalentPointType>::pair<char const(&)[13],data::TalentPointType,true>(
        (std::pair<const std::string,data::TalentPointType> *const)(v2 + 432),
        (const char (*)[13])byte_1AC2BF40,
        (data::TalentPointType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1AC2BF40);
      *(_DWORD *)(v2 + 128) = 2;
      std::pair<std::string const,data::TalentPointType>::pair<char const(&)[13],data::TalentPointType,true>(
        (std::pair<const std::string,data::TalentPointType> *const)(v2 + 472),
        (const char (*)[13])byte_1AC2BF80,
        (data::TalentPointType *)(v2 + 128));
      std::allocator<std::pair<std::string const,data::TalentPointType>>::allocator((std::allocator<std::pair<const std::string,data::TalentPointType> > *const)(v2 + 80));
      std::unordered_map<std::string,data::TalentPointType>::unordered_map(
        &data::enumStrToVal(char const*,data::TalentPointType &)::m,
        (std::initializer_list<std::pair<const std::string,data::TalentPointType> >)__PAIR128__(2LL, v2 + 432),
        0LL,
        (const std::unordered_map<std::string,data::TalentPointType>::hasher *)(v2 + 48),
        (const std::unordered_map<std::string,data::TalentPointType>::key_equal *)(v2 + 64),
        (const std::unordered_map<std::string,data::TalentPointType>::allocator_type *)(v2 + 80));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::TalentPointType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::TalentPointType>::~unordered_map,
        &data::enumStrToVal(char const*,data::TalentPointType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::TalentPointType>>::~allocator((std::allocator<std::pair<const std::string,data::TalentPointType> > *const)(v2 + 80));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::TalentPointType> *)(v2 + 512);
            i != (std::pair<const std::string,data::TalentPointType> *)(v2 + 432);
            std::pair<std::string const,data::TalentPointType>::~pair(i) )
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
    *(std::unordered_map<std::string,data::TalentPointType>::iterator *)(v2 + 144) = std::unordered_map<std::string,data::TalentPointType>::find(
                                                                                       &data::enumStrToVal(char const*,data::TalentPointType &)::m,
                                                                                       (const std::unordered_map<std::string,data::TalentPointType>::key_type *)(v2 + 304));
    std::string::~string((void *)(v2 + 304));
    *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 96);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, v2 + 304);
    *(std::unordered_map<std::string,data::TalentPointType>::iterator *)(v2 + 176) = std::unordered_map<std::string,data::TalentPointType>::end(&data::enumStrToVal(char const*,data::TalentPointType &)::m);
    v9 = (char *)(v2 + 176);
    v10 = std::__detail::operator==<std::pair<std::string const,data::TalentPointType>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::TalentPointType>,true> *)(v2 + 144),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::TalentPointType>,true> *)(v2 + 176));
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
        "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
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
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::TalentPointType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::TalentPointType>,false,true> *const)(v2 + 144));
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
      "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
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

// Line 70: range 00000000138FD75F-00000000138FD775
const char *__cdecl data::getDescription(data::TalentPointType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 75: range 00000000138FD776-00000000138FD92B
bool __cdecl data::isValidTalentPointType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::TalentPointType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::TalentPointType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidTalentPointType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getTalentPointTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::TalentPointType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::TalentPointType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getTalentPointTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::TalentPointType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::TalentPointType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::TalentPointType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::TalentPointType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::TalentPointType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 81: range 00000000138FD92C-00000000138FDA8D
bool __cdecl data::isValidTalentPointTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::TalentPointType> *v5; // rcx
  const std::unordered_map<std::string,data::TalentPointType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidTalentPointTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getTalentPointTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::TalentPointType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::TalentPointType>::end(v5);
  v6 = data::getTalentPointTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::TalentPointType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::TalentPointType>::find(
                                                                                          v6,
                                                                                          name);
  result = std::__detail::operator!=<std::pair<std::string const,data::TalentPointType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::TalentPointType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::TalentPointType>,true> *)(v2 + 64));
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

// Line 86: range 00000000138FDA8E-00000000138FDF50
const std::unordered_map<std::string,data::TalentPointType> *__cdecl data::getTalentPointTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::TalentPointType> *i; // r14
  const std::unordered_map<std::string,data::TalentPointType> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getTalentPointTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556927;
  v3[536862723] = -234556924;
  v3[536862727] = -218103808;
  v3[536862728] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getTalentPointTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getTalentPointTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string const,data::TalentPointType>::pair<char const(&)[18],data::TalentPointType,true>(
      (std::pair<const std::string,data::TalentPointType> *const)(v1 + 128),
      (const char (*)[18])"TALENT_POINT_NONE",
      (data::TalentPointType *)(v1 + 80));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, "TALENT_POINT_NONE");
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string const,data::TalentPointType>::pair<char const(&)[19],data::TalentPointType,true>(
      (std::pair<const std::string,data::TalentPointType> *const)(v1 + 168),
      (const char (*)[19])"TALENT_POINT_SMALL",
      (data::TalentPointType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "TALENT_POINT_SMALL");
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string const,data::TalentPointType>::pair<char const(&)[17],data::TalentPointType,true>(
      (std::pair<const std::string,data::TalentPointType> *const)(v1 + 208),
      (const char (*)[17])"TALENT_POINT_BIG",
      (data::TalentPointType *)(v1 + 112));
    std::allocator<std::pair<std::string const,data::TalentPointType>>::allocator((std::allocator<std::pair<const std::string,data::TalentPointType> > *const)(v1 + 64));
    std::unordered_map<std::string,data::TalentPointType>::unordered_map(
      &data::getTalentPointTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::TalentPointType> >)__PAIR128__(3LL, v1 + 128),
      0LL,
      (const std::unordered_map<std::string,data::TalentPointType>::hasher *)(v1 + 32),
      (const std::unordered_map<std::string,data::TalentPointType>::key_equal *)(v1 + 48),
      (const std::unordered_map<std::string,data::TalentPointType>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getTalentPointTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::TalentPointType>::~unordered_map,
      &data::getTalentPointTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::TalentPointType>>::~allocator((std::allocator<std::pair<const std::string,data::TalentPointType> > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::TalentPointType> *)(v1 + 248);
          i != (std::pair<const std::string,data::TalentPointType> *)(v1 + 128);
          std::pair<std::string const,data::TalentPointType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getTalentPointTypeNameMap[abi:cxx11](void)::m;
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

// Line 97: range 00000000138FDF51-00000000138FE64F
const std::map<data::TalentPointType,std::pair<std::string,std::string >> *__cdecl data::getTalentPointTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::TalentPointType,std::pair<std::string,std::string > > *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getTalentPointTypeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getTalentPointTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getTalentPointTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[18],true>(
      (std::pair<std::string,std::string > *const)(v1 + 128),
      (const char (*)[1])byte_1ABBC960,
      (const char (*)[18])"TALENT_POINT_NONE");
    std::pair<data::TalentPointType const,std::pair<std::string,std::string>>::pair<data::TalentPointType,true>(
      (std::pair<const data::TalentPointType,std::pair<std::string,std::string > > *const)(v1 + 416),
      (data::TalentPointType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[19],true>(
      (std::pair<std::string,std::string > *const)(v1 + 224),
      (const char (*)[13])byte_1AC2BF40,
      (const char (*)[19])"TALENT_POINT_SMALL");
    std::pair<data::TalentPointType const,std::pair<std::string,std::string>>::pair<data::TalentPointType,true>(
      (std::pair<const data::TalentPointType,std::pair<std::string,std::string > > *const)(v1 + 488),
      (data::TalentPointType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 224));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[17],true>(
      (std::pair<std::string,std::string > *const)(v1 + 320),
      (const char (*)[13])byte_1AC2BF80,
      (const char (*)[17])"TALENT_POINT_BIG");
    std::pair<data::TalentPointType const,std::pair<std::string,std::string>>::pair<data::TalentPointType,true>(
      (std::pair<const data::TalentPointType,std::pair<std::string,std::string > > *const)(v1 + 560),
      (data::TalentPointType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 320));
    std::allocator<std::pair<data::TalentPointType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::TalentPointType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    std::map<data::TalentPointType,std::pair<std::string,std::string>>::map(
      &data::getTalentPointTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::TalentPointType,std::pair<std::string,std::string > > >)__PAIR128__(3LL, v1 + 416),
      (const std::less<data::TalentPointType> *)(v1 + 48),
      (const std::map<data::TalentPointType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getTalentPointTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::TalentPointType,std::pair<std::string,std::string>>::~map,
      &data::getTalentPointTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::TalentPointType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::TalentPointType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::TalentPointType,std::pair<std::string,std::string > > *)(v1 + 632);
          i != (std::pair<const data::TalentPointType,std::pair<std::string,std::string > > *)(v1 + 416);
          std::pair<data::TalentPointType const,std::pair<std::string,std::string>>::~pair(i) )
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
  return &data::getTalentPointTypeEnumMap[abi:cxx11](void)::m;
};

// Line 108: range 00000000138FE650-00000000138FE9C3
const char *__fastcall data::enumValToStr(data::TalentFilterCond e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::TalentFilterCond,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::TalentFilterCond,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
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
  map = data::getTalentFilterCondEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::TalentFilterCond,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::TalentFilterCond,std::pair<std::string,std::string>>::find(map, (const std::map<data::TalentFilterCond,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::TalentFilterCond,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::TalentFilterCond,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::TalentFilterCond,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::TalentFilterCond,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
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
    result = "INVALID_TalentFilterCond";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::TalentFilterCond const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::TalentFilterCond,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 120: range 00000000138FE9C4-00000000138FEF7C
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::TalentFilterCond>,false,true>::pointer v10; // rax
  data::TalentFilterCond second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::TalentFilterCond> *m; // [rsp+18h] [rbp-188h]
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
    m = data::getTalentFilterCondNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::TalentFilterCond>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::TalentFilterCond>::find(
                                                                                             m,
                                                                                             (const std::unordered_map<std::string,data::TalentFilterCond>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::TalentFilterCond>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::TalentFilterCond>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::TalentFilterCond>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::TalentFilterCond>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::TalentFilterCond>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
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
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::TalentFilterCond>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::TalentFilterCond>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
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

// Line 141: range 00000000138FEF7D-00000000138FFC5A
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::TalentFilterCond> *i; // r14
  const char *v7; // rsi
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::TalentFilterCond>,false,true>::pointer v11; // rax
  data::TalentFilterCond second; // ecx
  char v13; // dl
  char v15[912]; // [rsp+20h] [rbp-390h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(864LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "18 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 4 9 <unknown> 128 4 9"
                        " <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unknown> 208 4 9 <unkn"
                        "own> 224 8 6 it:159 256 8 9 <unknown> 288 8 5 s:140 320 32 9 <unknown> 384 32 9 <unknown> 448 32"
                        " 9 <unknown> 512 280 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -234556927;
  v4[536862724] = -234556924;
  v4[536862725] = -234556924;
  v4[536862726] = -234556924;
  v4[536862727] = -218959360;
  v4[536862728] = -218959360;
  v4[536862729] = -218959360;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862744] = -218103808;
  v4[536862745] = -202116109;
  v4[536862746] = -202116109;
  *(_QWORD *)(v2 + 288) = s;
  if ( *(_QWORD *)(v2 + 288) )
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::TalentFilterCond &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::TalentFilterCond &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, e);
      *(_DWORD *)(v2 + 112) = 1;
      std::pair<std::string const,data::TalentFilterCond>::pair<char const(&)[16],data::TalentFilterCond,true>(
        (std::pair<const std::string,data::TalentFilterCond> *const)(v2 + 512),
        (const char (*)[16])byte_1AC2C300,
        (data::TalentFilterCond *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1AC2C300);
      *(_DWORD *)(v2 + 128) = 2;
      std::pair<std::string const,data::TalentFilterCond>::pair<char const(&)[16],data::TalentFilterCond,true>(
        (std::pair<const std::string,data::TalentFilterCond> *const)(v2 + 552),
        (const char (*)[16])byte_1AC2C340,
        (data::TalentFilterCond *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, byte_1AC2C340);
      *(_DWORD *)(v2 + 144) = 3;
      std::pair<std::string const,data::TalentFilterCond>::pair<char const(&)[16],data::TalentFilterCond,true>(
        (std::pair<const std::string,data::TalentFilterCond> *const)(v2 + 592),
        (const char (*)[16])byte_1AC2C380,
        (data::TalentFilterCond *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, byte_1AC2C380);
      *(_DWORD *)(v2 + 160) = 4;
      std::pair<std::string const,data::TalentFilterCond>::pair<char const(&)[16],data::TalentFilterCond,true>(
        (std::pair<const std::string,data::TalentFilterCond> *const)(v2 + 632),
        (const char (*)[16])byte_1AC2C3C0,
        (data::TalentFilterCond *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, byte_1AC2C3C0);
      *(_DWORD *)(v2 + 176) = 5;
      std::pair<std::string const,data::TalentFilterCond>::pair<char const(&)[16],data::TalentFilterCond,true>(
        (std::pair<const std::string,data::TalentFilterCond> *const)(v2 + 672),
        (const char (*)[16])byte_1AC2C400,
        (data::TalentFilterCond *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, byte_1AC2C400);
      *(_DWORD *)(v2 + 192) = 6;
      std::pair<std::string const,data::TalentFilterCond>::pair<char const(&)[16],data::TalentFilterCond,true>(
        (std::pair<const std::string,data::TalentFilterCond> *const)(v2 + 712),
        (const char (*)[16])byte_1AC2C440,
        (data::TalentFilterCond *)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 208, byte_1AC2C440);
      *(_DWORD *)(v2 + 208) = 7;
      std::pair<std::string const,data::TalentFilterCond>::pair<char const(&)[16],data::TalentFilterCond,true>(
        (std::pair<const std::string,data::TalentFilterCond> *const)(v2 + 752),
        (const char (*)[16])byte_1AC2C480,
        (data::TalentFilterCond *)(v2 + 208));
      std::allocator<std::pair<std::string const,data::TalentFilterCond>>::allocator((std::allocator<std::pair<const std::string,data::TalentFilterCond> > *const)(v2 + 80));
      std::unordered_map<std::string,data::TalentFilterCond>::unordered_map(
        &data::enumStrToVal(char const*,data::TalentFilterCond &)::m,
        (std::initializer_list<std::pair<const std::string,data::TalentFilterCond> >)__PAIR128__(7LL, v2 + 512),
        0LL,
        (const std::unordered_map<std::string,data::TalentFilterCond>::hasher *)(v2 + 48),
        (const std::unordered_map<std::string,data::TalentFilterCond>::key_equal *)(v2 + 64),
        (const std::unordered_map<std::string,data::TalentFilterCond>::allocator_type *)(v2 + 80));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::TalentFilterCond &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::TalentFilterCond>::~unordered_map,
        &data::enumStrToVal(char const*,data::TalentFilterCond &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::TalentFilterCond>>::~allocator((std::allocator<std::pair<const std::string,data::TalentFilterCond> > *const)(v2 + 80));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::TalentFilterCond> *)(v2 + 792);
            i != (std::pair<const std::string,data::TalentFilterCond> *)(v2 + 512);
            std::pair<std::string const,data::TalentFilterCond>::~pair(i) )
      {
        --i;
      }
      __asan_poison_stack_memory(v2 + 512, 280LL);
      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 96);
    v7 = *(const char **)(v2 + 288);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 384),
      v7,
      (const std::allocator<char> *)(v2 + 96));
    if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 224, v7);
    *(std::unordered_map<std::string,data::TalentFilterCond>::iterator *)(v2 + 224) = std::unordered_map<std::string,data::TalentFilterCond>::find(
                                                                                        &data::enumStrToVal(char const*,data::TalentFilterCond &)::m,
                                                                                        (const std::unordered_map<std::string,data::TalentFilterCond>::key_type *)(v2 + 384));
    std::string::~string((void *)(v2 + 384));
    *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 96);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 256, v2 + 384);
    *(std::unordered_map<std::string,data::TalentFilterCond>::iterator *)(v2 + 256) = std::unordered_map<std::string,data::TalentFilterCond>::end(&data::enumStrToVal(char const*,data::TalentFilterCond &)::m);
    v8 = (char *)(v2 + 256);
    v9 = std::__detail::operator==<std::pair<std::string const,data::TalentFilterCond>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::TalentFilterCond>,true> *)(v2 + 224),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::TalentFilterCond>,true> *)(v2 + 256));
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
        "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
        "enumStrToVal",
        162);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 448),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v10, (const char *const *)(v2 + 288));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v11 = std::__detail::_Node_iterator<std::pair<std::string const,data::TalentFilterCond>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::TalentFilterCond>,false,true> *const)(v2 + 224));
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
      "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
      "enumStrToVal",
      144);
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8068) = -168430091;
  }
  return result;
};

// Line 171: range 00000000138FFC5B-00000000138FFC71
const char *__cdecl data::getDescription(data::TalentFilterCond e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 176: range 00000000138FFC72-00000000138FFE27
bool __cdecl data::isValidTalentFilterCond(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::TalentFilterCond,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::TalentFilterCond,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidTalentFilterCond;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getTalentFilterCondEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::TalentFilterCond,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::TalentFilterCond,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getTalentFilterCondEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::TalentFilterCond,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::TalentFilterCond,std::pair<std::string,std::string>>::find(v6, (const std::map<data::TalentFilterCond,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::TalentFilterCond,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::TalentFilterCond,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 182: range 00000000138FFE28-00000000138FFF89
bool __cdecl data::isValidTalentFilterCondName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::TalentFilterCond> *v5; // rcx
  const std::unordered_map<std::string,data::TalentFilterCond> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidTalentFilterCondName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getTalentFilterCondNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::TalentFilterCond>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::TalentFilterCond>::end(v5);
  v6 = data::getTalentFilterCondNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::TalentFilterCond>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::TalentFilterCond>::find(
                                                                                           v6,
                                                                                           name);
  result = std::__detail::operator!=<std::pair<std::string const,data::TalentFilterCond>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::TalentFilterCond>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::TalentFilterCond>,true> *)(v2 + 64));
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

// Line 187: range 00000000138FFF8A-00000000139006FB
const std::unordered_map<std::string,data::TalentFilterCond> *__cdecl data::getTalentFilterCondNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::TalentFilterCond> *i; // r14
  char v6[656]; // [rsp+10h] [rbp-290h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(608LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "12 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 4 9"
                        " <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unknown> 208 4 9 <unkn"
                        "own> 224 320 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::getTalentFilterCondNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -234753535;
  v3[536862723] = -234556924;
  v3[536862724] = -234556924;
  v3[536862725] = -234556924;
  v3[536862726] = -234556924;
  v3[536862737] = -202116109;
  v3[536862738] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getTalentFilterCondNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getTalentFilterCondNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v0);
    *(_DWORD *)(v1 + 96) = 0;
    std::pair<std::string const,data::TalentFilterCond>::pair<char const(&)[19],data::TalentFilterCond,true>(
      (std::pair<const std::string,data::TalentFilterCond> *const)(v1 + 224),
      (const char (*)[19])"TALENT_FILTER_NONE",
      (data::TalentFilterCond *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "TALENT_FILTER_NONE");
    *(_DWORD *)(v1 + 112) = 1;
    std::pair<std::string const,data::TalentFilterCond>::pair<char const(&)[26],data::TalentFilterCond,true>(
      (std::pair<const std::string,data::TalentFilterCond> *const)(v1 + 264),
      (const char (*)[26])"TALENT_FILTER_FIRE_AVATAR",
      (data::TalentFilterCond *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, "TALENT_FILTER_FIRE_AVATAR");
    *(_DWORD *)(v1 + 128) = 2;
    std::pair<std::string const,data::TalentFilterCond>::pair<char const(&)[26],data::TalentFilterCond,true>(
      (std::pair<const std::string,data::TalentFilterCond> *const)(v1 + 304),
      (const char (*)[26])"TALENT_FILTER_ELEC_AVATAR",
      (data::TalentFilterCond *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, "TALENT_FILTER_ELEC_AVATAR");
    *(_DWORD *)(v1 + 144) = 3;
    std::pair<std::string const,data::TalentFilterCond>::pair<char const(&)[27],data::TalentFilterCond,true>(
      (std::pair<const std::string,data::TalentFilterCond> *const)(v1 + 344),
      (const char (*)[27])"TALENT_FILTER_WATER_AVATAR",
      (data::TalentFilterCond *)(v1 + 144));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, "TALENT_FILTER_WATER_AVATAR");
    *(_DWORD *)(v1 + 160) = 4;
    std::pair<std::string const,data::TalentFilterCond>::pair<char const(&)[27],data::TalentFilterCond,true>(
      (std::pair<const std::string,data::TalentFilterCond> *const)(v1 + 384),
      (const char (*)[27])"TALENT_FILTER_GRASS_AVATAR",
      (data::TalentFilterCond *)(v1 + 160));
    if ( *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 176, "TALENT_FILTER_GRASS_AVATAR");
    *(_DWORD *)(v1 + 176) = 5;
    std::pair<std::string const,data::TalentFilterCond>::pair<char const(&)[26],data::TalentFilterCond,true>(
      (std::pair<const std::string,data::TalentFilterCond> *const)(v1 + 424),
      (const char (*)[26])"TALENT_FILTER_WIND_AVATAR",
      (data::TalentFilterCond *)(v1 + 176));
    if ( *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 192, "TALENT_FILTER_WIND_AVATAR");
    *(_DWORD *)(v1 + 192) = 6;
    std::pair<std::string const,data::TalentFilterCond>::pair<char const(&)[25],data::TalentFilterCond,true>(
      (std::pair<const std::string,data::TalentFilterCond> *const)(v1 + 464),
      (const char (*)[25])"TALENT_FILTER_ICE_AVATAR",
      (data::TalentFilterCond *)(v1 + 192));
    if ( *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 208, "TALENT_FILTER_ICE_AVATAR");
    *(_DWORD *)(v1 + 208) = 7;
    std::pair<std::string const,data::TalentFilterCond>::pair<char const(&)[26],data::TalentFilterCond,true>(
      (std::pair<const std::string,data::TalentFilterCond> *const)(v1 + 504),
      (const char (*)[26])"TALENT_FILTER_ROCK_AVATAR",
      (data::TalentFilterCond *)(v1 + 208));
    std::allocator<std::pair<std::string const,data::TalentFilterCond>>::allocator((std::allocator<std::pair<const std::string,data::TalentFilterCond> > *const)(v1 + 80));
    std::unordered_map<std::string,data::TalentFilterCond>::unordered_map(
      &data::getTalentFilterCondNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::TalentFilterCond> >)__PAIR128__(8LL, v1 + 224),
      0LL,
      (const std::unordered_map<std::string,data::TalentFilterCond>::hasher *)(v1 + 48),
      (const std::unordered_map<std::string,data::TalentFilterCond>::key_equal *)(v1 + 64),
      (const std::unordered_map<std::string,data::TalentFilterCond>::allocator_type *)(v1 + 80));
    __cxa_guard_release(&`guard variable for'data::getTalentFilterCondNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::TalentFilterCond>::~unordered_map,
      &data::getTalentFilterCondNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::TalentFilterCond>>::~allocator((std::allocator<std::pair<const std::string,data::TalentFilterCond> > *const)(v1 + 80));
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::TalentFilterCond> *)(v1 + 544);
          i != (std::pair<const std::string,data::TalentFilterCond> *)(v1 + 224);
          std::pair<std::string const,data::TalentFilterCond>::~pair(i) )
    {
      --i;
    }
  }
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8044) = 0LL;
    memset(
      (void *)((unsigned __int64)(v3 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v3 + 2147450880 - (((_DWORD)v3 + 2147450888) & 0xFFFFFFF8) + 76) & 0xFFFFFFF8) >> 3));
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
    *(_DWORD *)((v1 >> 3) + 0x7FFF8048) = -168430091;
  }
  return &data::getTalentFilterCondNameMap[abi:cxx11](void)::m;
};

// Line 203: range 00000000139006FC-00000000139012FA
const std::map<data::TalentFilterCond,std::pair<std::string,std::string >> *__cdecl data::getTalentFilterCondEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::TalentFilterCond,std::pair<std::string,std::string > > *i; // r14
  _DWORD *v5; // rax
  _DWORD *v6; // rax
  _DWORD *v7; // rax
  _DWORD *v8; // rax
  _DWORD *v9; // rax
  _DWORD *v10; // rax
  _DWORD *v11; // rax
  char v13[1712]; // [rsp+10h] [rbp-6B0h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_5(1664LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "19 32 1 9 <unknown> 48 1 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 "
                        "<unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 64 9 <unkn"
                        "own> 288 64 9 <unknown> 384 64 9 <unknown> 480 64 9 <unknown> 576 64 9 <unknown> 672 64 9 <unkno"
                        "wn> 768 64 9 <unknown> 864 64 9 <unknown> 960 576 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::getTalentFilterCondEnumMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556924;
  v3[536862723] = -234556924;
  v3[536862724] = -234556924;
  v3[536862725] = -234556924;
  v3[536862728] = -218959118;
  v3[536862731] = -218959118;
  v3[536862734] = -218959118;
  v3[536862737] = -218959118;
  v3[536862740] = -218959118;
  v3[536862743] = -218959118;
  v3[536862746] = -218959118;
  v3[536862749] = -218959118;
  v3[536862768] = -202116109;
  v3[536862769] = -202116109;
  v3[536862770] = -202116109;
  v3[536862771] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getTalentFilterCondEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getTalentFilterCondEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 64, v0);
    *(_DWORD *)(v1 + 64) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[19],true>(
      (std::pair<std::string,std::string > *const)(v1 + 192),
      (const char (*)[1])byte_1ABBC960,
      (const char (*)[19])"TALENT_FILTER_NONE");
    std::pair<data::TalentFilterCond const,std::pair<std::string,std::string>>::pair<data::TalentFilterCond,true>(
      (std::pair<const data::TalentFilterCond,std::pair<std::string,std::string > > *const)(v1 + 960),
      (data::TalentFilterCond *)(v1 + 64),
      (const std::pair<std::string,std::string > *)(v1 + 192));
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v1 + 64);
    *(_DWORD *)(v1 + 80) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[16],char const(&)[26],true>(
      (std::pair<std::string,std::string > *const)(v1 + 288),
      (const char (*)[16])byte_1AC2C300,
      (const char (*)[26])"TALENT_FILTER_FIRE_AVATAR");
    std::pair<data::TalentFilterCond const,std::pair<std::string,std::string>>::pair<data::TalentFilterCond,true>(
      (std::pair<const data::TalentFilterCond,std::pair<std::string,std::string > > *const)(v1 + 1032),
      (data::TalentFilterCond *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 288));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[16],char const(&)[26],true>(
      (std::pair<std::string,std::string > *const)(v1 + 384),
      (const char (*)[16])byte_1AC2C340,
      (const char (*)[26])"TALENT_FILTER_ELEC_AVATAR");
    std::pair<data::TalentFilterCond const,std::pair<std::string,std::string>>::pair<data::TalentFilterCond,true>(
      (std::pair<const data::TalentFilterCond,std::pair<std::string,std::string > > *const)(v1 + 1104),
      (data::TalentFilterCond *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 384));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 3;
    std::pair<std::string,std::string>::pair<char const(&)[16],char const(&)[27],true>(
      (std::pair<std::string,std::string > *const)(v1 + 480),
      (const char (*)[16])byte_1AC2C380,
      (const char (*)[27])"TALENT_FILTER_WATER_AVATAR");
    std::pair<data::TalentFilterCond const,std::pair<std::string,std::string>>::pair<data::TalentFilterCond,true>(
      (std::pair<const data::TalentFilterCond,std::pair<std::string,std::string > > *const)(v1 + 1176),
      (data::TalentFilterCond *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 480));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, v1 + 112);
    *(_DWORD *)(v1 + 128) = 4;
    std::pair<std::string,std::string>::pair<char const(&)[16],char const(&)[27],true>(
      (std::pair<std::string,std::string > *const)(v1 + 576),
      (const char (*)[16])byte_1AC2C3C0,
      (const char (*)[27])"TALENT_FILTER_GRASS_AVATAR");
    std::pair<data::TalentFilterCond const,std::pair<std::string,std::string>>::pair<data::TalentFilterCond,true>(
      (std::pair<const data::TalentFilterCond,std::pair<std::string,std::string > > *const)(v1 + 1248),
      (data::TalentFilterCond *)(v1 + 128),
      (const std::pair<std::string,std::string > *)(v1 + 576));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, v1 + 128);
    *(_DWORD *)(v1 + 144) = 5;
    std::pair<std::string,std::string>::pair<char const(&)[16],char const(&)[26],true>(
      (std::pair<std::string,std::string > *const)(v1 + 672),
      (const char (*)[16])byte_1AC2C400,
      (const char (*)[26])"TALENT_FILTER_WIND_AVATAR");
    std::pair<data::TalentFilterCond const,std::pair<std::string,std::string>>::pair<data::TalentFilterCond,true>(
      (std::pair<const data::TalentFilterCond,std::pair<std::string,std::string > > *const)(v1 + 1320),
      (data::TalentFilterCond *)(v1 + 144),
      (const std::pair<std::string,std::string > *)(v1 + 672));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, v1 + 144);
    *(_DWORD *)(v1 + 160) = 6;
    std::pair<std::string,std::string>::pair<char const(&)[16],char const(&)[25],true>(
      (std::pair<std::string,std::string > *const)(v1 + 768),
      (const char (*)[16])byte_1AC2C440,
      (const char (*)[25])"TALENT_FILTER_ICE_AVATAR");
    std::pair<data::TalentFilterCond const,std::pair<std::string,std::string>>::pair<data::TalentFilterCond,true>(
      (std::pair<const data::TalentFilterCond,std::pair<std::string,std::string > > *const)(v1 + 1392),
      (data::TalentFilterCond *)(v1 + 160),
      (const std::pair<std::string,std::string > *)(v1 + 768));
    if ( *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 176, v1 + 160);
    *(_DWORD *)(v1 + 176) = 7;
    std::pair<std::string,std::string>::pair<char const(&)[16],char const(&)[26],true>(
      (std::pair<std::string,std::string > *const)(v1 + 864),
      (const char (*)[16])byte_1AC2C480,
      (const char (*)[26])"TALENT_FILTER_ROCK_AVATAR");
    std::pair<data::TalentFilterCond const,std::pair<std::string,std::string>>::pair<data::TalentFilterCond,true>(
      (std::pair<const data::TalentFilterCond,std::pair<std::string,std::string > > *const)(v1 + 1464),
      (data::TalentFilterCond *)(v1 + 176),
      (const std::pair<std::string,std::string > *)(v1 + 864));
    std::allocator<std::pair<data::TalentFilterCond const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::TalentFilterCond,std::pair<std::string,std::string > > > *const)(v1 + 48));
    std::map<data::TalentFilterCond,std::pair<std::string,std::string>>::map(
      &data::getTalentFilterCondEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::TalentFilterCond,std::pair<std::string,std::string > > >)__PAIR128__(8LL, v1 + 960),
      (const std::less<data::TalentFilterCond> *)(v1 + 32),
      (const std::map<data::TalentFilterCond,std::pair<std::string,std::string >>::allocator_type *)(v1 + 48));
    __cxa_guard_release(&`guard variable for'data::getTalentFilterCondEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::TalentFilterCond,std::pair<std::string,std::string>>::~map,
      &data::getTalentFilterCondEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::TalentFilterCond const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::TalentFilterCond,std::pair<std::string,std::string > > > *const)(v1 + 48));
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::TalentFilterCond,std::pair<std::string,std::string > > *)(v1 + 1536);
          i != (std::pair<const data::TalentFilterCond,std::pair<std::string,std::string > > *)(v1 + 960);
          std::pair<data::TalentFilterCond const,std::pair<std::string,std::string>>::~pair(i) )
    {
      --i;
    }
    __asan_poison_stack_memory(v1 + 960, 576LL);
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 864));
    v5 = (_DWORD *)(((v1 + 864) >> 3) + 2147450880);
    *v5 = -117901064;
    v5[1] = -117901064;
    *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 768));
    v6 = (_DWORD *)(((v1 + 768) >> 3) + 2147450880);
    *v6 = -117901064;
    v6[1] = -117901064;
    *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 672));
    v7 = (_DWORD *)(((v1 + 672) >> 3) + 2147450880);
    *v7 = -117901064;
    v7[1] = -117901064;
    *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 576));
    v8 = (_DWORD *)(((v1 + 576) >> 3) + 2147450880);
    *v8 = -117901064;
    v8[1] = -117901064;
    *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 480));
    v9 = (_DWORD *)(((v1 + 480) >> 3) + 2147450880);
    *v9 = -117901064;
    v9[1] = -117901064;
    *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 384));
    v10 = (_DWORD *)(((v1 + 384) >> 3) + 2147450880);
    *v10 = -117901064;
    v10[1] = -117901064;
    *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 288));
    v11 = (_DWORD *)(((v1 + 288) >> 3) + 2147450880);
    *v11 = -117901064;
    v11[1] = -117901064;
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 192));
  }
  if ( v13 == (char *)v1 )
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
    __asan_stack_free_5(v1, 1664LL, v13);
  }
  return &data::getTalentFilterCondEnumMap[abi:cxx11](void)::m;
};

// Line 219: range 00000000139012FB-000000001390166E
const char *__fastcall data::enumValToStr(data::ProudSkillType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::ProudSkillType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::ProudSkillType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 5 e:218 64 8 8 iter:221 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getProudSkillTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::ProudSkillType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::ProudSkillType,std::pair<std::string,std::string>>::find(map, (const std::map<data::ProudSkillType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::ProudSkillType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::ProudSkillType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::ProudSkillType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::ProudSkillType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
      "enumValToStr",
      224);
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
    result = "INVALID_ProudSkillType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::ProudSkillType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::ProudSkillType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 231: range 000000001390166F-0000000013901C27
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::ProudSkillType>,false,true>::pointer v10; // rax
  data::ProudSkillType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::ProudSkillType> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:240 96 8 9 <unknown> 128 8 5 s:230 160 32 9 <unknown> 224 32 9 <unk"
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
    m = data::getProudSkillTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::ProudSkillType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ProudSkillType>::find(
                                                                                           m,
                                                                                           (const std::unordered_map<std::string,data::ProudSkillType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::ProudSkillType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::ProudSkillType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::ProudSkillType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ProudSkillType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ProudSkillType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
        "enumNameToVal",
        243);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::ProudSkillType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::ProudSkillType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
      "enumNameToVal",
      234);
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

// Line 252: range 0000000013901C28-0000000013902683
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::ProudSkillType> *i; // r14
  unsigned __int64 v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::ProudSkillType>,false,true>::pointer v12; // rax
  data::ProudSkillType second; // ecx
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
                        " <unknown> 144 4 9 <unknown> 160 8 6 it:266 192 8 9 <unknown> 224 8 5 s:251 256 32 9 <unknown> 3"
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::ProudSkillType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::ProudSkillType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, e);
      *(_DWORD *)(v2 + 112) = 1;
      std::pair<std::string const,data::ProudSkillType>::pair<char const(&)[7],data::ProudSkillType,true>(
        (std::pair<const std::string,data::ProudSkillType> *const)(v2 + 448),
        (const char (*)[7])byte_1AC2C8E0,
        (data::ProudSkillType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1AC2C8E0);
      *(_DWORD *)(v2 + 128) = 2;
      std::pair<std::string const,data::ProudSkillType>::pair<char const(&)[7],data::ProudSkillType,true>(
        (std::pair<const std::string,data::ProudSkillType> *const)(v2 + 488),
        (const char (*)[7])byte_1AC2C920,
        (data::ProudSkillType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, byte_1AC2C920);
      *(_DWORD *)(v2 + 144) = 3;
      std::pair<std::string const,data::ProudSkillType>::pair<char const(&)[7],data::ProudSkillType,true>(
        (std::pair<const std::string,data::ProudSkillType> *const)(v2 + 528),
        (const char (*)[7])byte_1AC2C960,
        (data::ProudSkillType *)(v2 + 144));
      std::allocator<std::pair<std::string const,data::ProudSkillType>>::allocator((std::allocator<std::pair<const std::string,data::ProudSkillType> > *const)(v2 + 80));
      std::unordered_map<std::string,data::ProudSkillType>::unordered_map(
        &data::enumStrToVal(char const*,data::ProudSkillType &)::m,
        (std::initializer_list<std::pair<const std::string,data::ProudSkillType> >)__PAIR128__(3LL, v2 + 448),
        0LL,
        (const std::unordered_map<std::string,data::ProudSkillType>::hasher *)(v2 + 48),
        (const std::unordered_map<std::string,data::ProudSkillType>::key_equal *)(v2 + 64),
        (const std::unordered_map<std::string,data::ProudSkillType>::allocator_type *)(v2 + 80));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::ProudSkillType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::ProudSkillType>::~unordered_map,
        &data::enumStrToVal(char const*,data::ProudSkillType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::ProudSkillType>>::~allocator((std::allocator<std::pair<const std::string,data::ProudSkillType> > *const)(v2 + 80));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::ProudSkillType> *)(v2 + 568);
            i != (std::pair<const std::string,data::ProudSkillType> *)(v2 + 448);
            std::pair<std::string const,data::ProudSkillType>::~pair(i) )
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
    *(std::unordered_map<std::string,data::ProudSkillType>::iterator *)(v2 + 160) = std::unordered_map<std::string,data::ProudSkillType>::find(
                                                                                      &data::enumStrToVal(char const*,data::ProudSkillType &)::m,
                                                                                      (const std::unordered_map<std::string,data::ProudSkillType>::key_type *)(v2 + 320));
    std::string::~string((void *)(v2 + 320));
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 96);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, v2 + 320);
    *(std::unordered_map<std::string,data::ProudSkillType>::iterator *)(v2 + 192) = std::unordered_map<std::string,data::ProudSkillType>::end(&data::enumStrToVal(char const*,data::ProudSkillType &)::m);
    v9 = (char *)(v2 + 192);
    v10 = std::__detail::operator==<std::pair<std::string const,data::ProudSkillType>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ProudSkillType>,true> *)(v2 + 160),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ProudSkillType>,true> *)(v2 + 192));
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
        "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
        "enumStrToVal",
        269);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 384),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)(v2 + 224));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::ProudSkillType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::ProudSkillType>,false,true> *const)(v2 + 160));
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
      "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
      "enumStrToVal",
      255);
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

// Line 278: range 0000000013902684-000000001390269A
const char *__cdecl data::getDescription(data::ProudSkillType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 283: range 000000001390269B-0000000013902850
bool __cdecl data::isValidProudSkillType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::ProudSkillType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::ProudSkillType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:284 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidProudSkillType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getProudSkillTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::ProudSkillType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::ProudSkillType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getProudSkillTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::ProudSkillType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::ProudSkillType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::ProudSkillType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::ProudSkillType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::ProudSkillType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 289: range 0000000013902851-00000000139029B2
bool __cdecl data::isValidProudSkillTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::ProudSkillType> *v5; // rcx
  const std::unordered_map<std::string,data::ProudSkillType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidProudSkillTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getProudSkillTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::ProudSkillType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ProudSkillType>::end(v5);
  v6 = data::getProudSkillTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::ProudSkillType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::ProudSkillType>::find(
                                                                                         v6,
                                                                                         name);
  result = std::__detail::operator!=<std::pair<std::string const,data::ProudSkillType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ProudSkillType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ProudSkillType>,true> *)(v2 + 64));
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

// Line 294: range 00000000139029B3-0000000013902F12
const std::unordered_map<std::string,data::ProudSkillType> *__cdecl data::getProudSkillTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::ProudSkillType> *i; // r14
  const std::unordered_map<std::string,data::ProudSkillType> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getProudSkillTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -234753535;
  v3[536862723] = -234556924;
  v3[536862724] = -234556924;
  v3[536862730] = -202116109;
  v3[536862731] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getProudSkillTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getProudSkillTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v0);
    *(_DWORD *)(v1 + 96) = 0;
    std::pair<std::string const,data::ProudSkillType>::pair<char const(&)[17],data::ProudSkillType,true>(
      (std::pair<const std::string,data::ProudSkillType> *const)(v1 + 160),
      (const char (*)[17])"PROUD_SKILL_NONE",
      (data::ProudSkillType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "PROUD_SKILL_NONE");
    *(_DWORD *)(v1 + 112) = 1;
    std::pair<std::string const,data::ProudSkillType>::pair<char const(&)[17],data::ProudSkillType,true>(
      (std::pair<const std::string,data::ProudSkillType> *const)(v1 + 200),
      (const char (*)[17])"PROUD_SKILL_CORE",
      (data::ProudSkillType *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, "PROUD_SKILL_CORE");
    *(_DWORD *)(v1 + 128) = 2;
    std::pair<std::string const,data::ProudSkillType>::pair<char const(&)[21],data::ProudSkillType,true>(
      (std::pair<const std::string,data::ProudSkillType> *const)(v1 + 240),
      (const char (*)[21])"PROUD_SKILL_INHERENT",
      (data::ProudSkillType *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, "PROUD_SKILL_INHERENT");
    *(_DWORD *)(v1 + 144) = 3;
    std::pair<std::string const,data::ProudSkillType>::pair<char const(&)[19],data::ProudSkillType,true>(
      (std::pair<const std::string,data::ProudSkillType> *const)(v1 + 280),
      (const char (*)[19])"PROUD_SKILL_ACTIVE",
      (data::ProudSkillType *)(v1 + 144));
    std::allocator<std::pair<std::string const,data::ProudSkillType>>::allocator((std::allocator<std::pair<const std::string,data::ProudSkillType> > *const)(v1 + 80));
    std::unordered_map<std::string,data::ProudSkillType>::unordered_map(
      &data::getProudSkillTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::ProudSkillType> >)__PAIR128__(4LL, v1 + 160),
      0LL,
      (const std::unordered_map<std::string,data::ProudSkillType>::hasher *)(v1 + 48),
      (const std::unordered_map<std::string,data::ProudSkillType>::key_equal *)(v1 + 64),
      (const std::unordered_map<std::string,data::ProudSkillType>::allocator_type *)(v1 + 80));
    __cxa_guard_release(&`guard variable for'data::getProudSkillTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::ProudSkillType>::~unordered_map,
      &data::getProudSkillTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::ProudSkillType>>::~allocator((std::allocator<std::pair<const std::string,data::ProudSkillType> > *const)(v1 + 80));
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::ProudSkillType> *)(v1 + 320);
          i != (std::pair<const std::string,data::ProudSkillType> *)(v1 + 160);
          std::pair<std::string const,data::ProudSkillType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getProudSkillTypeNameMap[abi:cxx11](void)::m;
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

// Line 306: range 0000000013902F13-00000000139036E3
const std::map<data::ProudSkillType,std::pair<std::string,std::string >> *__cdecl data::getProudSkillTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::ProudSkillType,std::pair<std::string,std::string > > *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getProudSkillTypeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getProudSkillTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getProudSkillTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 64, v0);
    *(_DWORD *)(v1 + 64) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[17],true>(
      (std::pair<std::string,std::string > *const)(v1 + 128),
      (const char (*)[1])byte_1ABBC960,
      (const char (*)[17])"PROUD_SKILL_NONE");
    std::pair<data::ProudSkillType const,std::pair<std::string,std::string>>::pair<data::ProudSkillType,true>(
      (std::pair<const data::ProudSkillType,std::pair<std::string,std::string > > *const)(v1 + 512),
      (data::ProudSkillType *)(v1 + 64),
      (const std::pair<std::string,std::string > *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v1 + 64);
    *(_DWORD *)(v1 + 80) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[17],true>(
      (std::pair<std::string,std::string > *const)(v1 + 224),
      (const char (*)[7])byte_1AC2C8E0,
      (const char (*)[17])"PROUD_SKILL_CORE");
    std::pair<data::ProudSkillType const,std::pair<std::string,std::string>>::pair<data::ProudSkillType,true>(
      (std::pair<const data::ProudSkillType,std::pair<std::string,std::string > > *const)(v1 + 584),
      (data::ProudSkillType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 224));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 320),
      (const char (*)[7])byte_1AC2C920,
      (const char (*)[21])"PROUD_SKILL_INHERENT");
    std::pair<data::ProudSkillType const,std::pair<std::string,std::string>>::pair<data::ProudSkillType,true>(
      (std::pair<const data::ProudSkillType,std::pair<std::string,std::string > > *const)(v1 + 656),
      (data::ProudSkillType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 320));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 3;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[19],true>(
      (std::pair<std::string,std::string > *const)(v1 + 416),
      (const char (*)[7])byte_1AC2C960,
      (const char (*)[19])"PROUD_SKILL_ACTIVE");
    std::pair<data::ProudSkillType const,std::pair<std::string,std::string>>::pair<data::ProudSkillType,true>(
      (std::pair<const data::ProudSkillType,std::pair<std::string,std::string > > *const)(v1 + 728),
      (data::ProudSkillType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 416));
    std::allocator<std::pair<data::ProudSkillType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::ProudSkillType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    std::map<data::ProudSkillType,std::pair<std::string,std::string>>::map(
      &data::getProudSkillTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::ProudSkillType,std::pair<std::string,std::string > > >)__PAIR128__(4LL, v1 + 512),
      (const std::less<data::ProudSkillType> *)(v1 + 32),
      (const std::map<data::ProudSkillType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 48));
    __cxa_guard_release(&`guard variable for'data::getProudSkillTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::ProudSkillType,std::pair<std::string,std::string>>::~map,
      &data::getProudSkillTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::ProudSkillType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::ProudSkillType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::ProudSkillType,std::pair<std::string,std::string > > *)(v1 + 800);
          i != (std::pair<const data::ProudSkillType,std::pair<std::string,std::string > > *)(v1 + 512);
          std::pair<data::ProudSkillType const,std::pair<std::string,std::string>>::~pair(i) )
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
  return &data::getProudSkillTypeEnumMap[abi:cxx11](void)::m;
};

// Line 318: range 00000000139036E4-0000000013903A57
const char *__fastcall data::enumValToStr(data::EffectTargetType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::EffectTargetType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::EffectTargetType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 5 e:317 64 8 8 iter:320 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getEffectTargetTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::EffectTargetType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::EffectTargetType,std::pair<std::string,std::string>>::find(map, (const std::map<data::EffectTargetType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::EffectTargetType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::EffectTargetType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::EffectTargetType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::EffectTargetType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
      "enumValToStr",
      323);
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
    result = "INVALID_EffectTargetType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::EffectTargetType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::EffectTargetType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 330: range 0000000013903A58-0000000013904010
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::EffectTargetType>,false,true>::pointer v10; // rax
  data::EffectTargetType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::EffectTargetType> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:339 96 8 9 <unknown> 128 8 5 s:329 160 32 9 <unknown> 224 32 9 <unk"
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
    m = data::getEffectTargetTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::EffectTargetType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::EffectTargetType>::find(
                                                                                             m,
                                                                                             (const std::unordered_map<std::string,data::EffectTargetType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::EffectTargetType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::EffectTargetType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::EffectTargetType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::EffectTargetType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::EffectTargetType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
        "enumNameToVal",
        342);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::EffectTargetType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::EffectTargetType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
      "enumNameToVal",
      333);
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

// Line 351: range 0000000013904011-00000000139049DA
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::EffectTargetType> *i; // r14
  unsigned __int64 v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::EffectTargetType>,false,true>::pointer v12; // rax
  data::EffectTargetType second; // ecx
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
                        " <unknown> 144 8 6 it:364 176 8 9 <unknown> 208 8 5 s:350 240 32 9 <unknown> 304 32 9 <unknown> "
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::EffectTargetType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::EffectTargetType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, e);
      *(_DWORD *)(v2 + 112) = 1;
      std::pair<std::string const,data::EffectTargetType>::pair<char const(&)[7],data::EffectTargetType,true>(
        (std::pair<const std::string,data::EffectTargetType> *const)(v2 + 432),
        (const char (*)[7])byte_1AC2CD00,
        (data::EffectTargetType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1AC2CD00);
      *(_DWORD *)(v2 + 128) = 2;
      std::pair<std::string const,data::EffectTargetType>::pair<char const(&)[7],data::EffectTargetType,true>(
        (std::pair<const std::string,data::EffectTargetType> *const)(v2 + 472),
        (const char (*)[7])byte_1AC2CD40,
        (data::EffectTargetType *)(v2 + 128));
      std::allocator<std::pair<std::string const,data::EffectTargetType>>::allocator((std::allocator<std::pair<const std::string,data::EffectTargetType> > *const)(v2 + 80));
      std::unordered_map<std::string,data::EffectTargetType>::unordered_map(
        &data::enumStrToVal(char const*,data::EffectTargetType &)::m,
        (std::initializer_list<std::pair<const std::string,data::EffectTargetType> >)__PAIR128__(2LL, v2 + 432),
        0LL,
        (const std::unordered_map<std::string,data::EffectTargetType>::hasher *)(v2 + 48),
        (const std::unordered_map<std::string,data::EffectTargetType>::key_equal *)(v2 + 64),
        (const std::unordered_map<std::string,data::EffectTargetType>::allocator_type *)(v2 + 80));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::EffectTargetType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::EffectTargetType>::~unordered_map,
        &data::enumStrToVal(char const*,data::EffectTargetType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::EffectTargetType>>::~allocator((std::allocator<std::pair<const std::string,data::EffectTargetType> > *const)(v2 + 80));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::EffectTargetType> *)(v2 + 512);
            i != (std::pair<const std::string,data::EffectTargetType> *)(v2 + 432);
            std::pair<std::string const,data::EffectTargetType>::~pair(i) )
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
    *(std::unordered_map<std::string,data::EffectTargetType>::iterator *)(v2 + 144) = std::unordered_map<std::string,data::EffectTargetType>::find(
                                                                                        &data::enumStrToVal(char const*,data::EffectTargetType &)::m,
                                                                                        (const std::unordered_map<std::string,data::EffectTargetType>::key_type *)(v2 + 304));
    std::string::~string((void *)(v2 + 304));
    *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 96);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, v2 + 304);
    *(std::unordered_map<std::string,data::EffectTargetType>::iterator *)(v2 + 176) = std::unordered_map<std::string,data::EffectTargetType>::end(&data::enumStrToVal(char const*,data::EffectTargetType &)::m);
    v9 = (char *)(v2 + 176);
    v10 = std::__detail::operator==<std::pair<std::string const,data::EffectTargetType>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::EffectTargetType>,true> *)(v2 + 144),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::EffectTargetType>,true> *)(v2 + 176));
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
        "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
        "enumStrToVal",
        367);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 368),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)(v2 + 208));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 368));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::EffectTargetType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::EffectTargetType>,false,true> *const)(v2 + 144));
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
      "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
      "enumStrToVal",
      354);
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

// Line 376: range 00000000139049DB-00000000139049F1
const char *__cdecl data::getDescription(data::EffectTargetType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 381: range 00000000139049F2-0000000013904BA7
bool __cdecl data::isValidEffectTargetType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::EffectTargetType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::EffectTargetType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:382 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidEffectTargetType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getEffectTargetTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::EffectTargetType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::EffectTargetType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getEffectTargetTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::EffectTargetType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::EffectTargetType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::EffectTargetType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::EffectTargetType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::EffectTargetType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 387: range 0000000013904BA8-0000000013904D09
bool __cdecl data::isValidEffectTargetTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::EffectTargetType> *v5; // rcx
  const std::unordered_map<std::string,data::EffectTargetType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidEffectTargetTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getEffectTargetTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::EffectTargetType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::EffectTargetType>::end(v5);
  v6 = data::getEffectTargetTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::EffectTargetType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::EffectTargetType>::find(
                                                                                           v6,
                                                                                           name);
  result = std::__detail::operator!=<std::pair<std::string const,data::EffectTargetType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::EffectTargetType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::EffectTargetType>,true> *)(v2 + 64));
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

// Line 392: range 0000000013904D0A-00000000139051CC
const std::unordered_map<std::string,data::EffectTargetType> *__cdecl data::getEffectTargetTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::EffectTargetType> *i; // r14
  const std::unordered_map<std::string,data::EffectTargetType> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getEffectTargetTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556927;
  v3[536862723] = -234556924;
  v3[536862727] = -218103808;
  v3[536862728] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getEffectTargetTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getEffectTargetTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string const,data::EffectTargetType>::pair<char const(&)[19],data::EffectTargetType,true>(
      (std::pair<const std::string,data::EffectTargetType> *const)(v1 + 128),
      (const char (*)[19])"EFFECT_TARGET_NONE",
      (data::EffectTargetType *)(v1 + 80));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, "EFFECT_TARGET_NONE");
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string const,data::EffectTargetType>::pair<char const(&)[19],data::EffectTargetType,true>(
      (std::pair<const std::string,data::EffectTargetType> *const)(v1 + 168),
      (const char (*)[19])"EFFECT_TARGET_SOLO",
      (data::EffectTargetType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "EFFECT_TARGET_SOLO");
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string const,data::EffectTargetType>::pair<char const(&)[19],data::EffectTargetType,true>(
      (std::pair<const std::string,data::EffectTargetType> *const)(v1 + 208),
      (const char (*)[19])"EFFECT_TARGET_TEAM",
      (data::EffectTargetType *)(v1 + 112));
    std::allocator<std::pair<std::string const,data::EffectTargetType>>::allocator((std::allocator<std::pair<const std::string,data::EffectTargetType> > *const)(v1 + 64));
    std::unordered_map<std::string,data::EffectTargetType>::unordered_map(
      &data::getEffectTargetTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::EffectTargetType> >)__PAIR128__(3LL, v1 + 128),
      0LL,
      (const std::unordered_map<std::string,data::EffectTargetType>::hasher *)(v1 + 32),
      (const std::unordered_map<std::string,data::EffectTargetType>::key_equal *)(v1 + 48),
      (const std::unordered_map<std::string,data::EffectTargetType>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getEffectTargetTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::EffectTargetType>::~unordered_map,
      &data::getEffectTargetTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::EffectTargetType>>::~allocator((std::allocator<std::pair<const std::string,data::EffectTargetType> > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::EffectTargetType> *)(v1 + 248);
          i != (std::pair<const std::string,data::EffectTargetType> *)(v1 + 128);
          std::pair<std::string const,data::EffectTargetType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getEffectTargetTypeNameMap[abi:cxx11](void)::m;
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

// Line 403: range 00000000139051CD-00000000139058CB
const std::map<data::EffectTargetType,std::pair<std::string,std::string >> *__cdecl data::getEffectTargetTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::EffectTargetType,std::pair<std::string,std::string > > *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getEffectTargetTypeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getEffectTargetTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getEffectTargetTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[19],true>(
      (std::pair<std::string,std::string > *const)(v1 + 128),
      (const char (*)[1])byte_1ABBC960,
      (const char (*)[19])"EFFECT_TARGET_NONE");
    std::pair<data::EffectTargetType const,std::pair<std::string,std::string>>::pair<data::EffectTargetType,true>(
      (std::pair<const data::EffectTargetType,std::pair<std::string,std::string > > *const)(v1 + 416),
      (data::EffectTargetType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[19],true>(
      (std::pair<std::string,std::string > *const)(v1 + 224),
      (const char (*)[7])byte_1AC2CD00,
      (const char (*)[19])"EFFECT_TARGET_SOLO");
    std::pair<data::EffectTargetType const,std::pair<std::string,std::string>>::pair<data::EffectTargetType,true>(
      (std::pair<const data::EffectTargetType,std::pair<std::string,std::string > > *const)(v1 + 488),
      (data::EffectTargetType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 224));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[19],true>(
      (std::pair<std::string,std::string > *const)(v1 + 320),
      (const char (*)[7])byte_1AC2CD40,
      (const char (*)[19])"EFFECT_TARGET_TEAM");
    std::pair<data::EffectTargetType const,std::pair<std::string,std::string>>::pair<data::EffectTargetType,true>(
      (std::pair<const data::EffectTargetType,std::pair<std::string,std::string > > *const)(v1 + 560),
      (data::EffectTargetType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 320));
    std::allocator<std::pair<data::EffectTargetType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::EffectTargetType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    std::map<data::EffectTargetType,std::pair<std::string,std::string>>::map(
      &data::getEffectTargetTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::EffectTargetType,std::pair<std::string,std::string > > >)__PAIR128__(3LL, v1 + 416),
      (const std::less<data::EffectTargetType> *)(v1 + 48),
      (const std::map<data::EffectTargetType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getEffectTargetTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::EffectTargetType,std::pair<std::string,std::string>>::~map,
      &data::getEffectTargetTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::EffectTargetType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::EffectTargetType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::EffectTargetType,std::pair<std::string,std::string > > *)(v1 + 632);
          i != (std::pair<const data::EffectTargetType,std::pair<std::string,std::string > > *)(v1 + 416);
          std::pair<data::EffectTargetType const,std::pair<std::string,std::string>>::~pair(i) )
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
  return &data::getEffectTargetTypeEnumMap[abi:cxx11](void)::m;
};

// Line 414: range 00000000139058CC-0000000013905C3F
const char *__fastcall data::enumValToStr(data::ProudLifeEffectType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::ProudLifeEffectType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::ProudLifeEffectType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 5 e:413 64 8 8 iter:416 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getProudLifeEffectTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::ProudLifeEffectType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::ProudLifeEffectType,std::pair<std::string,std::string>>::find(map, (const std::map<data::ProudLifeEffectType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::ProudLifeEffectType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::ProudLifeEffectType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::ProudLifeEffectType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::ProudLifeEffectType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
      "enumValToStr",
      419);
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
    result = "INVALID_ProudLifeEffectType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::ProudLifeEffectType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::ProudLifeEffectType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 426: range 0000000013905C40-00000000139061F8
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::ProudLifeEffectType>,false,true>::pointer v10; // rax
  data::ProudLifeEffectType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::ProudLifeEffectType> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:435 96 8 9 <unknown> 128 8 5 s:425 160 32 9 <unknown> 224 32 9 <unk"
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
    m = data::getProudLifeEffectTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::ProudLifeEffectType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ProudLifeEffectType>::find(
                                                                                                m,
                                                                                                (const std::unordered_map<std::string,data::ProudLifeEffectType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::ProudLifeEffectType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::ProudLifeEffectType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::ProudLifeEffectType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ProudLifeEffectType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ProudLifeEffectType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
        "enumNameToVal",
        438);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::ProudLifeEffectType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::ProudLifeEffectType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
      "enumNameToVal",
      429);
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

// Line 447: range 00000000139061F9-0000000013907604
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int v5; // eax
  std::pair<const std::string,data::ProudLifeEffectType> *i; // r14
  const char *v7; // rsi
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::ProudLifeEffectType>,false,true>::pointer v11; // rax
  data::ProudLifeEffectType second; // ecx
  char v13; // dl
  unsigned int v14; // ebx
  char v17[1680]; // [rsp+20h] [rbp-690h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1632LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "31 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 4 9 <unknown> 112 4 9 "
                        "<unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unkno"
                        "wn> 208 4 9 <unknown> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 4 9 <unknown> 28"
                        "8 4 9 <unknown> 304 4 9 <unknown> 320 4 9 <unknown> 336 4 9 <unknown> 352 4 9 <unknown> 368 4 9 "
                        "<unknown> 384 4 9 <unknown> 400 4 9 <unknown> 416 8 6 it:478 448 8 9 <unknown> 480 8 5 s:446 512"
                        " 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 800 9 <unknown>";
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
  v4[536862733] = -218959360;
  v4[536862734] = -218959360;
  v4[536862735] = -218959360;
  v4[536862737] = -218959118;
  v4[536862739] = -218959118;
  v4[536862741] = -218959118;
  v4[536862767] = -202116109;
  v4[536862768] = -202116109;
  v4[536862769] = -202116109;
  v4[536862770] = -202116109;
  *(_QWORD *)(v2 + 480) = s;
  if ( *(_QWORD *)(v2 + 480) )
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::ProudLifeEffectType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::ProudLifeEffectType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, e);
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::ProudLifeEffectType>::pair<char const(&)[22],data::ProudLifeEffectType,true>(
        (std::pair<const std::string,data::ProudLifeEffectType> *const)(v2 + 704),
        (const char (*)[22])byte_1AC2D1E0,
        (data::ProudLifeEffectType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, byte_1AC2D1E0);
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::ProudLifeEffectType>::pair<char const(&)[19],data::ProudLifeEffectType,true>(
        (std::pair<const std::string,data::ProudLifeEffectType> *const)(v2 + 744),
        (const char (*)[19])byte_1AC2D220,
        (data::ProudLifeEffectType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1AC2D220);
      *(_DWORD *)(v2 + 128) = 3;
      std::pair<std::string const,data::ProudLifeEffectType>::pair<char const(&)[19],data::ProudLifeEffectType,true>(
        (std::pair<const std::string,data::ProudLifeEffectType> *const)(v2 + 784),
        (const char (*)[19])byte_1AC2D260,
        (data::ProudLifeEffectType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, byte_1AC2D260);
      *(_DWORD *)(v2 + 144) = 4;
      std::pair<std::string const,data::ProudLifeEffectType>::pair<char const(&)[31],data::ProudLifeEffectType,true>(
        (std::pair<const std::string,data::ProudLifeEffectType> *const)(v2 + 824),
        (const char (*)[31])byte_1AC2D2A0,
        (data::ProudLifeEffectType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, byte_1AC2D2A0);
      *(_DWORD *)(v2 + 160) = 5;
      std::pair<std::string const,data::ProudLifeEffectType>::pair<char const(&)[22],data::ProudLifeEffectType,true>(
        (std::pair<const std::string,data::ProudLifeEffectType> *const)(v2 + 864),
        (const char (*)[22])byte_1AC2D2E0,
        (data::ProudLifeEffectType *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, byte_1AC2D2E0);
      *(_DWORD *)(v2 + 176) = 101;
      std::pair<std::string const,data::ProudLifeEffectType>::pair<char const(&)[28],data::ProudLifeEffectType,true>(
        (std::pair<const std::string,data::ProudLifeEffectType> *const)(v2 + 904),
        (const char (*)[28])byte_1AC2D320,
        (data::ProudLifeEffectType *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, byte_1AC2D320);
      *(_DWORD *)(v2 + 192) = 102;
      std::pair<std::string const,data::ProudLifeEffectType>::pair<char const(&)[28],data::ProudLifeEffectType,true>(
        (std::pair<const std::string,data::ProudLifeEffectType> *const)(v2 + 944),
        (const char (*)[28])byte_1AC2D360,
        (data::ProudLifeEffectType *)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 208, byte_1AC2D360);
      *(_DWORD *)(v2 + 208) = 103;
      std::pair<std::string const,data::ProudLifeEffectType>::pair<char const(&)[31],data::ProudLifeEffectType,true>(
        (std::pair<const std::string,data::ProudLifeEffectType> *const)(v2 + 984),
        (const char (*)[31])byte_1AC2D3A0,
        (data::ProudLifeEffectType *)(v2 + 208));
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 224, byte_1AC2D3A0);
      *(_DWORD *)(v2 + 224) = 104;
      std::pair<std::string const,data::ProudLifeEffectType>::pair<char const(&)[31],data::ProudLifeEffectType,true>(
        (std::pair<const std::string,data::ProudLifeEffectType> *const)(v2 + 1024),
        (const char (*)[31])byte_1AC2D3E0,
        (data::ProudLifeEffectType *)(v2 + 224));
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 240, byte_1AC2D3E0);
      *(_DWORD *)(v2 + 240) = 105;
      std::pair<std::string const,data::ProudLifeEffectType>::pair<char const(&)[25],data::ProudLifeEffectType,true>(
        (std::pair<const std::string,data::ProudLifeEffectType> *const)(v2 + 1064),
        (const char (*)[25])byte_1AC2D420,
        (data::ProudLifeEffectType *)(v2 + 240));
      if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 256, byte_1AC2D420);
      *(_DWORD *)(v2 + 256) = 106;
      std::pair<std::string const,data::ProudLifeEffectType>::pair<char const(&)[19],data::ProudLifeEffectType,true>(
        (std::pair<const std::string,data::ProudLifeEffectType> *const)(v2 + 1104),
        (const char (*)[19])byte_1AC2D460,
        (data::ProudLifeEffectType *)(v2 + 256));
      if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 272, byte_1AC2D460);
      *(_DWORD *)(v2 + 272) = 203;
      std::pair<std::string const,data::ProudLifeEffectType>::pair<char const(&)[19],data::ProudLifeEffectType,true>(
        (std::pair<const std::string,data::ProudLifeEffectType> *const)(v2 + 1144),
        (const char (*)[19])byte_1AC2D4A0,
        (data::ProudLifeEffectType *)(v2 + 272));
      if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 288, byte_1AC2D4A0);
      *(_DWORD *)(v2 + 288) = 204;
      std::pair<std::string const,data::ProudLifeEffectType>::pair<char const(&)[31],data::ProudLifeEffectType,true>(
        (std::pair<const std::string,data::ProudLifeEffectType> *const)(v2 + 1184),
        (const char (*)[31])byte_1AC2D4E0,
        (data::ProudLifeEffectType *)(v2 + 288));
      if ( *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 304, byte_1AC2D4E0);
      *(_DWORD *)(v2 + 304) = 205;
      std::pair<std::string const,data::ProudLifeEffectType>::pair<char const(&)[22],data::ProudLifeEffectType,true>(
        (std::pair<const std::string,data::ProudLifeEffectType> *const)(v2 + 1224),
        (const char (*)[22])byte_1AC2D520,
        (data::ProudLifeEffectType *)(v2 + 304));
      if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 320, byte_1AC2D520);
      *(_DWORD *)(v2 + 320) = 301;
      std::pair<std::string const,data::ProudLifeEffectType>::pair<char const(&)[19],data::ProudLifeEffectType,true>(
        (std::pair<const std::string,data::ProudLifeEffectType> *const)(v2 + 1264),
        (const char (*)[19])byte_1AC2D560,
        (data::ProudLifeEffectType *)(v2 + 320));
      if ( *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 336, byte_1AC2D560);
      *(_DWORD *)(v2 + 336) = 302;
      std::pair<std::string const,data::ProudLifeEffectType>::pair<char const(&)[19],data::ProudLifeEffectType,true>(
        (std::pair<const std::string,data::ProudLifeEffectType> *const)(v2 + 1304),
        (const char (*)[19])byte_1AC2D5A0,
        (data::ProudLifeEffectType *)(v2 + 336));
      if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 352, byte_1AC2D5A0);
      *(_DWORD *)(v2 + 352) = 401;
      std::pair<std::string const,data::ProudLifeEffectType>::pair<char const(&)[28],data::ProudLifeEffectType,true>(
        (std::pair<const std::string,data::ProudLifeEffectType> *const)(v2 + 1344),
        (const char (*)[28])byte_1AC2D5E0,
        (data::ProudLifeEffectType *)(v2 + 352));
      if ( *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 368, byte_1AC2D5E0);
      *(_DWORD *)(v2 + 368) = 501;
      std::pair<std::string const,data::ProudLifeEffectType>::pair<char const(&)[31],data::ProudLifeEffectType,true>(
        (std::pair<const std::string,data::ProudLifeEffectType> *const)(v2 + 1384),
        (const char (*)[31])byte_1AC2D620,
        (data::ProudLifeEffectType *)(v2 + 368));
      if ( *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 384, byte_1AC2D620);
      *(_DWORD *)(v2 + 384) = 601;
      std::pair<std::string const,data::ProudLifeEffectType>::pair<char const(&)[25],data::ProudLifeEffectType,true>(
        (std::pair<const std::string,data::ProudLifeEffectType> *const)(v2 + 1424),
        (const char (*)[25])byte_1AC2D660,
        (data::ProudLifeEffectType *)(v2 + 384));
      if ( *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 400, byte_1AC2D660);
      *(_DWORD *)(v2 + 400) = 701;
      std::pair<std::string const,data::ProudLifeEffectType>::pair<char const(&)[25],data::ProudLifeEffectType,true>(
        (std::pair<const std::string,data::ProudLifeEffectType> *const)(v2 + 1464),
        (const char (*)[25])byte_1AC2D6A0,
        (data::ProudLifeEffectType *)(v2 + 400));
      std::allocator<std::pair<std::string const,data::ProudLifeEffectType>>::allocator((std::allocator<std::pair<const std::string,data::ProudLifeEffectType> > *const)(v2 + 64));
      std::unordered_map<std::string,data::ProudLifeEffectType>::unordered_map(
        &data::enumStrToVal(char const*,data::ProudLifeEffectType &)::m,
        (std::initializer_list<std::pair<const std::string,data::ProudLifeEffectType> >)__PAIR128__(20LL, v2 + 704),
        0LL,
        (const std::unordered_map<std::string,data::ProudLifeEffectType>::hasher *)(v2 + 32),
        (const std::unordered_map<std::string,data::ProudLifeEffectType>::key_equal *)(v2 + 48),
        (const std::unordered_map<std::string,data::ProudLifeEffectType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::ProudLifeEffectType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::ProudLifeEffectType>::~unordered_map,
        &data::enumStrToVal(char const*,data::ProudLifeEffectType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::ProudLifeEffectType>>::~allocator((std::allocator<std::pair<const std::string,data::ProudLifeEffectType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::ProudLifeEffectType> *)(v2 + 1504);
            i != (std::pair<const std::string,data::ProudLifeEffectType> *)(v2 + 704);
            std::pair<std::string const,data::ProudLifeEffectType>::~pair(i) )
      {
        --i;
      }
      __asan_poison_stack_memory(v2 + 704, 800LL);
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
    *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 80);
    v7 = *(const char **)(v2 + 480);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 576),
      v7,
      (const std::allocator<char> *)(v2 + 80));
    if ( *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 416, v7);
    *(std::unordered_map<std::string,data::ProudLifeEffectType>::iterator *)(v2 + 416) = std::unordered_map<std::string,data::ProudLifeEffectType>::find(
                                                                                           &data::enumStrToVal(char const*,data::ProudLifeEffectType &)::m,
                                                                                           (const std::unordered_map<std::string,data::ProudLifeEffectType>::key_type *)(v2 + 576));
    std::string::~string((void *)(v2 + 576));
    *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 80);
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 448, v2 + 576);
    *(std::unordered_map<std::string,data::ProudLifeEffectType>::iterator *)(v2 + 448) = std::unordered_map<std::string,data::ProudLifeEffectType>::end(&data::enumStrToVal(char const*,data::ProudLifeEffectType &)::m);
    v8 = (char *)(v2 + 448);
    v9 = std::__detail::operator==<std::pair<std::string const,data::ProudLifeEffectType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ProudLifeEffectType>,true> *)(v2 + 416),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ProudLifeEffectType>,true> *)(v2 + 448));
    *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
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
        3u,
        "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
        "enumStrToVal",
        481);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 640),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v10, (const char *const *)(v2 + 480));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 640));
      v5 = -1;
    }
    else
    {
      v11 = std::__detail::_Node_iterator<std::pair<std::string const,data::ProudLifeEffectType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::ProudLifeEffectType>,false,true> *const)(v2 + 416));
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
    if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 512, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 512),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
      "enumStrToVal",
      450);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
      (common::milog::MiLogStream *const)(v2 + 512),
      (const char (*)[14])"s is nullptr!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF804C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8054) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80C4) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862743) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450964 - (((_DWORD)v4 + 2147450972) & 0xFFFFFFF8) + 120) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1632LL, v17);
  }
  return v14;
};

// Line 490: range 0000000013907605-000000001390761B
const char *__cdecl data::getDescription(data::ProudLifeEffectType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 495: range 000000001390761C-00000000139077D1
bool __cdecl data::isValidProudLifeEffectType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::ProudLifeEffectType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::ProudLifeEffectType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:496 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidProudLifeEffectType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getProudLifeEffectTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::ProudLifeEffectType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::ProudLifeEffectType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getProudLifeEffectTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::ProudLifeEffectType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::ProudLifeEffectType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::ProudLifeEffectType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::ProudLifeEffectType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::ProudLifeEffectType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 501: range 00000000139077D2-0000000013907933
bool __cdecl data::isValidProudLifeEffectTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::ProudLifeEffectType> *v5; // rcx
  const std::unordered_map<std::string,data::ProudLifeEffectType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidProudLifeEffectTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getProudLifeEffectTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::ProudLifeEffectType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ProudLifeEffectType>::end(v5);
  v6 = data::getProudLifeEffectTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::ProudLifeEffectType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::ProudLifeEffectType>::find(
                                                                                              v6,
                                                                                              name);
  result = std::__detail::operator!=<std::pair<std::string const,data::ProudLifeEffectType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ProudLifeEffectType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ProudLifeEffectType>,true> *)(v2 + 64));
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

// Line 506: range 0000000013907934-00000000139086F1
const std::unordered_map<std::string,data::ProudLifeEffectType> *__cdecl data::getProudLifeEffectTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::ProudLifeEffectType> *i; // r14
  char v6[1456]; // [rsp+10h] [rbp-5B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_5(1408LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "25 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 4 9"
                        " <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unknown> 208 4 9 <unkn"
                        "own> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 4 9 <unknown> 288 4 9 <unknown> 3"
                        "04 4 9 <unknown> 320 4 9 <unknown> 336 4 9 <unknown> 352 4 9 <unknown> 368 4 9 <unknown> 384 4 9"
                        " <unknown> 400 4 9 <unknown> 416 4 9 <unknown> 432 840 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::getProudLifeEffectTypeNameMap[abi:cxx11];
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
  v3[536862731] = -234556924;
  v3[536862732] = -234556924;
  v3[536862733] = 61956;
  v3[536862759] = -218103808;
  v3[536862760] = -202116109;
  v3[536862761] = -202116109;
  v3[536862762] = -202116109;
  v3[536862763] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getProudLifeEffectTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getProudLifeEffectTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v0);
    *(_DWORD *)(v1 + 96) = 0;
    std::pair<std::string const,data::ProudLifeEffectType>::pair<char const(&)[18],data::ProudLifeEffectType,true>(
      (std::pair<const std::string,data::ProudLifeEffectType> *const)(v1 + 432),
      (const char (*)[18])"PROUD_EFFECT_NONE",
      (data::ProudLifeEffectType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "PROUD_EFFECT_NONE");
    *(_DWORD *)(v1 + 112) = 1;
    std::pair<std::string const,data::ProudLifeEffectType>::pair<char const(&)[37],data::ProudLifeEffectType,true>(
      (std::pair<const std::string,data::ProudLifeEffectType> *const)(v1 + 472),
      (const char (*)[37])"PROUD_EFFECT_COMBINE_RETURN_MATERIAL",
      (data::ProudLifeEffectType *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, "PROUD_EFFECT_COMBINE_RETURN_MATERIAL");
    *(_DWORD *)(v1 + 128) = 2;
    std::pair<std::string const,data::ProudLifeEffectType>::pair<char const(&)[37],data::ProudLifeEffectType,true>(
      (std::pair<const std::string,data::ProudLifeEffectType> *const)(v1 + 512),
      (const char (*)[37])"PROUD_EFFECT_COMBINE_MULTIPLY_OUTPUT",
      (data::ProudLifeEffectType *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, "PROUD_EFFECT_COMBINE_MULTIPLY_OUTPUT");
    *(_DWORD *)(v1 + 144) = 3;
    std::pair<std::string const,data::ProudLifeEffectType>::pair<char const(&)[34],data::ProudLifeEffectType,true>(
      (std::pair<const std::string,data::ProudLifeEffectType> *const)(v1 + 552),
      (const char (*)[34])"PROUD_EFFECT_COMBINE_EXTRA_OUTPUT",
      (data::ProudLifeEffectType *)(v1 + 144));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, "PROUD_EFFECT_COMBINE_EXTRA_OUTPUT");
    *(_DWORD *)(v1 + 160) = 4;
    std::pair<std::string const,data::ProudLifeEffectType>::pair<char const(&)[36],data::ProudLifeEffectType,true>(
      (std::pair<const std::string,data::ProudLifeEffectType> *const)(v1 + 592),
      (const char (*)[36])"PROUD_EFFECT_COMBINE_ADD_EXTRA_PROB",
      (data::ProudLifeEffectType *)(v1 + 160));
    if ( *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 176, "PROUD_EFFECT_COMBINE_ADD_EXTRA_PROB");
    *(_DWORD *)(v1 + 176) = 5;
    std::pair<std::string const,data::ProudLifeEffectType>::pair<char const(&)[45],data::ProudLifeEffectType,true>(
      (std::pair<const std::string,data::ProudLifeEffectType> *const)(v1 + 632),
      (const char (*)[45])"PROUD_EFFECT_COMBINE_RETURN_SPECIAL_MATERIAL",
      (data::ProudLifeEffectType *)(v1 + 176));
    if ( *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 192, "PROUD_EFFECT_COMBINE_RETURN_SPECIAL_MATERIAL");
    *(_DWORD *)(v1 + 192) = 101;
    std::pair<std::string const,data::ProudLifeEffectType>::pair<char const(&)[36],data::ProudLifeEffectType,true>(
      (std::pair<const std::string,data::ProudLifeEffectType> *const)(v1 + 672),
      (const char (*)[36])"PROUD_EFFECT_COOK_EXTRA_PROFICIENCY",
      (data::ProudLifeEffectType *)(v1 + 192));
    if ( *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 208, "PROUD_EFFECT_COOK_EXTRA_PROFICIENCY");
    *(_DWORD *)(v1 + 208) = 102;
    std::pair<std::string const,data::ProudLifeEffectType>::pair<char const(&)[35],data::ProudLifeEffectType,true>(
      (std::pair<const std::string,data::ProudLifeEffectType> *const)(v1 + 712),
      (const char (*)[35])"PROUD_EFFECT_COOK_WIDEN_JUDGE_AREA",
      (data::ProudLifeEffectType *)(v1 + 208));
    if ( *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 224, "PROUD_EFFECT_COOK_WIDEN_JUDGE_AREA");
    *(_DWORD *)(v1 + 224) = 103;
    std::pair<std::string const,data::ProudLifeEffectType>::pair<char const(&)[33],data::ProudLifeEffectType,true>(
      (std::pair<const std::string,data::ProudLifeEffectType> *const)(v1 + 752),
      (const char (*)[33])"PROUD_EFFECT_COOK_ADD_BONUS_PROB",
      (data::ProudLifeEffectType *)(v1 + 224));
    if ( *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 240, "PROUD_EFFECT_COOK_ADD_BONUS_PROB");
    *(_DWORD *)(v1 + 240) = 104;
    std::pair<std::string const,data::ProudLifeEffectType>::pair<char const(&)[39],data::ProudLifeEffectType,true>(
      (std::pair<const std::string,data::ProudLifeEffectType> *const)(v1 + 792),
      (const char (*)[39])"PROUD_EFFECT_COOK_PERFECT_MULTI_OUTPUT",
      (data::ProudLifeEffectType *)(v1 + 240));
    if ( *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 256, "PROUD_EFFECT_COOK_PERFECT_MULTI_OUTPUT");
    *(_DWORD *)(v1 + 256) = 105;
    std::pair<std::string const,data::ProudLifeEffectType>::pair<char const(&)[36],data::ProudLifeEffectType,true>(
      (std::pair<const std::string,data::ProudLifeEffectType> *const)(v1 + 832),
      (const char (*)[36])"PROUD_EFFECT_COOK_PROB_MULTI_OUTPUT",
      (data::ProudLifeEffectType *)(v1 + 256));
    if ( *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 272, "PROUD_EFFECT_COOK_PROB_MULTI_OUTPUT");
    *(_DWORD *)(v1 + 272) = 106;
    std::pair<std::string const,data::ProudLifeEffectType>::pair<char const(&)[31],data::ProudLifeEffectType,true>(
      (std::pair<const std::string,data::ProudLifeEffectType> *const)(v1 + 872),
      (const char (*)[31])"PROUD_EFFECT_COOK_CAN_NOT_COOK",
      (data::ProudLifeEffectType *)(v1 + 272));
    if ( *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 288, "PROUD_EFFECT_COOK_CAN_NOT_COOK");
    *(_DWORD *)(v1 + 288) = 203;
    std::pair<std::string const,data::ProudLifeEffectType>::pair<char const(&)[31],data::ProudLifeEffectType,true>(
      (std::pair<const std::string,data::ProudLifeEffectType> *const)(v1 + 912),
      (const char (*)[31])"PROUD_EFFECT_FORGE_REDUCE_TIME",
      (data::ProudLifeEffectType *)(v1 + 288));
    if ( *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 304, "PROUD_EFFECT_FORGE_REDUCE_TIME");
    *(_DWORD *)(v1 + 304) = 204;
    std::pair<std::string const,data::ProudLifeEffectType>::pair<char const(&)[34],data::ProudLifeEffectType,true>(
      (std::pair<const std::string,data::ProudLifeEffectType> *const)(v1 + 952),
      (const char (*)[34])"PROUD_EFFECT_FORGE_ADD_EXTRA_PROB",
      (data::ProudLifeEffectType *)(v1 + 304));
    if ( *(_BYTE *)(((v1 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 320) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 320, "PROUD_EFFECT_FORGE_ADD_EXTRA_PROB");
    *(_DWORD *)(v1 + 320) = 205;
    std::pair<std::string const,data::ProudLifeEffectType>::pair<char const(&)[35],data::ProudLifeEffectType,true>(
      (std::pair<const std::string,data::ProudLifeEffectType> *const)(v1 + 992),
      (const char (*)[35])"PROUD_EFFECT_FORGE_RETURN_MATERIAL",
      (data::ProudLifeEffectType *)(v1 + 320));
    if ( *(_BYTE *)(((v1 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 336) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 336, "PROUD_EFFECT_FORGE_RETURN_MATERIAL");
    *(_DWORD *)(v1 + 336) = 301;
    std::pair<std::string const,data::ProudLifeEffectType>::pair<char const(&)[37],data::ProudLifeEffectType,true>(
      (std::pair<const std::string,data::ProudLifeEffectType> *const)(v1 + 1032),
      (const char (*)[37])"PROUD_EFFECT_EXPEDITION_SHORTEN_TIME",
      (data::ProudLifeEffectType *)(v1 + 336));
    if ( *(_BYTE *)(((v1 + 352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 352) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 352, "PROUD_EFFECT_EXPEDITION_SHORTEN_TIME");
    *(_DWORD *)(v1 + 352) = 302;
    std::pair<std::string const,data::ProudLifeEffectType>::pair<char const(&)[37],data::ProudLifeEffectType,true>(
      (std::pair<const std::string,data::ProudLifeEffectType> *const)(v1 + 1072),
      (const char (*)[37])"PROUD_EFFECT_EXPEDITION_EXTRA_OUTPUT",
      (data::ProudLifeEffectType *)(v1 + 352));
    if ( *(_BYTE *)(((v1 + 368) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 368) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 368, "PROUD_EFFECT_EXPEDITION_EXTRA_OUTPUT");
    *(_DWORD *)(v1 + 368) = 401;
    std::pair<std::string const,data::ProudLifeEffectType>::pair<char const(&)[44],data::ProudLifeEffectType,true>(
      (std::pair<const std::string,data::ProudLifeEffectType> *const)(v1 + 1112),
      (const char (*)[44])"PROUD_EFFECT_FURNITURE_MAKE_RETURN_MATERIAL",
      (data::ProudLifeEffectType *)(v1 + 368));
    if ( *(_BYTE *)(((v1 + 384) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 384) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 384, "PROUD_EFFECT_FURNITURE_MAKE_RETURN_MATERIAL");
    *(_DWORD *)(v1 + 384) = 501;
    std::pair<std::string const,data::ProudLifeEffectType>::pair<char const(&)[41],data::ProudLifeEffectType,true>(
      (std::pair<const std::string,data::ProudLifeEffectType> *const)(v1 + 1152),
      (const char (*)[41])"PROUD_EFFECT_WEAPON_PROMOTE_REDUCE_SCOIN",
      (data::ProudLifeEffectType *)(v1 + 384));
    if ( *(_BYTE *)(((v1 + 400) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 400) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 400, "PROUD_EFFECT_WEAPON_PROMOTE_REDUCE_SCOIN");
    *(_DWORD *)(v1 + 400) = 601;
    std::pair<std::string const,data::ProudLifeEffectType>::pair<char const(&)[34],data::ProudLifeEffectType,true>(
      (std::pair<const std::string,data::ProudLifeEffectType> *const)(v1 + 1192),
      (const char (*)[34])"PROUD_EFFECT_FISHING_EXTRA_OUTPUT",
      (data::ProudLifeEffectType *)(v1 + 400));
    if ( *(_BYTE *)(((v1 + 416) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 416) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 416, "PROUD_EFFECT_FISHING_EXTRA_OUTPUT");
    *(_DWORD *)(v1 + 416) = 701;
    std::pair<std::string const,data::ProudLifeEffectType>::pair<char const(&)[35],data::ProudLifeEffectType,true>(
      (std::pair<const std::string,data::ProudLifeEffectType> *const)(v1 + 1232),
      (const char (*)[35])"PROUD_EFFECT_HIT_TREE_EXTRA_OUTPUT",
      (data::ProudLifeEffectType *)(v1 + 416));
    std::allocator<std::pair<std::string const,data::ProudLifeEffectType>>::allocator((std::allocator<std::pair<const std::string,data::ProudLifeEffectType> > *const)(v1 + 80));
    std::unordered_map<std::string,data::ProudLifeEffectType>::unordered_map(
      &data::getProudLifeEffectTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::ProudLifeEffectType> >)__PAIR128__(21LL, v1 + 432),
      0LL,
      (const std::unordered_map<std::string,data::ProudLifeEffectType>::hasher *)(v1 + 48),
      (const std::unordered_map<std::string,data::ProudLifeEffectType>::key_equal *)(v1 + 64),
      (const std::unordered_map<std::string,data::ProudLifeEffectType>::allocator_type *)(v1 + 80));
    __cxa_guard_release(&`guard variable for'data::getProudLifeEffectTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::ProudLifeEffectType>::~unordered_map,
      &data::getProudLifeEffectTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::ProudLifeEffectType>>::~allocator((std::allocator<std::pair<const std::string,data::ProudLifeEffectType> > *const)(v1 + 80));
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::ProudLifeEffectType> *)(v1 + 1272);
          i != (std::pair<const std::string,data::ProudLifeEffectType> *)(v1 + 432);
          std::pair<std::string const,data::ProudLifeEffectType>::~pair(i) )
    {
      --i;
    }
  }
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF80A8) = 0LL;
    memset(
      (void *)((unsigned __int64)(v3 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v3 + 2147450880 - (((_DWORD)v3 + 2147450888) & 0xFFFFFFF8) + 176) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    __asan_stack_free_5(v1, 1408LL, v6);
  }
  return &data::getProudLifeEffectTypeNameMap[abi:cxx11](void)::m;
};

// Line 535: range 00000000139086F2-000000001390A2DF
const std::map<data::ProudLifeEffectType,std::pair<std::string,std::string >> *__cdecl data::getProudLifeEffectTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::ProudLifeEffectType,std::pair<std::string,std::string > > *i; // r14
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
  char v26[4112]; // [rsp+10h] [rbp-1010h] BYREF

  v1 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_6(4064LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "45 32 1 9 <unknown> 48 1 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 "
                        "<unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unkno"
                        "wn> 208 4 9 <unknown> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 4 9 <unknown> 28"
                        "8 4 9 <unknown> 304 4 9 <unknown> 320 4 9 <unknown> 336 4 9 <unknown> 352 4 9 <unknown> 368 4 9 "
                        "<unknown> 384 4 9 <unknown> 400 64 9 <unknown> 496 64 9 <unknown> 592 64 9 <unknown> 688 64 9 <u"
                        "nknown> 784 64 9 <unknown> 880 64 9 <unknown> 976 64 9 <unknown> 1072 64 9 <unknown> 1168 64 9 <"
                        "unknown> 1264 64 9 <unknown> 1360 64 9 <unknown> 1456 64 9 <unknown> 1552 64 9 <unknown> 1648 64"
                        " 9 <unknown> 1744 64 9 <unknown> 1840 64 9 <unknown> 1936 64 9 <unknown> 2032 64 9 <unknown> 212"
                        "8 64 9 <unknown> 2224 64 9 <unknown> 2320 64 9 <unknown> 2416 1512 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::getProudLifeEffectTypeEnumMap[abi:cxx11];
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
  v3[536862730] = -234556924;
  v3[536862731] = -234556924;
  v3[536862732] = 61956;
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
  v3[536862842] = -218103808;
  v3[536862843] = -202116109;
  v3[536862844] = -202116109;
  v3[536862845] = -202116109;
  v3[536862846] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getProudLifeEffectTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getProudLifeEffectTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 64, v0);
    *(_DWORD *)(v1 + 64) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[18],true>(
      (std::pair<std::string,std::string > *const)(v1 + 400),
      (const char (*)[1])byte_1ABBC960,
      (const char (*)[18])"PROUD_EFFECT_NONE");
    std::pair<data::ProudLifeEffectType const,std::pair<std::string,std::string>>::pair<data::ProudLifeEffectType,true>(
      (std::pair<const data::ProudLifeEffectType,std::pair<std::string,std::string > > *const)(v1 + 2416),
      (data::ProudLifeEffectType *)(v1 + 64),
      (const std::pair<std::string,std::string > *)(v1 + 400));
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v1 + 64);
    *(_DWORD *)(v1 + 80) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[22],char const(&)[37],true>(
      (std::pair<std::string,std::string > *const)(v1 + 496),
      (const char (*)[22])byte_1AC2D1E0,
      (const char (*)[37])"PROUD_EFFECT_COMBINE_RETURN_MATERIAL");
    std::pair<data::ProudLifeEffectType const,std::pair<std::string,std::string>>::pair<data::ProudLifeEffectType,true>(
      (std::pair<const data::ProudLifeEffectType,std::pair<std::string,std::string > > *const)(v1 + 2488),
      (data::ProudLifeEffectType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 496));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[37],true>(
      (std::pair<std::string,std::string > *const)(v1 + 592),
      (const char (*)[19])byte_1AC2D220,
      (const char (*)[37])"PROUD_EFFECT_COMBINE_MULTIPLY_OUTPUT");
    std::pair<data::ProudLifeEffectType const,std::pair<std::string,std::string>>::pair<data::ProudLifeEffectType,true>(
      (std::pair<const data::ProudLifeEffectType,std::pair<std::string,std::string > > *const)(v1 + 2560),
      (data::ProudLifeEffectType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 592));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 3;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[34],true>(
      (std::pair<std::string,std::string > *const)(v1 + 688),
      (const char (*)[19])byte_1AC2D260,
      (const char (*)[34])"PROUD_EFFECT_COMBINE_EXTRA_OUTPUT");
    std::pair<data::ProudLifeEffectType const,std::pair<std::string,std::string>>::pair<data::ProudLifeEffectType,true>(
      (std::pair<const data::ProudLifeEffectType,std::pair<std::string,std::string > > *const)(v1 + 2632),
      (data::ProudLifeEffectType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 688));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, v1 + 112);
    *(_DWORD *)(v1 + 128) = 4;
    std::pair<std::string,std::string>::pair<char const(&)[31],char const(&)[36],true>(
      (std::pair<std::string,std::string > *const)(v1 + 784),
      (const char (*)[31])byte_1AC2D2A0,
      (const char (*)[36])"PROUD_EFFECT_COMBINE_ADD_EXTRA_PROB");
    std::pair<data::ProudLifeEffectType const,std::pair<std::string,std::string>>::pair<data::ProudLifeEffectType,true>(
      (std::pair<const data::ProudLifeEffectType,std::pair<std::string,std::string > > *const)(v1 + 2704),
      (data::ProudLifeEffectType *)(v1 + 128),
      (const std::pair<std::string,std::string > *)(v1 + 784));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, v1 + 128);
    *(_DWORD *)(v1 + 144) = 5;
    std::pair<std::string,std::string>::pair<char const(&)[22],char const(&)[45],true>(
      (std::pair<std::string,std::string > *const)(v1 + 880),
      (const char (*)[22])byte_1AC2D2E0,
      (const char (*)[45])"PROUD_EFFECT_COMBINE_RETURN_SPECIAL_MATERIAL");
    std::pair<data::ProudLifeEffectType const,std::pair<std::string,std::string>>::pair<data::ProudLifeEffectType,true>(
      (std::pair<const data::ProudLifeEffectType,std::pair<std::string,std::string > > *const)(v1 + 2776),
      (data::ProudLifeEffectType *)(v1 + 144),
      (const std::pair<std::string,std::string > *)(v1 + 880));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, v1 + 144);
    *(_DWORD *)(v1 + 160) = 101;
    std::pair<std::string,std::string>::pair<char const(&)[28],char const(&)[36],true>(
      (std::pair<std::string,std::string > *const)(v1 + 976),
      (const char (*)[28])byte_1AC2D320,
      (const char (*)[36])"PROUD_EFFECT_COOK_EXTRA_PROFICIENCY");
    std::pair<data::ProudLifeEffectType const,std::pair<std::string,std::string>>::pair<data::ProudLifeEffectType,true>(
      (std::pair<const data::ProudLifeEffectType,std::pair<std::string,std::string > > *const)(v1 + 2848),
      (data::ProudLifeEffectType *)(v1 + 160),
      (const std::pair<std::string,std::string > *)(v1 + 976));
    if ( *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 176, v1 + 160);
    *(_DWORD *)(v1 + 176) = 102;
    std::pair<std::string,std::string>::pair<char const(&)[28],char const(&)[35],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1072),
      (const char (*)[28])byte_1AC2D360,
      (const char (*)[35])"PROUD_EFFECT_COOK_WIDEN_JUDGE_AREA");
    std::pair<data::ProudLifeEffectType const,std::pair<std::string,std::string>>::pair<data::ProudLifeEffectType,true>(
      (std::pair<const data::ProudLifeEffectType,std::pair<std::string,std::string > > *const)(v1 + 2920),
      (data::ProudLifeEffectType *)(v1 + 176),
      (const std::pair<std::string,std::string > *)(v1 + 1072));
    if ( *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 192, v1 + 176);
    *(_DWORD *)(v1 + 192) = 103;
    std::pair<std::string,std::string>::pair<char const(&)[31],char const(&)[33],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1168),
      (const char (*)[31])byte_1AC2D3A0,
      (const char (*)[33])"PROUD_EFFECT_COOK_ADD_BONUS_PROB");
    std::pair<data::ProudLifeEffectType const,std::pair<std::string,std::string>>::pair<data::ProudLifeEffectType,true>(
      (std::pair<const data::ProudLifeEffectType,std::pair<std::string,std::string > > *const)(v1 + 2992),
      (data::ProudLifeEffectType *)(v1 + 192),
      (const std::pair<std::string,std::string > *)(v1 + 1168));
    if ( *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 208, v1 + 192);
    *(_DWORD *)(v1 + 208) = 104;
    std::pair<std::string,std::string>::pair<char const(&)[31],char const(&)[39],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1264),
      (const char (*)[31])byte_1AC2D3E0,
      (const char (*)[39])"PROUD_EFFECT_COOK_PERFECT_MULTI_OUTPUT");
    std::pair<data::ProudLifeEffectType const,std::pair<std::string,std::string>>::pair<data::ProudLifeEffectType,true>(
      (std::pair<const data::ProudLifeEffectType,std::pair<std::string,std::string > > *const)(v1 + 3064),
      (data::ProudLifeEffectType *)(v1 + 208),
      (const std::pair<std::string,std::string > *)(v1 + 1264));
    if ( *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 224, v1 + 208);
    *(_DWORD *)(v1 + 224) = 105;
    std::pair<std::string,std::string>::pair<char const(&)[25],char const(&)[36],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1360),
      (const char (*)[25])byte_1AC2D420,
      (const char (*)[36])"PROUD_EFFECT_COOK_PROB_MULTI_OUTPUT");
    std::pair<data::ProudLifeEffectType const,std::pair<std::string,std::string>>::pair<data::ProudLifeEffectType,true>(
      (std::pair<const data::ProudLifeEffectType,std::pair<std::string,std::string > > *const)(v1 + 3136),
      (data::ProudLifeEffectType *)(v1 + 224),
      (const std::pair<std::string,std::string > *)(v1 + 1360));
    if ( *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 240, v1 + 224);
    *(_DWORD *)(v1 + 240) = 106;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[31],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1456),
      (const char (*)[19])byte_1AC2D460,
      (const char (*)[31])"PROUD_EFFECT_COOK_CAN_NOT_COOK");
    std::pair<data::ProudLifeEffectType const,std::pair<std::string,std::string>>::pair<data::ProudLifeEffectType,true>(
      (std::pair<const data::ProudLifeEffectType,std::pair<std::string,std::string > > *const)(v1 + 3208),
      (data::ProudLifeEffectType *)(v1 + 240),
      (const std::pair<std::string,std::string > *)(v1 + 1456));
    if ( *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 256, v1 + 240);
    *(_DWORD *)(v1 + 256) = 203;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[31],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1552),
      (const char (*)[19])byte_1AC2D4A0,
      (const char (*)[31])"PROUD_EFFECT_FORGE_REDUCE_TIME");
    std::pair<data::ProudLifeEffectType const,std::pair<std::string,std::string>>::pair<data::ProudLifeEffectType,true>(
      (std::pair<const data::ProudLifeEffectType,std::pair<std::string,std::string > > *const)(v1 + 3280),
      (data::ProudLifeEffectType *)(v1 + 256),
      (const std::pair<std::string,std::string > *)(v1 + 1552));
    if ( *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 272, v1 + 256);
    *(_DWORD *)(v1 + 272) = 204;
    std::pair<std::string,std::string>::pair<char const(&)[31],char const(&)[34],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1648),
      (const char (*)[31])byte_1AC2D4E0,
      (const char (*)[34])"PROUD_EFFECT_FORGE_ADD_EXTRA_PROB");
    std::pair<data::ProudLifeEffectType const,std::pair<std::string,std::string>>::pair<data::ProudLifeEffectType,true>(
      (std::pair<const data::ProudLifeEffectType,std::pair<std::string,std::string > > *const)(v1 + 3352),
      (data::ProudLifeEffectType *)(v1 + 272),
      (const std::pair<std::string,std::string > *)(v1 + 1648));
    if ( *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 288, v1 + 272);
    *(_DWORD *)(v1 + 288) = 205;
    std::pair<std::string,std::string>::pair<char const(&)[22],char const(&)[35],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1744),
      (const char (*)[22])byte_1AC2D520,
      (const char (*)[35])"PROUD_EFFECT_FORGE_RETURN_MATERIAL");
    std::pair<data::ProudLifeEffectType const,std::pair<std::string,std::string>>::pair<data::ProudLifeEffectType,true>(
      (std::pair<const data::ProudLifeEffectType,std::pair<std::string,std::string > > *const)(v1 + 3424),
      (data::ProudLifeEffectType *)(v1 + 288),
      (const std::pair<std::string,std::string > *)(v1 + 1744));
    if ( *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 304, v1 + 288);
    *(_DWORD *)(v1 + 304) = 301;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[37],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1840),
      (const char (*)[19])byte_1AC2D560,
      (const char (*)[37])"PROUD_EFFECT_EXPEDITION_SHORTEN_TIME");
    std::pair<data::ProudLifeEffectType const,std::pair<std::string,std::string>>::pair<data::ProudLifeEffectType,true>(
      (std::pair<const data::ProudLifeEffectType,std::pair<std::string,std::string > > *const)(v1 + 3496),
      (data::ProudLifeEffectType *)(v1 + 304),
      (const std::pair<std::string,std::string > *)(v1 + 1840));
    if ( *(_BYTE *)(((v1 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 320) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 320, v1 + 304);
    *(_DWORD *)(v1 + 320) = 302;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[37],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1936),
      (const char (*)[19])byte_1AC2D5A0,
      (const char (*)[37])"PROUD_EFFECT_EXPEDITION_EXTRA_OUTPUT");
    std::pair<data::ProudLifeEffectType const,std::pair<std::string,std::string>>::pair<data::ProudLifeEffectType,true>(
      (std::pair<const data::ProudLifeEffectType,std::pair<std::string,std::string > > *const)(v1 + 3568),
      (data::ProudLifeEffectType *)(v1 + 320),
      (const std::pair<std::string,std::string > *)(v1 + 1936));
    if ( *(_BYTE *)(((v1 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 336) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 336, v1 + 320);
    *(_DWORD *)(v1 + 336) = 401;
    std::pair<std::string,std::string>::pair<char const(&)[28],char const(&)[44],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2032),
      (const char (*)[28])byte_1AC2D5E0,
      (const char (*)[44])"PROUD_EFFECT_FURNITURE_MAKE_RETURN_MATERIAL");
    std::pair<data::ProudLifeEffectType const,std::pair<std::string,std::string>>::pair<data::ProudLifeEffectType,true>(
      (std::pair<const data::ProudLifeEffectType,std::pair<std::string,std::string > > *const)(v1 + 3640),
      (data::ProudLifeEffectType *)(v1 + 336),
      (const std::pair<std::string,std::string > *)(v1 + 2032));
    if ( *(_BYTE *)(((v1 + 352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 352) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 352, v1 + 336);
    *(_DWORD *)(v1 + 352) = 501;
    std::pair<std::string,std::string>::pair<char const(&)[31],char const(&)[41],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2128),
      (const char (*)[31])byte_1AC2D620,
      (const char (*)[41])"PROUD_EFFECT_WEAPON_PROMOTE_REDUCE_SCOIN");
    std::pair<data::ProudLifeEffectType const,std::pair<std::string,std::string>>::pair<data::ProudLifeEffectType,true>(
      (std::pair<const data::ProudLifeEffectType,std::pair<std::string,std::string > > *const)(v1 + 3712),
      (data::ProudLifeEffectType *)(v1 + 352),
      (const std::pair<std::string,std::string > *)(v1 + 2128));
    if ( *(_BYTE *)(((v1 + 368) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 368) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 368, v1 + 352);
    *(_DWORD *)(v1 + 368) = 601;
    std::pair<std::string,std::string>::pair<char const(&)[25],char const(&)[34],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2224),
      (const char (*)[25])byte_1AC2D660,
      (const char (*)[34])"PROUD_EFFECT_FISHING_EXTRA_OUTPUT");
    std::pair<data::ProudLifeEffectType const,std::pair<std::string,std::string>>::pair<data::ProudLifeEffectType,true>(
      (std::pair<const data::ProudLifeEffectType,std::pair<std::string,std::string > > *const)(v1 + 3784),
      (data::ProudLifeEffectType *)(v1 + 368),
      (const std::pair<std::string,std::string > *)(v1 + 2224));
    if ( *(_BYTE *)(((v1 + 384) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 384) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 384, v1 + 368);
    *(_DWORD *)(v1 + 384) = 701;
    std::pair<std::string,std::string>::pair<char const(&)[25],char const(&)[35],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2320),
      (const char (*)[25])byte_1AC2D6A0,
      (const char (*)[35])"PROUD_EFFECT_HIT_TREE_EXTRA_OUTPUT");
    std::pair<data::ProudLifeEffectType const,std::pair<std::string,std::string>>::pair<data::ProudLifeEffectType,true>(
      (std::pair<const data::ProudLifeEffectType,std::pair<std::string,std::string > > *const)(v1 + 3856),
      (data::ProudLifeEffectType *)(v1 + 384),
      (const std::pair<std::string,std::string > *)(v1 + 2320));
    std::allocator<std::pair<data::ProudLifeEffectType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::ProudLifeEffectType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    std::map<data::ProudLifeEffectType,std::pair<std::string,std::string>>::map(
      &data::getProudLifeEffectTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::ProudLifeEffectType,std::pair<std::string,std::string > > >)__PAIR128__(21LL, v1 + 2416),
      (const std::less<data::ProudLifeEffectType> *)(v1 + 32),
      (const std::map<data::ProudLifeEffectType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 48));
    __cxa_guard_release(&`guard variable for'data::getProudLifeEffectTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::ProudLifeEffectType,std::pair<std::string,std::string>>::~map,
      &data::getProudLifeEffectTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::ProudLifeEffectType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::ProudLifeEffectType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::ProudLifeEffectType,std::pair<std::string,std::string > > *)(v1 + 3928);
          i != (std::pair<const data::ProudLifeEffectType,std::pair<std::string,std::string > > *)(v1 + 2416);
          std::pair<data::ProudLifeEffectType const,std::pair<std::string,std::string>>::~pair(i) )
    {
      --i;
    }
    __asan_poison_stack_memory(v1 + 2416, 1512LL);
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2320));
    v5 = (_DWORD *)(((v1 + 2320) >> 3) + 2147450880);
    *v5 = -117901064;
    v5[1] = -117901064;
    *(_BYTE *)(((v1 + 384) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2224));
    v6 = (_DWORD *)(((v1 + 2224) >> 3) + 2147450880);
    *v6 = -117901064;
    v6[1] = -117901064;
    *(_BYTE *)(((v1 + 368) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2128));
    v7 = (_DWORD *)(((v1 + 2128) >> 3) + 2147450880);
    *v7 = -117901064;
    v7[1] = -117901064;
    *(_BYTE *)(((v1 + 352) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2032));
    v8 = (_DWORD *)(((v1 + 2032) >> 3) + 2147450880);
    *v8 = -117901064;
    v8[1] = -117901064;
    *(_BYTE *)(((v1 + 336) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1936));
    v9 = (_DWORD *)(((v1 + 1936) >> 3) + 2147450880);
    *v9 = -117901064;
    v9[1] = -117901064;
    *(_BYTE *)(((v1 + 320) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1840));
    v10 = (_DWORD *)(((v1 + 1840) >> 3) + 2147450880);
    *v10 = -117901064;
    v10[1] = -117901064;
    *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1744));
    v11 = (_DWORD *)(((v1 + 1744) >> 3) + 2147450880);
    *v11 = -117901064;
    v11[1] = -117901064;
    *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1648));
    v12 = (_DWORD *)(((v1 + 1648) >> 3) + 2147450880);
    *v12 = -117901064;
    v12[1] = -117901064;
    *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1552));
    v13 = (_DWORD *)(((v1 + 1552) >> 3) + 2147450880);
    *v13 = -117901064;
    v13[1] = -117901064;
    *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1456));
    v14 = (_DWORD *)(((v1 + 1456) >> 3) + 2147450880);
    *v14 = -117901064;
    v14[1] = -117901064;
    *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1360));
    v15 = (_DWORD *)(((v1 + 1360) >> 3) + 2147450880);
    *v15 = -117901064;
    v15[1] = -117901064;
    *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1264));
    v16 = (_DWORD *)(((v1 + 1264) >> 3) + 2147450880);
    *v16 = -117901064;
    v16[1] = -117901064;
    *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1168));
    v17 = (_DWORD *)(((v1 + 1168) >> 3) + 2147450880);
    *v17 = -117901064;
    v17[1] = -117901064;
    *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1072));
    v18 = (_DWORD *)(((v1 + 1072) >> 3) + 2147450880);
    *v18 = -117901064;
    v18[1] = -117901064;
    *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 976));
    v19 = (_DWORD *)(((v1 + 976) >> 3) + 2147450880);
    *v19 = -117901064;
    v19[1] = -117901064;
    *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 880));
    v20 = (_DWORD *)(((v1 + 880) >> 3) + 2147450880);
    *v20 = -117901064;
    v20[1] = -117901064;
    *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 784));
    v21 = (_DWORD *)(((v1 + 784) >> 3) + 2147450880);
    *v21 = -117901064;
    v21[1] = -117901064;
    *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 688));
    v22 = (_DWORD *)(((v1 + 688) >> 3) + 2147450880);
    *v22 = -117901064;
    v22[1] = -117901064;
    *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 592));
    v23 = (_DWORD *)(((v1 + 592) >> 3) + 2147450880);
    *v23 = -117901064;
    v23[1] = -117901064;
    *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 496));
    v24 = (_DWORD *)(((v1 + 496) >> 3) + 2147450880);
    *v24 = -117901064;
    v24[1] = -117901064;
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 400));
  }
  if ( v26 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF81F4) = 0LL;
    memset(
      (void *)((unsigned __int64)(v3 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v3 + 2147450880 - (((_DWORD)v3 + 2147450888) & 0xFFFFFFF8) + 508) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    __asan_stack_free_6(v1, 4064LL, v26);
  }
  return &data::getProudLifeEffectTypeEnumMap[abi:cxx11](void)::m;
};

// Line 565: range 000000001390A2E0-000000001390C1E9
int32_t __cdecl data::AvatarTalentExcelConfig::init(
        data::AvatarTalentExcelConfig *const this,
        const common::tools::TxtFile::Row *row)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r15
  common::milog::MiLogStream *v6; // rax
  int v7; // eax
  bool v8; // r15
  data::FightPropType *p_prop_type; // r15
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  bool v13; // r15
  float *p_value; // r15
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  bool v18; // r15
  float *v19; // r15
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  bool v23; // r15
  common::milog::MiLogStream *v24; // rax
  bool v25; // r15
  common::milog::MiLogStream *v26; // rax
  bool v27; // r15
  common::milog::MiLogStream *v28; // rax
  bool v29; // r15
  common::milog::MiLogStream *v30; // rax
  bool v31; // r15
  common::milog::MiLogStream *v32; // rax
  bool v33; // r15
  common::milog::MiLogStream *v34; // rax
  int32_t v35; // ebx
  uint32_t array_count; // [rsp+14h] [rbp-83Ch]
  uint32_t array_counta; // [rsp+14h] [rbp-83Ch]
  uint32_t i; // [rsp+18h] [rbp-838h]
  uint32_t i_0; // [rsp+1Ch] [rbp-834h]
  char v41[2096]; // [rsp+20h] [rbp-830h] BYREF

  v2 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(2048LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "37 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 <unkn"
                        "own> 224 1 9 <unknown> 240 1 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown"
                        "> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown>"
                        " 768 32 9 <unknown> 832 32 9 <unknown> 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown>"
                        " 1088 32 9 <unknown> 1152 32 9 <unknown> 1216 32 9 <unknown> 1280 32 9 <unknown> 1344 32 9 <unkn"
                        "own> 1408 32 9 <unknown> 1472 32 9 <unknown> 1536 32 9 <unknown> 1600 32 9 <unknown> 1664 32 9 <"
                        "unknown> 1728 256 12 col_name:566";
  *(_QWORD *)(v2 + 16) = data::AvatarTalentExcelConfig::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862724] = -234753535;
  v4[536862725] = -234753535;
  v4[536862726] = -234753535;
  v4[536862727] = -234753535;
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
  v4[536862757] = -218959118;
  v4[536862759] = -218959118;
  v4[536862761] = -218959118;
  v4[536862763] = -218959118;
  v4[536862765] = -218959118;
  v4[536862767] = -218959118;
  v4[536862769] = -218959118;
  v4[536862771] = -218959118;
  v4[536862773] = -218959118;
  v4[536862782] = -202116109;
  v4[536862783] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 256),
    &byte_1AC2E680,
    (const std::allocator<char> *)(v2 + 48));
  v5 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 256), &this->open_config) != 0;
  std::string::~string((void *)(v2 + 256));
  *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
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
      "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
      "init",
      570);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 320),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v6, (const char (*)[39])byte_1AC2E6C0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
    v7 = -1;
  }
  else
  {
    std::vector<data::PropValConfig>::resize(&this->add_props, 3uLL);
    array_count = 0;
    for ( i = 0; i <= 2; ++i )
    {
      snprintf((char *)(v2 + 1728), 0x100uLL, asc_1AC25D80, i + 1);
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 384),
        (const char *)(v2 + 1728),
        (const std::allocator<char> *)(v2 + 64));
      v8 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 384));
      std::string::~string((void *)(v2 + 384));
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( !v8 )
      {
        p_prop_type = &std::vector<data::PropValConfig>::operator[](&this->add_props, i)->prop_type;
        *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 448),
          (const char *)(v2 + 1728),
          (const std::allocator<char> *)(v2 + 80));
        LOBYTE(p_prop_type) = common::tools::TxtFile::Row::assignToEnum<data::FightPropType>(
                                row,
                                (const std::string *)(v2 + 448),
                                p_prop_type) != 0;
        std::string::~string((void *)(v2 + 448));
        *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( (_BYTE)p_prop_type )
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
            "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
            "init",
            582);
          v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 512),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v10, (const char (*)[14])byte_1ABFD420);
          v12 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(v11, (const char (*)[256])(v2 + 1728));
          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])byte_1ABFD460);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
          v7 = -1;
          goto LABEL_56;
        }
        snprintf((char *)(v2 + 1728), 0x100uLL, asc_1AC25DC0, i + 1);
        *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 576),
          (const char *)(v2 + 1728),
          (const std::allocator<char> *)(v2 + 96));
        v13 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 576));
        std::string::~string((void *)(v2 + 576));
        *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( !v13 )
        {
          p_value = &std::vector<data::PropValConfig>::operator[](&this->add_props, i)->value;
          *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 112);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 640),
            (const char *)(v2 + 1728),
            (const std::allocator<char> *)(v2 + 112));
          LOBYTE(p_value) = common::tools::TxtFile::Row::assignToNum<float>(
                              row,
                              (const std::string *)(v2 + 640),
                              p_value) != 0;
          std::string::~string((void *)(v2 + 640));
          *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( (_BYTE)p_value )
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
              "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
              "init",
              590);
            v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 704),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v16 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v15,
                    (const char (*)[14])byte_1ABFD420);
            v17 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                    v16,
                    (const char (*)[256])(v2 + 1728));
            common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v17, (const char (*)[7])byte_1ABFD460);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
            v7 = -1;
            goto LABEL_56;
          }
          array_count = i + 1;
        }
      }
    }
    std::vector<data::PropValConfig>::resize(&this->add_props, array_count);
    std::vector<float>::resize(&this->param_list, 0x14uLL);
    array_counta = 0;
    for ( i_0 = 0; i_0 <= 0x13; ++i_0 )
    {
      snprintf((char *)(v2 + 1728), 0x100uLL, &byte_1AC2E720, i_0 + 1);
      *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 128);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 768),
        (const char *)(v2 + 1728),
        (const std::allocator<char> *)(v2 + 128));
      v18 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 768));
      std::string::~string((void *)(v2 + 768));
      *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 128);
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      if ( !v18 )
      {
        v19 = std::vector<float>::operator[](&this->param_list, i_0);
        *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 144);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 832),
          (const char *)(v2 + 1728),
          (const std::allocator<char> *)(v2 + 144));
        LOBYTE(v19) = common::tools::TxtFile::Row::assignToNum<float>(row, (const std::string *)(v2 + 832), v19) != 0;
        std::string::~string((void *)(v2 + 832));
        *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 144);
        *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
        if ( (_BYTE)v19 )
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
            "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
            "init",
            606);
          v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 896),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v21 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v20, (const char (*)[14])byte_1ABFD420);
          v22 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(v21, (const char (*)[256])(v2 + 1728));
          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v22, (const char (*)[7])byte_1ABFD460);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 896));
          v7 = -1;
          goto LABEL_56;
        }
        array_counta = i_0 + 1;
      }
    }
    std::vector<float>::resize(&this->param_list, array_counta);
    *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 160);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 960),
      &byte_1AC2E760,
      (const std::allocator<char> *)(v2 + 160));
    v23 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 960), &this->talent_id) != 0;
    std::string::~string((void *)(v2 + 960));
    *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 160);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v23 )
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
        "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
        "init",
        615);
      v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 1024),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v24, (const char (*)[29])byte_1AC2E7A0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1024));
      v7 = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 176);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 1088),
        &byte_1AC2E7E0,
        (const std::allocator<char> *)(v2 + 176));
      v25 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
              row,
              (const std::string *)(v2 + 1088),
              &this->prev_talent) != 0;
      std::string::~string((void *)(v2 + 1088));
      *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 176);
      *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
      if ( v25 )
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
          "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
          "init",
          620);
        v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 1152),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v26, (const char (*)[33])byte_1AC2E820);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1152));
        v7 = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 192);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 1216),
          &byte_1AC2E880,
          (const std::allocator<char> *)(v2 + 192));
        v27 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                row,
                (const std::string *)(v2 + 1216),
                &this->main_cost_item_id) != 0;
        std::string::~string((void *)(v2 + 1216));
        *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 192);
        *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
        if ( v27 )
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
            "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
            "init",
            625);
          v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 1280),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v28, (const char (*)[44])byte_1AC2E8C0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1280));
          v7 = -1;
        }
        else
        {
          *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 208);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1344),
            &byte_1AC2E920,
            (const std::allocator<char> *)(v2 + 208));
          v29 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                  row,
                  (const std::string *)(v2 + 1344),
                  &this->main_cost_item_count) != 0;
          std::string::~string((void *)(v2 + 1344));
          *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 208);
          *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
          if ( v29 )
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
              "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
              "init",
              630);
            v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 1408),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v30, (const char (*)[48])byte_1AC2E960);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1408));
            v7 = -1;
          }
          else
          {
            *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 224);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1472),
              &byte_1AC2E9C0,
              (const std::allocator<char> *)(v2 + 224));
            v31 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                    row,
                    (const std::string *)(v2 + 1472),
                    &this->vice_cost_item_id) != 0;
            std::string::~string((void *)(v2 + 1472));
            *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 224);
            *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
            if ( v31 )
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
                "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
                "init",
                635);
              v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1536),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v32, (const char (*)[44])byte_1AC2EA00);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1536));
              v7 = -1;
            }
            else
            {
              *(_DWORD *)(((v2 + 1600) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 240);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1600),
                &byte_1AC2EA60,
                (const std::allocator<char> *)(v2 + 240));
              v33 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                      row,
                      (const std::string *)(v2 + 1600),
                      &this->vice_cost_item_count) != 0;
              std::string::~string((void *)(v2 + 1600));
              *(_DWORD *)(((v2 + 1600) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 240);
              *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
              if ( v33 )
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
                  "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
                  "init",
                  640);
                v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1664),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v34, (const char (*)[48])byte_1AC2EAA0);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1664));
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
LABEL_56:
  v35 = v7;
  if ( v41 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF803C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8054) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF805C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8064) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF806C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8074) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF807C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8084) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF808C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8094) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF809C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80A4) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80AC) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80B4) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80BC) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80C4) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80CC) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80D4) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80F8) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 2048LL, v41);
  }
  return v35;
};

// Line 648: range 000000001390C1EA-000000001390FA07
int32_t __cdecl data::ProudSkillExcelConfig::init(
        data::ProudSkillExcelConfig *const this,
        const common::tools::TxtFile::Row *row)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r15
  common::milog::MiLogStream *v6; // rax
  int v7; // eax
  bool v8; // r15
  data::FightPropType *p_prop_type; // r15
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  bool v13; // r15
  float *p_value; // r15
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  bool v18; // r15
  float *v19; // r15
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  bool v23; // r15
  common::milog::MiLogStream *v24; // rax
  bool v25; // r15
  common::milog::MiLogStream *v26; // rax
  bool v27; // r15
  common::milog::MiLogStream *v28; // rax
  bool v29; // r15
  common::milog::MiLogStream *v30; // rax
  bool v31; // r15
  common::milog::MiLogStream *v32; // rax
  bool v33; // r15
  unsigned int *p_id; // r15
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  bool v38; // r15
  unsigned int *p_count; // r15
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  bool v43; // r15
  data::TalentFilterCond *v44; // r15
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  bool v48; // r15
  common::milog::MiLogStream *v49; // rax
  bool v50; // r15
  common::milog::MiLogStream *v51; // rax
  bool v52; // r15
  std::string *v53; // r15
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  bool v57; // r15
  common::milog::MiLogStream *v58; // rax
  bool v59; // r15
  common::milog::MiLogStream *v60; // rax
  int32_t v61; // ebx
  uint32_t array_count; // [rsp+18h] [rbp-D68h]
  uint32_t array_counta; // [rsp+18h] [rbp-D68h]
  uint32_t array_countb; // [rsp+18h] [rbp-D68h]
  uint32_t array_countc; // [rsp+18h] [rbp-D68h]
  uint32_t array_countd; // [rsp+18h] [rbp-D68h]
  uint32_t i; // [rsp+1Ch] [rbp-D64h]
  uint32_t i_0; // [rsp+20h] [rbp-D60h]
  uint32_t i_1; // [rsp+24h] [rbp-D5Ch]
  uint32_t i_2; // [rsp+28h] [rbp-D58h]
  uint32_t i_3; // [rsp+2Ch] [rbp-D54h]
  char v73[3408]; // [rsp+30h] [rbp-D50h] BYREF

  v2 = (unsigned __int64)v73;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(3360LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "66 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unkno"
                        "wn> 208 1 9 <unknown> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 28"
                        "8 1 9 <unknown> 304 1 9 <unknown> 320 1 9 <unknown> 336 1 9 <unknown> 352 1 9 <unknown> 368 1 9 "
                        "<unknown> 384 1 9 <unknown> 400 1 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <un"
                        "known> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unk"
                        "nown> 928 32 9 <unknown> 992 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <unknown> 1184 32 9 <u"
                        "nknown> 1248 32 9 <unknown> 1312 32 9 <unknown> 1376 32 9 <unknown> 1440 32 9 <unknown> 1504 32 "
                        "9 <unknown> 1568 32 9 <unknown> 1632 32 9 <unknown> 1696 32 9 <unknown> 1760 32 9 <unknown> 1824"
                        " 32 9 <unknown> 1888 32 9 <unknown> 1952 32 9 <unknown> 2016 32 9 <unknown> 2080 32 9 <unknown> "
                        "2144 32 9 <unknown> 2208 32 9 <unknown> 2272 32 9 <unknown> 2336 32 9 <unknown> 2400 32 9 <unkno"
                        "wn> 2464 32 9 <unknown> 2528 32 9 <unknown> 2592 32 9 <unknown> 2656 32 9 <unknown> 2720 32 9 <u"
                        "nknown> 2784 32 9 <unknown> 2848 32 9 <unknown> 2912 32 9 <unknown> 2976 32 9 <unknown> 3040 256"
                        " 12 col_name:649";
  *(_QWORD *)(v2 + 16) = data::ProudSkillExcelConfig::init;
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
  v4[536862823] = -202116109;
  v4[536862824] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 416),
    &byte_1AC2E680,
    (const std::allocator<char> *)(v2 + 32));
  v5 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 416), &this->open_config) != 0;
  std::string::~string((void *)(v2 + 416));
  *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
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
      "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
      "init",
      653);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 480),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v6, (const char (*)[39])byte_1AC2E6C0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
    v7 = -1;
  }
  else
  {
    std::vector<data::PropValConfig>::resize(&this->add_props, 3uLL);
    array_count = 0;
    for ( i = 0; i <= 2; ++i )
    {
      snprintf((char *)(v2 + 3040), 0x100uLL, asc_1AC25D80, i + 1);
      *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 48);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 544),
        (const char *)(v2 + 3040),
        (const std::allocator<char> *)(v2 + 48));
      v8 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 544));
      std::string::~string((void *)(v2 + 544));
      *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 48);
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( !v8 )
      {
        p_prop_type = &std::vector<data::PropValConfig>::operator[](&this->add_props, i)->prop_type;
        *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 64);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 608),
          (const char *)(v2 + 3040),
          (const std::allocator<char> *)(v2 + 64));
        LOBYTE(p_prop_type) = common::tools::TxtFile::Row::assignToEnum<data::FightPropType>(
                                row,
                                (const std::string *)(v2 + 608),
                                p_prop_type) != 0;
        std::string::~string((void *)(v2 + 608));
        *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 64);
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
        if ( (_BYTE)p_prop_type )
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
            "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
            "init",
            665);
          v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 672),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v10, (const char (*)[14])byte_1ABFD420);
          v12 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(v11, (const char (*)[256])(v2 + 3040));
          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])byte_1ABFD460);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
          v7 = -1;
          goto LABEL_100;
        }
        snprintf((char *)(v2 + 3040), 0x100uLL, asc_1AC25DC0, i + 1);
        *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 736),
          (const char *)(v2 + 3040),
          (const std::allocator<char> *)(v2 + 80));
        v13 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 736));
        std::string::~string((void *)(v2 + 736));
        *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( !v13 )
        {
          p_value = &std::vector<data::PropValConfig>::operator[](&this->add_props, i)->value;
          *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 96);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 800),
            (const char *)(v2 + 3040),
            (const std::allocator<char> *)(v2 + 96));
          LOBYTE(p_value) = common::tools::TxtFile::Row::assignToNum<float>(
                              row,
                              (const std::string *)(v2 + 800),
                              p_value) != 0;
          std::string::~string((void *)(v2 + 800));
          *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 96);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( (_BYTE)p_value )
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
              "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
              "init",
              673);
            v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 864),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v16 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v15,
                    (const char (*)[14])byte_1ABFD420);
            v17 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                    v16,
                    (const char (*)[256])(v2 + 3040));
            common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v17, (const char (*)[7])byte_1ABFD460);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 864));
            v7 = -1;
            goto LABEL_100;
          }
          array_count = i + 1;
        }
      }
    }
    std::vector<data::PropValConfig>::resize(&this->add_props, array_count);
    std::vector<float>::resize(&this->param_list, 0x14uLL);
    array_counta = 0;
    for ( i_0 = 0; i_0 <= 0x13; ++i_0 )
    {
      snprintf((char *)(v2 + 3040), 0x100uLL, &byte_1AC2E720, i_0 + 1);
      *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 112);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 928),
        (const char *)(v2 + 3040),
        (const std::allocator<char> *)(v2 + 112));
      v18 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 928));
      std::string::~string((void *)(v2 + 928));
      *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 112);
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      if ( !v18 )
      {
        v19 = std::vector<float>::operator[](&this->param_list, i_0);
        *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 128);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 992),
          (const char *)(v2 + 3040),
          (const std::allocator<char> *)(v2 + 128));
        LOBYTE(v19) = common::tools::TxtFile::Row::assignToNum<float>(row, (const std::string *)(v2 + 992), v19) != 0;
        std::string::~string((void *)(v2 + 992));
        *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 128);
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
        if ( (_BYTE)v19 )
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
            "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
            "init",
            689);
          v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 1056),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v21 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v20, (const char (*)[14])byte_1ABFD420);
          v22 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(v21, (const char (*)[256])(v2 + 3040));
          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v22, (const char (*)[7])byte_1ABFD460);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1056));
          v7 = -1;
          goto LABEL_100;
        }
        array_counta = i_0 + 1;
      }
    }
    std::vector<float>::resize(&this->param_list, array_counta);
    *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 144);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 1120),
      &byte_1AC07580,
      (const std::allocator<char> *)(v2 + 144));
    v23 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
            row,
            (const std::string *)(v2 + 1120),
            &this->proud_skill_id) != 0;
    std::string::~string((void *)(v2 + 1120));
    *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 144);
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
    if ( v23 )
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
        "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
        "init",
        698);
      v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 1184),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v24, (const char (*)[29])byte_1AC075C0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1184));
      v7 = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 160);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 1248),
        &byte_1AC2F000,
        (const std::allocator<char> *)(v2 + 160));
      v25 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
              row,
              (const std::string *)(v2 + 1248),
              &this->proud_skill_group_id) != 0;
      std::string::~string((void *)(v2 + 1248));
      *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 160);
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
      if ( v25 )
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
          "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
          "init",
          703);
        v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 1312),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v26, (const char (*)[32])byte_1AC2F040);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1312));
        v7 = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 176);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 1376),
          &byte_1AC255C0,
          (const std::allocator<char> *)(v2 + 176));
        v27 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                row,
                (const std::string *)(v2 + 1376),
                &this->level) != 0;
        std::string::~string((void *)(v2 + 1376));
        *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 176);
        *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
        if ( v27 )
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
            "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
            "init",
            708);
          v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 1440),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v28, (const char (*)[27])byte_1AC25600);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1440));
          v7 = -1;
        }
        else
        {
          *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 192);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1504),
            &byte_1ABFE3C0,
            (const std::allocator<char> *)(v2 + 192));
          v29 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                  row,
                  (const std::string *)(v2 + 1504),
                  &this->proud_skill_type) != 0;
          std::string::~string((void *)(v2 + 1504));
          *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 192);
          *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
          if ( v29 )
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
              "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
              "init",
              713);
            v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 1568),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v30, (const char (*)[27])byte_1ABFE400);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1568));
            v7 = -1;
          }
          else
          {
            *(_DWORD *)(((v2 + 1632) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 208);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1632),
              &byte_1AC25BC0,
              (const std::allocator<char> *)(v2 + 208));
            v31 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                    row,
                    (const std::string *)(v2 + 1632),
                    &this->coin_cost) != 0;
            std::string::~string((void *)(v2 + 1632));
            *(_DWORD *)(((v2 + 1632) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 208);
            *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
            if ( v31 )
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
                "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
                "init",
                718);
              v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1696),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v32, (const char (*)[33])byte_1AC25C00);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1696));
              v7 = -1;
            }
            else
            {
              std::vector<data::IdCountConfig>::resize(&this->cost_items, 5uLL);
              array_countb = 0;
              for ( i_1 = 0; i_1 <= 4; ++i_1 )
              {
                snprintf((char *)(v2 + 3040), 0x100uLL, &byte_1AC2F080, i_1 + 1);
                *(_DWORD *)(((v2 + 1760) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 224);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1760),
                  (const char *)(v2 + 3040),
                  (const std::allocator<char> *)(v2 + 224));
                v33 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 1760));
                std::string::~string((void *)(v2 + 1760));
                *(_DWORD *)(((v2 + 1760) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 224);
                *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                if ( !v33 )
                {
                  p_id = &std::vector<data::IdCountConfig>::operator[](&this->cost_items, i_1)->id;
                  *(_DWORD *)(((v2 + 1824) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 240);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1824),
                    (const char *)(v2 + 3040),
                    (const std::allocator<char> *)(v2 + 240));
                  LOBYTE(p_id) = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                   row,
                                   (const std::string *)(v2 + 1824),
                                   p_id) != 0;
                  std::string::~string((void *)(v2 + 1824));
                  *(_DWORD *)(((v2 + 1824) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 240);
                  *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                  if ( (_BYTE)p_id )
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
                      "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
                      "init",
                      730);
                    v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 1888),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v36 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                            v35,
                            (const char (*)[14])byte_1ABFD420);
                    v37 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                            v36,
                            (const char (*)[256])(v2 + 3040));
                    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v37, (const char (*)[7])byte_1ABFD460);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1888));
                    v7 = -1;
                    goto LABEL_100;
                  }
                  snprintf((char *)(v2 + 3040), 0x100uLL, &byte_1AC2F0C0, i_1 + 1);
                  *(_DWORD *)(((v2 + 1952) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 256);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1952),
                    (const char *)(v2 + 3040),
                    (const std::allocator<char> *)(v2 + 256));
                  v38 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 1952));
                  std::string::~string((void *)(v2 + 1952));
                  *(_DWORD *)(((v2 + 1952) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 256);
                  *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                  if ( !v38 )
                  {
                    p_count = &std::vector<data::IdCountConfig>::operator[](&this->cost_items, i_1)->count;
                    *(_DWORD *)(((v2 + 2016) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 272);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 2016),
                      (const char *)(v2 + 3040),
                      (const std::allocator<char> *)(v2 + 272));
                    LOBYTE(p_count) = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                        row,
                                        (const std::string *)(v2 + 2016),
                                        p_count) != 0;
                    std::string::~string((void *)(v2 + 2016));
                    *(_DWORD *)(((v2 + 2016) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 272);
                    *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                    if ( (_BYTE)p_count )
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
                        "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
                        "init",
                        738);
                      v40 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 2080),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      v41 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                              v40,
                              (const char (*)[14])byte_1ABFD420);
                      v42 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                              v41,
                              (const char (*)[256])(v2 + 3040));
                      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                        v42,
                        (const char (*)[7])byte_1ABFD460);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2080));
                      v7 = -1;
                      goto LABEL_100;
                    }
                    array_countb = i_1 + 1;
                  }
                }
              }
              std::vector<data::IdCountConfig>::resize(&this->cost_items, array_countb);
              std::vector<data::TalentFilterCond>::resize(&this->filter_conds, 3uLL);
              array_countc = 0;
              for ( i_2 = 0; i_2 <= 2; ++i_2 )
              {
                snprintf((char *)(v2 + 3040), 0x100uLL, &byte_1AC2F100, i_2 + 1);
                *(_DWORD *)(((v2 + 2144) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 288);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 2144),
                  (const char *)(v2 + 3040),
                  (const std::allocator<char> *)(v2 + 288));
                v43 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 2144));
                std::string::~string((void *)(v2 + 2144));
                *(_DWORD *)(((v2 + 2144) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 288);
                *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
                if ( !v43 )
                {
                  v44 = std::vector<data::TalentFilterCond>::operator[](&this->filter_conds, i_2);
                  *(_DWORD *)(((v2 + 2208) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 304);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 2208),
                    (const char *)(v2 + 3040),
                    (const std::allocator<char> *)(v2 + 304));
                  LOBYTE(v44) = common::tools::TxtFile::Row::assignToEnum<data::TalentFilterCond>(
                                  row,
                                  (const std::string *)(v2 + 2208),
                                  v44) != 0;
                  std::string::~string((void *)(v2 + 2208));
                  *(_DWORD *)(((v2 + 2208) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 304);
                  *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
                  if ( (_BYTE)v44 )
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
                      "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
                      "init",
                      754);
                    v45 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 2272),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v46 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                            v45,
                            (const char (*)[14])byte_1ABFD420);
                    v47 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                            v46,
                            (const char (*)[256])(v2 + 3040));
                    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v47, (const char (*)[7])byte_1ABFD460);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2272));
                    v7 = -1;
                    goto LABEL_100;
                  }
                  array_countc = i_2 + 1;
                }
              }
              std::vector<data::TalentFilterCond>::resize(&this->filter_conds, array_countc);
              *(_DWORD *)(((v2 + 2336) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 320);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 2336),
                &byte_1AC25A80,
                (const std::allocator<char> *)(v2 + 320));
              v48 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                      row,
                      (const std::string *)(v2 + 2336),
                      &this->break_level) != 0;
              std::string::~string((void *)(v2 + 2336));
              *(_DWORD *)(((v2 + 2336) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 320);
              *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
              if ( v48 )
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
                  "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
                  "init",
                  763);
                v49 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 2400),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v49, (const char (*)[33])byte_1AC25AC0);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2400));
                v7 = -1;
              }
              else
              {
                *(_DWORD *)(((v2 + 2464) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 336);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 2464),
                  &byte_1AC2F140,
                  (const std::allocator<char> *)(v2 + 336));
                v50 = common::tools::TxtFile::Row::assignToEnum<data::ProudLifeEffectType>(
                        row,
                        (const std::string *)(v2 + 2464),
                        &this->life_effect_type) != 0;
                std::string::~string((void *)(v2 + 2464));
                *(_DWORD *)(((v2 + 2464) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 336);
                *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
                if ( v50 )
                {
                  *(_DWORD *)(((v2 + 2528) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 2528) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 2559) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 2559) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 2528, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 2528),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
                    "init",
                    768);
                  v51 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 2528),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                    v51,
                    (const char (*)[39])byte_1AC2F180);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2528));
                  v7 = -1;
                }
                else
                {
                  std::vector<std::string>::resize(&this->life_effect_params, 5uLL);
                  array_countd = 0;
                  for ( i_3 = 0; i_3 <= 4; ++i_3 )
                  {
                    snprintf((char *)(v2 + 3040), 0x100uLL, &byte_1AC2F1E0, i_3 + 1);
                    *(_DWORD *)(((v2 + 2592) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 352);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 2592),
                      (const char *)(v2 + 3040),
                      (const std::allocator<char> *)(v2 + 352));
                    v52 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 2592));
                    std::string::~string((void *)(v2 + 2592));
                    *(_DWORD *)(((v2 + 2592) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 352);
                    *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
                    if ( !v52 )
                    {
                      v53 = std::vector<std::string>::operator[](&this->life_effect_params, i_3);
                      *(_DWORD *)(((v2 + 2656) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 368);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 2656),
                        (const char *)(v2 + 3040),
                        (const std::allocator<char> *)(v2 + 368));
                      LOBYTE(v53) = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 2656), v53) != 0;
                      std::string::~string((void *)(v2 + 2656));
                      *(_DWORD *)(((v2 + 2656) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 368);
                      *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
                      if ( (_BYTE)v53 )
                      {
                        *(_DWORD *)(((v2 + 2720) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v2 + 2720) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v2 + 2751) >> 3) + 0x7FFF8000) != 0
                          && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 2751) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v2 + 2720, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v2 + 2720),
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
                          "init",
                          780);
                        v54 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                (common::milog::MiLogStream *const)(v2 + 2720),
                                (const char (*)[16])"[CONFIG_ERROR] ");
                        v55 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                v54,
                                (const char (*)[14])byte_1ABFD420);
                        v56 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                                v55,
                                (const char (*)[256])(v2 + 3040));
                        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                          v56,
                          (const char (*)[7])byte_1ABFD460);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2720));
                        v7 = -1;
                        goto LABEL_100;
                      }
                      array_countd = i_3 + 1;
                    }
                  }
                  std::vector<std::string>::resize(&this->life_effect_params, array_countd);
                  *(_DWORD *)(((v2 + 2784) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 384);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 2784),
                    &byte_1AC2F220,
                    (const std::allocator<char> *)(v2 + 384));
                  v57 = common::tools::TxtFile::Row::assignToNum<unsigned char>(
                          row,
                          (const std::string *)(v2 + 2784),
                          &this->effective_for_team) != 0;
                  std::string::~string((void *)(v2 + 2784));
                  *(_DWORD *)(((v2 + 2784) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 384);
                  *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
                  if ( v57 )
                  {
                    *(_DWORD *)(((v2 + 2848) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 2848) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 2879) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 2879) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 2848, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 2848),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
                      "init",
                      789);
                    v58 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 2848),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                      v58,
                      (const char (*)[39])byte_1AC2F260);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2848));
                    v7 = -1;
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 2912) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 400);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 2912),
                      &byte_1AC2F2C0,
                      (const std::allocator<char> *)(v2 + 400));
                    v59 = common::tools::TxtFile::Row::assignToNum<bool>(
                            row,
                            (const std::string *)(v2 + 2912),
                            &this->is_hide_life_proud_skill) != 0;
                    std::string::~string((void *)(v2 + 2912));
                    *(_DWORD *)(((v2 + 2912) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 400);
                    *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
                    if ( v59 )
                    {
                      *(_DWORD *)(((v2 + 2976) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 2976) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 3007) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 3007) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 2976, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 2976),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
                        "init",
                        794);
                      v60 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 2976),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                        v60,
                        (const char (*)[42])byte_1AC2F300);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2976));
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
LABEL_100:
  v61 = v7;
  if ( v73 == (char *)v2 )
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8050) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8068) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0LL;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF80C8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80D0) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80D8) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80E0) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80E8) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80F0) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80F8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8100) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8108) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8110) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8118) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8120) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8128) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8130) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8138) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8140) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8148) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8150) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8158) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8160) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8168) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8170) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8178) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF819C) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 3360LL, v73);
  }
  return v61;
};

// Line 803: range 000000001390FA08-0000000013910A0D
int32_t __cdecl data::AvatarTalentExcelConfigMgrBase::loadAvatarTalentExcelConfig(
        data::AvatarTalentExcelConfigMgrBase *const this,
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
  data::AvatarTalentExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::AvatarTalentExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarTalentExcelConfig>,false,false>,bool> v27; // rax
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
  *(_QWORD *)(v3 + 8) = "13 48 1 9 <unknown> 64 4 5 r:818 80 4 9 <unknown> 96 32 9 paths:804 160 32 9 <unknown> 224 32 9 "
                        "<unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 112 8 "
                        "data:821 688 376 24 debug_message_stream:829 1136 32880 12 txt_file:812";
  *(_QWORD *)(v3 + 16) = data::AvatarTalentExcelConfigMgrBase::loadAvatarTalentExcelConfig;
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
    "/txt/TalentSkillData.txt",
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
        "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
        "loadAvatarTalentExcelConfig",
        815);
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
        data::AvatarTalentExcelConfig::AvatarTalentExcelConfig((data::AvatarTalentExcelConfig *const)(v3 + 544));
        if ( row_ptr )
        {
          if ( data::AvatarTalentExcelConfig::init((data::AvatarTalentExcelConfig *const)(v3 + 544), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 688, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 688);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 688, &unk_1AC2F500);
            if ( *(_BYTE *)(((v3 + 632) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 632) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 632);
            std::ostream::operator<<(v16, *(unsigned int *)(v3 + 632));
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
              "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
              "loadAvatarTalentExcelConfig",
              831);
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
            v24 = std::move<data::AvatarTalentExcelConfig &>((data::AvatarTalentExcelConfig *)(v3 + 544));
            v27 = std::unordered_map<unsigned int,data::AvatarTalentExcelConfig>::emplace<unsigned int &,data::AvatarTalentExcelConfig>(
                    &this->avatar_talent_excel_config_map,
                    (unsigned int *)(v3 + 632),
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
                "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
                "loadAvatarTalentExcelConfig",
                836);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 480),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                      v28,
                      (const char (*)[15])byte_1AC2F540);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v29,
                (const unsigned int *)(v3 + 632));
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
            "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
            "loadAvatarTalentExcelConfig",
            824);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 288),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::AvatarTalentExcelConfig::~AvatarTalentExcelConfig((data::AvatarTalentExcelConfig *const)(v3 + 544));
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

// Line 845: range 0000000013910A0E-0000000013911A58
int32_t __cdecl data::AvatarTalentExcelConfigMgrBase::loadProudSkillExcelConfig(
        data::AvatarTalentExcelConfigMgrBase *const this,
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
  data::ProudSkillExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::ProudSkillExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProudSkillExcelConfig>,false,false>,bool> v27; // rax
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
  *(_QWORD *)(v3 + 8) = "13 48 1 9 <unknown> 64 4 5 r:860 80 4 9 <unknown> 96 32 9 paths:846 160 32 9 <unknown> 224 32 9 "
                        "<unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 200 8 "
                        "data:863 816 376 24 debug_message_stream:871 1264 32880 12 txt_file:854";
  *(_QWORD *)(v3 + 16) = data::AvatarTalentExcelConfigMgrBase::loadProudSkillExcelConfig;
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
    "/txt/ProudSkillData.txt",
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
        "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
        "loadProudSkillExcelConfig",
        857);
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
        data::ProudSkillExcelConfig::ProudSkillExcelConfig((data::ProudSkillExcelConfig *const)(v3 + 544));
        if ( row_ptr )
        {
          if ( data::ProudSkillExcelConfig::init((data::ProudSkillExcelConfig *const)(v3 + 544), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 816, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 816);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 816, &unk_1AC2F720);
            if ( *(_BYTE *)(((v3 + 632) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 632) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 632);
            std::ostream::operator<<(v16, *(unsigned int *)(v3 + 632));
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
              "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
              "loadProudSkillExcelConfig",
              873);
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
            v24 = std::move<data::ProudSkillExcelConfig &>((data::ProudSkillExcelConfig *)(v3 + 544));
            v27 = std::unordered_map<unsigned int,data::ProudSkillExcelConfig>::emplace<unsigned int &,data::ProudSkillExcelConfig>(
                    &this->proud_skill_excel_config_map,
                    (unsigned int *)(v3 + 632),
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
                "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
                "loadProudSkillExcelConfig",
                878);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 480),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                      v28,
                      (const char (*)[19])byte_1AC2F760);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v29,
                (const unsigned int *)(v3 + 632));
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
            "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
            "loadProudSkillExcelConfig",
            866);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 288),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::ProudSkillExcelConfig::~ProudSkillExcelConfig((data::ProudSkillExcelConfig *const)(v3 + 544));
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

// Line 887: range 0000000013911A5A-0000000013911D7E
int32_t __cdecl data::AvatarTalentExcelConfigMgrBase::loadConfig(
        data::AvatarTalentExcelConfigMgrBase *const this,
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
  *(_QWORD *)(v2 + 16) = data::AvatarTalentExcelConfigMgrBase::loadConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  if ( data::AvatarTalentExcelConfigMgrBase::loadAvatarTalentExcelConfig(this, config) )
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
      "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
      "loadConfig",
      890);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      v5,
      (const char (*)[35])"loadAvatarTalentExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else if ( data::AvatarTalentExcelConfigMgrBase::loadProudSkillExcelConfig(this, config) )
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
      "./src/txt_data_auto/AvatarTalentExcelConfig.gen.cpp",
      "loadConfig",
      895);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      v7,
      (const char (*)[33])"loadProudSkillExcelConfig failed");
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

// Line 902: range 0000000013911D80-0000000013911D92
int32_t __cdecl data::AvatarTalentExcelConfigMgrBase::rewriteConfig(
        data::AvatarTalentExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 907: range 0000000013911D94-0000000013911DA6
int32_t __cdecl data::AvatarTalentExcelConfigMgrBase::finalConfig(
        data::AvatarTalentExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 912: range 0000000013911DA8-0000000013911F63
data::AvatarTalentExcelConfig *__fastcall data::AvatarTalentExcelConfigMgrBase::findAvatarTalentExcelConfig(
        data::AvatarTalentExcelConfigMgrBase *const this,
        __int64 talent_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::AvatarTalentExcelConfigMap *p_avatar_talent_excel_config_map; // rdx
  data::AvatarTalentExcelConfigMap *v6; // rdx
  bool v7; // al
  data::AvatarTalentExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 talent_id:911 64 8 8 iter:913 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::AvatarTalentExcelConfigMgrBase::findAvatarTalentExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = talent_id;
  p_avatar_talent_excel_config_map = &this->avatar_talent_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, talent_id);
  *(std::unordered_map<unsigned int,data::AvatarTalentExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::AvatarTalentExcelConfig>::find(
                                                                                             p_avatar_talent_excel_config_map,
                                                                                             (const std::unordered_map<unsigned int,data::AvatarTalentExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->avatar_talent_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::AvatarTalentExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::AvatarTalentExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::AvatarTalentExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarTalentExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarTalentExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarTalentExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarTalentExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 925: range 0000000013911F64-000000001391211F
const data::AvatarTalentExcelConfig *__fastcall data::AvatarTalentExcelConfigMgrBase::findAvatarTalentExcelConfig(
        const data::AvatarTalentExcelConfigMgrBase *const this,
        __int64 talent_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::AvatarTalentExcelConfigMap *p_avatar_talent_excel_config_map; // rdx
  data::AvatarTalentExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::AvatarTalentExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 talent_id:924 64 8 8 iter:926 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::AvatarTalentExcelConfigMgrBase::findAvatarTalentExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = talent_id;
  p_avatar_talent_excel_config_map = &this->avatar_talent_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, talent_id);
  *(std::unordered_map<unsigned int,data::AvatarTalentExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::AvatarTalentExcelConfig>::find(
                                                                                                   p_avatar_talent_excel_config_map,
                                                                                                   (const std::unordered_map<unsigned int,data::AvatarTalentExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->avatar_talent_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::AvatarTalentExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::AvatarTalentExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::AvatarTalentExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarTalentExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarTalentExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AvatarTalentExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AvatarTalentExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 938: range 0000000013912120-00000000139122DB
data::ProudSkillExcelConfig *__fastcall data::AvatarTalentExcelConfigMgrBase::findProudSkillExcelConfig(
        data::AvatarTalentExcelConfigMgrBase *const this,
        __int64 proud_skill_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ProudSkillExcelConfigMap *p_proud_skill_excel_config_map; // rdx
  data::ProudSkillExcelConfigMap *v6; // rdx
  bool v7; // al
  data::ProudSkillExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 18 proud_skill_id:937 64 8 8 iter:939 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::AvatarTalentExcelConfigMgrBase::findProudSkillExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = proud_skill_id;
  p_proud_skill_excel_config_map = &this->proud_skill_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, proud_skill_id);
  *(std::unordered_map<unsigned int,data::ProudSkillExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ProudSkillExcelConfig>::find(
                                                                                           p_proud_skill_excel_config_map,
                                                                                           (const std::unordered_map<unsigned int,data::ProudSkillExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->proud_skill_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ProudSkillExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ProudSkillExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ProudSkillExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProudSkillExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProudSkillExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProudSkillExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProudSkillExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 951: range 00000000139122DC-0000000013912497
const data::ProudSkillExcelConfig *__fastcall data::AvatarTalentExcelConfigMgrBase::findProudSkillExcelConfig(
        const data::AvatarTalentExcelConfigMgrBase *const this,
        __int64 proud_skill_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ProudSkillExcelConfigMap *p_proud_skill_excel_config_map; // rdx
  data::ProudSkillExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::ProudSkillExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 18 proud_skill_id:950 64 8 8 iter:952 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::AvatarTalentExcelConfigMgrBase::findProudSkillExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = proud_skill_id;
  p_proud_skill_excel_config_map = &this->proud_skill_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, proud_skill_id);
  *(std::unordered_map<unsigned int,data::ProudSkillExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ProudSkillExcelConfig>::find(
                                                                                                 p_proud_skill_excel_config_map,
                                                                                                 (const std::unordered_map<unsigned int,data::ProudSkillExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->proud_skill_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ProudSkillExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ProudSkillExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ProudSkillExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProudSkillExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProudSkillExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ProudSkillExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ProudSkillExcelConfig>,false,false> *const)(v2 + 64))->second;
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

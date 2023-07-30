// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/AvatarExcelConfig.gen.cpp

// Line 12: range 00000000138C54B7-00000000138C582A
const char *__fastcall data::enumValToStr(data::AvatarUseType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::AvatarUseType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::AvatarUseType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
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
  map = data::getAvatarUseTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::AvatarUseType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::AvatarUseType,std::pair<std::string,std::string>>::find(map, (const std::map<data::AvatarUseType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::AvatarUseType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::AvatarUseType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::AvatarUseType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::AvatarUseType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
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
    result = "INVALID_AvatarUseType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::AvatarUseType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::AvatarUseType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 24: range 00000000138C582B-00000000138C5DE3
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::AvatarUseType>,false,true>::pointer v10; // rax
  data::AvatarUseType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::AvatarUseType> *m; // [rsp+18h] [rbp-188h]
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
    m = data::getAvatarUseTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::AvatarUseType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::AvatarUseType>::find(
                                                                                          m,
                                                                                          (const std::unordered_map<std::string,data::AvatarUseType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::AvatarUseType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::AvatarUseType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::AvatarUseType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::AvatarUseType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::AvatarUseType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
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
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::AvatarUseType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::AvatarUseType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
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

// Line 45: range 00000000138C5DE4-00000000138C68E2
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::AvatarUseType> *i; // r14
  _DWORD *v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::AvatarUseType>,false,true>::pointer v12; // rax
  data::AvatarUseType second; // ecx
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::AvatarUseType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::AvatarUseType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, e);
      *(_DWORD *)(v2 + 96) = 0;
      std::pair<std::string const,data::AvatarUseType>::pair<char const(&)[7],data::AvatarUseType,true>(
        (std::pair<const std::string,data::AvatarUseType> *const)(v2 + 448),
        (const char (*)[7])byte_1AC22400,
        (data::AvatarUseType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, byte_1AC22400);
      *(_DWORD *)(v2 + 112) = 1;
      std::pair<std::string const,data::AvatarUseType>::pair<char const(&)[13],data::AvatarUseType,true>(
        (std::pair<const std::string,data::AvatarUseType> *const)(v2 + 488),
        (const char (*)[13])byte_1AC22440,
        (data::AvatarUseType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1AC22440);
      *(_DWORD *)(v2 + 128) = 2;
      std::pair<std::string const,data::AvatarUseType>::pair<char const(&)[7],data::AvatarUseType,true>(
        (std::pair<const std::string,data::AvatarUseType> *const)(v2 + 528),
        (const char (*)[7])byte_1AC22480,
        (data::AvatarUseType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, byte_1AC22480);
      *(_DWORD *)(v2 + 144) = 3;
      std::pair<std::string const,data::AvatarUseType>::pair<char const(&)[7],data::AvatarUseType,true>(
        (std::pair<const std::string,data::AvatarUseType> *const)(v2 + 568),
        (const char (*)[7])byte_1AC224C0,
        (data::AvatarUseType *)(v2 + 144));
      std::allocator<std::pair<std::string const,data::AvatarUseType>>::allocator((std::allocator<std::pair<const std::string,data::AvatarUseType> > *const)(v2 + 64));
      std::unordered_map<std::string,data::AvatarUseType>::unordered_map(
        &data::enumStrToVal(char const*,data::AvatarUseType &)::m,
        (std::initializer_list<std::pair<const std::string,data::AvatarUseType> >)__PAIR128__(4LL, v2 + 448),
        0LL,
        (const std::unordered_map<std::string,data::AvatarUseType>::hasher *)(v2 + 32),
        (const std::unordered_map<std::string,data::AvatarUseType>::key_equal *)(v2 + 48),
        (const std::unordered_map<std::string,data::AvatarUseType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::AvatarUseType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::AvatarUseType>::~unordered_map,
        &data::enumStrToVal(char const*,data::AvatarUseType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::AvatarUseType>>::~allocator((std::allocator<std::pair<const std::string,data::AvatarUseType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::AvatarUseType> *)(v2 + 608);
            i != (std::pair<const std::string,data::AvatarUseType> *)(v2 + 448);
            std::pair<std::string const,data::AvatarUseType>::~pair(i) )
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
    *(std::unordered_map<std::string,data::AvatarUseType>::iterator *)(v2 + 160) = std::unordered_map<std::string,data::AvatarUseType>::find(
                                                                                     &data::enumStrToVal(char const*,data::AvatarUseType &)::m,
                                                                                     (const std::unordered_map<std::string,data::AvatarUseType>::key_type *)(v2 + 320));
    std::string::~string((void *)(v2 + 320));
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 80);
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, v2 + 320);
    *(std::unordered_map<std::string,data::AvatarUseType>::iterator *)(v2 + 192) = std::unordered_map<std::string,data::AvatarUseType>::end(&data::enumStrToVal(char const*,data::AvatarUseType &)::m);
    v9 = (char *)(v2 + 192);
    v10 = std::__detail::operator==<std::pair<std::string const,data::AvatarUseType>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::AvatarUseType>,true> *)(v2 + 160),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::AvatarUseType>,true> *)(v2 + 192));
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
        "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
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
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::AvatarUseType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::AvatarUseType>,false,true> *const)(v2 + 160));
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
      "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
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

// Line 72: range 00000000138C68E3-00000000138C68F9
const char *__cdecl data::getDescription(data::AvatarUseType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 77: range 00000000138C68FA-00000000138C6AAF
bool __cdecl data::isValidAvatarUseType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::AvatarUseType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::AvatarUseType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidAvatarUseType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getAvatarUseTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::AvatarUseType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::AvatarUseType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getAvatarUseTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::AvatarUseType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::AvatarUseType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::AvatarUseType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::AvatarUseType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::AvatarUseType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 83: range 00000000138C6AB0-00000000138C6C11
bool __cdecl data::isValidAvatarUseTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::AvatarUseType> *v5; // rcx
  const std::unordered_map<std::string,data::AvatarUseType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidAvatarUseTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getAvatarUseTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::AvatarUseType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::AvatarUseType>::end(v5);
  v6 = data::getAvatarUseTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::AvatarUseType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::AvatarUseType>::find(
                                                                                        v6,
                                                                                        name);
  result = std::__detail::operator!=<std::pair<std::string const,data::AvatarUseType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::AvatarUseType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::AvatarUseType>,true> *)(v2 + 64));
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

// Line 88: range 00000000138C6C12-00000000138C7171
const std::unordered_map<std::string,data::AvatarUseType> *__cdecl data::getAvatarUseTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::AvatarUseType> *i; // r14
  const std::unordered_map<std::string,data::AvatarUseType> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getAvatarUseTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -234753535;
  v3[536862723] = -234556924;
  v3[536862724] = -234556924;
  v3[536862730] = -202116109;
  v3[536862731] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getAvatarUseTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getAvatarUseTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v0);
    *(_DWORD *)(v1 + 96) = 0;
    std::pair<std::string const,data::AvatarUseType>::pair<char const(&)[12],data::AvatarUseType,true>(
      (std::pair<const std::string,data::AvatarUseType> *const)(v1 + 160),
      (const char (*)[12])"AVATAR_TEST",
      (data::AvatarUseType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "AVATAR_TEST");
    *(_DWORD *)(v1 + 112) = 1;
    std::pair<std::string const,data::AvatarUseType>::pair<char const(&)[17],data::AvatarUseType,true>(
      (std::pair<const std::string,data::AvatarUseType> *const)(v1 + 200),
      (const char (*)[17])"AVATAR_SYNC_TEST",
      (data::AvatarUseType *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, "AVATAR_SYNC_TEST");
    *(_DWORD *)(v1 + 128) = 2;
    std::pair<std::string const,data::AvatarUseType>::pair<char const(&)[14],data::AvatarUseType,true>(
      (std::pair<const std::string,data::AvatarUseType> *const)(v1 + 240),
      (const char (*)[14])"AVATAR_FORMAL",
      (data::AvatarUseType *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, "AVATAR_FORMAL");
    *(_DWORD *)(v1 + 144) = 3;
    std::pair<std::string const,data::AvatarUseType>::pair<char const(&)[15],data::AvatarUseType,true>(
      (std::pair<const std::string,data::AvatarUseType> *const)(v1 + 280),
      (const char (*)[15])"AVATAR_ABANDON",
      (data::AvatarUseType *)(v1 + 144));
    std::allocator<std::pair<std::string const,data::AvatarUseType>>::allocator((std::allocator<std::pair<const std::string,data::AvatarUseType> > *const)(v1 + 80));
    std::unordered_map<std::string,data::AvatarUseType>::unordered_map(
      &data::getAvatarUseTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::AvatarUseType> >)__PAIR128__(4LL, v1 + 160),
      0LL,
      (const std::unordered_map<std::string,data::AvatarUseType>::hasher *)(v1 + 48),
      (const std::unordered_map<std::string,data::AvatarUseType>::key_equal *)(v1 + 64),
      (const std::unordered_map<std::string,data::AvatarUseType>::allocator_type *)(v1 + 80));
    __cxa_guard_release(&`guard variable for'data::getAvatarUseTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::AvatarUseType>::~unordered_map,
      &data::getAvatarUseTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::AvatarUseType>>::~allocator((std::allocator<std::pair<const std::string,data::AvatarUseType> > *const)(v1 + 80));
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::AvatarUseType> *)(v1 + 320);
          i != (std::pair<const std::string,data::AvatarUseType> *)(v1 + 160);
          std::pair<std::string const,data::AvatarUseType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getAvatarUseTypeNameMap[abi:cxx11](void)::m;
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

// Line 100: range 00000000138C7172-00000000138C7942
const std::map<data::AvatarUseType,std::pair<std::string,std::string >> *__cdecl data::getAvatarUseTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::AvatarUseType,std::pair<std::string,std::string > > *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getAvatarUseTypeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getAvatarUseTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getAvatarUseTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 64, v0);
    *(_DWORD *)(v1 + 64) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[12],true>(
      (std::pair<std::string,std::string > *const)(v1 + 128),
      (const char (*)[7])byte_1AC22400,
      (const char (*)[12])"AVATAR_TEST");
    std::pair<data::AvatarUseType const,std::pair<std::string,std::string>>::pair<data::AvatarUseType,true>(
      (std::pair<const data::AvatarUseType,std::pair<std::string,std::string > > *const)(v1 + 512),
      (data::AvatarUseType *)(v1 + 64),
      (const std::pair<std::string,std::string > *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v1 + 64);
    *(_DWORD *)(v1 + 80) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[17],true>(
      (std::pair<std::string,std::string > *const)(v1 + 224),
      (const char (*)[13])byte_1AC22440,
      (const char (*)[17])"AVATAR_SYNC_TEST");
    std::pair<data::AvatarUseType const,std::pair<std::string,std::string>>::pair<data::AvatarUseType,true>(
      (std::pair<const data::AvatarUseType,std::pair<std::string,std::string > > *const)(v1 + 584),
      (data::AvatarUseType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 224));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[14],true>(
      (std::pair<std::string,std::string > *const)(v1 + 320),
      (const char (*)[7])byte_1AC22480,
      (const char (*)[14])"AVATAR_FORMAL");
    std::pair<data::AvatarUseType const,std::pair<std::string,std::string>>::pair<data::AvatarUseType,true>(
      (std::pair<const data::AvatarUseType,std::pair<std::string,std::string > > *const)(v1 + 656),
      (data::AvatarUseType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 320));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 3;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[15],true>(
      (std::pair<std::string,std::string > *const)(v1 + 416),
      (const char (*)[7])byte_1AC224C0,
      (const char (*)[15])"AVATAR_ABANDON");
    std::pair<data::AvatarUseType const,std::pair<std::string,std::string>>::pair<data::AvatarUseType,true>(
      (std::pair<const data::AvatarUseType,std::pair<std::string,std::string > > *const)(v1 + 728),
      (data::AvatarUseType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 416));
    std::allocator<std::pair<data::AvatarUseType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::AvatarUseType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    std::map<data::AvatarUseType,std::pair<std::string,std::string>>::map(
      &data::getAvatarUseTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::AvatarUseType,std::pair<std::string,std::string > > >)__PAIR128__(4LL, v1 + 512),
      (const std::less<data::AvatarUseType> *)(v1 + 32),
      (const std::map<data::AvatarUseType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 48));
    __cxa_guard_release(&`guard variable for'data::getAvatarUseTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::AvatarUseType,std::pair<std::string,std::string>>::~map,
      &data::getAvatarUseTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::AvatarUseType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::AvatarUseType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::AvatarUseType,std::pair<std::string,std::string > > *)(v1 + 800);
          i != (std::pair<const data::AvatarUseType,std::pair<std::string,std::string > > *)(v1 + 512);
          std::pair<data::AvatarUseType const,std::pair<std::string,std::string>>::~pair(i) )
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
  return &data::getAvatarUseTypeEnumMap[abi:cxx11](void)::m;
};

// Line 112: range 00000000138C7943-00000000138C7CB6
const char *__fastcall data::enumValToStr(data::AvatarIdentityType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::AvatarIdentityType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::AvatarIdentityType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
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
  map = data::getAvatarIdentityTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::AvatarIdentityType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::AvatarIdentityType,std::pair<std::string,std::string>>::find(map, (const std::map<data::AvatarIdentityType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::AvatarIdentityType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::AvatarIdentityType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::AvatarIdentityType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::AvatarIdentityType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
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
    result = "INVALID_AvatarIdentityType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::AvatarIdentityType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::AvatarIdentityType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 124: range 00000000138C7CB7-00000000138C826F
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::AvatarIdentityType>,false,true>::pointer v10; // rax
  data::AvatarIdentityType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::AvatarIdentityType> *m; // [rsp+18h] [rbp-188h]
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
    m = data::getAvatarIdentityTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::AvatarIdentityType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::AvatarIdentityType>::find(
                                                                                               m,
                                                                                               (const std::unordered_map<std::string,data::AvatarIdentityType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::AvatarIdentityType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::AvatarIdentityType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::AvatarIdentityType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::AvatarIdentityType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::AvatarIdentityType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
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
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::AvatarIdentityType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::AvatarIdentityType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
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

// Line 145: range 00000000138C8270-00000000138C8C39
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::AvatarIdentityType> *i; // r14
  unsigned __int64 v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::AvatarIdentityType>,false,true>::pointer v12; // rax
  data::AvatarIdentityType second; // ecx
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
                        " <unknown> 144 8 6 it:158 176 8 9 <unknown> 208 8 5 s:144 240 32 9 <unknown> 304 32 9 <unknown> "
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::AvatarIdentityType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::AvatarIdentityType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, e);
      *(_DWORD *)(v2 + 112) = 0;
      std::pair<std::string const,data::AvatarIdentityType>::pair<char const(&)[7],data::AvatarIdentityType,true>(
        (std::pair<const std::string,data::AvatarIdentityType> *const)(v2 + 432),
        (const char (*)[7])byte_1AC22860,
        (data::AvatarIdentityType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1AC22860);
      *(_DWORD *)(v2 + 128) = 1;
      std::pair<std::string const,data::AvatarIdentityType>::pair<char const(&)[7],data::AvatarIdentityType,true>(
        (std::pair<const std::string,data::AvatarIdentityType> *const)(v2 + 472),
        (const char (*)[7])byte_1AC228A0,
        (data::AvatarIdentityType *)(v2 + 128));
      std::allocator<std::pair<std::string const,data::AvatarIdentityType>>::allocator((std::allocator<std::pair<const std::string,data::AvatarIdentityType> > *const)(v2 + 80));
      std::unordered_map<std::string,data::AvatarIdentityType>::unordered_map(
        &data::enumStrToVal(char const*,data::AvatarIdentityType &)::m,
        (std::initializer_list<std::pair<const std::string,data::AvatarIdentityType> >)__PAIR128__(2LL, v2 + 432),
        0LL,
        (const std::unordered_map<std::string,data::AvatarIdentityType>::hasher *)(v2 + 48),
        (const std::unordered_map<std::string,data::AvatarIdentityType>::key_equal *)(v2 + 64),
        (const std::unordered_map<std::string,data::AvatarIdentityType>::allocator_type *)(v2 + 80));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::AvatarIdentityType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::AvatarIdentityType>::~unordered_map,
        &data::enumStrToVal(char const*,data::AvatarIdentityType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::AvatarIdentityType>>::~allocator((std::allocator<std::pair<const std::string,data::AvatarIdentityType> > *const)(v2 + 80));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::AvatarIdentityType> *)(v2 + 512);
            i != (std::pair<const std::string,data::AvatarIdentityType> *)(v2 + 432);
            std::pair<std::string const,data::AvatarIdentityType>::~pair(i) )
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
    *(std::unordered_map<std::string,data::AvatarIdentityType>::iterator *)(v2 + 144) = std::unordered_map<std::string,data::AvatarIdentityType>::find(
                                                                                          &data::enumStrToVal(char const*,data::AvatarIdentityType &)::m,
                                                                                          (const std::unordered_map<std::string,data::AvatarIdentityType>::key_type *)(v2 + 304));
    std::string::~string((void *)(v2 + 304));
    *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 96);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, v2 + 304);
    *(std::unordered_map<std::string,data::AvatarIdentityType>::iterator *)(v2 + 176) = std::unordered_map<std::string,data::AvatarIdentityType>::end(&data::enumStrToVal(char const*,data::AvatarIdentityType &)::m);
    v9 = (char *)(v2 + 176);
    v10 = std::__detail::operator==<std::pair<std::string const,data::AvatarIdentityType>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::AvatarIdentityType>,true> *)(v2 + 144),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::AvatarIdentityType>,true> *)(v2 + 176));
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
        "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
        "enumStrToVal",
        161);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 368),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)(v2 + 208));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 368));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::AvatarIdentityType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::AvatarIdentityType>,false,true> *const)(v2 + 144));
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
      "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
      "enumStrToVal",
      148);
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

// Line 170: range 00000000138C8C3A-00000000138C8C50
const char *__cdecl data::getDescription(data::AvatarIdentityType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 175: range 00000000138C8C51-00000000138C8E06
bool __cdecl data::isValidAvatarIdentityType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::AvatarIdentityType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::AvatarIdentityType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidAvatarIdentityType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getAvatarIdentityTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::AvatarIdentityType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::AvatarIdentityType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getAvatarIdentityTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::AvatarIdentityType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::AvatarIdentityType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::AvatarIdentityType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::AvatarIdentityType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::AvatarIdentityType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 181: range 00000000138C8E07-00000000138C8F68
bool __cdecl data::isValidAvatarIdentityTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::AvatarIdentityType> *v5; // rcx
  const std::unordered_map<std::string,data::AvatarIdentityType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidAvatarIdentityTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getAvatarIdentityTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::AvatarIdentityType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::AvatarIdentityType>::end(v5);
  v6 = data::getAvatarIdentityTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::AvatarIdentityType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::AvatarIdentityType>::find(
                                                                                             v6,
                                                                                             name);
  result = std::__detail::operator!=<std::pair<std::string const,data::AvatarIdentityType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::AvatarIdentityType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::AvatarIdentityType>,true> *)(v2 + 64));
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

// Line 186: range 00000000138C8F69-00000000138C936F
const std::unordered_map<std::string,data::AvatarIdentityType> *__cdecl data::getAvatarIdentityTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::AvatarIdentityType> *i; // r14
  const std::unordered_map<std::string,data::AvatarIdentityType> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getAvatarIdentityTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556927;
  v3[536862723] = 61956;
  v3[536862726] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getAvatarIdentityTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getAvatarIdentityTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string const,data::AvatarIdentityType>::pair<char const(&)[23],data::AvatarIdentityType,true>(
      (std::pair<const std::string,data::AvatarIdentityType> *const)(v1 + 112),
      (const char (*)[23])"AVATAR_IDENTITY_MASTER",
      (data::AvatarIdentityType *)(v1 + 80));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, "AVATAR_IDENTITY_MASTER");
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string const,data::AvatarIdentityType>::pair<char const(&)[23],data::AvatarIdentityType,true>(
      (std::pair<const std::string,data::AvatarIdentityType> *const)(v1 + 152),
      (const char (*)[23])"AVATAR_IDENTITY_NORMAL",
      (data::AvatarIdentityType *)(v1 + 96));
    std::allocator<std::pair<std::string const,data::AvatarIdentityType>>::allocator((std::allocator<std::pair<const std::string,data::AvatarIdentityType> > *const)(v1 + 64));
    std::unordered_map<std::string,data::AvatarIdentityType>::unordered_map(
      &data::getAvatarIdentityTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::AvatarIdentityType> >)__PAIR128__(2LL, v1 + 112),
      0LL,
      (const std::unordered_map<std::string,data::AvatarIdentityType>::hasher *)(v1 + 32),
      (const std::unordered_map<std::string,data::AvatarIdentityType>::key_equal *)(v1 + 48),
      (const std::unordered_map<std::string,data::AvatarIdentityType>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getAvatarIdentityTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::AvatarIdentityType>::~unordered_map,
      &data::getAvatarIdentityTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::AvatarIdentityType>>::~allocator((std::allocator<std::pair<const std::string,data::AvatarIdentityType> > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::AvatarIdentityType> *)(v1 + 192);
          i != (std::pair<const std::string,data::AvatarIdentityType> *)(v1 + 112);
          std::pair<std::string const,data::AvatarIdentityType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getAvatarIdentityTypeNameMap[abi:cxx11](void)::m;
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

// Line 196: range 00000000138C9370-00000000138C992D
const std::map<data::AvatarIdentityType,std::pair<std::string,std::string >> *__cdecl data::getAvatarIdentityTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::AvatarIdentityType,std::pair<std::string,std::string > > *i; // r14
  unsigned __int64 v5; // rax
  _DWORD *v6; // rax
  const std::map<data::AvatarIdentityType,std::pair<std::string,std::string >> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getAvatarIdentityTypeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getAvatarIdentityTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getAvatarIdentityTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[23],true>(
      (std::pair<std::string,std::string > *const)(v1 + 112),
      (const char (*)[7])byte_1AC22860,
      (const char (*)[23])"AVATAR_IDENTITY_MASTER");
    std::pair<data::AvatarIdentityType const,std::pair<std::string,std::string>>::pair<data::AvatarIdentityType,true>(
      (std::pair<const data::AvatarIdentityType,std::pair<std::string,std::string > > *const)(v1 + 304),
      (data::AvatarIdentityType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[23],true>(
      (std::pair<std::string,std::string > *const)(v1 + 208),
      (const char (*)[7])byte_1AC228A0,
      (const char (*)[23])"AVATAR_IDENTITY_NORMAL");
    std::pair<data::AvatarIdentityType const,std::pair<std::string,std::string>>::pair<data::AvatarIdentityType,true>(
      (std::pair<const data::AvatarIdentityType,std::pair<std::string,std::string > > *const)(v1 + 376),
      (data::AvatarIdentityType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 208));
    std::allocator<std::pair<data::AvatarIdentityType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::AvatarIdentityType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    std::map<data::AvatarIdentityType,std::pair<std::string,std::string>>::map(
      &data::getAvatarIdentityTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::AvatarIdentityType,std::pair<std::string,std::string > > >)__PAIR128__(2LL, v1 + 304),
      (const std::less<data::AvatarIdentityType> *)(v1 + 48),
      (const std::map<data::AvatarIdentityType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getAvatarIdentityTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::AvatarIdentityType,std::pair<std::string,std::string>>::~map,
      &data::getAvatarIdentityTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::AvatarIdentityType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::AvatarIdentityType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::AvatarIdentityType,std::pair<std::string,std::string > > *)(v1 + 448);
          i != (std::pair<const data::AvatarIdentityType,std::pair<std::string,std::string > > *)(v1 + 304);
          std::pair<data::AvatarIdentityType const,std::pair<std::string,std::string>>::~pair(i) )
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
  result = &data::getAvatarIdentityTypeEnumMap[abi:cxx11](void)::m;
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

// Line 207: range 00000000138C992E-00000000138D31F4
int32_t __cdecl data::AvatarExcelConfig::init(
        data::AvatarExcelConfig *const this,
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
  bool v86; // r13
  common::milog::MiLogStream *v87; // rax
  bool v88; // r13
  common::milog::MiLogStream *v89; // rax
  bool v90; // r13
  common::milog::MiLogStream *v91; // rax
  bool v92; // r13
  common::milog::MiLogStream *v93; // rax
  bool v94; // r13
  common::milog::MiLogStream *v95; // rax
  bool v96; // r13
  common::milog::MiLogStream *v97; // rax
  bool v98; // r13
  common::milog::MiLogStream *v99; // rax
  bool v100; // r13
  common::milog::MiLogStream *v101; // rax
  bool v102; // r13
  common::milog::MiLogStream *v103; // rax
  unsigned __int64 v104; // rax
  _DWORD *v105; // rax
  bool v106; // r15
  unsigned __int64 v107; // rax
  char *j; // r13
  _DWORD *v109; // rax
  common::milog::MiLogStream *v110; // rax
  bool v111; // r13
  common::milog::MiLogStream *v112; // rax
  bool v113; // r13
  common::milog::MiLogStream *v114; // rax
  bool v115; // r13
  common::milog::MiLogStream *v116; // rax
  unsigned __int64 v117; // rax
  _DWORD *v118; // rax
  bool v119; // r15
  unsigned __int64 v120; // rax
  char *k; // r13
  _DWORD *v122; // rax
  common::milog::MiLogStream *v123; // rax
  bool v124; // r13
  common::milog::MiLogStream *v125; // rax
  unsigned __int64 v126; // rax
  _DWORD *v127; // rax
  bool v128; // r15
  unsigned __int64 v129; // rax
  char *m; // r13
  _DWORD *v131; // rax
  common::milog::MiLogStream *v132; // rax
  bool v133; // r13
  common::milog::MiLogStream *v134; // rax
  bool v135; // r13
  common::milog::MiLogStream *v136; // rax
  std::initializer_list<std::string > __l; // [rsp+10h] [rbp-2340h]
  std::initializer_list<std::string > v139; // [rsp+20h] [rbp-2330h]
  std::initializer_list<std::string > v140; // [rsp+30h] [rbp-2320h]
  uint32_t array_count; // [rsp+58h] [rbp-22F8h]
  uint32_t i; // [rsp+5Ch] [rbp-22F4h]
  char v143[8944]; // [rsp+60h] [rbp-22F0h] BYREF

  v2 = (unsigned __int64)v143;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_8(8896LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "180 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 "
                        "9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 <unk"
                        "nown> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 288 1 9 <unknown> "
                        "304 1 9 <unknown> 320 1 9 <unknown> 336 1 9 <unknown> 352 1 9 <unknown> 368 1 9 <unknown> 384 1 "
                        "9 <unknown> 400 1 9 <unknown> 416 1 9 <unknown> 432 1 9 <unknown> 448 1 9 <unknown> 464 1 9 <unk"
                        "nown> 480 1 9 <unknown> 496 1 9 <unknown> 512 1 9 <unknown> 528 1 9 <unknown> 544 1 9 <unknown> "
                        "560 1 9 <unknown> 576 1 9 <unknown> 592 1 9 <unknown> 608 1 9 <unknown> 624 1 9 <unknown> 640 1 "
                        "9 <unknown> 656 1 9 <unknown> 672 1 9 <unknown> 688 1 9 <unknown> 704 1 9 <unknown> 720 1 9 <unk"
                        "nown> 736 1 9 <unknown> 752 1 9 <unknown> 768 1 9 <unknown> 784 1 9 <unknown> 800 1 9 <unknown> "
                        "816 1 9 <unknown> 832 1 9 <unknown> 848 1 9 <unknown> 864 1 9 <unknown> 880 1 9 <unknown> 896 1 "
                        "9 <unknown> 912 1 9 <unknown> 928 1 9 <unknown> 944 1 9 <unknown> 960 1 9 <unknown> 976 1 9 <unk"
                        "nown> 992 1 9 <unknown> 1008 1 9 <unknown> 1024 1 9 <unknown> 1040 1 9 <unknown> 1056 24 9 <unkn"
                        "own> 1120 24 9 <unknown> 1184 24 9 <unknown> 1248 32 11 val_str:210 1312 32 9 <unknown> 1376 32 "
                        "9 <unknown> 1440 32 9 <unknown> 1504 32 9 <unknown> 1568 32 9 <unknown> 1632 32 9 <unknown> 1696"
                        " 32 9 <unknown> 1760 32 9 <unknown> 1824 32 9 <unknown> 1888 32 9 <unknown> 1952 32 9 <unknown> "
                        "2016 32 9 <unknown> 2080 32 9 <unknown> 2144 32 9 <unknown> 2208 32 9 <unknown> 2272 32 9 <unkno"
                        "wn> 2336 32 9 <unknown> 2400 32 9 <unknown> 2464 32 9 <unknown> 2528 32 9 <unknown> 2592 32 9 <u"
                        "nknown> 2656 32 9 <unknown> 2720 32 9 <unknown> 2784 32 9 <unknown> 2848 32 9 <unknown> 2912 32 "
                        "9 <unknown> 2976 32 9 <unknown> 3040 32 9 <unknown> 3104 32 9 <unknown> 3168 32 9 <unknown> 3232"
                        " 32 9 <unknown> 3296 32 9 <unknown> 3360 32 9 <unknown> 3424 32 9 <unknown> 3488 32 9 <unknown> "
                        "3552 32 9 <unknown> 3616 32 9 <unknown> 3680 32 9 <unknown> 3744 32 9 <unknown> 3808 32 9 <unkno"
                        "wn> 3872 32 9 <unknown> 3936 32 9 <unknown> 4000 32 9 <unknown> 4064 32 9 <unknown> 4128 32 9 <u"
                        "nknown> 4192 32 9 <unknown> 4256 32 9 <unknown> 4320 32 9 <unknown> 4384 32 9 <unknown> 4448 32 "
                        "9 <unknown> 4512 32 9 <unknown> 4576 32 9 <unknown> 4640 32 9 <unknown> 4704 32 9 <unknown> 4768"
                        " 32 9 <unknown> 4832 32 9 <unknown> 4896 32 9 <unknown> 4960 32 9 <unknown> 5024 32 9 <unknown> "
                        "5088 32 9 <unknown> 5152 32 9 <unknown> 5216 32 9 <unknown> 5280 32 9 <unknown> 5344 32 9 <unkno"
                        "wn> 5408 32 9 <unknown> 5472 32 9 <unknown> 5536 32 9 <unknown> 5600 32 9 <unknown> 5664 32 9 <u"
                        "nknown> 5728 32 9 <unknown> 5792 32 9 <unknown> 5856 32 9 <unknown> 5920 32 9 <unknown> 5984 32 "
                        "9 <unknown> 6048 32 9 <unknown> 6112 32 9 <unknown> 6176 32 9 <unknown> 6240 32 9 <unknown> 6304"
                        " 32 9 <unknown> 6368 32 9 <unknown> 6432 32 9 <unknown> 6496 32 9 <unknown> 6560 32 9 <unknown> "
                        "6624 32 9 <unknown> 6688 32 9 <unknown> 6752 32 9 <unknown> 6816 32 9 <unknown> 6880 32 9 <unkno"
                        "wn> 6944 32 9 <unknown> 7008 32 9 <unknown> 7072 32 9 <unknown> 7136 32 9 <unknown> 7200 32 9 <u"
                        "nknown> 7264 32 9 <unknown> 7328 32 9 <unknown> 7392 32 9 <unknown> 7456 32 9 <unknown> 7520 32 "
                        "9 <unknown> 7584 32 9 <unknown> 7648 32 9 <unknown> 7712 32 9 <unknown> 7776 32 9 <unknown> 7840"
                        " 32 9 <unknown> 7904 32 9 <unknown> 7968 32 9 <unknown> 8032 32 9 <unknown> 8096 32 9 <unknown> "
                        "8160 32 9 <unknown> 8224 32 9 <unknown> 8288 64 9 <unknown> 8384 64 9 <unknown> 8480 64 9 <unkno"
                        "wn> 8576 256 12 col_name:208";
  *(_QWORD *)(v2 + 16) = data::AvatarExcelConfig::init;
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
  v4[536862755] = -234881024;
  v4[536862756] = -218959118;
  v4[536862757] = -234881024;
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
  v4[536862981] = -218959118;
  v4[536862984] = -218959118;
  v4[536862987] = -218959118;
  v4[536862996] = -202116109;
  v4[536862997] = -202116109;
  std::string::basic_string(v2 + 1248);
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 1312),
    "ID",
    (const std::allocator<char> *)(v2 + 48));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 1312), &this->id) != 0;
  std::string::~string((void *)(v2 + 1312));
  *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
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
      "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
      "init",
      213);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 1376),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v6, (const char (*)[23])byte_1AC01DC0);
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
      &byte_1AC23700,
      (const std::allocator<char> *)(v2 + 64));
    v8 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 1440), &this->name) != 0;
    std::string::~string((void *)(v2 + 1440));
    *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
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
        "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
        "init",
        218);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 1504),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v9, (const char (*)[42])byte_1AC23740);
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
        aPrefab_1,
        (const std::allocator<char> *)(v2 + 80));
      v10 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 1568), &this->prefab_path) != 0;
      std::string::~string((void *)(v2 + 1568));
      *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( v10 )
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
          "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
          "init",
          223);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 1632),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v11, (const char (*)[33])byte_1AC237E0);
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
          aPrefabRemote_0,
          (const std::allocator<char> *)(v2 + 96));
        v12 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 1696), &this->prefab_path_remote) != 0;
        std::string::~string((void *)(v2 + 1696));
        *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( v12 )
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
            "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
            "init",
            228);
          v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 1760),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v13, (const char (*)[40])byte_1AC23880);
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
            aController_0,
            (const std::allocator<char> *)(v2 + 112));
          v14 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 1824), &this->controller_path) != 0;
          std::string::~string((void *)(v2 + 1824));
          *(_DWORD *)(((v2 + 1824) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( v14 )
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
              "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
              "init",
              233);
            v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 1888),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v15, (const char (*)[37])byte_1AC23920);
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
              aControllerRemo_0,
              (const std::allocator<char> *)(v2 + 128));
            v16 = common::tools::TxtFile::Row::assignToStr(
                    row,
                    (const std::string *)(v2 + 1952),
                    &this->controller_path_remote) != 0;
            std::string::~string((void *)(v2 + 1952));
            *(_DWORD *)(((v2 + 1952) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 128);
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
            if ( v16 )
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
                "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
                "init",
                238);
              v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 2016),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v17, (const char (*)[44])byte_1AC239C0);
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
                &byte_1AC23A20,
                (const std::allocator<char> *)(v2 + 144));
              v18 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                      row,
                      (const std::string *)(v2 + 2080),
                      &this->camp_id) != 0;
              std::string::~string((void *)(v2 + 2080));
              *(_DWORD *)(((v2 + 2080) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 144);
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
              if ( v18 )
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
                  "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
                  "init",
                  243);
                v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 2144),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v19, (const char (*)[33])byte_1AC23A60);
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
                  &byte_1AC23AC0,
                  (const std::allocator<char> *)(v2 + 160));
                v20 = common::tools::TxtFile::Row::assignToNum<float>(
                        row,
                        (const std::string *)(v2 + 2208),
                        &this->hp_base) != 0;
                std::string::~string((void *)(v2 + 2208));
                *(_DWORD *)(((v2 + 2208) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 160);
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                if ( v20 )
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
                    "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
                    "init",
                    248);
                  v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 2272),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                    v21,
                    (const char (*)[36])byte_1AC23B00);
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
                    &byte_1AC23B60,
                    (const std::allocator<char> *)(v2 + 176));
                  v22 = common::tools::TxtFile::Row::assignToNum<float>(
                          row,
                          (const std::string *)(v2 + 2336),
                          &this->attack_base) != 0;
                  std::string::~string((void *)(v2 + 2336));
                  *(_DWORD *)(((v2 + 2336) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 176);
                  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                  if ( v22 )
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
                      "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
                      "init",
                      253);
                    v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 2400),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                      v23,
                      (const char (*)[36])byte_1AC23BA0);
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
                      &byte_1AC23C00,
                      (const std::allocator<char> *)(v2 + 192));
                    v24 = common::tools::TxtFile::Row::assignToNum<float>(
                            row,
                            (const std::string *)(v2 + 2464),
                            &this->defense_base) != 0;
                    std::string::~string((void *)(v2 + 2464));
                    *(_DWORD *)(((v2 + 2464) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 192);
                    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                    if ( v24 )
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
                        "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
                        "init",
                        258);
                      v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 2528),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                        v25,
                        (const char (*)[36])byte_1AC23C40);
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
                        &byte_1AC23CA0,
                        (const std::allocator<char> *)(v2 + 208));
                      v26 = common::tools::TxtFile::Row::assignToNum<float>(
                              row,
                              (const std::string *)(v2 + 2592),
                              &this->critical) != 0;
                      std::string::~string((void *)(v2 + 2592));
                      *(_DWORD *)(((v2 + 2592) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 208);
                      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                      if ( v26 )
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
                          "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
                          "init",
                          263);
                        v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                (common::milog::MiLogStream *const)(v2 + 2656),
                                (const char (*)[16])"[CONFIG_ERROR] ");
                        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                          v27,
                          (const char (*)[30])byte_1AC23CE0);
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
                          &byte_1AC23D20,
                          (const std::allocator<char> *)(v2 + 224));
                        v28 = common::tools::TxtFile::Row::assignToNum<float>(
                                row,
                                (const std::string *)(v2 + 2720),
                                &this->anti_critical) != 0;
                        std::string::~string((void *)(v2 + 2720));
                        *(_DWORD *)(((v2 + 2720) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 224);
                        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                        if ( v28 )
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
                            "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
                            "init",
                            268);
                          v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                  (common::milog::MiLogStream *const)(v2 + 2784),
                                  (const char (*)[16])"[CONFIG_ERROR] ");
                          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                            v29,
                            (const char (*)[33])byte_1AC23D60);
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
                            &byte_1AC23DC0,
                            (const std::allocator<char> *)(v2 + 240));
                          v30 = common::tools::TxtFile::Row::assignToNum<float>(
                                  row,
                                  (const std::string *)(v2 + 2848),
                                  &this->critical_hurt) != 0;
                          std::string::~string((void *)(v2 + 2848));
                          *(_DWORD *)(((v2 + 2848) >> 3) + 0x7FFF8000) = -117901064;
                          std::allocator<char>::~allocator(v2 + 240);
                          *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                          if ( v30 )
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
                              "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
                              "init",
                              273);
                            v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                    (common::milog::MiLogStream *const)(v2 + 2912),
                                    (const char (*)[16])"[CONFIG_ERROR] ");
                            common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                              v31,
                              (const char (*)[33])byte_1AC23E00);
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
                              &byte_1AC23E60,
                              (const std::allocator<char> *)(v2 + 256));
                            v32 = common::tools::TxtFile::Row::assignToNum<float>(
                                    row,
                                    (const std::string *)(v2 + 2976),
                                    &this->fire_sub_hurt) != 0;
                            std::string::~string((void *)(v2 + 2976));
                            *(_DWORD *)(((v2 + 2976) >> 3) + 0x7FFF8000) = -117901064;
                            std::allocator<char>::~allocator(v2 + 256);
                            *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                            if ( v32 )
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
                                "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
                                "init",
                                278);
                              v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                      (common::milog::MiLogStream *const)(v2 + 3040),
                                      (const char (*)[16])"[CONFIG_ERROR] ");
                              common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                                v33,
                                (const char (*)[36])byte_1AC23EA0);
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
                                &byte_1AC23F00,
                                (const std::allocator<char> *)(v2 + 272));
                              v34 = common::tools::TxtFile::Row::assignToNum<float>(
                                      row,
                                      (const std::string *)(v2 + 3104),
                                      &this->grass_sub_hurt) != 0;
                              std::string::~string((void *)(v2 + 3104));
                              *(_DWORD *)(((v2 + 3104) >> 3) + 0x7FFF8000) = -117901064;
                              std::allocator<char>::~allocator(v2 + 272);
                              *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                              if ( v34 )
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
                                  "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
                                  "init",
                                  283);
                                v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                        (common::milog::MiLogStream *const)(v2 + 3168),
                                        (const char (*)[16])"[CONFIG_ERROR] ");
                                common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                                  v35,
                                  (const char (*)[36])byte_1AC23F40);
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
                                  &byte_1AC23FA0,
                                  (const std::allocator<char> *)(v2 + 288));
                                v36 = common::tools::TxtFile::Row::assignToNum<float>(
                                        row,
                                        (const std::string *)(v2 + 3232),
                                        &this->water_sub_hurt) != 0;
                                std::string::~string((void *)(v2 + 3232));
                                *(_DWORD *)(((v2 + 3232) >> 3) + 0x7FFF8000) = -117901064;
                                std::allocator<char>::~allocator(v2 + 288);
                                *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
                                if ( v36 )
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
                                    "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
                                    "init",
                                    288);
                                  v37 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                          (common::milog::MiLogStream *const)(v2 + 3296),
                                          (const char (*)[16])"[CONFIG_ERROR] ");
                                  common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                                    v37,
                                    (const char (*)[36])byte_1AC23FE0);
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
                                    &byte_1AC24040,
                                    (const std::allocator<char> *)(v2 + 304));
                                  v38 = common::tools::TxtFile::Row::assignToNum<float>(
                                          row,
                                          (const std::string *)(v2 + 3360),
                                          &this->elec_sub_hurt) != 0;
                                  std::string::~string((void *)(v2 + 3360));
                                  *(_DWORD *)(((v2 + 3360) >> 3) + 0x7FFF8000) = -117901064;
                                  std::allocator<char>::~allocator(v2 + 304);
                                  *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
                                  if ( v38 )
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
                                      "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
                                      "init",
                                      293);
                                    v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                            (common::milog::MiLogStream *const)(v2 + 3424),
                                            (const char (*)[16])"[CONFIG_ERROR] ");
                                    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                                      v39,
                                      (const char (*)[36])byte_1AC24080);
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
                                      &byte_1AC240E0,
                                      (const std::allocator<char> *)(v2 + 320));
                                    v40 = common::tools::TxtFile::Row::assignToNum<float>(
                                            row,
                                            (const std::string *)(v2 + 3488),
                                            &this->wind_sub_hurt) != 0;
                                    std::string::~string((void *)(v2 + 3488));
                                    *(_DWORD *)(((v2 + 3488) >> 3) + 0x7FFF8000) = -117901064;
                                    std::allocator<char>::~allocator(v2 + 320);
                                    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
                                    if ( v40 )
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
                                        "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
                                        "init",
                                        298);
                                      v41 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                              (common::milog::MiLogStream *const)(v2 + 3552),
                                              (const char (*)[16])"[CONFIG_ERROR] ");
                                      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                                        v41,
                                        (const char (*)[36])byte_1AC24120);
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
                                        &byte_1AC24180,
                                        (const std::allocator<char> *)(v2 + 336));
                                      v42 = common::tools::TxtFile::Row::assignToNum<float>(
                                              row,
                                              (const std::string *)(v2 + 3616),
                                              &this->ice_sub_hurt) != 0;
                                      std::string::~string((void *)(v2 + 3616));
                                      *(_DWORD *)(((v2 + 3616) >> 3) + 0x7FFF8000) = -117901064;
                                      std::allocator<char>::~allocator(v2 + 336);
                                      *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
                                      if ( v42 )
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
                                          "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
                                          "init",
                                          303);
                                        v43 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                (common::milog::MiLogStream *const)(v2 + 3680),
                                                (const char (*)[16])"[CONFIG_ERROR] ");
                                        common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                                          v43,
                                          (const char (*)[36])byte_1AC241C0);
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
                                          &byte_1AC24220,
                                          (const std::allocator<char> *)(v2 + 352));
                                        v44 = common::tools::TxtFile::Row::assignToNum<float>(
                                                row,
                                                (const std::string *)(v2 + 3744),
                                                &this->rock_sub_hurt) != 0;
                                        std::string::~string((void *)(v2 + 3744));
                                        *(_DWORD *)(((v2 + 3744) >> 3) + 0x7FFF8000) = -117901064;
                                        std::allocator<char>::~allocator(v2 + 352);
                                        *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
                                        if ( v44 )
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
                                            "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
                                            "init",
                                            308);
                                          v45 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                  (common::milog::MiLogStream *const)(v2 + 3808),
                                                  (const char (*)[16])"[CONFIG_ERROR] ");
                                          common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                                            v45,
                                            (const char (*)[36])byte_1AC24260);
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
                                            &byte_1AC242C0,
                                            (const std::allocator<char> *)(v2 + 368));
                                          v46 = common::tools::TxtFile::Row::assignToNum<float>(
                                                  row,
                                                  (const std::string *)(v2 + 3872),
                                                  &this->fire_add_hurt) != 0;
                                          std::string::~string((void *)(v2 + 3872));
                                          *(_DWORD *)(((v2 + 3872) >> 3) + 0x7FFF8000) = -117901064;
                                          std::allocator<char>::~allocator(v2 + 368);
                                          *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
                                          if ( v46 )
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
                                              "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
                                              "init",
                                              313);
                                            v47 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                    (common::milog::MiLogStream *const)(v2 + 3936),
                                                    (const char (*)[16])"[CONFIG_ERROR] ");
                                            common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                                              v47,
                                              (const char (*)[42])byte_1AC24300);
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
                                              &byte_1AC24360,
                                              (const std::allocator<char> *)(v2 + 384));
                                            v48 = common::tools::TxtFile::Row::assignToNum<float>(
                                                    row,
                                                    (const std::string *)(v2 + 4000),
                                                    &this->grass_add_hurt) != 0;
                                            std::string::~string((void *)(v2 + 4000));
                                            *(_DWORD *)(((v2 + 4000) >> 3) + 0x7FFF8000) = -117901064;
                                            std::allocator<char>::~allocator(v2 + 384);
                                            *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
                                            if ( v48 )
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
                                                "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
                                                "init",
                                                318);
                                              v49 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                      (common::milog::MiLogStream *const)(v2 + 4064),
                                                      (const char (*)[16])"[CONFIG_ERROR] ");
                                              common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                                                v49,
                                                (const char (*)[42])byte_1AC243A0);
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
                                                &byte_1AC24400,
                                                (const std::allocator<char> *)(v2 + 400));
                                              v50 = common::tools::TxtFile::Row::assignToNum<float>(
                                                      row,
                                                      (const std::string *)(v2 + 4128),
                                                      &this->water_add_hurt) != 0;
                                              std::string::~string((void *)(v2 + 4128));
                                              *(_DWORD *)(((v2 + 4128) >> 3) + 0x7FFF8000) = -117901064;
                                              std::allocator<char>::~allocator(v2 + 400);
                                              *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
                                              if ( v50 )
                                              {
                                                *(_DWORD *)(((v2 + 4192) >> 3) + 0x7FFF8000) = 0;
                                                if ( *(char *)(((v2 + 4192) >> 3) + 0x7FFF8000) < 0
                                                  || *(_BYTE *)(((v2 + 4223) >> 3) + 0x7FFF8000) != 0
                                                  && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 4223) >> 3) + 0x7FFF8000) )
                                                {
                                                  __asan_report_store_n(v2 + 4192, 32LL);
                                                }
                                                common::milog::MiLogStream::create(
                                                  (common::milog::MiLogStream *)(v2 + 4192),
                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                  4u,
                                                  "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
                                                  "init",
                                                  323);
                                                v51 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                        (common::milog::MiLogStream *const)(v2 + 4192),
                                                        (const char (*)[16])"[CONFIG_ERROR] ");
                                                common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                                                  v51,
                                                  (const char (*)[42])byte_1AC24440);
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
                                                  &byte_1AC244A0,
                                                  (const std::allocator<char> *)(v2 + 416));
                                                v52 = common::tools::TxtFile::Row::assignToNum<float>(
                                                        row,
                                                        (const std::string *)(v2 + 4256),
                                                        &this->elec_add_hurt) != 0;
                                                std::string::~string((void *)(v2 + 4256));
                                                *(_DWORD *)(((v2 + 4256) >> 3) + 0x7FFF8000) = -117901064;
                                                std::allocator<char>::~allocator(v2 + 416);
                                                *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
                                                if ( v52 )
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
                                                    "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
                                                    "init",
                                                    328);
                                                  v53 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                          (common::milog::MiLogStream *const)(v2 + 4320),
                                                          (const char (*)[16])"[CONFIG_ERROR] ");
                                                  common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                                                    v53,
                                                    (const char (*)[42])byte_1AC244E0);
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
                                                    &byte_1AC24540,
                                                    (const std::allocator<char> *)(v2 + 432));
                                                  v54 = common::tools::TxtFile::Row::assignToNum<float>(
                                                          row,
                                                          (const std::string *)(v2 + 4384),
                                                          &this->wind_add_hurt) != 0;
                                                  std::string::~string((void *)(v2 + 4384));
                                                  *(_DWORD *)(((v2 + 4384) >> 3) + 0x7FFF8000) = -117901064;
                                                  std::allocator<char>::~allocator(v2 + 432);
                                                  *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = -8;
                                                  if ( v54 )
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
                                                      "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
                                                      "init",
                                                      333);
                                                    v55 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                            (common::milog::MiLogStream *const)(v2 + 4448),
                                                            (const char (*)[16])"[CONFIG_ERROR] ");
                                                    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                                                      v55,
                                                      (const char (*)[42])byte_1AC24580);
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
                                                      &byte_1AC245E0,
                                                      (const std::allocator<char> *)(v2 + 448));
                                                    v56 = common::tools::TxtFile::Row::assignToNum<float>(
                                                            row,
                                                            (const std::string *)(v2 + 4512),
                                                            &this->ice_add_hurt) != 0;
                                                    std::string::~string((void *)(v2 + 4512));
                                                    *(_DWORD *)(((v2 + 4512) >> 3) + 0x7FFF8000) = -117901064;
                                                    std::allocator<char>::~allocator(v2 + 448);
                                                    *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = -8;
                                                    if ( v56 )
                                                    {
                                                      *(_DWORD *)(((v2 + 4576) >> 3) + 0x7FFF8000) = 0;
                                                      if ( *(char *)(((v2 + 4576) >> 3) + 0x7FFF8000) < 0
                                                        || *(_BYTE *)(((v2 + 4607) >> 3) + 0x7FFF8000) != 0
                                                        && (char)((v2 - 64 + 63) & 7) >= *(_BYTE *)(((v2 + 4607) >> 3)
                                                                                                  + 0x7FFF8000) )
                                                      {
                                                        __asan_report_store_n(v2 + 4576, 32LL);
                                                      }
                                                      common::milog::MiLogStream::create(
                                                        (common::milog::MiLogStream *)(v2 + 4576),
                                                        &common::milog::MiLogDefault::default_log_obj_,
                                                        4u,
                                                        "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
                                                        "init",
                                                        338);
                                                      v57 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                              (common::milog::MiLogStream *const)(v2 + 4576),
                                                              (const char (*)[16])"[CONFIG_ERROR] ");
                                                      common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                                                        v57,
                                                        (const char (*)[42])byte_1AC24620);
                                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4576));
                                                      *(_DWORD *)(((v2 + 4576) >> 3) + 0x7FFF8000) = -117901064;
                                                      v7 = -1;
                                                    }
                                                    else
                                                    {
                                                      *(_DWORD *)(((v2 + 4640) >> 3) + 0x7FFF8000) = 0;
                                                      *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = 1;
                                                      std::allocator<char>::allocator(v2 + 464);
                                                      std::string::basic_string<std::allocator<char>>(
                                                        (std::string *const)(v2 + 4640),
                                                        &byte_1AC24680,
                                                        (const std::allocator<char> *)(v2 + 464));
                                                      v58 = common::tools::TxtFile::Row::assignToNum<float>(
                                                              row,
                                                              (const std::string *)(v2 + 4640),
                                                              &this->rock_add_hurt) != 0;
                                                      std::string::~string((void *)(v2 + 4640));
                                                      *(_DWORD *)(((v2 + 4640) >> 3) + 0x7FFF8000) = -117901064;
                                                      std::allocator<char>::~allocator(v2 + 464);
                                                      *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = -8;
                                                      if ( v58 )
                                                      {
                                                        *(_DWORD *)(((v2 + 4704) >> 3) + 0x7FFF8000) = 0;
                                                        if ( *(char *)(((v2 + 4704) >> 3) + 0x7FFF8000) < 0
                                                          || *(_BYTE *)(((v2 + 4735) >> 3) + 0x7FFF8000) != 0
                                                          && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 4735) >> 3)
                                                                                                + 0x7FFF8000) )
                                                        {
                                                          __asan_report_store_n(v2 + 4704, 32LL);
                                                        }
                                                        common::milog::MiLogStream::create(
                                                          (common::milog::MiLogStream *)(v2 + 4704),
                                                          &common::milog::MiLogDefault::default_log_obj_,
                                                          4u,
                                                          "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
                                                          "init",
                                                          343);
                                                        v59 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                (common::milog::MiLogStream *const)(v2 + 4704),
                                                                (const char (*)[16])"[CONFIG_ERROR] ");
                                                        common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                                                          v59,
                                                          (const char (*)[42])byte_1AC246C0);
                                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4704));
                                                        *(_DWORD *)(((v2 + 4704) >> 3) + 0x7FFF8000) = -117901064;
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
                                                          snprintf((char *)(v2 + 8576), 0x100uLL, asc_1AC24720, i + 1);
                                                          *(_DWORD *)(((v2 + 4768) >> 3) + 0x7FFF8000) = 0;
                                                          *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = 1;
                                                          std::allocator<char>::allocator(v2 + 480);
                                                          std::string::basic_string<std::allocator<char>>(
                                                            (std::string *const)(v2 + 4768),
                                                            (const char *)(v2 + 8576),
                                                            (const std::allocator<char> *)(v2 + 480));
                                                          v60 = !common::tools::TxtFile::Row::hasKey(
                                                                   row,
                                                                   (const std::string *)(v2 + 4768));
                                                          std::string::~string((void *)(v2 + 4768));
                                                          *(_DWORD *)(((v2 + 4768) >> 3) + 0x7FFF8000) = -117901064;
                                                          std::allocator<char>::~allocator(v2 + 480);
                                                          *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = -8;
                                                          if ( !v60 )
                                                          {
                                                            p_type = &std::vector<data::FightPropGrowConfig>::operator[](
                                                                        &this->prop_grow_curves,
                                                                        i)->type;
                                                            *(_DWORD *)(((v2 + 4832) >> 3) + 0x7FFF8000) = 0;
                                                            *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = 1;
                                                            std::allocator<char>::allocator(v2 + 496);
                                                            std::string::basic_string<std::allocator<char>>(
                                                              (std::string *const)(v2 + 4832),
                                                              (const char *)(v2 + 8576),
                                                              (const std::allocator<char> *)(v2 + 496));
                                                            LOBYTE(p_type) = common::tools::TxtFile::Row::assignToEnum<data::FightPropType>(
                                                                               row,
                                                                               (const std::string *)(v2 + 4832),
                                                                               p_type) != 0;
                                                            std::string::~string((void *)(v2 + 4832));
                                                            *(_DWORD *)(((v2 + 4832) >> 3) + 0x7FFF8000) = -117901064;
                                                            std::allocator<char>::~allocator(v2 + 496);
                                                            *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = -8;
                                                            if ( (_BYTE)p_type )
                                                            {
                                                              *(_DWORD *)(((v2 + 4896) >> 3) + 0x7FFF8000) = 0;
                                                              if ( *(char *)(((v2 + 4896) >> 3) + 0x7FFF8000) < 0
                                                                || *(_BYTE *)(((v2 + 4927) >> 3) + 0x7FFF8000) != 0
                                                                && (char)((v2 - 64 + 127) & 7) >= *(_BYTE *)(((v2 + 4927) >> 3) + 0x7FFF8000) )
                                                              {
                                                                __asan_report_store_n(v2 + 4896, 32LL);
                                                              }
                                                              common::milog::MiLogStream::create(
                                                                (common::milog::MiLogStream *)(v2 + 4896),
                                                                &common::milog::MiLogDefault::default_log_obj_,
                                                                4u,
                                                                "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
                                                                "init",
                                                                355);
                                                              v62 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                      (common::milog::MiLogStream *const)(v2 + 4896),
                                                                      (const char (*)[16])"[CONFIG_ERROR] ");
                                                              v63 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                                                      v62,
                                                                      (const char (*)[14])byte_1ABFD420);
                                                              v64 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                                                                      v63,
                                                                      (const char (*)[256])(v2 + 8576));
                                                              common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                                                                v64,
                                                                (const char (*)[7])byte_1ABFD460);
                                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4896));
                                                              *(_DWORD *)(((v2 + 4896) >> 3) + 0x7FFF8000) = -117901064;
                                                              v7 = -1;
                                                              goto LABEL_240;
                                                            }
                                                            snprintf((char *)(v2 + 8576), 0x100uLL, asc_1AC24760, i + 1);
                                                            *(_DWORD *)(((v2 + 4960) >> 3) + 0x7FFF8000) = 0;
                                                            *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = 1;
                                                            std::allocator<char>::allocator(v2 + 512);
                                                            std::string::basic_string<std::allocator<char>>(
                                                              (std::string *const)(v2 + 4960),
                                                              (const char *)(v2 + 8576),
                                                              (const std::allocator<char> *)(v2 + 512));
                                                            v65 = !common::tools::TxtFile::Row::hasKey(
                                                                     row,
                                                                     (const std::string *)(v2 + 4960));
                                                            std::string::~string((void *)(v2 + 4960));
                                                            *(_DWORD *)(((v2 + 4960) >> 3) + 0x7FFF8000) = -117901064;
                                                            std::allocator<char>::~allocator(v2 + 512);
                                                            *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = -8;
                                                            if ( !v65 )
                                                            {
                                                              p_grow_curve = &std::vector<data::FightPropGrowConfig>::operator[](
                                                                                &this->prop_grow_curves,
                                                                                i)->grow_curve;
                                                              *(_DWORD *)(((v2 + 5024) >> 3) + 0x7FFF8000) = 0;
                                                              *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = 1;
                                                              std::allocator<char>::allocator(v2 + 528);
                                                              std::string::basic_string<std::allocator<char>>(
                                                                (std::string *const)(v2 + 5024),
                                                                (const char *)(v2 + 8576),
                                                                (const std::allocator<char> *)(v2 + 528));
                                                              LOBYTE(p_grow_curve) = common::tools::TxtFile::Row::assignToEnum<data::GrowCurveType>(
                                                                                       row,
                                                                                       (const std::string *)(v2 + 5024),
                                                                                       p_grow_curve) != 0;
                                                              std::string::~string((void *)(v2 + 5024));
                                                              *(_DWORD *)(((v2 + 5024) >> 3) + 0x7FFF8000) = -117901064;
                                                              std::allocator<char>::~allocator(v2 + 528);
                                                              *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = -8;
                                                              if ( (_BYTE)p_grow_curve )
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
                                                                  "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
                                                                  "init",
                                                                  363);
                                                                v67 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                        (common::milog::MiLogStream *const)(v2 + 5088),
                                                                        (const char (*)[16])"[CONFIG_ERROR] ");
                                                                v68 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                                                        v67,
                                                                        (const char (*)[14])byte_1ABFD420);
                                                                v69 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                                                                        v68,
                                                                        (const char (*)[256])(v2 + 8576));
                                                                common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                                                                  v69,
                                                                  (const char (*)[7])byte_1ABFD460);
                                                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5088));
                                                                *(_DWORD *)(((v2 + 5088) >> 3) + 0x7FFF8000) = -117901064;
                                                                v7 = -1;
                                                                goto LABEL_240;
                                                              }
                                                              array_count = i + 1;
                                                            }
                                                          }
                                                        }
                                                        std::vector<data::FightPropGrowConfig>::resize(
                                                          &this->prop_grow_curves,
                                                          array_count);
                                                        *(_DWORD *)(((v2 + 5152) >> 3) + 0x7FFF8000) = 0;
                                                        *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = 1;
                                                        std::allocator<char>::allocator(v2 + 544);
                                                        std::string::basic_string<std::allocator<char>>(
                                                          (std::string *const)(v2 + 5152),
                                                          &byte_1AC247A0,
                                                          (const std::allocator<char> *)(v2 + 544));
                                                        v70 = common::tools::TxtFile::Row::assignToNum<float>(
                                                                row,
                                                                (const std::string *)(v2 + 5152),
                                                                &this->element_mastery) != 0;
                                                        std::string::~string((void *)(v2 + 5152));
                                                        *(_DWORD *)(((v2 + 5152) >> 3) + 0x7FFF8000) = -117901064;
                                                        std::allocator<char>::~allocator(v2 + 544);
                                                        *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = -8;
                                                        if ( v70 )
                                                        {
                                                          *(_DWORD *)(((v2 + 5216) >> 3) + 0x7FFF8000) = 0;
                                                          if ( *(char *)(((v2 + 5216) >> 3) + 0x7FFF8000) < 0
                                                            || *(_BYTE *)(((v2 + 5247) >> 3) + 0x7FFF8000) != 0
                                                            && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 5247) >> 3)
                                                                                                  + 0x7FFF8000) )
                                                          {
                                                            __asan_report_store_n(v2 + 5216, 32LL);
                                                          }
                                                          common::milog::MiLogStream::create(
                                                            (common::milog::MiLogStream *)(v2 + 5216),
                                                            &common::milog::MiLogDefault::default_log_obj_,
                                                            4u,
                                                            "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
                                                            "init",
                                                            372);
                                                          v71 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                  (common::milog::MiLogStream *const)(v2 + 5216),
                                                                  (const char (*)[16])"[CONFIG_ERROR] ");
                                                          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                                            v71,
                                                            (const char (*)[33])byte_1AC247E0);
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
                                                            &byte_1AC24840,
                                                            (const std::allocator<char> *)(v2 + 560));
                                                          v72 = common::tools::TxtFile::Row::assignToNum<float>(
                                                                  row,
                                                                  (const std::string *)(v2 + 5280),
                                                                  &this->physical_sub_hurt) != 0;
                                                          std::string::~string((void *)(v2 + 5280));
                                                          *(_DWORD *)(((v2 + 5280) >> 3) + 0x7FFF8000) = -117901064;
                                                          std::allocator<char>::~allocator(v2 + 560);
                                                          *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = -8;
                                                          if ( v72 )
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
                                                              "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
                                                              "init",
                                                              377);
                                                            v73 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                    (common::milog::MiLogStream *const)(v2 + 5344),
                                                                    (const char (*)[16])"[CONFIG_ERROR] ");
                                                            common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                                              v73,
                                                              (const char (*)[33])byte_1AC24880);
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
                                                              &byte_1AC248E0,
                                                              (const std::allocator<char> *)(v2 + 576));
                                                            v74 = common::tools::TxtFile::Row::assignToNum<float>(
                                                                    row,
                                                                    (const std::string *)(v2 + 5408),
                                                                    &this->physical_add_hurt) != 0;
                                                            std::string::~string((void *)(v2 + 5408));
                                                            *(_DWORD *)(((v2 + 5408) >> 3) + 0x7FFF8000) = -117901064;
                                                            std::allocator<char>::~allocator(v2 + 576);
                                                            *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) = -8;
                                                            if ( v74 )
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
                                                                "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
                                                                "init",
                                                                382);
                                                              v75 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                      (common::milog::MiLogStream *const)(v2 + 5472),
                                                                      (const char (*)[16])"[CONFIG_ERROR] ");
                                                              common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                                                v75,
                                                                (const char (*)[39])byte_1AC24920);
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
                                                                &byte_1AC24980,
                                                                (const std::allocator<char> *)(v2 + 592));
                                                              v76 = common::tools::TxtFile::Row::assignToEnum<data::AvatarUseType>(
                                                                      row,
                                                                      (const std::string *)(v2 + 5536),
                                                                      &this->use_type) != 0;
                                                              std::string::~string((void *)(v2 + 5536));
                                                              *(_DWORD *)(((v2 + 5536) >> 3) + 0x7FFF8000) = -117901064;
                                                              std::allocator<char>::~allocator(v2 + 592);
                                                              *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) = -8;
                                                              if ( v76 )
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
                                                                  "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
                                                                  "init",
                                                                  387);
                                                                v77 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                        (common::milog::MiLogStream *const)(v2 + 5600),
                                                                        (const char (*)[16])"[CONFIG_ERROR] ");
                                                                common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                                                  v77,
                                                                  (const char (*)[33])byte_1AC249C0);
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
                                                                  &byte_1AC24A20,
                                                                  (const std::allocator<char> *)(v2 + 608));
                                                                v78 = common::tools::TxtFile::Row::assignToNum<float>(
                                                                        row,
                                                                        (const std::string *)(v2 + 5664),
                                                                        &this->element_react_critical) != 0;
                                                                std::string::~string((void *)(v2 + 5664));
                                                                *(_DWORD *)(((v2 + 5664) >> 3) + 0x7FFF8000) = -117901064;
                                                                std::allocator<char>::~allocator(v2 + 608);
                                                                *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) = -8;
                                                                if ( v78 )
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
                                                                    "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
                                                                    "init",
                                                                    392);
                                                                  v79 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                          (common::milog::MiLogStream *const)(v2 + 5728),
                                                                          (const char (*)[16])"[CONFIG_ERROR] ");
                                                                  common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                                                                    v79,
                                                                    (const char (*)[36])byte_1AC24A60);
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
                                                                    &byte_1AC24AC0,
                                                                    (const std::allocator<char> *)(v2 + 624));
                                                                  v80 = common::tools::TxtFile::Row::assignToNum<float>(
                                                                          row,
                                                                          (const std::string *)(v2 + 5792),
                                                                          &this->element_react_critical_hurt) != 0;
                                                                  std::string::~string((void *)(v2 + 5792));
                                                                  *(_DWORD *)(((v2 + 5792) >> 3) + 0x7FFF8000) = -117901064;
                                                                  std::allocator<char>::~allocator(v2 + 624);
                                                                  *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) = -8;
                                                                  if ( v80 )
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
                                                                      "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
                                                                      "init",
                                                                      397);
                                                                    v81 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                            (common::milog::MiLogStream *const)(v2 + 5856),
                                                                            (const char (*)[16])"[CONFIG_ERROR] ");
                                                                    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                                                      v81,
                                                                      (const char (*)[39])byte_1AC24B00);
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
                                                                      &byte_1AC24B60,
                                                                      (const std::allocator<char> *)(v2 + 640));
                                                                    v82 = common::tools::TxtFile::Row::assignToEnum<data::QualityType>(
                                                                            row,
                                                                            (const std::string *)(v2 + 5920),
                                                                            &this->quality_type) != 0;
                                                                    std::string::~string((void *)(v2 + 5920));
                                                                    *(_DWORD *)(((v2 + 5920) >> 3) + 0x7FFF8000) = -117901064;
                                                                    std::allocator<char>::~allocator(v2 + 640);
                                                                    *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) = -8;
                                                                    if ( v82 )
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
                                                                        "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
                                                                        "init",
                                                                        402);
                                                                      v83 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                              (common::milog::MiLogStream *const)(v2 + 5984),
                                                                              (const char (*)[16])"[CONFIG_ERROR] ");
                                                                      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                                                        v83,
                                                                        (const char (*)[33])byte_1AC24BA0);
                                                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5984));
                                                                      *(_DWORD *)(((v2 + 5984) >> 3) + 0x7FFF8000) = -117901064;
                                                                      v7 = -1;
                                                                    }
                                                                    else
                                                                    {
                                                                      *(_DWORD *)(((v2 + 6048) >> 3) + 0x7FFF8000) = 0;
                                                                      *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) = 1;
                                                                      std::allocator<char>::allocator(v2 + 656);
                                                                      std::string::basic_string<std::allocator<char>>(
                                                                        (std::string *const)(v2 + 6048),
                                                                        &byte_1AC24C00,
                                                                        (const std::allocator<char> *)(v2 + 656));
                                                                      v84 = common::tools::TxtFile::Row::assignToNum<float>(
                                                                              row,
                                                                              (const std::string *)(v2 + 6048),
                                                                              &this->charge_efficiency) != 0;
                                                                      std::string::~string((void *)(v2 + 6048));
                                                                      *(_DWORD *)(((v2 + 6048) >> 3) + 0x7FFF8000) = -117901064;
                                                                      std::allocator<char>::~allocator(v2 + 656);
                                                                      *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) = -8;
                                                                      if ( v84 )
                                                                      {
                                                                        *(_DWORD *)(((v2 + 6112) >> 3) + 0x7FFF8000) = 0;
                                                                        if ( *(char *)(((v2 + 6112) >> 3) + 0x7FFF8000) < 0
                                                                          || *(_BYTE *)(((v2 + 6143) >> 3) + 0x7FFF8000) != 0
                                                                          && (char)((v2 - 64 + 63) & 7) >= *(_BYTE *)(((v2 + 6143) >> 3) + 0x7FFF8000) )
                                                                        {
                                                                          __asan_report_store_n(v2 + 6112, 32LL);
                                                                        }
                                                                        common::milog::MiLogStream::create(
                                                                          (common::milog::MiLogStream *)(v2 + 6112),
                                                                          &common::milog::MiLogDefault::default_log_obj_,
                                                                          4u,
                                                                          "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
                                                                          "init",
                                                                          407);
                                                                        v85 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                                (common::milog::MiLogStream *const)(v2 + 6112),
                                                                                (const char (*)[16])"[CONFIG_ERROR] ");
                                                                        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                                                          v85,
                                                                          (const char (*)[33])byte_1AC24C40);
                                                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 6112));
                                                                        *(_DWORD *)(((v2 + 6112) >> 3) + 0x7FFF8000) = -117901064;
                                                                        v7 = -1;
                                                                      }
                                                                      else
                                                                      {
                                                                        *(_DWORD *)(((v2 + 6176) >> 3) + 0x7FFF8000) = 0;
                                                                        *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) = 1;
                                                                        std::allocator<char>::allocator(v2 + 672);
                                                                        std::string::basic_string<std::allocator<char>>(
                                                                          (std::string *const)(v2 + 6176),
                                                                          &byte_1AC24CA0,
                                                                          (const std::allocator<char> *)(v2 + 672));
                                                                        v86 = common::tools::TxtFile::Row::assignToNum<float>(
                                                                                row,
                                                                                (const std::string *)(v2 + 6176),
                                                                                &this->heal_add) != 0;
                                                                        std::string::~string((void *)(v2 + 6176));
                                                                        *(_DWORD *)(((v2 + 6176) >> 3) + 0x7FFF8000) = -117901064;
                                                                        std::allocator<char>::~allocator(v2 + 672);
                                                                        *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) = -8;
                                                                        if ( v86 )
                                                                        {
                                                                          *(_DWORD *)(((v2 + 6240) >> 3) + 0x7FFF8000) = 0;
                                                                          if ( *(char *)(((v2 + 6240) >> 3) + 0x7FFF8000) < 0
                                                                            || *(_BYTE *)(((v2 + 6271) >> 3) + 0x7FFF8000) != 0
                                                                            && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 6271) >> 3) + 0x7FFF8000) )
                                                                          {
                                                                            __asan_report_store_n(v2 + 6240, 32LL);
                                                                          }
                                                                          common::milog::MiLogStream::create(
                                                                            (common::milog::MiLogStream *)(v2 + 6240),
                                                                            &common::milog::MiLogDefault::default_log_obj_,
                                                                            4u,
                                                                            "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
                                                                            "init",
                                                                            412);
                                                                          v87 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                                  (common::milog::MiLogStream *const)(v2 + 6240),
                                                                                  (const char (*)[16])"[CONFIG_ERROR] ");
                                                                          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                                                            v87,
                                                                            (const char (*)[33])byte_1AC24CE0);
                                                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 6240));
                                                                          *(_DWORD *)(((v2 + 6240) >> 3) + 0x7FFF8000) = -117901064;
                                                                          v7 = -1;
                                                                        }
                                                                        else
                                                                        {
                                                                          *(_DWORD *)(((v2 + 6304) >> 3) + 0x7FFF8000) = 0;
                                                                          *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) = 1;
                                                                          std::allocator<char>::allocator(v2 + 688);
                                                                          std::string::basic_string<std::allocator<char>>(
                                                                            (std::string *const)(v2 + 6304),
                                                                            &byte_1AC24D40,
                                                                            (const std::allocator<char> *)(v2 + 688));
                                                                          v88 = common::tools::TxtFile::Row::assignToNum<float>(
                                                                                  row,
                                                                                  (const std::string *)(v2 + 6304),
                                                                                  &this->healed_add) != 0;
                                                                          std::string::~string((void *)(v2 + 6304));
                                                                          *(_DWORD *)(((v2 + 6304) >> 3) + 0x7FFF8000) = -117901064;
                                                                          std::allocator<char>::~allocator(v2 + 688);
                                                                          *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) = -8;
                                                                          if ( v88 )
                                                                          {
                                                                            *(_DWORD *)(((v2 + 6368) >> 3) + 0x7FFF8000) = 0;
                                                                            if ( *(char *)(((v2 + 6368) >> 3)
                                                                                         + 0x7FFF8000) < 0
                                                                              || *(_BYTE *)(((v2 + 6399) >> 3)
                                                                                          + 0x7FFF8000) != 0
                                                                              && (char)((v2 - 64 + 63) & 7) >= *(_BYTE *)(((v2 + 6399) >> 3) + 0x7FFF8000) )
                                                                            {
                                                                              __asan_report_store_n(v2 + 6368, 32LL);
                                                                            }
                                                                            common::milog::MiLogStream::create(
                                                                              (common::milog::MiLogStream *)(v2 + 6368),
                                                                              &common::milog::MiLogDefault::default_log_obj_,
                                                                              4u,
                                                                              "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
                                                                              "init",
                                                                              417);
                                                                            v89 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                                    (common::milog::MiLogStream *const)(v2 + 6368),
                                                                                    (const char (*)[16])"[CONFIG_ERROR] ");
                                                                            common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                                                                              v89,
                                                                              (const char (*)[36])byte_1AC24D80);
                                                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 6368));
                                                                            *(_DWORD *)(((v2 + 6368) >> 3) + 0x7FFF8000) = -117901064;
                                                                            v7 = -1;
                                                                          }
                                                                          else
                                                                          {
                                                                            *(_DWORD *)(((v2 + 6432) >> 3) + 0x7FFF8000) = 0;
                                                                            *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) = 1;
                                                                            std::allocator<char>::allocator(v2 + 704);
                                                                            std::string::basic_string<std::allocator<char>>(
                                                                              (std::string *const)(v2 + 6432),
                                                                              &byte_1AC24DE0,
                                                                              (const std::allocator<char> *)(v2 + 704));
                                                                            v90 = common::tools::TxtFile::Row::assignToStr(
                                                                                    row,
                                                                                    (const std::string *)(v2 + 6432),
                                                                                    &this->combat_config) != 0;
                                                                            std::string::~string((void *)(v2 + 6432));
                                                                            *(_DWORD *)(((v2 + 6432) >> 3) + 0x7FFF8000) = -117901064;
                                                                            std::allocator<char>::~allocator(v2 + 704);
                                                                            *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) = -8;
                                                                            if ( v90 )
                                                                            {
                                                                              *(_DWORD *)(((v2 + 6496) >> 3) + 0x7FFF8000) = 0;
                                                                              if ( *(char *)(((v2 + 6496) >> 3)
                                                                                           + 0x7FFF8000) < 0
                                                                                || *(_BYTE *)(((v2 + 6527) >> 3)
                                                                                            + 0x7FFF8000) != 0
                                                                                && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 6527) >> 3) + 0x7FFF8000) )
                                                                              {
                                                                                __asan_report_store_n(v2 + 6496, 32LL);
                                                                              }
                                                                              common::milog::MiLogStream::create(
                                                                                (common::milog::MiLogStream *)(v2 + 6496),
                                                                                &common::milog::MiLogDefault::default_log_obj_,
                                                                                4u,
                                                                                "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
                                                                                "init",
                                                                                422);
                                                                              v91 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                                      (common::milog::MiLogStream *const)(v2 + 6496),
                                                                                      (const char (*)[16])"[CONFIG_ERROR] ");
                                                                              common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                                                                v91,
                                                                                (const char (*)[33])byte_1AC24E20);
                                                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 6496));
                                                                              *(_DWORD *)(((v2 + 6496) >> 3) + 0x7FFF8000) = -117901064;
                                                                              v7 = -1;
                                                                            }
                                                                            else
                                                                            {
                                                                              *(_DWORD *)(((v2 + 6560) >> 3) + 0x7FFF8000) = 0;
                                                                              *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) = 1;
                                                                              std::allocator<char>::allocator(v2 + 720);
                                                                              std::string::basic_string<std::allocator<char>>(
                                                                                (std::string *const)(v2 + 6560),
                                                                                &byte_1AC24E80,
                                                                                (const std::allocator<char> *)(v2 + 720));
                                                                              v92 = common::tools::TxtFile::Row::assignToNum<bool>(
                                                                                      row,
                                                                                      (const std::string *)(v2 + 6560),
                                                                                      &this->is_range_attack) != 0;
                                                                              std::string::~string((void *)(v2 + 6560));
                                                                              *(_DWORD *)(((v2 + 6560) >> 3) + 0x7FFF8000) = -117901064;
                                                                              std::allocator<char>::~allocator(v2 + 720);
                                                                              *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) = -8;
                                                                              if ( v92 )
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
                                                                                  "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
                                                                                  "init",
                                                                                  427);
                                                                                v93 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                                        (common::milog::MiLogStream *const)(v2 + 6624),
                                                                                        (const char (*)[16])"[CONFIG_ERROR] ");
                                                                                common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                                                                                  v93,
                                                                                  (const char (*)[45])byte_1AC24EC0);
                                                                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 6624));
                                                                                *(_DWORD *)(((v2 + 6624) >> 3)
                                                                                          + 0x7FFF8000) = -117901064;
                                                                                v7 = -1;
                                                                              }
                                                                              else
                                                                              {
                                                                                *(_DWORD *)(((v2 + 6688) >> 3)
                                                                                          + 0x7FFF8000) = 0;
                                                                                *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) = 1;
                                                                                std::allocator<char>::allocator(v2 + 736);
                                                                                std::string::basic_string<std::allocator<char>>(
                                                                                  (std::string *const)(v2 + 6688),
                                                                                  &byte_1AC24F20,
                                                                                  (const std::allocator<char> *)(v2 + 736));
                                                                                v94 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                                                                        row,
                                                                                        (const std::string *)(v2 + 6688),
                                                                                        &this->initial_weapon) != 0;
                                                                                std::string::~string((void *)(v2 + 6688));
                                                                                *(_DWORD *)(((v2 + 6688) >> 3)
                                                                                          + 0x7FFF8000) = -117901064;
                                                                                std::allocator<char>::~allocator(v2 + 736);
                                                                                *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) = -8;
                                                                                if ( v94 )
                                                                                {
                                                                                  *(_DWORD *)(((v2 + 6752) >> 3)
                                                                                            + 0x7FFF8000) = 0;
                                                                                  if ( *(char *)(((v2 + 6752) >> 3)
                                                                                               + 0x7FFF8000) < 0
                                                                                    || *(_BYTE *)(((v2 + 6783) >> 3)
                                                                                                + 0x7FFF8000) != 0
                                                                                    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 6783) >> 3) + 0x7FFF8000) )
                                                                                  {
                                                                                    __asan_report_store_n(
                                                                                      v2 + 6752,
                                                                                      32LL);
                                                                                  }
                                                                                  common::milog::MiLogStream::create(
                                                                                    (common::milog::MiLogStream *)(v2 + 6752),
                                                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                                                    4u,
                                                                                    "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
                                                                                    "init",
                                                                                    432);
                                                                                  v95 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                                          (common::milog::MiLogStream *const)(v2 + 6752),
                                                                                          (const char (*)[16])"[CONFIG_ERROR] ");
                                                                                  common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                                                                    v95,
                                                                                    (const char (*)[33])byte_1AC24F60);
                                                                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 6752));
                                                                                  *(_DWORD *)(((v2 + 6752) >> 3)
                                                                                            + 0x7FFF8000) = -117901064;
                                                                                  v7 = -1;
                                                                                }
                                                                                else
                                                                                {
                                                                                  *(_DWORD *)(((v2 + 6816) >> 3)
                                                                                            + 0x7FFF8000) = 0;
                                                                                  *(_BYTE *)(((v2 + 752) >> 3)
                                                                                           + 0x7FFF8000) = 1;
                                                                                  std::allocator<char>::allocator(v2 + 752);
                                                                                  std::string::basic_string<std::allocator<char>>(
                                                                                    (std::string *const)(v2 + 6816),
                                                                                    &byte_1AC24FC0,
                                                                                    (const std::allocator<char> *)(v2 + 752));
                                                                                  v96 = common::tools::TxtFile::Row::assignToEnum<data::WeaponType>(
                                                                                          row,
                                                                                          (const std::string *)(v2 + 6816),
                                                                                          &this->weapon_type) != 0;
                                                                                  std::string::~string((void *)(v2 + 6816));
                                                                                  *(_DWORD *)(((v2 + 6816) >> 3)
                                                                                            + 0x7FFF8000) = -117901064;
                                                                                  std::allocator<char>::~allocator(v2 + 752);
                                                                                  *(_BYTE *)(((v2 + 752) >> 3)
                                                                                           + 0x7FFF8000) = -8;
                                                                                  if ( v96 )
                                                                                  {
                                                                                    *(_DWORD *)(((v2 + 6880) >> 3)
                                                                                              + 0x7FFF8000) = 0;
                                                                                    if ( *(char *)(((v2 + 6880) >> 3)
                                                                                                 + 0x7FFF8000) < 0
                                                                                      || *(_BYTE *)(((v2 + 6911) >> 3)
                                                                                                  + 0x7FFF8000) != 0
                                                                                      && (char)((v2 - 64 + 63) & 7) >= *(_BYTE *)(((v2 + 6911) >> 3) + 0x7FFF8000) )
                                                                                    {
                                                                                      __asan_report_store_n(
                                                                                        v2 + 6880,
                                                                                        32LL);
                                                                                    }
                                                                                    common::milog::MiLogStream::create(
                                                                                      (common::milog::MiLogStream *)(v2 + 6880),
                                                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                                                      4u,
                                                                                      "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
                                                                                      "init",
                                                                                      437);
                                                                                    v97 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                                            (common::milog::MiLogStream *const)(v2 + 6880),
                                                                                            (const char (*)[16])"[CONFIG_ERROR] ");
                                                                                    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                                                                      v97,
                                                                                      (const char (*)[33])byte_1AC25000);
                                                                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 6880));
                                                                                    *(_DWORD *)(((v2 + 6880) >> 3)
                                                                                              + 0x7FFF8000) = -117901064;
                                                                                    v7 = -1;
                                                                                  }
                                                                                  else
                                                                                  {
                                                                                    *(_DWORD *)(((v2 + 6944) >> 3)
                                                                                              + 0x7FFF8000) = 0;
                                                                                    *(_BYTE *)(((v2 + 768) >> 3)
                                                                                             + 0x7FFF8000) = 1;
                                                                                    std::allocator<char>::allocator(v2 + 768);
                                                                                    std::string::basic_string<std::allocator<char>>(
                                                                                      (std::string *const)(v2 + 6944),
                                                                                      &byte_1AC25060,
                                                                                      (const std::allocator<char> *)(v2 + 768));
                                                                                    v98 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                                                                            row,
                                                                                            (const std::string *)(v2 + 6944),
                                                                                            &this->skill_depot_id) != 0;
                                                                                    std::string::~string((void *)(v2 + 6944));
                                                                                    *(_DWORD *)(((v2 + 6944) >> 3)
                                                                                              + 0x7FFF8000) = -117901064;
                                                                                    std::allocator<char>::~allocator(v2 + 768);
                                                                                    *(_BYTE *)(((v2 + 768) >> 3)
                                                                                             + 0x7FFF8000) = -8;
                                                                                    if ( v98 )
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
                                                                                        "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
                                                                                        "init",
                                                                                        442);
                                                                                      v99 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                                              (common::milog::MiLogStream *const)(v2 + 7008),
                                                                                              (const char (*)[16])"[CONFIG_ERROR] ");
                                                                                      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                                                                                        v99,
                                                                                        (const char (*)[32])byte_1AC250A0);
                                                                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 7008));
                                                                                      *(_DWORD *)(((v2 + 7008) >> 3)
                                                                                                + 0x7FFF8000) = -117901064;
                                                                                      v7 = -1;
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                      *(_DWORD *)(((v2 + 7072) >> 3)
                                                                                                + 0x7FFF8000) = 0;
                                                                                      *(_BYTE *)(((v2 + 784) >> 3)
                                                                                               + 0x7FFF8000) = 1;
                                                                                      std::allocator<char>::allocator(v2 + 784);
                                                                                      std::string::basic_string<std::allocator<char>>(
                                                                                        (std::string *const)(v2 + 7072),
                                                                                        &byte_1AC250E0,
                                                                                        (const std::allocator<char> *)(v2 + 784));
                                                                                      v100 = common::tools::TxtFile::Row::assignToNum<float>(
                                                                                               row,
                                                                                               (const std::string *)(v2 + 7072),
                                                                                               &this->stamina_recover_speed) != 0;
                                                                                      std::string::~string((void *)(v2 + 7072));
                                                                                      *(_DWORD *)(((v2 + 7072) >> 3)
                                                                                                + 0x7FFF8000) = -117901064;
                                                                                      std::allocator<char>::~allocator(v2 + 784);
                                                                                      *(_BYTE *)(((v2 + 784) >> 3)
                                                                                               + 0x7FFF8000) = -8;
                                                                                      if ( v100 )
                                                                                      {
                                                                                        *(_DWORD *)(((v2 + 7136) >> 3)
                                                                                                  + 0x7FFF8000) = 0;
                                                                                        if ( *(char *)(((v2 + 7136) >> 3) + 0x7FFF8000) < 0
                                                                                          || *(_BYTE *)(((v2 + 7167) >> 3) + 0x7FFF8000) != 0
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
                                                                                          "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
                                                                                          "init",
                                                                                          447);
                                                                                        v101 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                                                 (common::milog::MiLogStream *const)(v2 + 7136),
                                                                                                 (const char (*)[16])"[CONFIG_ERROR] ");
                                                                                        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                                                                          v101,
                                                                                          (const char (*)[39])byte_1AC25120);
                                                                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 7136));
                                                                                        *(_DWORD *)(((v2 + 7136) >> 3)
                                                                                                  + 0x7FFF8000) = -117901064;
                                                                                        v7 = -1;
                                                                                      }
                                                                                      else
                                                                                      {
                                                                                        *(_DWORD *)(((v2 + 7200) >> 3)
                                                                                                  + 0x7FFF8000) = 0;
                                                                                        *(_BYTE *)(((v2 + 800) >> 3)
                                                                                                 + 0x7FFF8000) = 1;
                                                                                        std::allocator<char>::allocator(v2 + 800);
                                                                                        std::string::basic_string<std::allocator<char>>(
                                                                                          (std::string *const)(v2 + 7200),
                                                                                          &byte_1AC25180,
                                                                                          (const std::allocator<char> *)(v2 + 800));
                                                                                        v102 = common::tools::TxtFile::Row::assignToStr(
                                                                                                 row,
                                                                                                 (const std::string *)(v2 + 7200),
                                                                                                 (std::string *)(v2 + 1248)) != 0;
                                                                                        std::string::~string((void *)(v2 + 7200));
                                                                                        *(_DWORD *)(((v2 + 7200) >> 3)
                                                                                                  + 0x7FFF8000) = -117901064;
                                                                                        std::allocator<char>::~allocator(v2 + 800);
                                                                                        *(_BYTE *)(((v2 + 800) >> 3)
                                                                                                 + 0x7FFF8000) = -8;
                                                                                        if ( v102 )
                                                                                        {
                                                                                          *(_DWORD *)(((v2 + 7264) >> 3) + 0x7FFF8000) = 0;
                                                                                          if ( *(char *)(((v2 + 7264) >> 3) + 0x7FFF8000) < 0
                                                                                            || *(_BYTE *)(((v2 + 7295) >> 3) + 0x7FFF8000) != 0
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
                                                                                            "./src/txt_data_auto/AvatarEx"
                                                                                            "celConfig.gen.cpp",
                                                                                            "init",
                                                                                            452);
                                                                                          v103 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                                                   (common::milog::MiLogStream *const)(v2 + 7264),
                                                                                                   (const char (*)[16])"[CONFIG_ERROR] ");
                                                                                          common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                                                                                            v103,
                                                                                            (const char (*)[38])byte_1AC251C0);
                                                                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 7264));
                                                                                          *(_DWORD *)(((v2 + 7264) >> 3) + 0x7FFF8000) = -117901064;
                                                                                          v7 = -1;
                                                                                        }
                                                                                        else
                                                                                        {
                                                                                          v104 = ((v2 + 1056) >> 3)
                                                                                               + 2147450880;
                                                                                          *(_WORD *)v104 = 0;
                                                                                          *(_BYTE *)(v104 + 2) = 0;
                                                                                          v105 = (_DWORD *)(((v2 + 8288) >> 3) + 2147450880);
                                                                                          *v105 = 0;
                                                                                          v105[1] = 0;
                                                                                          *(_BYTE *)(((v2 + 816) >> 3) + 0x7FFF8000) = 1;
                                                                                          std::allocator<char>::allocator(v2 + 816);
                                                                                          std::string::basic_string<std::allocator<char>>(
                                                                                            (std::string *const)(v2 + 8288),
                                                                                            ";",
                                                                                            (const std::allocator<char> *)(v2 + 816));
                                                                                          *(_BYTE *)(((v2 + 832) >> 3) + 0x7FFF8000) = 1;
                                                                                          std::allocator<char>::allocator(v2 + 832);
                                                                                          std::string::basic_string<std::allocator<char>>(
                                                                                            (std::string *const)(v2 + 8320),
                                                                                            ",",
                                                                                            (const std::allocator<char> *)(v2 + 832));
                                                                                          __l._M_array = (std::initializer_list<std::string >::iterator)(v2 + 8288);
                                                                                          __l._M_len = 2LL;
                                                                                          *(_BYTE *)(((v2 + 848) >> 3) + 0x7FFF8000) = 1;
                                                                                          std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 848));
                                                                                          std::vector<std::string>::vector(
                                                                                            (std::vector<std::string> *const)(v2 + 1056),
                                                                                            __l,
                                                                                            (const std::vector<std::string>::allocator_type *)(v2 + 848));
                                                                                          v106 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                                                                                                   (const std::string *)(v2 + 1248),
                                                                                                   (const std::vector<std::string> *)(v2 + 1056),
                                                                                                   &this->cand_skill_depot_ids,
                                                                                                   1) != 0;
                                                                                          std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 1056));
                                                                                          v107 = ((v2 + 1056) >> 3)
                                                                                               + 2147450880;
                                                                                          *(_WORD *)v107 = -1800;
                                                                                          *(_BYTE *)(v107 + 2) = -8;
                                                                                          std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 848));
                                                                                          *(_BYTE *)(((v2 + 848) >> 3) + 0x7FFF8000) = -8;
                                                                                          for ( j = (char *)(v2 + 8352);
                                                                                                j != (char *)(v2 + 8288);
                                                                                                std::string::~string(j) )
                                                                                          {
                                                                                            j -= 32;
                                                                                          }
                                                                                          v109 = (_DWORD *)(((v2 + 8288) >> 3) + 2147450880);
                                                                                          *v109 = -117901064;
                                                                                          v109[1] = -117901064;
                                                                                          std::allocator<char>::~allocator(v2 + 832);
                                                                                          *(_BYTE *)(((v2 + 832) >> 3) + 0x7FFF8000) = -8;
                                                                                          std::allocator<char>::~allocator(v2 + 816);
                                                                                          *(_BYTE *)(((v2 + 816) >> 3) + 0x7FFF8000) = -8;
                                                                                          if ( v106 )
                                                                                          {
                                                                                            *(_DWORD *)(((v2 + 7328) >> 3) + 0x7FFF8000) = 0;
                                                                                            if ( *(char *)(((v2 + 7328) >> 3) + 0x7FFF8000) < 0
                                                                                              || *(_BYTE *)(((v2 + 7359) >> 3) + 0x7FFF8000) != 0
                                                                                              && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 7359) >> 3) + 0x7FFF8000) )
                                                                                            {
                                                                                              __asan_report_store_n(
                                                                                                v2 + 7328,
                                                                                                32LL);
                                                                                            }
                                                                                            common::milog::MiLogStream::create(
                                                                                              (common::milog::MiLogStream *)(v2 + 7328),
                                                                                              &common::milog::MiLogDefault::default_log_obj_,
                                                                                              4u,
                                                                                              "./src/txt_data_auto/Avatar"
                                                                                              "ExcelConfig.gen.cpp",
                                                                                              "init",
                                                                                              457);
                                                                                            v110 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                                                     (common::milog::MiLogStream *const)(v2 + 7328),
                                                                                                     (const char (*)[16])"[CONFIG_ERROR] ");
                                                                                            common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                                                                                              v110,
                                                                                              (const char (*)[38])byte_1AC251C0);
                                                                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 7328));
                                                                                            *(_DWORD *)(((v2 + 7328) >> 3) + 0x7FFF8000) = -117901064;
                                                                                            v7 = -1;
                                                                                          }
                                                                                          else
                                                                                          {
                                                                                            *(_DWORD *)(((v2 + 7392) >> 3) + 0x7FFF8000) = 0;
                                                                                            *(_BYTE *)(((v2 + 864) >> 3) + 0x7FFF8000) = 1;
                                                                                            std::allocator<char>::allocator(v2 + 864);
                                                                                            std::string::basic_string<std::allocator<char>>(
                                                                                              (std::string *const)(v2 + 7392),
                                                                                              &byte_1AC25220,
                                                                                              (const std::allocator<char> *)(v2 + 864));
                                                                                            v111 = common::tools::TxtFile::Row::assignToEnum<data::AvatarIdentityType>(
                                                                                                     row,
                                                                                                     (const std::string *)(v2 + 7392),
                                                                                                     &this->avatar_identity_type) != 0;
                                                                                            std::string::~string((void *)(v2 + 7392));
                                                                                            *(_DWORD *)(((v2 + 7392) >> 3) + 0x7FFF8000) = -117901064;
                                                                                            std::allocator<char>::~allocator(v2 + 864);
                                                                                            *(_BYTE *)(((v2 + 864) >> 3) + 0x7FFF8000) = -8;
                                                                                            if ( v111 )
                                                                                            {
                                                                                              *(_DWORD *)(((v2 + 7456) >> 3) + 0x7FFF8000) = 0;
                                                                                              if ( *(char *)(((v2 + 7456) >> 3) + 0x7FFF8000) < 0
                                                                                                || *(_BYTE *)(((v2 + 7487) >> 3) + 0x7FFF8000) != 0
                                                                                                && (char)((v2 - 64 + 127) & 7) >= *(_BYTE *)(((v2 + 7487) >> 3) + 0x7FFF8000) )
                                                                                              {
                                                                                                __asan_report_store_n(
                                                                                                  v2 + 7456,
                                                                                                  32LL);
                                                                                              }
                                                                                              common::milog::MiLogStream::create(
                                                                                                (common::milog::MiLogStream *)(v2 + 7456),
                                                                                                &common::milog::MiLogDefault::default_log_obj_,
                                                                                                4u,
                                                                                                "./src/txt_data_auto/Avat"
                                                                                                "arExcelConfig.gen.cpp",
                                                                                                "init",
                                                                                                462);
                                                                                              v112 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>((common::milog::MiLogStream *const)(v2 + 7456), (const char (*)[16])"[CONFIG_ERROR] ");
                                                                                              common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                                                                                v112,
                                                                                                (const char (*)[33])byte_1AC25260);
                                                                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 7456));
                                                                                              *(_DWORD *)(((v2 + 7456) >> 3) + 0x7FFF8000) = -117901064;
                                                                                              v7 = -1;
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                              *(_DWORD *)(((v2 + 7520) >> 3) + 0x7FFF8000) = 0;
                                                                                              *(_BYTE *)(((v2 + 880) >> 3) + 0x7FFF8000) = 1;
                                                                                              std::allocator<char>::allocator(v2 + 880);
                                                                                              std::string::basic_string<std::allocator<char>>(
                                                                                                (std::string *const)(v2 + 7520),
                                                                                                &byte_1AC252C0,
                                                                                                (const std::allocator<char> *)(v2 + 880));
                                                                                              v113 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 7520), &this->avatar_promote_id) != 0;
                                                                                              std::string::~string((void *)(v2 + 7520));
                                                                                              *(_DWORD *)(((v2 + 7520) >> 3) + 0x7FFF8000) = -117901064;
                                                                                              std::allocator<char>::~allocator(v2 + 880);
                                                                                              *(_BYTE *)(((v2 + 880) >> 3) + 0x7FFF8000) = -8;
                                                                                              if ( v113 )
                                                                                              {
                                                                                                *(_DWORD *)(((v2 + 7584) >> 3) + 0x7FFF8000) = 0;
                                                                                                if ( *(char *)(((v2 + 7584) >> 3) + 0x7FFF8000) < 0 || *(_BYTE *)(((v2 + 7615) >> 3) + 0x7FFF8000) != 0 && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 7615) >> 3) + 0x7FFF8000) )
                                                                                                  __asan_report_store_n(
                                                                                                    v2 + 7584,
                                                                                                    32LL);
                                                                                                common::milog::MiLogStream::create(
                                                                                                  (common::milog::MiLogStream *)(v2 + 7584),
                                                                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                                                                  4u,
                                                                                                  "./src/txt_data_auto/Av"
                                                                                                  "atarExcelConfig.gen.cpp",
                                                                                                  "init",
                                                                                                  467);
                                                                                                v114 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>((common::milog::MiLogStream *const)(v2 + 7584), (const char (*)[16])"[CONFIG_ERROR] ");
                                                                                                common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                                                                                                  v114,
                                                                                                  (const char (*)[35])byte_1AC25300);
                                                                                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 7584));
                                                                                                *(_DWORD *)(((v2 + 7584) >> 3) + 0x7FFF8000) = -117901064;
                                                                                                v7 = -1;
                                                                                              }
                                                                                              else
                                                                                              {
                                                                                                *(_DWORD *)(((v2 + 7648) >> 3) + 0x7FFF8000) = 0;
                                                                                                *(_BYTE *)(((v2 + 896) >> 3) + 0x7FFF8000) = 1;
                                                                                                std::allocator<char>::allocator(v2 + 896);
                                                                                                std::string::basic_string<std::allocator<char>>(
                                                                                                  (std::string *const)(v2 + 7648),
                                                                                                  &byte_1AC25360,
                                                                                                  (const std::allocator<char> *)(v2 + 896));
                                                                                                v115 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 7648), (std::string *)(v2 + 1248)) != 0;
                                                                                                std::string::~string((void *)(v2 + 7648));
                                                                                                *(_DWORD *)(((v2 + 7648) >> 3) + 0x7FFF8000) = -117901064;
                                                                                                std::allocator<char>::~allocator(v2 + 896);
                                                                                                *(_BYTE *)(((v2 + 896) >> 3) + 0x7FFF8000) = -8;
                                                                                                if ( v115 )
                                                                                                {
                                                                                                  *(_DWORD *)(((v2 + 7712) >> 3) + 0x7FFF8000) = 0;
                                                                                                  if ( *(char *)(((v2 + 7712) >> 3) + 0x7FFF8000) < 0 || *(_BYTE *)(((v2 + 7743) >> 3) + 0x7FFF8000) != 0 && (char)((v2 - 64 + 127) & 7) >= *(_BYTE *)(((v2 + 7743) >> 3) + 0x7FFF8000) )
                                                                                                    __asan_report_store_n(v2 + 7712, 32LL);
                                                                                                  common::milog::MiLogStream::create(
                                                                                                    (common::milog::MiLogStream *)(v2 + 7712),
                                                                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                                                                    4u,
                                                                                                    "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
                                                                                                    "init",
                                                                                                    472);
                                                                                                  v116 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>((common::milog::MiLogStream *const)(v2 + 7712), (const char (*)[16])"[CONFIG_ERROR] ");
                                                                                                  common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                                                                                                    v116,
                                                                                                    (const char (*)[51])byte_1AC253A0);
                                                                                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 7712));
                                                                                                  *(_DWORD *)(((v2 + 7712) >> 3) + 0x7FFF8000) = -117901064;
                                                                                                  v7 = -1;
                                                                                                }
                                                                                                else
                                                                                                {
                                                                                                  v117 = ((v2 + 1120) >> 3) + 2147450880;
                                                                                                  *(_WORD *)v117 = 0;
                                                                                                  *(_BYTE *)(v117 + 2) = 0;
                                                                                                  v118 = (_DWORD *)(((v2 + 8384) >> 3) + 2147450880);
                                                                                                  *v118 = 0;
                                                                                                  v118[1] = 0;
                                                                                                  *(_BYTE *)(((v2 + 912) >> 3) + 0x7FFF8000) = 1;
                                                                                                  std::allocator<char>::allocator(v2 + 912);
                                                                                                  std::string::basic_string<std::allocator<char>>(
                                                                                                    (std::string *const)(v2 + 8384),
                                                                                                    ";",
                                                                                                    (const std::allocator<char> *)(v2 + 912));
                                                                                                  *(_BYTE *)(((v2 + 928) >> 3) + 0x7FFF8000) = 1;
                                                                                                  std::allocator<char>::allocator(v2 + 928);
                                                                                                  std::string::basic_string<std::allocator<char>>(
                                                                                                    (std::string *const)(v2 + 8416),
                                                                                                    ",",
                                                                                                    (const std::allocator<char> *)(v2 + 928));
                                                                                                  v139._M_array = (std::initializer_list<std::string >::iterator)(v2 + 8384);
                                                                                                  v139._M_len = 2LL;
                                                                                                  *(_BYTE *)(((v2 + 944) >> 3) + 0x7FFF8000) = 1;
                                                                                                  std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 944));
                                                                                                  std::vector<std::string>::vector(
                                                                                                    (std::vector<std::string> *const)(v2 + 1120),
                                                                                                    v139,
                                                                                                    (const std::vector<std::string>::allocator_type *)(v2 + 944));
                                                                                                  v119 = common::tools::StringUtils::splitToListBySeps<unsigned int>((const std::string *)(v2 + 1248), (const std::vector<std::string> *)(v2 + 1120), &this->avatar_promote_reward_level_list, 1) != 0;
                                                                                                  std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 1120));
                                                                                                  v120 = ((v2 + 1120) >> 3) + 2147450880;
                                                                                                  *(_WORD *)v120 = -1800;
                                                                                                  *(_BYTE *)(v120 + 2) = -8;
                                                                                                  std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 944));
                                                                                                  *(_BYTE *)(((v2 + 944) >> 3) + 0x7FFF8000) = -8;
                                                                                                  for ( k = (char *)(v2 + 8448);
                                                                                                        k != (char *)(v2 + 8384);
                                                                                                        std::string::~string(k) )
                                                                                                  {
                                                                                                    k -= 32;
                                                                                                  }
                                                                                                  v122 = (_DWORD *)(((v2 + 8384) >> 3) + 2147450880);
                                                                                                  *v122 = -117901064;
                                                                                                  v122[1] = -117901064;
                                                                                                  std::allocator<char>::~allocator(v2 + 928);
                                                                                                  *(_BYTE *)(((v2 + 928) >> 3) + 0x7FFF8000) = -8;
                                                                                                  std::allocator<char>::~allocator(v2 + 912);
                                                                                                  *(_BYTE *)(((v2 + 912) >> 3) + 0x7FFF8000) = -8;
                                                                                                  if ( v119 )
                                                                                                  {
                                                                                                    *(_DWORD *)(((v2 + 7776) >> 3) + 0x7FFF8000) = 0;
                                                                                                    if ( *(char *)(((v2 + 7776) >> 3) + 0x7FFF8000) < 0 || *(_BYTE *)(((v2 + 7807) >> 3) + 0x7FFF8000) != 0 && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 7807) >> 3) + 0x7FFF8000) )
                                                                                                      __asan_report_store_n(v2 + 7776, 32LL);
                                                                                                    common::milog::MiLogStream::create((common::milog::MiLogStream *)(v2 + 7776), &common::milog::MiLogDefault::default_log_obj_, 4u, "./src/txt_data_auto/AvatarExcelConfig.gen.cpp", "init", 477);
                                                                                                    v123 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>((common::milog::MiLogStream *const)(v2 + 7776), (const char (*)[16])"[CONFIG_ERROR] ");
                                                                                                    common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(v123, (const char (*)[51])byte_1AC253A0);
                                                                                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 7776));
                                                                                                    *(_DWORD *)(((v2 + 7776) >> 3) + 0x7FFF8000) = -117901064;
                                                                                                    v7 = -1;
                                                                                                  }
                                                                                                  else
                                                                                                  {
                                                                                                    *(_DWORD *)(((v2 + 7840) >> 3) + 0x7FFF8000) = 0;
                                                                                                    *(_BYTE *)(((v2 + 960) >> 3) + 0x7FFF8000) = 1;
                                                                                                    std::allocator<char>::allocator(v2 + 960);
                                                                                                    std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 7840), &byte_1AC25400, (const std::allocator<char> *)(v2 + 960));
                                                                                                    v124 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 7840), (std::string *)(v2 + 1248)) != 0;
                                                                                                    std::string::~string((void *)(v2 + 7840));
                                                                                                    *(_DWORD *)(((v2 + 7840) >> 3) + 0x7FFF8000) = -117901064;
                                                                                                    std::allocator<char>::~allocator(v2 + 960);
                                                                                                    *(_BYTE *)(((v2 + 960) >> 3) + 0x7FFF8000) = -8;
                                                                                                    if ( v124 )
                                                                                                    {
                                                                                                      *(_DWORD *)(((v2 + 7904) >> 3) + 0x7FFF8000) = 0;
                                                                                                      if ( *(char *)(((v2 + 7904) >> 3) + 0x7FFF8000) < 0 || *(_BYTE *)(((v2 + 7935) >> 3) + 0x7FFF8000) != 0 && (char)((v2 - 64 + 63) & 7) >= *(_BYTE *)(((v2 + 7935) >> 3) + 0x7FFF8000) )
                                                                                                        __asan_report_store_n(v2 + 7904, 32LL);
                                                                                                      common::milog::MiLogStream::create((common::milog::MiLogStream *)(v2 + 7904), &common::milog::MiLogDefault::default_log_obj_, 4u, "./src/txt_data_auto/AvatarExcelConfig.gen.cpp", "init", 482);
                                                                                                      v125 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>((common::milog::MiLogStream *const)(v2 + 7904), (const char (*)[16])"[CONFIG_ERROR] ");
                                                                                                      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v125, (const char (*)[39])byte_1AC25440);
                                                                                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 7904));
                                                                                                      *(_DWORD *)(((v2 + 7904) >> 3) + 0x7FFF8000) = -117901064;
                                                                                                      v7 = -1;
                                                                                                    }
                                                                                                    else
                                                                                                    {
                                                                                                      v126 = ((v2 + 1184) >> 3) + 2147450880;
                                                                                                      *(_WORD *)v126 = 0;
                                                                                                      *(_BYTE *)(v126 + 2) = 0;
                                                                                                      v127 = (_DWORD *)(((v2 + 8480) >> 3) + 2147450880);
                                                                                                      *v127 = 0;
                                                                                                      v127[1] = 0;
                                                                                                      *(_BYTE *)(((v2 + 976) >> 3) + 0x7FFF8000) = 1;
                                                                                                      std::allocator<char>::allocator(v2 + 976);
                                                                                                      std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 8480), ";", (const std::allocator<char> *)(v2 + 976));
                                                                                                      *(_BYTE *)(((v2 + 992) >> 3) + 0x7FFF8000) = 1;
                                                                                                      std::allocator<char>::allocator(v2 + 992);
                                                                                                      std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 8512), ",", (const std::allocator<char> *)(v2 + 992));
                                                                                                      v140._M_array = (std::initializer_list<std::string >::iterator)(v2 + 8480);
                                                                                                      v140._M_len = 2LL;
                                                                                                      *(_BYTE *)(((v2 + 1008) >> 3) + 0x7FFF8000) = 1;
                                                                                                      std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 1008));
                                                                                                      std::vector<std::string>::vector((std::vector<std::string> *const)(v2 + 1184), v140, (const std::vector<std::string>::allocator_type *)(v2 + 1008));
                                                                                                      v128 = common::tools::StringUtils::splitToListBySeps<unsigned int>((const std::string *)(v2 + 1248), (const std::vector<std::string> *)(v2 + 1184), &this->avatar_promote_reward_id_list, 1) != 0;
                                                                                                      std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 1184));
                                                                                                      v129 = ((v2 + 1184) >> 3) + 2147450880;
                                                                                                      *(_WORD *)v129 = -1800;
                                                                                                      *(_BYTE *)(v129 + 2) = -8;
                                                                                                      std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 1008));
                                                                                                      *(_BYTE *)(((v2 + 1008) >> 3) + 0x7FFF8000) = -8;
                                                                                                      for ( m = (char *)(v2 + 8544);
                                                                                                            m != (char *)(v2 + 8480);
                                                                                                            std::string::~string(m) )
                                                                                                      {
                                                                                                        m -= 32;
                                                                                                      }
                                                                                                      v131 = (_DWORD *)(((v2 + 8480) >> 3) + 2147450880);
                                                                                                      *v131 = -117901064;
                                                                                                      v131[1] = -117901064;
                                                                                                      std::allocator<char>::~allocator(v2 + 992);
                                                                                                      *(_BYTE *)(((v2 + 992) >> 3) + 0x7FFF8000) = -8;
                                                                                                      std::allocator<char>::~allocator(v2 + 976);
                                                                                                      *(_BYTE *)(((v2 + 976) >> 3) + 0x7FFF8000) = -8;
                                                                                                      if ( v128 )
                                                                                                      {
                                                                                                        *(_DWORD *)(((v2 + 7968) >> 3) + 0x7FFF8000) = 0;
                                                                                                        if ( *(char *)(((v2 + 7968) >> 3) + 0x7FFF8000) < 0 || *(_BYTE *)(((v2 + 7999) >> 3) + 0x7FFF8000) != 0 && (char)((v2 - 64 + 127) & 7) >= *(_BYTE *)(((v2 + 7999) >> 3) + 0x7FFF8000) )
                                                                                                          __asan_report_store_n(v2 + 7968, 32LL);
                                                                                                        common::milog::MiLogStream::create((common::milog::MiLogStream *)(v2 + 7968), &common::milog::MiLogDefault::default_log_obj_, 4u, "./src/txt_data_auto/AvatarExcelConfig.gen.cpp", "init", 487);
                                                                                                        v132 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>((common::milog::MiLogStream *const)(v2 + 7968), (const char (*)[16])"[CONFIG_ERROR] ");
                                                                                                        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v132, (const char (*)[39])byte_1AC25440);
                                                                                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 7968));
                                                                                                        *(_DWORD *)(((v2 + 7968) >> 3) + 0x7FFF8000) = -117901064;
                                                                                                        v7 = -1;
                                                                                                      }
                                                                                                      else
                                                                                                      {
                                                                                                        *(_DWORD *)(((v2 + 8032) >> 3) + 0x7FFF8000) = 0;
                                                                                                        *(_BYTE *)(((v2 + 1024) >> 3) + 0x7FFF8000) = 1;
                                                                                                        std::allocator<char>::allocator(v2 + 1024);
                                                                                                        std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 8032), &byte_1AC254A0, (const std::allocator<char> *)(v2 + 1024));
                                                                                                        v133 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 8032), &this->feature_tag_group_id) != 0;
                                                                                                        std::string::~string((void *)(v2 + 8032));
                                                                                                        *(_DWORD *)(((v2 + 8032) >> 3) + 0x7FFF8000) = -117901064;
                                                                                                        std::allocator<char>::~allocator(v2 + 1024);
                                                                                                        *(_BYTE *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -8;
                                                                                                        if ( v133 )
                                                                                                        {
                                                                                                          *(_DWORD *)(((v2 + 8096) >> 3) + 0x7FFF8000) = 0;
                                                                                                          if ( *(char *)(((v2 + 8096) >> 3) + 0x7FFF8000) < 0 || *(_BYTE *)(((v2 + 8127) >> 3) + 0x7FFF8000) != 0 && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 8127) >> 3) + 0x7FFF8000) )
                                                                                                            __asan_report_store_n(v2 + 8096, 32LL);
                                                                                                          common::milog::MiLogStream::create((common::milog::MiLogStream *)(v2 + 8096), &common::milog::MiLogDefault::default_log_obj_, 4u, "./src/txt_data_auto/AvatarExcelConfig.gen.cpp", "init", 492);
                                                                                                          v134 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>((common::milog::MiLogStream *const)(v2 + 8096), (const char (*)[16])"[CONFIG_ERROR] ");
                                                                                                          common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v134, (const char (*)[32])byte_1AC254E0);
                                                                                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 8096));
                                                                                                          *(_DWORD *)(((v2 + 8096) >> 3) + 0x7FFF8000) = -117901064;
                                                                                                          v7 = -1;
                                                                                                        }
                                                                                                        else
                                                                                                        {
                                                                                                          *(_DWORD *)(((v2 + 8160) >> 3) + 0x7FFF8000) = 0;
                                                                                                          *(_BYTE *)(((v2 + 1040) >> 3) + 0x7FFF8000) = 1;
                                                                                                          std::allocator<char>::allocator(v2 + 1040);
                                                                                                          std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 8160), &byte_1AC25520, (const std::allocator<char> *)(v2 + 1040));
                                                                                                          v135 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 8160), &this->info_desc) != 0;
                                                                                                          std::string::~string((void *)(v2 + 8160));
                                                                                                          *(_DWORD *)(((v2 + 8160) >> 3) + 0x7FFF8000) = -117901064;
                                                                                                          std::allocator<char>::~allocator(v2 + 1040);
                                                                                                          *(_BYTE *)(((v2 + 1040) >> 3) + 0x7FFF8000) = -8;
                                                                                                          if ( v135 )
                                                                                                          {
                                                                                                            *(_DWORD *)(((v2 + 8224) >> 3) + 0x7FFF8000) = 0;
                                                                                                            if ( *(char *)(((v2 + 8224) >> 3) + 0x7FFF8000) < 0 || *(_BYTE *)(((v2 + 8255) >> 3) + 0x7FFF8000) != 0 && (char)((v2 - 64 + 127) & 7) >= *(_BYTE *)(((v2 + 8255) >> 3) + 0x7FFF8000) )
                                                                                                              __asan_report_store_n(v2 + 8224, 32LL);
                                                                                                            common::milog::MiLogStream::create((common::milog::MiLogStream *)(v2 + 8224), &common::milog::MiLogDefault::default_log_obj_, 4u, "./src/txt_data_auto/AvatarExcelConfig.gen.cpp", "init", 497);
                                                                                                            v136 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>((common::milog::MiLogStream *const)(v2 + 8224), (const char (*)[16])"[CONFIG_ERROR] ");
                                                                                                            common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v136, (const char (*)[42])byte_1AC25560);
                                                                                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 8224));
                                                                                                            *(_DWORD *)(((v2 + 8224) >> 3) + 0x7FFF8000) = -117901064;
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
  }
LABEL_240:
  std::string::~string((void *)(v2 + 1248));
  if ( v143 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8094) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 156) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF80A0) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8428) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862762) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147451040 - (((_DWORD)v4 + 2147451048) & 0xFFFFFFF8) + 912) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF8450) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_8(v2, 8896LL, v143);
  }
  return v7;
};

// Line 505: range 00000000138D31F6-00000000138D3A18
int32_t __cdecl data::AvatarLevelExcelConfig::init(
        data::AvatarLevelExcelConfig *const this,
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
  *(_QWORD *)(v2 + 16) = data::AvatarLevelExcelConfig::init;
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
    &byte_1AC255C0,
    (const std::allocator<char> *)(v2 + 48));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 96), &this->level) != 0;
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
      "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
      "init",
      508);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 160),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v6, (const char (*)[27])byte_1AC25600);
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
      &byte_1AC25640,
      (const std::allocator<char> *)(v2 + 64));
    v8 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 224), &this->exp) != 0;
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
        "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
        "init",
        513);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v9, (const char (*)[48])byte_1AC25680);
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
        &byte_1AC256E0,
        (const std::allocator<char> *)(v2 + 80));
      v10 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
              row,
              (const std::string *)(v2 + 352),
              &this->small_talent_point) != 0;
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
          "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
          "init",
          518);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 416),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v11, (const char (*)[39])byte_1AC25720);
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

// Line 526: range 00000000138D3A1A-00000000138D5AC4
int32_t __cdecl data::AvatarPromoteExcelConfig::init(
        data::AvatarPromoteExcelConfig *const this,
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
  unsigned int *p_id; // r15
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  bool v19; // r15
  unsigned int *p_count; // r15
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  bool v24; // r15
  common::milog::MiLogStream *v25; // rax
  bool v26; // r15
  data::FightPropType *p_prop_type; // r15
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  bool v31; // r15
  float *p_value; // r15
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  bool v36; // r15
  common::milog::MiLogStream *v37; // rax
  int32_t v38; // ebx
  uint32_t array_count; // [rsp+14h] [rbp-87Ch]
  uint32_t array_counta; // [rsp+14h] [rbp-87Ch]
  uint32_t i; // [rsp+18h] [rbp-878h]
  uint32_t i_0; // [rsp+1Ch] [rbp-874h]
  char v44[2160]; // [rsp+20h] [rbp-870h] BYREF

  v2 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(2112LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "39 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unkno"
                        "wn> 208 1 9 <unknown> 224 1 9 <unknown> 240 1 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> "
                        "384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 7"
                        "04 32 9 <unknown> 768 32 9 <unknown> 832 32 9 <unknown> 896 32 9 <unknown> 960 32 9 <unknown> 10"
                        "24 32 9 <unknown> 1088 32 9 <unknown> 1152 32 9 <unknown> 1216 32 9 <unknown> 1280 32 9 <unknown"
                        "> 1344 32 9 <unknown> 1408 32 9 <unknown> 1472 32 9 <unknown> 1536 32 9 <unknown> 1600 32 9 <unk"
                        "nown> 1664 32 9 <unknown> 1728 32 9 <unknown> 1792 256 12 col_name:527";
  *(_QWORD *)(v2 + 16) = data::AvatarPromoteExcelConfig::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
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
  v4[536862775] = -218959118;
  v4[536862784] = -202116109;
  v4[536862785] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 256),
    &byte_1AC252C0,
    (const std::allocator<char> *)(v2 + 32));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
         row,
         (const std::string *)(v2 + 256),
         &this->avatar_promote_id) != 0;
  std::string::~string((void *)(v2 + 256));
  *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
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
      "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
      "init",
      531);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 320),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v6, (const char (*)[35])byte_1AC25300);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
    v7 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 384),
      &byte_1AC25A80,
      (const std::allocator<char> *)(v2 + 48));
    v8 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
           row,
           (const std::string *)(v2 + 384),
           &this->promote_level) != 0;
    std::string::~string((void *)(v2 + 384));
    *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
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
        4u,
        "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
        "init",
        536);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 448),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v9, (const char (*)[33])byte_1AC25AC0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
      v7 = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 512),
        &byte_1AC25B20,
        (const std::allocator<char> *)(v2 + 64));
      v10 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 512), &this->promote_audio) != 0;
      std::string::~string((void *)(v2 + 512));
      *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( v10 )
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
          "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
          "init",
          541);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 576),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v11, (const char (*)[33])byte_1AC25B60);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
        v7 = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 640),
          &byte_1AC25BC0,
          (const std::allocator<char> *)(v2 + 80));
        v12 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                row,
                (const std::string *)(v2 + 640),
                &this->scoin_cost) != 0;
        std::string::~string((void *)(v2 + 640));
        *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( v12 )
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
            "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
            "init",
            546);
          v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 704),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v13, (const char (*)[33])byte_1AC25C00);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
          v7 = -1;
        }
        else
        {
          std::vector<data::IdCountConfig>::resize(&this->cost_items, 5uLL);
          array_count = 0;
          for ( i = 0; i <= 4; ++i )
          {
            snprintf((char *)(v2 + 1792), 0x100uLL, asc_1AC25C60, i + 1);
            *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 96);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 768),
              (const char *)(v2 + 1792),
              (const std::allocator<char> *)(v2 + 96));
            v14 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 768));
            std::string::~string((void *)(v2 + 768));
            *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 96);
            *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
            if ( !v14 )
            {
              p_id = &std::vector<data::IdCountConfig>::operator[](&this->cost_items, i)->id;
              *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 112);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 832),
                (const char *)(v2 + 1792),
                (const std::allocator<char> *)(v2 + 112));
              LOBYTE(p_id) = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                               row,
                               (const std::string *)(v2 + 832),
                               p_id) != 0;
              std::string::~string((void *)(v2 + 832));
              *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 112);
              *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
              if ( (_BYTE)p_id )
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
                  "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
                  "init",
                  558);
                v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 896),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v17 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                        v16,
                        (const char (*)[14])byte_1ABFD420);
                v18 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                        v17,
                        (const char (*)[256])(v2 + 1792));
                common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v18, (const char (*)[7])byte_1ABFD460);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 896));
                v7 = -1;
                goto LABEL_57;
              }
              snprintf((char *)(v2 + 1792), 0x100uLL, asc_1AC25CA0, i + 1);
              *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 128);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 960),
                (const char *)(v2 + 1792),
                (const std::allocator<char> *)(v2 + 128));
              v19 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 960));
              std::string::~string((void *)(v2 + 960));
              *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 128);
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
              if ( !v19 )
              {
                p_count = &std::vector<data::IdCountConfig>::operator[](&this->cost_items, i)->count;
                *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 144);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1024),
                  (const char *)(v2 + 1792),
                  (const std::allocator<char> *)(v2 + 144));
                LOBYTE(p_count) = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                    row,
                                    (const std::string *)(v2 + 1024),
                                    p_count) != 0;
                std::string::~string((void *)(v2 + 1024));
                *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 144);
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
                if ( (_BYTE)p_count )
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
                    "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
                    "init",
                    566);
                  v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 1088),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v22 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                          v21,
                          (const char (*)[14])byte_1ABFD420);
                  v23 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                          v22,
                          (const char (*)[256])(v2 + 1792));
                  common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v23, (const char (*)[7])byte_1ABFD460);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1088));
                  v7 = -1;
                  goto LABEL_57;
                }
                array_count = i + 1;
              }
            }
          }
          std::vector<data::IdCountConfig>::resize(&this->cost_items, array_count);
          *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 160);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1152),
            &byte_1AC25CE0,
            (const std::allocator<char> *)(v2 + 160));
          v24 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                  row,
                  (const std::string *)(v2 + 1152),
                  &this->unlock_max_level) != 0;
          std::string::~string((void *)(v2 + 1152));
          *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 160);
          *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
          if ( v24 )
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
              "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
              "init",
              575);
            v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 1216),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v25, (const char (*)[39])byte_1AC25D20);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1216));
            v7 = -1;
          }
          else
          {
            std::vector<data::PropValConfig>::resize(&this->add_props, 5uLL);
            array_counta = 0;
            for ( i_0 = 0; i_0 <= 4; ++i_0 )
            {
              snprintf((char *)(v2 + 1792), 0x100uLL, asc_1AC25D80, i_0 + 1);
              *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 176);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1280),
                (const char *)(v2 + 1792),
                (const std::allocator<char> *)(v2 + 176));
              v26 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 1280));
              std::string::~string((void *)(v2 + 1280));
              *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 176);
              *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
              if ( !v26 )
              {
                p_prop_type = &std::vector<data::PropValConfig>::operator[](&this->add_props, i_0)->prop_type;
                *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 192);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1344),
                  (const char *)(v2 + 1792),
                  (const std::allocator<char> *)(v2 + 192));
                LOBYTE(p_prop_type) = common::tools::TxtFile::Row::assignToEnum<data::FightPropType>(
                                        row,
                                        (const std::string *)(v2 + 1344),
                                        p_prop_type) != 0;
                std::string::~string((void *)(v2 + 1344));
                *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 192);
                *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                if ( (_BYTE)p_prop_type )
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
                    "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
                    "init",
                    587);
                  v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 1408),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v29 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                          v28,
                          (const char (*)[14])byte_1ABFD420);
                  v30 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                          v29,
                          (const char (*)[256])(v2 + 1792));
                  common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v30, (const char (*)[7])byte_1ABFD460);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1408));
                  v7 = -1;
                  goto LABEL_57;
                }
                snprintf((char *)(v2 + 1792), 0x100uLL, asc_1AC25DC0, i_0 + 1);
                *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 208);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1472),
                  (const char *)(v2 + 1792),
                  (const std::allocator<char> *)(v2 + 208));
                v31 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 1472));
                std::string::~string((void *)(v2 + 1472));
                *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 208);
                *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                if ( !v31 )
                {
                  p_value = &std::vector<data::PropValConfig>::operator[](&this->add_props, i_0)->value;
                  *(_DWORD *)(((v2 + 1536) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 224);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1536),
                    (const char *)(v2 + 1792),
                    (const std::allocator<char> *)(v2 + 224));
                  LOBYTE(p_value) = common::tools::TxtFile::Row::assignToNum<float>(
                                      row,
                                      (const std::string *)(v2 + 1536),
                                      p_value) != 0;
                  std::string::~string((void *)(v2 + 1536));
                  *(_DWORD *)(((v2 + 1536) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 224);
                  *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                  if ( (_BYTE)p_value )
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
                      "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
                      "init",
                      595);
                    v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 1600),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v34 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                            v33,
                            (const char (*)[14])byte_1ABFD420);
                    v35 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                            v34,
                            (const char (*)[256])(v2 + 1792));
                    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v35, (const char (*)[7])byte_1ABFD460);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1600));
                    v7 = -1;
                    goto LABEL_57;
                  }
                  array_counta = i_0 + 1;
                }
              }
            }
            std::vector<data::PropValConfig>::resize(&this->add_props, array_counta);
            *(_DWORD *)(((v2 + 1664) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 240);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1664),
              &byte_1AC25E00,
              (const std::allocator<char> *)(v2 + 240));
            v36 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                    row,
                    (const std::string *)(v2 + 1664),
                    &this->required_player_level) != 0;
            std::string::~string((void *)(v2 + 1664));
            *(_DWORD *)(((v2 + 1664) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 240);
            *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
            if ( v36 )
            {
              *(_DWORD *)(((v2 + 1728) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 1728) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 1759) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 1759) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 1728, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 1728),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
                "init",
                604);
              v37 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1728),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v37, (const char (*)[39])byte_1AC25E40);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1728));
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
LABEL_57:
  v38 = v7;
  if ( v44 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8034) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8054) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF805C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8064) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF806C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8074) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF807C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8084) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF808C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8094) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF809C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80A4) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80AC) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80B4) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80BC) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80C4) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80CC) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80D4) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80DC) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8100) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 2112LL, v44);
  }
  return v38;
};

// Line 612: range 00000000138D5AC6-00000000138D604E
int32_t __cdecl data::AvatarFettersLevelExcelConfig::init(
        data::AvatarFettersLevelExcelConfig *const this,
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
  *(_QWORD *)(v2 + 16) = data::AvatarFettersLevelExcelConfig::init;
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
    &byte_1AC25EA0,
    (const std::allocator<char> *)(v2 + 32));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 64), &this->fetter_level) != 0;
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
      "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
      "init",
      615);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v6, (const char (*)[33])byte_1AC25EE0);
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
      &byte_1AC25640,
      (const std::allocator<char> *)(v2 + 48));
    v8 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 192), &this->need_exp) != 0;
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
        "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
        "init",
        620);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 256),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v9, (const char (*)[48])byte_1AC25680);
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

// Line 628: range 00000000138D6050-00000000138D65D8
int32_t __cdecl data::AvatarHeroEntityExcelConfig::init(
        data::AvatarHeroEntityExcelConfig *const this,
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
  *(_QWORD *)(v2 + 16) = data::AvatarHeroEntityExcelConfig::init;
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
    "AvatarID",
    (const std::allocator<char> *)(v2 + 32));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 64), &this->avatar_id) != 0;
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
      "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
      "init",
      631);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v6, (const char (*)[29])byte_1AC25F80);
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
      aPrefab_1,
      (const std::allocator<char> *)(v2 + 48));
    v8 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 192), &this->prefab_path) != 0;
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
        "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
        "init",
        636);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 256),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v9, (const char (*)[33])byte_1AC237E0);
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

// Line 645: range 00000000138D65DA-00000000138D7603
int32_t __cdecl data::AvatarExcelConfigMgrBase::loadAvatarExcelConfig(
        data::AvatarExcelConfigMgrBase *const this,
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
  data::AvatarExcelConfig *v23; // rax
  unsigned int *v24; // rcx
  data::AvatarExcelConfig *v25; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarExcelConfig>,false,false>,bool> v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  int v29; // edx
  char *i; // r14
  std::string *__for_begin; // [rsp+28h] [rbp-88D8h]
  const common::tools::TxtFile::Row *row_ptr; // [rsp+48h] [rbp-88B8h]
  char v35[34992]; // [rsp+50h] [rbp-88B0h] BYREF

  v3 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_10(34944LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 5 r:660 64 4 9 <unknown> 80 32 9 paths:646 144 32 9 <unknown> 208 32 9 "
                        "<unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 376 24"
                        " debug_message_stream:671 976 704 8 data:663 1808 32880 12 txt_file:654";
  *(_QWORD *)(v3 + 16) = data::AvatarExcelConfigMgrBase::loadAvatarExcelConfig;
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
  v5[536862748] = -218959360;
  v5[536862749] = -218959118;
  v5[536862750] = 62194;
  v5[536862772] = -219021312;
  v5[536862773] = -218959118;
  v5[536862774] = -218959118;
  v5[536862775] = -218959118;
  v5[536862776] = 62194;
  v5[536863804] = -202116109;
  v5[536863805] = -202116109;
  v5[536863806] = -202116109;
  v5[536863807] = -202116109;
  v5[536863808] = -202116109;
  v5[536863809] = -202116109;
  v5[536863810] = -202116109;
  v5[536863811] = -202116109;
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 80),
    "/txt/AvatarData.txt",
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
    __asan_unpoison_stack_memory(v3 + 1808, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v3 + 1808));
    v7 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v3 + 1808), v7) )
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
        "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
        "loadAvatarExcelConfig",
        657);
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
        v12 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v3 + 1808));
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
        if ( v12 <= *(_DWORD *)(v3 + 48) )
          break;
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v3 + 1808), *(_DWORD *)(v3 + 48));
        __asan_unpoison_stack_memory(v3 + 976, 704LL);
        data::AvatarExcelConfig::AvatarExcelConfig((data::AvatarExcelConfig *const)(v3 + 976));
        if ( row_ptr )
        {
          if ( data::AvatarExcelConfig::init((data::AvatarExcelConfig *const)(v3 + 976), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 528, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 528);
            v15 = std::operator<<<std::char_traits<char>>(v3 + 528, &unk_1ABFF160);
            if ( *(_BYTE *)(((v3 + 984) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 984) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 984);
            std::ostream::operator<<(v15, *(unsigned int *)(v3 + 984));
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
              "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
              "loadAvatarExcelConfig",
              673);
            v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 336),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v17 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v16, (const char (*)[2])"<");
            v18 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, __for_begin);
            v19 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v18,
                    (const char (*)[11])byte_1ABFF1E0);
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 48);
            v20 = (unsigned int)(*(_DWORD *)(v3 + 48) + 1);
            if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v3 + 64, v20);
            *(_DWORD *)(v3 + 64) = v20;
            v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v19,
                    (const unsigned int *)(v3 + 64));
            v22 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v21,
                    (const char (*)[13])byte_1ABFF220);
            *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 400) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 81) & 7) >= *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 400, 32LL);
            }
            std::ostringstream::str(v3 + 400, v3 + 528);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, (const std::string *)(v3 + 400));
            std::string::~string((void *)(v3 + 400));
            *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
            *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            std::ostringstream::~ostringstream(v3 + 528);
            __asan_poison_stack_memory(v3 + 528, 376LL);
            v14 = 0;
          }
          else
          {
            v23 = std::move<data::AvatarExcelConfig &>((data::AvatarExcelConfig *)(v3 + 976));
            v26 = std::unordered_map<unsigned int,data::AvatarExcelConfig>::emplace<unsigned int &,data::AvatarExcelConfig>(
                    &this->avatar_excel_config_map,
                    (unsigned int *)(v3 + 984),
                    v23,
                    v24,
                    v25);
            if ( !v26.second )
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
                "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
                "loadAvatarExcelConfig",
                678);
              v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 464),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v28 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v27, (const char (*)[9])byte_1ABFF260);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v28,
                (const unsigned int *)(v3 + 984));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 464));
              *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
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
            "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
            "loadAvatarExcelConfig",
            666);
          v13 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 272),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
          *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v14 = 0;
        }
        data::AvatarExcelConfig::~AvatarExcelConfig((data::AvatarExcelConfig *const)(v3 + 976));
        __asan_poison_stack_memory(v3 + 976, 704LL);
        if ( v14 != 1 )
        {
          v29 = 0;
          goto LABEL_45;
        }
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
      }
      v29 = 1;
LABEL_45:
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      v10 = v29 == 1;
    }
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v3 + 1808));
    __asan_poison_stack_memory(v3 + 1808, 32880LL);
    if ( !v10 )
      goto LABEL_49;
  }
  v2 = 0;
LABEL_49:
  for ( i = (char *)(v3 + 112); i != (char *)(v3 + 80); std::string::~string(i) )
    i -= 32;
  if ( v35 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF9108) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 4368) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_10(v3, 34944LL, v35);
  }
  return v2;
};

// Line 687: range 00000000138D7604-00000000138D86FC
int32_t __cdecl data::AvatarExcelConfigMgrBase::loadAvatarLevelExcelConfig(
        data::AvatarExcelConfigMgrBase *const this,
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
  data::AvatarLevelExcelConfig *v27; // rax
  unsigned int *v28; // rcx
  data::AvatarLevelExcelConfig *v29; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarLevelExcelConfig>,false,false>,bool> v30; // rax
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
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 5 r:702 64 4 9 <unknown> 80 24 8 data:705 144 32 9 paths:688 208 32 9 <"
                        "unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 32 9 <u"
                        "nknown> 592 376 24 debug_message_stream:713 1040 32880 12 txt_file:696";
  *(_QWORD *)(v3 + 16) = data::AvatarExcelConfigMgrBase::loadAvatarLevelExcelConfig;
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
    "/txt/AvatarLevelData.txt",
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
        "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
        "loadAvatarLevelExcelConfig",
        699);
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
        v15 = &`vtable for'data::AvatarLevelExcelConfig + 2;
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
          if ( data::AvatarLevelExcelConfig::init((data::AvatarLevelExcelConfig *const)(v3 + 80), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 592, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 592);
            v19 = std::operator<<<std::char_traits<char>>(v3 + 592, &unk_1AC26440);
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
              "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
              "loadAvatarLevelExcelConfig",
              715);
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
            v27 = std::move<data::AvatarLevelExcelConfig &>((data::AvatarLevelExcelConfig *)(v3 + 80));
            v30 = std::unordered_map<unsigned int,data::AvatarLevelExcelConfig>::emplace<unsigned int &,data::AvatarLevelExcelConfig>(
                    &this->avatar_level_excel_config_map,
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
                "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
                "loadAvatarLevelExcelConfig",
                720);
              v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 528),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v32 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v31,
                      (const char (*)[12])byte_1AC26480);
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
            "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
            "loadAvatarLevelExcelConfig",
            708);
          v17 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 336),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
          *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v18 = 0;
        }
        data::AvatarLevelExcelConfig::~AvatarLevelExcelConfig((data::AvatarLevelExcelConfig *const)(v3 + 80));
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

// Line 729: range 00000000138D86FE-00000000138D9B0D
int32_t __cdecl data::AvatarExcelConfigMgrBase::loadAvatarPromoteExcelConfig(
        data::AvatarExcelConfigMgrBase *const this,
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
  unsigned __int64 v16; // rax
  std::tuple_element<1,const std::pair<const std::string,short unsigned int> >::type *v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rdx
  std::map<long unsigned int,std::string>::mapped_type *v20; // rdx
  std::vector<std::string>::size_type v21; // rdx
  const char *v22; // rax
  __int64 v23; // r14
  std::map<long unsigned int,std::string>::mapped_type *v24; // rax
  __int64 v25; // rax
  __int64 v26; // r14
  const std::vector<std::string> *p_data_vec; // rax
  std::vector<std::string>::const_reference v28; // rax
  unsigned __int64 v29; // rax
  const char *v30; // rax
  __int64 v31; // r14
  std::vector<std::string>::const_reference v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rdx
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rcx
  __int64 v37; // rsi
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // r14
  data::AvatarPromoteExcelConfig *v40; // rax
  data::AvatarPromoteExcelConfig *v41; // rdx
  unsigned __int64 v42; // rax
  int v43; // edx
  char *j; // r14
  std::string *__for_begin; // [rsp+20h] [rbp-8700h]
  size_t i; // [rsp+28h] [rbp-86F8h]
  const common::tools::TxtFile::Row *row_ptr; // [rsp+48h] [rbp-86D8h]
  std::map<std::string,short unsigned int> *__for_range_0; // [rsp+50h] [rbp-86D0h]
  std::_Rb_tree_iterator<std::pair<const std::string,short unsigned int> >::reference v51; // [rsp+58h] [rbp-86C8h]
  std::tuple_element<0,std::pair<const std::string,short unsigned int> >::type *col_name; // [rsp+60h] [rbp-86C0h]
  std::tuple_element<1,const std::pair<const std::string,short unsigned int> >::type *col_id; // [rsp+68h] [rbp-86B8h]
  char v54[34480]; // [rsp+70h] [rbp-86B0h] BYREF

  v3 = (unsigned __int64)v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_10(34432LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "17 48 1 9 <unknown> 64 4 5 r:744 80 4 9 <unknown> 96 8 15 __for_begin:759 128 8 13 __for_end:759"
                        " 160 8 9 <unknown> 192 8 5 i:763 224 32 9 paths:730 288 32 9 <unknown> 352 32 9 <unknown> 416 32"
                        " 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 48 19 col_id_name_map:758 688 120 8 data:"
                        "747 848 376 24 debug_message_stream:755 1296 32880 12 txt_file:738";
  *(_QWORD *)(v3 + 16) = data::AvatarExcelConfigMgrBase::loadAvatarPromoteExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862740] = -219021312;
  v5[536862741] = 62194;
  v5[536862745] = -218959360;
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
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 224),
    "/txt/AvatarPromoteData.txt",
    (const std::allocator<char> *)(v3 + 48));
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  for ( __for_begin = (std::string *)(v3 + 224); __for_begin != (std::string *)(v3 + 256); ++__for_begin )
  {
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    p_real_data_base_dir = &config->real_data_base_dir;
    if ( *(char *)(((v3 + 288) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) )
    {
      p_real_data_base_dir = (std::string *)32;
      __asan_report_store_n(v3 + 288, 32LL);
    }
    std::operator+<char>((std::string *)(v3 + 288), p_real_data_base_dir, __for_begin);
    std::string::operator=(__for_begin, v3 + 288);
    std::string::~string((void *)(v3 + 288));
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
    __asan_unpoison_stack_memory(v3 + 1296, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v3 + 1296));
    v7 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v3 + 1296), v7) )
    {
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
        "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
        "loadAvatarPromoteExcelConfig",
        741);
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v3 + 352),
             (const char (*)[8])byte_1ABFF0A0);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1ABFF0E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
      *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
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
        v12 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v3 + 1296));
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 64);
        if ( v12 <= *(_DWORD *)(v3 + 64) )
          break;
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v3 + 1296), *(_DWORD *)(v3 + 64));
        v13 = ((v3 + 688) >> 3) + 2147450880;
        *(_DWORD *)v13 = 0;
        *(_DWORD *)(v13 + 4) = 0;
        *(_DWORD *)(v13 + 8) = 0;
        *(_WORD *)(v13 + 12) = 0;
        *(_BYTE *)(v13 + 14) = 0;
        data::AvatarPromoteExcelConfig::AvatarPromoteExcelConfig((data::AvatarPromoteExcelConfig *const)(v3 + 688));
        if ( row_ptr )
        {
          if ( data::AvatarPromoteExcelConfig::init((data::AvatarPromoteExcelConfig *const)(v3 + 688), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 848, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 848);
            if ( *(_BYTE *)(((unsigned __int64)&row_ptr->col_name_map_ptr >> 3) + 0x7FFF8000) )
              __asan_report_load8(&row_ptr->col_name_map_ptr);
            if ( row_ptr->col_name_map_ptr )
            {
              v16 = ((v3 + 608) >> 3) + 2147450880;
              *(_DWORD *)v16 = 0;
              *(_WORD *)(v16 + 4) = 0;
              std::map<unsigned long,std::string>::map((std::map<long unsigned int,std::string> *const)(v3 + 608));
              if ( *(_BYTE *)(((unsigned __int64)&row_ptr->col_name_map_ptr >> 3) + 0x7FFF8000) )
                __asan_report_load8(&row_ptr->col_name_map_ptr);
              __for_range_0 = row_ptr->col_name_map_ptr;
              *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v3 + 96, 376LL);
              *(std::map<std::string,short unsigned int>::iterator *)(v3 + 96) = std::map<std::string,unsigned short>::begin(__for_range_0);
              *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v3 + 128, 376LL);
              *(std::map<std::string,short unsigned int>::iterator *)(v3 + 128) = std::map<std::string,unsigned short>::end(__for_range_0);
              while ( std::operator!=(
                        (const std::_Rb_tree_iterator<std::pair<const std::string,short unsigned int> >::_Self *)(v3 + 96),
                        (const std::_Rb_tree_iterator<std::pair<const std::string,short unsigned int> >::_Self *)(v3 + 128)) )
              {
                v51 = std::_Rb_tree_iterator<std::pair<std::string const,unsigned short>>::operator*((const std::_Rb_tree_iterator<std::pair<const std::string,short unsigned int> > *const)(v3 + 96));
                col_name = std::get<0ul,std::string const,unsigned short>(v51);
                v17 = (std::tuple_element<1,const std::pair<const std::string,short unsigned int> >::type *)std::get<1ul,std::string const,unsigned short>(v51);
                col_id = v17;
                *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
                v18 = ((unsigned __int8)v17 & 7u) + 1;
                if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v17 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load2(v17);
                }
                v19 = *col_id;
                if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
                  __asan_report_store8(v3 + 160, v18);
                *(_QWORD *)(v3 + 160) = v19;
                v20 = std::map<unsigned long,std::string>::operator[](
                        (std::map<long unsigned int,std::string> *const)(v3 + 608),
                        (std::map<long unsigned int,std::string>::key_type *)(v3 + 160));
                std::string::operator=(v20, col_name);
                *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
                std::_Rb_tree_iterator<std::pair<std::string const,unsigned short>>::operator++((std::_Rb_tree_iterator<std::pair<const std::string,short unsigned int> > *const)(v3 + 96));
              }
              *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v3 + 192, v3 + 128);
              for ( *(_QWORD *)(v3 + 192) = 0LL; ; ++*(_QWORD *)(v3 + 192) )
              {
                v21 = std::vector<std::string>::size(&row_ptr->data_vec);
                if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v3 + 192);
                if ( v21 <= *(_QWORD *)(v3 + 192) )
                  break;
                if ( *(_QWORD *)(v3 + 192) )
                  v22 = " ";
                else
                  v22 = byte_1ABBC960;
                v23 = std::operator<<<std::char_traits<char>>(v3 + 848, v22);
                v24 = std::map<unsigned long,std::string>::operator[](
                        (std::map<long unsigned int,std::string> *const)(v3 + 608),
                        (const std::map<long unsigned int,std::string>::key_type *)(v3 + 192));
                v25 = std::operator<<<char>(v23, v24);
                v26 = std::operator<<<std::char_traits<char>>(v25, &off_1AC08640);
                p_data_vec = &row_ptr->data_vec;
                if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v3 + 192);
                v28 = std::vector<std::string>::operator[](p_data_vec, *(_QWORD *)(v3 + 192));
                std::operator<<<char>(v26, v28);
                if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v3 + 192);
              }
              *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
              std::map<unsigned long,std::string>::~map((std::map<long unsigned int,std::string> *const)(v3 + 608));
              v29 = ((v3 + 608) >> 3) + 2147450880;
              *(_DWORD *)v29 = -117901064;
              *(_WORD *)(v29 + 4) = -1800;
            }
            else
            {
              for ( i = 0LL; i < std::vector<std::string>::size(&row_ptr->data_vec); ++i )
              {
                if ( i )
                  v30 = (const char *)&unk_1AC08680;
                else
                  v30 = byte_1ABBC960;
                v31 = std::operator<<<std::char_traits<char>>(v3 + 848, v30);
                v32 = std::vector<std::string>::operator[](&row_ptr->data_vec, i);
                std::operator<<<char>(v31, v32);
              }
            }
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
              "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
              "loadAvatarPromoteExcelConfig",
              775);
            v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 480),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v34 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v33, (const char (*)[2])"<");
            v35 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v34, __for_begin);
            v36 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v35,
                    (const char (*)[11])byte_1ABFF1E0);
            *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 64);
            v37 = (unsigned int)(*(_DWORD *)(v3 + 64) + 1);
            if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v3 + 80, v37);
            *(_DWORD *)(v3 + 80) = v37;
            v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v36,
                    (const unsigned int *)(v3 + 80));
            v39 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v38,
                    (const char (*)[13])byte_1ABFF220);
            *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 544) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 544, 32LL);
            }
            std::ostringstream::str(v3 + 544, v3 + 848);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v39, (const std::string *)(v3 + 544));
            std::string::~string((void *)(v3 + 544));
            *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
            *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            std::ostringstream::~ostringstream(v3 + 848);
            __asan_poison_stack_memory(v3 + 848, 376LL);
            v15 = 0;
          }
          else
          {
            v40 = std::move<data::AvatarPromoteExcelConfig &>((data::AvatarPromoteExcelConfig *)(v3 + 688));
            std::vector<data::AvatarPromoteExcelConfig>::emplace_back<data::AvatarPromoteExcelConfig>(
              &this->avatar_promote_excel_config_vec,
              v40,
              v41);
            v15 = 1;
          }
        }
        else
        {
          *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 416, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 416),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
            "loadAvatarPromoteExcelConfig",
            750);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 416),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
          *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::AvatarPromoteExcelConfig::~AvatarPromoteExcelConfig((data::AvatarPromoteExcelConfig *const)(v3 + 688));
        v42 = ((v3 + 688) >> 3) + 2147450880;
        *(_DWORD *)v42 = -117901064;
        *(_DWORD *)(v42 + 4) = -117901064;
        *(_DWORD *)(v42 + 8) = -117901064;
        *(_WORD *)(v42 + 12) = -1800;
        *(_BYTE *)(v42 + 14) = -8;
        if ( v15 != 1 )
        {
          v43 = 0;
          goto LABEL_76;
        }
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 64);
      }
      v43 = 1;
LABEL_76:
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      v10 = v43 == 1;
    }
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v3 + 1296));
    __asan_poison_stack_memory(v3 + 1296, 32880LL);
    if ( !v10 )
      goto LABEL_80;
  }
  v2 = 0;
LABEL_80:
  for ( j = (char *)(v3 + 256); j != (char *)(v3 + 224); std::string::~string(j) )
    j -= 32;
  if ( v54 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF90C8) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862730) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450912 - (((_DWORD)v5 + 2147450920) & 0xFFFFFFF8) + 4272) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_10(v3, 34432LL, v54);
  }
  return v2;
};

// Line 785: range 00000000138D9B0E-00000000138DAF73
int32_t __cdecl data::AvatarExcelConfigMgrBase::loadAvatarFettersLevelExcelConfig(
        data::AvatarExcelConfigMgrBase *const this,
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
  unsigned __int64 v17; // rax
  std::tuple_element<1,const std::pair<const std::string,short unsigned int> >::type *v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rdx
  std::map<long unsigned int,std::string>::mapped_type *v21; // rdx
  std::vector<std::string>::size_type v22; // rdx
  const char *v23; // rax
  __int64 v24; // r14
  std::map<long unsigned int,std::string>::mapped_type *v25; // rax
  __int64 v26; // rax
  __int64 v27; // r14
  const std::vector<std::string> *p_data_vec; // rax
  std::vector<std::string>::const_reference v29; // rax
  unsigned __int64 v30; // rax
  const char *v31; // rax
  __int64 v32; // r14
  std::vector<std::string>::const_reference v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rdx
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rcx
  __int64 v38; // rsi
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // r14
  data::AvatarFettersLevelExcelConfig *v41; // rax
  data::AvatarFettersLevelExcelConfig *v42; // rdx
  int v43; // edx
  char *j; // r14
  std::string *__for_begin; // [rsp+20h] [rbp-8680h]
  size_t i; // [rsp+28h] [rbp-8678h]
  const common::tools::TxtFile::Row *row_ptr; // [rsp+48h] [rbp-8658h]
  std::map<std::string,short unsigned int> *__for_range_0; // [rsp+50h] [rbp-8650h]
  std::_Rb_tree_iterator<std::pair<const std::string,short unsigned int> >::reference v51; // [rsp+58h] [rbp-8648h]
  std::tuple_element<0,std::pair<const std::string,short unsigned int> >::type *col_name; // [rsp+60h] [rbp-8640h]
  std::tuple_element<1,const std::pair<const std::string,short unsigned int> >::type *col_id; // [rsp+68h] [rbp-8638h]
  char v54[34352]; // [rsp+70h] [rbp-8630h] BYREF

  v3 = (unsigned __int64)v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_10(34304LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "17 48 1 9 <unknown> 64 4 5 r:800 80 4 9 <unknown> 96 8 15 __for_begin:815 128 8 13 __for_end:815"
                        " 160 8 9 <unknown> 192 8 5 i:819 224 16 8 data:803 256 32 9 paths:786 320 32 9 <unknown> 384 32 "
                        "9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 48 19 col_id_name_map:8"
                        "14 720 376 24 debug_message_stream:811 1168 32880 12 txt_file:794";
  *(_QWORD *)(v3 + 16) = data::AvatarExcelConfigMgrBase::loadAvatarFettersLevelExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -219021312;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -218959118;
  v5[536862739] = -218959118;
  v5[536862741] = -219021312;
  v5[536862742] = 62194;
  v5[536862754] = -218959360;
  v5[536862755] = -218959118;
  v5[536862756] = 62194;
  v5[536863784] = -202116109;
  v5[536863785] = -202116109;
  v5[536863786] = -202116109;
  v5[536863787] = -202116109;
  v5[536863788] = -202116109;
  v5[536863789] = -202116109;
  v5[536863790] = -202116109;
  v5[536863791] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 256),
    "/txt/AvatarFettersLevelData.txt",
    (const std::allocator<char> *)(v3 + 48));
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  for ( __for_begin = (std::string *)(v3 + 256); __for_begin != (std::string *)(v3 + 288); ++__for_begin )
  {
    *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
    p_real_data_base_dir = &config->real_data_base_dir;
    if ( *(char *)(((v3 + 320) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) )
    {
      p_real_data_base_dir = (std::string *)32;
      __asan_report_store_n(v3 + 320, 32LL);
    }
    std::operator+<char>((std::string *)(v3 + 320), p_real_data_base_dir, __for_begin);
    std::string::operator=(__for_begin, v3 + 320);
    std::string::~string((void *)(v3 + 320));
    *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
    __asan_unpoison_stack_memory(v3 + 1168, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v3 + 1168));
    v7 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v3 + 1168), v7) )
    {
      *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 384) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 415) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 415) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 384, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 384),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
        "loadAvatarFettersLevelExcelConfig",
        797);
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v3 + 384),
             (const char (*)[8])byte_1ABFF0A0);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1ABFF0E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
      *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
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
        v12 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v3 + 1168));
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 64);
        if ( v12 <= *(_DWORD *)(v3 + 64) )
          break;
        v13 = *(unsigned int *)(v3 + 64);
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v3 + 1168), v13);
        *(_WORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
        v14 = &`vtable for'data::AvatarFettersLevelExcelConfig + 2;
        if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 224, v13);
        *(_QWORD *)(v3 + 224) = v14;
        if ( *(_BYTE *)(((v3 + 232) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 232) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 232, v13);
        *(_DWORD *)(v3 + 232) = 0;
        if ( *(_BYTE *)(((v3 + 236) >> 3) + 0x7FFF8000) != 0
          && (char)(((v3 - 32 + 12) & 7) + 3) >= *(_BYTE *)(((v3 + 236) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v3 + 236, (((_BYTE)v3 - 32 + 12) & 7u) + 3);
        }
        *(_DWORD *)(v3 + 236) = 0;
        if ( row_ptr )
        {
          if ( data::AvatarFettersLevelExcelConfig::init(
                 (data::AvatarFettersLevelExcelConfig *const)(v3 + 224),
                 row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 720, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 720);
            if ( *(_BYTE *)(((unsigned __int64)&row_ptr->col_name_map_ptr >> 3) + 0x7FFF8000) )
              __asan_report_load8(&row_ptr->col_name_map_ptr);
            if ( row_ptr->col_name_map_ptr )
            {
              v17 = ((v3 + 640) >> 3) + 2147450880;
              *(_DWORD *)v17 = 0;
              *(_WORD *)(v17 + 4) = 0;
              std::map<unsigned long,std::string>::map((std::map<long unsigned int,std::string> *const)(v3 + 640));
              if ( *(_BYTE *)(((unsigned __int64)&row_ptr->col_name_map_ptr >> 3) + 0x7FFF8000) )
                __asan_report_load8(&row_ptr->col_name_map_ptr);
              __for_range_0 = row_ptr->col_name_map_ptr;
              *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v3 + 96, 376LL);
              *(std::map<std::string,short unsigned int>::iterator *)(v3 + 96) = std::map<std::string,unsigned short>::begin(__for_range_0);
              *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v3 + 128, 376LL);
              *(std::map<std::string,short unsigned int>::iterator *)(v3 + 128) = std::map<std::string,unsigned short>::end(__for_range_0);
              while ( std::operator!=(
                        (const std::_Rb_tree_iterator<std::pair<const std::string,short unsigned int> >::_Self *)(v3 + 96),
                        (const std::_Rb_tree_iterator<std::pair<const std::string,short unsigned int> >::_Self *)(v3 + 128)) )
              {
                v51 = std::_Rb_tree_iterator<std::pair<std::string const,unsigned short>>::operator*((const std::_Rb_tree_iterator<std::pair<const std::string,short unsigned int> > *const)(v3 + 96));
                col_name = std::get<0ul,std::string const,unsigned short>(v51);
                v18 = (std::tuple_element<1,const std::pair<const std::string,short unsigned int> >::type *)std::get<1ul,std::string const,unsigned short>(v51);
                col_id = v18;
                *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
                v19 = ((unsigned __int8)v18 & 7u) + 1;
                if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v18 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load2(v18);
                }
                v20 = *col_id;
                if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
                  __asan_report_store8(v3 + 160, v19);
                *(_QWORD *)(v3 + 160) = v20;
                v21 = std::map<unsigned long,std::string>::operator[](
                        (std::map<long unsigned int,std::string> *const)(v3 + 640),
                        (std::map<long unsigned int,std::string>::key_type *)(v3 + 160));
                std::string::operator=(v21, col_name);
                *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
                std::_Rb_tree_iterator<std::pair<std::string const,unsigned short>>::operator++((std::_Rb_tree_iterator<std::pair<const std::string,short unsigned int> > *const)(v3 + 96));
              }
              *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v3 + 192, v3 + 128);
              for ( *(_QWORD *)(v3 + 192) = 0LL; ; ++*(_QWORD *)(v3 + 192) )
              {
                v22 = std::vector<std::string>::size(&row_ptr->data_vec);
                if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v3 + 192);
                if ( v22 <= *(_QWORD *)(v3 + 192) )
                  break;
                if ( *(_QWORD *)(v3 + 192) )
                  v23 = " ";
                else
                  v23 = byte_1ABBC960;
                v24 = std::operator<<<std::char_traits<char>>(v3 + 720, v23);
                v25 = std::map<unsigned long,std::string>::operator[](
                        (std::map<long unsigned int,std::string> *const)(v3 + 640),
                        (const std::map<long unsigned int,std::string>::key_type *)(v3 + 192));
                v26 = std::operator<<<char>(v24, v25);
                v27 = std::operator<<<std::char_traits<char>>(v26, &off_1AC08640);
                p_data_vec = &row_ptr->data_vec;
                if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v3 + 192);
                v29 = std::vector<std::string>::operator[](p_data_vec, *(_QWORD *)(v3 + 192));
                std::operator<<<char>(v27, v29);
                if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v3 + 192);
              }
              *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
              std::map<unsigned long,std::string>::~map((std::map<long unsigned int,std::string> *const)(v3 + 640));
              v30 = ((v3 + 640) >> 3) + 2147450880;
              *(_DWORD *)v30 = -117901064;
              *(_WORD *)(v30 + 4) = -1800;
            }
            else
            {
              for ( i = 0LL; i < std::vector<std::string>::size(&row_ptr->data_vec); ++i )
              {
                if ( i )
                  v31 = (const char *)&unk_1AC08680;
                else
                  v31 = byte_1ABBC960;
                v32 = std::operator<<<std::char_traits<char>>(v3 + 720, v31);
                v33 = std::vector<std::string>::operator[](&row_ptr->data_vec, i);
                std::operator<<<char>(v32, v33);
              }
            }
            *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 512) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 512, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 512),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
              "loadAvatarFettersLevelExcelConfig",
              831);
            v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 512),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v35 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v34, (const char (*)[2])"<");
            v36 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v35, __for_begin);
            v37 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v36,
                    (const char (*)[11])byte_1ABFF1E0);
            *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 64);
            v38 = (unsigned int)(*(_DWORD *)(v3 + 64) + 1);
            if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v3 + 80, v38);
            *(_DWORD *)(v3 + 80) = v38;
            v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v37,
                    (const unsigned int *)(v3 + 80));
            v40 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v39,
                    (const char (*)[13])byte_1ABFF220);
            *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 576) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 607) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 607) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 576, 32LL);
            }
            std::ostringstream::str(v3 + 576, v3 + 720);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v40, (const std::string *)(v3 + 576));
            std::string::~string((void *)(v3 + 576));
            *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
            *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            std::ostringstream::~ostringstream(v3 + 720);
            __asan_poison_stack_memory(v3 + 720, 376LL);
            v16 = 0;
          }
          else
          {
            v41 = std::move<data::AvatarFettersLevelExcelConfig &>((data::AvatarFettersLevelExcelConfig *)(v3 + 224));
            std::vector<data::AvatarFettersLevelExcelConfig>::emplace_back<data::AvatarFettersLevelExcelConfig>(
              &this->avatar_fetters_level_excel_config_vec,
              v41,
              v42);
            v16 = 1;
          }
        }
        else
        {
          *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 448) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 448, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 448),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
            "loadAvatarFettersLevelExcelConfig",
            806);
          v15 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 448),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
          *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v16 = 0;
        }
        data::AvatarFettersLevelExcelConfig::~AvatarFettersLevelExcelConfig((data::AvatarFettersLevelExcelConfig *const)(v3 + 224));
        *(_WORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -1800;
        if ( v16 != 1 )
        {
          v43 = 0;
          goto LABEL_82;
        }
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 64);
      }
      v43 = 1;
LABEL_82:
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      v10 = v43 == 1;
    }
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v3 + 1168));
    __asan_poison_stack_memory(v3 + 1168, 32880LL);
    if ( !v10 )
      goto LABEL_86;
  }
  v2 = 0;
LABEL_86:
  for ( j = (char *)(v3 + 288); j != (char *)(v3 + 256); std::string::~string(j) )
    j -= 32;
  if ( v54 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF90B8) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862731) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450916 - (((_DWORD)v5 + 2147450924) & 0xFFFFFFF8) + 4252) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_10(v3, 34304LL, v54);
  }
  return v2;
};

// Line 841: range 00000000138DAF74-00000000138DBF67
int32_t __cdecl data::AvatarExcelConfigMgrBase::loadAvatarHeroEntityExcelConfig(
        data::AvatarExcelConfigMgrBase *const this,
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
  data::AvatarHeroEntityExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::AvatarHeroEntityExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarHeroEntityExcelConfig>,false,false>,bool> v27; // rax
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
  *(_QWORD *)(v3 + 8) = "13 48 1 9 <unknown> 64 4 5 r:856 80 4 9 <unknown> 96 32 9 paths:842 160 32 9 <unknown> 224 32 9 "
                        "<unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 80 8 d"
                        "ata:859 656 376 24 debug_message_stream:867 1104 32880 12 txt_file:850";
  *(_QWORD *)(v3 + 16) = data::AvatarExcelConfigMgrBase::loadAvatarHeroEntityExcelConfig;
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
    "/txt/AvatarHeroEntityData.txt",
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
        "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
        "loadAvatarHeroEntityExcelConfig",
        853);
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
        data::AvatarHeroEntityExcelConfig::AvatarHeroEntityExcelConfig((data::AvatarHeroEntityExcelConfig *const)(v3 + 544));
        if ( row_ptr )
        {
          if ( data::AvatarHeroEntityExcelConfig::init((data::AvatarHeroEntityExcelConfig *const)(v3 + 544), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 656, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 656);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 656, &unk_1AC26A80);
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
              "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
              "loadAvatarHeroEntityExcelConfig",
              869);
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
            v24 = std::move<data::AvatarHeroEntityExcelConfig &>((data::AvatarHeroEntityExcelConfig *)(v3 + 544));
            v27 = std::unordered_map<unsigned int,data::AvatarHeroEntityExcelConfig>::emplace<unsigned int &,data::AvatarHeroEntityExcelConfig>(
                    &this->avatar_hero_entity_excel_config_map,
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
                "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
                "loadAvatarHeroEntityExcelConfig",
                874);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 480),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                      v28,
                      (const char (*)[15])byte_1AC26AC0);
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
            "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
            "loadAvatarHeroEntityExcelConfig",
            862);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 288),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::AvatarHeroEntityExcelConfig::~AvatarHeroEntityExcelConfig((data::AvatarHeroEntityExcelConfig *const)(v3 + 544));
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

// Line 883: range 00000000138DBF68-00000000138DC658
int32_t __cdecl data::AvatarExcelConfigMgrBase::loadConfig(
        data::AvatarExcelConfigMgrBase *const this,
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
  char v11[384]; // [rsp+10h] [rbp-180h] BYREF

  v2 = (common::milog::MiLogStream *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = (common::milog::MiLogStream *)v3;
  }
  v2->log_ = (common::milog::MiLog *)1102416563;
  v2->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"5 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown>";
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)data::AvatarExcelConfigMgrBase::loadConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -202116109;
  if ( data::AvatarExcelConfigMgrBase::loadAvatarExcelConfig(this, config) )
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
      "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
      "loadConfig",
      886);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      v5,
      (const char (*)[29])"loadAvatarExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( data::AvatarExcelConfigMgrBase::loadAvatarLevelExcelConfig(this, config) )
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
      "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
      "loadConfig",
      891);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      v7,
      (const char (*)[34])"loadAvatarLevelExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( data::AvatarExcelConfigMgrBase::loadAvatarPromoteExcelConfig(this, config) )
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
      "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
      "loadConfig",
      896);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      v8,
      (const char (*)[36])"loadAvatarPromoteExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else if ( data::AvatarExcelConfigMgrBase::loadAvatarFettersLevelExcelConfig(this, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[7] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[7].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 1) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[7].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[7], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
      "loadConfig",
      901);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      v9,
      (const char (*)[41])"loadAvatarFettersLevelExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 7);
    result = -1;
  }
  else if ( data::AvatarExcelConfigMgrBase::loadAvatarHeroEntityExcelConfig(this, config) )
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
      "./src/txt_data_auto/AvatarExcelConfig.gen.cpp",
      "loadConfig",
      906);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 9, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      v10,
      (const char (*)[39])"loadAvatarHeroEntityExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 9);
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v11 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    v2->log_ = (common::milog::MiLog *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 913: range 00000000138DC65A-00000000138DC66C
int32_t __cdecl data::AvatarExcelConfigMgrBase::rewriteConfig(
        data::AvatarExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 918: range 00000000138DC66E-00000000138DC680
int32_t __cdecl data::AvatarExcelConfigMgrBase::finalConfig(
        data::AvatarExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 923: range 00000000138DC682-00000000138DC83D
data::AvatarExcelConfig *__fastcall data::AvatarExcelConfigMgrBase::findAvatarExcelConfig(
        data::AvatarExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::AvatarExcelConfigMap *p_avatar_excel_config_map; // rdx
  data::AvatarExcelConfigMap *v6; // rdx
  bool v7; // al
  data::AvatarExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:922 64 8 8 iter:924 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::AvatarExcelConfigMgrBase::findAvatarExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_avatar_excel_config_map = &this->avatar_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::AvatarExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::AvatarExcelConfig>::find(
                                                                                       p_avatar_excel_config_map,
                                                                                       (const std::unordered_map<unsigned int,data::AvatarExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->avatar_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::AvatarExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::AvatarExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::AvatarExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 936: range 00000000138DC83E-00000000138DC9F9
const data::AvatarExcelConfig *__fastcall data::AvatarExcelConfigMgrBase::findAvatarExcelConfig(
        const data::AvatarExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::AvatarExcelConfigMap *p_avatar_excel_config_map; // rdx
  data::AvatarExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::AvatarExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:935 64 8 8 iter:937 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::AvatarExcelConfigMgrBase::findAvatarExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_avatar_excel_config_map = &this->avatar_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::AvatarExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::AvatarExcelConfig>::find(
                                                                                             p_avatar_excel_config_map,
                                                                                             (const std::unordered_map<unsigned int,data::AvatarExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->avatar_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::AvatarExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::AvatarExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::AvatarExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AvatarExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AvatarExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 949: range 00000000138DC9FA-00000000138DCBB5
data::AvatarLevelExcelConfig *__fastcall data::AvatarExcelConfigMgrBase::findAvatarLevelExcelConfig(
        data::AvatarExcelConfigMgrBase *const this,
        __int64 level)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::AvatarLevelExcelConfigMap *p_avatar_level_excel_config_map; // rdx
  data::AvatarLevelExcelConfigMap *v6; // rdx
  bool v7; // al
  data::AvatarLevelExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 9 level:948 64 8 8 iter:950 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::AvatarExcelConfigMgrBase::findAvatarLevelExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = level;
  p_avatar_level_excel_config_map = &this->avatar_level_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, level);
  *(std::unordered_map<unsigned int,data::AvatarLevelExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::AvatarLevelExcelConfig>::find(
                                                                                            p_avatar_level_excel_config_map,
                                                                                            (const std::unordered_map<unsigned int,data::AvatarLevelExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->avatar_level_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::AvatarLevelExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::AvatarLevelExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::AvatarLevelExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarLevelExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarLevelExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarLevelExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarLevelExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 962: range 00000000138DCBB6-00000000138DCD71
const data::AvatarLevelExcelConfig *__fastcall data::AvatarExcelConfigMgrBase::findAvatarLevelExcelConfig(
        const data::AvatarExcelConfigMgrBase *const this,
        __int64 level)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::AvatarLevelExcelConfigMap *p_avatar_level_excel_config_map; // rdx
  data::AvatarLevelExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::AvatarLevelExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 9 level:961 64 8 8 iter:963 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::AvatarExcelConfigMgrBase::findAvatarLevelExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = level;
  p_avatar_level_excel_config_map = &this->avatar_level_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, level);
  *(std::unordered_map<unsigned int,data::AvatarLevelExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::AvatarLevelExcelConfig>::find(
                                                                                                  p_avatar_level_excel_config_map,
                                                                                                  (const std::unordered_map<unsigned int,data::AvatarLevelExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->avatar_level_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::AvatarLevelExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::AvatarLevelExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::AvatarLevelExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarLevelExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarLevelExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AvatarLevelExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AvatarLevelExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 975: range 00000000138DCD72-00000000138DCF33
data::AvatarHeroEntityExcelConfig *__fastcall data::AvatarExcelConfigMgrBase::findAvatarHeroEntityExcelConfig(
        data::AvatarExcelConfigMgrBase *const this,
        __int64 avatar_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::AvatarHeroEntityExcelConfigMap *p_avatar_hero_entity_excel_config_map; // rdx
  data::AvatarHeroEntityExcelConfigMap *v6; // rdx
  bool v7; // al
  data::AvatarHeroEntityExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 avatar_id:974 64 8 8 iter:976 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::AvatarExcelConfigMgrBase::findAvatarHeroEntityExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = avatar_id;
  p_avatar_hero_entity_excel_config_map = &this->avatar_hero_entity_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, avatar_id);
  *(std::unordered_map<unsigned int,data::AvatarHeroEntityExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::AvatarHeroEntityExcelConfig>::find(
                                                                                                 p_avatar_hero_entity_excel_config_map,
                                                                                                 (const std::unordered_map<unsigned int,data::AvatarHeroEntityExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->avatar_hero_entity_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::AvatarHeroEntityExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::AvatarHeroEntityExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::AvatarHeroEntityExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarHeroEntityExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarHeroEntityExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarHeroEntityExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarHeroEntityExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 988: range 00000000138DCF34-00000000138DD0F5
const data::AvatarHeroEntityExcelConfig *__fastcall data::AvatarExcelConfigMgrBase::findAvatarHeroEntityExcelConfig(
        const data::AvatarExcelConfigMgrBase *const this,
        __int64 avatar_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::AvatarHeroEntityExcelConfigMap *p_avatar_hero_entity_excel_config_map; // rdx
  data::AvatarHeroEntityExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::AvatarHeroEntityExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 avatar_id:987 64 8 8 iter:989 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::AvatarExcelConfigMgrBase::findAvatarHeroEntityExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = avatar_id;
  p_avatar_hero_entity_excel_config_map = &this->avatar_hero_entity_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, avatar_id);
  *(std::unordered_map<unsigned int,data::AvatarHeroEntityExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::AvatarHeroEntityExcelConfig>::find(p_avatar_hero_entity_excel_config_map, (const std::unordered_map<unsigned int,data::AvatarHeroEntityExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->avatar_hero_entity_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::AvatarHeroEntityExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::AvatarHeroEntityExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::AvatarHeroEntityExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarHeroEntityExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarHeroEntityExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AvatarHeroEntityExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AvatarHeroEntityExcelConfig>,false,false> *const)(v2 + 64))->second;
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

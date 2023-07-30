// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/GuideExcelConfig.gen.cpp

// Line 12: range 00000000144AF660-00000000144AF9D3
const char *__fastcall data::enumValToStr(data::GuideTriggerType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::GuideTriggerType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::GuideTriggerType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
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
  map = data::getGuideTriggerTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::GuideTriggerType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::GuideTriggerType,std::pair<std::string,std::string>>::find(map, (const std::map<data::GuideTriggerType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::GuideTriggerType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::GuideTriggerType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::GuideTriggerType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::GuideTriggerType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/GuideExcelConfig.gen.cpp",
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
    result = "INVALID_GuideTriggerType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::GuideTriggerType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::GuideTriggerType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 24: range 00000000144AF9D4-00000000144AFF8C
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::GuideTriggerType>,false,true>::pointer v10; // rax
  data::GuideTriggerType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::GuideTriggerType> *m; // [rsp+18h] [rbp-188h]
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
    m = data::getGuideTriggerTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::GuideTriggerType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::GuideTriggerType>::find(
                                                                                             m,
                                                                                             (const std::unordered_map<std::string,data::GuideTriggerType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::GuideTriggerType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::GuideTriggerType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::GuideTriggerType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GuideTriggerType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GuideTriggerType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/GuideExcelConfig.gen.cpp",
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
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::GuideTriggerType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::GuideTriggerType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/GuideExcelConfig.gen.cpp",
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

// Line 45: range 00000000144AFF8D-00000000144B0E13
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::GuideTriggerType> *i; // r14
  const char *v7; // rsi
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::GuideTriggerType>,false,true>::pointer v11; // rax
  data::GuideTriggerType second; // ecx
  char v13; // dl
  char v15[1072]; // [rsp+20h] [rbp-430h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(1024LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "21 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 4 9 <unknown> 128 4 9"
                        " <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unknown> 208 4 9 <unkn"
                        "own> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 8 5 it:66 304 8 9 <unknown> 336 8"
                        " 4 s:44 368 32 9 <unknown> 432 32 9 <unknown> 496 32 9 <unknown> 560 400 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -234556927;
  v4[536862724] = -234556924;
  v4[536862725] = -234556924;
  v4[536862726] = -234556924;
  v4[536862727] = -234556924;
  v4[536862728] = 61956;
  v4[536862728] = -234881024;
  v4[536862729] = 62194;
  v4[536862729] = -234881024;
  v4[536862730] = 62194;
  v4[536862730] = -234881024;
  v4[536862731] = 62194;
  v4[536862732] = -219021312;
  v4[536862733] = 62194;
  v4[536862734] = -219021312;
  v4[536862735] = 62194;
  v4[536862736] = -219021312;
  v4[536862737] = 62194;
  v4[536862750] = -202116109;
  v4[536862751] = -202116109;
  *(_QWORD *)(v2 + 336) = s;
  if ( *(_QWORD *)(v2 + 336) )
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::GuideTriggerType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::GuideTriggerType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, e);
      *(_DWORD *)(v2 + 112) = 0;
      std::pair<std::string const,data::GuideTriggerType>::pair<char const(&)[13],data::GuideTriggerType,true>(
        (std::pair<const std::string,data::GuideTriggerType> *const)(v2 + 560),
        (const char (*)[13])byte_1AD427A0,
        (data::GuideTriggerType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1AD427A0);
      *(_DWORD *)(v2 + 128) = 1;
      std::pair<std::string const,data::GuideTriggerType>::pair<char const(&)[19],data::GuideTriggerType,true>(
        (std::pair<const std::string,data::GuideTriggerType> *const)(v2 + 600),
        (const char (*)[19])byte_1AD8B300,
        (data::GuideTriggerType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, byte_1AD8B300);
      *(_DWORD *)(v2 + 144) = 2;
      std::pair<std::string const,data::GuideTriggerType>::pair<char const(&)[16],data::GuideTriggerType,true>(
        (std::pair<const std::string,data::GuideTriggerType> *const)(v2 + 640),
        (const char (*)[16])byte_1AD8B340,
        (data::GuideTriggerType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, byte_1AD8B340);
      *(_DWORD *)(v2 + 160) = 3;
      std::pair<std::string const,data::GuideTriggerType>::pair<char const(&)[16],data::GuideTriggerType,true>(
        (std::pair<const std::string,data::GuideTriggerType> *const)(v2 + 680),
        (const char (*)[16])byte_1AD8B380,
        (data::GuideTriggerType *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, byte_1AD8B380);
      *(_DWORD *)(v2 + 176) = 4;
      std::pair<std::string const,data::GuideTriggerType>::pair<char const(&)[19],data::GuideTriggerType,true>(
        (std::pair<const std::string,data::GuideTriggerType> *const)(v2 + 720),
        (const char (*)[19])byte_1AD8B3C0,
        (data::GuideTriggerType *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, byte_1AD8B3C0);
      *(_DWORD *)(v2 + 192) = 5;
      std::pair<std::string const,data::GuideTriggerType>::pair<char const(&)[16],data::GuideTriggerType,true>(
        (std::pair<const std::string,data::GuideTriggerType> *const)(v2 + 760),
        (const char (*)[16])byte_1AD8B400,
        (data::GuideTriggerType *)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 208, byte_1AD8B400);
      *(_DWORD *)(v2 + 208) = 6;
      std::pair<std::string const,data::GuideTriggerType>::pair<char const(&)[13],data::GuideTriggerType,true>(
        (std::pair<const std::string,data::GuideTriggerType> *const)(v2 + 800),
        (const char (*)[13])byte_1AD8B440,
        (data::GuideTriggerType *)(v2 + 208));
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 224, byte_1AD8B440);
      *(_DWORD *)(v2 + 224) = 7;
      std::pair<std::string const,data::GuideTriggerType>::pair<char const(&)[25],data::GuideTriggerType,true>(
        (std::pair<const std::string,data::GuideTriggerType> *const)(v2 + 840),
        (const char (*)[25])byte_1AD8B480,
        (data::GuideTriggerType *)(v2 + 224));
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 240, byte_1AD8B480);
      *(_DWORD *)(v2 + 240) = 8;
      std::pair<std::string const,data::GuideTriggerType>::pair<char const(&)[26],data::GuideTriggerType,true>(
        (std::pair<const std::string,data::GuideTriggerType> *const)(v2 + 880),
        (const char (*)[26])byte_1AD8B4C0,
        (data::GuideTriggerType *)(v2 + 240));
      if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 256, byte_1AD8B4C0);
      *(_DWORD *)(v2 + 256) = 9;
      std::pair<std::string const,data::GuideTriggerType>::pair<char const(&)[14],data::GuideTriggerType,true>(
        (std::pair<const std::string,data::GuideTriggerType> *const)(v2 + 920),
        (const char (*)[14])byte_1AD8B500,
        (data::GuideTriggerType *)(v2 + 256));
      std::allocator<std::pair<std::string const,data::GuideTriggerType>>::allocator((std::allocator<std::pair<const std::string,data::GuideTriggerType> > *const)(v2 + 80));
      std::unordered_map<std::string,data::GuideTriggerType>::unordered_map(
        &data::enumStrToVal(char const*,data::GuideTriggerType &)::m,
        (std::initializer_list<std::pair<const std::string,data::GuideTriggerType> >)__PAIR128__(10LL, v2 + 560),
        0LL,
        (const std::unordered_map<std::string,data::GuideTriggerType>::hasher *)(v2 + 48),
        (const std::unordered_map<std::string,data::GuideTriggerType>::key_equal *)(v2 + 64),
        (const std::unordered_map<std::string,data::GuideTriggerType>::allocator_type *)(v2 + 80));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::GuideTriggerType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::GuideTriggerType>::~unordered_map,
        &data::enumStrToVal(char const*,data::GuideTriggerType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::GuideTriggerType>>::~allocator((std::allocator<std::pair<const std::string,data::GuideTriggerType> > *const)(v2 + 80));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::GuideTriggerType> *)(v2 + 960);
            i != (std::pair<const std::string,data::GuideTriggerType> *)(v2 + 560);
            std::pair<std::string const,data::GuideTriggerType>::~pair(i) )
      {
        --i;
      }
      __asan_poison_stack_memory(v2 + 560, 400LL);
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
    }
    *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((v2 + 432) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 96);
    v7 = *(const char **)(v2 + 336);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 432),
      v7,
      (const std::allocator<char> *)(v2 + 96));
    if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 272, v7);
    *(std::unordered_map<std::string,data::GuideTriggerType>::iterator *)(v2 + 272) = std::unordered_map<std::string,data::GuideTriggerType>::find(
                                                                                        &data::enumStrToVal(char const*,data::GuideTriggerType &)::m,
                                                                                        (const std::unordered_map<std::string,data::GuideTriggerType>::key_type *)(v2 + 432));
    std::string::~string((void *)(v2 + 432));
    *(_DWORD *)(((v2 + 432) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 96);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 304, v2 + 432);
    *(std::unordered_map<std::string,data::GuideTriggerType>::iterator *)(v2 + 304) = std::unordered_map<std::string,data::GuideTriggerType>::end(&data::enumStrToVal(char const*,data::GuideTriggerType &)::m);
    v8 = (char *)(v2 + 304);
    v9 = std::__detail::operator==<std::pair<std::string const,data::GuideTriggerType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GuideTriggerType>,true> *)(v2 + 272),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GuideTriggerType>,true> *)(v2 + 304));
    *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
    {
      *(_DWORD *)(((v2 + 496) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 496) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 527) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 16 + 31) & 7) >= *(_BYTE *)(((v2 + 527) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 496, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 496),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/txt_data_auto/GuideExcelConfig.gen.cpp",
        "enumStrToVal",
        69);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 496),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v10, (const char *const *)(v2 + 336));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 496));
      LODWORD(result) = -1;
    }
    else
    {
      v11 = std::__detail::_Node_iterator<std::pair<std::string const,data::GuideTriggerType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::GuideTriggerType>,false,true> *const)(v2 + 272));
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
      LODWORD(result) = 0;
    }
  }
  else
  {
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
      "./src/txt_data_auto/GuideExcelConfig.gen.cpp",
      "enumStrToVal",
      48);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
      (common::milog::MiLogStream *const)(v2 + 368),
      (const char (*)[14])"s is nullptr!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 368));
    LODWORD(result) = -1;
  }
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8078) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 128) & 0xFFFFFFF8) >> 3));
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
  return (unsigned int)result;
};

// Line 78: range 00000000144B0E14-00000000144B0E2A
const char *__cdecl data::getDescription(data::GuideTriggerType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 83: range 00000000144B0E2B-00000000144B0FE0
bool __cdecl data::isValidGuideTriggerType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::GuideTriggerType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::GuideTriggerType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 4 e:84 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidGuideTriggerType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getGuideTriggerTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::GuideTriggerType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::GuideTriggerType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getGuideTriggerTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::GuideTriggerType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::GuideTriggerType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::GuideTriggerType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::GuideTriggerType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::GuideTriggerType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 89: range 00000000144B0FE1-00000000144B1142
bool __cdecl data::isValidGuideTriggerTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::GuideTriggerType> *v5; // rcx
  const std::unordered_map<std::string,data::GuideTriggerType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidGuideTriggerTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getGuideTriggerTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::GuideTriggerType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::GuideTriggerType>::end(v5);
  v6 = data::getGuideTriggerTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::GuideTriggerType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::GuideTriggerType>::find(
                                                                                           v6,
                                                                                           name);
  result = std::__detail::operator!=<std::pair<std::string const,data::GuideTriggerType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GuideTriggerType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GuideTriggerType>,true> *)(v2 + 64));
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

// Line 94: range 00000000144B1143-00000000144B19B8
const std::unordered_map<std::string,data::GuideTriggerType> *__cdecl data::getGuideTriggerTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::GuideTriggerType> *i; // r14
  char v6[752]; // [rsp+10h] [rbp-2F0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(704LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "14 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 "
                        "<unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unkno"
                        "wn> 208 4 9 <unknown> 224 4 9 <unknown> 240 400 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::getGuideTriggerTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556927;
  v3[536862723] = -234556924;
  v3[536862724] = -234556924;
  v3[536862725] = -234556924;
  v3[536862726] = -234556924;
  v3[536862727] = 61956;
  v3[536862740] = -202116109;
  v3[536862741] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getGuideTriggerTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getGuideTriggerTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string const,data::GuideTriggerType>::pair<char const(&)[13],data::GuideTriggerType,true>(
      (std::pair<const std::string,data::GuideTriggerType> *const)(v1 + 240),
      (const char (*)[13])"PLAYER_LEVEL",
      (data::GuideTriggerType *)(v1 + 80));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, "PLAYER_LEVEL");
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string const,data::GuideTriggerType>::pair<char const(&)[17],data::GuideTriggerType,true>(
      (std::pair<const std::string,data::GuideTriggerType> *const)(v1 + 280),
      (const char (*)[17])"ANY_AVATAR_LEVEL",
      (data::GuideTriggerType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "ANY_AVATAR_LEVEL");
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string const,data::GuideTriggerType>::pair<char const(&)[13],data::GuideTriggerType,true>(
      (std::pair<const std::string,data::GuideTriggerType> *const)(v1 + 320),
      (const char (*)[13])"GET_NEW_ITEM",
      (data::GuideTriggerType *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, "GET_NEW_ITEM");
    *(_DWORD *)(v1 + 128) = 3;
    std::pair<std::string const,data::GuideTriggerType>::pair<char const(&)[17],data::GuideTriggerType,true>(
      (std::pair<const std::string,data::GuideTriggerType> *const)(v1 + 360),
      (const char (*)[17])"OPENSTATE_CHANGE",
      (data::GuideTriggerType *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, "OPENSTATE_CHANGE");
    *(_DWORD *)(v1 + 144) = 4;
    std::pair<std::string const,data::GuideTriggerType>::pair<char const(&)[15],data::GuideTriggerType,true>(
      (std::pair<const std::string,data::GuideTriggerType> *const)(v1 + 400),
      (const char (*)[15])"HAS_AVATAR_NUM",
      (data::GuideTriggerType *)(v1 + 144));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, "HAS_AVATAR_NUM");
    *(_DWORD *)(v1 + 160) = 5;
    std::pair<std::string const,data::GuideTriggerType>::pair<char const(&)[17],data::GuideTriggerType,true>(
      (std::pair<const std::string,data::GuideTriggerType> *const)(v1 + 440),
      (const char (*)[17])"PERSONALLINE_KEY",
      (data::GuideTriggerType *)(v1 + 160));
    if ( *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 176, "PERSONALLINE_KEY");
    *(_DWORD *)(v1 + 176) = 6;
    std::pair<std::string const,data::GuideTriggerType>::pair<char const(&)[20],data::GuideTriggerType,true>(
      (std::pair<const std::string,data::GuideTriggerType> *const)(v1 + 480),
      (const char (*)[20])"CLIMATE_TYPE_CHANGE",
      (data::GuideTriggerType *)(v1 + 176));
    if ( *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 192, "CLIMATE_TYPE_CHANGE");
    *(_DWORD *)(v1 + 192) = 7;
    std::pair<std::string const,data::GuideTriggerType>::pair<char const(&)[19],data::GuideTriggerType,true>(
      (std::pair<const std::string,data::GuideTriggerType> *const)(v1 + 520),
      (const char (*)[19])"WORLDPLAYER_UPDATE",
      (data::GuideTriggerType *)(v1 + 192));
    if ( *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 208, "WORLDPLAYER_UPDATE");
    *(_DWORD *)(v1 + 208) = 8;
    std::pair<std::string const,data::GuideTriggerType>::pair<char const(&)[23],data::GuideTriggerType,true>(
      (std::pair<const std::string,data::GuideTriggerType> *const)(v1 + 560),
      (const char (*)[23])"PUSHTIPS_NOTIFY_FINISH",
      (data::GuideTriggerType *)(v1 + 208));
    if ( *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 224, "PUSHTIPS_NOTIFY_FINISH");
    *(_DWORD *)(v1 + 224) = 9;
    std::pair<std::string const,data::GuideTriggerType>::pair<char const(&)[13],data::GuideTriggerType,true>(
      (std::pair<const std::string,data::GuideTriggerType> *const)(v1 + 600),
      (const char (*)[13])"NEW_PUSHTIPS",
      (data::GuideTriggerType *)(v1 + 224));
    std::allocator<std::pair<std::string const,data::GuideTriggerType>>::allocator((std::allocator<std::pair<const std::string,data::GuideTriggerType> > *const)(v1 + 64));
    std::unordered_map<std::string,data::GuideTriggerType>::unordered_map(
      &data::getGuideTriggerTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::GuideTriggerType> >)__PAIR128__(10LL, v1 + 240),
      0LL,
      (const std::unordered_map<std::string,data::GuideTriggerType>::hasher *)(v1 + 32),
      (const std::unordered_map<std::string,data::GuideTriggerType>::key_equal *)(v1 + 48),
      (const std::unordered_map<std::string,data::GuideTriggerType>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getGuideTriggerTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::GuideTriggerType>::~unordered_map,
      &data::getGuideTriggerTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::GuideTriggerType>>::~allocator((std::allocator<std::pair<const std::string,data::GuideTriggerType> > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::GuideTriggerType> *)(v1 + 640);
          i != (std::pair<const std::string,data::GuideTriggerType> *)(v1 + 240);
          std::pair<std::string const,data::GuideTriggerType>::~pair(i) )
    {
      --i;
    }
  }
  if ( v6 == (char *)v1 )
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
  return &data::getGuideTriggerTypeNameMap[abi:cxx11](void)::m;
};

// Line 112: range 00000000144B19B9-00000000144B2885
const std::map<data::GuideTriggerType,std::pair<std::string,std::string >> *__cdecl data::getGuideTriggerTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::GuideTriggerType,std::pair<std::string,std::string > > *i; // r14
  _DWORD *v5; // rax
  _DWORD *v6; // rax
  _DWORD *v7; // rax
  _DWORD *v8; // rax
  _DWORD *v9; // rax
  _DWORD *v10; // rax
  _DWORD *v11; // rax
  _DWORD *v12; // rax
  _DWORD *v13; // rax
  char v15[2096]; // [rsp+10h] [rbp-830h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_5(2048LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "23 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 4 9"
                        " <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unknown> 208 4 9 <unkn"
                        "own> 224 4 9 <unknown> 240 64 9 <unknown> 336 64 9 <unknown> 432 64 9 <unknown> 528 64 9 <unknow"
                        "n> 624 64 9 <unknown> 720 64 9 <unknown> 816 64 9 <unknown> 912 64 9 <unknown> 1008 64 9 <unknow"
                        "n> 1104 64 9 <unknown> 1200 720 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::getGuideTriggerTypeEnumMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -234556927;
  v3[536862723] = -234556924;
  v3[536862724] = -234556924;
  v3[536862725] = -234556924;
  v3[536862726] = -234556924;
  v3[536862727] = 61956;
  v3[536862729] = -219021312;
  v3[536862730] = 62194;
  v3[536862732] = -219021312;
  v3[536862733] = 62194;
  v3[536862735] = -219021312;
  v3[536862736] = 62194;
  v3[536862738] = -219021312;
  v3[536862739] = 62194;
  v3[536862741] = -219021312;
  v3[536862742] = 62194;
  v3[536862744] = -219021312;
  v3[536862745] = 62194;
  v3[536862747] = -219021312;
  v3[536862748] = 62194;
  v3[536862750] = -219021312;
  v3[536862751] = 62194;
  v3[536862753] = -219021312;
  v3[536862754] = 62194;
  v3[536862756] = -219021312;
  v3[536862757] = 62194;
  v3[536862780] = -202116109;
  v3[536862781] = -202116109;
  v3[536862782] = -202116109;
  v3[536862783] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getGuideTriggerTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getGuideTriggerTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[13],true>(
      (std::pair<std::string,std::string > *const)(v1 + 240),
      (const char (*)[13])byte_1AD427A0,
      (const char (*)[13])"PLAYER_LEVEL");
    std::pair<data::GuideTriggerType const,std::pair<std::string,std::string>>::pair<data::GuideTriggerType,true>(
      (std::pair<const data::GuideTriggerType,std::pair<std::string,std::string > > *const)(v1 + 1200),
      (data::GuideTriggerType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 240));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[17],true>(
      (std::pair<std::string,std::string > *const)(v1 + 336),
      (const char (*)[19])byte_1AD8B300,
      (const char (*)[17])"ANY_AVATAR_LEVEL");
    std::pair<data::GuideTriggerType const,std::pair<std::string,std::string>>::pair<data::GuideTriggerType,true>(
      (std::pair<const data::GuideTriggerType,std::pair<std::string,std::string > > *const)(v1 + 1272),
      (data::GuideTriggerType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 336));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[16],char const(&)[13],true>(
      (std::pair<std::string,std::string > *const)(v1 + 432),
      (const char (*)[16])byte_1AD8B340,
      (const char (*)[13])"GET_NEW_ITEM");
    std::pair<data::GuideTriggerType const,std::pair<std::string,std::string>>::pair<data::GuideTriggerType,true>(
      (std::pair<const data::GuideTriggerType,std::pair<std::string,std::string > > *const)(v1 + 1344),
      (data::GuideTriggerType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 432));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, v1 + 112);
    *(_DWORD *)(v1 + 128) = 3;
    std::pair<std::string,std::string>::pair<char const(&)[16],char const(&)[17],true>(
      (std::pair<std::string,std::string > *const)(v1 + 528),
      (const char (*)[16])byte_1AD8B380,
      (const char (*)[17])"OPENSTATE_CHANGE");
    std::pair<data::GuideTriggerType const,std::pair<std::string,std::string>>::pair<data::GuideTriggerType,true>(
      (std::pair<const data::GuideTriggerType,std::pair<std::string,std::string > > *const)(v1 + 1416),
      (data::GuideTriggerType *)(v1 + 128),
      (const std::pair<std::string,std::string > *)(v1 + 528));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, v1 + 128);
    *(_DWORD *)(v1 + 144) = 4;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[15],true>(
      (std::pair<std::string,std::string > *const)(v1 + 624),
      (const char (*)[19])byte_1AD8B3C0,
      (const char (*)[15])"HAS_AVATAR_NUM");
    std::pair<data::GuideTriggerType const,std::pair<std::string,std::string>>::pair<data::GuideTriggerType,true>(
      (std::pair<const data::GuideTriggerType,std::pair<std::string,std::string > > *const)(v1 + 1488),
      (data::GuideTriggerType *)(v1 + 144),
      (const std::pair<std::string,std::string > *)(v1 + 624));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, v1 + 144);
    *(_DWORD *)(v1 + 160) = 5;
    std::pair<std::string,std::string>::pair<char const(&)[16],char const(&)[17],true>(
      (std::pair<std::string,std::string > *const)(v1 + 720),
      (const char (*)[16])byte_1AD8B400,
      (const char (*)[17])"PERSONALLINE_KEY");
    std::pair<data::GuideTriggerType const,std::pair<std::string,std::string>>::pair<data::GuideTriggerType,true>(
      (std::pair<const data::GuideTriggerType,std::pair<std::string,std::string > > *const)(v1 + 1560),
      (data::GuideTriggerType *)(v1 + 160),
      (const std::pair<std::string,std::string > *)(v1 + 720));
    if ( *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 176, v1 + 160);
    *(_DWORD *)(v1 + 176) = 6;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[20],true>(
      (std::pair<std::string,std::string > *const)(v1 + 816),
      (const char (*)[13])byte_1AD8B440,
      (const char (*)[20])"CLIMATE_TYPE_CHANGE");
    std::pair<data::GuideTriggerType const,std::pair<std::string,std::string>>::pair<data::GuideTriggerType,true>(
      (std::pair<const data::GuideTriggerType,std::pair<std::string,std::string > > *const)(v1 + 1632),
      (data::GuideTriggerType *)(v1 + 176),
      (const std::pair<std::string,std::string > *)(v1 + 816));
    if ( *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 192, v1 + 176);
    *(_DWORD *)(v1 + 192) = 7;
    std::pair<std::string,std::string>::pair<char const(&)[25],char const(&)[19],true>(
      (std::pair<std::string,std::string > *const)(v1 + 912),
      (const char (*)[25])byte_1AD8B480,
      (const char (*)[19])"WORLDPLAYER_UPDATE");
    std::pair<data::GuideTriggerType const,std::pair<std::string,std::string>>::pair<data::GuideTriggerType,true>(
      (std::pair<const data::GuideTriggerType,std::pair<std::string,std::string > > *const)(v1 + 1704),
      (data::GuideTriggerType *)(v1 + 192),
      (const std::pair<std::string,std::string > *)(v1 + 912));
    if ( *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 208, v1 + 192);
    *(_DWORD *)(v1 + 208) = 8;
    std::pair<std::string,std::string>::pair<char const(&)[26],char const(&)[23],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1008),
      (const char (*)[26])byte_1AD8B4C0,
      (const char (*)[23])"PUSHTIPS_NOTIFY_FINISH");
    std::pair<data::GuideTriggerType const,std::pair<std::string,std::string>>::pair<data::GuideTriggerType,true>(
      (std::pair<const data::GuideTriggerType,std::pair<std::string,std::string > > *const)(v1 + 1776),
      (data::GuideTriggerType *)(v1 + 208),
      (const std::pair<std::string,std::string > *)(v1 + 1008));
    if ( *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 224, v1 + 208);
    *(_DWORD *)(v1 + 224) = 9;
    std::pair<std::string,std::string>::pair<char const(&)[14],char const(&)[13],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1104),
      (const char (*)[14])byte_1AD8B500,
      (const char (*)[13])"NEW_PUSHTIPS");
    std::pair<data::GuideTriggerType const,std::pair<std::string,std::string>>::pair<data::GuideTriggerType,true>(
      (std::pair<const data::GuideTriggerType,std::pair<std::string,std::string > > *const)(v1 + 1848),
      (data::GuideTriggerType *)(v1 + 224),
      (const std::pair<std::string,std::string > *)(v1 + 1104));
    std::allocator<std::pair<data::GuideTriggerType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::GuideTriggerType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    std::map<data::GuideTriggerType,std::pair<std::string,std::string>>::map(
      &data::getGuideTriggerTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::GuideTriggerType,std::pair<std::string,std::string > > >)__PAIR128__(10LL, v1 + 1200),
      (const std::less<data::GuideTriggerType> *)(v1 + 48),
      (const std::map<data::GuideTriggerType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getGuideTriggerTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::GuideTriggerType,std::pair<std::string,std::string>>::~map,
      &data::getGuideTriggerTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::GuideTriggerType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::GuideTriggerType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::GuideTriggerType,std::pair<std::string,std::string > > *)(v1 + 1920);
          i != (std::pair<const data::GuideTriggerType,std::pair<std::string,std::string > > *)(v1 + 1200);
          std::pair<data::GuideTriggerType const,std::pair<std::string,std::string>>::~pair(i) )
    {
      --i;
    }
    __asan_poison_stack_memory(v1 + 1200, 720LL);
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1104));
    v5 = (_DWORD *)(((v1 + 1104) >> 3) + 2147450880);
    *v5 = -117901064;
    v5[1] = -117901064;
    *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1008));
    v6 = (_DWORD *)(((v1 + 1008) >> 3) + 2147450880);
    *v6 = -117901064;
    v6[1] = -117901064;
    *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 912));
    v7 = (_DWORD *)(((v1 + 912) >> 3) + 2147450880);
    *v7 = -117901064;
    v7[1] = -117901064;
    *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 816));
    v8 = (_DWORD *)(((v1 + 816) >> 3) + 2147450880);
    *v8 = -117901064;
    v8[1] = -117901064;
    *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 720));
    v9 = (_DWORD *)(((v1 + 720) >> 3) + 2147450880);
    *v9 = -117901064;
    v9[1] = -117901064;
    *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 624));
    v10 = (_DWORD *)(((v1 + 624) >> 3) + 2147450880);
    *v10 = -117901064;
    v10[1] = -117901064;
    *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 528));
    v11 = (_DWORD *)(((v1 + 528) >> 3) + 2147450880);
    *v11 = -117901064;
    v11[1] = -117901064;
    *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 432));
    v12 = (_DWORD *)(((v1 + 432) >> 3) + 2147450880);
    *v12 = -117901064;
    v12[1] = -117901064;
    *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 336));
    v13 = (_DWORD *)(((v1 + 336) >> 3) + 2147450880);
    *v13 = -117901064;
    v13[1] = -117901064;
    *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 240));
  }
  if ( v15 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF80F8) = 0LL;
    memset(
      (void *)((unsigned __int64)(v3 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v3 + 2147450880 - (((_DWORD)v3 + 2147450888) & 0xFFFFFFF8) + 256) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    __asan_stack_free_5(v1, 2048LL, v15);
  }
  return &data::getGuideTriggerTypeEnumMap[abi:cxx11](void)::m;
};

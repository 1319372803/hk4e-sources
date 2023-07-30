// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/MaterialExcelConfig.gen.cpp

// Line 12: range 0000000014548D52-00000000145490C5
const char *__fastcall data::enumValToStr(data::FoodQualityType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::FoodQualityType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::FoodQualityType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
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
  map = data::getFoodQualityTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::FoodQualityType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::FoodQualityType,std::pair<std::string,std::string>>::find(map, (const std::map<data::FoodQualityType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::FoodQualityType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::FoodQualityType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::FoodQualityType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::FoodQualityType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
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
    result = "INVALID_FoodQualityType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::FoodQualityType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::FoodQualityType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 24: range 00000000145490C6-000000001454967E
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::FoodQualityType>,false,true>::pointer v10; // rax
  data::FoodQualityType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::FoodQualityType> *m; // [rsp+18h] [rbp-188h]
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
    m = data::getFoodQualityTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::FoodQualityType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::FoodQualityType>::find(
                                                                                            m,
                                                                                            (const std::unordered_map<std::string,data::FoodQualityType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::FoodQualityType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::FoodQualityType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::FoodQualityType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::FoodQualityType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::FoodQualityType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
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
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::FoodQualityType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::FoodQualityType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
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

// Line 45: range 000000001454967F-000000001454A0DA
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::FoodQualityType> *i; // r14
  unsigned __int64 v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::FoodQualityType>,false,true>::pointer v12; // rax
  data::FoodQualityType second; // ecx
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::FoodQualityType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::FoodQualityType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, e);
      *(_DWORD *)(v2 + 112) = 1;
      std::pair<std::string const,data::FoodQualityType>::pair<char const(&)[7],data::FoodQualityType,true>(
        (std::pair<const std::string,data::FoodQualityType> *const)(v2 + 448),
        (const char (*)[7])byte_1ADA0F20,
        (data::FoodQualityType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1ADA0F20);
      *(_DWORD *)(v2 + 128) = 2;
      std::pair<std::string const,data::FoodQualityType>::pair<char const(&)[7],data::FoodQualityType,true>(
        (std::pair<const std::string,data::FoodQualityType> *const)(v2 + 488),
        (const char (*)[7])byte_1ADA0F60,
        (data::FoodQualityType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, byte_1ADA0F60);
      *(_DWORD *)(v2 + 144) = 3;
      std::pair<std::string const,data::FoodQualityType>::pair<char const(&)[7],data::FoodQualityType,true>(
        (std::pair<const std::string,data::FoodQualityType> *const)(v2 + 528),
        (const char (*)[7])byte_1ADA0FA0,
        (data::FoodQualityType *)(v2 + 144));
      std::allocator<std::pair<std::string const,data::FoodQualityType>>::allocator((std::allocator<std::pair<const std::string,data::FoodQualityType> > *const)(v2 + 80));
      std::unordered_map<std::string,data::FoodQualityType>::unordered_map(
        &data::enumStrToVal(char const*,data::FoodQualityType &)::m,
        (std::initializer_list<std::pair<const std::string,data::FoodQualityType> >)__PAIR128__(3LL, v2 + 448),
        0LL,
        (const std::unordered_map<std::string,data::FoodQualityType>::hasher *)(v2 + 48),
        (const std::unordered_map<std::string,data::FoodQualityType>::key_equal *)(v2 + 64),
        (const std::unordered_map<std::string,data::FoodQualityType>::allocator_type *)(v2 + 80));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::FoodQualityType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::FoodQualityType>::~unordered_map,
        &data::enumStrToVal(char const*,data::FoodQualityType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::FoodQualityType>>::~allocator((std::allocator<std::pair<const std::string,data::FoodQualityType> > *const)(v2 + 80));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::FoodQualityType> *)(v2 + 568);
            i != (std::pair<const std::string,data::FoodQualityType> *)(v2 + 448);
            std::pair<std::string const,data::FoodQualityType>::~pair(i) )
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
    *(std::unordered_map<std::string,data::FoodQualityType>::iterator *)(v2 + 160) = std::unordered_map<std::string,data::FoodQualityType>::find(
                                                                                       &data::enumStrToVal(char const*,data::FoodQualityType &)::m,
                                                                                       (const std::unordered_map<std::string,data::FoodQualityType>::key_type *)(v2 + 320));
    std::string::~string((void *)(v2 + 320));
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 96);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, v2 + 320);
    *(std::unordered_map<std::string,data::FoodQualityType>::iterator *)(v2 + 192) = std::unordered_map<std::string,data::FoodQualityType>::end(&data::enumStrToVal(char const*,data::FoodQualityType &)::m);
    v9 = (char *)(v2 + 192);
    v10 = std::__detail::operator==<std::pair<std::string const,data::FoodQualityType>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::FoodQualityType>,true> *)(v2 + 160),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::FoodQualityType>,true> *)(v2 + 192));
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
        "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
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
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::FoodQualityType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::FoodQualityType>,false,true> *const)(v2 + 160));
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
      "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
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

// Line 71: range 000000001454A0DB-000000001454A0F1
const char *__cdecl data::getDescription(data::FoodQualityType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 76: range 000000001454A0F2-000000001454A2A7
bool __cdecl data::isValidFoodQualityType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::FoodQualityType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::FoodQualityType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidFoodQualityType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getFoodQualityTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::FoodQualityType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::FoodQualityType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getFoodQualityTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::FoodQualityType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::FoodQualityType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::FoodQualityType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::FoodQualityType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::FoodQualityType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 82: range 000000001454A2A8-000000001454A409
bool __cdecl data::isValidFoodQualityTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::FoodQualityType> *v5; // rcx
  const std::unordered_map<std::string,data::FoodQualityType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidFoodQualityTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getFoodQualityTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::FoodQualityType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::FoodQualityType>::end(v5);
  v6 = data::getFoodQualityTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::FoodQualityType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::FoodQualityType>::find(
                                                                                          v6,
                                                                                          name);
  result = std::__detail::operator!=<std::pair<std::string const,data::FoodQualityType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::FoodQualityType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::FoodQualityType>,true> *)(v2 + 64));
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

// Line 87: range 000000001454A40A-000000001454A969
const std::unordered_map<std::string,data::FoodQualityType> *__cdecl data::getFoodQualityTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::FoodQualityType> *i; // r14
  const std::unordered_map<std::string,data::FoodQualityType> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getFoodQualityTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -234753535;
  v3[536862723] = -234556924;
  v3[536862724] = -234556924;
  v3[536862730] = -202116109;
  v3[536862731] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getFoodQualityTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getFoodQualityTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v0);
    *(_DWORD *)(v1 + 96) = 0;
    std::pair<std::string const,data::FoodQualityType>::pair<char const(&)[18],data::FoodQualityType,true>(
      (std::pair<const std::string,data::FoodQualityType> *const)(v1 + 160),
      (const char (*)[18])"FOOD_QUALITY_NONE",
      (data::FoodQualityType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "FOOD_QUALITY_NONE");
    *(_DWORD *)(v1 + 112) = 1;
    std::pair<std::string const,data::FoodQualityType>::pair<char const(&)[21],data::FoodQualityType,true>(
      (std::pair<const std::string,data::FoodQualityType> *const)(v1 + 200),
      (const char (*)[21])"FOOD_QUALITY_STRANGE",
      (data::FoodQualityType *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, "FOOD_QUALITY_STRANGE");
    *(_DWORD *)(v1 + 128) = 2;
    std::pair<std::string const,data::FoodQualityType>::pair<char const(&)[22],data::FoodQualityType,true>(
      (std::pair<const std::string,data::FoodQualityType> *const)(v1 + 240),
      (const char (*)[22])"FOOD_QUALITY_ORDINARY",
      (data::FoodQualityType *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, "FOOD_QUALITY_ORDINARY");
    *(_DWORD *)(v1 + 144) = 3;
    std::pair<std::string const,data::FoodQualityType>::pair<char const(&)[23],data::FoodQualityType,true>(
      (std::pair<const std::string,data::FoodQualityType> *const)(v1 + 280),
      (const char (*)[23])"FOOD_QUALITY_DELICIOUS",
      (data::FoodQualityType *)(v1 + 144));
    std::allocator<std::pair<std::string const,data::FoodQualityType>>::allocator((std::allocator<std::pair<const std::string,data::FoodQualityType> > *const)(v1 + 80));
    std::unordered_map<std::string,data::FoodQualityType>::unordered_map(
      &data::getFoodQualityTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::FoodQualityType> >)__PAIR128__(4LL, v1 + 160),
      0LL,
      (const std::unordered_map<std::string,data::FoodQualityType>::hasher *)(v1 + 48),
      (const std::unordered_map<std::string,data::FoodQualityType>::key_equal *)(v1 + 64),
      (const std::unordered_map<std::string,data::FoodQualityType>::allocator_type *)(v1 + 80));
    __cxa_guard_release(&`guard variable for'data::getFoodQualityTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::FoodQualityType>::~unordered_map,
      &data::getFoodQualityTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::FoodQualityType>>::~allocator((std::allocator<std::pair<const std::string,data::FoodQualityType> > *const)(v1 + 80));
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::FoodQualityType> *)(v1 + 320);
          i != (std::pair<const std::string,data::FoodQualityType> *)(v1 + 160);
          std::pair<std::string const,data::FoodQualityType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getFoodQualityTypeNameMap[abi:cxx11](void)::m;
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

// Line 99: range 000000001454A96A-000000001454B13A
const std::map<data::FoodQualityType,std::pair<std::string,std::string >> *__cdecl data::getFoodQualityTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::FoodQualityType,std::pair<std::string,std::string > > *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getFoodQualityTypeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getFoodQualityTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getFoodQualityTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 64, v0);
    *(_DWORD *)(v1 + 64) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[18],true>(
      (std::pair<std::string,std::string > *const)(v1 + 128),
      (const char (*)[1])byte_1ACFAB80,
      (const char (*)[18])"FOOD_QUALITY_NONE");
    std::pair<data::FoodQualityType const,std::pair<std::string,std::string>>::pair<data::FoodQualityType,true>(
      (std::pair<const data::FoodQualityType,std::pair<std::string,std::string > > *const)(v1 + 512),
      (data::FoodQualityType *)(v1 + 64),
      (const std::pair<std::string,std::string > *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v1 + 64);
    *(_DWORD *)(v1 + 80) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 224),
      (const char (*)[7])byte_1ADA0F20,
      (const char (*)[21])"FOOD_QUALITY_STRANGE");
    std::pair<data::FoodQualityType const,std::pair<std::string,std::string>>::pair<data::FoodQualityType,true>(
      (std::pair<const data::FoodQualityType,std::pair<std::string,std::string > > *const)(v1 + 584),
      (data::FoodQualityType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 224));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[22],true>(
      (std::pair<std::string,std::string > *const)(v1 + 320),
      (const char (*)[7])byte_1ADA0F60,
      (const char (*)[22])"FOOD_QUALITY_ORDINARY");
    std::pair<data::FoodQualityType const,std::pair<std::string,std::string>>::pair<data::FoodQualityType,true>(
      (std::pair<const data::FoodQualityType,std::pair<std::string,std::string > > *const)(v1 + 656),
      (data::FoodQualityType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 320));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 3;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[23],true>(
      (std::pair<std::string,std::string > *const)(v1 + 416),
      (const char (*)[7])byte_1ADA0FA0,
      (const char (*)[23])"FOOD_QUALITY_DELICIOUS");
    std::pair<data::FoodQualityType const,std::pair<std::string,std::string>>::pair<data::FoodQualityType,true>(
      (std::pair<const data::FoodQualityType,std::pair<std::string,std::string > > *const)(v1 + 728),
      (data::FoodQualityType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 416));
    std::allocator<std::pair<data::FoodQualityType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::FoodQualityType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    std::map<data::FoodQualityType,std::pair<std::string,std::string>>::map(
      &data::getFoodQualityTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::FoodQualityType,std::pair<std::string,std::string > > >)__PAIR128__(4LL, v1 + 512),
      (const std::less<data::FoodQualityType> *)(v1 + 32),
      (const std::map<data::FoodQualityType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 48));
    __cxa_guard_release(&`guard variable for'data::getFoodQualityTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::FoodQualityType,std::pair<std::string,std::string>>::~map,
      &data::getFoodQualityTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::FoodQualityType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::FoodQualityType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::FoodQualityType,std::pair<std::string,std::string > > *)(v1 + 800);
          i != (std::pair<const data::FoodQualityType,std::pair<std::string,std::string > > *)(v1 + 512);
          std::pair<data::FoodQualityType const,std::pair<std::string,std::string>>::~pair(i) )
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
  return &data::getFoodQualityTypeEnumMap[abi:cxx11](void)::m;
};

// Line 111: range 000000001454B13B-000000001454B4AE
const char *__fastcall data::enumValToStr(data::ItemUseOp e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::ItemUseOp,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
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
  map = data::getItemUseOpEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::ItemUseOp,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::ItemUseOp,std::pair<std::string,std::string>>::find(
                                                                                                  map,
                                                                                                  (const std::map<data::ItemUseOp,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::ItemUseOp,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::ItemUseOp,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
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
      v7 = (common::milog::MiLogStream *)(v2 + 32);
      LOBYTE(v6) = v9 != 0;
      __asan_report_store4(v2 + 32, v6);
    }
    *(_DWORD *)(v2 + 32) = v8;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    result = "INVALID_ItemUseOp";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 123: range 000000001454B4AF-000000001454BA67
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::ItemUseOp>,false,true>::pointer v10; // rax
  data::ItemUseOp second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::ItemUseOp> *m; // [rsp+18h] [rbp-188h]
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
    m = data::getItemUseOpNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::ItemUseOp>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ItemUseOp>::find(
                                                                                      m,
                                                                                      (const std::unordered_map<std::string,data::ItemUseOp>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::ItemUseOp>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::ItemUseOp>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::ItemUseOp>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ItemUseOp>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ItemUseOp>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
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
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::ItemUseOp>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::ItemUseOp>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
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

// Line 144: range 000000001454BA68-000000001454DE03
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int v5; // eax
  std::pair<const std::string,data::ItemUseOp> *i; // r14
  const char *v7; // rsi
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::ItemUseOp>,false,true>::pointer v11; // rax
  data::ItemUseOp second; // ecx
  char v13; // dl
  unsigned int v14; // ebx
  char v17[3216]; // [rsp+20h] [rbp-C90h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(3168LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "58 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 4 9 <unknown> 128 4 9"
                        " <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unknown> 208 4 9 <unkn"
                        "own> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 4 9 <unknown> 288 4 9 <unknown> 3"
                        "04 4 9 <unknown> 320 4 9 <unknown> 336 4 9 <unknown> 352 4 9 <unknown> 368 4 9 <unknown> 384 4 9"
                        " <unknown> 400 4 9 <unknown> 416 4 9 <unknown> 432 4 9 <unknown> 448 4 9 <unknown> 464 4 9 <unkn"
                        "own> 480 4 9 <unknown> 496 4 9 <unknown> 512 4 9 <unknown> 528 4 9 <unknown> 544 4 9 <unknown> 5"
                        "60 4 9 <unknown> 576 4 9 <unknown> 592 4 9 <unknown> 608 4 9 <unknown> 624 4 9 <unknown> 640 4 9"
                        " <unknown> 656 4 9 <unknown> 672 4 9 <unknown> 688 4 9 <unknown> 704 4 9 <unknown> 720 4 9 <unkn"
                        "own> 736 4 9 <unknown> 752 4 9 <unknown> 768 4 9 <unknown> 784 4 9 <unknown> 800 4 9 <unknown> 8"
                        "16 4 9 <unknown> 832 4 9 <unknown> 848 4 9 <unknown> 864 8 6 it:202 896 8 9 <unknown> 928 8 5 s:"
                        "143 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 <unknown> 1152 1880 9 <unknown>";
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
  v4[536862728] = -234556924;
  v4[536862729] = -234556924;
  v4[536862730] = -234556924;
  v4[536862731] = -234556924;
  v4[536862732] = -234556924;
  v4[536862733] = -234556924;
  v4[536862734] = -234556924;
  v4[536862735] = -234556924;
  v4[536862736] = -234556924;
  v4[536862737] = -234556924;
  v4[536862738] = -234556924;
  v4[536862739] = -234556924;
  v4[536862740] = -234556924;
  v4[536862741] = -234556924;
  v4[536862742] = -234556924;
  v4[536862743] = -234556924;
  v4[536862744] = -234556924;
  v4[536862745] = -234556924;
  v4[536862746] = -234556924;
  v4[536862747] = -218959360;
  v4[536862748] = -218959360;
  v4[536862749] = -218959360;
  v4[536862751] = -218959118;
  v4[536862753] = -218959118;
  v4[536862755] = -218959118;
  v4[536862814] = -218103808;
  v4[536862815] = -202116109;
  v4[536862816] = -202116109;
  v4[536862817] = -202116109;
  v4[536862818] = -202116109;
  *(_QWORD *)(v2 + 928) = s;
  if ( *(_QWORD *)(v2 + 928) )
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::ItemUseOp &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::ItemUseOp &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, e);
      *(_DWORD *)(v2 + 112) = 1;
      std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[13],data::ItemUseOp,true>(
        (std::pair<const std::string,data::ItemUseOp> *const)(v2 + 1152),
        (const char (*)[13])byte_1ADA1540,
        (data::ItemUseOp *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1ADA1540);
      *(_DWORD *)(v2 + 128) = 2;
      std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[13],data::ItemUseOp,true>(
        (std::pair<const std::string,data::ItemUseOp> *const)(v2 + 1192),
        (const char (*)[13])byte_1ADA1580,
        (data::ItemUseOp *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, byte_1ADA1580);
      *(_DWORD *)(v2 + 144) = 3;
      std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[13],data::ItemUseOp,true>(
        (std::pair<const std::string,data::ItemUseOp> *const)(v2 + 1232),
        (const char (*)[13])byte_1ADA15C0,
        (data::ItemUseOp *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, byte_1ADA15C0);
      *(_DWORD *)(v2 + 160) = 4;
      std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[13],data::ItemUseOp,true>(
        (std::pair<const std::string,data::ItemUseOp> *const)(v2 + 1272),
        (const char (*)[13])byte_1ADA1600,
        (data::ItemUseOp *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, byte_1ADA1600);
      *(_DWORD *)(v2 + 176) = 5;
      std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[13],data::ItemUseOp,true>(
        (std::pair<const std::string,data::ItemUseOp> *const)(v2 + 1312),
        (const char (*)[13])byte_1ADA1640,
        (data::ItemUseOp *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, byte_1ADA1640);
      *(_DWORD *)(v2 + 192) = 6;
      std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[19],data::ItemUseOp,true>(
        (std::pair<const std::string,data::ItemUseOp> *const)(v2 + 1352),
        (const char (*)[19])byte_1ADA1680,
        (data::ItemUseOp *)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 208, byte_1ADA1680);
      *(_DWORD *)(v2 + 208) = 7;
      std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[19],data::ItemUseOp,true>(
        (std::pair<const std::string,data::ItemUseOp> *const)(v2 + 1392),
        (const char (*)[19])byte_1ADA16C0,
        (data::ItemUseOp *)(v2 + 208));
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 224, byte_1ADA16C0);
      *(_DWORD *)(v2 + 224) = 8;
      std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[19],data::ItemUseOp,true>(
        (std::pair<const std::string,data::ItemUseOp> *const)(v2 + 1432),
        (const char (*)[19])byte_1ADA1700,
        (data::ItemUseOp *)(v2 + 224));
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 240, byte_1ADA1700);
      *(_DWORD *)(v2 + 240) = 9;
      std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[19],data::ItemUseOp,true>(
        (std::pair<const std::string,data::ItemUseOp> *const)(v2 + 1472),
        (const char (*)[19])byte_1ADA1740,
        (data::ItemUseOp *)(v2 + 240));
      if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 256, byte_1ADA1740);
      *(_DWORD *)(v2 + 256) = 10;
      std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[19],data::ItemUseOp,true>(
        (std::pair<const std::string,data::ItemUseOp> *const)(v2 + 1512),
        (const char (*)[19])byte_1ADA1780,
        (data::ItemUseOp *)(v2 + 256));
      if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 272, byte_1ADA1780);
      *(_DWORD *)(v2 + 272) = 11;
      std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[19],data::ItemUseOp,true>(
        (std::pair<const std::string,data::ItemUseOp> *const)(v2 + 1552),
        (const char (*)[19])byte_1ADA17C0,
        (data::ItemUseOp *)(v2 + 272));
      if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 288, byte_1ADA17C0);
      *(_DWORD *)(v2 + 288) = 12;
      std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[22],data::ItemUseOp,true>(
        (std::pair<const std::string,data::ItemUseOp> *const)(v2 + 1592),
        (const char (*)[22])byte_1ADA1800,
        (data::ItemUseOp *)(v2 + 288));
      if ( *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 304, byte_1ADA1800);
      *(_DWORD *)(v2 + 304) = 13;
      std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[37],data::ItemUseOp,true>(
        (std::pair<const std::string,data::ItemUseOp> *const)(v2 + 1632),
        (const char (*)[37])byte_1ADA1840,
        (data::ItemUseOp *)(v2 + 304));
      if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 320, byte_1ADA1840);
      *(_DWORD *)(v2 + 320) = 14;
      std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[19],data::ItemUseOp,true>(
        (std::pair<const std::string,data::ItemUseOp> *const)(v2 + 1672),
        (const char (*)[19])byte_1ADA18A0,
        (data::ItemUseOp *)(v2 + 320));
      if ( *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 336, byte_1ADA18A0);
      *(_DWORD *)(v2 + 336) = 15;
      std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[12],data::ItemUseOp,true>(
        (std::pair<const std::string,data::ItemUseOp> *const)(v2 + 1712),
        (const char (*)[12])byte_1ADA18E0,
        (data::ItemUseOp *)(v2 + 336));
      if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 352, byte_1ADA18E0);
      *(_DWORD *)(v2 + 352) = 16;
      std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[12],data::ItemUseOp,true>(
        (std::pair<const std::string,data::ItemUseOp> *const)(v2 + 1752),
        (const char (*)[12])byte_1ADA1920,
        (data::ItemUseOp *)(v2 + 352));
      if ( *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 368, byte_1ADA1920);
      *(_DWORD *)(v2 + 368) = 17;
      std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[13],data::ItemUseOp,true>(
        (std::pair<const std::string,data::ItemUseOp> *const)(v2 + 1792),
        (const char (*)[13])byte_1ADA1960,
        (data::ItemUseOp *)(v2 + 368));
      if ( *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 384, byte_1ADA1960);
      *(_DWORD *)(v2 + 384) = 20;
      std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[19],data::ItemUseOp,true>(
        (std::pair<const std::string,data::ItemUseOp> *const)(v2 + 1832),
        (const char (*)[19])byte_1ADA19A0,
        (data::ItemUseOp *)(v2 + 384));
      if ( *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 400, byte_1ADA19A0);
      *(_DWORD *)(v2 + 400) = 24;
      std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[13],data::ItemUseOp,true>(
        (std::pair<const std::string,data::ItemUseOp> *const)(v2 + 1872),
        (const char (*)[13])byte_1ADA19E0,
        (data::ItemUseOp *)(v2 + 400));
      if ( *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 416, byte_1ADA19E0);
      *(_DWORD *)(v2 + 416) = 25;
      std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[13],data::ItemUseOp,true>(
        (std::pair<const std::string,data::ItemUseOp> *const)(v2 + 1912),
        (const char (*)[13])byte_1ADA1A20,
        (data::ItemUseOp *)(v2 + 416));
      if ( *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 432, byte_1ADA1A20);
      *(_DWORD *)(v2 + 432) = 26;
      std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[19],data::ItemUseOp,true>(
        (std::pair<const std::string,data::ItemUseOp> *const)(v2 + 1952),
        (const char (*)[19])byte_1ADA1A60,
        (data::ItemUseOp *)(v2 + 432));
      if ( *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 448, byte_1ADA1A60);
      *(_DWORD *)(v2 + 448) = 27;
      std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[19],data::ItemUseOp,true>(
        (std::pair<const std::string,data::ItemUseOp> *const)(v2 + 1992),
        (const char (*)[19])byte_1ADA1AA0,
        (data::ItemUseOp *)(v2 + 448));
      if ( *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 464, byte_1ADA1AA0);
      *(_DWORD *)(v2 + 464) = 28;
      std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[16],data::ItemUseOp,true>(
        (std::pair<const std::string,data::ItemUseOp> *const)(v2 + 2032),
        (const char (*)[16])byte_1ADA1AE0,
        (data::ItemUseOp *)(v2 + 464));
      if ( *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 480, byte_1ADA1AE0);
      *(_DWORD *)(v2 + 480) = 29;
      std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[13],data::ItemUseOp,true>(
        (std::pair<const std::string,data::ItemUseOp> *const)(v2 + 2072),
        (const char (*)[13])byte_1ADA1B20,
        (data::ItemUseOp *)(v2 + 480));
      if ( *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 496, byte_1ADA1B20);
      *(_DWORD *)(v2 + 496) = 30;
      std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[25],data::ItemUseOp,true>(
        (std::pair<const std::string,data::ItemUseOp> *const)(v2 + 2112),
        (const char (*)[25])byte_1ADA1B60,
        (data::ItemUseOp *)(v2 + 496));
      if ( *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 512, byte_1ADA1B60);
      *(_DWORD *)(v2 + 512) = 31;
      std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[19],data::ItemUseOp,true>(
        (std::pair<const std::string,data::ItemUseOp> *const)(v2 + 2152),
        (const char (*)[19])byte_1ADA1BA0,
        (data::ItemUseOp *)(v2 + 512));
      if ( *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 528, byte_1ADA1BA0);
      *(_DWORD *)(v2 + 528) = 32;
      std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[13],data::ItemUseOp,true>(
        (std::pair<const std::string,data::ItemUseOp> *const)(v2 + 2192),
        (const char (*)[13])byte_1ADA1BE0,
        (data::ItemUseOp *)(v2 + 528));
      if ( *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 544, byte_1ADA1BE0);
      *(_DWORD *)(v2 + 544) = 33;
      std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[13],data::ItemUseOp,true>(
        (std::pair<const std::string,data::ItemUseOp> *const)(v2 + 2232),
        (const char (*)[13])byte_1ADA1C20,
        (data::ItemUseOp *)(v2 + 544));
      if ( *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 560, byte_1ADA1C20);
      *(_DWORD *)(v2 + 560) = 34;
      std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[13],data::ItemUseOp,true>(
        (std::pair<const std::string,data::ItemUseOp> *const)(v2 + 2272),
        (const char (*)[13])byte_1ADA1C60,
        (data::ItemUseOp *)(v2 + 560));
      if ( *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 576, byte_1ADA1C60);
      *(_DWORD *)(v2 + 576) = 35;
      std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[19],data::ItemUseOp,true>(
        (std::pair<const std::string,data::ItemUseOp> *const)(v2 + 2312),
        (const char (*)[19])byte_1ADA1CA0,
        (data::ItemUseOp *)(v2 + 576));
      if ( *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 592, byte_1ADA1CA0);
      *(_DWORD *)(v2 + 592) = 36;
      std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[22],data::ItemUseOp,true>(
        (std::pair<const std::string,data::ItemUseOp> *const)(v2 + 2352),
        (const char (*)[22])byte_1ADA1CE0,
        (data::ItemUseOp *)(v2 + 592));
      if ( *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 608, byte_1ADA1CE0);
      *(_DWORD *)(v2 + 608) = 37;
      std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[22],data::ItemUseOp,true>(
        (std::pair<const std::string,data::ItemUseOp> *const)(v2 + 2392),
        (const char (*)[22])byte_1ADA1D20,
        (data::ItemUseOp *)(v2 + 608));
      if ( *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 624, byte_1ADA1D20);
      *(_DWORD *)(v2 + 624) = 38;
      std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[19],data::ItemUseOp,true>(
        (std::pair<const std::string,data::ItemUseOp> *const)(v2 + 2432),
        (const char (*)[19])byte_1ADA1D60,
        (data::ItemUseOp *)(v2 + 624));
      if ( *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 640, byte_1ADA1D60);
      *(_DWORD *)(v2 + 640) = 39;
      std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[19],data::ItemUseOp,true>(
        (std::pair<const std::string,data::ItemUseOp> *const)(v2 + 2472),
        (const char (*)[19])byte_1ADA1DA0,
        (data::ItemUseOp *)(v2 + 640));
      if ( *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 656, byte_1ADA1DA0);
      *(_DWORD *)(v2 + 656) = 40;
      std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[23],data::ItemUseOp,true>(
        (std::pair<const std::string,data::ItemUseOp> *const)(v2 + 2512),
        (const char (*)[23])byte_1ADA1DE0,
        (data::ItemUseOp *)(v2 + 656));
      if ( *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 672, byte_1ADA1DE0);
      *(_DWORD *)(v2 + 672) = 41;
      std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[13],data::ItemUseOp,true>(
        (std::pair<const std::string,data::ItemUseOp> *const)(v2 + 2552),
        (const char (*)[13])byte_1ADA1E20,
        (data::ItemUseOp *)(v2 + 672));
      if ( *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 688, byte_1ADA1E20);
      *(_DWORD *)(v2 + 688) = 42;
      std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[34],data::ItemUseOp,true>(
        (std::pair<const std::string,data::ItemUseOp> *const)(v2 + 2592),
        (const char (*)[34])byte_1ADA1E60,
        (data::ItemUseOp *)(v2 + 688));
      if ( *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 704, byte_1ADA1E60);
      *(_DWORD *)(v2 + 704) = 43;
      std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[13],data::ItemUseOp,true>(
        (std::pair<const std::string,data::ItemUseOp> *const)(v2 + 2632),
        (const char (*)[13])byte_1ADA1EC0,
        (data::ItemUseOp *)(v2 + 704));
      if ( *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 720, byte_1ADA1EC0);
      *(_DWORD *)(v2 + 720) = 44;
      std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[19],data::ItemUseOp,true>(
        (std::pair<const std::string,data::ItemUseOp> *const)(v2 + 2672),
        (const char (*)[19])byte_1ADA1F00,
        (data::ItemUseOp *)(v2 + 720));
      if ( *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 736, byte_1ADA1F00);
      *(_DWORD *)(v2 + 736) = 45;
      std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[16],data::ItemUseOp,true>(
        (std::pair<const std::string,data::ItemUseOp> *const)(v2 + 2712),
        (const char (*)[16])byte_1ADA1F40,
        (data::ItemUseOp *)(v2 + 736));
      if ( *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 752, byte_1ADA1F40);
      *(_DWORD *)(v2 + 752) = 46;
      std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[28],data::ItemUseOp,true>(
        (std::pair<const std::string,data::ItemUseOp> *const)(v2 + 2752),
        (const char (*)[28])byte_1ADA1F80,
        (data::ItemUseOp *)(v2 + 752));
      if ( *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 768, byte_1ADA1F80);
      *(_DWORD *)(v2 + 768) = 47;
      std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[25],data::ItemUseOp,true>(
        (std::pair<const std::string,data::ItemUseOp> *const)(v2 + 2792),
        (const char (*)[25])byte_1ADA1FC0,
        (data::ItemUseOp *)(v2 + 768));
      if ( *(_BYTE *)(((v2 + 784) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 784) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 784, byte_1ADA1FC0);
      *(_DWORD *)(v2 + 784) = 48;
      std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[25],data::ItemUseOp,true>(
        (std::pair<const std::string,data::ItemUseOp> *const)(v2 + 2832),
        (const char (*)[25])byte_1ADA2000,
        (data::ItemUseOp *)(v2 + 784));
      if ( *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 800, byte_1ADA2000);
      *(_DWORD *)(v2 + 800) = 49;
      std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[25],data::ItemUseOp,true>(
        (std::pair<const std::string,data::ItemUseOp> *const)(v2 + 2872),
        (const char (*)[25])byte_1ADA2040,
        (data::ItemUseOp *)(v2 + 800));
      if ( *(_BYTE *)(((v2 + 816) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 816) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 816, byte_1ADA2040);
      *(_DWORD *)(v2 + 816) = 50;
      std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[25],data::ItemUseOp,true>(
        (std::pair<const std::string,data::ItemUseOp> *const)(v2 + 2912),
        (const char (*)[25])byte_1ADA2080,
        (data::ItemUseOp *)(v2 + 816));
      if ( *(_BYTE *)(((v2 + 832) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 832) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 832, byte_1ADA2080);
      *(_DWORD *)(v2 + 832) = 51;
      std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[25],data::ItemUseOp,true>(
        (std::pair<const std::string,data::ItemUseOp> *const)(v2 + 2952),
        (const char (*)[25])byte_1ADA20C0,
        (data::ItemUseOp *)(v2 + 832));
      if ( *(_BYTE *)(((v2 + 848) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 848) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 848, byte_1ADA20C0);
      *(_DWORD *)(v2 + 848) = 52;
      std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[19],data::ItemUseOp,true>(
        (std::pair<const std::string,data::ItemUseOp> *const)(v2 + 2992),
        (const char (*)[19])byte_1ADA2100,
        (data::ItemUseOp *)(v2 + 848));
      std::allocator<std::pair<std::string const,data::ItemUseOp>>::allocator((std::allocator<std::pair<const std::string,data::ItemUseOp> > *const)(v2 + 80));
      std::unordered_map<std::string,data::ItemUseOp>::unordered_map(
        &data::enumStrToVal(char const*,data::ItemUseOp &)::m,
        (std::initializer_list<std::pair<const std::string,data::ItemUseOp> >)__PAIR128__(47LL, v2 + 1152),
        0LL,
        (const std::unordered_map<std::string,data::ItemUseOp>::hasher *)(v2 + 48),
        (const std::unordered_map<std::string,data::ItemUseOp>::key_equal *)(v2 + 64),
        (const std::unordered_map<std::string,data::ItemUseOp>::allocator_type *)(v2 + 80));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::ItemUseOp &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::ItemUseOp>::~unordered_map,
        &data::enumStrToVal(char const*,data::ItemUseOp &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::ItemUseOp>>::~allocator((std::allocator<std::pair<const std::string,data::ItemUseOp> > *const)(v2 + 80));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::ItemUseOp> *)(v2 + 3032);
            i != (std::pair<const std::string,data::ItemUseOp> *)(v2 + 1152);
            std::pair<std::string const,data::ItemUseOp>::~pair(i) )
      {
        --i;
      }
      __asan_poison_stack_memory(v2 + 1152, 1880LL);
      *(_BYTE *)(((v2 + 848) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 832) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 816) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 784) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = -8;
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
    }
    *(_BYTE *)(((v2 + 864) >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 96);
    v7 = *(const char **)(v2 + 928);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 1024),
      v7,
      (const std::allocator<char> *)(v2 + 96));
    if ( *(_BYTE *)(((v2 + 864) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 864, v7);
    *(std::unordered_map<std::string,data::ItemUseOp>::iterator *)(v2 + 864) = std::unordered_map<std::string,data::ItemUseOp>::find(
                                                                                 &data::enumStrToVal(char const*,data::ItemUseOp &)::m,
                                                                                 (const std::unordered_map<std::string,data::ItemUseOp>::key_type *)(v2 + 1024));
    std::string::~string((void *)(v2 + 1024));
    *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 96);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 896) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 896) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 896, v2 + 1024);
    *(std::unordered_map<std::string,data::ItemUseOp>::iterator *)(v2 + 896) = std::unordered_map<std::string,data::ItemUseOp>::end(&data::enumStrToVal(char const*,data::ItemUseOp &)::m);
    v8 = (char *)(v2 + 896);
    v9 = std::__detail::operator==<std::pair<std::string const,data::ItemUseOp>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ItemUseOp>,true> *)(v2 + 864),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ItemUseOp>,true> *)(v2 + 896));
    *(_BYTE *)(((v2 + 896) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
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
        3u,
        "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
        "enumStrToVal",
        205);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 1088),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v10, (const char *const *)(v2 + 928));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1088));
      v5 = -1;
    }
    else
    {
      v11 = std::__detail::_Node_iterator<std::pair<std::string const,data::ItemUseOp>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::ItemUseOp>,false,true> *const)(v2 + 864));
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
    if ( *(char *)(((v2 + 960) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 991) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 991) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 960, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 960),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
      "enumStrToVal",
      147);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
      (common::milog::MiLogStream *const)(v2 + 960),
      (const char (*)[14])"s is nullptr!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 960));
    v5 = -1;
  }
  v14 = v5;
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 120) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF807C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8084) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF808C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8184) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862757) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147451020 - (((_DWORD)v4 + 2147451028) & 0xFFFFFFF8) + 256) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 3168LL, v17);
  }
  return v14;
};

// Line 214: range 000000001454DE04-000000001454DE1A
const char *__cdecl data::getDescription(data::ItemUseOp e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 219: range 000000001454DE1B-000000001454DFD0
bool __cdecl data::isValidItemUseOp(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::ItemUseOp,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::ItemUseOp,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:220 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidItemUseOp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getItemUseOpEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::ItemUseOp,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::ItemUseOp,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getItemUseOpEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::ItemUseOp,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::ItemUseOp,std::pair<std::string,std::string>>::find(
                                                                                                  v6,
                                                                                                  (const std::map<data::ItemUseOp,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 225: range 000000001454DFD1-000000001454E132
bool __cdecl data::isValidItemUseOpName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::ItemUseOp> *v5; // rcx
  const std::unordered_map<std::string,data::ItemUseOp> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidItemUseOpName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getItemUseOpNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::ItemUseOp>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ItemUseOp>::end(v5);
  v6 = data::getItemUseOpNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::ItemUseOp>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::ItemUseOp>::find(
                                                                                    v6,
                                                                                    name);
  result = std::__detail::operator!=<std::pair<std::string const,data::ItemUseOp>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ItemUseOp>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ItemUseOp>,true> *)(v2 + 64));
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

// Line 230: range 000000001454E133-000000001454FC5E
const std::unordered_map<std::string,data::ItemUseOp> *__cdecl data::getItemUseOpNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::ItemUseOp> *i; // r14
  char v6[2960]; // [rsp+10h] [rbp-B90h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_6(2912LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "52 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 4 9"
                        " <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unknown> 208 4 9 <unkn"
                        "own> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 4 9 <unknown> 288 4 9 <unknown> 3"
                        "04 4 9 <unknown> 320 4 9 <unknown> 336 4 9 <unknown> 352 4 9 <unknown> 368 4 9 <unknown> 384 4 9"
                        " <unknown> 400 4 9 <unknown> 416 4 9 <unknown> 432 4 9 <unknown> 448 4 9 <unknown> 464 4 9 <unkn"
                        "own> 480 4 9 <unknown> 496 4 9 <unknown> 512 4 9 <unknown> 528 4 9 <unknown> 544 4 9 <unknown> 5"
                        "60 4 9 <unknown> 576 4 9 <unknown> 592 4 9 <unknown> 608 4 9 <unknown> 624 4 9 <unknown> 640 4 9"
                        " <unknown> 656 4 9 <unknown> 672 4 9 <unknown> 688 4 9 <unknown> 704 4 9 <unknown> 720 4 9 <unkn"
                        "own> 736 4 9 <unknown> 752 4 9 <unknown> 768 4 9 <unknown> 784 4 9 <unknown> 800 4 9 <unknown> 8"
                        "16 4 9 <unknown> 832 4 9 <unknown> 848 4 9 <unknown> 864 1920 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::getItemUseOpNameMap[abi:cxx11];
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
  v3[536862733] = -234556924;
  v3[536862734] = -234556924;
  v3[536862735] = -234556924;
  v3[536862736] = -234556924;
  v3[536862737] = -234556924;
  v3[536862738] = -234556924;
  v3[536862739] = -234556924;
  v3[536862740] = -234556924;
  v3[536862741] = -234556924;
  v3[536862742] = -234556924;
  v3[536862743] = -234556924;
  v3[536862744] = -234556924;
  v3[536862745] = -234556924;
  v3[536862746] = -234556924;
  v3[536862807] = -202116109;
  v3[536862808] = -202116109;
  v3[536862809] = -202116109;
  v3[536862810] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getItemUseOpNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getItemUseOpNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v0);
    *(_DWORD *)(v1 + 96) = 0;
    std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[14],data::ItemUseOp,true>(
      (std::pair<const std::string,data::ItemUseOp> *const)(v1 + 864),
      (const char (*)[14])"ITEM_USE_NONE",
      (data::ItemUseOp *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "ITEM_USE_NONE");
    *(_DWORD *)(v1 + 112) = 1;
    std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[22],data::ItemUseOp,true>(
      (std::pair<const std::string,data::ItemUseOp> *const)(v1 + 904),
      (const char (*)[22])"ITEM_USE_ACCEPT_QUEST",
      (data::ItemUseOp *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, "ITEM_USE_ACCEPT_QUEST");
    *(_DWORD *)(v1 + 128) = 2;
    std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[25],data::ItemUseOp,true>(
      (std::pair<const std::string,data::ItemUseOp> *const)(v1 + 944),
      (const char (*)[25])"ITEM_USE_TRIGGER_ABILITY",
      (data::ItemUseOp *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, "ITEM_USE_TRIGGER_ABILITY");
    *(_DWORD *)(v1 + 144) = 3;
    std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[21],data::ItemUseOp,true>(
      (std::pair<const std::string,data::ItemUseOp> *const)(v1 + 984),
      (const char (*)[21])"ITEM_USE_GAIN_AVATAR",
      (data::ItemUseOp *)(v1 + 144));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, "ITEM_USE_GAIN_AVATAR");
    *(_DWORD *)(v1 + 160) = 4;
    std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[17],data::ItemUseOp,true>(
      (std::pair<const std::string,data::ItemUseOp> *const)(v1 + 1024),
      (const char (*)[17])"ITEM_USE_ADD_EXP",
      (data::ItemUseOp *)(v1 + 160));
    if ( *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 176, "ITEM_USE_ADD_EXP");
    *(_DWORD *)(v1 + 176) = 5;
    std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[23],data::ItemUseOp,true>(
      (std::pair<const std::string,data::ItemUseOp> *const)(v1 + 1064),
      (const char (*)[23])"ITEM_USE_RELIVE_AVATAR",
      (data::ItemUseOp *)(v1 + 176));
    if ( *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 192, "ITEM_USE_RELIVE_AVATAR");
    *(_DWORD *)(v1 + 192) = 6;
    std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[30],data::ItemUseOp,true>(
      (std::pair<const std::string,data::ItemUseOp> *const)(v1 + 1104),
      (const char (*)[30])"ITEM_USE_ADD_BIG_TALENT_POINT",
      (data::ItemUseOp *)(v1 + 192));
    if ( *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 208, "ITEM_USE_ADD_BIG_TALENT_POINT");
    *(_DWORD *)(v1 + 208) = 7;
    std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[29],data::ItemUseOp,true>(
      (std::pair<const std::string,data::ItemUseOp> *const)(v1 + 1144),
      (const char (*)[29])"ITEM_USE_ADD_PERSIST_STAMINA",
      (data::ItemUseOp *)(v1 + 208));
    if ( *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 224, "ITEM_USE_ADD_PERSIST_STAMINA");
    *(_DWORD *)(v1 + 224) = 8;
    std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[31],data::ItemUseOp,true>(
      (std::pair<const std::string,data::ItemUseOp> *const)(v1 + 1184),
      (const char (*)[31])"ITEM_USE_ADD_TEMPORARY_STAMINA",
      (data::ItemUseOp *)(v1 + 224));
    if ( *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 240, "ITEM_USE_ADD_TEMPORARY_STAMINA");
    *(_DWORD *)(v1 + 240) = 9;
    std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[25],data::ItemUseOp,true>(
      (std::pair<const std::string,data::ItemUseOp> *const)(v1 + 1224),
      (const char (*)[25])"ITEM_USE_ADD_CUR_STAMINA",
      (data::ItemUseOp *)(v1 + 240));
    if ( *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 256, "ITEM_USE_ADD_CUR_STAMINA");
    *(_DWORD *)(v1 + 256) = 10;
    std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[20],data::ItemUseOp,true>(
      (std::pair<const std::string,data::ItemUseOp> *const)(v1 + 1264),
      (const char (*)[20])"ITEM_USE_ADD_CUR_HP",
      (data::ItemUseOp *)(v1 + 256));
    if ( *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 272, "ITEM_USE_ADD_CUR_HP");
    *(_DWORD *)(v1 + 272) = 11;
    std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[25],data::ItemUseOp,true>(
      (std::pair<const std::string,data::ItemUseOp> *const)(v1 + 1304),
      (const char (*)[25])"ITEM_USE_ADD_ELEM_ENERGY",
      (data::ItemUseOp *)(v1 + 272));
    if ( *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 288, "ITEM_USE_ADD_ELEM_ENERGY");
    *(_DWORD *)(v1 + 288) = 12;
    std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[24],data::ItemUseOp,true>(
      (std::pair<const std::string,data::ItemUseOp> *const)(v1 + 1344),
      (const char (*)[24])"ITEM_USE_ADD_ALL_ENERGY",
      (data::ItemUseOp *)(v1 + 288));
    if ( *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 304, "ITEM_USE_ADD_ALL_ENERGY");
    *(_DWORD *)(v1 + 304) = 13;
    std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[31],data::ItemUseOp,true>(
      (std::pair<const std::string,data::ItemUseOp> *const)(v1 + 1384),
      (const char (*)[31])"ITEM_USE_ADD_DUNGEON_COND_TIME",
      (data::ItemUseOp *)(v1 + 304));
    if ( *(_BYTE *)(((v1 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 320) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 320, "ITEM_USE_ADD_DUNGEON_COND_TIME");
    *(_DWORD *)(v1 + 320) = 14;
    std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[24],data::ItemUseOp,true>(
      (std::pair<const std::string,data::ItemUseOp> *const)(v1 + 1424),
      (const char (*)[24])"ITEM_USE_ADD_WEAPON_EXP",
      (data::ItemUseOp *)(v1 + 320));
    if ( *(_BYTE *)(((v1 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 336) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 336, "ITEM_USE_ADD_WEAPON_EXP");
    *(_DWORD *)(v1 + 336) = 15;
    std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[25],data::ItemUseOp,true>(
      (std::pair<const std::string,data::ItemUseOp> *const)(v1 + 1464),
      (const char (*)[25])"ITEM_USE_ADD_SERVER_BUFF",
      (data::ItemUseOp *)(v1 + 336));
    if ( *(_BYTE *)(((v1 + 352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 352) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 352, "ITEM_USE_ADD_SERVER_BUFF");
    *(_DWORD *)(v1 + 352) = 16;
    std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[25],data::ItemUseOp,true>(
      (std::pair<const std::string,data::ItemUseOp> *const)(v1 + 1504),
      (const char (*)[25])"ITEM_USE_DEL_SERVER_BUFF",
      (data::ItemUseOp *)(v1 + 352));
    if ( *(_BYTE *)(((v1 + 368) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 368) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 368, "ITEM_USE_DEL_SERVER_BUFF");
    *(_DWORD *)(v1 + 368) = 17;
    std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[28],data::ItemUseOp,true>(
      (std::pair<const std::string,data::ItemUseOp> *const)(v1 + 1544),
      (const char (*)[28])"ITEM_USE_UNLOCK_COOK_RECIPE",
      (data::ItemUseOp *)(v1 + 368));
    if ( *(_BYTE *)(((v1 + 384) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 384) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 384, "ITEM_USE_UNLOCK_COOK_RECIPE");
    *(_DWORD *)(v1 + 384) = 20;
    std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[27],data::ItemUseOp,true>(
      (std::pair<const std::string,data::ItemUseOp> *const)(v1 + 1584),
      (const char (*)[27])"ITEM_USE_OPEN_RANDOM_CHEST",
      (data::ItemUseOp *)(v1 + 384));
    if ( *(_BYTE *)(((v1 + 400) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 400) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 400, "ITEM_USE_OPEN_RANDOM_CHEST");
    *(_DWORD *)(v1 + 400) = 24;
    std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[21],data::ItemUseOp,true>(
      (std::pair<const std::string,data::ItemUseOp> *const)(v1 + 1624),
      (const char (*)[21])"ITEM_USE_MAKE_GADGET",
      (data::ItemUseOp *)(v1 + 400));
    if ( *(_BYTE *)(((v1 + 416) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 416) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 416, "ITEM_USE_MAKE_GADGET");
    *(_DWORD *)(v1 + 416) = 25;
    std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[18],data::ItemUseOp,true>(
      (std::pair<const std::string,data::ItemUseOp> *const)(v1 + 1664),
      (const char (*)[18])"ITEM_USE_ADD_ITEM",
      (data::ItemUseOp *)(v1 + 416));
    if ( *(_BYTE *)(((v1 + 432) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 432) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 432, "ITEM_USE_ADD_ITEM");
    *(_DWORD *)(v1 + 432) = 26;
    std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[29],data::ItemUseOp,true>(
      (std::pair<const std::string,data::ItemUseOp> *const)(v1 + 1704),
      (const char (*)[29])"ITEM_USE_GRANT_SELECT_REWARD",
      (data::ItemUseOp *)(v1 + 432));
    if ( *(_BYTE *)(((v1 + 448) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 448) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 448, "ITEM_USE_GRANT_SELECT_REWARD");
    *(_DWORD *)(v1 + 448) = 27;
    std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[25],data::ItemUseOp,true>(
      (std::pair<const std::string,data::ItemUseOp> *const)(v1 + 1744),
      (const char (*)[25])"ITEM_USE_ADD_SELECT_ITEM",
      (data::ItemUseOp *)(v1 + 448));
    if ( *(_BYTE *)(((v1 + 464) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 464) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 464, "ITEM_USE_ADD_SELECT_ITEM");
    *(_DWORD *)(v1 + 464) = 28;
    std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[23],data::ItemUseOp,true>(
      (std::pair<const std::string,data::ItemUseOp> *const)(v1 + 1784),
      (const char (*)[23])"ITEM_USE_GAIN_FLYCLOAK",
      (data::ItemUseOp *)(v1 + 464));
    if ( *(_BYTE *)(((v1 + 480) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 480) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 480, "ITEM_USE_GAIN_FLYCLOAK");
    *(_DWORD *)(v1 + 480) = 29;
    std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[24],data::ItemUseOp,true>(
      (std::pair<const std::string,data::ItemUseOp> *const)(v1 + 1824),
      (const char (*)[24])"ITEM_USE_GAIN_NAME_CARD",
      (data::ItemUseOp *)(v1 + 480));
    if ( *(_BYTE *)(((v1 + 496) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 496) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 496, "ITEM_USE_GAIN_NAME_CARD");
    *(_DWORD *)(v1 + 496) = 30;
    std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[40],data::ItemUseOp,true>(
      (std::pair<const std::string,data::ItemUseOp> *const)(v1 + 1864),
      (const char (*)[40])"ITEM_USE_UNLOCK_PAID_BATTLE_PASS_NORMAL",
      (data::ItemUseOp *)(v1 + 496));
    if ( *(_BYTE *)(((v1 + 512) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 512) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 512, "ITEM_USE_UNLOCK_PAID_BATTLE_PASS_NORMAL");
    *(_DWORD *)(v1 + 512) = 31;
    std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[27],data::ItemUseOp,true>(
      (std::pair<const std::string,data::ItemUseOp> *const)(v1 + 1904),
      (const char (*)[27])"ITEM_USE_GAIN_CARD_PRODUCT",
      (data::ItemUseOp *)(v1 + 512));
    if ( *(_BYTE *)(((v1 + 528) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 528) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 528, "ITEM_USE_GAIN_CARD_PRODUCT");
    *(_DWORD *)(v1 + 528) = 32;
    std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[22],data::ItemUseOp,true>(
      (std::pair<const std::string,data::ItemUseOp> *const)(v1 + 1944),
      (const char (*)[22])"ITEM_USE_UNLOCK_FORGE",
      (data::ItemUseOp *)(v1 + 528));
    if ( *(_BYTE *)(((v1 + 544) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 544) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 544, "ITEM_USE_UNLOCK_FORGE");
    *(_DWORD *)(v1 + 544) = 33;
    std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[24],data::ItemUseOp,true>(
      (std::pair<const std::string,data::ItemUseOp> *const)(v1 + 1984),
      (const char (*)[24])"ITEM_USE_UNLOCK_COMBINE",
      (data::ItemUseOp *)(v1 + 544));
    if ( *(_BYTE *)(((v1 + 560) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 560) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 560, "ITEM_USE_UNLOCK_COMBINE");
    *(_DWORD *)(v1 + 560) = 34;
    std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[22],data::ItemUseOp,true>(
      (std::pair<const std::string,data::ItemUseOp> *const)(v1 + 2024),
      (const char (*)[22])"ITEM_USE_UNLOCK_CODEX",
      (data::ItemUseOp *)(v1 + 560));
    if ( *(_BYTE *)(((v1 + 576) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 576) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 576, "ITEM_USE_UNLOCK_CODEX");
    *(_DWORD *)(v1 + 576) = 35;
    std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[27],data::ItemUseOp,true>(
      (std::pair<const std::string,data::ItemUseOp> *const)(v1 + 2064),
      (const char (*)[27])"ITEM_USE_CHEST_SELECT_ITEM",
      (data::ItemUseOp *)(v1 + 576));
    if ( *(_BYTE *)(((v1 + 592) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 592) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 592, "ITEM_USE_CHEST_SELECT_ITEM");
    *(_DWORD *)(v1 + 592) = 36;
    std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[33],data::ItemUseOp,true>(
      (std::pair<const std::string,data::ItemUseOp> *const)(v1 + 2104),
      (const char (*)[33])"ITEM_USE_GAIN_RESIN_CARD_PRODUCT",
      (data::ItemUseOp *)(v1 + 592));
    if ( *(_BYTE *)(((v1 + 608) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 608) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 608, "ITEM_USE_GAIN_RESIN_CARD_PRODUCT");
    *(_DWORD *)(v1 + 608) = 37;
    std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[27],data::ItemUseOp,true>(
      (std::pair<const std::string,data::ItemUseOp> *const)(v1 + 2144),
      (const char (*)[27])"ITEM_USE_ADD_RELIQUARY_EXP",
      (data::ItemUseOp *)(v1 + 608));
    if ( *(_BYTE *)(((v1 + 624) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 624) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 624, "ITEM_USE_ADD_RELIQUARY_EXP");
    *(_DWORD *)(v1 + 624) = 38;
    std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[34],data::ItemUseOp,true>(
      (std::pair<const std::string,data::ItemUseOp> *const)(v1 + 2184),
      (const char (*)[34])"ITEM_USE_UNLOCK_FURNITURE_FORMULA",
      (data::ItemUseOp *)(v1 + 624));
    if ( *(_BYTE *)(((v1 + 640) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 640) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 640, "ITEM_USE_UNLOCK_FURNITURE_FORMULA");
    *(_DWORD *)(v1 + 640) = 39;
    std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[32],data::ItemUseOp,true>(
      (std::pair<const std::string,data::ItemUseOp> *const)(v1 + 2224),
      (const char (*)[32])"ITEM_USE_UNLOCK_FURNITURE_SUITE",
      (data::ItemUseOp *)(v1 + 640));
    if ( *(_BYTE *)(((v1 + 656) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 656) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 656, "ITEM_USE_UNLOCK_FURNITURE_SUITE");
    *(_DWORD *)(v1 + 656) = 40;
    std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[34],data::ItemUseOp,true>(
      (std::pair<const std::string,data::ItemUseOp> *const)(v1 + 2264),
      (const char (*)[34])"ITEM_USE_ADD_CHANNELLER_SLAB_BUFF",
      (data::ItemUseOp *)(v1 + 656));
    if ( *(_BYTE *)(((v1 + 672) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 672) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 672, "ITEM_USE_ADD_CHANNELLER_SLAB_BUFF");
    *(_DWORD *)(v1 + 672) = 41;
    std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[22],data::ItemUseOp,true>(
      (std::pair<const std::string,data::ItemUseOp> *const)(v1 + 2304),
      (const char (*)[22])"ITEM_USE_GAIN_COSTUME",
      (data::ItemUseOp *)(v1 + 672));
    if ( *(_BYTE *)(((v1 + 688) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 688) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 688, "ITEM_USE_GAIN_COSTUME");
    *(_DWORD *)(v1 + 688) = 42;
    std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[48],data::ItemUseOp,true>(
      (std::pair<const std::string,data::ItemUseOp> *const)(v1 + 2344),
      (const char (*)[48])"ITEM_USE_ADD_TREASURE_MAP_BONUS_REGION_FRAGMENT",
      (data::ItemUseOp *)(v1 + 688));
    if ( *(_BYTE *)(((v1 + 704) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 704) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 704, "ITEM_USE_ADD_TREASURE_MAP_BONUS_REGION_FRAGMENT");
    *(_DWORD *)(v1 + 704) = 43;
    std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[22],data::ItemUseOp,true>(
      (std::pair<const std::string,data::ItemUseOp> *const)(v1 + 2384),
      (const char (*)[22])"ITEM_USE_COMBINE_ITEM",
      (data::ItemUseOp *)(v1 + 704));
    if ( *(_BYTE *)(((v1 + 720) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 720) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 720, "ITEM_USE_COMBINE_ITEM");
    *(_DWORD *)(v1 + 720) = 44;
    std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[28],data::ItemUseOp,true>(
      (std::pair<const std::string,data::ItemUseOp> *const)(v1 + 2424),
      (const char (*)[28])"ITEM_USE_UNLOCK_HOME_MODULE",
      (data::ItemUseOp *)(v1 + 720));
    if ( *(_BYTE *)(((v1 + 736) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 736) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 736, "ITEM_USE_UNLOCK_HOME_MODULE");
    *(_DWORD *)(v1 + 736) = 45;
    std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[25],data::ItemUseOp,true>(
      (std::pair<const std::string,data::ItemUseOp> *const)(v1 + 2464),
      (const char (*)[25])"ITEM_USE_UNLOCK_HOME_BGM",
      (data::ItemUseOp *)(v1 + 736));
    if ( *(_BYTE *)(((v1 + 752) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 752) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 752, "ITEM_USE_UNLOCK_HOME_BGM");
    *(_DWORD *)(v1 + 752) = 46;
    std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[31],data::ItemUseOp,true>(
      (std::pair<const std::string,data::ItemUseOp> *const)(v1 + 2504),
      (const char (*)[31])"ITEM_USE_ADD_REGIONAL_PLAY_VAR",
      (data::ItemUseOp *)(v1 + 752));
    if ( *(_BYTE *)(((v1 + 768) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 768) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 768, "ITEM_USE_ADD_REGIONAL_PLAY_VAR");
    *(_DWORD *)(v1 + 768) = 47;
    std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[35],data::ItemUseOp,true>(
      (std::pair<const std::string,data::ItemUseOp> *const)(v1 + 2544),
      (const char (*)[35])"ITEM_USE_ADD_AVATAR_EXTRA_PROPERTY",
      (data::ItemUseOp *)(v1 + 768));
    if ( *(_BYTE *)(((v1 + 784) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 784) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 784, "ITEM_USE_ADD_AVATAR_EXTRA_PROPERTY");
    *(_DWORD *)(v1 + 784) = 48;
    std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[23],data::ItemUseOp,true>(
      (std::pair<const std::string,data::ItemUseOp> *const)(v1 + 2584),
      (const char (*)[23])"ITEM_USE_GAIN_GCG_CARD",
      (data::ItemUseOp *)(v1 + 784));
    if ( *(_BYTE *)(((v1 + 800) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 800) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 800, "ITEM_USE_GAIN_GCG_CARD");
    *(_DWORD *)(v1 + 800) = 49;
    std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[28],data::ItemUseOp,true>(
      (std::pair<const std::string,data::ItemUseOp> *const)(v1 + 2624),
      (const char (*)[28])"ITEM_USE_GAIN_GCG_CARD_FACE",
      (data::ItemUseOp *)(v1 + 800));
    if ( *(_BYTE *)(((v1 + 816) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 816) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 816, "ITEM_USE_GAIN_GCG_CARD_FACE");
    *(_DWORD *)(v1 + 816) = 50;
    std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[28],data::ItemUseOp,true>(
      (std::pair<const std::string,data::ItemUseOp> *const)(v1 + 2664),
      (const char (*)[28])"ITEM_USE_GAIN_GCG_CARD_BACK",
      (data::ItemUseOp *)(v1 + 816));
    if ( *(_BYTE *)(((v1 + 832) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 832) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 832, "ITEM_USE_GAIN_GCG_CARD_BACK");
    *(_DWORD *)(v1 + 832) = 51;
    std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[29],data::ItemUseOp,true>(
      (std::pair<const std::string,data::ItemUseOp> *const)(v1 + 2704),
      (const char (*)[29])"ITEM_USE_GAIN_GCG_CARD_FIELD",
      (data::ItemUseOp *)(v1 + 832));
    if ( *(_BYTE *)(((v1 + 848) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 848) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 848, "ITEM_USE_GAIN_GCG_CARD_FIELD");
    *(_DWORD *)(v1 + 848) = 52;
    std::pair<std::string const,data::ItemUseOp>::pair<char const(&)[28],data::ItemUseOp,true>(
      (std::pair<const std::string,data::ItemUseOp> *const)(v1 + 2744),
      (const char (*)[28])"ITEM_USE_OPEN_RENAME_DIALOG",
      (data::ItemUseOp *)(v1 + 848));
    std::allocator<std::pair<std::string const,data::ItemUseOp>>::allocator((std::allocator<std::pair<const std::string,data::ItemUseOp> > *const)(v1 + 80));
    std::unordered_map<std::string,data::ItemUseOp>::unordered_map(
      &data::getItemUseOpNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::ItemUseOp> >)__PAIR128__(48LL, v1 + 864),
      0LL,
      (const std::unordered_map<std::string,data::ItemUseOp>::hasher *)(v1 + 48),
      (const std::unordered_map<std::string,data::ItemUseOp>::key_equal *)(v1 + 64),
      (const std::unordered_map<std::string,data::ItemUseOp>::allocator_type *)(v1 + 80));
    __cxa_guard_release(&`guard variable for'data::getItemUseOpNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::ItemUseOp>::~unordered_map,
      &data::getItemUseOpNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::ItemUseOp>>::~allocator((std::allocator<std::pair<const std::string,data::ItemUseOp> > *const)(v1 + 80));
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::ItemUseOp> *)(v1 + 2784);
          i != (std::pair<const std::string,data::ItemUseOp> *)(v1 + 864);
          std::pair<std::string const,data::ItemUseOp>::~pair(i) )
    {
      --i;
    }
  }
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8164) = 0LL;
    memset(
      (void *)((unsigned __int64)(v3 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v3 + 2147450880 - (((_DWORD)v3 + 2147450888) & 0xFFFFFFF8) + 364) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    __asan_stack_free_6(v1, 2912LL, v6);
  }
  return &data::getItemUseOpNameMap[abi:cxx11](void)::m;
};

// Line 286: range 000000001454FC5F-0000000014553625
const std::map<data::ItemUseOp,std::pair<std::string,std::string >> *__cdecl data::getItemUseOpEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > *i; // r14
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
  _DWORD *v30; // rax
  _DWORD *v31; // rax
  _DWORD *v32; // rax
  _DWORD *v33; // rax
  _DWORD *v34; // rax
  _DWORD *v35; // rax
  _DWORD *v36; // rax
  _DWORD *v37; // rax
  _DWORD *v38; // rax
  _DWORD *v39; // rax
  _DWORD *v40; // rax
  _DWORD *v41; // rax
  _DWORD *v42; // rax
  _DWORD *v43; // rax
  _DWORD *v44; // rax
  _DWORD *v45; // rax
  _DWORD *v46; // rax
  _DWORD *v47; // rax
  _DWORD *v48; // rax
  _DWORD *v49; // rax
  _DWORD *v50; // rax
  _DWORD *v51; // rax
  char v53[9072]; // [rsp+10h] [rbp-2370h] BYREF

  v1 = (unsigned __int64)v53;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_8(9024LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "99 32 1 9 <unknown> 48 1 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 "
                        "<unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unkno"
                        "wn> 208 4 9 <unknown> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 4 9 <unknown> 28"
                        "8 4 9 <unknown> 304 4 9 <unknown> 320 4 9 <unknown> 336 4 9 <unknown> 352 4 9 <unknown> 368 4 9 "
                        "<unknown> 384 4 9 <unknown> 400 4 9 <unknown> 416 4 9 <unknown> 432 4 9 <unknown> 448 4 9 <unkno"
                        "wn> 464 4 9 <unknown> 480 4 9 <unknown> 496 4 9 <unknown> 512 4 9 <unknown> 528 4 9 <unknown> 54"
                        "4 4 9 <unknown> 560 4 9 <unknown> 576 4 9 <unknown> 592 4 9 <unknown> 608 4 9 <unknown> 624 4 9 "
                        "<unknown> 640 4 9 <unknown> 656 4 9 <unknown> 672 4 9 <unknown> 688 4 9 <unknown> 704 4 9 <unkno"
                        "wn> 720 4 9 <unknown> 736 4 9 <unknown> 752 4 9 <unknown> 768 4 9 <unknown> 784 4 9 <unknown> 80"
                        "0 4 9 <unknown> 816 4 9 <unknown> 832 64 9 <unknown> 928 64 9 <unknown> 1024 64 9 <unknown> 1120"
                        " 64 9 <unknown> 1216 64 9 <unknown> 1312 64 9 <unknown> 1408 64 9 <unknown> 1504 64 9 <unknown> "
                        "1600 64 9 <unknown> 1696 64 9 <unknown> 1792 64 9 <unknown> 1888 64 9 <unknown> 1984 64 9 <unkno"
                        "wn> 2080 64 9 <unknown> 2176 64 9 <unknown> 2272 64 9 <unknown> 2368 64 9 <unknown> 2464 64 9 <u"
                        "nknown> 2560 64 9 <unknown> 2656 64 9 <unknown> 2752 64 9 <unknown> 2848 64 9 <unknown> 2944 64 "
                        "9 <unknown> 3040 64 9 <unknown> 3136 64 9 <unknown> 3232 64 9 <unknown> 3328 64 9 <unknown> 3424"
                        " 64 9 <unknown> 3520 64 9 <unknown> 3616 64 9 <unknown> 3712 64 9 <unknown> 3808 64 9 <unknown> "
                        "3904 64 9 <unknown> 4000 64 9 <unknown> 4096 64 9 <unknown> 4192 64 9 <unknown> 4288 64 9 <unkno"
                        "wn> 4384 64 9 <unknown> 4480 64 9 <unknown> 4576 64 9 <unknown> 4672 64 9 <unknown> 4768 64 9 <u"
                        "nknown> 4864 64 9 <unknown> 4960 64 9 <unknown> 5056 64 9 <unknown> 5152 64 9 <unknown> 5248 64 "
                        "9 <unknown> 5344 64 9 <unknown> 5440 3456 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::getItemUseOpEnumMap[abi:cxx11];
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
  v3[536862732] = -234556924;
  v3[536862733] = -234556924;
  v3[536862734] = -234556924;
  v3[536862735] = -234556924;
  v3[536862736] = -234556924;
  v3[536862737] = -234556924;
  v3[536862738] = -234556924;
  v3[536862739] = -234556924;
  v3[536862740] = -234556924;
  v3[536862741] = -234556924;
  v3[536862742] = -234556924;
  v3[536862743] = -234556924;
  v3[536862744] = -234556924;
  v3[536862745] = -234556924;
  v3[536862748] = -218959118;
  v3[536862751] = -218959118;
  v3[536862754] = -218959118;
  v3[536862757] = -218959118;
  v3[536862760] = -218959118;
  v3[536862763] = -218959118;
  v3[536862766] = -218959118;
  v3[536862769] = -218959118;
  v3[536862772] = -218959118;
  v3[536862775] = -218959118;
  v3[536862778] = -218959118;
  v3[536862781] = -218959118;
  v3[536862784] = -218959118;
  v3[536862787] = -218959118;
  v3[536862790] = -218959118;
  v3[536862793] = -218959118;
  v3[536862796] = -218959118;
  v3[536862799] = -218959118;
  v3[536862802] = -218959118;
  v3[536862805] = -218959118;
  v3[536862808] = -218959118;
  v3[536862811] = -218959118;
  v3[536862814] = -218959118;
  v3[536862817] = -218959118;
  v3[536862820] = -218959118;
  v3[536862823] = -218959118;
  v3[536862826] = -218959118;
  v3[536862829] = -218959118;
  v3[536862832] = -218959118;
  v3[536862835] = -218959118;
  v3[536862838] = -218959118;
  v3[536862841] = -218959118;
  v3[536862844] = -218959118;
  v3[536862847] = -218959118;
  v3[536862850] = -218959118;
  v3[536862853] = -218959118;
  v3[536862856] = -218959118;
  v3[536862859] = -218959118;
  v3[536862862] = -218959118;
  v3[536862865] = -218959118;
  v3[536862868] = -218959118;
  v3[536862871] = -218959118;
  v3[536862874] = -218959118;
  v3[536862877] = -218959118;
  v3[536862880] = -218959118;
  v3[536862883] = -218959118;
  v3[536862886] = -218959118;
  v3[536862889] = -218959118;
  v3[536862998] = -202116109;
  v3[536862999] = -202116109;
  v3[536863000] = -202116109;
  v3[536863001] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getItemUseOpEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getItemUseOpEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 64, v0);
    *(_DWORD *)(v1 + 64) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[14],true>(
      (std::pair<std::string,std::string > *const)(v1 + 832),
      (const char (*)[1])byte_1ACFAB80,
      (const char (*)[14])"ITEM_USE_NONE");
    std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>::pair<data::ItemUseOp,true>(
      (std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > *const)(v1 + 5440),
      (data::ItemUseOp *)(v1 + 64),
      (const std::pair<std::string,std::string > *)(v1 + 832));
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v1 + 64);
    *(_DWORD *)(v1 + 80) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[22],true>(
      (std::pair<std::string,std::string > *const)(v1 + 928),
      (const char (*)[13])byte_1ADA1540,
      (const char (*)[22])"ITEM_USE_ACCEPT_QUEST");
    std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>::pair<data::ItemUseOp,true>(
      (std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > *const)(v1 + 5512),
      (data::ItemUseOp *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 928));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[25],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1024),
      (const char (*)[13])byte_1ADA1580,
      (const char (*)[25])"ITEM_USE_TRIGGER_ABILITY");
    std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>::pair<data::ItemUseOp,true>(
      (std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > *const)(v1 + 5584),
      (data::ItemUseOp *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 1024));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 3;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1120),
      (const char (*)[13])byte_1ADA15C0,
      (const char (*)[21])"ITEM_USE_GAIN_AVATAR");
    std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>::pair<data::ItemUseOp,true>(
      (std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > *const)(v1 + 5656),
      (data::ItemUseOp *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 1120));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, v1 + 112);
    *(_DWORD *)(v1 + 128) = 4;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[17],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1216),
      (const char (*)[13])byte_1ADA1600,
      (const char (*)[17])"ITEM_USE_ADD_EXP");
    std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>::pair<data::ItemUseOp,true>(
      (std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > *const)(v1 + 5728),
      (data::ItemUseOp *)(v1 + 128),
      (const std::pair<std::string,std::string > *)(v1 + 1216));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, v1 + 128);
    *(_DWORD *)(v1 + 144) = 5;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[23],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1312),
      (const char (*)[13])byte_1ADA1640,
      (const char (*)[23])"ITEM_USE_RELIVE_AVATAR");
    std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>::pair<data::ItemUseOp,true>(
      (std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > *const)(v1 + 5800),
      (data::ItemUseOp *)(v1 + 144),
      (const std::pair<std::string,std::string > *)(v1 + 1312));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, v1 + 144);
    *(_DWORD *)(v1 + 160) = 6;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[30],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1408),
      (const char (*)[19])byte_1ADA1680,
      (const char (*)[30])"ITEM_USE_ADD_BIG_TALENT_POINT");
    std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>::pair<data::ItemUseOp,true>(
      (std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > *const)(v1 + 5872),
      (data::ItemUseOp *)(v1 + 160),
      (const std::pair<std::string,std::string > *)(v1 + 1408));
    if ( *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 176, v1 + 160);
    *(_DWORD *)(v1 + 176) = 7;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[29],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1504),
      (const char (*)[19])byte_1ADA16C0,
      (const char (*)[29])"ITEM_USE_ADD_PERSIST_STAMINA");
    std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>::pair<data::ItemUseOp,true>(
      (std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > *const)(v1 + 5944),
      (data::ItemUseOp *)(v1 + 176),
      (const std::pair<std::string,std::string > *)(v1 + 1504));
    if ( *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 192, v1 + 176);
    *(_DWORD *)(v1 + 192) = 8;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[31],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1600),
      (const char (*)[19])byte_1ADA1700,
      (const char (*)[31])"ITEM_USE_ADD_TEMPORARY_STAMINA");
    std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>::pair<data::ItemUseOp,true>(
      (std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > *const)(v1 + 6016),
      (data::ItemUseOp *)(v1 + 192),
      (const std::pair<std::string,std::string > *)(v1 + 1600));
    if ( *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 208, v1 + 192);
    *(_DWORD *)(v1 + 208) = 9;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[25],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1696),
      (const char (*)[19])byte_1ADA1740,
      (const char (*)[25])"ITEM_USE_ADD_CUR_STAMINA");
    std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>::pair<data::ItemUseOp,true>(
      (std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > *const)(v1 + 6088),
      (data::ItemUseOp *)(v1 + 208),
      (const std::pair<std::string,std::string > *)(v1 + 1696));
    if ( *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 224, v1 + 208);
    *(_DWORD *)(v1 + 224) = 10;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[20],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1792),
      (const char (*)[19])byte_1ADA1780,
      (const char (*)[20])"ITEM_USE_ADD_CUR_HP");
    std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>::pair<data::ItemUseOp,true>(
      (std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > *const)(v1 + 6160),
      (data::ItemUseOp *)(v1 + 224),
      (const std::pair<std::string,std::string > *)(v1 + 1792));
    if ( *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 240, v1 + 224);
    *(_DWORD *)(v1 + 240) = 11;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[25],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1888),
      (const char (*)[19])byte_1ADA17C0,
      (const char (*)[25])"ITEM_USE_ADD_ELEM_ENERGY");
    std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>::pair<data::ItemUseOp,true>(
      (std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > *const)(v1 + 6232),
      (data::ItemUseOp *)(v1 + 240),
      (const std::pair<std::string,std::string > *)(v1 + 1888));
    if ( *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 256, v1 + 240);
    *(_DWORD *)(v1 + 256) = 12;
    std::pair<std::string,std::string>::pair<char const(&)[22],char const(&)[24],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1984),
      (const char (*)[22])byte_1ADA1800,
      (const char (*)[24])"ITEM_USE_ADD_ALL_ENERGY");
    std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>::pair<data::ItemUseOp,true>(
      (std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > *const)(v1 + 6304),
      (data::ItemUseOp *)(v1 + 256),
      (const std::pair<std::string,std::string > *)(v1 + 1984));
    if ( *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 272, v1 + 256);
    *(_DWORD *)(v1 + 272) = 13;
    std::pair<std::string,std::string>::pair<char const(&)[37],char const(&)[31],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2080),
      (const char (*)[37])byte_1ADA1840,
      (const char (*)[31])"ITEM_USE_ADD_DUNGEON_COND_TIME");
    std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>::pair<data::ItemUseOp,true>(
      (std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > *const)(v1 + 6376),
      (data::ItemUseOp *)(v1 + 272),
      (const std::pair<std::string,std::string > *)(v1 + 2080));
    if ( *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 288, v1 + 272);
    *(_DWORD *)(v1 + 288) = 14;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[24],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2176),
      (const char (*)[19])byte_1ADA18A0,
      (const char (*)[24])"ITEM_USE_ADD_WEAPON_EXP");
    std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>::pair<data::ItemUseOp,true>(
      (std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > *const)(v1 + 6448),
      (data::ItemUseOp *)(v1 + 288),
      (const std::pair<std::string,std::string > *)(v1 + 2176));
    if ( *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 304, v1 + 288);
    *(_DWORD *)(v1 + 304) = 15;
    std::pair<std::string,std::string>::pair<char const(&)[12],char const(&)[25],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2272),
      (const char (*)[12])byte_1ADA18E0,
      (const char (*)[25])"ITEM_USE_ADD_SERVER_BUFF");
    std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>::pair<data::ItemUseOp,true>(
      (std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > *const)(v1 + 6520),
      (data::ItemUseOp *)(v1 + 304),
      (const std::pair<std::string,std::string > *)(v1 + 2272));
    if ( *(_BYTE *)(((v1 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 320) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 320, v1 + 304);
    *(_DWORD *)(v1 + 320) = 16;
    std::pair<std::string,std::string>::pair<char const(&)[12],char const(&)[25],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2368),
      (const char (*)[12])byte_1ADA1920,
      (const char (*)[25])"ITEM_USE_DEL_SERVER_BUFF");
    std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>::pair<data::ItemUseOp,true>(
      (std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > *const)(v1 + 6592),
      (data::ItemUseOp *)(v1 + 320),
      (const std::pair<std::string,std::string > *)(v1 + 2368));
    if ( *(_BYTE *)(((v1 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 336) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 336, v1 + 320);
    *(_DWORD *)(v1 + 336) = 17;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[28],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2464),
      (const char (*)[13])byte_1ADA1960,
      (const char (*)[28])"ITEM_USE_UNLOCK_COOK_RECIPE");
    std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>::pair<data::ItemUseOp,true>(
      (std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > *const)(v1 + 6664),
      (data::ItemUseOp *)(v1 + 336),
      (const std::pair<std::string,std::string > *)(v1 + 2464));
    if ( *(_BYTE *)(((v1 + 352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 352) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 352, v1 + 336);
    *(_DWORD *)(v1 + 352) = 20;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[27],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2560),
      (const char (*)[19])byte_1ADA19A0,
      (const char (*)[27])"ITEM_USE_OPEN_RANDOM_CHEST");
    std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>::pair<data::ItemUseOp,true>(
      (std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > *const)(v1 + 6736),
      (data::ItemUseOp *)(v1 + 352),
      (const std::pair<std::string,std::string > *)(v1 + 2560));
    if ( *(_BYTE *)(((v1 + 368) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 368) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 368, v1 + 352);
    *(_DWORD *)(v1 + 368) = 24;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2656),
      (const char (*)[13])byte_1ADA19E0,
      (const char (*)[21])"ITEM_USE_MAKE_GADGET");
    std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>::pair<data::ItemUseOp,true>(
      (std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > *const)(v1 + 6808),
      (data::ItemUseOp *)(v1 + 368),
      (const std::pair<std::string,std::string > *)(v1 + 2656));
    if ( *(_BYTE *)(((v1 + 384) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 384) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 384, v1 + 368);
    *(_DWORD *)(v1 + 384) = 25;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[18],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2752),
      (const char (*)[13])byte_1ADA1A20,
      (const char (*)[18])"ITEM_USE_ADD_ITEM");
    std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>::pair<data::ItemUseOp,true>(
      (std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > *const)(v1 + 6880),
      (data::ItemUseOp *)(v1 + 384),
      (const std::pair<std::string,std::string > *)(v1 + 2752));
    if ( *(_BYTE *)(((v1 + 400) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 400) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 400, v1 + 384);
    *(_DWORD *)(v1 + 400) = 26;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[29],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2848),
      (const char (*)[19])byte_1ADA1A60,
      (const char (*)[29])"ITEM_USE_GRANT_SELECT_REWARD");
    std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>::pair<data::ItemUseOp,true>(
      (std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > *const)(v1 + 6952),
      (data::ItemUseOp *)(v1 + 400),
      (const std::pair<std::string,std::string > *)(v1 + 2848));
    if ( *(_BYTE *)(((v1 + 416) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 416) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 416, v1 + 400);
    *(_DWORD *)(v1 + 416) = 27;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[25],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2944),
      (const char (*)[19])byte_1ADA1AA0,
      (const char (*)[25])"ITEM_USE_ADD_SELECT_ITEM");
    std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>::pair<data::ItemUseOp,true>(
      (std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > *const)(v1 + 7024),
      (data::ItemUseOp *)(v1 + 416),
      (const std::pair<std::string,std::string > *)(v1 + 2944));
    if ( *(_BYTE *)(((v1 + 432) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 432) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 432, v1 + 416);
    *(_DWORD *)(v1 + 432) = 28;
    std::pair<std::string,std::string>::pair<char const(&)[16],char const(&)[23],true>(
      (std::pair<std::string,std::string > *const)(v1 + 3040),
      (const char (*)[16])byte_1ADA1AE0,
      (const char (*)[23])"ITEM_USE_GAIN_FLYCLOAK");
    std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>::pair<data::ItemUseOp,true>(
      (std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > *const)(v1 + 7096),
      (data::ItemUseOp *)(v1 + 432),
      (const std::pair<std::string,std::string > *)(v1 + 3040));
    if ( *(_BYTE *)(((v1 + 448) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 448) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 448, v1 + 432);
    *(_DWORD *)(v1 + 448) = 29;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[24],true>(
      (std::pair<std::string,std::string > *const)(v1 + 3136),
      (const char (*)[13])byte_1ADA1B20,
      (const char (*)[24])"ITEM_USE_GAIN_NAME_CARD");
    std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>::pair<data::ItemUseOp,true>(
      (std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > *const)(v1 + 7168),
      (data::ItemUseOp *)(v1 + 448),
      (const std::pair<std::string,std::string > *)(v1 + 3136));
    if ( *(_BYTE *)(((v1 + 464) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 464) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 464, v1 + 448);
    *(_DWORD *)(v1 + 464) = 30;
    std::pair<std::string,std::string>::pair<char const(&)[25],char const(&)[40],true>(
      (std::pair<std::string,std::string > *const)(v1 + 3232),
      (const char (*)[25])byte_1ADA1B60,
      (const char (*)[40])"ITEM_USE_UNLOCK_PAID_BATTLE_PASS_NORMAL");
    std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>::pair<data::ItemUseOp,true>(
      (std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > *const)(v1 + 7240),
      (data::ItemUseOp *)(v1 + 464),
      (const std::pair<std::string,std::string > *)(v1 + 3232));
    if ( *(_BYTE *)(((v1 + 480) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 480) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 480, v1 + 464);
    *(_DWORD *)(v1 + 480) = 31;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[27],true>(
      (std::pair<std::string,std::string > *const)(v1 + 3328),
      (const char (*)[19])byte_1ADA1BA0,
      (const char (*)[27])"ITEM_USE_GAIN_CARD_PRODUCT");
    std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>::pair<data::ItemUseOp,true>(
      (std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > *const)(v1 + 7312),
      (data::ItemUseOp *)(v1 + 480),
      (const std::pair<std::string,std::string > *)(v1 + 3328));
    if ( *(_BYTE *)(((v1 + 496) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 496) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 496, v1 + 480);
    *(_DWORD *)(v1 + 496) = 32;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[22],true>(
      (std::pair<std::string,std::string > *const)(v1 + 3424),
      (const char (*)[13])byte_1ADA1BE0,
      (const char (*)[22])"ITEM_USE_UNLOCK_FORGE");
    std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>::pair<data::ItemUseOp,true>(
      (std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > *const)(v1 + 7384),
      (data::ItemUseOp *)(v1 + 496),
      (const std::pair<std::string,std::string > *)(v1 + 3424));
    if ( *(_BYTE *)(((v1 + 512) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 512) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 512, v1 + 496);
    *(_DWORD *)(v1 + 512) = 33;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[24],true>(
      (std::pair<std::string,std::string > *const)(v1 + 3520),
      (const char (*)[13])byte_1ADA1C20,
      (const char (*)[24])"ITEM_USE_UNLOCK_COMBINE");
    std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>::pair<data::ItemUseOp,true>(
      (std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > *const)(v1 + 7456),
      (data::ItemUseOp *)(v1 + 512),
      (const std::pair<std::string,std::string > *)(v1 + 3520));
    if ( *(_BYTE *)(((v1 + 528) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 528) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 528, v1 + 512);
    *(_DWORD *)(v1 + 528) = 34;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[22],true>(
      (std::pair<std::string,std::string > *const)(v1 + 3616),
      (const char (*)[13])byte_1ADA1C60,
      (const char (*)[22])"ITEM_USE_UNLOCK_CODEX");
    std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>::pair<data::ItemUseOp,true>(
      (std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > *const)(v1 + 7528),
      (data::ItemUseOp *)(v1 + 528),
      (const std::pair<std::string,std::string > *)(v1 + 3616));
    if ( *(_BYTE *)(((v1 + 544) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 544) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 544, v1 + 528);
    *(_DWORD *)(v1 + 544) = 35;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[27],true>(
      (std::pair<std::string,std::string > *const)(v1 + 3712),
      (const char (*)[19])byte_1ADA1CA0,
      (const char (*)[27])"ITEM_USE_CHEST_SELECT_ITEM");
    std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>::pair<data::ItemUseOp,true>(
      (std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > *const)(v1 + 7600),
      (data::ItemUseOp *)(v1 + 544),
      (const std::pair<std::string,std::string > *)(v1 + 3712));
    if ( *(_BYTE *)(((v1 + 560) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 560) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 560, v1 + 544);
    *(_DWORD *)(v1 + 560) = 36;
    std::pair<std::string,std::string>::pair<char const(&)[22],char const(&)[33],true>(
      (std::pair<std::string,std::string > *const)(v1 + 3808),
      (const char (*)[22])byte_1ADA1CE0,
      (const char (*)[33])"ITEM_USE_GAIN_RESIN_CARD_PRODUCT");
    std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>::pair<data::ItemUseOp,true>(
      (std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > *const)(v1 + 7672),
      (data::ItemUseOp *)(v1 + 560),
      (const std::pair<std::string,std::string > *)(v1 + 3808));
    if ( *(_BYTE *)(((v1 + 576) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 576) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 576, v1 + 560);
    *(_DWORD *)(v1 + 576) = 37;
    std::pair<std::string,std::string>::pair<char const(&)[22],char const(&)[27],true>(
      (std::pair<std::string,std::string > *const)(v1 + 3904),
      (const char (*)[22])byte_1ADA1D20,
      (const char (*)[27])"ITEM_USE_ADD_RELIQUARY_EXP");
    std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>::pair<data::ItemUseOp,true>(
      (std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > *const)(v1 + 7744),
      (data::ItemUseOp *)(v1 + 576),
      (const std::pair<std::string,std::string > *)(v1 + 3904));
    if ( *(_BYTE *)(((v1 + 592) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 592) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 592, v1 + 576);
    *(_DWORD *)(v1 + 592) = 38;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[34],true>(
      (std::pair<std::string,std::string > *const)(v1 + 4000),
      (const char (*)[19])byte_1ADA1D60,
      (const char (*)[34])"ITEM_USE_UNLOCK_FURNITURE_FORMULA");
    std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>::pair<data::ItemUseOp,true>(
      (std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > *const)(v1 + 7816),
      (data::ItemUseOp *)(v1 + 592),
      (const std::pair<std::string,std::string > *)(v1 + 4000));
    if ( *(_BYTE *)(((v1 + 608) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 608) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 608, v1 + 592);
    *(_DWORD *)(v1 + 608) = 39;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[32],true>(
      (std::pair<std::string,std::string > *const)(v1 + 4096),
      (const char (*)[19])byte_1ADA1DA0,
      (const char (*)[32])"ITEM_USE_UNLOCK_FURNITURE_SUITE");
    std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>::pair<data::ItemUseOp,true>(
      (std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > *const)(v1 + 7888),
      (data::ItemUseOp *)(v1 + 608),
      (const std::pair<std::string,std::string > *)(v1 + 4096));
    if ( *(_BYTE *)(((v1 + 624) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 624) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 624, v1 + 608);
    *(_DWORD *)(v1 + 624) = 40;
    std::pair<std::string,std::string>::pair<char const(&)[23],char const(&)[34],true>(
      (std::pair<std::string,std::string > *const)(v1 + 4192),
      (const char (*)[23])byte_1ADA1DE0,
      (const char (*)[34])"ITEM_USE_ADD_CHANNELLER_SLAB_BUFF");
    std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>::pair<data::ItemUseOp,true>(
      (std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > *const)(v1 + 7960),
      (data::ItemUseOp *)(v1 + 624),
      (const std::pair<std::string,std::string > *)(v1 + 4192));
    if ( *(_BYTE *)(((v1 + 640) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 640) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 640, v1 + 624);
    *(_DWORD *)(v1 + 640) = 41;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[22],true>(
      (std::pair<std::string,std::string > *const)(v1 + 4288),
      (const char (*)[13])byte_1ADA1E20,
      (const char (*)[22])"ITEM_USE_GAIN_COSTUME");
    std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>::pair<data::ItemUseOp,true>(
      (std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > *const)(v1 + 8032),
      (data::ItemUseOp *)(v1 + 640),
      (const std::pair<std::string,std::string > *)(v1 + 4288));
    if ( *(_BYTE *)(((v1 + 656) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 656) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 656, v1 + 640);
    *(_DWORD *)(v1 + 656) = 42;
    std::pair<std::string,std::string>::pair<char const(&)[34],char const(&)[48],true>(
      (std::pair<std::string,std::string > *const)(v1 + 4384),
      (const char (*)[34])byte_1ADA1E60,
      (const char (*)[48])"ITEM_USE_ADD_TREASURE_MAP_BONUS_REGION_FRAGMENT");
    std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>::pair<data::ItemUseOp,true>(
      (std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > *const)(v1 + 8104),
      (data::ItemUseOp *)(v1 + 656),
      (const std::pair<std::string,std::string > *)(v1 + 4384));
    if ( *(_BYTE *)(((v1 + 672) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 672) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 672, v1 + 656);
    *(_DWORD *)(v1 + 672) = 43;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[22],true>(
      (std::pair<std::string,std::string > *const)(v1 + 4480),
      (const char (*)[13])byte_1ADA1EC0,
      (const char (*)[22])"ITEM_USE_COMBINE_ITEM");
    std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>::pair<data::ItemUseOp,true>(
      (std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > *const)(v1 + 8176),
      (data::ItemUseOp *)(v1 + 672),
      (const std::pair<std::string,std::string > *)(v1 + 4480));
    if ( *(_BYTE *)(((v1 + 688) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 688) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 688, v1 + 672);
    *(_DWORD *)(v1 + 688) = 44;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[28],true>(
      (std::pair<std::string,std::string > *const)(v1 + 4576),
      (const char (*)[19])byte_1ADA1F00,
      (const char (*)[28])"ITEM_USE_UNLOCK_HOME_MODULE");
    std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>::pair<data::ItemUseOp,true>(
      (std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > *const)(v1 + 8248),
      (data::ItemUseOp *)(v1 + 688),
      (const std::pair<std::string,std::string > *)(v1 + 4576));
    if ( *(_BYTE *)(((v1 + 704) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 704) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 704, v1 + 688);
    *(_DWORD *)(v1 + 704) = 45;
    std::pair<std::string,std::string>::pair<char const(&)[16],char const(&)[25],true>(
      (std::pair<std::string,std::string > *const)(v1 + 4672),
      (const char (*)[16])byte_1ADA1F40,
      (const char (*)[25])"ITEM_USE_UNLOCK_HOME_BGM");
    std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>::pair<data::ItemUseOp,true>(
      (std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > *const)(v1 + 8320),
      (data::ItemUseOp *)(v1 + 704),
      (const std::pair<std::string,std::string > *)(v1 + 4672));
    if ( *(_BYTE *)(((v1 + 720) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 720) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 720, v1 + 704);
    *(_DWORD *)(v1 + 720) = 46;
    std::pair<std::string,std::string>::pair<char const(&)[28],char const(&)[31],true>(
      (std::pair<std::string,std::string > *const)(v1 + 4768),
      (const char (*)[28])byte_1ADA1F80,
      (const char (*)[31])"ITEM_USE_ADD_REGIONAL_PLAY_VAR");
    std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>::pair<data::ItemUseOp,true>(
      (std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > *const)(v1 + 8392),
      (data::ItemUseOp *)(v1 + 720),
      (const std::pair<std::string,std::string > *)(v1 + 4768));
    if ( *(_BYTE *)(((v1 + 736) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 736) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 736, v1 + 720);
    *(_DWORD *)(v1 + 736) = 47;
    std::pair<std::string,std::string>::pair<char const(&)[25],char const(&)[35],true>(
      (std::pair<std::string,std::string > *const)(v1 + 4864),
      (const char (*)[25])byte_1ADA1FC0,
      (const char (*)[35])"ITEM_USE_ADD_AVATAR_EXTRA_PROPERTY");
    std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>::pair<data::ItemUseOp,true>(
      (std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > *const)(v1 + 8464),
      (data::ItemUseOp *)(v1 + 736),
      (const std::pair<std::string,std::string > *)(v1 + 4864));
    if ( *(_BYTE *)(((v1 + 752) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 752) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 752, v1 + 736);
    *(_DWORD *)(v1 + 752) = 48;
    std::pair<std::string,std::string>::pair<char const(&)[25],char const(&)[23],true>(
      (std::pair<std::string,std::string > *const)(v1 + 4960),
      (const char (*)[25])byte_1ADA2000,
      (const char (*)[23])"ITEM_USE_GAIN_GCG_CARD");
    std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>::pair<data::ItemUseOp,true>(
      (std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > *const)(v1 + 8536),
      (data::ItemUseOp *)(v1 + 752),
      (const std::pair<std::string,std::string > *)(v1 + 4960));
    if ( *(_BYTE *)(((v1 + 768) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 768) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 768, v1 + 752);
    *(_DWORD *)(v1 + 768) = 49;
    std::pair<std::string,std::string>::pair<char const(&)[25],char const(&)[28],true>(
      (std::pair<std::string,std::string > *const)(v1 + 5056),
      (const char (*)[25])byte_1ADA2040,
      (const char (*)[28])"ITEM_USE_GAIN_GCG_CARD_FACE");
    std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>::pair<data::ItemUseOp,true>(
      (std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > *const)(v1 + 8608),
      (data::ItemUseOp *)(v1 + 768),
      (const std::pair<std::string,std::string > *)(v1 + 5056));
    if ( *(_BYTE *)(((v1 + 784) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 784) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 784, v1 + 768);
    *(_DWORD *)(v1 + 784) = 50;
    std::pair<std::string,std::string>::pair<char const(&)[25],char const(&)[28],true>(
      (std::pair<std::string,std::string > *const)(v1 + 5152),
      (const char (*)[25])byte_1ADA2080,
      (const char (*)[28])"ITEM_USE_GAIN_GCG_CARD_BACK");
    std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>::pair<data::ItemUseOp,true>(
      (std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > *const)(v1 + 8680),
      (data::ItemUseOp *)(v1 + 784),
      (const std::pair<std::string,std::string > *)(v1 + 5152));
    if ( *(_BYTE *)(((v1 + 800) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 800) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 800, v1 + 784);
    *(_DWORD *)(v1 + 800) = 51;
    std::pair<std::string,std::string>::pair<char const(&)[25],char const(&)[29],true>(
      (std::pair<std::string,std::string > *const)(v1 + 5248),
      (const char (*)[25])byte_1ADA20C0,
      (const char (*)[29])"ITEM_USE_GAIN_GCG_CARD_FIELD");
    std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>::pair<data::ItemUseOp,true>(
      (std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > *const)(v1 + 8752),
      (data::ItemUseOp *)(v1 + 800),
      (const std::pair<std::string,std::string > *)(v1 + 5248));
    if ( *(_BYTE *)(((v1 + 816) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 816) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 816, v1 + 800);
    *(_DWORD *)(v1 + 816) = 52;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[28],true>(
      (std::pair<std::string,std::string > *const)(v1 + 5344),
      (const char (*)[19])byte_1ADA2100,
      (const char (*)[28])"ITEM_USE_OPEN_RENAME_DIALOG");
    std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>::pair<data::ItemUseOp,true>(
      (std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > *const)(v1 + 8824),
      (data::ItemUseOp *)(v1 + 816),
      (const std::pair<std::string,std::string > *)(v1 + 5344));
    std::allocator<std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > > *const)(v1 + 48));
    std::map<data::ItemUseOp,std::pair<std::string,std::string>>::map(
      &data::getItemUseOpEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > >)__PAIR128__(48LL, v1 + 5440),
      (const std::less<data::ItemUseOp> *)(v1 + 32),
      (const std::map<data::ItemUseOp,std::pair<std::string,std::string >>::allocator_type *)(v1 + 48));
    __cxa_guard_release(&`guard variable for'data::getItemUseOpEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::ItemUseOp,std::pair<std::string,std::string>>::~map,
      &data::getItemUseOpEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > > *const)(v1 + 48));
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > *)(v1 + 8896);
          i != (std::pair<const data::ItemUseOp,std::pair<std::string,std::string > > *)(v1 + 5440);
          std::pair<data::ItemUseOp const,std::pair<std::string,std::string>>::~pair(i) )
    {
      --i;
    }
    __asan_poison_stack_memory(v1 + 5440, 3456LL);
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 5344));
    v5 = (_DWORD *)(((v1 + 5344) >> 3) + 2147450880);
    *v5 = -117901064;
    v5[1] = -117901064;
    *(_BYTE *)(((v1 + 816) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 5248));
    v6 = (_DWORD *)(((v1 + 5248) >> 3) + 2147450880);
    *v6 = -117901064;
    v6[1] = -117901064;
    *(_BYTE *)(((v1 + 800) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 5152));
    v7 = (_DWORD *)(((v1 + 5152) >> 3) + 2147450880);
    *v7 = -117901064;
    v7[1] = -117901064;
    *(_BYTE *)(((v1 + 784) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 5056));
    v8 = (_DWORD *)(((v1 + 5056) >> 3) + 2147450880);
    *v8 = -117901064;
    v8[1] = -117901064;
    *(_BYTE *)(((v1 + 768) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 4960));
    v9 = (_DWORD *)(((v1 + 4960) >> 3) + 2147450880);
    *v9 = -117901064;
    v9[1] = -117901064;
    *(_BYTE *)(((v1 + 752) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 4864));
    v10 = (_DWORD *)(((v1 + 4864) >> 3) + 2147450880);
    *v10 = -117901064;
    v10[1] = -117901064;
    *(_BYTE *)(((v1 + 736) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 4768));
    v11 = (_DWORD *)(((v1 + 4768) >> 3) + 2147450880);
    *v11 = -117901064;
    v11[1] = -117901064;
    *(_BYTE *)(((v1 + 720) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 4672));
    v12 = (_DWORD *)(((v1 + 4672) >> 3) + 2147450880);
    *v12 = -117901064;
    v12[1] = -117901064;
    *(_BYTE *)(((v1 + 704) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 4576));
    v13 = (_DWORD *)(((v1 + 4576) >> 3) + 2147450880);
    *v13 = -117901064;
    v13[1] = -117901064;
    *(_BYTE *)(((v1 + 688) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 4480));
    v14 = (_DWORD *)(((v1 + 4480) >> 3) + 2147450880);
    *v14 = -117901064;
    v14[1] = -117901064;
    *(_BYTE *)(((v1 + 672) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 4384));
    v15 = (_DWORD *)(((v1 + 4384) >> 3) + 2147450880);
    *v15 = -117901064;
    v15[1] = -117901064;
    *(_BYTE *)(((v1 + 656) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 4288));
    v16 = (_DWORD *)(((v1 + 4288) >> 3) + 2147450880);
    *v16 = -117901064;
    v16[1] = -117901064;
    *(_BYTE *)(((v1 + 640) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 4192));
    v17 = (_DWORD *)(((v1 + 4192) >> 3) + 2147450880);
    *v17 = -117901064;
    v17[1] = -117901064;
    *(_BYTE *)(((v1 + 624) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 4096));
    v18 = (_DWORD *)(((v1 + 4096) >> 3) + 2147450880);
    *v18 = -117901064;
    v18[1] = -117901064;
    *(_BYTE *)(((v1 + 608) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 4000));
    v19 = (_DWORD *)(((v1 + 4000) >> 3) + 2147450880);
    *v19 = -117901064;
    v19[1] = -117901064;
    *(_BYTE *)(((v1 + 592) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 3904));
    v20 = (_DWORD *)(((v1 + 3904) >> 3) + 2147450880);
    *v20 = -117901064;
    v20[1] = -117901064;
    *(_BYTE *)(((v1 + 576) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 3808));
    v21 = (_DWORD *)(((v1 + 3808) >> 3) + 2147450880);
    *v21 = -117901064;
    v21[1] = -117901064;
    *(_BYTE *)(((v1 + 560) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 3712));
    v22 = (_DWORD *)(((v1 + 3712) >> 3) + 2147450880);
    *v22 = -117901064;
    v22[1] = -117901064;
    *(_BYTE *)(((v1 + 544) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 3616));
    v23 = (_DWORD *)(((v1 + 3616) >> 3) + 2147450880);
    *v23 = -117901064;
    v23[1] = -117901064;
    *(_BYTE *)(((v1 + 528) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 3520));
    v24 = (_DWORD *)(((v1 + 3520) >> 3) + 2147450880);
    *v24 = -117901064;
    v24[1] = -117901064;
    *(_BYTE *)(((v1 + 512) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 3424));
    v25 = (_DWORD *)(((v1 + 3424) >> 3) + 2147450880);
    *v25 = -117901064;
    v25[1] = -117901064;
    *(_BYTE *)(((v1 + 496) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 3328));
    v26 = (_DWORD *)(((v1 + 3328) >> 3) + 2147450880);
    *v26 = -117901064;
    v26[1] = -117901064;
    *(_BYTE *)(((v1 + 480) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 3232));
    v27 = (_DWORD *)(((v1 + 3232) >> 3) + 2147450880);
    *v27 = -117901064;
    v27[1] = -117901064;
    *(_BYTE *)(((v1 + 464) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 3136));
    v28 = (_DWORD *)(((v1 + 3136) >> 3) + 2147450880);
    *v28 = -117901064;
    v28[1] = -117901064;
    *(_BYTE *)(((v1 + 448) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 3040));
    v29 = (_DWORD *)(((v1 + 3040) >> 3) + 2147450880);
    *v29 = -117901064;
    v29[1] = -117901064;
    *(_BYTE *)(((v1 + 432) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2944));
    v30 = (_DWORD *)(((v1 + 2944) >> 3) + 2147450880);
    *v30 = -117901064;
    v30[1] = -117901064;
    *(_BYTE *)(((v1 + 416) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2848));
    v31 = (_DWORD *)(((v1 + 2848) >> 3) + 2147450880);
    *v31 = -117901064;
    v31[1] = -117901064;
    *(_BYTE *)(((v1 + 400) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2752));
    v32 = (_DWORD *)(((v1 + 2752) >> 3) + 2147450880);
    *v32 = -117901064;
    v32[1] = -117901064;
    *(_BYTE *)(((v1 + 384) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2656));
    v33 = (_DWORD *)(((v1 + 2656) >> 3) + 2147450880);
    *v33 = -117901064;
    v33[1] = -117901064;
    *(_BYTE *)(((v1 + 368) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2560));
    v34 = (_DWORD *)(((v1 + 2560) >> 3) + 2147450880);
    *v34 = -117901064;
    v34[1] = -117901064;
    *(_BYTE *)(((v1 + 352) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2464));
    v35 = (_DWORD *)(((v1 + 2464) >> 3) + 2147450880);
    *v35 = -117901064;
    v35[1] = -117901064;
    *(_BYTE *)(((v1 + 336) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2368));
    v36 = (_DWORD *)(((v1 + 2368) >> 3) + 2147450880);
    *v36 = -117901064;
    v36[1] = -117901064;
    *(_BYTE *)(((v1 + 320) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2272));
    v37 = (_DWORD *)(((v1 + 2272) >> 3) + 2147450880);
    *v37 = -117901064;
    v37[1] = -117901064;
    *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2176));
    v38 = (_DWORD *)(((v1 + 2176) >> 3) + 2147450880);
    *v38 = -117901064;
    v38[1] = -117901064;
    *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2080));
    v39 = (_DWORD *)(((v1 + 2080) >> 3) + 2147450880);
    *v39 = -117901064;
    v39[1] = -117901064;
    *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1984));
    v40 = (_DWORD *)(((v1 + 1984) >> 3) + 2147450880);
    *v40 = -117901064;
    v40[1] = -117901064;
    *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1888));
    v41 = (_DWORD *)(((v1 + 1888) >> 3) + 2147450880);
    *v41 = -117901064;
    v41[1] = -117901064;
    *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1792));
    v42 = (_DWORD *)(((v1 + 1792) >> 3) + 2147450880);
    *v42 = -117901064;
    v42[1] = -117901064;
    *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1696));
    v43 = (_DWORD *)(((v1 + 1696) >> 3) + 2147450880);
    *v43 = -117901064;
    v43[1] = -117901064;
    *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1600));
    v44 = (_DWORD *)(((v1 + 1600) >> 3) + 2147450880);
    *v44 = -117901064;
    v44[1] = -117901064;
    *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1504));
    v45 = (_DWORD *)(((v1 + 1504) >> 3) + 2147450880);
    *v45 = -117901064;
    v45[1] = -117901064;
    *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1408));
    v46 = (_DWORD *)(((v1 + 1408) >> 3) + 2147450880);
    *v46 = -117901064;
    v46[1] = -117901064;
    *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1312));
    v47 = (_DWORD *)(((v1 + 1312) >> 3) + 2147450880);
    *v47 = -117901064;
    v47[1] = -117901064;
    *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1216));
    v48 = (_DWORD *)(((v1 + 1216) >> 3) + 2147450880);
    *v48 = -117901064;
    v48[1] = -117901064;
    *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1120));
    v49 = (_DWORD *)(((v1 + 1120) >> 3) + 2147450880);
    *v49 = -117901064;
    v49[1] = -117901064;
    *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1024));
    v50 = (_DWORD *)(((v1 + 1024) >> 3) + 2147450880);
    *v50 = -117901064;
    v50[1] = -117901064;
    *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 928));
    v51 = (_DWORD *)(((v1 + 928) >> 3) + 2147450880);
    *v51 = -117901064;
    v51[1] = -117901064;
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 832));
  }
  if ( v53 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8460) = 0LL;
    memset(
      (void *)((unsigned __int64)(v3 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v3 + 2147450880 - (((_DWORD)v3 + 2147450888) & 0xFFFFFFF8) + 1128) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    __asan_stack_free_8(v1, 9024LL, v53);
  }
  return &data::getItemUseOpEnumMap[abi:cxx11](void)::m;
};

// Line 342: range 0000000014553626-0000000014553999
const char *__fastcall data::enumValToStr(data::ItemUseTarget e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::ItemUseTarget,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::ItemUseTarget,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 5 e:341 64 8 8 iter:344 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getItemUseTargetEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::ItemUseTarget,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::ItemUseTarget,std::pair<std::string,std::string>>::find(map, (const std::map<data::ItemUseTarget,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::ItemUseTarget,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::ItemUseTarget,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::ItemUseTarget,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::ItemUseTarget,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
      "enumValToStr",
      347);
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
    result = "INVALID_ItemUseTarget";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::ItemUseTarget const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::ItemUseTarget,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 354: range 000000001455399A-0000000014553F52
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::ItemUseTarget>,false,true>::pointer v10; // rax
  data::ItemUseTarget second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::ItemUseTarget> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:363 96 8 9 <unknown> 128 8 5 s:353 160 32 9 <unknown> 224 32 9 <unk"
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
    m = data::getItemUseTargetNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::ItemUseTarget>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ItemUseTarget>::find(
                                                                                          m,
                                                                                          (const std::unordered_map<std::string,data::ItemUseTarget>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::ItemUseTarget>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::ItemUseTarget>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::ItemUseTarget>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ItemUseTarget>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ItemUseTarget>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
        "enumNameToVal",
        366);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::ItemUseTarget>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::ItemUseTarget>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
      "enumNameToVal",
      357);
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

// Line 375: range 0000000014553F53-0000000014554BD5
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::ItemUseTarget> *i; // r14
  unsigned __int64 v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::ItemUseTarget>,false,true>::pointer v12; // rax
  data::ItemUseTarget second; // ecx
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
                        " <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unknown> 208 8 6 it:39"
                        "2 240 8 9 <unknown> 272 8 5 s:374 304 32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496 240 9 <unknown>";
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::ItemUseTarget &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::ItemUseTarget &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, e);
      *(_DWORD *)(v2 + 112) = 1;
      std::pair<std::string const,data::ItemUseTarget>::pair<char const(&)[13],data::ItemUseTarget,true>(
        (std::pair<const std::string,data::ItemUseTarget> *const)(v2 + 496),
        (const char (*)[13])byte_1ADA3BC0,
        (data::ItemUseTarget *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1ADA3BC0);
      *(_DWORD *)(v2 + 128) = 2;
      std::pair<std::string const,data::ItemUseTarget>::pair<char const(&)[13],data::ItemUseTarget,true>(
        (std::pair<const std::string,data::ItemUseTarget> *const)(v2 + 536),
        (const char (*)[13])byte_1ADA3C00,
        (data::ItemUseTarget *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, byte_1ADA3C00);
      *(_DWORD *)(v2 + 144) = 3;
      std::pair<std::string const,data::ItemUseTarget>::pair<char const(&)[13],data::ItemUseTarget,true>(
        (std::pair<const std::string,data::ItemUseTarget> *const)(v2 + 576),
        (const char (*)[13])byte_1ADA3C40,
        (data::ItemUseTarget *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, byte_1ADA3C40);
      *(_DWORD *)(v2 + 160) = 4;
      std::pair<std::string const,data::ItemUseTarget>::pair<char const(&)[19],data::ItemUseTarget,true>(
        (std::pair<const std::string,data::ItemUseTarget> *const)(v2 + 616),
        (const char (*)[19])byte_1ADA3C80,
        (data::ItemUseTarget *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, byte_1ADA3C80);
      *(_DWORD *)(v2 + 176) = 5;
      std::pair<std::string const,data::ItemUseTarget>::pair<char const(&)[19],data::ItemUseTarget,true>(
        (std::pair<const std::string,data::ItemUseTarget> *const)(v2 + 656),
        (const char (*)[19])byte_1ADA3CC0,
        (data::ItemUseTarget *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, byte_1ADA3CC0);
      *(_DWORD *)(v2 + 192) = 6;
      std::pair<std::string const,data::ItemUseTarget>::pair<char const(&)[7],data::ItemUseTarget,true>(
        (std::pair<const std::string,data::ItemUseTarget> *const)(v2 + 696),
        (const char (*)[7])byte_1AD44B60,
        (data::ItemUseTarget *)(v2 + 192));
      std::allocator<std::pair<std::string const,data::ItemUseTarget>>::allocator((std::allocator<std::pair<const std::string,data::ItemUseTarget> > *const)(v2 + 80));
      std::unordered_map<std::string,data::ItemUseTarget>::unordered_map(
        &data::enumStrToVal(char const*,data::ItemUseTarget &)::m,
        (std::initializer_list<std::pair<const std::string,data::ItemUseTarget> >)__PAIR128__(6LL, v2 + 496),
        0LL,
        (const std::unordered_map<std::string,data::ItemUseTarget>::hasher *)(v2 + 48),
        (const std::unordered_map<std::string,data::ItemUseTarget>::key_equal *)(v2 + 64),
        (const std::unordered_map<std::string,data::ItemUseTarget>::allocator_type *)(v2 + 80));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::ItemUseTarget &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::ItemUseTarget>::~unordered_map,
        &data::enumStrToVal(char const*,data::ItemUseTarget &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::ItemUseTarget>>::~allocator((std::allocator<std::pair<const std::string,data::ItemUseTarget> > *const)(v2 + 80));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::ItemUseTarget> *)(v2 + 736);
            i != (std::pair<const std::string,data::ItemUseTarget> *)(v2 + 496);
            std::pair<std::string const,data::ItemUseTarget>::~pair(i) )
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
    *(std::unordered_map<std::string,data::ItemUseTarget>::iterator *)(v2 + 208) = std::unordered_map<std::string,data::ItemUseTarget>::find(
                                                                                     &data::enumStrToVal(char const*,data::ItemUseTarget &)::m,
                                                                                     (const std::unordered_map<std::string,data::ItemUseTarget>::key_type *)(v2 + 368));
    std::string::~string((void *)(v2 + 368));
    *(_DWORD *)(((v2 + 368) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 96);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 240, v2 + 368);
    *(std::unordered_map<std::string,data::ItemUseTarget>::iterator *)(v2 + 240) = std::unordered_map<std::string,data::ItemUseTarget>::end(&data::enumStrToVal(char const*,data::ItemUseTarget &)::m);
    v9 = (char *)(v2 + 240);
    v10 = std::__detail::operator==<std::pair<std::string const,data::ItemUseTarget>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ItemUseTarget>,true> *)(v2 + 208),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ItemUseTarget>,true> *)(v2 + 240));
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
        "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
        "enumStrToVal",
        395);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 432),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)(v2 + 272));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 432));
      LODWORD(result) = -1;
    }
    else
    {
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::ItemUseTarget>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::ItemUseTarget>,false,true> *const)(v2 + 208));
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
      "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
      "enumStrToVal",
      378);
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

// Line 404: range 0000000014554BD6-0000000014554BEC
const char *__cdecl data::getDescription(data::ItemUseTarget e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 409: range 0000000014554BED-0000000014554DA2
bool __cdecl data::isValidItemUseTarget(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::ItemUseTarget,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::ItemUseTarget,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:410 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidItemUseTarget;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getItemUseTargetEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::ItemUseTarget,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::ItemUseTarget,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getItemUseTargetEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::ItemUseTarget,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::ItemUseTarget,std::pair<std::string,std::string>>::find(v6, (const std::map<data::ItemUseTarget,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::ItemUseTarget,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::ItemUseTarget,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 415: range 0000000014554DA3-0000000014554F04
bool __cdecl data::isValidItemUseTargetName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::ItemUseTarget> *v5; // rcx
  const std::unordered_map<std::string,data::ItemUseTarget> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidItemUseTargetName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getItemUseTargetNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::ItemUseTarget>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ItemUseTarget>::end(v5);
  v6 = data::getItemUseTargetNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::ItemUseTarget>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::ItemUseTarget>::find(
                                                                                        v6,
                                                                                        name);
  result = std::__detail::operator!=<std::pair<std::string const,data::ItemUseTarget>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ItemUseTarget>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ItemUseTarget>,true> *)(v2 + 64));
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

// Line 420: range 0000000014554F05-000000001455560E
const std::unordered_map<std::string,data::ItemUseTarget> *__cdecl data::getItemUseTargetNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::ItemUseTarget> *i; // r14
  const std::unordered_map<std::string,data::ItemUseTarget> *result; // rax
  char v6[592]; // [rsp+10h] [rbp-250h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(544LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "11 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 "
                        "<unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 280 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::getItemUseTargetNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556927;
  v3[536862723] = -234556924;
  v3[536862724] = -234556924;
  v3[536862725] = -234556924;
  v3[536862734] = -218103808;
  v3[536862735] = -202116109;
  v3[536862736] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getItemUseTargetNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getItemUseTargetNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string const,data::ItemUseTarget>::pair<char const(&)[21],data::ItemUseTarget,true>(
      (std::pair<const std::string,data::ItemUseTarget> *const)(v1 + 192),
      (const char (*)[21])"ITEM_USE_TARGET_NONE",
      (data::ItemUseTarget *)(v1 + 80));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, "ITEM_USE_TARGET_NONE");
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string const,data::ItemUseTarget>::pair<char const(&)[27],data::ItemUseTarget,true>(
      (std::pair<const std::string,data::ItemUseTarget> *const)(v1 + 232),
      (const char (*)[27])"ITEM_USE_TARGET_CUR_AVATAR",
      (data::ItemUseTarget *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "ITEM_USE_TARGET_CUR_AVATAR");
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string const,data::ItemUseTarget>::pair<char const(&)[25],data::ItemUseTarget,true>(
      (std::pair<const std::string,data::ItemUseTarget> *const)(v1 + 272),
      (const char (*)[25])"ITEM_USE_TARGET_CUR_TEAM",
      (data::ItemUseTarget *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, "ITEM_USE_TARGET_CUR_TEAM");
    *(_DWORD *)(v1 + 128) = 3;
    std::pair<std::string const,data::ItemUseTarget>::pair<char const(&)[31],data::ItemUseTarget,true>(
      (std::pair<const std::string,data::ItemUseTarget> *const)(v1 + 312),
      (const char (*)[31])"ITEM_USE_TARGET_SPECIFY_AVATAR",
      (data::ItemUseTarget *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, "ITEM_USE_TARGET_SPECIFY_AVATAR");
    *(_DWORD *)(v1 + 144) = 4;
    std::pair<std::string const,data::ItemUseTarget>::pair<char const(&)[37],data::ItemUseTarget,true>(
      (std::pair<const std::string,data::ItemUseTarget> *const)(v1 + 352),
      (const char (*)[37])"ITEM_USE_TARGET_SPECIFY_ALIVE_AVATAR",
      (data::ItemUseTarget *)(v1 + 144));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, "ITEM_USE_TARGET_SPECIFY_ALIVE_AVATAR");
    *(_DWORD *)(v1 + 160) = 5;
    std::pair<std::string const,data::ItemUseTarget>::pair<char const(&)[36],data::ItemUseTarget,true>(
      (std::pair<const std::string,data::ItemUseTarget> *const)(v1 + 392),
      (const char (*)[36])"ITEM_USE_TARGET_SPECIFY_DEAD_AVATAR",
      (data::ItemUseTarget *)(v1 + 160));
    if ( *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 176, "ITEM_USE_TARGET_SPECIFY_DEAD_AVATAR");
    *(_DWORD *)(v1 + 176) = 6;
    std::pair<std::string const,data::ItemUseTarget>::pair<char const(&)[30],data::ItemUseTarget,true>(
      (std::pair<const std::string,data::ItemUseTarget> *const)(v1 + 432),
      (const char (*)[30])"ITEM_USE_TARGET_PLAYER_AVATAR",
      (data::ItemUseTarget *)(v1 + 176));
    std::allocator<std::pair<std::string const,data::ItemUseTarget>>::allocator((std::allocator<std::pair<const std::string,data::ItemUseTarget> > *const)(v1 + 64));
    std::unordered_map<std::string,data::ItemUseTarget>::unordered_map(
      &data::getItemUseTargetNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::ItemUseTarget> >)__PAIR128__(7LL, v1 + 192),
      0LL,
      (const std::unordered_map<std::string,data::ItemUseTarget>::hasher *)(v1 + 32),
      (const std::unordered_map<std::string,data::ItemUseTarget>::key_equal *)(v1 + 48),
      (const std::unordered_map<std::string,data::ItemUseTarget>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getItemUseTargetNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::ItemUseTarget>::~unordered_map,
      &data::getItemUseTargetNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::ItemUseTarget>>::~allocator((std::allocator<std::pair<const std::string,data::ItemUseTarget> > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::ItemUseTarget> *)(v1 + 472);
          i != (std::pair<const std::string,data::ItemUseTarget> *)(v1 + 192);
          std::pair<std::string const,data::ItemUseTarget>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getItemUseTargetNameMap[abi:cxx11](void)::m;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8040) = 0;
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
    *(_DWORD *)((v1 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 435: range 000000001455560F-00000000145560E2
const std::map<data::ItemUseTarget,std::pair<std::string,std::string >> *__cdecl data::getItemUseTargetEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::ItemUseTarget,std::pair<std::string,std::string > > *i; // r14
  _DWORD *v5; // rax
  _DWORD *v6; // rax
  _DWORD *v7; // rax
  _DWORD *v8; // rax
  _DWORD *v9; // rax
  _DWORD *v10; // rax
  char v12[1488]; // [rsp+10h] [rbp-5D0h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_5(1440LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "17 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 4 9"
                        " <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 64 9 <unknown> 288 64 9 <un"
                        "known> 384 64 9 <unknown> 480 64 9 <unknown> 576 64 9 <unknown> 672 64 9 <unknown> 768 64 9 <unk"
                        "nown> 864 504 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::getItemUseTargetEnumMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -234556927;
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
  v3[536862762] = -218103808;
  v3[536862763] = -202116109;
  v3[536862764] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getItemUseTargetEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getItemUseTargetEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 192),
      (const char (*)[1])byte_1ACFAB80,
      (const char (*)[21])"ITEM_USE_TARGET_NONE");
    std::pair<data::ItemUseTarget const,std::pair<std::string,std::string>>::pair<data::ItemUseTarget,true>(
      (std::pair<const data::ItemUseTarget,std::pair<std::string,std::string > > *const)(v1 + 864),
      (data::ItemUseTarget *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 192));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[27],true>(
      (std::pair<std::string,std::string > *const)(v1 + 288),
      (const char (*)[13])byte_1ADA3BC0,
      (const char (*)[27])"ITEM_USE_TARGET_CUR_AVATAR");
    std::pair<data::ItemUseTarget const,std::pair<std::string,std::string>>::pair<data::ItemUseTarget,true>(
      (std::pair<const data::ItemUseTarget,std::pair<std::string,std::string > > *const)(v1 + 936),
      (data::ItemUseTarget *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 288));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[25],true>(
      (std::pair<std::string,std::string > *const)(v1 + 384),
      (const char (*)[13])byte_1ADA3C00,
      (const char (*)[25])"ITEM_USE_TARGET_CUR_TEAM");
    std::pair<data::ItemUseTarget const,std::pair<std::string,std::string>>::pair<data::ItemUseTarget,true>(
      (std::pair<const data::ItemUseTarget,std::pair<std::string,std::string > > *const)(v1 + 1008),
      (data::ItemUseTarget *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 384));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, v1 + 112);
    *(_DWORD *)(v1 + 128) = 3;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[31],true>(
      (std::pair<std::string,std::string > *const)(v1 + 480),
      (const char (*)[13])byte_1ADA3C40,
      (const char (*)[31])"ITEM_USE_TARGET_SPECIFY_AVATAR");
    std::pair<data::ItemUseTarget const,std::pair<std::string,std::string>>::pair<data::ItemUseTarget,true>(
      (std::pair<const data::ItemUseTarget,std::pair<std::string,std::string > > *const)(v1 + 1080),
      (data::ItemUseTarget *)(v1 + 128),
      (const std::pair<std::string,std::string > *)(v1 + 480));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, v1 + 128);
    *(_DWORD *)(v1 + 144) = 4;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[37],true>(
      (std::pair<std::string,std::string > *const)(v1 + 576),
      (const char (*)[19])byte_1ADA3C80,
      (const char (*)[37])"ITEM_USE_TARGET_SPECIFY_ALIVE_AVATAR");
    std::pair<data::ItemUseTarget const,std::pair<std::string,std::string>>::pair<data::ItemUseTarget,true>(
      (std::pair<const data::ItemUseTarget,std::pair<std::string,std::string > > *const)(v1 + 1152),
      (data::ItemUseTarget *)(v1 + 144),
      (const std::pair<std::string,std::string > *)(v1 + 576));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, v1 + 144);
    *(_DWORD *)(v1 + 160) = 5;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[36],true>(
      (std::pair<std::string,std::string > *const)(v1 + 672),
      (const char (*)[19])byte_1ADA3CC0,
      (const char (*)[36])"ITEM_USE_TARGET_SPECIFY_DEAD_AVATAR");
    std::pair<data::ItemUseTarget const,std::pair<std::string,std::string>>::pair<data::ItemUseTarget,true>(
      (std::pair<const data::ItemUseTarget,std::pair<std::string,std::string > > *const)(v1 + 1224),
      (data::ItemUseTarget *)(v1 + 160),
      (const std::pair<std::string,std::string > *)(v1 + 672));
    if ( *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 176, v1 + 160);
    *(_DWORD *)(v1 + 176) = 6;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[30],true>(
      (std::pair<std::string,std::string > *const)(v1 + 768),
      (const char (*)[7])byte_1AD44B60,
      (const char (*)[30])"ITEM_USE_TARGET_PLAYER_AVATAR");
    std::pair<data::ItemUseTarget const,std::pair<std::string,std::string>>::pair<data::ItemUseTarget,true>(
      (std::pair<const data::ItemUseTarget,std::pair<std::string,std::string > > *const)(v1 + 1296),
      (data::ItemUseTarget *)(v1 + 176),
      (const std::pair<std::string,std::string > *)(v1 + 768));
    std::allocator<std::pair<data::ItemUseTarget const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::ItemUseTarget,std::pair<std::string,std::string > > > *const)(v1 + 64));
    std::map<data::ItemUseTarget,std::pair<std::string,std::string>>::map(
      &data::getItemUseTargetEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::ItemUseTarget,std::pair<std::string,std::string > > >)__PAIR128__(7LL, v1 + 864),
      (const std::less<data::ItemUseTarget> *)(v1 + 48),
      (const std::map<data::ItemUseTarget,std::pair<std::string,std::string >>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getItemUseTargetEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::ItemUseTarget,std::pair<std::string,std::string>>::~map,
      &data::getItemUseTargetEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::ItemUseTarget const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::ItemUseTarget,std::pair<std::string,std::string > > > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::ItemUseTarget,std::pair<std::string,std::string > > *)(v1 + 1368);
          i != (std::pair<const data::ItemUseTarget,std::pair<std::string,std::string > > *)(v1 + 864);
          std::pair<data::ItemUseTarget const,std::pair<std::string,std::string>>::~pair(i) )
    {
      --i;
    }
    __asan_poison_stack_memory(v1 + 864, 504LL);
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 768));
    v5 = (_DWORD *)(((v1 + 768) >> 3) + 2147450880);
    *v5 = -117901064;
    v5[1] = -117901064;
    *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 672));
    v6 = (_DWORD *)(((v1 + 672) >> 3) + 2147450880);
    *v6 = -117901064;
    v6[1] = -117901064;
    *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 576));
    v7 = (_DWORD *)(((v1 + 576) >> 3) + 2147450880);
    *v7 = -117901064;
    v7[1] = -117901064;
    *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 480));
    v8 = (_DWORD *)(((v1 + 480) >> 3) + 2147450880);
    *v8 = -117901064;
    v8[1] = -117901064;
    *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 384));
    v9 = (_DWORD *)(((v1 + 384) >> 3) + 2147450880);
    *v9 = -117901064;
    v9[1] = -117901064;
    *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 288));
    v10 = (_DWORD *)(((v1 + 288) >> 3) + 2147450880);
    *v10 = -117901064;
    v10[1] = -117901064;
    *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 192));
  }
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF80AC) = 0LL;
    memset(
      (void *)((unsigned __int64)(v3 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v3 + 2147450880 - (((_DWORD)v3 + 2147450888) & 0xFFFFFFF8) + 180) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    __asan_stack_free_5(v1, 1440LL, v12);
  }
  return &data::getItemUseTargetEnumMap[abi:cxx11](void)::m;
};

// Line 450: range 00000000145560E3-0000000014556456
const char *__fastcall data::enumValToStr(data::DocumentType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::DocumentType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::DocumentType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 5 e:449 64 8 8 iter:452 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getDocumentTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::DocumentType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::DocumentType,std::pair<std::string,std::string>>::find(
                                                                                                     map,
                                                                                                     (const std::map<data::DocumentType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::DocumentType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::DocumentType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::DocumentType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::DocumentType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
      "enumValToStr",
      455);
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
    result = "INVALID_DocumentType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::DocumentType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::DocumentType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 462: range 0000000014556457-0000000014556A0F
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::DocumentType>,false,true>::pointer v10; // rax
  data::DocumentType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::DocumentType> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:471 96 8 9 <unknown> 128 8 5 s:461 160 32 9 <unknown> 224 32 9 <unk"
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
    m = data::getDocumentTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::DocumentType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::DocumentType>::find(
                                                                                         m,
                                                                                         (const std::unordered_map<std::string,data::DocumentType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::DocumentType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::DocumentType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::DocumentType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::DocumentType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::DocumentType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
        "enumNameToVal",
        474);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::DocumentType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::DocumentType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
      "enumNameToVal",
      465);
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

// Line 483: range 0000000014556A10-00000000145573D9
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::DocumentType> *i; // r14
  unsigned __int64 v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::DocumentType>,false,true>::pointer v12; // rax
  data::DocumentType second; // ecx
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
                        " <unknown> 144 8 6 it:496 176 8 9 <unknown> 208 8 5 s:482 240 32 9 <unknown> 304 32 9 <unknown> "
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::DocumentType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::DocumentType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, e);
      *(_DWORD *)(v2 + 112) = 0;
      std::pair<std::string const,data::DocumentType>::pair<char const(&)[7],data::DocumentType,true>(
        (std::pair<const std::string,data::DocumentType> *const)(v2 + 432),
        (const char (*)[7])byte_1ADA4160,
        (data::DocumentType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1ADA4160);
      *(_DWORD *)(v2 + 128) = 1;
      std::pair<std::string const,data::DocumentType>::pair<char const(&)[7],data::DocumentType,true>(
        (std::pair<const std::string,data::DocumentType> *const)(v2 + 472),
        (const char (*)[7])byte_1ADA41A0,
        (data::DocumentType *)(v2 + 128));
      std::allocator<std::pair<std::string const,data::DocumentType>>::allocator((std::allocator<std::pair<const std::string,data::DocumentType> > *const)(v2 + 80));
      std::unordered_map<std::string,data::DocumentType>::unordered_map(
        &data::enumStrToVal(char const*,data::DocumentType &)::m,
        (std::initializer_list<std::pair<const std::string,data::DocumentType> >)__PAIR128__(2LL, v2 + 432),
        0LL,
        (const std::unordered_map<std::string,data::DocumentType>::hasher *)(v2 + 48),
        (const std::unordered_map<std::string,data::DocumentType>::key_equal *)(v2 + 64),
        (const std::unordered_map<std::string,data::DocumentType>::allocator_type *)(v2 + 80));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::DocumentType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::DocumentType>::~unordered_map,
        &data::enumStrToVal(char const*,data::DocumentType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::DocumentType>>::~allocator((std::allocator<std::pair<const std::string,data::DocumentType> > *const)(v2 + 80));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::DocumentType> *)(v2 + 512);
            i != (std::pair<const std::string,data::DocumentType> *)(v2 + 432);
            std::pair<std::string const,data::DocumentType>::~pair(i) )
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
    *(std::unordered_map<std::string,data::DocumentType>::iterator *)(v2 + 144) = std::unordered_map<std::string,data::DocumentType>::find(
                                                                                    &data::enumStrToVal(char const*,data::DocumentType &)::m,
                                                                                    (const std::unordered_map<std::string,data::DocumentType>::key_type *)(v2 + 304));
    std::string::~string((void *)(v2 + 304));
    *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 96);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, v2 + 304);
    *(std::unordered_map<std::string,data::DocumentType>::iterator *)(v2 + 176) = std::unordered_map<std::string,data::DocumentType>::end(&data::enumStrToVal(char const*,data::DocumentType &)::m);
    v9 = (char *)(v2 + 176);
    v10 = std::__detail::operator==<std::pair<std::string const,data::DocumentType>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::DocumentType>,true> *)(v2 + 144),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::DocumentType>,true> *)(v2 + 176));
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
        "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
        "enumStrToVal",
        499);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 368),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)(v2 + 208));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 368));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::DocumentType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::DocumentType>,false,true> *const)(v2 + 144));
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
      "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
      "enumStrToVal",
      486);
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

// Line 508: range 00000000145573DA-00000000145573F0
const char *__cdecl data::getDescription(data::DocumentType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 513: range 00000000145573F1-00000000145575A6
bool __cdecl data::isValidDocumentType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::DocumentType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::DocumentType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:514 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidDocumentType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getDocumentTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::DocumentType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::DocumentType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getDocumentTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::DocumentType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::DocumentType,std::pair<std::string,std::string>>::find(
                                                                                                     v6,
                                                                                                     (const std::map<data::DocumentType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::DocumentType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::DocumentType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 519: range 00000000145575A7-0000000014557708
bool __cdecl data::isValidDocumentTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::DocumentType> *v5; // rcx
  const std::unordered_map<std::string,data::DocumentType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidDocumentTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getDocumentTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::DocumentType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::DocumentType>::end(v5);
  v6 = data::getDocumentTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::DocumentType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::DocumentType>::find(
                                                                                       v6,
                                                                                       name);
  result = std::__detail::operator!=<std::pair<std::string const,data::DocumentType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::DocumentType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::DocumentType>,true> *)(v2 + 64));
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

// Line 524: range 0000000014557709-0000000014557B0F
const std::unordered_map<std::string,data::DocumentType> *__cdecl data::getDocumentTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::DocumentType> *i; // r14
  const std::unordered_map<std::string,data::DocumentType> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getDocumentTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556927;
  v3[536862723] = 61956;
  v3[536862726] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getDocumentTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getDocumentTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string const,data::DocumentType>::pair<char const(&)[5],data::DocumentType,true>(
      (std::pair<const std::string,data::DocumentType> *const)(v1 + 112),
      (const char (*)[5])"Book",
      (data::DocumentType *)(v1 + 80));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, "Book");
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string const,data::DocumentType>::pair<char const(&)[6],data::DocumentType,true>(
      (std::pair<const std::string,data::DocumentType> *const)(v1 + 152),
      (const char (*)[6])"Video",
      (data::DocumentType *)(v1 + 96));
    std::allocator<std::pair<std::string const,data::DocumentType>>::allocator((std::allocator<std::pair<const std::string,data::DocumentType> > *const)(v1 + 64));
    std::unordered_map<std::string,data::DocumentType>::unordered_map(
      &data::getDocumentTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::DocumentType> >)__PAIR128__(2LL, v1 + 112),
      0LL,
      (const std::unordered_map<std::string,data::DocumentType>::hasher *)(v1 + 32),
      (const std::unordered_map<std::string,data::DocumentType>::key_equal *)(v1 + 48),
      (const std::unordered_map<std::string,data::DocumentType>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getDocumentTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::DocumentType>::~unordered_map,
      &data::getDocumentTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::DocumentType>>::~allocator((std::allocator<std::pair<const std::string,data::DocumentType> > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::DocumentType> *)(v1 + 192);
          i != (std::pair<const std::string,data::DocumentType> *)(v1 + 112);
          std::pair<std::string const,data::DocumentType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getDocumentTypeNameMap[abi:cxx11](void)::m;
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

// Line 534: range 0000000014557B10-00000000145580CD
const std::map<data::DocumentType,std::pair<std::string,std::string >> *__cdecl data::getDocumentTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::DocumentType,std::pair<std::string,std::string > > *i; // r14
  unsigned __int64 v5; // rax
  _DWORD *v6; // rax
  const std::map<data::DocumentType,std::pair<std::string,std::string >> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getDocumentTypeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getDocumentTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getDocumentTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[5],true>(
      (std::pair<std::string,std::string > *const)(v1 + 112),
      (const char (*)[7])byte_1ADA4160,
      (const char (*)[5])"Book");
    std::pair<data::DocumentType const,std::pair<std::string,std::string>>::pair<data::DocumentType,true>(
      (std::pair<const data::DocumentType,std::pair<std::string,std::string > > *const)(v1 + 304),
      (data::DocumentType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[6],true>(
      (std::pair<std::string,std::string > *const)(v1 + 208),
      (const char (*)[7])byte_1ADA41A0,
      (const char (*)[6])"Video");
    std::pair<data::DocumentType const,std::pair<std::string,std::string>>::pair<data::DocumentType,true>(
      (std::pair<const data::DocumentType,std::pair<std::string,std::string > > *const)(v1 + 376),
      (data::DocumentType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 208));
    std::allocator<std::pair<data::DocumentType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::DocumentType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    std::map<data::DocumentType,std::pair<std::string,std::string>>::map(
      &data::getDocumentTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::DocumentType,std::pair<std::string,std::string > > >)__PAIR128__(2LL, v1 + 304),
      (const std::less<data::DocumentType> *)(v1 + 48),
      (const std::map<data::DocumentType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getDocumentTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::DocumentType,std::pair<std::string,std::string>>::~map,
      &data::getDocumentTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::DocumentType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::DocumentType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::DocumentType,std::pair<std::string,std::string > > *)(v1 + 448);
          i != (std::pair<const data::DocumentType,std::pair<std::string,std::string > > *)(v1 + 304);
          std::pair<data::DocumentType const,std::pair<std::string,std::string>>::~pair(i) )
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
  result = &data::getDocumentTypeEnumMap[abi:cxx11](void)::m;
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

// Line 544: range 00000000145580CE-0000000014558441
const char *__fastcall data::enumValToStr(data::SourceJumpType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::SourceJumpType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::SourceJumpType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 5 e:543 64 8 8 iter:546 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getSourceJumpTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::SourceJumpType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::SourceJumpType,std::pair<std::string,std::string>>::find(map, (const std::map<data::SourceJumpType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::SourceJumpType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::SourceJumpType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::SourceJumpType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::SourceJumpType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
      "enumValToStr",
      549);
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
    result = "INVALID_SourceJumpType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::SourceJumpType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::SourceJumpType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 556: range 0000000014558442-00000000145589FA
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::SourceJumpType>,false,true>::pointer v10; // rax
  data::SourceJumpType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::SourceJumpType> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:565 96 8 9 <unknown> 128 8 5 s:555 160 32 9 <unknown> 224 32 9 <unk"
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
    m = data::getSourceJumpTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::SourceJumpType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::SourceJumpType>::find(
                                                                                           m,
                                                                                           (const std::unordered_map<std::string,data::SourceJumpType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::SourceJumpType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::SourceJumpType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::SourceJumpType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::SourceJumpType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::SourceJumpType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
        "enumNameToVal",
        568);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::SourceJumpType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::SourceJumpType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
      "enumNameToVal",
      559);
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

// Line 577: range 00000000145589FB-00000000145593C4
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::SourceJumpType> *i; // r14
  unsigned __int64 v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::SourceJumpType>,false,true>::pointer v12; // rax
  data::SourceJumpType second; // ecx
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
                        " <unknown> 144 8 6 it:590 176 8 9 <unknown> 208 8 5 s:576 240 32 9 <unknown> 304 32 9 <unknown> "
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::SourceJumpType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::SourceJumpType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, e);
      *(_DWORD *)(v2 + 112) = 1;
      std::pair<std::string const,data::SourceJumpType>::pair<char const(&)[13],data::SourceJumpType,true>(
        (std::pair<const std::string,data::SourceJumpType> *const)(v2 + 432),
        (const char (*)[13])byte_1ADA44C0,
        (data::SourceJumpType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1ADA44C0);
      *(_DWORD *)(v2 + 128) = 2;
      std::pair<std::string const,data::SourceJumpType>::pair<char const(&)[7],data::SourceJumpType,true>(
        (std::pair<const std::string,data::SourceJumpType> *const)(v2 + 472),
        (const char (*)[7])byte_1ADA4500,
        (data::SourceJumpType *)(v2 + 128));
      std::allocator<std::pair<std::string const,data::SourceJumpType>>::allocator((std::allocator<std::pair<const std::string,data::SourceJumpType> > *const)(v2 + 80));
      std::unordered_map<std::string,data::SourceJumpType>::unordered_map(
        &data::enumStrToVal(char const*,data::SourceJumpType &)::m,
        (std::initializer_list<std::pair<const std::string,data::SourceJumpType> >)__PAIR128__(2LL, v2 + 432),
        0LL,
        (const std::unordered_map<std::string,data::SourceJumpType>::hasher *)(v2 + 48),
        (const std::unordered_map<std::string,data::SourceJumpType>::key_equal *)(v2 + 64),
        (const std::unordered_map<std::string,data::SourceJumpType>::allocator_type *)(v2 + 80));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::SourceJumpType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::SourceJumpType>::~unordered_map,
        &data::enumStrToVal(char const*,data::SourceJumpType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::SourceJumpType>>::~allocator((std::allocator<std::pair<const std::string,data::SourceJumpType> > *const)(v2 + 80));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::SourceJumpType> *)(v2 + 512);
            i != (std::pair<const std::string,data::SourceJumpType> *)(v2 + 432);
            std::pair<std::string const,data::SourceJumpType>::~pair(i) )
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
    *(std::unordered_map<std::string,data::SourceJumpType>::iterator *)(v2 + 144) = std::unordered_map<std::string,data::SourceJumpType>::find(
                                                                                      &data::enumStrToVal(char const*,data::SourceJumpType &)::m,
                                                                                      (const std::unordered_map<std::string,data::SourceJumpType>::key_type *)(v2 + 304));
    std::string::~string((void *)(v2 + 304));
    *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 96);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, v2 + 304);
    *(std::unordered_map<std::string,data::SourceJumpType>::iterator *)(v2 + 176) = std::unordered_map<std::string,data::SourceJumpType>::end(&data::enumStrToVal(char const*,data::SourceJumpType &)::m);
    v9 = (char *)(v2 + 176);
    v10 = std::__detail::operator==<std::pair<std::string const,data::SourceJumpType>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::SourceJumpType>,true> *)(v2 + 144),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::SourceJumpType>,true> *)(v2 + 176));
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
        "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
        "enumStrToVal",
        593);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 368),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)(v2 + 208));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 368));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::SourceJumpType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::SourceJumpType>,false,true> *const)(v2 + 144));
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
      "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
      "enumStrToVal",
      580);
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

// Line 602: range 00000000145593C5-00000000145593DB
const char *__cdecl data::getDescription(data::SourceJumpType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 607: range 00000000145593DC-0000000014559591
bool __cdecl data::isValidSourceJumpType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::SourceJumpType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::SourceJumpType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:608 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidSourceJumpType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getSourceJumpTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::SourceJumpType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::SourceJumpType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getSourceJumpTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::SourceJumpType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::SourceJumpType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::SourceJumpType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::SourceJumpType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::SourceJumpType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 613: range 0000000014559592-00000000145596F3
bool __cdecl data::isValidSourceJumpTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::SourceJumpType> *v5; // rcx
  const std::unordered_map<std::string,data::SourceJumpType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidSourceJumpTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getSourceJumpTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::SourceJumpType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::SourceJumpType>::end(v5);
  v6 = data::getSourceJumpTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::SourceJumpType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::SourceJumpType>::find(
                                                                                         v6,
                                                                                         name);
  result = std::__detail::operator!=<std::pair<std::string const,data::SourceJumpType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::SourceJumpType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::SourceJumpType>,true> *)(v2 + 64));
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

// Line 618: range 00000000145596F4-0000000014559BB6
const std::unordered_map<std::string,data::SourceJumpType> *__cdecl data::getSourceJumpTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::SourceJumpType> *i; // r14
  const std::unordered_map<std::string,data::SourceJumpType> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getSourceJumpTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556927;
  v3[536862723] = -234556924;
  v3[536862727] = -218103808;
  v3[536862728] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getSourceJumpTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getSourceJumpTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string const,data::SourceJumpType>::pair<char const(&)[10],data::SourceJumpType,true>(
      (std::pair<const std::string,data::SourceJumpType> *const)(v1 + 128),
      (const char (*)[10])"JUMP_NONE",
      (data::SourceJumpType *)(v1 + 80));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, "JUMP_NONE");
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string const,data::SourceJumpType>::pair<char const(&)[19],data::SourceJumpType,true>(
      (std::pair<const std::string,data::SourceJumpType> *const)(v1 + 168),
      (const char (*)[19])"JUMP_INVESTIGATION",
      (data::SourceJumpType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "JUMP_INVESTIGATION");
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string const,data::SourceJumpType>::pair<char const(&)[10],data::SourceJumpType,true>(
      (std::pair<const std::string,data::SourceJumpType> *const)(v1 + 208),
      (const char (*)[10])"JUMP_MALL",
      (data::SourceJumpType *)(v1 + 112));
    std::allocator<std::pair<std::string const,data::SourceJumpType>>::allocator((std::allocator<std::pair<const std::string,data::SourceJumpType> > *const)(v1 + 64));
    std::unordered_map<std::string,data::SourceJumpType>::unordered_map(
      &data::getSourceJumpTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::SourceJumpType> >)__PAIR128__(3LL, v1 + 128),
      0LL,
      (const std::unordered_map<std::string,data::SourceJumpType>::hasher *)(v1 + 32),
      (const std::unordered_map<std::string,data::SourceJumpType>::key_equal *)(v1 + 48),
      (const std::unordered_map<std::string,data::SourceJumpType>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getSourceJumpTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::SourceJumpType>::~unordered_map,
      &data::getSourceJumpTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::SourceJumpType>>::~allocator((std::allocator<std::pair<const std::string,data::SourceJumpType> > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::SourceJumpType> *)(v1 + 248);
          i != (std::pair<const std::string,data::SourceJumpType> *)(v1 + 128);
          std::pair<std::string const,data::SourceJumpType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getSourceJumpTypeNameMap[abi:cxx11](void)::m;
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

// Line 629: range 0000000014559BB7-000000001455A2B5
const std::map<data::SourceJumpType,std::pair<std::string,std::string >> *__cdecl data::getSourceJumpTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::SourceJumpType,std::pair<std::string,std::string > > *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getSourceJumpTypeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getSourceJumpTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getSourceJumpTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[10],true>(
      (std::pair<std::string,std::string > *const)(v1 + 128),
      (const char (*)[1])byte_1ACFAB80,
      (const char (*)[10])"JUMP_NONE");
    std::pair<data::SourceJumpType const,std::pair<std::string,std::string>>::pair<data::SourceJumpType,true>(
      (std::pair<const data::SourceJumpType,std::pair<std::string,std::string > > *const)(v1 + 416),
      (data::SourceJumpType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[19],true>(
      (std::pair<std::string,std::string > *const)(v1 + 224),
      (const char (*)[13])byte_1ADA44C0,
      (const char (*)[19])"JUMP_INVESTIGATION");
    std::pair<data::SourceJumpType const,std::pair<std::string,std::string>>::pair<data::SourceJumpType,true>(
      (std::pair<const data::SourceJumpType,std::pair<std::string,std::string > > *const)(v1 + 488),
      (data::SourceJumpType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 224));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[10],true>(
      (std::pair<std::string,std::string > *const)(v1 + 320),
      (const char (*)[7])byte_1ADA4500,
      (const char (*)[10])"JUMP_MALL");
    std::pair<data::SourceJumpType const,std::pair<std::string,std::string>>::pair<data::SourceJumpType,true>(
      (std::pair<const data::SourceJumpType,std::pair<std::string,std::string > > *const)(v1 + 560),
      (data::SourceJumpType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 320));
    std::allocator<std::pair<data::SourceJumpType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::SourceJumpType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    std::map<data::SourceJumpType,std::pair<std::string,std::string>>::map(
      &data::getSourceJumpTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::SourceJumpType,std::pair<std::string,std::string > > >)__PAIR128__(3LL, v1 + 416),
      (const std::less<data::SourceJumpType> *)(v1 + 48),
      (const std::map<data::SourceJumpType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getSourceJumpTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::SourceJumpType,std::pair<std::string,std::string>>::~map,
      &data::getSourceJumpTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::SourceJumpType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::SourceJumpType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::SourceJumpType,std::pair<std::string,std::string > > *)(v1 + 632);
          i != (std::pair<const data::SourceJumpType,std::pair<std::string,std::string > > *)(v1 + 416);
          std::pair<data::SourceJumpType const,std::pair<std::string,std::string>>::~pair(i) )
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
  return &data::getSourceJumpTypeEnumMap[abi:cxx11](void)::m;
};

// Line 640: range 000000001455A2B6-000000001455A629
const char *__fastcall data::enumValToStr(data::MaterialExpireType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::MaterialExpireType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::MaterialExpireType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 5 e:639 64 8 8 iter:642 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getMaterialExpireTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::MaterialExpireType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::MaterialExpireType,std::pair<std::string,std::string>>::find(map, (const std::map<data::MaterialExpireType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::MaterialExpireType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::MaterialExpireType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::MaterialExpireType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::MaterialExpireType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
      "enumValToStr",
      645);
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
    result = "INVALID_MaterialExpireType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::MaterialExpireType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::MaterialExpireType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 652: range 000000001455A62A-000000001455ABE2
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::MaterialExpireType>,false,true>::pointer v10; // rax
  data::MaterialExpireType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::MaterialExpireType> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:661 96 8 9 <unknown> 128 8 5 s:651 160 32 9 <unknown> 224 32 9 <unk"
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
    m = data::getMaterialExpireTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::MaterialExpireType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::MaterialExpireType>::find(
                                                                                               m,
                                                                                               (const std::unordered_map<std::string,data::MaterialExpireType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::MaterialExpireType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::MaterialExpireType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::MaterialExpireType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::MaterialExpireType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::MaterialExpireType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
        "enumNameToVal",
        664);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::MaterialExpireType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::MaterialExpireType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
      "enumNameToVal",
      655);
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

// Line 673: range 000000001455ABE3-000000001455B63E
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::MaterialExpireType> *i; // r14
  unsigned __int64 v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::MaterialExpireType>,false,true>::pointer v12; // rax
  data::MaterialExpireType second; // ecx
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
                        " <unknown> 144 4 9 <unknown> 160 8 6 it:687 192 8 9 <unknown> 224 8 5 s:672 256 32 9 <unknown> 3"
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::MaterialExpireType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::MaterialExpireType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, e);
      *(_DWORD *)(v2 + 112) = 1;
      std::pair<std::string const,data::MaterialExpireType>::pair<char const(&)[16],data::MaterialExpireType,true>(
        (std::pair<const std::string,data::MaterialExpireType> *const)(v2 + 448),
        (const char (*)[16])byte_1ADA4860,
        (data::MaterialExpireType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1ADA4860);
      *(_DWORD *)(v2 + 128) = 2;
      std::pair<std::string const,data::MaterialExpireType>::pair<char const(&)[16],data::MaterialExpireType,true>(
        (std::pair<const std::string,data::MaterialExpireType> *const)(v2 + 488),
        (const char (*)[16])byte_1ADA48A0,
        (data::MaterialExpireType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, byte_1ADA48A0);
      *(_DWORD *)(v2 + 144) = 3;
      std::pair<std::string const,data::MaterialExpireType>::pair<char const(&)[16],data::MaterialExpireType,true>(
        (std::pair<const std::string,data::MaterialExpireType> *const)(v2 + 528),
        (const char (*)[16])byte_1ADA48E0,
        (data::MaterialExpireType *)(v2 + 144));
      std::allocator<std::pair<std::string const,data::MaterialExpireType>>::allocator((std::allocator<std::pair<const std::string,data::MaterialExpireType> > *const)(v2 + 80));
      std::unordered_map<std::string,data::MaterialExpireType>::unordered_map(
        &data::enumStrToVal(char const*,data::MaterialExpireType &)::m,
        (std::initializer_list<std::pair<const std::string,data::MaterialExpireType> >)__PAIR128__(3LL, v2 + 448),
        0LL,
        (const std::unordered_map<std::string,data::MaterialExpireType>::hasher *)(v2 + 48),
        (const std::unordered_map<std::string,data::MaterialExpireType>::key_equal *)(v2 + 64),
        (const std::unordered_map<std::string,data::MaterialExpireType>::allocator_type *)(v2 + 80));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::MaterialExpireType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::MaterialExpireType>::~unordered_map,
        &data::enumStrToVal(char const*,data::MaterialExpireType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::MaterialExpireType>>::~allocator((std::allocator<std::pair<const std::string,data::MaterialExpireType> > *const)(v2 + 80));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::MaterialExpireType> *)(v2 + 568);
            i != (std::pair<const std::string,data::MaterialExpireType> *)(v2 + 448);
            std::pair<std::string const,data::MaterialExpireType>::~pair(i) )
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
    *(std::unordered_map<std::string,data::MaterialExpireType>::iterator *)(v2 + 160) = std::unordered_map<std::string,data::MaterialExpireType>::find(
                                                                                          &data::enumStrToVal(char const*,data::MaterialExpireType &)::m,
                                                                                          (const std::unordered_map<std::string,data::MaterialExpireType>::key_type *)(v2 + 320));
    std::string::~string((void *)(v2 + 320));
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 96);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, v2 + 320);
    *(std::unordered_map<std::string,data::MaterialExpireType>::iterator *)(v2 + 192) = std::unordered_map<std::string,data::MaterialExpireType>::end(&data::enumStrToVal(char const*,data::MaterialExpireType &)::m);
    v9 = (char *)(v2 + 192);
    v10 = std::__detail::operator==<std::pair<std::string const,data::MaterialExpireType>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::MaterialExpireType>,true> *)(v2 + 160),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::MaterialExpireType>,true> *)(v2 + 192));
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
        "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
        "enumStrToVal",
        690);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 384),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)(v2 + 224));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::MaterialExpireType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::MaterialExpireType>,false,true> *const)(v2 + 160));
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
      "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
      "enumStrToVal",
      676);
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

// Line 699: range 000000001455B63F-000000001455B655
const char *__cdecl data::getDescription(data::MaterialExpireType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 704: range 000000001455B656-000000001455B80B
bool __cdecl data::isValidMaterialExpireType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::MaterialExpireType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::MaterialExpireType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:705 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidMaterialExpireType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getMaterialExpireTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::MaterialExpireType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::MaterialExpireType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getMaterialExpireTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::MaterialExpireType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::MaterialExpireType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::MaterialExpireType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::MaterialExpireType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::MaterialExpireType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 710: range 000000001455B80C-000000001455B96D
bool __cdecl data::isValidMaterialExpireTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::MaterialExpireType> *v5; // rcx
  const std::unordered_map<std::string,data::MaterialExpireType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidMaterialExpireTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getMaterialExpireTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::MaterialExpireType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::MaterialExpireType>::end(v5);
  v6 = data::getMaterialExpireTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::MaterialExpireType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::MaterialExpireType>::find(
                                                                                             v6,
                                                                                             name);
  result = std::__detail::operator!=<std::pair<std::string const,data::MaterialExpireType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::MaterialExpireType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::MaterialExpireType>,true> *)(v2 + 64));
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

// Line 715: range 000000001455B96E-000000001455BE30
const std::unordered_map<std::string,data::MaterialExpireType> *__cdecl data::getMaterialExpireTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::MaterialExpireType> *i; // r14
  const std::unordered_map<std::string,data::MaterialExpireType> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getMaterialExpireTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556927;
  v3[536862723] = -234556924;
  v3[536862727] = -218103808;
  v3[536862728] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getMaterialExpireTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getMaterialExpireTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 1;
    std::pair<std::string const,data::MaterialExpireType>::pair<char const(&)[10],data::MaterialExpireType,true>(
      (std::pair<const std::string,data::MaterialExpireType> *const)(v1 + 128),
      (const char (*)[10])"CountDown",
      (data::MaterialExpireType *)(v1 + 80));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, "CountDown");
    *(_DWORD *)(v1 + 96) = 2;
    std::pair<std::string const,data::MaterialExpireType>::pair<char const(&)[9],data::MaterialExpireType,true>(
      (std::pair<const std::string,data::MaterialExpireType> *const)(v1 + 168),
      (const char (*)[9])"DateTime",
      (data::MaterialExpireType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "DateTime");
    *(_DWORD *)(v1 + 112) = 3;
    std::pair<std::string const,data::MaterialExpireType>::pair<char const(&)[19],data::MaterialExpireType,true>(
      (std::pair<const std::string,data::MaterialExpireType> *const)(v1 + 208),
      (const char (*)[19])"DelayWeekCountDown",
      (data::MaterialExpireType *)(v1 + 112));
    std::allocator<std::pair<std::string const,data::MaterialExpireType>>::allocator((std::allocator<std::pair<const std::string,data::MaterialExpireType> > *const)(v1 + 64));
    std::unordered_map<std::string,data::MaterialExpireType>::unordered_map(
      &data::getMaterialExpireTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::MaterialExpireType> >)__PAIR128__(3LL, v1 + 128),
      0LL,
      (const std::unordered_map<std::string,data::MaterialExpireType>::hasher *)(v1 + 32),
      (const std::unordered_map<std::string,data::MaterialExpireType>::key_equal *)(v1 + 48),
      (const std::unordered_map<std::string,data::MaterialExpireType>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getMaterialExpireTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::MaterialExpireType>::~unordered_map,
      &data::getMaterialExpireTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::MaterialExpireType>>::~allocator((std::allocator<std::pair<const std::string,data::MaterialExpireType> > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::MaterialExpireType> *)(v1 + 248);
          i != (std::pair<const std::string,data::MaterialExpireType> *)(v1 + 128);
          std::pair<std::string const,data::MaterialExpireType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getMaterialExpireTypeNameMap[abi:cxx11](void)::m;
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

// Line 726: range 000000001455BE31-000000001455C52F
const std::map<data::MaterialExpireType,std::pair<std::string,std::string >> *__cdecl data::getMaterialExpireTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::MaterialExpireType,std::pair<std::string,std::string > > *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getMaterialExpireTypeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getMaterialExpireTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getMaterialExpireTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[16],char const(&)[10],true>(
      (std::pair<std::string,std::string > *const)(v1 + 128),
      (const char (*)[16])byte_1ADA4860,
      (const char (*)[10])"CountDown");
    std::pair<data::MaterialExpireType const,std::pair<std::string,std::string>>::pair<data::MaterialExpireType,true>(
      (std::pair<const data::MaterialExpireType,std::pair<std::string,std::string > > *const)(v1 + 416),
      (data::MaterialExpireType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[16],char const(&)[9],true>(
      (std::pair<std::string,std::string > *const)(v1 + 224),
      (const char (*)[16])byte_1ADA48A0,
      (const char (*)[9])"DateTime");
    std::pair<data::MaterialExpireType const,std::pair<std::string,std::string>>::pair<data::MaterialExpireType,true>(
      (std::pair<const data::MaterialExpireType,std::pair<std::string,std::string > > *const)(v1 + 488),
      (data::MaterialExpireType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 224));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 3;
    std::pair<std::string,std::string>::pair<char const(&)[16],char const(&)[19],true>(
      (std::pair<std::string,std::string > *const)(v1 + 320),
      (const char (*)[16])byte_1ADA48E0,
      (const char (*)[19])"DelayWeekCountDown");
    std::pair<data::MaterialExpireType const,std::pair<std::string,std::string>>::pair<data::MaterialExpireType,true>(
      (std::pair<const data::MaterialExpireType,std::pair<std::string,std::string > > *const)(v1 + 560),
      (data::MaterialExpireType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 320));
    std::allocator<std::pair<data::MaterialExpireType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::MaterialExpireType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    std::map<data::MaterialExpireType,std::pair<std::string,std::string>>::map(
      &data::getMaterialExpireTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::MaterialExpireType,std::pair<std::string,std::string > > >)__PAIR128__(3LL, v1 + 416),
      (const std::less<data::MaterialExpireType> *)(v1 + 48),
      (const std::map<data::MaterialExpireType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getMaterialExpireTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::MaterialExpireType,std::pair<std::string,std::string>>::~map,
      &data::getMaterialExpireTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::MaterialExpireType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::MaterialExpireType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::MaterialExpireType,std::pair<std::string,std::string > > *)(v1 + 632);
          i != (std::pair<const data::MaterialExpireType,std::pair<std::string,std::string > > *)(v1 + 416);
          std::pair<data::MaterialExpireType const,std::pair<std::string,std::string>>::~pair(i) )
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
  return &data::getMaterialExpireTypeEnumMap[abi:cxx11](void)::m;
};

// Line 738: range 000000001455C530-000000001455CD70
int32_t __cdecl data::ItemUseConfig::init(data::ItemUseConfig *const this, const common::tools::TxtFile::Row *row)
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
                        " 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 256 12 col_name:739";
  *(_QWORD *)(v2 + 16) = data::ItemUseConfig::init;
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
    &byte_1ADA4AE0,
    (const std::allocator<char> *)(v2 + 48));
  v5 = common::tools::TxtFile::Row::assignToEnum<data::ItemUseOp>(row, (const std::string *)(v2 + 96), &this->use_op) != 0;
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
      "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
      "init",
      743);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 160),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v6, (const char (*)[27])byte_1ADA4B20);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    result = -1;
    goto LABEL_18;
  }
  std::vector<std::string>::resize(&this->use_param, 5uLL);
  array_count = 0;
  for ( i = 0; ; ++i )
  {
    if ( i > 4 )
    {
      std::vector<std::string>::resize(&this->use_param, array_count);
      result = 0;
      goto LABEL_18;
    }
    snprintf((char *)(v2 + 416), 0x100uLL, &byte_1AD3A020, i + 1);
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
  v9 = std::vector<std::string>::operator[](&this->use_param, i);
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
    "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
    "init",
    755);
  v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v2 + 352),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v10, (const char (*)[14])byte_1AD38B80);
  v12 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(v11, (const char (*)[256])(v2 + 416));
  common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])byte_1AD38BC0);
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

// Line 767: range 000000001455CD72-000000001456293D
int32_t __cdecl data::MaterialExcelConfig::init(
        data::MaterialExcelConfig *const this,
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
  data::ItemUseOp *p_use_op; // r13
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  std::vector<data::ItemUseConfig>::reference v45; // rax
  bool v46; // r13
  std::vector<data::ItemUseConfig>::reference v47; // rax
  std::string *v48; // r13
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  std::vector<data::ItemUseConfig>::reference v52; // rax
  bool v53; // r13
  common::milog::MiLogStream *v54; // rax
  bool v55; // r13
  common::milog::MiLogStream *v56; // rax
  bool v57; // r13
  common::milog::MiLogStream *v58; // rax
  bool v59; // r13
  common::milog::MiLogStream *v60; // rax
  unsigned __int64 v61; // rax
  _DWORD *v62; // rax
  bool v63; // r15
  unsigned __int64 v64; // rax
  char *k; // r13
  _DWORD *v66; // rax
  common::milog::MiLogStream *v67; // rax
  bool v68; // r13
  common::milog::MiLogStream *v69; // rax
  bool v70; // r13
  common::milog::MiLogStream *v71; // rax
  unsigned __int64 v72; // rax
  _DWORD *v73; // rax
  bool v74; // r15
  unsigned __int64 v75; // rax
  char *m; // r13
  _DWORD *v77; // rax
  common::milog::MiLogStream *v78; // rax
  bool v79; // r13
  common::milog::MiLogStream *v80; // rax
  unsigned __int64 v81; // rax
  _DWORD *v82; // rax
  bool v83; // r15
  unsigned __int64 v84; // rax
  char *n; // r13
  _DWORD *v86; // rax
  common::milog::MiLogStream *v87; // rax
  bool v88; // r13
  common::milog::MiLogStream *v89; // rax
  bool v90; // r13
  common::milog::MiLogStream *v91; // rax
  std::initializer_list<std::string > __l; // [rsp+10h] [rbp-15C0h]
  std::initializer_list<std::string > v94; // [rsp+20h] [rbp-15B0h]
  std::initializer_list<std::string > v95; // [rsp+30h] [rbp-15A0h]
  uint32_t array_count; // [rsp+54h] [rbp-157Ch]
  uint32_t array_counta; // [rsp+54h] [rbp-157Ch]
  uint32_t i; // [rsp+58h] [rbp-1578h]
  uint32_t j; // [rsp+5Ch] [rbp-1574h]
  char v100[5488]; // [rsp+60h] [rbp-1570h] BYREF

  v2 = (unsigned __int64)v100;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_7(5440LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "108 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 "
                        "9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 <unk"
                        "nown> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 288 1 9 <unknown> "
                        "304 1 9 <unknown> 320 1 9 <unknown> 336 1 9 <unknown> 352 1 9 <unknown> 368 1 9 <unknown> 384 1 "
                        "9 <unknown> 400 1 9 <unknown> 416 1 9 <unknown> 432 1 9 <unknown> 448 1 9 <unknown> 464 1 9 <unk"
                        "nown> 480 1 9 <unknown> 496 1 9 <unknown> 512 1 9 <unknown> 528 1 9 <unknown> 544 1 9 <unknown> "
                        "560 1 9 <unknown> 576 1 9 <unknown> 592 1 9 <unknown> 608 1 9 <unknown> 624 1 9 <unknown> 640 1 "
                        "9 <unknown> 656 1 9 <unknown> 672 24 9 <unknown> 736 24 9 <unknown> 800 24 9 <unknown> 864 32 11"
                        " val_str:770 928 32 9 <unknown> 992 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <unknown> 1184 "
                        "32 9 <unknown> 1248 32 9 <unknown> 1312 32 9 <unknown> 1376 32 9 <unknown> 1440 32 9 <unknown> 1"
                        "504 32 9 <unknown> 1568 32 9 <unknown> 1632 32 9 <unknown> 1696 32 9 <unknown> 1760 32 9 <unknow"
                        "n> 1824 32 9 <unknown> 1888 32 9 <unknown> 1952 32 9 <unknown> 2016 32 9 <unknown> 2080 32 9 <un"
                        "known> 2144 32 9 <unknown> 2208 32 9 <unknown> 2272 32 9 <unknown> 2336 32 9 <unknown> 2400 32 9"
                        " <unknown> 2464 32 9 <unknown> 2528 32 9 <unknown> 2592 32 9 <unknown> 2656 32 9 <unknown> 2720 "
                        "32 9 <unknown> 2784 32 9 <unknown> 2848 32 9 <unknown> 2912 32 9 <unknown> 2976 32 9 <unknown> 3"
                        "040 32 9 <unknown> 3104 32 9 <unknown> 3168 32 9 <unknown> 3232 32 9 <unknown> 3296 32 9 <unknow"
                        "n> 3360 32 9 <unknown> 3424 32 9 <unknown> 3488 32 9 <unknown> 3552 32 9 <unknown> 3616 32 9 <un"
                        "known> 3680 32 9 <unknown> 3744 32 9 <unknown> 3808 32 9 <unknown> 3872 32 9 <unknown> 3936 32 9"
                        " <unknown> 4000 32 9 <unknown> 4064 32 9 <unknown> 4128 32 9 <unknown> 4192 32 9 <unknown> 4256 "
                        "32 9 <unknown> 4320 32 9 <unknown> 4384 32 9 <unknown> 4448 32 9 <unknown> 4512 32 9 <unknown> 4"
                        "576 32 9 <unknown> 4640 32 9 <unknown> 4704 32 9 <unknown> 4768 32 9 <unknown> 4832 64 9 <unknow"
                        "n> 4928 64 9 <unknown> 5024 64 9 <unknown> 5120 256 12 col_name:768";
  *(_QWORD *)(v2 + 16) = data::MaterialExcelConfig::init;
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
  v4[536862741] = -234881024;
  v4[536862742] = -218959118;
  v4[536862743] = -234881024;
  v4[536862744] = -218959118;
  v4[536862745] = -234881024;
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
  v4[536862873] = -218959118;
  v4[536862876] = -218959118;
  v4[536862879] = -218959118;
  v4[536862888] = -202116109;
  v4[536862889] = -202116109;
  std::string::basic_string(v2 + 864);
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 928),
    "ID",
    (const std::allocator<char> *)(v2 + 48));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 928), &this->id) != 0;
  std::string::~string((void *)(v2 + 928));
  *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
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
      "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
      "init",
      773);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 992),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v6, (const char (*)[23])byte_1AD3A120);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 992));
    *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
    goto LABEL_148;
  }
  *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 1056),
    &byte_1AD3FD80,
    (const std::allocator<char> *)(v2 + 64));
  v8 = common::tools::TxtFile::Row::assignToEnum<data::ItemType>(
         row,
         (const std::string *)(v2 + 1056),
         &this->item_type) != 0;
  std::string::~string((void *)(v2 + 1056));
  *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 64);
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
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
      "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
      "init",
      778);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 1120),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v9, (const char (*)[27])byte_1AD3FDC0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1120));
    *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
    goto LABEL_148;
  }
  *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 80);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 1184),
    &byte_1ADA53A0,
    (const std::allocator<char> *)(v2 + 80));
  v10 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 1184), &this->weight) != 0;
  std::string::~string((void *)(v2 + 1184));
  *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 80);
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
  if ( v10 )
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
      "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
      "init",
      783);
    v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 1248),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v11, (const char (*)[27])byte_1ADA53E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1248));
    *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
    goto LABEL_148;
  }
  *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 96);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 1312),
    &byte_1ADA5420,
    (const std::allocator<char> *)(v2 + 96));
  v12 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 1312), &this->rank) != 0;
  std::string::~string((void *)(v2 + 1312));
  *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 96);
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v12 )
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
      "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
      "init",
      788);
    v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 1376),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v13, (const char (*)[33])byte_1ADA5460);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1376));
    *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
    goto LABEL_148;
  }
  *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 112);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 1440),
    &byte_1ADA54C0,
    (const std::allocator<char> *)(v2 + 112));
  v14 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 1440), &this->gadget_id) != 0;
  std::string::~string((void *)(v2 + 1440));
  *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 112);
  *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
  if ( v14 )
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
      "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
      "init",
      793);
    v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 1504),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v15, (const char (*)[29])byte_1ADA5500);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1504));
    *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
    goto LABEL_148;
  }
  *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 128);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 1568),
    &byte_1ADA5540,
    (const std::allocator<char> *)(v2 + 128));
  v16 = common::tools::TxtFile::Row::assignToNum<bool>(row, (const std::string *)(v2 + 1568), &this->dropable) != 0;
  std::string::~string((void *)(v2 + 1568));
  *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 128);
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v16 )
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
      "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
      "init",
      798);
    v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 1632),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v17, (const char (*)[30])byte_1ADA5580);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1632));
    *(_DWORD *)(((v2 + 1632) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
    goto LABEL_148;
  }
  *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 144);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 1696),
    &byte_1ADA55C0,
    (const std::allocator<char> *)(v2 + 144));
  v18 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 1696), &this->use_level) != 0;
  std::string::~string((void *)(v2 + 1696));
  *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 144);
  *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
  if ( v18 )
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
      "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
      "init",
      803);
    v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 1760),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v19, (const char (*)[33])byte_1ADA5600);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1760));
    *(_DWORD *)(((v2 + 1760) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
    goto LABEL_148;
  }
  *(_DWORD *)(((v2 + 1824) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 160);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 1824),
    &byte_1ADA5660,
    (const std::allocator<char> *)(v2 + 160));
  v20 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
          row,
          (const std::string *)(v2 + 1824),
          &this->global_item_limit) != 0;
  std::string::~string((void *)(v2 + 1824));
  *(_DWORD *)(((v2 + 1824) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 160);
  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
  if ( v20 )
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
      "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
      "init",
      808);
    v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 1888),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v21, (const char (*)[39])byte_1ADA56A0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1888));
    *(_DWORD *)(((v2 + 1888) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
    goto LABEL_148;
  }
  *(_DWORD *)(((v2 + 1952) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 176);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 1952),
    &byte_1ADA5700,
    (const std::allocator<char> *)(v2 + 176));
  v22 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 1952), &this->control_type) != 0;
  std::string::~string((void *)(v2 + 1952));
  *(_DWORD *)(((v2 + 1952) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 176);
  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
  if ( v22 )
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
      "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
      "init",
      813);
    v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 2016),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v23, (const char (*)[36])byte_1ADA5740);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2016));
    *(_DWORD *)(((v2 + 2016) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
    goto LABEL_148;
  }
  *(_DWORD *)(((v2 + 2080) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 192);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 2080),
    &byte_1ADA57A0,
    (const std::allocator<char> *)(v2 + 192));
  v24 = common::tools::TxtFile::Row::assignToEnum<data::MaterialType>(
          row,
          (const std::string *)(v2 + 2080),
          &this->material_type) != 0;
  std::string::~string((void *)(v2 + 2080));
  *(_DWORD *)(((v2 + 2080) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 192);
  *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
  if ( v24 )
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
      "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
      "init",
      818);
    v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 2144),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v25, (const char (*)[33])byte_1ADA57E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2144));
    *(_DWORD *)(((v2 + 2144) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
    goto LABEL_148;
  }
  *(_DWORD *)(((v2 + 2208) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 208);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 2208),
    &byte_1ADA5840,
    (const std::allocator<char> *)(v2 + 208));
  v26 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 2208), &this->cd_time) != 0;
  std::string::~string((void *)(v2 + 2208));
  *(_DWORD *)(((v2 + 2208) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 208);
  *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
  if ( v26 )
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
      "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
      "init",
      823);
    v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 2272),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v27, (const char (*)[33])byte_1ADA5880);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2272));
    *(_DWORD *)(((v2 + 2272) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
    goto LABEL_148;
  }
  *(_DWORD *)(((v2 + 2336) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 224);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 2336),
    &byte_1ADA58E0,
    (const std::allocator<char> *)(v2 + 224));
  v28 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 2336), &this->cd_group) != 0;
  std::string::~string((void *)(v2 + 2336));
  *(_DWORD *)(((v2 + 2336) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 224);
  *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
  if ( v28 )
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
      "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
      "init",
      828);
    v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 2400),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v29, (const char (*)[30])byte_1ADA5920);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2400));
    *(_DWORD *)(((v2 + 2400) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
    goto LABEL_148;
  }
  *(_DWORD *)(((v2 + 2464) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 240);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 2464),
    &byte_1ADA5960,
    (const std::allocator<char> *)(v2 + 240));
  v30 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
          row,
          (const std::string *)(v2 + 2464),
          &this->stack_limit) != 0;
  std::string::~string((void *)(v2 + 2464));
  *(_DWORD *)(((v2 + 2464) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 240);
  *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
  if ( v30 )
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
      "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
      "init",
      833);
    v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 2528),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v31, (const char (*)[33])byte_1ADA59A0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2528));
    *(_DWORD *)(((v2 + 2528) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
    goto LABEL_148;
  }
  *(_DWORD *)(((v2 + 2592) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 256);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 2592),
    &byte_1ADA5A00,
    (const std::allocator<char> *)(v2 + 256));
  v32 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
          row,
          (const std::string *)(v2 + 2592),
          &this->max_use_count) != 0;
  std::string::~string((void *)(v2 + 2592));
  *(_DWORD *)(((v2 + 2592) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 256);
  *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
  if ( v32 )
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
      "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
      "init",
      838);
    v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 2656),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v33, (const char (*)[39])byte_1ADA5A40);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2656));
    *(_DWORD *)(((v2 + 2656) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
    goto LABEL_148;
  }
  *(_DWORD *)(((v2 + 2720) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 272);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 2720),
    &byte_1ADA5AA0,
    (const std::allocator<char> *)(v2 + 272));
  v34 = common::tools::TxtFile::Row::assignToNum<bool>(row, (const std::string *)(v2 + 2720), &this->use_on_gain) != 0;
  std::string::~string((void *)(v2 + 2720));
  *(_DWORD *)(((v2 + 2720) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 272);
  *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
  if ( v34 )
  {
    *(_DWORD *)(((v2 + 2784) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 2784) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 2815) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 2815) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 2784, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 2784),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
      "init",
      843);
    v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 2784),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v35, (const char (*)[36])byte_1ADA5AE0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2784));
    *(_DWORD *)(((v2 + 2784) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
    goto LABEL_148;
  }
  *(_DWORD *)(((v2 + 2848) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 288);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 2848),
    &byte_1ADA5B40,
    (const std::allocator<char> *)(v2 + 288));
  v36 = common::tools::TxtFile::Row::assignToNum<bool>(row, (const std::string *)(v2 + 2848), &this->no_first_get_hint) != 0;
  std::string::~string((void *)(v2 + 2848));
  *(_DWORD *)(((v2 + 2848) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 288);
  *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
  if ( v36 )
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
      "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
      "init",
      848);
    v37 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 2912),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v37, (const char (*)[48])byte_1ADA5B80);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2912));
    *(_DWORD *)(((v2 + 2912) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
    goto LABEL_148;
  }
  *(_DWORD *)(((v2 + 2976) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 304);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 2976),
    &byte_1ADA5BE0,
    (const std::allocator<char> *)(v2 + 304));
  v38 = common::tools::TxtFile::Row::assignToEnum<data::ItemUseTarget>(
          row,
          (const std::string *)(v2 + 2976),
          &this->use_target) != 0;
  std::string::~string((void *)(v2 + 2976));
  *(_DWORD *)(((v2 + 2976) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 304);
  *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
  if ( v38 )
  {
    *(_DWORD *)(((v2 + 3040) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 3040) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 3071) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 3071) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 3040, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 3040),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
      "init",
      853);
    v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 3040),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v39, (const char (*)[27])byte_1ADA5C20);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3040));
    *(_DWORD *)(((v2 + 3040) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
    goto LABEL_148;
  }
  std::vector<data::ItemUseConfig>::resize(&this->item_use, 3uLL);
  array_count = 0;
  for ( i = 0; i <= 2; ++i )
  {
    snprintf((char *)(v2 + 5120), 0x100uLL, asc_1ADA5C60, i + 1);
    *(_DWORD *)(((v2 + 3104) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 320);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 3104),
      (const char *)(v2 + 5120),
      (const std::allocator<char> *)(v2 + 320));
    v40 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 3104));
    std::string::~string((void *)(v2 + 3104));
    *(_DWORD *)(((v2 + 3104) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 320);
    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
    if ( !v40 )
    {
      p_use_op = &std::vector<data::ItemUseConfig>::operator[](&this->item_use, i)->use_op;
      *(_DWORD *)(((v2 + 3168) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 336);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 3168),
        (const char *)(v2 + 5120),
        (const std::allocator<char> *)(v2 + 336));
      LOBYTE(p_use_op) = common::tools::TxtFile::Row::assignToEnum<data::ItemUseOp>(
                           row,
                           (const std::string *)(v2 + 3168),
                           p_use_op) != 0;
      std::string::~string((void *)(v2 + 3168));
      *(_DWORD *)(((v2 + 3168) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 336);
      *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
      if ( (_BYTE)p_use_op )
      {
        *(_DWORD *)(((v2 + 3232) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 3232) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 3263) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 3263) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 3232, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 3232),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
          "init",
          865);
        v42 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 3232),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v43 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v42, (const char (*)[14])byte_1AD38B80);
        v44 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(v43, (const char (*)[256])(v2 + 5120));
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v44, (const char (*)[7])byte_1AD38BC0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3232));
        *(_DWORD *)(((v2 + 3232) >> 3) + 0x7FFF8000) = -117901064;
        v7 = -1;
        goto LABEL_148;
      }
      v45 = std::vector<data::ItemUseConfig>::operator[](&this->item_use, i);
      std::vector<std::string>::resize(&v45->use_param, 5uLL);
      array_counta = 0;
      for ( j = 0; ; ++j )
      {
        if ( j > 4 )
        {
          v52 = std::vector<data::ItemUseConfig>::operator[](&this->item_use, i);
          std::vector<std::string>::resize(&v52->use_param, array_counta);
          array_count = i + 1;
          break;
        }
        snprintf((char *)(v2 + 5120), 0x100uLL, asc_1ADA5CA0, i + 1, j + 1);
        *(_DWORD *)(((v2 + 3296) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 352);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 3296),
          (const char *)(v2 + 5120),
          (const std::allocator<char> *)(v2 + 352));
        v46 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 3296));
        std::string::~string((void *)(v2 + 3296));
        *(_DWORD *)(((v2 + 3296) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 352);
        *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
        if ( !v46 )
        {
          v47 = std::vector<data::ItemUseConfig>::operator[](&this->item_use, i);
          v48 = std::vector<std::string>::operator[](&v47->use_param, j);
          *(_DWORD *)(((v2 + 3360) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 368);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 3360),
            (const char *)(v2 + 5120),
            (const std::allocator<char> *)(v2 + 368));
          LOBYTE(v48) = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 3360), v48) != 0;
          std::string::~string((void *)(v2 + 3360));
          *(_DWORD *)(((v2 + 3360) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 368);
          *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
          if ( (_BYTE)v48 )
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
              "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
              "init",
              877);
            v49 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 3424),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v50 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v49,
                    (const char (*)[14])byte_1AD38B80);
            v51 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                    v50,
                    (const char (*)[256])(v2 + 5120));
            common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v51, (const char (*)[7])byte_1AD38BC0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3424));
            *(_DWORD *)(((v2 + 3424) >> 3) + 0x7FFF8000) = -117901064;
            v7 = -1;
            goto LABEL_148;
          }
          array_counta = j + 1;
        }
      }
    }
  }
  std::vector<data::ItemUseConfig>::resize(&this->item_use, array_count);
  *(_DWORD *)(((v2 + 3488) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 384);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 3488),
    &byte_1ADA5CE0,
    (const std::allocator<char> *)(v2 + 384));
  v53 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 3488), &this->rank_level) != 0;
  std::string::~string((void *)(v2 + 3488));
  *(_DWORD *)(((v2 + 3488) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 384);
  *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
  if ( v53 )
  {
    *(_DWORD *)(((v2 + 3552) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 3552) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 3583) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 3583) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 3552, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 3552),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
      "init",
      890);
    v54 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 3552),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v54, (const char (*)[27])byte_1ADA5D20);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3552));
    *(_DWORD *)(((v2 + 3552) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 3616) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 400);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 3616),
      &byte_1ADA5D60,
      (const std::allocator<char> *)(v2 + 400));
    v55 = common::tools::TxtFile::Row::assignToNum<bool>(row, (const std::string *)(v2 + 3616), &this->auto_enter_bag) != 0;
    std::string::~string((void *)(v2 + 3616));
    *(_DWORD *)(((v2 + 3616) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 400);
    *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
    if ( v55 )
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
        "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
        "init",
        895);
      v56 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 3680),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v56, (const char (*)[33])byte_1ADA5DA0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3680));
      *(_DWORD *)(((v2 + 3680) >> 3) + 0x7FFF8000) = -117901064;
      v7 = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 3744) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 416);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 3744),
        &byte_1ADA5E00,
        (const std::allocator<char> *)(v2 + 416));
      v57 = common::tools::TxtFile::Row::assignToNum<bool>(row, (const std::string *)(v2 + 3744), &this->is_split_drop) != 0;
      std::string::~string((void *)(v2 + 3744));
      *(_DWORD *)(((v2 + 3744) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 416);
      *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
      if ( v57 )
      {
        *(_DWORD *)(((v2 + 3808) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 3808) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 3839) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 3839) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 3808, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 3808),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
          "init",
          900);
        v58 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 3808),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v58, (const char (*)[39])byte_1ADA5E40);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3808));
        *(_DWORD *)(((v2 + 3808) >> 3) + 0x7FFF8000) = -117901064;
        v7 = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 3872) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 432);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 3872),
          &byte_1ADA5EA0,
          (const std::allocator<char> *)(v2 + 432));
        v59 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 3872), (std::string *)(v2 + 864)) != 0;
        std::string::~string((void *)(v2 + 3872));
        *(_DWORD *)(((v2 + 3872) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 432);
        *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = -8;
        if ( v59 )
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
            "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
            "init",
            905);
          v60 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 3936),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v60, (const char (*)[36])byte_1ADA5EE0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3936));
          *(_DWORD *)(((v2 + 3936) >> 3) + 0x7FFF8000) = -117901064;
          v7 = -1;
        }
        else
        {
          v61 = ((v2 + 672) >> 3) + 2147450880;
          *(_WORD *)v61 = 0;
          *(_BYTE *)(v61 + 2) = 0;
          v62 = (_DWORD *)(((v2 + 4832) >> 3) + 2147450880);
          *v62 = 0;
          v62[1] = 0;
          *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 448);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 4832),
            ";",
            (const std::allocator<char> *)(v2 + 448));
          *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 464);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 4864),
            ",",
            (const std::allocator<char> *)(v2 + 464));
          __l._M_array = (std::initializer_list<std::string >::iterator)(v2 + 4832);
          __l._M_len = 2LL;
          *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = 1;
          std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 480));
          std::vector<std::string>::vector(
            (std::vector<std::string> *const)(v2 + 672),
            __l,
            (const std::vector<std::string>::allocator_type *)(v2 + 480));
          v63 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                  (const std::string *)(v2 + 864),
                  (const std::vector<std::string> *)(v2 + 672),
                  &this->satiation_params,
                  1) != 0;
          std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 672));
          v64 = ((v2 + 672) >> 3) + 2147450880;
          *(_WORD *)v64 = -1800;
          *(_BYTE *)(v64 + 2) = -8;
          std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 480));
          *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = -8;
          for ( k = (char *)(v2 + 4896); k != (char *)(v2 + 4832); std::string::~string(k) )
            k -= 32;
          v66 = (_DWORD *)(((v2 + 4832) >> 3) + 2147450880);
          *v66 = -117901064;
          v66[1] = -117901064;
          std::allocator<char>::~allocator(v2 + 464);
          *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = -8;
          std::allocator<char>::~allocator(v2 + 448);
          *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = -8;
          if ( v63 )
          {
            *(_DWORD *)(((v2 + 4000) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 4000) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 4031) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 4031) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 4000, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 4000),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
              "init",
              910);
            v67 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 4000),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v67, (const char (*)[36])byte_1ADA5EE0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4000));
            *(_DWORD *)(((v2 + 4000) >> 3) + 0x7FFF8000) = -117901064;
            v7 = -1;
          }
          else
          {
            *(_DWORD *)(((v2 + 4064) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 496);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 4064),
              &byte_1ADA5F40,
              (const std::allocator<char> *)(v2 + 496));
            v68 = common::tools::TxtFile::Row::assignToEnum<data::MaterialDestroyType>(
                    row,
                    (const std::string *)(v2 + 4064),
                    &this->destroy_rule) != 0;
            std::string::~string((void *)(v2 + 4064));
            *(_DWORD *)(((v2 + 4064) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 496);
            *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = -8;
            if ( v68 )
            {
              *(_DWORD *)(((v2 + 4128) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 4128) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 4159) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 4159) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 4128, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 4128),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
                "init",
                915);
              v69 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 4128),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v69, (const char (*)[33])byte_1ADA5F80);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4128));
              *(_DWORD *)(((v2 + 4128) >> 3) + 0x7FFF8000) = -117901064;
              v7 = -1;
            }
            else
            {
              *(_DWORD *)(((v2 + 4192) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 512);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 4192),
                &byte_1ADA5FE0,
                (const std::allocator<char> *)(v2 + 512));
              v70 = common::tools::TxtFile::Row::assignToStr(
                      row,
                      (const std::string *)(v2 + 4192),
                      (std::string *)(v2 + 864)) != 0;
              std::string::~string((void *)(v2 + 4192));
              *(_DWORD *)(((v2 + 4192) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 512);
              *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = -8;
              if ( v70 )
              {
                *(_DWORD *)(((v2 + 4256) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 4256) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 4287) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 4287) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 4256, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 4256),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
                  "init",
                  920);
                v71 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 4256),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v71, (const char (*)[39])byte_1ADA6020);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4256));
                *(_DWORD *)(((v2 + 4256) >> 3) + 0x7FFF8000) = -117901064;
                v7 = -1;
              }
              else
              {
                v72 = ((v2 + 736) >> 3) + 2147450880;
                *(_WORD *)v72 = 0;
                *(_BYTE *)(v72 + 2) = 0;
                v73 = (_DWORD *)(((v2 + 4928) >> 3) + 2147450880);
                *v73 = 0;
                v73[1] = 0;
                *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 528);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 4928),
                  ";",
                  (const std::allocator<char> *)(v2 + 528));
                *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 544);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 4960),
                  ",",
                  (const std::allocator<char> *)(v2 + 544));
                v94._M_array = (std::initializer_list<std::string >::iterator)(v2 + 4928);
                v94._M_len = 2LL;
                *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = 1;
                std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 560));
                std::vector<std::string>::vector(
                  (std::vector<std::string> *const)(v2 + 736),
                  v94,
                  (const std::vector<std::string>::allocator_type *)(v2 + 560));
                v74 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                        (const std::string *)(v2 + 864),
                        (const std::vector<std::string> *)(v2 + 736),
                        &this->destroy_return_material,
                        1) != 0;
                std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 736));
                v75 = ((v2 + 736) >> 3) + 2147450880;
                *(_WORD *)v75 = -1800;
                *(_BYTE *)(v75 + 2) = -8;
                std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 560));
                *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = -8;
                for ( m = (char *)(v2 + 4992); m != (char *)(v2 + 4928); std::string::~string(m) )
                  m -= 32;
                v77 = (_DWORD *)(((v2 + 4928) >> 3) + 2147450880);
                *v77 = -117901064;
                v77[1] = -117901064;
                std::allocator<char>::~allocator(v2 + 544);
                *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = -8;
                std::allocator<char>::~allocator(v2 + 528);
                *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = -8;
                if ( v74 )
                {
                  *(_DWORD *)(((v2 + 4320) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 4320) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 4351) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 4351) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 4320, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 4320),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
                    "init",
                    925);
                  v78 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 4320),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                    v78,
                    (const char (*)[39])byte_1ADA6020);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4320));
                  *(_DWORD *)(((v2 + 4320) >> 3) + 0x7FFF8000) = -117901064;
                  v7 = -1;
                }
                else
                {
                  *(_DWORD *)(((v2 + 4384) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 576);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 4384),
                    &byte_1ADA6080,
                    (const std::allocator<char> *)(v2 + 576));
                  v79 = common::tools::TxtFile::Row::assignToStr(
                          row,
                          (const std::string *)(v2 + 4384),
                          (std::string *)(v2 + 864)) != 0;
                  std::string::~string((void *)(v2 + 4384));
                  *(_DWORD *)(((v2 + 4384) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 576);
                  *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) = -8;
                  if ( v79 )
                  {
                    *(_DWORD *)(((v2 + 4448) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 4448) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 4479) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 4479) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 4448, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 4448),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
                      "init",
                      930);
                    v80 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 4448),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                      v80,
                      (const char (*)[39])byte_1ADA60C0);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4448));
                    *(_DWORD *)(((v2 + 4448) >> 3) + 0x7FFF8000) = -117901064;
                    v7 = -1;
                  }
                  else
                  {
                    v81 = ((v2 + 800) >> 3) + 2147450880;
                    *(_WORD *)v81 = 0;
                    *(_BYTE *)(v81 + 2) = 0;
                    v82 = (_DWORD *)(((v2 + 5024) >> 3) + 2147450880);
                    *v82 = 0;
                    v82[1] = 0;
                    *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 592);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 5024),
                      ";",
                      (const std::allocator<char> *)(v2 + 592));
                    *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 608);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 5056),
                      ",",
                      (const std::allocator<char> *)(v2 + 608));
                    v95._M_array = (std::initializer_list<std::string >::iterator)(v2 + 5024);
                    v95._M_len = 2LL;
                    *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 624));
                    std::vector<std::string>::vector(
                      (std::vector<std::string> *const)(v2 + 800),
                      v95,
                      (const std::vector<std::string>::allocator_type *)(v2 + 624));
                    v83 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                            (const std::string *)(v2 + 864),
                            (const std::vector<std::string> *)(v2 + 800),
                            &this->destroy_return_material_count,
                            1) != 0;
                    std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 800));
                    v84 = ((v2 + 800) >> 3) + 2147450880;
                    *(_WORD *)v84 = -1800;
                    *(_BYTE *)(v84 + 2) = -8;
                    std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 624));
                    *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) = -8;
                    for ( n = (char *)(v2 + 5088); n != (char *)(v2 + 5024); std::string::~string(n) )
                      n -= 32;
                    v86 = (_DWORD *)(((v2 + 5024) >> 3) + 2147450880);
                    *v86 = -117901064;
                    v86[1] = -117901064;
                    std::allocator<char>::~allocator(v2 + 608);
                    *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) = -8;
                    std::allocator<char>::~allocator(v2 + 592);
                    *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) = -8;
                    if ( v83 )
                    {
                      *(_DWORD *)(((v2 + 4512) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 4512) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 4543) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 4543) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 4512, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 4512),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
                        "init",
                        935);
                      v87 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 4512),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                        v87,
                        (const char (*)[39])byte_1ADA60C0);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4512));
                      *(_DWORD *)(((v2 + 4512) >> 3) + 0x7FFF8000) = -117901064;
                      v7 = -1;
                    }
                    else
                    {
                      *(_DWORD *)(((v2 + 4576) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 640);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 4576),
                        &byte_1AD8F300,
                        (const std::allocator<char> *)(v2 + 640));
                      v88 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                              row,
                              (const std::string *)(v2 + 4576),
                              &this->set_id) != 0;
                      std::string::~string((void *)(v2 + 4576));
                      *(_DWORD *)(((v2 + 4576) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 640);
                      *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) = -8;
                      if ( v88 )
                      {
                        *(_DWORD *)(((v2 + 4640) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v2 + 4640) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v2 + 4671) >> 3) + 0x7FFF8000) != 0
                          && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 4671) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v2 + 4640, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v2 + 4640),
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
                          "init",
                          940);
                        v89 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                (common::milog::MiLogStream *const)(v2 + 4640),
                                (const char (*)[16])"[CONFIG_ERROR] ");
                        common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                          v89,
                          (const char (*)[26])byte_1AD8F340);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4640));
                        *(_DWORD *)(((v2 + 4640) >> 3) + 0x7FFF8000) = -117901064;
                        v7 = -1;
                      }
                      else
                      {
                        *(_DWORD *)(((v2 + 4704) >> 3) + 0x7FFF8000) = 0;
                        *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 656);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 4704),
                          &byte_1ADA6120,
                          (const std::allocator<char> *)(v2 + 656));
                        v90 = common::tools::TxtFile::Row::assignToNum<bool>(
                                row,
                                (const std::string *)(v2 + 4704),
                                &this->is_force_get_hint) != 0;
                        std::string::~string((void *)(v2 + 4704));
                        *(_DWORD *)(((v2 + 4704) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 656);
                        *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) = -8;
                        if ( v90 )
                        {
                          *(_DWORD *)(((v2 + 4768) >> 3) + 0x7FFF8000) = 0;
                          if ( *(char *)(((v2 + 4768) >> 3) + 0x7FFF8000) < 0
                            || *(_BYTE *)(((v2 + 4799) >> 3) + 0x7FFF8000) != 0
                            && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 4799) >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_store_n(v2 + 4768, 32LL);
                          }
                          common::milog::MiLogStream::create(
                            (common::milog::MiLogStream *)(v2 + 4768),
                            &common::milog::MiLogDefault::default_log_obj_,
                            4u,
                            "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
                            "init",
                            945);
                          v91 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                  (common::milog::MiLogStream *const)(v2 + 4768),
                                  (const char (*)[16])"[CONFIG_ERROR] ");
                          common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                            v91,
                            (const char (*)[39])byte_1ADA6160);
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4768));
                          *(_DWORD *)(((v2 + 4768) >> 3) + 0x7FFF8000) = -117901064;
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
LABEL_148:
  std::string::~string((void *)(v2 + 864));
  if ( v100 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8064) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 108) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8278) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862750) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450992 - (((_DWORD)v4 + 2147451000) & 0xFFFFFFF8) + 528) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF82A0) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_7(v2, 5440LL, v100);
  }
  return v7;
};

// Line 953: range 000000001456293E-0000000014562C49
int32_t __cdecl data::DocumentExcelConfig::init(
        data::DocumentExcelConfig *const this,
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
  *(_QWORD *)(v2 + 16) = data::DocumentExcelConfig::init;
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
      "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
      "init",
      956);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v6, (const char (*)[23])byte_1AD3A120);
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

// Line 964: range 0000000014562C4A-00000000145637C3
int32_t __cdecl data::AvatarCardRepeatConfig::init(
        data::AvatarCardRepeatConfig *const this,
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
  int32_t result; // eax
  bool split_list; // [rsp+8h] [rbp-2E8h]
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
                        "9 <unknown> 192 32 11 val_str:965 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 3"
                        "2 9 <unknown> 512 32 9 <unknown> 576 64 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::AvatarCardRepeatConfig::init;
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
    &byte_1ADA62C0,
    (const std::allocator<char> *)(v2 + 48));
  split_list = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 256), (std::string *)(v2 + 192)) != 0;
  std::string::~string((void *)(v2 + 256));
  *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( split_list )
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
      "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
      "init",
      968);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 320),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v5, (const char (*)[27])byte_1ADA6300);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    v7 = ((v2 + 128) >> 3) + 2147450880;
    *(_WORD *)v7 = 0;
    *(_BYTE *)(v7 + 2) = 0;
    v8 = (_DWORD *)(((v2 + 576) >> 3) + 2147450880);
    *v8 = 0;
    v8[1] = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 576),
      ";",
      (const std::allocator<char> *)(v2 + 64));
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 80);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 608),
      ",",
      (const std::allocator<char> *)(v2 + 80));
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
    std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 96));
    std::vector<std::string>::vector(
      (std::vector<std::string> *const)(v2 + 128),
      (std::initializer_list<std::string >)__PAIR128__(2LL, v2 + 576),
      (const std::vector<std::string>::allocator_type *)(v2 + 96));
    v9 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
           (const std::string *)(v2 + 192),
           (const std::vector<std::string> *)(v2 + 128),
           &this->count_interval,
           1) != 0;
    std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 128));
    v10 = ((v2 + 128) >> 3) + 2147450880;
    *(_WORD *)v10 = -1800;
    *(_BYTE *)(v10 + 2) = -8;
    std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 96));
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    for ( i = (char *)(v2 + 640); i != (char *)(v2 + 576); std::string::~string(i) )
      i -= 32;
    v12 = (_DWORD *)(((v2 + 576) >> 3) + 2147450880);
    *v12 = -117901064;
    v12[1] = -117901064;
    std::allocator<char>::~allocator(v2 + 80);
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
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
        4u,
        "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
        "init",
        973);
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 384),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v13, (const char (*)[27])byte_1ADA6300);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 112);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 448),
        &byte_1ADA6340,
        (const std::allocator<char> *)(v2 + 112));
      v14 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 448), &this->trasfer_item) != 0;
      std::string::~string((void *)(v2 + 448));
      *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 112);
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      if ( v14 )
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
          "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
          "init",
          978);
        v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 512),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v15, (const char (*)[33])byte_1ADA6380);
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

// Line 986: range 00000000145637C4-000000001456496C
int32_t __cdecl data::AvatarCardChangeExcelConfig::init(
        data::AvatarCardChangeExcelConfig *const this,
        const common::tools::TxtFile::Row *row)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r14
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  bool v8; // r14
  bool v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::vector<unsigned int> *p_count_interval; // r14
  unsigned __int64 v14; // rax
  _DWORD *v15; // rax
  unsigned __int64 v16; // rax
  char *j; // r14
  _DWORD *v18; // rax
  common::milog::MiLogStream *v19; // rax
  bool v20; // r14
  std::string *p_trasfer_item; // r14
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  bool v26; // [rsp+Fh] [rbp-561h]
  std::initializer_list<std::string > __l; // [rsp+10h] [rbp-560h]
  uint32_t array_count; // [rsp+38h] [rbp-538h]
  uint32_t i; // [rsp+3Ch] [rbp-534h]
  char v30[1328]; // [rsp+40h] [rbp-530h] BYREF

  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1280LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "21 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 24 9 <unknown> 224 32 11 val_str:989 288 32 9 "
                        "<unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <"
                        "unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 64 9 <unknown> 960 256 12 col_name:987";
  *(_QWORD *)(v2 + 16) = data::AvatarCardChangeExcelConfig::init;
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
  v4[536862749] = -218959118;
  v4[536862758] = -202116109;
  v4[536862759] = -202116109;
  std::string::basic_string(v2 + 224);
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 288),
    &byte_1AD45C80,
    (const std::allocator<char> *)(v2 + 32));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 288), &this->avatar_id) != 0;
  std::string::~string((void *)(v2 + 288));
  *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
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
      "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
      "init",
      992);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 352),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v6, (const char (*)[29])byte_1AD45CC0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
    *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
    goto LABEL_30;
  }
  std::vector<data::AvatarCardRepeatConfig>::resize(&this->repeat_transfer_list, 5uLL);
  array_count = 0;
  for ( i = 0; ; ++i )
  {
    if ( i > 4 )
    {
      std::vector<data::AvatarCardRepeatConfig>::resize(&this->repeat_transfer_list, array_count);
      v7 = 0;
      goto LABEL_30;
    }
    snprintf((char *)(v2 + 960), 0x100uLL, asc_1ADA6580, i + 1);
    *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 416),
      (const char *)(v2 + 960),
      (const std::allocator<char> *)(v2 + 48));
    v8 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 416));
    std::string::~string((void *)(v2 + 416));
    *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( !v8 )
    {
      *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 480),
        (const char *)(v2 + 960),
        (const std::allocator<char> *)(v2 + 64));
      v9 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 480), (std::string *)(v2 + 224)) != 0;
      std::string::~string((void *)(v2 + 480));
      *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( v9 )
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
          "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
          "init",
          1004);
        v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 544),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v10, (const char (*)[14])byte_1AD38B80);
        v12 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(v11, (const char (*)[256])(v2 + 960));
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])byte_1AD38BC0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
        *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
        v7 = -1;
        goto LABEL_30;
      }
      p_count_interval = &std::vector<data::AvatarCardRepeatConfig>::operator[](&this->repeat_transfer_list, i)->count_interval;
      v14 = ((v2 + 160) >> 3) + 2147450880;
      *(_WORD *)v14 = 0;
      *(_BYTE *)(v14 + 2) = 0;
      v15 = (_DWORD *)(((v2 + 864) >> 3) + 2147450880);
      *v15 = 0;
      v15[1] = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 864),
        ";",
        (const std::allocator<char> *)(v2 + 80));
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 96);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 896),
        ",",
        (const std::allocator<char> *)(v2 + 96));
      __l._M_array = (std::initializer_list<std::string >::iterator)(v2 + 864);
      __l._M_len = 2LL;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 112));
      std::vector<std::string>::vector(
        (std::vector<std::string> *const)(v2 + 160),
        __l,
        (const std::vector<std::string>::allocator_type *)(v2 + 112));
      v26 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
              (const std::string *)(v2 + 224),
              (const std::vector<std::string> *)(v2 + 160),
              p_count_interval,
              1) != 0;
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 160));
      v16 = ((v2 + 160) >> 3) + 2147450880;
      *(_WORD *)v16 = -1800;
      *(_BYTE *)(v16 + 2) = -8;
      std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 112));
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      for ( j = (char *)(v2 + 928); j != (char *)(v2 + 864); std::string::~string(j) )
        j -= 32;
      v18 = (_DWORD *)(((v2 + 864) >> 3) + 2147450880);
      *v18 = -117901064;
      v18[1] = -117901064;
      std::allocator<char>::~allocator(v2 + 96);
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( v26 )
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
          "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
          "init",
          1009);
        v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 608),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v19, (const char (*)[37])byte_1ADA65C0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
        *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
        v7 = -1;
        goto LABEL_30;
      }
      snprintf((char *)(v2 + 960), 0x100uLL, asc_1ADA6620, i + 1);
      *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 128);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 672),
        (const char *)(v2 + 960),
        (const std::allocator<char> *)(v2 + 128));
      v20 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 672));
      std::string::~string((void *)(v2 + 672));
      *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 128);
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      if ( !v20 )
        break;
    }
LABEL_28:
    ;
  }
  p_trasfer_item = &std::vector<data::AvatarCardRepeatConfig>::operator[](&this->repeat_transfer_list, i)->trasfer_item;
  *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 144);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 736),
    (const char *)(v2 + 960),
    (const std::allocator<char> *)(v2 + 144));
  LOBYTE(p_trasfer_item) = common::tools::TxtFile::Row::assignToStr(
                             row,
                             (const std::string *)(v2 + 736),
                             p_trasfer_item) != 0;
  std::string::~string((void *)(v2 + 736));
  *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 144);
  *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
  if ( !(_BYTE)p_trasfer_item )
  {
    array_count = i + 1;
    goto LABEL_28;
  }
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
    "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
    "init",
    1017);
  v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v2 + 800),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v23 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v22, (const char (*)[14])byte_1AD38B80);
  v24 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(v23, (const char (*)[256])(v2 + 960));
  common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v24, (const char (*)[7])byte_1AD38BC0);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 800));
  *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
  v7 = -1;
LABEL_30:
  std::string::~string((void *)(v2 + 224));
  if ( v30 == (char *)v2 )
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8098) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1280LL, v30);
  }
  return v7;
};

// Line 1029: range 000000001456496E-0000000014564EF6
int32_t __cdecl data::SourceJumpConfig::init(
        data::SourceJumpConfig *const this,
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
  *(_QWORD *)(v2 + 16) = data::SourceJumpConfig::init;
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
    &byte_1ADA5BE0,
    (const std::allocator<char> *)(v2 + 32));
  v5 = common::tools::TxtFile::Row::assignToEnum<data::SourceJumpType>(
         row,
         (const std::string *)(v2 + 64),
         (data::SourceJumpType *)this + 2) != 0;
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
      "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
      "init",
      1032);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v6, (const char (*)[27])byte_1ADA5C20);
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
      &byte_1AD3FE00,
      (const std::allocator<char> *)(v2 + 48));
    v8 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
           row,
           (const std::string *)(v2 + 192),
           (unsigned int *)this + 3) != 0;
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
        "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
        "init",
        1037);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 256),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v9, (const char (*)[27])byte_1AD3FE40);
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

// Line 1045: range 0000000014564EF8-0000000014565203
int32_t __cdecl data::MaterialSourceDataExcelConfig::init(
        data::MaterialSourceDataExcelConfig *const this,
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
  *(_QWORD *)(v2 + 16) = data::MaterialSourceDataExcelConfig::init;
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
      "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
      "init",
      1048);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v6, (const char (*)[23])byte_1AD3A120);
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

// Line 1056: range 0000000014565204-00000000145665EE
int32_t __cdecl data::MaterialDeleteExcelConfig::init(
        data::MaterialDeleteExcelConfig *const this,
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
  std::string *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  bool v15; // r14
  common::milog::MiLogStream *v16; // rax
  bool v17; // r14
  common::milog::MiLogStream *v18; // rax
  bool v19; // r14
  common::milog::MiLogStream *v20; // rax
  uint32_t array_count; // [rsp+18h] [rbp-5D8h]
  uint32_t i; // [rsp+1Ch] [rbp-5D4h]
  char v24[1488]; // [rsp+20h] [rbp-5D0h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1440LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "24 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 32 12 val_str:1059 224 32 9 <unknown> 288 32 9"
                        " <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 "
                        "<unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <"
                        "unknown> 992 32 9 <unknown> 1056 32 9 <unknown> 1120 256 13 col_name:1057";
  *(_QWORD *)(v2 + 16) = data::MaterialDeleteExcelConfig::init;
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
  std::string::basic_string(v2 + 160);
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 224),
    "ID",
    (const std::allocator<char> *)(v2 + 32));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 224), &this->id) != 0;
  std::string::~string((void *)(v2 + 224));
  *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
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
      "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
      "init",
      1062);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 288),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v6, (const char (*)[23])byte_1AD3A120);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 352),
      &byte_1ADA6840,
      (const std::allocator<char> *)(v2 + 48));
    v8 = common::tools::TxtFile::Row::assignToEnum<data::MaterialExpireType>(
           row,
           (const std::string *)(v2 + 352),
           &this->expire_type) != 0;
    std::string::~string((void *)(v2 + 352));
    *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
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
        "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
        "init",
        1067);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 416),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v9, (const char (*)[33])byte_1ADA6880);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
      v7 = -1;
    }
    else
    {
      std::vector<std::string>::resize(&this->expire_time_param_str_list, 3uLL);
      array_count = 0;
      for ( i = 0; i <= 2; ++i )
      {
        snprintf((char *)(v2 + 1120), 0x100uLL, &byte_1ADA68E0, i + 1);
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 64);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 480),
          (const char *)(v2 + 1120),
          (const std::allocator<char> *)(v2 + 64));
        v10 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 480));
        std::string::~string((void *)(v2 + 480));
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 64);
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
        if ( !v10 )
        {
          v11 = std::vector<std::string>::operator[](&this->expire_time_param_str_list, i);
          *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 80);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 544),
            (const char *)(v2 + 1120),
            (const std::allocator<char> *)(v2 + 80));
          LOBYTE(v11) = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 544), v11) != 0;
          std::string::~string((void *)(v2 + 544));
          *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 80);
          *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
          if ( (_BYTE)v11 )
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
              "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
              "init",
              1079);
            v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 608),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v12,
                    (const char (*)[14])byte_1AD38B80);
            v14 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                    v13,
                    (const char (*)[256])(v2 + 1120));
            common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])byte_1AD38BC0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
            *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
            v7 = -1;
            goto LABEL_34;
          }
          array_count = i + 1;
        }
      }
      std::vector<std::string>::resize(&this->expire_time_param_str_list, array_count);
      *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 96);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 672),
        &byte_1ADA6920,
        (const std::allocator<char> *)(v2 + 96));
      v15 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 672), (std::string *)(v2 + 160)) != 0;
      std::string::~string((void *)(v2 + 672));
      *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 96);
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      if ( v15 )
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
          "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
          "init",
          1088);
        v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 736),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v16, (const char (*)[39])byte_1ADA6960);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 736));
        *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
        v7 = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 128);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 864),
          ":",
          (const std::allocator<char> *)(v2 + 128));
        *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 112);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 800),
          ",",
          (const std::allocator<char> *)(v2 + 112));
        v17 = common::tools::StringUtils::splitToMap<unsigned int,float>(
                (const std::string *)(v2 + 160),
                (const std::string *)(v2 + 800),
                (const std::string *)(v2 + 864),
                &this->return_item_map,
                1) != 0;
        std::string::~string((void *)(v2 + 800));
        *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 112);
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
        std::string::~string((void *)(v2 + 864));
        *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 128);
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
        if ( v17 )
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
            "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
            "init",
            1093);
          v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 928),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v18, (const char (*)[39])byte_1ADA6960);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 928));
          *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
          v7 = -1;
        }
        else
        {
          *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 144);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 992),
            &byte_1ADA69C0,
            (const std::allocator<char> *)(v2 + 144));
          v19 = common::tools::TxtFile::Row::assignToEnum<data::RoundType>(
                  row,
                  (const std::string *)(v2 + 992),
                  &this->round_type) != 0;
          std::string::~string((void *)(v2 + 992));
          *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 144);
          *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
          if ( v19 )
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
              "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
              "init",
              1098);
            v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 1056),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v20, (const char (*)[39])byte_1ADA6A00);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1056));
            *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -117901064;
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
LABEL_34:
  std::string::~string((void *)(v2 + 160));
  if ( v24 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8084) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862728) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450904 - (((_DWORD)v4 + 2147450912) & 0xFFFFFFF8) + 116) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF80AC) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1440LL, v24);
  }
  return v7;
};

// Line 1107: range 00000000145665F0-000000001456767F
int32_t __cdecl data::MaterialExcelConfigMgrBase::loadMaterialExcelConfig(
        data::MaterialExcelConfigMgrBase *const this,
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
  data::MaterialExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::MaterialExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false>,bool> v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  _DWORD *v30; // rax
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
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 6 r:1122 64 4 9 <unknown> 80 32 10 paths:1108 144 32 9 <unknown> 208 32"
                        " 9 <unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 224"
                        " 9 data:1125 816 376 25 debug_message_stream:1133 1264 32880 13 txt_file:1116";
  *(_QWORD *)(v3 + 16) = data::MaterialExcelConfigMgrBase::loadMaterialExcelConfig;
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
  v5[536862743] = -219021312;
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
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 80),
    "/txt/MaterialData.txt",
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
    __asan_unpoison_stack_memory(v3 + 1264, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v3 + 1264));
    v7 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v3 + 1264), v7) )
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
        "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
        "loadMaterialExcelConfig",
        1119);
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
        v12 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v3 + 1264));
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
        if ( v12 <= *(_DWORD *)(v3 + 48) )
          break;
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v3 + 1264), *(_DWORD *)(v3 + 48));
        v13 = (_DWORD *)(((v3 + 528) >> 3) + 2147450880);
        *v13 = 0;
        v13[1] = 0;
        v13[2] = 0;
        v13[3] = 0;
        v13[4] = 0;
        v13[5] = 0;
        v13[6] = 0;
        data::MaterialExcelConfig::MaterialExcelConfig((data::MaterialExcelConfig *const)(v3 + 528));
        if ( row_ptr )
        {
          if ( data::MaterialExcelConfig::init((data::MaterialExcelConfig *const)(v3 + 528), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 816, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 816);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 816, &unk_1AD3B5A0);
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
              "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
              "loadMaterialExcelConfig",
              1135);
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
              && (char)((v3 - 81) & 7) >= *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 400, 32LL);
            }
            std::ostringstream::str(v3 + 400, v3 + 816);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, (const std::string *)(v3 + 400));
            std::string::~string((void *)(v3 + 400));
            *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
            *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            std::ostringstream::~ostringstream(v3 + 816);
            __asan_poison_stack_memory(v3 + 816, 376LL);
            v15 = 0;
          }
          else
          {
            v24 = std::move<data::MaterialExcelConfig &>((data::MaterialExcelConfig *)(v3 + 528));
            v27 = std::unordered_map<unsigned int,data::MaterialExcelConfig>::emplace<unsigned int &,data::MaterialExcelConfig>(
                    &this->material_excel_config_map,
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
                "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
                "loadMaterialExcelConfig",
                1140);
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
            "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
            "loadMaterialExcelConfig",
            1128);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 272),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
          *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::MaterialExcelConfig::~MaterialExcelConfig((data::MaterialExcelConfig *const)(v3 + 528));
        v30 = (_DWORD *)(((v3 + 528) >> 3) + 2147450880);
        *v30 = -117901064;
        v30[1] = -117901064;
        v30[2] = -117901064;
        v30[3] = -117901064;
        v30[4] = -117901064;
        v30[5] = -117901064;
        v30[6] = -117901064;
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
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v3 + 1264));
    __asan_poison_stack_memory(v3 + 1264, 32880LL);
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF90C4) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 4300) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_10(v3, 34400LL, v37);
  }
  return v2;
};

// Line 1149: range 0000000014567680-00000000145686D8
int32_t __cdecl data::MaterialExcelConfigMgrBase::loadDocumentExcelConfig(
        data::MaterialExcelConfigMgrBase *const this,
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
  data::DocumentExcelConfig *v25; // rax
  unsigned int *v26; // rcx
  data::DocumentExcelConfig *v27; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::DocumentExcelConfig>,false,false>,bool> v28; // rax
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
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 6 r:1164 64 4 9 <unknown> 80 16 9 data:1167 112 32 10 paths:1150 176 32"
                        " 9 <unknown> 240 32 9 <unknown> 304 32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496 32 "
                        "9 <unknown> 560 376 25 debug_message_stream:1175 1008 32880 13 txt_file:1158";
  *(_QWORD *)(v3 + 16) = data::MaterialExcelConfigMgrBase::loadDocumentExcelConfig;
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
    "/txt/DocumentData.txt",
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
        "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
        "loadDocumentExcelConfig",
        1161);
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v3 + 240),
             (const char (*)[8])byte_1AD383A0);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1AD383E0);
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
        v14 = &`vtable for'data::DocumentExcelConfig + 2;
        if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 80, v13);
        *(_QWORD *)(v3 + 80) = v14;
        if ( *(_BYTE *)(((v3 + 88) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 88) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 88, v13);
        *(_DWORD *)(v3 + 88) = 0;
        if ( row_ptr )
        {
          if ( data::DocumentExcelConfig::init((data::DocumentExcelConfig *const)(v3 + 80), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 560, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 560);
            v17 = std::operator<<<std::char_traits<char>>(v3 + 560, &unk_1AD3B5A0);
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
              "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
              "loadDocumentExcelConfig",
              1177);
            v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 368),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v19 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v18, (const char (*)[2])"<");
            v20 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, __for_begin);
            v21 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v20,
                    (const char (*)[11])byte_1AD384E0);
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
                    (const char (*)[13])byte_1AD38520);
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
            v25 = std::move<data::DocumentExcelConfig &>((data::DocumentExcelConfig *)(v3 + 80));
            v28 = std::unordered_map<unsigned int,data::DocumentExcelConfig>::emplace<unsigned int &,data::DocumentExcelConfig>(
                    &this->document_excel_config_map,
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
                "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
                "loadDocumentExcelConfig",
                1182);
              v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 496),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v30 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v29, (const char (*)[9])byte_1AD3B5E0);
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
            "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
            "loadDocumentExcelConfig",
            1170);
          v15 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 304),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 304));
          *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v16 = 0;
        }
        data::DocumentExcelConfig::~DocumentExcelConfig((data::DocumentExcelConfig *const)(v3 + 80));
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

// Line 1191: range 00000000145686DA-00000000145696B0
int32_t __cdecl data::MaterialExcelConfigMgrBase::loadAvatarCardChangeExcelConfig(
        data::MaterialExcelConfigMgrBase *const this,
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
  data::AvatarCardChangeExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::AvatarCardChangeExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarCardChangeExcelConfig>,false,false>,bool> v27; // rax
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
  *(_QWORD *)(v3 + 8) = "13 48 1 9 <unknown> 64 4 6 r:1206 80 4 9 <unknown> 96 32 10 paths:1192 160 32 9 <unknown> 224 32"
                        " 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 48 "
                        "9 data:1209 624 376 25 debug_message_stream:1217 1072 32880 13 txt_file:1200";
  *(_QWORD *)(v3 + 16) = data::MaterialExcelConfigMgrBase::loadAvatarCardChangeExcelConfig;
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
    "/txt/AvatarCardChangeData.txt",
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
        "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
        "loadAvatarCardChangeExcelConfig",
        1203);
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
        *(_WORD *)(v13 + 4) = 0;
        data::AvatarCardChangeExcelConfig::AvatarCardChangeExcelConfig((data::AvatarCardChangeExcelConfig *const)(v3 + 544));
        if ( row_ptr )
        {
          if ( data::AvatarCardChangeExcelConfig::init((data::AvatarCardChangeExcelConfig *const)(v3 + 544), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 624, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 624);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 624, &unk_1ADA6F40);
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
              "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
              "loadAvatarCardChangeExcelConfig",
              1219);
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
            v24 = std::move<data::AvatarCardChangeExcelConfig &>((data::AvatarCardChangeExcelConfig *)(v3 + 544));
            v27 = std::unordered_map<unsigned int,data::AvatarCardChangeExcelConfig>::emplace<unsigned int &,data::AvatarCardChangeExcelConfig>(
                    &this->avatar_card_change_excel_config_map,
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
                "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
                "loadAvatarCardChangeExcelConfig",
                1224);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 480),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                      v28,
                      (const char (*)[15])byte_1ADA6F80);
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
            "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
            "loadAvatarCardChangeExcelConfig",
            1212);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 288),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::AvatarCardChangeExcelConfig::~AvatarCardChangeExcelConfig((data::AvatarCardChangeExcelConfig *const)(v3 + 544));
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

// Line 1233: range 00000000145696B2-000000001456A70D
int32_t __cdecl data::MaterialExcelConfigMgrBase::loadMaterialSourceDataExcelConfig(
        data::MaterialExcelConfigMgrBase *const this,
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
  data::MaterialSourceDataExcelConfig *v25; // rax
  unsigned int *v26; // rcx
  data::MaterialSourceDataExcelConfig *v27; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::MaterialSourceDataExcelConfig>,false,false>,bool> v28; // rax
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
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 6 r:1248 64 4 9 <unknown> 80 16 9 data:1251 112 32 10 paths:1234 176 32"
                        " 9 <unknown> 240 32 9 <unknown> 304 32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496 32 "
                        "9 <unknown> 560 376 25 debug_message_stream:1259 1008 32880 13 txt_file:1242";
  *(_QWORD *)(v3 + 16) = data::MaterialExcelConfigMgrBase::loadMaterialSourceDataExcelConfig;
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
    "/txt/MaterialSourceData.txt",
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
        "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
        "loadMaterialSourceDataExcelConfig",
        1245);
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v3 + 240),
             (const char (*)[8])byte_1AD383A0);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1AD383E0);
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
        v14 = &`vtable for'data::MaterialSourceDataExcelConfig + 2;
        if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 80, v13);
        *(_QWORD *)(v3 + 80) = v14;
        if ( *(_BYTE *)(((v3 + 88) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 88) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 88, v13);
        *(_DWORD *)(v3 + 88) = 0;
        if ( row_ptr )
        {
          if ( data::MaterialSourceDataExcelConfig::init((data::MaterialSourceDataExcelConfig *const)(v3 + 80), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 560, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 560);
            v17 = std::operator<<<std::char_traits<char>>(v3 + 560, &unk_1AD3B5A0);
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
              "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
              "loadMaterialSourceDataExcelConfig",
              1261);
            v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 368),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v19 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v18, (const char (*)[2])"<");
            v20 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, __for_begin);
            v21 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v20,
                    (const char (*)[11])byte_1AD384E0);
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
                    (const char (*)[13])byte_1AD38520);
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
            v25 = std::move<data::MaterialSourceDataExcelConfig &>((data::MaterialSourceDataExcelConfig *)(v3 + 80));
            v28 = std::unordered_map<unsigned int,data::MaterialSourceDataExcelConfig>::emplace<unsigned int &,data::MaterialSourceDataExcelConfig>(
                    &this->material_source_data_excel_config_map,
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
                "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
                "loadMaterialSourceDataExcelConfig",
                1266);
              v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 496),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v30 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v29, (const char (*)[9])byte_1AD3B5E0);
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
            "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
            "loadMaterialSourceDataExcelConfig",
            1254);
          v15 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 304),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 304));
          *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v16 = 0;
        }
        data::MaterialSourceDataExcelConfig::~MaterialSourceDataExcelConfig((data::MaterialSourceDataExcelConfig *const)(v3 + 80));
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

// Line 1275: range 000000001456A70E-000000001456B75E
int32_t __cdecl data::MaterialExcelConfigMgrBase::loadMaterialDeleteExcelConfig(
        data::MaterialExcelConfigMgrBase *const this,
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
  data::MaterialDeleteExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::MaterialDeleteExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::MaterialDeleteExcelConfig>,false,false>,bool> v27; // rax
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
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 6 r:1290 64 4 9 <unknown> 80 32 10 paths:1276 144 32 9 <unknown> 208 32"
                        " 9 <unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 120"
                        " 9 data:1293 688 376 25 debug_message_stream:1301 1136 32880 13 txt_file:1284";
  *(_QWORD *)(v3 + 16) = data::MaterialExcelConfigMgrBase::loadMaterialDeleteExcelConfig;
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
  v5[536862740] = -218959360;
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
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 80),
    "/txt/MaterialDeleteData.txt",
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
    __asan_unpoison_stack_memory(v3 + 1136, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v3 + 1136));
    v7 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v3 + 1136), v7) )
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
        "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
        "loadMaterialDeleteExcelConfig",
        1287);
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
        v12 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v3 + 1136));
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
        if ( v12 <= *(_DWORD *)(v3 + 48) )
          break;
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v3 + 1136), *(_DWORD *)(v3 + 48));
        v13 = ((v3 + 528) >> 3) + 2147450880;
        *(_DWORD *)v13 = 0;
        *(_DWORD *)(v13 + 4) = 0;
        *(_DWORD *)(v13 + 8) = 0;
        *(_WORD *)(v13 + 12) = 0;
        *(_BYTE *)(v13 + 14) = 0;
        data::MaterialDeleteExcelConfig::MaterialDeleteExcelConfig((data::MaterialDeleteExcelConfig *const)(v3 + 528));
        if ( row_ptr )
        {
          if ( data::MaterialDeleteExcelConfig::init((data::MaterialDeleteExcelConfig *const)(v3 + 528), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 688, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 688);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 688, &unk_1AD3B5A0);
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
              "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
              "loadMaterialDeleteExcelConfig",
              1303);
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
            std::ostringstream::str(v3 + 400, v3 + 688);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, (const std::string *)(v3 + 400));
            std::string::~string((void *)(v3 + 400));
            *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
            *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            std::ostringstream::~ostringstream(v3 + 688);
            __asan_poison_stack_memory(v3 + 688, 376LL);
            v15 = 0;
          }
          else
          {
            v24 = std::move<data::MaterialDeleteExcelConfig &>((data::MaterialDeleteExcelConfig *)(v3 + 528));
            v27 = std::unordered_map<unsigned int,data::MaterialDeleteExcelConfig>::emplace<unsigned int &,data::MaterialDeleteExcelConfig>(
                    &this->material_delete_excel_config_map,
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
                "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
                "loadMaterialDeleteExcelConfig",
                1308);
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
            && (char)((v3 - 32 + 79) & 7) >= *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 272, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 272),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
            "loadMaterialDeleteExcelConfig",
            1296);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 272),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
          *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::MaterialDeleteExcelConfig::~MaterialDeleteExcelConfig((data::MaterialDeleteExcelConfig *const)(v3 + 528));
        v30 = ((v3 + 528) >> 3) + 2147450880;
        *(_DWORD *)v30 = -117901064;
        *(_DWORD *)(v30 + 4) = -117901064;
        *(_DWORD *)(v30 + 8) = -117901064;
        *(_WORD *)(v30 + 12) = -1800;
        *(_BYTE *)(v30 + 14) = -8;
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
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v3 + 1136));
    __asan_poison_stack_memory(v3 + 1136, 32880LL);
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF90B4) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 4284) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_10(v3, 34272LL, v37);
  }
  return v2;
};

// Line 1317: range 000000001456B760-000000001456BE50
int32_t __cdecl data::MaterialExcelConfigMgrBase::loadConfig(
        data::MaterialExcelConfigMgrBase *const this,
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
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)data::MaterialExcelConfigMgrBase::loadConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -202116109;
  if ( data::MaterialExcelConfigMgrBase::loadMaterialExcelConfig(this, config) )
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
      "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
      "loadConfig",
      1320);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      v5,
      (const char (*)[31])"loadMaterialExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( data::MaterialExcelConfigMgrBase::loadDocumentExcelConfig(this, config) )
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
      "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
      "loadConfig",
      1325);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      v7,
      (const char (*)[31])"loadDocumentExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( data::MaterialExcelConfigMgrBase::loadAvatarCardChangeExcelConfig(this, config) )
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
      "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
      "loadConfig",
      1330);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      v8,
      (const char (*)[39])"loadAvatarCardChangeExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else if ( data::MaterialExcelConfigMgrBase::loadMaterialSourceDataExcelConfig(this, config) )
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
      "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
      "loadConfig",
      1335);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      v9,
      (const char (*)[41])"loadMaterialSourceDataExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 7);
    result = -1;
  }
  else if ( data::MaterialExcelConfigMgrBase::loadMaterialDeleteExcelConfig(this, config) )
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
      "./src/txt_data_auto/MaterialExcelConfig.gen.cpp",
      "loadConfig",
      1340);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 9, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      v10,
      (const char (*)[37])"loadMaterialDeleteExcelConfig failed");
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

// Line 1347: range 000000001456BE52-000000001456BE64
int32_t __cdecl data::MaterialExcelConfigMgrBase::rewriteConfig(
        data::MaterialExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 1352: range 000000001456BE66-000000001456BE78
int32_t __cdecl data::MaterialExcelConfigMgrBase::finalConfig(
        data::MaterialExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 1357: range 000000001456BE7A-000000001456C035
data::MaterialExcelConfig *__fastcall data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(
        data::MaterialExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::MaterialExcelConfigMap *p_material_excel_config_map; // rdx
  data::MaterialExcelConfigMap *v6; // rdx
  bool v7; // al
  data::MaterialExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 id:1356 64 8 9 iter:1358 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::MaterialExcelConfigMgrBase::findMaterialExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_material_excel_config_map = &this->material_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::MaterialExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::MaterialExcelConfig>::find(
                                                                                         p_material_excel_config_map,
                                                                                         (const std::unordered_map<unsigned int,data::MaterialExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->material_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::MaterialExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::MaterialExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::MaterialExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1370: range 000000001456C036-000000001456C1F1
const data::MaterialExcelConfig *__fastcall data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(
        const data::MaterialExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::MaterialExcelConfigMap *p_material_excel_config_map; // rdx
  data::MaterialExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::MaterialExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 id:1369 64 8 9 iter:1371 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::MaterialExcelConfigMgrBase::findMaterialExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_material_excel_config_map = &this->material_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::MaterialExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::MaterialExcelConfig>::find(
                                                                                               p_material_excel_config_map,
                                                                                               (const std::unordered_map<unsigned int,data::MaterialExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->material_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::MaterialExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::MaterialExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::MaterialExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1383: range 000000001456C1F2-000000001456C3AD
data::DocumentExcelConfig *__fastcall data::MaterialExcelConfigMgrBase::findDocumentExcelConfig(
        data::MaterialExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::DocumentExcelConfigMap *p_document_excel_config_map; // rdx
  data::DocumentExcelConfigMap *v6; // rdx
  bool v7; // al
  data::DocumentExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 id:1382 64 8 9 iter:1384 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::MaterialExcelConfigMgrBase::findDocumentExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_document_excel_config_map = &this->document_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::DocumentExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::DocumentExcelConfig>::find(
                                                                                         p_document_excel_config_map,
                                                                                         (const std::unordered_map<unsigned int,data::DocumentExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->document_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::DocumentExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::DocumentExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::DocumentExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DocumentExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DocumentExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::DocumentExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::DocumentExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1396: range 000000001456C3AE-000000001456C569
const data::DocumentExcelConfig *__fastcall data::MaterialExcelConfigMgrBase::findDocumentExcelConfig(
        const data::MaterialExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::DocumentExcelConfigMap *p_document_excel_config_map; // rdx
  data::DocumentExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::DocumentExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 id:1395 64 8 9 iter:1397 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::MaterialExcelConfigMgrBase::findDocumentExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_document_excel_config_map = &this->document_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::DocumentExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::DocumentExcelConfig>::find(
                                                                                               p_document_excel_config_map,
                                                                                               (const std::unordered_map<unsigned int,data::DocumentExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->document_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::DocumentExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::DocumentExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::DocumentExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DocumentExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DocumentExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DocumentExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DocumentExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1409: range 000000001456C56A-000000001456C725
data::AvatarCardChangeExcelConfig *__fastcall data::MaterialExcelConfigMgrBase::findAvatarCardChangeExcelConfig(
        data::MaterialExcelConfigMgrBase *const this,
        __int64 avatar_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::AvatarCardChangeExcelConfigMap *p_avatar_card_change_excel_config_map; // rdx
  data::AvatarCardChangeExcelConfigMap *v6; // rdx
  bool v7; // al
  data::AvatarCardChangeExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 avatar_id:1408 64 8 9 iter:1410 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::MaterialExcelConfigMgrBase::findAvatarCardChangeExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = avatar_id;
  p_avatar_card_change_excel_config_map = &this->avatar_card_change_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, avatar_id);
  *(std::unordered_map<unsigned int,data::AvatarCardChangeExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::AvatarCardChangeExcelConfig>::find(
                                                                                                 p_avatar_card_change_excel_config_map,
                                                                                                 (const std::unordered_map<unsigned int,data::AvatarCardChangeExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->avatar_card_change_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::AvatarCardChangeExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::AvatarCardChangeExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::AvatarCardChangeExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarCardChangeExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarCardChangeExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarCardChangeExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarCardChangeExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1422: range 000000001456C726-000000001456C8E1
const data::AvatarCardChangeExcelConfig *__fastcall data::MaterialExcelConfigMgrBase::findAvatarCardChangeExcelConfig(
        const data::MaterialExcelConfigMgrBase *const this,
        __int64 avatar_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::AvatarCardChangeExcelConfigMap *p_avatar_card_change_excel_config_map; // rdx
  data::AvatarCardChangeExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::AvatarCardChangeExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 avatar_id:1421 64 8 9 iter:1423 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::MaterialExcelConfigMgrBase::findAvatarCardChangeExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = avatar_id;
  p_avatar_card_change_excel_config_map = &this->avatar_card_change_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, avatar_id);
  *(std::unordered_map<unsigned int,data::AvatarCardChangeExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::AvatarCardChangeExcelConfig>::find(p_avatar_card_change_excel_config_map, (const std::unordered_map<unsigned int,data::AvatarCardChangeExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->avatar_card_change_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::AvatarCardChangeExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::AvatarCardChangeExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::AvatarCardChangeExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarCardChangeExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarCardChangeExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AvatarCardChangeExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AvatarCardChangeExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1435: range 000000001456C8E2-000000001456CAA3
data::MaterialSourceDataExcelConfig *__fastcall data::MaterialExcelConfigMgrBase::findMaterialSourceDataExcelConfig(
        data::MaterialExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::MaterialSourceDataExcelConfigMap *p_material_source_data_excel_config_map; // rdx
  data::MaterialSourceDataExcelConfigMap *v6; // rdx
  bool v7; // al
  data::MaterialSourceDataExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 id:1434 64 8 9 iter:1436 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::MaterialExcelConfigMgrBase::findMaterialSourceDataExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_material_source_data_excel_config_map = &this->material_source_data_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::MaterialSourceDataExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::MaterialSourceDataExcelConfig>::find(
                                                                                                   p_material_source_data_excel_config_map,
                                                                                                   (const std::unordered_map<unsigned int,data::MaterialSourceDataExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->material_source_data_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::MaterialSourceDataExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::MaterialSourceDataExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::MaterialSourceDataExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialSourceDataExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialSourceDataExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::MaterialSourceDataExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MaterialSourceDataExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1448: range 000000001456CAA4-000000001456CC65
const data::MaterialSourceDataExcelConfig *__fastcall data::MaterialExcelConfigMgrBase::findMaterialSourceDataExcelConfig(
        const data::MaterialExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::MaterialSourceDataExcelConfigMap *p_material_source_data_excel_config_map; // rdx
  data::MaterialSourceDataExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::MaterialSourceDataExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 id:1447 64 8 9 iter:1449 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::MaterialExcelConfigMgrBase::findMaterialSourceDataExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_material_source_data_excel_config_map = &this->material_source_data_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::MaterialSourceDataExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::MaterialSourceDataExcelConfig>::find(p_material_source_data_excel_config_map, (const std::unordered_map<unsigned int,data::MaterialSourceDataExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->material_source_data_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::MaterialSourceDataExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::MaterialSourceDataExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::MaterialSourceDataExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialSourceDataExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialSourceDataExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MaterialSourceDataExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MaterialSourceDataExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1461: range 000000001456CC66-000000001456CE27
data::MaterialDeleteExcelConfig *__fastcall data::MaterialExcelConfigMgrBase::findMaterialDeleteExcelConfig(
        data::MaterialExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::MaterialDeleteExcelConfigMap *p_material_delete_excel_config_map; // rdx
  data::MaterialDeleteExcelConfigMap *v6; // rdx
  bool v7; // al
  data::MaterialDeleteExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 id:1460 64 8 9 iter:1462 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::MaterialExcelConfigMgrBase::findMaterialDeleteExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_material_delete_excel_config_map = &this->material_delete_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::MaterialDeleteExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::MaterialDeleteExcelConfig>::find(
                                                                                               p_material_delete_excel_config_map,
                                                                                               (const std::unordered_map<unsigned int,data::MaterialDeleteExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->material_delete_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::MaterialDeleteExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::MaterialDeleteExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::MaterialDeleteExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialDeleteExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialDeleteExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::MaterialDeleteExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MaterialDeleteExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1474: range 000000001456CE28-000000001456CFE9
const data::MaterialDeleteExcelConfig *__fastcall data::MaterialExcelConfigMgrBase::findMaterialDeleteExcelConfig(
        const data::MaterialExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::MaterialDeleteExcelConfigMap *p_material_delete_excel_config_map; // rdx
  data::MaterialDeleteExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::MaterialDeleteExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 id:1473 64 8 9 iter:1475 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::MaterialExcelConfigMgrBase::findMaterialDeleteExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_material_delete_excel_config_map = &this->material_delete_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::MaterialDeleteExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::MaterialDeleteExcelConfig>::find(
                                                                                                     p_material_delete_excel_config_map,
                                                                                                     (const std::unordered_map<unsigned int,data::MaterialDeleteExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->material_delete_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::MaterialDeleteExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::MaterialDeleteExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::MaterialDeleteExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialDeleteExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialDeleteExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MaterialDeleteExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MaterialDeleteExcelConfig>,false,false> *const)(v2 + 64))->second;
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

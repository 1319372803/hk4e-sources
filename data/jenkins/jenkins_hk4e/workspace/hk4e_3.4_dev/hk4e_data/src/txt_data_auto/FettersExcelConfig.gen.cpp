// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/FettersExcelConfig.gen.cpp

// Line 12: range 000000001431FA6A-000000001431FDDD
const char *__fastcall data::enumValToStr(data::AssocType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::AssocType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::AssocType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
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
  map = data::getAssocTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::AssocType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::AssocType,std::pair<std::string,std::string>>::find(
                                                                                                  map,
                                                                                                  (const std::map<data::AssocType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::AssocType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::AssocType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::AssocType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::AssocType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
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
    result = "INVALID_AssocType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::AssocType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::AssocType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 24: range 000000001431FDDE-0000000014320396
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::AssocType>,false,true>::pointer v10; // rax
  data::AssocType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::AssocType> *m; // [rsp+18h] [rbp-188h]
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
    m = data::getAssocTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::AssocType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::AssocType>::find(
                                                                                      m,
                                                                                      (const std::unordered_map<std::string,data::AssocType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::AssocType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::AssocType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::AssocType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::AssocType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::AssocType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
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
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::AssocType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::AssocType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
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

// Line 45: range 0000000014320397-000000001432127A
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int v5; // eax
  std::pair<const std::string,data::AssocType> *i; // r14
  const char *v7; // rsi
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::AssocType>,false,true>::pointer v11; // rax
  data::AssocType second; // ecx
  char v13; // dl
  unsigned int v14; // ebx
  char v17[1136]; // [rsp+20h] [rbp-470h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1088LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "22 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 4 9 <unknown> 128 4 9"
                        " <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unknown> 208 4 9 <unkn"
                        "own> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 4 9 <unknown> 288 8 5 it:67 320 8"
                        " 9 <unknown> 352 8 4 s:44 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 440 9 <unknown>";
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
  v4[536862729] = -218959360;
  v4[536862730] = -218959360;
  v4[536862731] = -218959360;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862751] = -218103808;
  v4[536862752] = -202116109;
  v4[536862753] = -202116109;
  *(_QWORD *)(v2 + 352) = s;
  if ( *(_QWORD *)(v2 + 352) )
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::AssocType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::AssocType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, e);
      *(_DWORD *)(v2 + 112) = 0;
      std::pair<std::string const,data::AssocType>::pair<char const(&)[4],data::AssocType,true>(
        (std::pair<const std::string,data::AssocType> *const)(v2 + 576),
        (const char (*)[4])off_1AD44AA0,
        (data::AssocType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, off_1AD44AA0);
      *(_DWORD *)(v2 + 128) = 1;
      std::pair<std::string const,data::AssocType>::pair<char const(&)[7],data::AssocType,true>(
        (std::pair<const std::string,data::AssocType> *const)(v2 + 616),
        (const char (*)[7])byte_1AD44AE0,
        (data::AssocType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, byte_1AD44AE0);
      *(_DWORD *)(v2 + 144) = 2;
      std::pair<std::string const,data::AssocType>::pair<char const(&)[7],data::AssocType,true>(
        (std::pair<const std::string,data::AssocType> *const)(v2 + 656),
        (const char (*)[7])byte_1AD44B20,
        (data::AssocType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, byte_1AD44B20);
      *(_DWORD *)(v2 + 160) = 3;
      std::pair<std::string const,data::AssocType>::pair<char const(&)[7],data::AssocType,true>(
        (std::pair<const std::string,data::AssocType> *const)(v2 + 696),
        (const char (*)[7])byte_1AD44B60,
        (data::AssocType *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, byte_1AD44B60);
      *(_DWORD *)(v2 + 176) = 4;
      std::pair<std::string const,data::AssocType>::pair<char const(&)[10],data::AssocType,true>(
        (std::pair<const std::string,data::AssocType> *const)(v2 + 736),
        (const char (*)[10])byte_1AD44BA0,
        (data::AssocType *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, byte_1AD44BA0);
      *(_DWORD *)(v2 + 192) = 5;
      std::pair<std::string const,data::AssocType>::pair<char const(&)[7],data::AssocType,true>(
        (std::pair<const std::string,data::AssocType> *const)(v2 + 776),
        (const char (*)[7])byte_1AD44BE0,
        (data::AssocType *)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 208, byte_1AD44BE0);
      *(_DWORD *)(v2 + 208) = 6;
      std::pair<std::string const,data::AssocType>::pair<char const(&)[7],data::AssocType,true>(
        (std::pair<const std::string,data::AssocType> *const)(v2 + 816),
        (const char (*)[7])byte_1AD44C20,
        (data::AssocType *)(v2 + 208));
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 224, byte_1AD44C20);
      *(_DWORD *)(v2 + 224) = 7;
      std::pair<std::string const,data::AssocType>::pair<char const(&)[7],data::AssocType,true>(
        (std::pair<const std::string,data::AssocType> *const)(v2 + 856),
        (const char (*)[7])byte_1AD44C60,
        (data::AssocType *)(v2 + 224));
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 240, byte_1AD44C60);
      *(_DWORD *)(v2 + 240) = 8;
      std::pair<std::string const,data::AssocType>::pair<char const(&)[7],data::AssocType,true>(
        (std::pair<const std::string,data::AssocType> *const)(v2 + 896),
        (const char (*)[7])byte_1AD44CA0,
        (data::AssocType *)(v2 + 240));
      if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 256, byte_1AD44CA0);
      *(_DWORD *)(v2 + 256) = 9;
      std::pair<std::string const,data::AssocType>::pair<char const(&)[7],data::AssocType,true>(
        (std::pair<const std::string,data::AssocType> *const)(v2 + 936),
        (const char (*)[7])byte_1AD44CE0,
        (data::AssocType *)(v2 + 256));
      if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 272, byte_1AD44CE0);
      *(_DWORD *)(v2 + 272) = 10;
      std::pair<std::string const,data::AssocType>::pair<char const(&)[7],data::AssocType,true>(
        (std::pair<const std::string,data::AssocType> *const)(v2 + 976),
        (const char (*)[7])byte_1AD44D20,
        (data::AssocType *)(v2 + 272));
      std::allocator<std::pair<std::string const,data::AssocType>>::allocator((std::allocator<std::pair<const std::string,data::AssocType> > *const)(v2 + 80));
      std::unordered_map<std::string,data::AssocType>::unordered_map(
        &data::enumStrToVal(char const*,data::AssocType &)::m,
        (std::initializer_list<std::pair<const std::string,data::AssocType> >)__PAIR128__(11LL, v2 + 576),
        0LL,
        (const std::unordered_map<std::string,data::AssocType>::hasher *)(v2 + 48),
        (const std::unordered_map<std::string,data::AssocType>::key_equal *)(v2 + 64),
        (const std::unordered_map<std::string,data::AssocType>::allocator_type *)(v2 + 80));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::AssocType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::AssocType>::~unordered_map,
        &data::enumStrToVal(char const*,data::AssocType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::AssocType>>::~allocator((std::allocator<std::pair<const std::string,data::AssocType> > *const)(v2 + 80));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::AssocType> *)(v2 + 1016);
            i != (std::pair<const std::string,data::AssocType> *)(v2 + 576);
            std::pair<std::string const,data::AssocType>::~pair(i) )
      {
        --i;
      }
      __asan_poison_stack_memory(v2 + 576, 440LL);
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
    *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 96);
    v7 = *(const char **)(v2 + 352);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 448),
      v7,
      (const std::allocator<char> *)(v2 + 96));
    if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 288, v7);
    *(std::unordered_map<std::string,data::AssocType>::iterator *)(v2 + 288) = std::unordered_map<std::string,data::AssocType>::find(
                                                                                 &data::enumStrToVal(char const*,data::AssocType &)::m,
                                                                                 (const std::unordered_map<std::string,data::AssocType>::key_type *)(v2 + 448));
    std::string::~string((void *)(v2 + 448));
    *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 96);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 320, v2 + 448);
    *(std::unordered_map<std::string,data::AssocType>::iterator *)(v2 + 320) = std::unordered_map<std::string,data::AssocType>::end(&data::enumStrToVal(char const*,data::AssocType &)::m);
    v8 = (char *)(v2 + 320);
    v9 = std::__detail::operator==<std::pair<std::string const,data::AssocType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::AssocType>,true> *)(v2 + 288),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::AssocType>,true> *)(v2 + 320));
    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
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
        3u,
        "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
        "enumStrToVal",
        70);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 512),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v10, (const char *const *)(v2 + 352));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
      v5 = -1;
    }
    else
    {
      v11 = std::__detail::_Node_iterator<std::pair<std::string const,data::AssocType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::AssocType>,false,true> *const)(v2 + 288));
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
      "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
      "enumStrToVal",
      48);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
      (common::milog::MiLogStream *const)(v2 + 384),
      (const char (*)[14])"s is nullptr!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF803C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8054) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF805C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8064) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF806C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8074) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF807C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8084) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1088LL, v17);
  }
  return v14;
};

// Line 79: range 000000001432127B-0000000014321291
const char *__cdecl data::getDescription(data::AssocType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 84: range 0000000014321292-0000000014321447
bool __cdecl data::isValidAssocType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::AssocType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::AssocType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 4 e:85 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidAssocType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getAssocTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::AssocType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::AssocType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getAssocTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::AssocType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::AssocType,std::pair<std::string,std::string>>::find(
                                                                                                  v6,
                                                                                                  (const std::map<data::AssocType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::AssocType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::AssocType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 90: range 0000000014321448-00000000143215A9
bool __cdecl data::isValidAssocTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::AssocType> *v5; // rcx
  const std::unordered_map<std::string,data::AssocType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidAssocTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getAssocTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::AssocType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::AssocType>::end(v5);
  v6 = data::getAssocTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::AssocType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::AssocType>::find(
                                                                                    v6,
                                                                                    name);
  result = std::__detail::operator!=<std::pair<std::string const,data::AssocType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::AssocType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::AssocType>,true> *)(v2 + 64));
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

// Line 95: range 00000000143215AA-0000000014321EA3
const std::unordered_map<std::string,data::AssocType> *__cdecl data::getAssocTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::AssocType> *i; // r14
  char v6[816]; // [rsp+10h] [rbp-330h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(768LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "15 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 "
                        "<unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unkno"
                        "wn> 208 4 9 <unknown> 224 4 9 <unknown> 240 4 9 <unknown> 256 440 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::getAssocTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556927;
  v3[536862723] = -234556924;
  v3[536862724] = -234556924;
  v3[536862725] = -234556924;
  v3[536862726] = -234556924;
  v3[536862727] = -234556924;
  v3[536862741] = -218103808;
  v3[536862742] = -202116109;
  v3[536862743] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getAssocTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getAssocTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string const,data::AssocType>::pair<char const(&)[16],data::AssocType,true>(
      (std::pair<const std::string,data::AssocType> *const)(v1 + 256),
      (const char (*)[16])"ASSOC_TYPE_NONE",
      (data::AssocType *)(v1 + 80));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, "ASSOC_TYPE_NONE");
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string const,data::AssocType>::pair<char const(&)[21],data::AssocType,true>(
      (std::pair<const std::string,data::AssocType> *const)(v1 + 296),
      (const char (*)[21])"ASSOC_TYPE_MONDSTADT",
      (data::AssocType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "ASSOC_TYPE_MONDSTADT");
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string const,data::AssocType>::pair<char const(&)[17],data::AssocType,true>(
      (std::pair<const std::string,data::AssocType> *const)(v1 + 336),
      (const char (*)[17])"ASSOC_TYPE_LIYUE",
      (data::AssocType *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, "ASSOC_TYPE_LIYUE");
    *(_DWORD *)(v1 + 128) = 3;
    std::pair<std::string const,data::AssocType>::pair<char const(&)[21],data::AssocType,true>(
      (std::pair<const std::string,data::AssocType> *const)(v1 + 376),
      (const char (*)[21])"ASSOC_TYPE_MAINACTOR",
      (data::AssocType *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, "ASSOC_TYPE_MAINACTOR");
    *(_DWORD *)(v1 + 144) = 4;
    std::pair<std::string const,data::AssocType>::pair<char const(&)[17],data::AssocType,true>(
      (std::pair<const std::string,data::AssocType> *const)(v1 + 416),
      (const char (*)[17])"ASSOC_TYPE_FATUI",
      (data::AssocType *)(v1 + 144));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, "ASSOC_TYPE_FATUI");
    *(_DWORD *)(v1 + 160) = 5;
    std::pair<std::string const,data::AssocType>::pair<char const(&)[19],data::AssocType,true>(
      (std::pair<const std::string,data::AssocType> *const)(v1 + 456),
      (const char (*)[19])"ASSOC_TYPE_INAZUMA",
      (data::AssocType *)(v1 + 160));
    if ( *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 176, "ASSOC_TYPE_INAZUMA");
    *(_DWORD *)(v1 + 176) = 6;
    std::pair<std::string const,data::AssocType>::pair<char const(&)[18],data::AssocType,true>(
      (std::pair<const std::string,data::AssocType> *const)(v1 + 496),
      (const char (*)[18])"ASSOC_TYPE_RANGER",
      (data::AssocType *)(v1 + 176));
    if ( *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 192, "ASSOC_TYPE_RANGER");
    *(_DWORD *)(v1 + 192) = 7;
    std::pair<std::string const,data::AssocType>::pair<char const(&)[18],data::AssocType,true>(
      (std::pair<const std::string,data::AssocType> *const)(v1 + 536),
      (const char (*)[18])"ASSOC_TYPE_SUMERU",
      (data::AssocType *)(v1 + 192));
    if ( *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 208, "ASSOC_TYPE_SUMERU");
    *(_DWORD *)(v1 + 208) = 8;
    std::pair<std::string const,data::AssocType>::pair<char const(&)[20],data::AssocType,true>(
      (std::pair<const std::string,data::AssocType> *const)(v1 + 576),
      (const char (*)[20])"ASSOC_TYPE_FONTAINE",
      (data::AssocType *)(v1 + 208));
    if ( *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 224, "ASSOC_TYPE_FONTAINE");
    *(_DWORD *)(v1 + 224) = 9;
    std::pair<std::string const,data::AssocType>::pair<char const(&)[18],data::AssocType,true>(
      (std::pair<const std::string,data::AssocType> *const)(v1 + 616),
      (const char (*)[18])"ASSOC_TYPE_NATLAN",
      (data::AssocType *)(v1 + 224));
    if ( *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 240, "ASSOC_TYPE_NATLAN");
    *(_DWORD *)(v1 + 240) = 10;
    std::pair<std::string const,data::AssocType>::pair<char const(&)[21],data::AssocType,true>(
      (std::pair<const std::string,data::AssocType> *const)(v1 + 656),
      (const char (*)[21])"ASSOC_TYPE_SNEZHNAYA",
      (data::AssocType *)(v1 + 240));
    std::allocator<std::pair<std::string const,data::AssocType>>::allocator((std::allocator<std::pair<const std::string,data::AssocType> > *const)(v1 + 64));
    std::unordered_map<std::string,data::AssocType>::unordered_map(
      &data::getAssocTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::AssocType> >)__PAIR128__(11LL, v1 + 256),
      0LL,
      (const std::unordered_map<std::string,data::AssocType>::hasher *)(v1 + 32),
      (const std::unordered_map<std::string,data::AssocType>::key_equal *)(v1 + 48),
      (const std::unordered_map<std::string,data::AssocType>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getAssocTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::AssocType>::~unordered_map,
      &data::getAssocTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::AssocType>>::~allocator((std::allocator<std::pair<const std::string,data::AssocType> > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::AssocType> *)(v1 + 696);
          i != (std::pair<const std::string,data::AssocType> *)(v1 + 256);
          std::pair<std::string const,data::AssocType>::~pair(i) )
    {
      --i;
    }
  }
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8058) = 0LL;
    memset(
      (void *)((unsigned __int64)(v3 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v3 + 2147450880 - (((_DWORD)v3 + 2147450888) & 0xFFFFFFF8) + 96) & 0xFFFFFFF8) >> 3));
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
  }
  return &data::getAssocTypeNameMap[abi:cxx11](void)::m;
};

// Line 114: range 0000000014321EA4-0000000014322E23
const std::map<data::AssocType,std::pair<std::string,std::string >> *__cdecl data::getAssocTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::AssocType,std::pair<std::string,std::string > > *i; // r14
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
  char v16[2288]; // [rsp+10h] [rbp-8F0h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_6(2240LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "25 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 4 9"
                        " <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unknown> 208 4 9 <unkn"
                        "own> 224 4 9 <unknown> 240 4 9 <unknown> 256 64 9 <unknown> 352 64 9 <unknown> 448 64 9 <unknown"
                        "> 544 64 9 <unknown> 640 64 9 <unknown> 736 64 9 <unknown> 832 64 9 <unknown> 928 64 9 <unknown>"
                        " 1024 64 9 <unknown> 1120 64 9 <unknown> 1216 64 9 <unknown> 1312 792 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::getAssocTypeEnumMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -234556927;
  v3[536862723] = -234556924;
  v3[536862724] = -234556924;
  v3[536862725] = -234556924;
  v3[536862726] = -234556924;
  v3[536862727] = -234556924;
  v3[536862730] = -218959118;
  v3[536862733] = -218959118;
  v3[536862736] = -218959118;
  v3[536862739] = -218959118;
  v3[536862742] = -218959118;
  v3[536862745] = -218959118;
  v3[536862748] = -218959118;
  v3[536862751] = -218959118;
  v3[536862754] = -218959118;
  v3[536862757] = -218959118;
  v3[536862760] = -218959118;
  v3[536862785] = -218103808;
  v3[536862786] = -202116109;
  v3[536862787] = -202116109;
  v3[536862788] = -202116109;
  v3[536862789] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getAssocTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getAssocTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[4],char const(&)[16],true>(
      (std::pair<std::string,std::string > *const)(v1 + 256),
      (const char (*)[4])off_1AD44AA0,
      (const char (*)[16])"ASSOC_TYPE_NONE");
    std::pair<data::AssocType const,std::pair<std::string,std::string>>::pair<data::AssocType,true>(
      (std::pair<const data::AssocType,std::pair<std::string,std::string > > *const)(v1 + 1312),
      (data::AssocType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 256));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 352),
      (const char (*)[7])byte_1AD44AE0,
      (const char (*)[21])"ASSOC_TYPE_MONDSTADT");
    std::pair<data::AssocType const,std::pair<std::string,std::string>>::pair<data::AssocType,true>(
      (std::pair<const data::AssocType,std::pair<std::string,std::string > > *const)(v1 + 1384),
      (data::AssocType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 352));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[17],true>(
      (std::pair<std::string,std::string > *const)(v1 + 448),
      (const char (*)[7])byte_1AD44B20,
      (const char (*)[17])"ASSOC_TYPE_LIYUE");
    std::pair<data::AssocType const,std::pair<std::string,std::string>>::pair<data::AssocType,true>(
      (std::pair<const data::AssocType,std::pair<std::string,std::string > > *const)(v1 + 1456),
      (data::AssocType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 448));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, v1 + 112);
    *(_DWORD *)(v1 + 128) = 3;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 544),
      (const char (*)[7])byte_1AD44B60,
      (const char (*)[21])"ASSOC_TYPE_MAINACTOR");
    std::pair<data::AssocType const,std::pair<std::string,std::string>>::pair<data::AssocType,true>(
      (std::pair<const data::AssocType,std::pair<std::string,std::string > > *const)(v1 + 1528),
      (data::AssocType *)(v1 + 128),
      (const std::pair<std::string,std::string > *)(v1 + 544));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, v1 + 128);
    *(_DWORD *)(v1 + 144) = 4;
    std::pair<std::string,std::string>::pair<char const(&)[10],char const(&)[17],true>(
      (std::pair<std::string,std::string > *const)(v1 + 640),
      (const char (*)[10])byte_1AD44BA0,
      (const char (*)[17])"ASSOC_TYPE_FATUI");
    std::pair<data::AssocType const,std::pair<std::string,std::string>>::pair<data::AssocType,true>(
      (std::pair<const data::AssocType,std::pair<std::string,std::string > > *const)(v1 + 1600),
      (data::AssocType *)(v1 + 144),
      (const std::pair<std::string,std::string > *)(v1 + 640));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, v1 + 144);
    *(_DWORD *)(v1 + 160) = 5;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[19],true>(
      (std::pair<std::string,std::string > *const)(v1 + 736),
      (const char (*)[7])byte_1AD44BE0,
      (const char (*)[19])"ASSOC_TYPE_INAZUMA");
    std::pair<data::AssocType const,std::pair<std::string,std::string>>::pair<data::AssocType,true>(
      (std::pair<const data::AssocType,std::pair<std::string,std::string > > *const)(v1 + 1672),
      (data::AssocType *)(v1 + 160),
      (const std::pair<std::string,std::string > *)(v1 + 736));
    if ( *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 176, v1 + 160);
    *(_DWORD *)(v1 + 176) = 6;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[18],true>(
      (std::pair<std::string,std::string > *const)(v1 + 832),
      (const char (*)[7])byte_1AD44C20,
      (const char (*)[18])"ASSOC_TYPE_RANGER");
    std::pair<data::AssocType const,std::pair<std::string,std::string>>::pair<data::AssocType,true>(
      (std::pair<const data::AssocType,std::pair<std::string,std::string > > *const)(v1 + 1744),
      (data::AssocType *)(v1 + 176),
      (const std::pair<std::string,std::string > *)(v1 + 832));
    if ( *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 192, v1 + 176);
    *(_DWORD *)(v1 + 192) = 7;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[18],true>(
      (std::pair<std::string,std::string > *const)(v1 + 928),
      (const char (*)[7])byte_1AD44C60,
      (const char (*)[18])"ASSOC_TYPE_SUMERU");
    std::pair<data::AssocType const,std::pair<std::string,std::string>>::pair<data::AssocType,true>(
      (std::pair<const data::AssocType,std::pair<std::string,std::string > > *const)(v1 + 1816),
      (data::AssocType *)(v1 + 192),
      (const std::pair<std::string,std::string > *)(v1 + 928));
    if ( *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 208, v1 + 192);
    *(_DWORD *)(v1 + 208) = 8;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[20],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1024),
      (const char (*)[7])byte_1AD44CA0,
      (const char (*)[20])"ASSOC_TYPE_FONTAINE");
    std::pair<data::AssocType const,std::pair<std::string,std::string>>::pair<data::AssocType,true>(
      (std::pair<const data::AssocType,std::pair<std::string,std::string > > *const)(v1 + 1888),
      (data::AssocType *)(v1 + 208),
      (const std::pair<std::string,std::string > *)(v1 + 1024));
    if ( *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 224, v1 + 208);
    *(_DWORD *)(v1 + 224) = 9;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[18],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1120),
      (const char (*)[7])byte_1AD44CE0,
      (const char (*)[18])"ASSOC_TYPE_NATLAN");
    std::pair<data::AssocType const,std::pair<std::string,std::string>>::pair<data::AssocType,true>(
      (std::pair<const data::AssocType,std::pair<std::string,std::string > > *const)(v1 + 1960),
      (data::AssocType *)(v1 + 224),
      (const std::pair<std::string,std::string > *)(v1 + 1120));
    if ( *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 240, v1 + 224);
    *(_DWORD *)(v1 + 240) = 10;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1216),
      (const char (*)[7])byte_1AD44D20,
      (const char (*)[21])"ASSOC_TYPE_SNEZHNAYA");
    std::pair<data::AssocType const,std::pair<std::string,std::string>>::pair<data::AssocType,true>(
      (std::pair<const data::AssocType,std::pair<std::string,std::string > > *const)(v1 + 2032),
      (data::AssocType *)(v1 + 240),
      (const std::pair<std::string,std::string > *)(v1 + 1216));
    std::allocator<std::pair<data::AssocType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::AssocType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    std::map<data::AssocType,std::pair<std::string,std::string>>::map(
      &data::getAssocTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::AssocType,std::pair<std::string,std::string > > >)__PAIR128__(11LL, v1 + 1312),
      (const std::less<data::AssocType> *)(v1 + 48),
      (const std::map<data::AssocType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getAssocTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::AssocType,std::pair<std::string,std::string>>::~map,
      &data::getAssocTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::AssocType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::AssocType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::AssocType,std::pair<std::string,std::string > > *)(v1 + 2104);
          i != (std::pair<const data::AssocType,std::pair<std::string,std::string > > *)(v1 + 1312);
          std::pair<data::AssocType const,std::pair<std::string,std::string>>::~pair(i) )
    {
      --i;
    }
    __asan_poison_stack_memory(v1 + 1312, 792LL);
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1216));
    v5 = (_DWORD *)(((v1 + 1216) >> 3) + 2147450880);
    *v5 = -117901064;
    v5[1] = -117901064;
    *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1120));
    v6 = (_DWORD *)(((v1 + 1120) >> 3) + 2147450880);
    *v6 = -117901064;
    v6[1] = -117901064;
    *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1024));
    v7 = (_DWORD *)(((v1 + 1024) >> 3) + 2147450880);
    *v7 = -117901064;
    v7[1] = -117901064;
    *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 928));
    v8 = (_DWORD *)(((v1 + 928) >> 3) + 2147450880);
    *v8 = -117901064;
    v8[1] = -117901064;
    *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 832));
    v9 = (_DWORD *)(((v1 + 832) >> 3) + 2147450880);
    *v9 = -117901064;
    v9[1] = -117901064;
    *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 736));
    v10 = (_DWORD *)(((v1 + 736) >> 3) + 2147450880);
    *v10 = -117901064;
    v10[1] = -117901064;
    *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 640));
    v11 = (_DWORD *)(((v1 + 640) >> 3) + 2147450880);
    *v11 = -117901064;
    v11[1] = -117901064;
    *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 544));
    v12 = (_DWORD *)(((v1 + 544) >> 3) + 2147450880);
    *v12 = -117901064;
    v12[1] = -117901064;
    *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 448));
    v13 = (_DWORD *)(((v1 + 448) >> 3) + 2147450880);
    *v13 = -117901064;
    v13[1] = -117901064;
    *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 352));
    v14 = (_DWORD *)(((v1 + 352) >> 3) + 2147450880);
    *v14 = -117901064;
    v14[1] = -117901064;
    *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 256));
  }
  if ( v16 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8110) = 0LL;
    memset(
      (void *)((unsigned __int64)(v3 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v3 + 2147450880 - (((_DWORD)v3 + 2147450888) & 0xFFFFFFF8) + 280) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    __asan_stack_free_6(v1, 2240LL, v16);
  }
  return &data::getAssocTypeEnumMap[abi:cxx11](void)::m;
};

// Line 133: range 0000000014322E24-0000000014323197
const char *__fastcall data::enumValToStr(data::TrialFetterConditionType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::TrialFetterConditionType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::TrialFetterConditionType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 5 e:132 64 8 8 iter:135 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getTrialFetterConditionTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::TrialFetterConditionType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::TrialFetterConditionType,std::pair<std::string,std::string>>::find(map, (const std::map<data::TrialFetterConditionType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::TrialFetterConditionType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::TrialFetterConditionType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::TrialFetterConditionType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::TrialFetterConditionType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
      "enumValToStr",
      138);
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
    result = "INVALID_TrialFetterConditionType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::TrialFetterConditionType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::TrialFetterConditionType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 145: range 0000000014323198-0000000014323750
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::TrialFetterConditionType>,false,true>::pointer v10; // rax
  data::TrialFetterConditionType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::TrialFetterConditionType> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:154 96 8 9 <unknown> 128 8 5 s:144 160 32 9 <unknown> 224 32 9 <unk"
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
    m = data::getTrialFetterConditionTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::TrialFetterConditionType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::TrialFetterConditionType>::find(
                                                                                                     m,
                                                                                                     (const std::unordered_map<std::string,data::TrialFetterConditionType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::TrialFetterConditionType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::TrialFetterConditionType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::TrialFetterConditionType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::TrialFetterConditionType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::TrialFetterConditionType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
        "enumNameToVal",
        157);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::TrialFetterConditionType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::TrialFetterConditionType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
      "enumNameToVal",
      148);
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

// Line 166: range 0000000014323751-000000001432411A
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::TrialFetterConditionType> *i; // r14
  unsigned __int64 v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::TrialFetterConditionType>,false,true>::pointer v12; // rax
  data::TrialFetterConditionType second; // ecx
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
                        " <unknown> 144 8 6 it:179 176 8 9 <unknown> 208 8 5 s:165 240 32 9 <unknown> 304 32 9 <unknown> "
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::TrialFetterConditionType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::TrialFetterConditionType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, e);
      *(_DWORD *)(v2 + 112) = 0;
      std::pair<std::string const,data::TrialFetterConditionType>::pair<char const(&)[22],data::TrialFetterConditionType,true>(
        (std::pair<const std::string,data::TrialFetterConditionType> *const)(v2 + 432),
        (const char (*)[22])byte_1AD45580,
        (data::TrialFetterConditionType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1AD45580);
      *(_DWORD *)(v2 + 128) = 1;
      std::pair<std::string const,data::TrialFetterConditionType>::pair<char const(&)[19],data::TrialFetterConditionType,true>(
        (std::pair<const std::string,data::TrialFetterConditionType> *const)(v2 + 472),
        (const char (*)[19])byte_1AD455C0,
        (data::TrialFetterConditionType *)(v2 + 128));
      std::allocator<std::pair<std::string const,data::TrialFetterConditionType>>::allocator((std::allocator<std::pair<const std::string,data::TrialFetterConditionType> > *const)(v2 + 80));
      std::unordered_map<std::string,data::TrialFetterConditionType>::unordered_map(
        &data::enumStrToVal(char const*,data::TrialFetterConditionType &)::m,
        (std::initializer_list<std::pair<const std::string,data::TrialFetterConditionType> >)__PAIR128__(2LL, v2 + 432),
        0LL,
        (const std::unordered_map<std::string,data::TrialFetterConditionType>::hasher *)(v2 + 48),
        (const std::unordered_map<std::string,data::TrialFetterConditionType>::key_equal *)(v2 + 64),
        (const std::unordered_map<std::string,data::TrialFetterConditionType>::allocator_type *)(v2 + 80));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::TrialFetterConditionType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::TrialFetterConditionType>::~unordered_map,
        &data::enumStrToVal(char const*,data::TrialFetterConditionType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::TrialFetterConditionType>>::~allocator((std::allocator<std::pair<const std::string,data::TrialFetterConditionType> > *const)(v2 + 80));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::TrialFetterConditionType> *)(v2 + 512);
            i != (std::pair<const std::string,data::TrialFetterConditionType> *)(v2 + 432);
            std::pair<std::string const,data::TrialFetterConditionType>::~pair(i) )
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
    *(std::unordered_map<std::string,data::TrialFetterConditionType>::iterator *)(v2 + 144) = std::unordered_map<std::string,data::TrialFetterConditionType>::find(
                                                                                                &data::enumStrToVal(char const*,data::TrialFetterConditionType &)::m,
                                                                                                (const std::unordered_map<std::string,data::TrialFetterConditionType>::key_type *)(v2 + 304));
    std::string::~string((void *)(v2 + 304));
    *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 96);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, v2 + 304);
    *(std::unordered_map<std::string,data::TrialFetterConditionType>::iterator *)(v2 + 176) = std::unordered_map<std::string,data::TrialFetterConditionType>::end(&data::enumStrToVal(char const*,data::TrialFetterConditionType &)::m);
    v9 = (char *)(v2 + 176);
    v10 = std::__detail::operator==<std::pair<std::string const,data::TrialFetterConditionType>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::TrialFetterConditionType>,true> *)(v2 + 144),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::TrialFetterConditionType>,true> *)(v2 + 176));
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
        "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
        "enumStrToVal",
        182);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 368),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)(v2 + 208));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 368));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::TrialFetterConditionType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::TrialFetterConditionType>,false,true> *const)(v2 + 144));
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
      "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
      "enumStrToVal",
      169);
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

// Line 191: range 000000001432411B-0000000014324131
const char *__cdecl data::getDescription(data::TrialFetterConditionType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 196: range 0000000014324132-00000000143242E7
bool __cdecl data::isValidTrialFetterConditionType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::TrialFetterConditionType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::TrialFetterConditionType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:197 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidTrialFetterConditionType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getTrialFetterConditionTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::TrialFetterConditionType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::TrialFetterConditionType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getTrialFetterConditionTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::TrialFetterConditionType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::TrialFetterConditionType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::TrialFetterConditionType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::TrialFetterConditionType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::TrialFetterConditionType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 202: range 00000000143242E8-0000000014324449
bool __cdecl data::isValidTrialFetterConditionTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::TrialFetterConditionType> *v5; // rcx
  const std::unordered_map<std::string,data::TrialFetterConditionType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidTrialFetterConditionTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getTrialFetterConditionTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::TrialFetterConditionType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::TrialFetterConditionType>::end(v5);
  v6 = data::getTrialFetterConditionTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::TrialFetterConditionType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::TrialFetterConditionType>::find(
                                                                                                   v6,
                                                                                                   name);
  result = std::__detail::operator!=<std::pair<std::string const,data::TrialFetterConditionType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::TrialFetterConditionType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::TrialFetterConditionType>,true> *)(v2 + 64));
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

// Line 207: range 000000001432444A-0000000014324850
const std::unordered_map<std::string,data::TrialFetterConditionType> *__cdecl data::getTrialFetterConditionTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::TrialFetterConditionType> *i; // r14
  const std::unordered_map<std::string,data::TrialFetterConditionType> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getTrialFetterConditionTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556927;
  v3[536862723] = 61956;
  v3[536862726] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getTrialFetterConditionTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getTrialFetterConditionTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string const,data::TrialFetterConditionType>::pair<char const(&)[44],data::TrialFetterConditionType,true>(
      (std::pair<const std::string,data::TrialFetterConditionType> *const)(v1 + 112),
      (const char (*)[44])"TRIAL_FETTER_CONDITION_COMPLETE_SUB_MISSION",
      (data::TrialFetterConditionType *)(v1 + 80));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, "TRIAL_FETTER_CONDITION_COMPLETE_SUB_MISSION");
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string const,data::TrialFetterConditionType>::pair<char const(&)[29],data::TrialFetterConditionType,true>(
      (std::pair<const std::string,data::TrialFetterConditionType> *const)(v1 + 152),
      (const char (*)[29])"TRIAL_FETTER_CONDITION_LEVEL",
      (data::TrialFetterConditionType *)(v1 + 96));
    std::allocator<std::pair<std::string const,data::TrialFetterConditionType>>::allocator((std::allocator<std::pair<const std::string,data::TrialFetterConditionType> > *const)(v1 + 64));
    std::unordered_map<std::string,data::TrialFetterConditionType>::unordered_map(
      &data::getTrialFetterConditionTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::TrialFetterConditionType> >)__PAIR128__(2LL, v1 + 112),
      0LL,
      (const std::unordered_map<std::string,data::TrialFetterConditionType>::hasher *)(v1 + 32),
      (const std::unordered_map<std::string,data::TrialFetterConditionType>::key_equal *)(v1 + 48),
      (const std::unordered_map<std::string,data::TrialFetterConditionType>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getTrialFetterConditionTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::TrialFetterConditionType>::~unordered_map,
      &data::getTrialFetterConditionTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::TrialFetterConditionType>>::~allocator((std::allocator<std::pair<const std::string,data::TrialFetterConditionType> > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::TrialFetterConditionType> *)(v1 + 192);
          i != (std::pair<const std::string,data::TrialFetterConditionType> *)(v1 + 112);
          std::pair<std::string const,data::TrialFetterConditionType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getTrialFetterConditionTypeNameMap[abi:cxx11](void)::m;
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

// Line 217: range 0000000014324851-0000000014324E0E
const std::map<data::TrialFetterConditionType,std::pair<std::string,std::string >> *__cdecl data::getTrialFetterConditionTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::TrialFetterConditionType,std::pair<std::string,std::string > > *i; // r14
  unsigned __int64 v5; // rax
  _DWORD *v6; // rax
  const std::map<data::TrialFetterConditionType,std::pair<std::string,std::string >> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getTrialFetterConditionTypeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getTrialFetterConditionTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getTrialFetterConditionTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[22],char const(&)[44],true>(
      (std::pair<std::string,std::string > *const)(v1 + 112),
      (const char (*)[22])byte_1AD45580,
      (const char (*)[44])"TRIAL_FETTER_CONDITION_COMPLETE_SUB_MISSION");
    std::pair<data::TrialFetterConditionType const,std::pair<std::string,std::string>>::pair<data::TrialFetterConditionType,true>(
      (std::pair<const data::TrialFetterConditionType,std::pair<std::string,std::string > > *const)(v1 + 304),
      (data::TrialFetterConditionType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[29],true>(
      (std::pair<std::string,std::string > *const)(v1 + 208),
      (const char (*)[19])byte_1AD455C0,
      (const char (*)[29])"TRIAL_FETTER_CONDITION_LEVEL");
    std::pair<data::TrialFetterConditionType const,std::pair<std::string,std::string>>::pair<data::TrialFetterConditionType,true>(
      (std::pair<const data::TrialFetterConditionType,std::pair<std::string,std::string > > *const)(v1 + 376),
      (data::TrialFetterConditionType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 208));
    std::allocator<std::pair<data::TrialFetterConditionType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::TrialFetterConditionType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    std::map<data::TrialFetterConditionType,std::pair<std::string,std::string>>::map(
      &data::getTrialFetterConditionTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::TrialFetterConditionType,std::pair<std::string,std::string > > >)__PAIR128__(2LL, v1 + 304),
      (const std::less<data::TrialFetterConditionType> *)(v1 + 48),
      (const std::map<data::TrialFetterConditionType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getTrialFetterConditionTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::TrialFetterConditionType,std::pair<std::string,std::string>>::~map,
      &data::getTrialFetterConditionTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::TrialFetterConditionType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::TrialFetterConditionType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::TrialFetterConditionType,std::pair<std::string,std::string > > *)(v1 + 448);
          i != (std::pair<const data::TrialFetterConditionType,std::pair<std::string,std::string > > *)(v1 + 304);
          std::pair<data::TrialFetterConditionType const,std::pair<std::string,std::string>>::~pair(i) )
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
  result = &data::getTrialFetterConditionTypeEnumMap[abi:cxx11](void)::m;
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

// Line 228: range 0000000014324E10-0000000014328DC9
int32_t __cdecl data::FettersExcelConfig::init(
        data::FettersExcelConfig *const this,
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
  bool v10; // bl
  data::FetterCondType *p_cond_type; // rbx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  bool v15; // bl
  bool v16; // bl
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  std::vector<unsigned int> *p_param_list; // r13
  unsigned __int64 v21; // rax
  _DWORD *v22; // rax
  bool v23; // r13
  unsigned __int64 v24; // rax
  char *j; // rbx
  _DWORD *v26; // rax
  common::milog::MiLogStream *v27; // rax
  bool v28; // bl
  data::FetterCondType *v29; // rbx
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  bool v33; // bl
  bool v34; // bl
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  std::vector<unsigned int> *v38; // r13
  unsigned __int64 v39; // rax
  _DWORD *v40; // rax
  bool v41; // r13
  unsigned __int64 v42; // rax
  char *k; // rbx
  _DWORD *v44; // rax
  common::milog::MiLogStream *v45; // rax
  bool v46; // bl
  data::FetterCondType *v47; // rbx
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  bool v51; // bl
  bool v52; // bl
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  std::vector<unsigned int> *v56; // r13
  unsigned __int64 v57; // rax
  _DWORD *v58; // rax
  bool v59; // r13
  unsigned __int64 v60; // rax
  char *m; // rbx
  _DWORD *v62; // rax
  common::milog::MiLogStream *v63; // rax
  bool v64; // bl
  common::milog::MiLogStream *v65; // rax
  unsigned __int64 v66; // rax
  _DWORD *v67; // rax
  bool v68; // r13
  unsigned __int64 v69; // rax
  char *n; // rbx
  _DWORD *v71; // rax
  common::milog::MiLogStream *v72; // rax
  bool v73; // bl
  common::milog::MiLogStream *v74; // rax
  unsigned __int64 v75; // rax
  _DWORD *v76; // rax
  bool v77; // r13
  unsigned __int64 v78; // rax
  char *ii; // rbx
  _DWORD *v80; // rax
  common::milog::MiLogStream *v81; // rax
  std::initializer_list<std::string > __l; // [rsp+10h] [rbp-F20h]
  std::initializer_list<std::string > v84; // [rsp+20h] [rbp-F10h]
  std::initializer_list<std::string > v85; // [rsp+30h] [rbp-F00h]
  std::initializer_list<std::string > v86; // [rsp+40h] [rbp-EF0h]
  std::initializer_list<std::string > v87; // [rsp+50h] [rbp-EE0h]
  uint32_t array_count; // [rsp+70h] [rbp-EC0h]
  uint32_t array_counta; // [rsp+70h] [rbp-EC0h]
  uint32_t array_countb; // [rsp+70h] [rbp-EC0h]
  uint32_t i; // [rsp+74h] [rbp-EBCh]
  uint32_t i_0; // [rsp+78h] [rbp-EB8h]
  uint32_t i_1; // [rsp+7Ch] [rbp-EB4h]
  char v94[3760]; // [rsp+80h] [rbp-EB0h] BYREF

  v2 = (unsigned __int64)v94;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(3712LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "74 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 <unkn"
                        "own> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 288 1 9 <unknown> 3"
                        "04 1 9 <unknown> 320 1 9 <unknown> 336 1 9 <unknown> 352 1 9 <unknown> 368 1 9 <unknown> 384 1 9"
                        " <unknown> 400 1 9 <unknown> 416 1 9 <unknown> 432 1 9 <unknown> 448 1 9 <unknown> 464 1 9 <unkn"
                        "own> 480 1 9 <unknown> 496 1 9 <unknown> 512 1 9 <unknown> 528 1 9 <unknown> 544 24 9 <unknown> "
                        "608 24 9 <unknown> 672 24 9 <unknown> 736 24 9 <unknown> 800 24 9 <unknown> 864 32 11 val_str:23"
                        "1 928 32 9 <unknown> 992 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <unknown> 1184 32 9 <unkno"
                        "wn> 1248 32 9 <unknown> 1312 32 9 <unknown> 1376 32 9 <unknown> 1440 32 9 <unknown> 1504 32 9 <u"
                        "nknown> 1568 32 9 <unknown> 1632 32 9 <unknown> 1696 32 9 <unknown> 1760 32 9 <unknown> 1824 32 "
                        "9 <unknown> 1888 32 9 <unknown> 1952 32 9 <unknown> 2016 32 9 <unknown> 2080 32 9 <unknown> 2144"
                        " 32 9 <unknown> 2208 32 9 <unknown> 2272 32 9 <unknown> 2336 32 9 <unknown> 2400 32 9 <unknown> "
                        "2464 32 9 <unknown> 2528 32 9 <unknown> 2592 32 9 <unknown> 2656 32 9 <unknown> 2720 32 9 <unkno"
                        "wn> 2784 32 9 <unknown> 2848 32 9 <unknown> 2912 64 9 <unknown> 3008 64 9 <unknown> 3104 64 9 <u"
                        "nknown> 3200 64 9 <unknown> 3296 64 9 <unknown> 3392 256 12 col_name:229";
  *(_QWORD *)(v2 + 16) = data::FettersExcelConfig::init;
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
  v4[536862737] = -234881024;
  v4[536862738] = -218959118;
  v4[536862739] = -234881024;
  v4[536862740] = -218959118;
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
  v4[536862813] = -218959118;
  v4[536862816] = -218959118;
  v4[536862819] = -218959118;
  v4[536862822] = -218959118;
  v4[536862825] = -218959118;
  v4[536862834] = -202116109;
  v4[536862835] = -202116109;
  std::string::basic_string(v2 + 864);
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 928),
    "ID",
    (const std::allocator<char> *)(v2 + 48));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 928), &this->fetter_id) != 0;
  std::string::~string((void *)(v2 + 928));
  *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
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
      "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
      "init",
      234);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 992),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v6, (const char (*)[23])byte_1AD3A120);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 992));
    *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 1056),
      &byte_1AD45C80,
      (const std::allocator<char> *)(v2 + 64));
    v8 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 1056), &this->avatar_id) != 0;
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
        "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
        "init",
        239);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 1120),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v9, (const char (*)[29])byte_1AD45CC0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1120));
      *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -117901064;
      v7 = -1;
    }
    else
    {
      std::vector<data::FetterConditionConfig>::resize(&this->open_conds, 5uLL);
      array_count = 0;
      for ( i = 0; i <= 4; ++i )
      {
        snprintf((char *)(v2 + 3392), 0x100uLL, &byte_1AD45D00, i + 1);
        *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 1184),
          (const char *)(v2 + 3392),
          (const std::allocator<char> *)(v2 + 80));
        v10 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 1184));
        std::string::~string((void *)(v2 + 1184));
        *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( !v10 )
        {
          p_cond_type = &std::vector<data::FetterConditionConfig>::operator[](&this->open_conds, i)->cond_type;
          *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 96);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1248),
            (const char *)(v2 + 3392),
            (const std::allocator<char> *)(v2 + 96));
          LOBYTE(p_cond_type) = common::tools::TxtFile::Row::assignToEnum<data::FetterCondType>(
                                  row,
                                  (const std::string *)(v2 + 1248),
                                  p_cond_type) != 0;
          std::string::~string((void *)(v2 + 1248));
          *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 96);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( (_BYTE)p_cond_type )
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
              "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
              "init",
              251);
            v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 1312),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v12,
                    (const char (*)[14])byte_1AD38B80);
            v14 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                    v13,
                    (const char (*)[256])(v2 + 3392));
            common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])byte_1AD38BC0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1312));
            *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = -117901064;
            v7 = -1;
            goto LABEL_98;
          }
          snprintf((char *)(v2 + 3392), 0x100uLL, &byte_1AD45D40, i + 1);
          *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 112);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1376),
            (const char *)(v2 + 3392),
            (const std::allocator<char> *)(v2 + 112));
          v15 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 1376));
          std::string::~string((void *)(v2 + 1376));
          *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( !v15 )
          {
            *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 128);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1440),
              (const char *)(v2 + 3392),
              (const std::allocator<char> *)(v2 + 128));
            v16 = common::tools::TxtFile::Row::assignToStr(
                    row,
                    (const std::string *)(v2 + 1440),
                    (std::string *)(v2 + 864)) != 0;
            std::string::~string((void *)(v2 + 1440));
            *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 128);
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
            if ( v16 )
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
                "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
                "init",
                259);
              v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1504),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v18 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v17,
                      (const char (*)[14])byte_1AD38B80);
              v19 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                      v18,
                      (const char (*)[256])(v2 + 3392));
              common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v19, (const char (*)[7])byte_1AD38BC0);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1504));
              *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = -117901064;
              v7 = -1;
              goto LABEL_98;
            }
            p_param_list = &std::vector<data::FetterConditionConfig>::operator[](&this->open_conds, i)->param_list;
            v21 = ((v2 + 544) >> 3) + 2147450880;
            *(_WORD *)v21 = 0;
            *(_BYTE *)(v21 + 2) = 0;
            v22 = (_DWORD *)(((v2 + 2912) >> 3) + 2147450880);
            *v22 = 0;
            v22[1] = 0;
            *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 144);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 2912),
              ";",
              (const std::allocator<char> *)(v2 + 144));
            *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 160);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 2944),
              ",",
              (const std::allocator<char> *)(v2 + 160));
            __l._M_array = (std::initializer_list<std::string >::iterator)(v2 + 2912);
            __l._M_len = 2LL;
            *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
            std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 176));
            std::vector<std::string>::vector(
              (std::vector<std::string> *const)(v2 + 544),
              __l,
              (const std::vector<std::string>::allocator_type *)(v2 + 176));
            v23 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                    (const std::string *)(v2 + 864),
                    (const std::vector<std::string> *)(v2 + 544),
                    p_param_list,
                    1) != 0;
            std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 544));
            v24 = ((v2 + 544) >> 3) + 2147450880;
            *(_WORD *)v24 = -1800;
            *(_BYTE *)(v24 + 2) = -8;
            std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 176));
            *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
            for ( j = (char *)(v2 + 2976); j != (char *)(v2 + 2912); std::string::~string(j) )
              j -= 32;
            v26 = (_DWORD *)(((v2 + 2912) >> 3) + 2147450880);
            *v26 = -117901064;
            v26[1] = -117901064;
            std::allocator<char>::~allocator(v2 + 160);
            *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
            std::allocator<char>::~allocator(v2 + 144);
            *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
            if ( v23 )
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
                "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
                "init",
                264);
              v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1568),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v27, (const char (*)[47])byte_1AD45D80);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1568));
              *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = -117901064;
              v7 = -1;
              goto LABEL_98;
            }
            array_count = i + 1;
          }
        }
      }
      std::vector<data::FetterConditionConfig>::resize(&this->open_conds, array_count);
      std::vector<data::FetterConditionConfig>::resize(&this->finish_conds, 5uLL);
      array_counta = 0;
      for ( i_0 = 0; i_0 <= 4; ++i_0 )
      {
        snprintf((char *)(v2 + 3392), 0x100uLL, &byte_1AD45DE0, i_0 + 1);
        *(_DWORD *)(((v2 + 1632) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 192);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 1632),
          (const char *)(v2 + 3392),
          (const std::allocator<char> *)(v2 + 192));
        v28 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 1632));
        std::string::~string((void *)(v2 + 1632));
        *(_DWORD *)(((v2 + 1632) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 192);
        *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
        if ( !v28 )
        {
          v29 = &std::vector<data::FetterConditionConfig>::operator[](&this->finish_conds, i_0)->cond_type;
          *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 208);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1696),
            (const char *)(v2 + 3392),
            (const std::allocator<char> *)(v2 + 208));
          LOBYTE(v29) = common::tools::TxtFile::Row::assignToEnum<data::FetterCondType>(
                          row,
                          (const std::string *)(v2 + 1696),
                          v29) != 0;
          std::string::~string((void *)(v2 + 1696));
          *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 208);
          *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
          if ( (_BYTE)v29 )
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
              "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
              "init",
              280);
            v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 1760),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v31 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v30,
                    (const char (*)[14])byte_1AD38B80);
            v32 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                    v31,
                    (const char (*)[256])(v2 + 3392));
            common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v32, (const char (*)[7])byte_1AD38BC0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1760));
            *(_DWORD *)(((v2 + 1760) >> 3) + 0x7FFF8000) = -117901064;
            v7 = -1;
            goto LABEL_98;
          }
          snprintf((char *)(v2 + 3392), 0x100uLL, &byte_1AD45E20, i_0 + 1);
          *(_DWORD *)(((v2 + 1824) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 224);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1824),
            (const char *)(v2 + 3392),
            (const std::allocator<char> *)(v2 + 224));
          v33 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 1824));
          std::string::~string((void *)(v2 + 1824));
          *(_DWORD *)(((v2 + 1824) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 224);
          *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
          if ( !v33 )
          {
            *(_DWORD *)(((v2 + 1888) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 240);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1888),
              (const char *)(v2 + 3392),
              (const std::allocator<char> *)(v2 + 240));
            v34 = common::tools::TxtFile::Row::assignToStr(
                    row,
                    (const std::string *)(v2 + 1888),
                    (std::string *)(v2 + 864)) != 0;
            std::string::~string((void *)(v2 + 1888));
            *(_DWORD *)(((v2 + 1888) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 240);
            *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
            if ( v34 )
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
                "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
                "init",
                288);
              v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1952),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v36 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v35,
                      (const char (*)[14])byte_1AD38B80);
              v37 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                      v36,
                      (const char (*)[256])(v2 + 3392));
              common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v37, (const char (*)[7])byte_1AD38BC0);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1952));
              *(_DWORD *)(((v2 + 1952) >> 3) + 0x7FFF8000) = -117901064;
              v7 = -1;
              goto LABEL_98;
            }
            v38 = &std::vector<data::FetterConditionConfig>::operator[](&this->finish_conds, i_0)->param_list;
            v39 = ((v2 + 608) >> 3) + 2147450880;
            *(_WORD *)v39 = 0;
            *(_BYTE *)(v39 + 2) = 0;
            v40 = (_DWORD *)(((v2 + 3008) >> 3) + 2147450880);
            *v40 = 0;
            v40[1] = 0;
            *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 256);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 3008),
              ";",
              (const std::allocator<char> *)(v2 + 256));
            *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 272);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 3040),
              ",",
              (const std::allocator<char> *)(v2 + 272));
            v84._M_array = (std::initializer_list<std::string >::iterator)(v2 + 3008);
            v84._M_len = 2LL;
            *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 1;
            std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 288));
            std::vector<std::string>::vector(
              (std::vector<std::string> *const)(v2 + 608),
              v84,
              (const std::vector<std::string>::allocator_type *)(v2 + 288));
            v41 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                    (const std::string *)(v2 + 864),
                    (const std::vector<std::string> *)(v2 + 608),
                    v38,
                    1) != 0;
            std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 608));
            v42 = ((v2 + 608) >> 3) + 2147450880;
            *(_WORD *)v42 = -1800;
            *(_BYTE *)(v42 + 2) = -8;
            std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 288));
            *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
            for ( k = (char *)(v2 + 3072); k != (char *)(v2 + 3008); std::string::~string(k) )
              k -= 32;
            v44 = (_DWORD *)(((v2 + 3008) >> 3) + 2147450880);
            *v44 = -117901064;
            v44[1] = -117901064;
            std::allocator<char>::~allocator(v2 + 272);
            *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
            std::allocator<char>::~allocator(v2 + 256);
            *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
            if ( v41 )
            {
              *(_DWORD *)(((v2 + 2016) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 2016) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 2047) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 2047) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 2016, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 2016),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
                "init",
                293);
              v45 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 2016),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v45, (const char (*)[47])byte_1AD45E60);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2016));
              *(_DWORD *)(((v2 + 2016) >> 3) + 0x7FFF8000) = -117901064;
              v7 = -1;
              goto LABEL_98;
            }
            array_counta = i_0 + 1;
          }
        }
      }
      std::vector<data::FetterConditionConfig>::resize(&this->finish_conds, array_counta);
      std::vector<data::FetterConditionConfig>::resize(&this->conceal_conds, 5uLL);
      array_countb = 0;
      for ( i_1 = 0; i_1 <= 4; ++i_1 )
      {
        snprintf((char *)(v2 + 3392), 0x100uLL, &byte_1AD45EC0, i_1 + 1);
        *(_DWORD *)(((v2 + 2080) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 304);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 2080),
          (const char *)(v2 + 3392),
          (const std::allocator<char> *)(v2 + 304));
        v46 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 2080));
        std::string::~string((void *)(v2 + 2080));
        *(_DWORD *)(((v2 + 2080) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 304);
        *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
        if ( !v46 )
        {
          v47 = &std::vector<data::FetterConditionConfig>::operator[](&this->conceal_conds, i_1)->cond_type;
          *(_DWORD *)(((v2 + 2144) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 320);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 2144),
            (const char *)(v2 + 3392),
            (const std::allocator<char> *)(v2 + 320));
          LOBYTE(v47) = common::tools::TxtFile::Row::assignToEnum<data::FetterCondType>(
                          row,
                          (const std::string *)(v2 + 2144),
                          v47) != 0;
          std::string::~string((void *)(v2 + 2144));
          *(_DWORD *)(((v2 + 2144) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 320);
          *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
          if ( (_BYTE)v47 )
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
              "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
              "init",
              309);
            v48 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 2208),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v49 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v48,
                    (const char (*)[14])byte_1AD38B80);
            v50 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                    v49,
                    (const char (*)[256])(v2 + 3392));
            common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v50, (const char (*)[7])byte_1AD38BC0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2208));
            *(_DWORD *)(((v2 + 2208) >> 3) + 0x7FFF8000) = -117901064;
            v7 = -1;
            goto LABEL_98;
          }
          snprintf((char *)(v2 + 3392), 0x100uLL, &byte_1AD45F00, i_1 + 1);
          *(_DWORD *)(((v2 + 2272) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 336);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 2272),
            (const char *)(v2 + 3392),
            (const std::allocator<char> *)(v2 + 336));
          v51 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 2272));
          std::string::~string((void *)(v2 + 2272));
          *(_DWORD *)(((v2 + 2272) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 336);
          *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
          if ( !v51 )
          {
            *(_DWORD *)(((v2 + 2336) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 352);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 2336),
              (const char *)(v2 + 3392),
              (const std::allocator<char> *)(v2 + 352));
            v52 = common::tools::TxtFile::Row::assignToStr(
                    row,
                    (const std::string *)(v2 + 2336),
                    (std::string *)(v2 + 864)) != 0;
            std::string::~string((void *)(v2 + 2336));
            *(_DWORD *)(((v2 + 2336) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 352);
            *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
            if ( v52 )
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
                "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
                "init",
                317);
              v53 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 2400),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v54 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v53,
                      (const char (*)[14])byte_1AD38B80);
              v55 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                      v54,
                      (const char (*)[256])(v2 + 3392));
              common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v55, (const char (*)[7])byte_1AD38BC0);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2400));
              *(_DWORD *)(((v2 + 2400) >> 3) + 0x7FFF8000) = -117901064;
              v7 = -1;
              goto LABEL_98;
            }
            v56 = &std::vector<data::FetterConditionConfig>::operator[](&this->conceal_conds, i_1)->param_list;
            v57 = ((v2 + 672) >> 3) + 2147450880;
            *(_WORD *)v57 = 0;
            *(_BYTE *)(v57 + 2) = 0;
            v58 = (_DWORD *)(((v2 + 3104) >> 3) + 2147450880);
            *v58 = 0;
            v58[1] = 0;
            *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 368);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 3104),
              ";",
              (const std::allocator<char> *)(v2 + 368));
            *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 384);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 3136),
              ",",
              (const std::allocator<char> *)(v2 + 384));
            v85._M_array = (std::initializer_list<std::string >::iterator)(v2 + 3104);
            v85._M_len = 2LL;
            *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = 1;
            std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 400));
            std::vector<std::string>::vector(
              (std::vector<std::string> *const)(v2 + 672),
              v85,
              (const std::vector<std::string>::allocator_type *)(v2 + 400));
            v59 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                    (const std::string *)(v2 + 864),
                    (const std::vector<std::string> *)(v2 + 672),
                    v56,
                    1) != 0;
            std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 672));
            v60 = ((v2 + 672) >> 3) + 2147450880;
            *(_WORD *)v60 = -1800;
            *(_BYTE *)(v60 + 2) = -8;
            std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 400));
            *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
            for ( m = (char *)(v2 + 3168); m != (char *)(v2 + 3104); std::string::~string(m) )
              m -= 32;
            v62 = (_DWORD *)(((v2 + 3104) >> 3) + 2147450880);
            *v62 = -117901064;
            v62[1] = -117901064;
            std::allocator<char>::~allocator(v2 + 384);
            *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
            std::allocator<char>::~allocator(v2 + 368);
            *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
            if ( v59 )
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
                "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
                "init",
                322);
              v63 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 2464),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v63, (const char (*)[47])byte_1AD45F40);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2464));
              *(_DWORD *)(((v2 + 2464) >> 3) + 0x7FFF8000) = -117901064;
              v7 = -1;
              goto LABEL_98;
            }
            array_countb = i_1 + 1;
          }
        }
      }
      std::vector<data::FetterConditionConfig>::resize(&this->conceal_conds, array_countb);
      *(_DWORD *)(((v2 + 2528) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 416);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 2528),
        &byte_1AD45FA0,
        (const std::allocator<char> *)(v2 + 416));
      v64 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 2528), (std::string *)(v2 + 864)) != 0;
      std::string::~string((void *)(v2 + 2528));
      *(_DWORD *)(((v2 + 2528) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 416);
      *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
      if ( v64 )
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
          "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
          "init",
          331);
        v65 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 2592),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v65, (const char (*)[48])byte_1AD45FE0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2592));
        *(_DWORD *)(((v2 + 2592) >> 3) + 0x7FFF8000) = -117901064;
        v7 = -1;
      }
      else
      {
        v66 = ((v2 + 736) >> 3) + 2147450880;
        *(_WORD *)v66 = 0;
        *(_BYTE *)(v66 + 2) = 0;
        v67 = (_DWORD *)(((v2 + 3200) >> 3) + 2147450880);
        *v67 = 0;
        v67[1] = 0;
        *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 432);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 3200),
          ";",
          (const std::allocator<char> *)(v2 + 432));
        *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 448);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 3232),
          ",",
          (const std::allocator<char> *)(v2 + 448));
        v86._M_array = (std::initializer_list<std::string >::iterator)(v2 + 3200);
        v86._M_len = 2LL;
        *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = 1;
        std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 464));
        std::vector<std::string>::vector(
          (std::vector<std::string> *const)(v2 + 736),
          v86,
          (const std::vector<std::string>::allocator_type *)(v2 + 464));
        v68 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                (const std::string *)(v2 + 864),
                (const std::vector<std::string> *)(v2 + 736),
                &this->hide_costume_list,
                1) != 0;
        std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 736));
        v69 = ((v2 + 736) >> 3) + 2147450880;
        *(_WORD *)v69 = -1800;
        *(_BYTE *)(v69 + 2) = -8;
        std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 464));
        *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = -8;
        for ( n = (char *)(v2 + 3264); n != (char *)(v2 + 3200); std::string::~string(n) )
          n -= 32;
        v71 = (_DWORD *)(((v2 + 3200) >> 3) + 2147450880);
        *v71 = -117901064;
        v71[1] = -117901064;
        std::allocator<char>::~allocator(v2 + 448);
        *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = -8;
        std::allocator<char>::~allocator(v2 + 432);
        *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = -8;
        if ( v68 )
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
            "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
            "init",
            336);
          v72 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 2656),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v72, (const char (*)[48])byte_1AD45FE0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2656));
          *(_DWORD *)(((v2 + 2656) >> 3) + 0x7FFF8000) = -117901064;
          v7 = -1;
        }
        else
        {
          *(_DWORD *)(((v2 + 2720) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 480);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 2720),
            &byte_1AD46040,
            (const std::allocator<char> *)(v2 + 480));
          v73 = common::tools::TxtFile::Row::assignToStr(
                  row,
                  (const std::string *)(v2 + 2720),
                  (std::string *)(v2 + 864)) != 0;
          std::string::~string((void *)(v2 + 2720));
          *(_DWORD *)(((v2 + 2720) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 480);
          *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = -8;
          if ( v73 )
          {
            *(_DWORD *)(((v2 + 2784) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 2784) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 2815) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 2815) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 2784, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 2784),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
              "init",
              341);
            v74 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 2784),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v74, (const char (*)[48])byte_1AD46080);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2784));
            *(_DWORD *)(((v2 + 2784) >> 3) + 0x7FFF8000) = -117901064;
            v7 = -1;
          }
          else
          {
            v75 = ((v2 + 800) >> 3) + 2147450880;
            *(_WORD *)v75 = 0;
            *(_BYTE *)(v75 + 2) = 0;
            v76 = (_DWORD *)(((v2 + 3296) >> 3) + 2147450880);
            *v76 = 0;
            v76[1] = 0;
            *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 496);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 3296),
              ";",
              (const std::allocator<char> *)(v2 + 496));
            *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 512);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 3328),
              ",",
              (const std::allocator<char> *)(v2 + 512));
            v87._M_array = (std::initializer_list<std::string >::iterator)(v2 + 3296);
            v87._M_len = 2LL;
            *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = 1;
            std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 528));
            std::vector<std::string>::vector(
              (std::vector<std::string> *const)(v2 + 800),
              v87,
              (const std::vector<std::string>::allocator_type *)(v2 + 528));
            v77 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                    (const std::string *)(v2 + 864),
                    (const std::vector<std::string> *)(v2 + 800),
                    &this->show_costume_list,
                    1) != 0;
            std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 800));
            v78 = ((v2 + 800) >> 3) + 2147450880;
            *(_WORD *)v78 = -1800;
            *(_BYTE *)(v78 + 2) = -8;
            std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 528));
            *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = -8;
            for ( ii = (char *)(v2 + 3360); ii != (char *)(v2 + 3296); std::string::~string(ii) )
              ii -= 32;
            v80 = (_DWORD *)(((v2 + 3296) >> 3) + 2147450880);
            *v80 = -117901064;
            v80[1] = -117901064;
            std::allocator<char>::~allocator(v2 + 512);
            *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = -8;
            std::allocator<char>::~allocator(v2 + 496);
            *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = -8;
            if ( v77 )
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
                "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
                "init",
                346);
              v81 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 2848),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v81, (const char (*)[48])byte_1AD46080);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2848));
              *(_DWORD *)(((v2 + 2848) >> 3) + 0x7FFF8000) = -117901064;
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
LABEL_98:
  std::string::~string((void *)(v2 + 864));
  if ( v94 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8064) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 108) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81A0) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862750) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450992 - (((_DWORD)v4 + 2147451000) & 0xFFFFFFF8) + 312) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF81C8) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 3712LL, v94);
  }
  return v7;
};

// Line 354: range 0000000014328DCA-000000001432C28A
int32_t __cdecl data::FetterInfoExcelConfig::init(
        data::FetterInfoExcelConfig *const this,
        const common::tools::TxtFile::Row *row)
{
  unsigned __int64 v2; // r15
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r13
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r13d
  bool v8; // r13
  common::milog::MiLogStream *v9; // rax
  bool v10; // r13
  data::FetterCondType *p_cond_type; // r13
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  bool v15; // r13
  bool v16; // r13
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  std::vector<unsigned int> *p_param_list; // r13
  unsigned __int64 v21; // rax
  _DWORD *v22; // rax
  bool v23; // r14
  unsigned __int64 v24; // rax
  char *j; // r13
  _DWORD *v26; // rax
  common::milog::MiLogStream *v27; // rax
  bool v28; // r13
  data::FetterCondType *v29; // r13
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  bool v33; // r13
  bool v34; // r13
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  std::vector<unsigned int> *v38; // r13
  unsigned __int64 v39; // rax
  _DWORD *v40; // rax
  bool v41; // r14
  unsigned __int64 v42; // rax
  char *k; // r13
  _DWORD *v44; // rax
  common::milog::MiLogStream *v45; // rax
  bool v46; // r13
  data::FetterCondType *v47; // r13
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  bool v51; // r13
  bool v52; // r13
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  std::vector<unsigned int> *v56; // r13
  unsigned __int64 v57; // rax
  _DWORD *v58; // rax
  bool v59; // r14
  unsigned __int64 v60; // rax
  char *m; // r13
  _DWORD *v62; // rax
  common::milog::MiLogStream *v63; // rax
  bool v64; // r13
  common::milog::MiLogStream *v65; // rax
  bool v66; // r13
  common::milog::MiLogStream *v67; // rax
  std::initializer_list<std::string > __l; // [rsp+10h] [rbp-CE0h]
  std::initializer_list<std::string > v70; // [rsp+20h] [rbp-CD0h]
  std::initializer_list<std::string > v71; // [rsp+30h] [rbp-CC0h]
  uint32_t array_count; // [rsp+50h] [rbp-CA0h]
  uint32_t array_counta; // [rsp+50h] [rbp-CA0h]
  uint32_t array_countb; // [rsp+50h] [rbp-CA0h]
  uint32_t i; // [rsp+54h] [rbp-C9Ch]
  uint32_t i_0; // [rsp+58h] [rbp-C98h]
  uint32_t i_1; // [rsp+5Ch] [rbp-C94h]
  char v78[3216]; // [rsp+60h] [rbp-C90h] BYREF

  v2 = (unsigned __int64)v78;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(3168LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "62 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 <unkn"
                        "own> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 288 1 9 <unknown> 3"
                        "04 1 9 <unknown> 320 1 9 <unknown> 336 1 9 <unknown> 352 1 9 <unknown> 368 1 9 <unknown> 384 1 9"
                        " <unknown> 400 1 9 <unknown> 416 1 9 <unknown> 432 1 9 <unknown> 448 24 9 <unknown> 512 24 9 <un"
                        "known> 576 24 9 <unknown> 640 32 11 val_str:357 704 32 9 <unknown> 768 32 9 <unknown> 832 32 9 <"
                        "unknown> 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 <unknown> 1152 32 9"
                        " <unknown> 1216 32 9 <unknown> 1280 32 9 <unknown> 1344 32 9 <unknown> 1408 32 9 <unknown> 1472 "
                        "32 9 <unknown> 1536 32 9 <unknown> 1600 32 9 <unknown> 1664 32 9 <unknown> 1728 32 9 <unknown> 1"
                        "792 32 9 <unknown> 1856 32 9 <unknown> 1920 32 9 <unknown> 1984 32 9 <unknown> 2048 32 9 <unknow"
                        "n> 2112 32 9 <unknown> 2176 32 9 <unknown> 2240 32 9 <unknown> 2304 32 9 <unknown> 2368 32 9 <un"
                        "known> 2432 32 9 <unknown> 2496 32 9 <unknown> 2560 64 9 <unknown> 2656 64 9 <unknown> 2752 64 9"
                        " <unknown> 2848 256 12 col_name:355";
  *(_QWORD *)(v2 + 16) = data::FetterInfoExcelConfig::init;
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
  v4[536862736] = -234881024;
  v4[536862737] = -218959118;
  v4[536862738] = -234881024;
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
  v4[536862802] = -218959118;
  v4[536862805] = -218959118;
  v4[536862808] = -218959118;
  v4[536862817] = -202116109;
  v4[536862818] = -202116109;
  std::string::basic_string(v2 + 640);
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 704),
    "ID",
    (const std::allocator<char> *)(v2 + 48));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 704), &this->fetter_id) != 0;
  std::string::~string((void *)(v2 + 704));
  *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
  {
    *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 768) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 768, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 768),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
      "init",
      360);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 768),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v6, (const char (*)[23])byte_1AD3A120);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 768));
    *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 832),
      &byte_1AD45C80,
      (const std::allocator<char> *)(v2 + 64));
    v8 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 832), &this->avatar_id) != 0;
    std::string::~string((void *)(v2 + 832));
    *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
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
        "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
        "init",
        365);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 896),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v9, (const char (*)[29])byte_1AD45CC0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 896));
      *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = -117901064;
      v7 = -1;
    }
    else
    {
      std::vector<data::FetterConditionConfig>::resize(&this->open_conds, 5uLL);
      array_count = 0;
      for ( i = 0; i <= 4; ++i )
      {
        snprintf((char *)(v2 + 2848), 0x100uLL, &byte_1AD45D00, i + 1);
        *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 960),
          (const char *)(v2 + 2848),
          (const std::allocator<char> *)(v2 + 80));
        v10 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 960));
        std::string::~string((void *)(v2 + 960));
        *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( !v10 )
        {
          p_cond_type = &std::vector<data::FetterConditionConfig>::operator[](&this->open_conds, i)->cond_type;
          *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 96);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1024),
            (const char *)(v2 + 2848),
            (const std::allocator<char> *)(v2 + 96));
          LOBYTE(p_cond_type) = common::tools::TxtFile::Row::assignToEnum<data::FetterCondType>(
                                  row,
                                  (const std::string *)(v2 + 1024),
                                  p_cond_type) != 0;
          std::string::~string((void *)(v2 + 1024));
          *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 96);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( (_BYTE)p_cond_type )
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
              "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
              "init",
              377);
            v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 1088),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v12,
                    (const char (*)[14])byte_1AD38B80);
            v14 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                    v13,
                    (const char (*)[256])(v2 + 2848));
            common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])byte_1AD38BC0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1088));
            *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -117901064;
            v7 = -1;
            goto LABEL_84;
          }
          snprintf((char *)(v2 + 2848), 0x100uLL, &byte_1AD45D40, i + 1);
          *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 112);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1152),
            (const char *)(v2 + 2848),
            (const std::allocator<char> *)(v2 + 112));
          v15 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 1152));
          std::string::~string((void *)(v2 + 1152));
          *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( !v15 )
          {
            *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 128);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1216),
              (const char *)(v2 + 2848),
              (const std::allocator<char> *)(v2 + 128));
            v16 = common::tools::TxtFile::Row::assignToStr(
                    row,
                    (const std::string *)(v2 + 1216),
                    (std::string *)(v2 + 640)) != 0;
            std::string::~string((void *)(v2 + 1216));
            *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 128);
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
            if ( v16 )
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
                "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
                "init",
                385);
              v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1280),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v18 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v17,
                      (const char (*)[14])byte_1AD38B80);
              v19 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                      v18,
                      (const char (*)[256])(v2 + 2848));
              common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v19, (const char (*)[7])byte_1AD38BC0);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1280));
              *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = -117901064;
              v7 = -1;
              goto LABEL_84;
            }
            p_param_list = &std::vector<data::FetterConditionConfig>::operator[](&this->open_conds, i)->param_list;
            v21 = ((v2 + 448) >> 3) + 2147450880;
            *(_WORD *)v21 = 0;
            *(_BYTE *)(v21 + 2) = 0;
            v22 = (_DWORD *)(((v2 + 2560) >> 3) + 2147450880);
            *v22 = 0;
            v22[1] = 0;
            *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 144);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 2560),
              ";",
              (const std::allocator<char> *)(v2 + 144));
            *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 160);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 2592),
              ",",
              (const std::allocator<char> *)(v2 + 160));
            __l._M_array = (std::initializer_list<std::string >::iterator)(v2 + 2560);
            __l._M_len = 2LL;
            *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
            std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 176));
            std::vector<std::string>::vector(
              (std::vector<std::string> *const)(v2 + 448),
              __l,
              (const std::vector<std::string>::allocator_type *)(v2 + 176));
            v23 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                    (const std::string *)(v2 + 640),
                    (const std::vector<std::string> *)(v2 + 448),
                    p_param_list,
                    1) != 0;
            std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 448));
            v24 = ((v2 + 448) >> 3) + 2147450880;
            *(_WORD *)v24 = -1800;
            *(_BYTE *)(v24 + 2) = -8;
            std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 176));
            *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
            for ( j = (char *)(v2 + 2624); j != (char *)(v2 + 2560); std::string::~string(j) )
              j -= 32;
            v26 = (_DWORD *)(((v2 + 2560) >> 3) + 2147450880);
            *v26 = -117901064;
            v26[1] = -117901064;
            std::allocator<char>::~allocator(v2 + 160);
            *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
            std::allocator<char>::~allocator(v2 + 144);
            *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
            if ( v23 )
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
                "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
                "init",
                390);
              v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1344),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v27, (const char (*)[47])byte_1AD45D80);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1344));
              *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = -117901064;
              v7 = -1;
              goto LABEL_84;
            }
            array_count = i + 1;
          }
        }
      }
      std::vector<data::FetterConditionConfig>::resize(&this->open_conds, array_count);
      std::vector<data::FetterConditionConfig>::resize(&this->finish_conds, 5uLL);
      array_counta = 0;
      for ( i_0 = 0; i_0 <= 4; ++i_0 )
      {
        snprintf((char *)(v2 + 2848), 0x100uLL, &byte_1AD45DE0, i_0 + 1);
        *(_DWORD *)(((v2 + 1408) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 192);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 1408),
          (const char *)(v2 + 2848),
          (const std::allocator<char> *)(v2 + 192));
        v28 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 1408));
        std::string::~string((void *)(v2 + 1408));
        *(_DWORD *)(((v2 + 1408) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 192);
        *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
        if ( !v28 )
        {
          v29 = &std::vector<data::FetterConditionConfig>::operator[](&this->finish_conds, i_0)->cond_type;
          *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 208);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1472),
            (const char *)(v2 + 2848),
            (const std::allocator<char> *)(v2 + 208));
          LOBYTE(v29) = common::tools::TxtFile::Row::assignToEnum<data::FetterCondType>(
                          row,
                          (const std::string *)(v2 + 1472),
                          v29) != 0;
          std::string::~string((void *)(v2 + 1472));
          *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 208);
          *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
          if ( (_BYTE)v29 )
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
              "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
              "init",
              406);
            v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 1536),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v31 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v30,
                    (const char (*)[14])byte_1AD38B80);
            v32 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                    v31,
                    (const char (*)[256])(v2 + 2848));
            common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v32, (const char (*)[7])byte_1AD38BC0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1536));
            *(_DWORD *)(((v2 + 1536) >> 3) + 0x7FFF8000) = -117901064;
            v7 = -1;
            goto LABEL_84;
          }
          snprintf((char *)(v2 + 2848), 0x100uLL, &byte_1AD45E20, i_0 + 1);
          *(_DWORD *)(((v2 + 1600) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 224);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1600),
            (const char *)(v2 + 2848),
            (const std::allocator<char> *)(v2 + 224));
          v33 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 1600));
          std::string::~string((void *)(v2 + 1600));
          *(_DWORD *)(((v2 + 1600) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 224);
          *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
          if ( !v33 )
          {
            *(_DWORD *)(((v2 + 1664) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 240);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1664),
              (const char *)(v2 + 2848),
              (const std::allocator<char> *)(v2 + 240));
            v34 = common::tools::TxtFile::Row::assignToStr(
                    row,
                    (const std::string *)(v2 + 1664),
                    (std::string *)(v2 + 640)) != 0;
            std::string::~string((void *)(v2 + 1664));
            *(_DWORD *)(((v2 + 1664) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 240);
            *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
            if ( v34 )
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
                "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
                "init",
                414);
              v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1728),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v36 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v35,
                      (const char (*)[14])byte_1AD38B80);
              v37 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                      v36,
                      (const char (*)[256])(v2 + 2848));
              common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v37, (const char (*)[7])byte_1AD38BC0);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1728));
              *(_DWORD *)(((v2 + 1728) >> 3) + 0x7FFF8000) = -117901064;
              v7 = -1;
              goto LABEL_84;
            }
            v38 = &std::vector<data::FetterConditionConfig>::operator[](&this->finish_conds, i_0)->param_list;
            v39 = ((v2 + 512) >> 3) + 2147450880;
            *(_WORD *)v39 = 0;
            *(_BYTE *)(v39 + 2) = 0;
            v40 = (_DWORD *)(((v2 + 2656) >> 3) + 2147450880);
            *v40 = 0;
            v40[1] = 0;
            *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 256);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 2656),
              ";",
              (const std::allocator<char> *)(v2 + 256));
            *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 272);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 2688),
              ",",
              (const std::allocator<char> *)(v2 + 272));
            v70._M_array = (std::initializer_list<std::string >::iterator)(v2 + 2656);
            v70._M_len = 2LL;
            *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 1;
            std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 288));
            std::vector<std::string>::vector(
              (std::vector<std::string> *const)(v2 + 512),
              v70,
              (const std::vector<std::string>::allocator_type *)(v2 + 288));
            v41 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                    (const std::string *)(v2 + 640),
                    (const std::vector<std::string> *)(v2 + 512),
                    v38,
                    1) != 0;
            std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 512));
            v42 = ((v2 + 512) >> 3) + 2147450880;
            *(_WORD *)v42 = -1800;
            *(_BYTE *)(v42 + 2) = -8;
            std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 288));
            *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
            for ( k = (char *)(v2 + 2720); k != (char *)(v2 + 2656); std::string::~string(k) )
              k -= 32;
            v44 = (_DWORD *)(((v2 + 2656) >> 3) + 2147450880);
            *v44 = -117901064;
            v44[1] = -117901064;
            std::allocator<char>::~allocator(v2 + 272);
            *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
            std::allocator<char>::~allocator(v2 + 256);
            *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
            if ( v41 )
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
                "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
                "init",
                419);
              v45 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1792),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v45, (const char (*)[47])byte_1AD45E60);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1792));
              *(_DWORD *)(((v2 + 1792) >> 3) + 0x7FFF8000) = -117901064;
              v7 = -1;
              goto LABEL_84;
            }
            array_counta = i_0 + 1;
          }
        }
      }
      std::vector<data::FetterConditionConfig>::resize(&this->finish_conds, array_counta);
      std::vector<data::FetterConditionConfig>::resize(&this->conceal_conds, 5uLL);
      array_countb = 0;
      for ( i_1 = 0; i_1 <= 4; ++i_1 )
      {
        snprintf((char *)(v2 + 2848), 0x100uLL, &byte_1AD45EC0, i_1 + 1);
        *(_DWORD *)(((v2 + 1856) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 304);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 1856),
          (const char *)(v2 + 2848),
          (const std::allocator<char> *)(v2 + 304));
        v46 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 1856));
        std::string::~string((void *)(v2 + 1856));
        *(_DWORD *)(((v2 + 1856) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 304);
        *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
        if ( !v46 )
        {
          v47 = &std::vector<data::FetterConditionConfig>::operator[](&this->conceal_conds, i_1)->cond_type;
          *(_DWORD *)(((v2 + 1920) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 320);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1920),
            (const char *)(v2 + 2848),
            (const std::allocator<char> *)(v2 + 320));
          LOBYTE(v47) = common::tools::TxtFile::Row::assignToEnum<data::FetterCondType>(
                          row,
                          (const std::string *)(v2 + 1920),
                          v47) != 0;
          std::string::~string((void *)(v2 + 1920));
          *(_DWORD *)(((v2 + 1920) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 320);
          *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
          if ( (_BYTE)v47 )
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
              "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
              "init",
              435);
            v48 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 1984),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v49 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v48,
                    (const char (*)[14])byte_1AD38B80);
            v50 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                    v49,
                    (const char (*)[256])(v2 + 2848));
            common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v50, (const char (*)[7])byte_1AD38BC0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1984));
            *(_DWORD *)(((v2 + 1984) >> 3) + 0x7FFF8000) = -117901064;
            v7 = -1;
            goto LABEL_84;
          }
          snprintf((char *)(v2 + 2848), 0x100uLL, &byte_1AD45F00, i_1 + 1);
          *(_DWORD *)(((v2 + 2048) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 336);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 2048),
            (const char *)(v2 + 2848),
            (const std::allocator<char> *)(v2 + 336));
          v51 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 2048));
          std::string::~string((void *)(v2 + 2048));
          *(_DWORD *)(((v2 + 2048) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 336);
          *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
          if ( !v51 )
          {
            *(_DWORD *)(((v2 + 2112) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 352);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 2112),
              (const char *)(v2 + 2848),
              (const std::allocator<char> *)(v2 + 352));
            v52 = common::tools::TxtFile::Row::assignToStr(
                    row,
                    (const std::string *)(v2 + 2112),
                    (std::string *)(v2 + 640)) != 0;
            std::string::~string((void *)(v2 + 2112));
            *(_DWORD *)(((v2 + 2112) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 352);
            *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
            if ( v52 )
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
                "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
                "init",
                443);
              v53 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 2176),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v54 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v53,
                      (const char (*)[14])byte_1AD38B80);
              v55 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                      v54,
                      (const char (*)[256])(v2 + 2848));
              common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v55, (const char (*)[7])byte_1AD38BC0);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2176));
              *(_DWORD *)(((v2 + 2176) >> 3) + 0x7FFF8000) = -117901064;
              v7 = -1;
              goto LABEL_84;
            }
            v56 = &std::vector<data::FetterConditionConfig>::operator[](&this->conceal_conds, i_1)->param_list;
            v57 = ((v2 + 576) >> 3) + 2147450880;
            *(_WORD *)v57 = 0;
            *(_BYTE *)(v57 + 2) = 0;
            v58 = (_DWORD *)(((v2 + 2752) >> 3) + 2147450880);
            *v58 = 0;
            v58[1] = 0;
            *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 368);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 2752),
              ";",
              (const std::allocator<char> *)(v2 + 368));
            *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 384);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 2784),
              ",",
              (const std::allocator<char> *)(v2 + 384));
            v71._M_array = (std::initializer_list<std::string >::iterator)(v2 + 2752);
            v71._M_len = 2LL;
            *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = 1;
            std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 400));
            std::vector<std::string>::vector(
              (std::vector<std::string> *const)(v2 + 576),
              v71,
              (const std::vector<std::string>::allocator_type *)(v2 + 400));
            v59 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                    (const std::string *)(v2 + 640),
                    (const std::vector<std::string> *)(v2 + 576),
                    v56,
                    1) != 0;
            std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 576));
            v60 = ((v2 + 576) >> 3) + 2147450880;
            *(_WORD *)v60 = -1800;
            *(_BYTE *)(v60 + 2) = -8;
            std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 400));
            *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
            for ( m = (char *)(v2 + 2816); m != (char *)(v2 + 2752); std::string::~string(m) )
              m -= 32;
            v62 = (_DWORD *)(((v2 + 2752) >> 3) + 2147450880);
            *v62 = -117901064;
            v62[1] = -117901064;
            std::allocator<char>::~allocator(v2 + 384);
            *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
            std::allocator<char>::~allocator(v2 + 368);
            *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
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
                "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
                "init",
                448);
              v63 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 2240),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v63, (const char (*)[47])byte_1AD45F40);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2240));
              *(_DWORD *)(((v2 + 2240) >> 3) + 0x7FFF8000) = -117901064;
              v7 = -1;
              goto LABEL_84;
            }
            array_countb = i_1 + 1;
          }
        }
      }
      std::vector<data::FetterConditionConfig>::resize(&this->conceal_conds, array_countb);
      *(_DWORD *)(((v2 + 2304) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 416);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 2304),
        &byte_1AD465A0,
        (const std::allocator<char> *)(v2 + 416));
      v64 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
              row,
              (const std::string *)(v2 + 2304),
              &this->info_birth_month) != 0;
      std::string::~string((void *)(v2 + 2304));
      *(_DWORD *)(((v2 + 2304) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 416);
      *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
      if ( v64 )
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
          "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
          "init",
          457);
        v65 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 2368),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v65, (const char (*)[32])byte_1AD465E0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2368));
        *(_DWORD *)(((v2 + 2368) >> 3) + 0x7FFF8000) = -117901064;
        v7 = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 2432) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 432);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 2432),
          &byte_1AD46620,
          (const std::allocator<char> *)(v2 + 432));
        v66 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                row,
                (const std::string *)(v2 + 2432),
                &this->info_birth_day) != 0;
        std::string::~string((void *)(v2 + 2432));
        *(_DWORD *)(((v2 + 2432) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 432);
        *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = -8;
        if ( v66 )
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
            "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
            "init",
            462);
          v67 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 2496),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v67, (const char (*)[32])byte_1AD46660);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2496));
          *(_DWORD *)(((v2 + 2496) >> 3) + 0x7FFF8000) = -117901064;
          v7 = -1;
        }
        else
        {
          v7 = 0;
        }
      }
    }
  }
LABEL_84:
  std::string::~string((void *)(v2 + 640));
  if ( v78 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8054) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF815C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862743) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450964 - (((_DWORD)v4 + 2147450972) & 0xFFFFFFF8) + 272) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF8184) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 3168LL, v78);
  }
  return v7;
};

// Line 470: range 000000001432C28C-000000001432CAAE
int32_t __cdecl data::FetterCharacterCardExcelConfig::init(
        data::FetterCharacterCardExcelConfig *const this,
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
  *(_QWORD *)(v2 + 16) = data::FetterCharacterCardExcelConfig::init;
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
    &byte_1AD45C80,
    (const std::allocator<char> *)(v2 + 48));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 96), &this->avatar_id) != 0;
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
      "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
      "init",
      473);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 160),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v6, (const char (*)[29])byte_1AD45CC0);
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
      &byte_1AD466A0,
      (const std::allocator<char> *)(v2 + 64));
    v8 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
           row,
           (const std::string *)(v2 + 224),
           &this->fetter_level) != 0;
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
        "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
        "init",
        478);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v9, (const char (*)[33])byte_1AD466E0);
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
        &byte_1AD46740,
        (const std::allocator<char> *)(v2 + 80));
      v10 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
              row,
              (const std::string *)(v2 + 352),
              &this->reward_id) != 0;
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
          "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
          "init",
          483);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 416),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v11, (const char (*)[35])byte_1AD46780);
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

// Line 491: range 000000001432CAB0-000000001432D63B
int32_t __cdecl data::TrialFetterConditionConfig::init(
        data::TrialFetterConditionConfig *const this,
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
                        "9 <unknown> 192 32 11 val_str:492 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 3"
                        "2 9 <unknown> 512 32 9 <unknown> 576 64 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::TrialFetterConditionConfig::init;
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
  t = common::tools::TxtFile::Row::assignToEnum<data::TrialFetterConditionType>(
        row,
        (const std::string *)(v2 + 256),
        (data::TrialFetterConditionType *)this + 2) != 0;
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
      "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
      "init",
      495);
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
      &byte_1AD468E0,
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
        "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
        "init",
        500);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 448),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v7, (const char (*)[33])byte_1AD46920);
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
              (std::vector<unsigned int> *)((char *)this + 16),
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
          "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
          "init",
          505);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 512),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v14, (const char (*)[33])byte_1AD46920);
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

// Line 514: range 000000001432D63C-000000001432E65C
int32_t __cdecl data::FettersExcelConfigMgrBase::loadFettersExcelConfig(
        data::FettersExcelConfigMgrBase *const this,
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
  data::FettersExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::FettersExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::FettersExcelConfig>,false,false>,bool> v27; // rax
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
  *(_QWORD *)(v3 + 8) = "13 48 1 9 <unknown> 64 4 5 r:529 80 4 9 <unknown> 96 32 9 paths:515 160 32 9 <unknown> 224 32 9 "
                        "<unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 136 8 "
                        "data:532 752 376 24 debug_message_stream:540 1200 32880 12 txt_file:523";
  *(_QWORD *)(v3 + 16) = data::FettersExcelConfigMgrBase::loadFettersExcelConfig;
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
    "/txt/FettersData.txt",
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
        "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
        "loadFettersExcelConfig",
        526);
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
        data::FettersExcelConfig::FettersExcelConfig((data::FettersExcelConfig *const)(v3 + 544));
        if ( row_ptr )
        {
          if ( data::FettersExcelConfig::init((data::FettersExcelConfig *const)(v3 + 544), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 752, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 752);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 752, &unk_1AD46B20);
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
              "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
              "loadFettersExcelConfig",
              542);
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
            v24 = std::move<data::FettersExcelConfig &>((data::FettersExcelConfig *)(v3 + 544));
            v27 = std::unordered_map<unsigned int,data::FettersExcelConfig>::emplace<unsigned int &,data::FettersExcelConfig>(
                    &this->fetters_excel_config_map,
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
                "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
                "loadFettersExcelConfig",
                547);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 480),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      v28,
                      (const char (*)[16])byte_1AD46B60);
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
            "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
            "loadFettersExcelConfig",
            535);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 288),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::FettersExcelConfig::~FettersExcelConfig((data::FettersExcelConfig *const)(v3 + 544));
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

// Line 556: range 000000001432E65E-000000001432F68D
int32_t __cdecl data::FettersExcelConfigMgrBase::loadFetterInfoExcelConfig(
        data::FettersExcelConfigMgrBase *const this,
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
  data::FetterInfoExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::FetterInfoExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::FetterInfoExcelConfig>,false,false>,bool> v27; // rax
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
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 5 r:571 64 4 9 <unknown> 80 32 9 paths:557 144 32 9 <unknown> 208 32 9 "
                        "<unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 96 8 d"
                        "ata:574 656 376 24 debug_message_stream:582 1104 32880 12 txt_file:565";
  *(_QWORD *)(v3 + 16) = data::FettersExcelConfigMgrBase::loadFetterInfoExcelConfig;
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
    "/txt/FetterDataIformation.txt",
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
        "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
        "loadFetterInfoExcelConfig",
        568);
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
        data::FetterInfoExcelConfig::FetterInfoExcelConfig((data::FetterInfoExcelConfig *const)(v3 + 528));
        if ( row_ptr )
        {
          if ( data::FetterInfoExcelConfig::init((data::FetterInfoExcelConfig *const)(v3 + 528), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 656, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 656);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 656, &unk_1AD46B20);
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
              "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
              "loadFetterInfoExcelConfig",
              584);
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
            v24 = std::move<data::FetterInfoExcelConfig &>((data::FetterInfoExcelConfig *)(v3 + 528));
            v27 = std::unordered_map<unsigned int,data::FetterInfoExcelConfig>::emplace<unsigned int &,data::FetterInfoExcelConfig>(
                    &this->fetter_info_excel_config_map,
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
                "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
                "loadFetterInfoExcelConfig",
                589);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 464),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      v28,
                      (const char (*)[16])byte_1AD46B60);
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
            "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
            "loadFetterInfoExcelConfig",
            577);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 272),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
          *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::FetterInfoExcelConfig::~FetterInfoExcelConfig((data::FetterInfoExcelConfig *const)(v3 + 528));
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

// Line 598: range 000000001432F68E-00000000143306C6
int32_t __cdecl data::FettersExcelConfigMgrBase::loadFetterStoryExcelConfig(
        data::FettersExcelConfigMgrBase *const this,
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
  data::FetterStoryExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::FetterStoryExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::FetterStoryExcelConfig>,false,false>,bool> v27; // rax
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
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 5 r:613 64 4 9 <unknown> 80 32 9 paths:599 144 32 9 <unknown> 208 32 9 "
                        "<unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 88 8 d"
                        "ata:616 656 376 24 debug_message_stream:624 1104 32880 12 txt_file:607";
  *(_QWORD *)(v3 + 16) = data::FettersExcelConfigMgrBase::loadFetterStoryExcelConfig;
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
    "/txt/FetterDataStory.txt",
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
        "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
        "loadFetterStoryExcelConfig",
        610);
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
        data::FetterStoryExcelConfig::FetterStoryExcelConfig((data::FetterStoryExcelConfig *const)(v3 + 528));
        if ( row_ptr )
        {
          if ( data::FetterConfig::init((data::FetterConfig *const)(v3 + 528), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 656, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 656);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 656, &unk_1AD46B20);
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
              "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
              "loadFetterStoryExcelConfig",
              626);
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
            v24 = std::move<data::FetterStoryExcelConfig &>((data::FetterStoryExcelConfig *)(v3 + 528));
            v27 = std::unordered_map<unsigned int,data::FetterStoryExcelConfig>::emplace<unsigned int &,data::FetterStoryExcelConfig>(
                    &this->fetter_story_excel_config_map,
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
                "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
                "loadFetterStoryExcelConfig",
                631);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 464),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      v28,
                      (const char (*)[16])byte_1AD46B60);
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
            "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
            "loadFetterStoryExcelConfig",
            619);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 272),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
          *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::FetterStoryExcelConfig::~FetterStoryExcelConfig((data::FetterStoryExcelConfig *const)(v3 + 528));
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

// Line 640: range 00000000143306C8-0000000014331B91
int32_t __cdecl data::FettersExcelConfigMgrBase::loadFetterCharacterCardExcelConfig(
        data::FettersExcelConfigMgrBase *const this,
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
  unsigned __int64 v19; // rax
  std::tuple_element<1,const std::pair<const std::string,short unsigned int> >::type *v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rdx
  std::map<long unsigned int,std::string>::mapped_type *v23; // rdx
  std::vector<std::string>::size_type v24; // rdx
  const char *v25; // rax
  __int64 v26; // r14
  std::map<long unsigned int,std::string>::mapped_type *v27; // rax
  __int64 v28; // rax
  __int64 v29; // r14
  const std::vector<std::string> *p_data_vec; // rax
  std::vector<std::string>::const_reference v31; // rax
  unsigned __int64 v32; // rax
  const char *v33; // rax
  __int64 v34; // r14
  std::vector<std::string>::const_reference v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rdx
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rcx
  __int64 v40; // rsi
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // r14
  data::FetterCharacterCardExcelConfig *v43; // rax
  data::FetterCharacterCardExcelConfig *v44; // rdx
  unsigned __int64 v45; // rax
  int v46; // edx
  char *j; // r14
  std::string *__for_begin; // [rsp+20h] [rbp-86A0h]
  size_t i; // [rsp+28h] [rbp-8698h]
  const common::tools::TxtFile::Row *row_ptr; // [rsp+48h] [rbp-8678h]
  std::map<std::string,short unsigned int> *__for_range_0; // [rsp+50h] [rbp-8670h]
  std::_Rb_tree_iterator<std::pair<const std::string,short unsigned int> >::reference v54; // [rsp+58h] [rbp-8668h]
  std::tuple_element<0,std::pair<const std::string,short unsigned int> >::type *col_name; // [rsp+60h] [rbp-8660h]
  std::tuple_element<1,const std::pair<const std::string,short unsigned int> >::type *col_id; // [rsp+68h] [rbp-8658h]
  char v57[34384]; // [rsp+70h] [rbp-8650h] BYREF

  v3 = (unsigned __int64)v57;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_10(34336LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "17 48 1 9 <unknown> 64 4 5 r:655 80 4 9 <unknown> 96 8 15 __for_begin:670 128 8 13 __for_end:670"
                        " 160 8 9 <unknown> 192 8 5 i:674 224 24 8 data:658 288 32 9 paths:641 352 32 9 <unknown> 416 32 "
                        "9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 48 19 col_id_name_map:6"
                        "69 752 376 24 debug_message_stream:666 1200 32880 12 txt_file:649";
  *(_QWORD *)(v3 + 16) = data::FettersExcelConfigMgrBase::loadFetterCharacterCardExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -234881024;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862740] = -218959118;
  v5[536862742] = -219021312;
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
    (std::string *const)(v3 + 288),
    "/txt/FetterCharacterCardData.txt",
    (const std::allocator<char> *)(v3 + 48));
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  for ( __for_begin = (std::string *)(v3 + 288); __for_begin != (std::string *)(v3 + 320); ++__for_begin )
  {
    *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
    p_real_data_base_dir = &config->real_data_base_dir;
    if ( *(char *)(((v3 + 352) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 383) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 383) >> 3) + 0x7FFF8000) )
    {
      p_real_data_base_dir = (std::string *)32;
      __asan_report_store_n(v3 + 352, 32LL);
    }
    std::operator+<char>((std::string *)(v3 + 352), p_real_data_base_dir, __for_begin);
    std::string::operator=(__for_begin, v3 + 352);
    std::string::~string((void *)(v3 + 352));
    *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
    __asan_unpoison_stack_memory(v3 + 1200, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v3 + 1200));
    v7 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v3 + 1200), v7) )
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
        "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
        "loadFetterCharacterCardExcelConfig",
        652);
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v3 + 416),
             (const char (*)[8])byte_1AD383A0);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1AD383E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
      *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
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
        v13 = *(unsigned int *)(v3 + 64);
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v3 + 1200), v13);
        v14 = ((v3 + 224) >> 3) + 2147450880;
        *(_WORD *)v14 = 0;
        *(_BYTE *)(v14 + 2) = 0;
        v15 = &`vtable for'data::FetterCharacterCardExcelConfig + 2;
        if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 224, v13);
        *(_QWORD *)(v3 + 224) = v15;
        if ( *(_BYTE *)(((v3 + 232) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 232) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 232, v13);
        *(_DWORD *)(v3 + 232) = 0;
        v16 = (((_BYTE)v3 - 32 + 12) & 7u) + 3;
        if ( *(_BYTE *)(((v3 + 236) >> 3) + 0x7FFF8000) != 0
          && (char)(((v3 - 32 + 12) & 7) + 3) >= *(_BYTE *)(((v3 + 236) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v3 + 236, v16);
        }
        *(_DWORD *)(v3 + 236) = 0;
        if ( *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 240, v16);
        *(_DWORD *)(v3 + 240) = 0;
        if ( row_ptr )
        {
          if ( data::FetterCharacterCardExcelConfig::init(
                 (data::FetterCharacterCardExcelConfig *const)(v3 + 224),
                 row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 752, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 752);
            if ( *(_BYTE *)(((unsigned __int64)&row_ptr->col_name_map_ptr >> 3) + 0x7FFF8000) )
              __asan_report_load8(&row_ptr->col_name_map_ptr);
            if ( row_ptr->col_name_map_ptr )
            {
              v19 = ((v3 + 672) >> 3) + 2147450880;
              *(_DWORD *)v19 = 0;
              *(_WORD *)(v19 + 4) = 0;
              std::map<unsigned long,std::string>::map((std::map<long unsigned int,std::string> *const)(v3 + 672));
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
                v54 = std::_Rb_tree_iterator<std::pair<std::string const,unsigned short>>::operator*((const std::_Rb_tree_iterator<std::pair<const std::string,short unsigned int> > *const)(v3 + 96));
                col_name = std::get<0ul,std::string const,unsigned short>(v54);
                v20 = (std::tuple_element<1,const std::pair<const std::string,short unsigned int> >::type *)std::get<1ul,std::string const,unsigned short>(v54);
                col_id = v20;
                *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
                v21 = ((unsigned __int8)v20 & 7u) + 1;
                if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v20 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load2(v20);
                }
                v22 = *col_id;
                if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
                  __asan_report_store8(v3 + 160, v21);
                *(_QWORD *)(v3 + 160) = v22;
                v23 = std::map<unsigned long,std::string>::operator[](
                        (std::map<long unsigned int,std::string> *const)(v3 + 672),
                        (std::map<long unsigned int,std::string>::key_type *)(v3 + 160));
                std::string::operator=(v23, col_name);
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
                v24 = std::vector<std::string>::size(&row_ptr->data_vec);
                if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v3 + 192);
                if ( v24 <= *(_QWORD *)(v3 + 192) )
                  break;
                if ( *(_QWORD *)(v3 + 192) )
                  v25 = " ";
                else
                  v25 = byte_1ACFAB80;
                v26 = std::operator<<<std::char_traits<char>>(v3 + 752, v25);
                v27 = std::map<unsigned long,std::string>::operator[](
                        (std::map<long unsigned int,std::string> *const)(v3 + 672),
                        (const std::map<long unsigned int,std::string>::key_type *)(v3 + 192));
                v28 = std::operator<<<char>(v26, v27);
                v29 = std::operator<<<std::char_traits<char>>(v28, &off_1AD39860);
                p_data_vec = &row_ptr->data_vec;
                if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v3 + 192);
                v31 = std::vector<std::string>::operator[](p_data_vec, *(_QWORD *)(v3 + 192));
                std::operator<<<char>(v29, v31);
                if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v3 + 192);
              }
              *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
              std::map<unsigned long,std::string>::~map((std::map<long unsigned int,std::string> *const)(v3 + 672));
              v32 = ((v3 + 672) >> 3) + 2147450880;
              *(_DWORD *)v32 = -117901064;
              *(_WORD *)(v32 + 4) = -1800;
            }
            else
            {
              for ( i = 0LL; i < std::vector<std::string>::size(&row_ptr->data_vec); ++i )
              {
                if ( i )
                  v33 = (const char *)&unk_1AD398A0;
                else
                  v33 = byte_1ACFAB80;
                v34 = std::operator<<<std::char_traits<char>>(v3 + 752, v33);
                v35 = std::vector<std::string>::operator[](&row_ptr->data_vec, i);
                std::operator<<<char>(v34, v35);
              }
            }
            *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 544) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 544, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 544),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
              "loadFetterCharacterCardExcelConfig",
              686);
            v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 544),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v37 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v36, (const char (*)[2])"<");
            v38 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v37, __for_begin);
            v39 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v38,
                    (const char (*)[11])byte_1AD384E0);
            *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 64);
            v40 = (unsigned int)(*(_DWORD *)(v3 + 64) + 1);
            if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v3 + 80, v40);
            *(_DWORD *)(v3 + 80) = v40;
            v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v39,
                    (const unsigned int *)(v3 + 80));
            v42 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v41,
                    (const char (*)[13])byte_1AD38520);
            *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 608) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 639) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 639) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 608, 32LL);
            }
            std::ostringstream::str(v3 + 608, v3 + 752);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v42, (const std::string *)(v3 + 608));
            std::string::~string((void *)(v3 + 608));
            *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
            *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            std::ostringstream::~ostringstream(v3 + 752);
            __asan_poison_stack_memory(v3 + 752, 376LL);
            v18 = 0;
          }
          else
          {
            v43 = std::move<data::FetterCharacterCardExcelConfig &>((data::FetterCharacterCardExcelConfig *)(v3 + 224));
            std::vector<data::FetterCharacterCardExcelConfig>::emplace_back<data::FetterCharacterCardExcelConfig>(
              &this->fetter_character_card_excel_config_vec,
              v43,
              v44);
            v18 = 1;
          }
        }
        else
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
            "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
            "loadFetterCharacterCardExcelConfig",
            661);
          v17 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 480),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
          *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v18 = 0;
        }
        data::FetterCharacterCardExcelConfig::~FetterCharacterCardExcelConfig((data::FetterCharacterCardExcelConfig *const)(v3 + 224));
        v45 = ((v3 + 224) >> 3) + 2147450880;
        *(_WORD *)v45 = -1800;
        *(_BYTE *)(v45 + 2) = -8;
        if ( v18 != 1 )
        {
          v46 = 0;
          goto LABEL_84;
        }
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 64);
      }
      v46 = 1;
LABEL_84:
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      v10 = v46 == 1;
    }
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v3 + 1200));
    __asan_poison_stack_memory(v3 + 1200, 32880LL);
    if ( !v10 )
      goto LABEL_88;
  }
  v2 = 0;
LABEL_88:
  for ( j = (char *)(v3 + 320); j != (char *)(v3 + 288); std::string::~string(j) )
    j -= 32;
  if ( v57 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF90BC) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862732) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450920 - (((_DWORD)v5 + 2147450928) & 0xFFFFFFF8) + 4252) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_10(v3, 34336LL, v57);
  }
  return v2;
};

// Line 696: range 0000000014331B92-000000001433213C
int32_t __cdecl data::FettersExcelConfigMgrBase::loadConfig(
        data::FettersExcelConfigMgrBase *const this,
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
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)data::FettersExcelConfigMgrBase::loadConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  if ( data::FettersExcelConfigMgrBase::loadFettersExcelConfig(this, config) )
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
      "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
      "loadConfig",
      699);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      v5,
      (const char (*)[30])"loadFettersExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( data::FettersExcelConfigMgrBase::loadFetterInfoExcelConfig(this, config) )
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
      "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
      "loadConfig",
      704);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      v7,
      (const char (*)[33])"loadFetterInfoExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( data::FettersExcelConfigMgrBase::loadFetterStoryExcelConfig(this, config) )
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
      "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
      "loadConfig",
      709);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      v8,
      (const char (*)[34])"loadFetterStoryExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else if ( data::FettersExcelConfigMgrBase::loadFetterCharacterCardExcelConfig(this, config) )
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
      "./src/txt_data_auto/FettersExcelConfig.gen.cpp",
      "loadConfig",
      714);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
      v9,
      (const char (*)[42])"loadFetterCharacterCardExcelConfig failed");
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

// Line 721: range 000000001433213E-0000000014332150
int32_t __cdecl data::FettersExcelConfigMgrBase::rewriteConfig(
        data::FettersExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 726: range 0000000014332152-0000000014332164
int32_t __cdecl data::FettersExcelConfigMgrBase::finalConfig(
        data::FettersExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 731: range 0000000014332166-0000000014332321
data::FettersExcelConfig *__fastcall data::FettersExcelConfigMgrBase::findFettersExcelConfig(
        data::FettersExcelConfigMgrBase *const this,
        __int64 fetter_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::FettersExcelConfigMap *p_fetters_excel_config_map; // rdx
  data::FettersExcelConfigMap *v6; // rdx
  bool v7; // al
  data::FettersExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 fetter_id:730 64 8 8 iter:732 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::FettersExcelConfigMgrBase::findFettersExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = fetter_id;
  p_fetters_excel_config_map = &this->fetters_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, fetter_id);
  *(std::unordered_map<unsigned int,data::FettersExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::FettersExcelConfig>::find(
                                                                                        p_fetters_excel_config_map,
                                                                                        (const std::unordered_map<unsigned int,data::FettersExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->fetters_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::FettersExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::FettersExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::FettersExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FettersExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FettersExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::FettersExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::FettersExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 744: range 0000000014332322-00000000143324DD
const data::FettersExcelConfig *__fastcall data::FettersExcelConfigMgrBase::findFettersExcelConfig(
        const data::FettersExcelConfigMgrBase *const this,
        __int64 fetter_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::FettersExcelConfigMap *p_fetters_excel_config_map; // rdx
  data::FettersExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::FettersExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 fetter_id:743 64 8 8 iter:745 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::FettersExcelConfigMgrBase::findFettersExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = fetter_id;
  p_fetters_excel_config_map = &this->fetters_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, fetter_id);
  *(std::unordered_map<unsigned int,data::FettersExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::FettersExcelConfig>::find(
                                                                                              p_fetters_excel_config_map,
                                                                                              (const std::unordered_map<unsigned int,data::FettersExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->fetters_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::FettersExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::FettersExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::FettersExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FettersExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FettersExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FettersExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FettersExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 757: range 00000000143324DE-0000000014332699
data::FetterInfoExcelConfig *__fastcall data::FettersExcelConfigMgrBase::findFetterInfoExcelConfig(
        data::FettersExcelConfigMgrBase *const this,
        __int64 fetter_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::FetterInfoExcelConfigMap *p_fetter_info_excel_config_map; // rdx
  data::FetterInfoExcelConfigMap *v6; // rdx
  bool v7; // al
  data::FetterInfoExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 fetter_id:756 64 8 8 iter:758 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::FettersExcelConfigMgrBase::findFetterInfoExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = fetter_id;
  p_fetter_info_excel_config_map = &this->fetter_info_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, fetter_id);
  *(std::unordered_map<unsigned int,data::FetterInfoExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::FetterInfoExcelConfig>::find(
                                                                                           p_fetter_info_excel_config_map,
                                                                                           (const std::unordered_map<unsigned int,data::FetterInfoExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->fetter_info_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::FetterInfoExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::FetterInfoExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::FetterInfoExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FetterInfoExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FetterInfoExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::FetterInfoExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::FetterInfoExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 770: range 000000001433269A-0000000014332855
const data::FetterInfoExcelConfig *__fastcall data::FettersExcelConfigMgrBase::findFetterInfoExcelConfig(
        const data::FettersExcelConfigMgrBase *const this,
        __int64 fetter_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::FetterInfoExcelConfigMap *p_fetter_info_excel_config_map; // rdx
  data::FetterInfoExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::FetterInfoExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 fetter_id:769 64 8 8 iter:771 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::FettersExcelConfigMgrBase::findFetterInfoExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = fetter_id;
  p_fetter_info_excel_config_map = &this->fetter_info_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, fetter_id);
  *(std::unordered_map<unsigned int,data::FetterInfoExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::FetterInfoExcelConfig>::find(
                                                                                                 p_fetter_info_excel_config_map,
                                                                                                 (const std::unordered_map<unsigned int,data::FetterInfoExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->fetter_info_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::FetterInfoExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::FetterInfoExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::FetterInfoExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FetterInfoExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FetterInfoExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FetterInfoExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FetterInfoExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 783: range 0000000014332856-0000000014332A11
data::FetterStoryExcelConfig *__fastcall data::FettersExcelConfigMgrBase::findFetterStoryExcelConfig(
        data::FettersExcelConfigMgrBase *const this,
        __int64 fetter_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::FetterStoryExcelConfigMap *p_fetter_story_excel_config_map; // rdx
  data::FetterStoryExcelConfigMap *v6; // rdx
  bool v7; // al
  data::FetterStoryExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 fetter_id:782 64 8 8 iter:784 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::FettersExcelConfigMgrBase::findFetterStoryExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = fetter_id;
  p_fetter_story_excel_config_map = &this->fetter_story_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, fetter_id);
  *(std::unordered_map<unsigned int,data::FetterStoryExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::FetterStoryExcelConfig>::find(
                                                                                            p_fetter_story_excel_config_map,
                                                                                            (const std::unordered_map<unsigned int,data::FetterStoryExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->fetter_story_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::FetterStoryExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::FetterStoryExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::FetterStoryExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FetterStoryExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FetterStoryExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::FetterStoryExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::FetterStoryExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 796: range 0000000014332A12-0000000014332BCD
const data::FetterStoryExcelConfig *__fastcall data::FettersExcelConfigMgrBase::findFetterStoryExcelConfig(
        const data::FettersExcelConfigMgrBase *const this,
        __int64 fetter_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::FetterStoryExcelConfigMap *p_fetter_story_excel_config_map; // rdx
  data::FetterStoryExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::FetterStoryExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 fetter_id:795 64 8 8 iter:797 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::FettersExcelConfigMgrBase::findFetterStoryExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = fetter_id;
  p_fetter_story_excel_config_map = &this->fetter_story_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, fetter_id);
  *(std::unordered_map<unsigned int,data::FetterStoryExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::FetterStoryExcelConfig>::find(
                                                                                                  p_fetter_story_excel_config_map,
                                                                                                  (const std::unordered_map<unsigned int,data::FetterStoryExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->fetter_story_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::FetterStoryExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::FetterStoryExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::FetterStoryExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FetterStoryExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FetterStoryExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FetterStoryExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FetterStoryExcelConfig>,false,false> *const)(v2 + 64))->second;
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

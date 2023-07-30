// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/GalleryExcelConfig.gen.cpp

// Line 12: range 00000000143C178E-00000000143C1B01
const char *__fastcall data::enumValToStr(data::GalleryType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::GalleryType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::GalleryType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
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
  map = data::getGalleryTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::GalleryType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::GalleryType,std::pair<std::string,std::string>>::find(
                                                                                                    map,
                                                                                                    (const std::map<data::GalleryType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::GalleryType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::GalleryType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::GalleryType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::GalleryType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/GalleryExcelConfig.gen.cpp",
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
    result = "INVALID_GalleryType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::GalleryType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::GalleryType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 24: range 00000000143C1B02-00000000143C20BA
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::GalleryType>,false,true>::pointer v10; // rax
  data::GalleryType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::GalleryType> *m; // [rsp+18h] [rbp-188h]
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
    m = data::getGalleryTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::GalleryType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::GalleryType>::find(
                                                                                        m,
                                                                                        (const std::unordered_map<std::string,data::GalleryType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::GalleryType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::GalleryType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::GalleryType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GalleryType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GalleryType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/GalleryExcelConfig.gen.cpp",
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
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::GalleryType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::GalleryType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/GalleryExcelConfig.gen.cpp",
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

// Line 45: range 00000000143C20BB-00000000143C4A09
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int v5; // eax
  std::pair<const std::string,data::GalleryType> *i; // r14
  const char *v7; // rsi
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::GalleryType>,false,true>::pointer v11; // rax
  data::GalleryType second; // ecx
  char v13; // dl
  unsigned int v14; // ebx
  char v17[3760]; // [rsp+20h] [rbp-EB0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(3712LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "68 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 4 9 <unknown> 112 4 9 "
                        "<unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unkno"
                        "wn> 208 4 9 <unknown> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 4 9 <unknown> 28"
                        "8 4 9 <unknown> 304 4 9 <unknown> 320 4 9 <unknown> 336 4 9 <unknown> 352 4 9 <unknown> 368 4 9 "
                        "<unknown> 384 4 9 <unknown> 400 4 9 <unknown> 416 4 9 <unknown> 432 4 9 <unknown> 448 4 9 <unkno"
                        "wn> 464 4 9 <unknown> 480 4 9 <unknown> 496 4 9 <unknown> 512 4 9 <unknown> 528 4 9 <unknown> 54"
                        "4 4 9 <unknown> 560 4 9 <unknown> 576 4 9 <unknown> 592 4 9 <unknown> 608 4 9 <unknown> 624 4 9 "
                        "<unknown> 640 4 9 <unknown> 656 4 9 <unknown> 672 4 9 <unknown> 688 4 9 <unknown> 704 4 9 <unkno"
                        "wn> 720 4 9 <unknown> 736 4 9 <unknown> 752 4 9 <unknown> 768 4 9 <unknown> 784 4 9 <unknown> 80"
                        "0 4 9 <unknown> 816 4 9 <unknown> 832 4 9 <unknown> 848 4 9 <unknown> 864 4 9 <unknown> 880 4 9 "
                        "<unknown> 896 4 9 <unknown> 912 4 9 <unknown> 928 4 9 <unknown> 944 4 9 <unknown> 960 4 9 <unkno"
                        "wn> 976 4 9 <unknown> 992 4 9 <unknown> 1008 8 6 it:113 1040 8 9 <unknown> 1072 8 4 s:44 1104 32"
                        " 9 <unknown> 1168 32 9 <unknown> 1232 32 9 <unknown> 1296 2280 9 <unknown>";
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
  v4[536862747] = -234556924;
  v4[536862748] = -234556924;
  v4[536862749] = -234556924;
  v4[536862750] = -234556924;
  v4[536862751] = 61956;
  v4[536862751] = -234881024;
  v4[536862752] = 62194;
  v4[536862752] = -234881024;
  v4[536862753] = 62194;
  v4[536862753] = -234881024;
  v4[536862754] = 62194;
  v4[536862755] = -219021312;
  v4[536862756] = 62194;
  v4[536862757] = -219021312;
  v4[536862758] = 62194;
  v4[536862759] = -219021312;
  v4[536862760] = 62194;
  v4[536862831] = -218103808;
  v4[536862832] = -202116109;
  v4[536862833] = -202116109;
  v4[536862834] = -202116109;
  v4[536862835] = -202116109;
  *(_QWORD *)(v2 + 1072) = s;
  if ( *(_QWORD *)(v2 + 1072) )
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::GalleryType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::GalleryType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, e);
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[10],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 1296),
        (const char (*)[10])byte_1AD5DF80,
        (data::GalleryType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, byte_1AD5DF80);
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[16],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 1336),
        (const char (*)[16])byte_1AD5DFC0,
        (data::GalleryType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1AD5DFC0);
      *(_DWORD *)(v2 + 128) = 3;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[13],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 1376),
        (const char (*)[13])byte_1AD5E000,
        (data::GalleryType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, byte_1AD5E000);
      *(_DWORD *)(v2 + 144) = 4;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[7],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 1416),
        (const char (*)[7])byte_1AD5E040,
        (data::GalleryType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, byte_1AD5E040);
      *(_DWORD *)(v2 + 160) = 5;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[13],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 1456),
        (const char (*)[13])byte_1AD5E080,
        (data::GalleryType *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, byte_1AD5E080);
      *(_DWORD *)(v2 + 176) = 6;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[16],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 1496),
        (const char (*)[16])byte_1AD5E0C0,
        (data::GalleryType *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, byte_1AD5E0C0);
      *(_DWORD *)(v2 + 192) = 7;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[13],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 1536),
        (const char (*)[13])byte_1AD5E100,
        (data::GalleryType *)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 208, byte_1AD5E100);
      *(_DWORD *)(v2 + 208) = 8;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[7],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 1576),
        (const char (*)[7])byte_1AD5E140,
        (data::GalleryType *)(v2 + 208));
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 224, byte_1AD5E140);
      *(_DWORD *)(v2 + 224) = 9;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[10],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 1616),
        (const char (*)[10])byte_1AD5E180,
        (data::GalleryType *)(v2 + 224));
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 240, byte_1AD5E180);
      *(_DWORD *)(v2 + 240) = 10;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[13],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 1656),
        (const char (*)[13])byte_1AD5E1C0,
        (data::GalleryType *)(v2 + 240));
      if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 256, byte_1AD5E1C0);
      *(_DWORD *)(v2 + 256) = 11;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[13],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 1696),
        (const char (*)[13])byte_1AD5E200,
        (data::GalleryType *)(v2 + 256));
      if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 272, byte_1AD5E200);
      *(_DWORD *)(v2 + 272) = 12;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[10],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 1736),
        (const char (*)[10])byte_1AD5E240,
        (data::GalleryType *)(v2 + 272));
      if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 288, byte_1AD5E240);
      *(_DWORD *)(v2 + 288) = 13;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[13],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 1776),
        (const char (*)[13])byte_1AD5E280,
        (data::GalleryType *)(v2 + 288));
      if ( *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 304, byte_1AD5E280);
      *(_DWORD *)(v2 + 304) = 14;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[16],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 1816),
        (const char (*)[16])byte_1AD5E2C0,
        (data::GalleryType *)(v2 + 304));
      if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 320, byte_1AD5E2C0);
      *(_DWORD *)(v2 + 320) = 15;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[7],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 1856),
        (const char (*)[7])byte_1AD5E300,
        (data::GalleryType *)(v2 + 320));
      if ( *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 336, byte_1AD5E300);
      *(_DWORD *)(v2 + 336) = 16;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[13],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 1896),
        (const char (*)[13])byte_1AD5E340,
        (data::GalleryType *)(v2 + 336));
      if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 352, byte_1AD5E340);
      *(_DWORD *)(v2 + 352) = 17;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[7],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 1936),
        (const char (*)[7])byte_1AD5E380,
        (data::GalleryType *)(v2 + 352));
      if ( *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 368, byte_1AD5E380);
      *(_DWORD *)(v2 + 368) = 18;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[13],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 1976),
        (const char (*)[13])byte_1AD5E3C0,
        (data::GalleryType *)(v2 + 368));
      if ( *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 384, byte_1AD5E3C0);
      *(_DWORD *)(v2 + 384) = 19;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[13],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 2016),
        (const char (*)[13])byte_1AD5E400,
        (data::GalleryType *)(v2 + 384));
      if ( *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 400, byte_1AD5E400);
      *(_DWORD *)(v2 + 400) = 20;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[13],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 2056),
        (const char (*)[13])byte_1AD5E440,
        (data::GalleryType *)(v2 + 400));
      if ( *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 416, byte_1AD5E440);
      *(_DWORD *)(v2 + 416) = 21;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[22],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 2096),
        (const char (*)[22])byte_1AD5E480,
        (data::GalleryType *)(v2 + 416));
      if ( *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 432, byte_1AD5E480);
      *(_DWORD *)(v2 + 432) = 22;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[19],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 2136),
        (const char (*)[19])byte_1AD5E4C0,
        (data::GalleryType *)(v2 + 432));
      if ( *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 448, byte_1AD5E4C0);
      *(_DWORD *)(v2 + 448) = 23;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[16],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 2176),
        (const char (*)[16])byte_1AD5E500,
        (data::GalleryType *)(v2 + 448));
      if ( *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 464, byte_1AD5E500);
      *(_DWORD *)(v2 + 464) = 24;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[13],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 2216),
        (const char (*)[13])byte_1AD5E540,
        (data::GalleryType *)(v2 + 464));
      if ( *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 480, byte_1AD5E540);
      *(_DWORD *)(v2 + 480) = 25;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[13],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 2256),
        (const char (*)[13])byte_1AD5E580,
        (data::GalleryType *)(v2 + 480));
      if ( *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 496, byte_1AD5E580);
      *(_DWORD *)(v2 + 496) = 26;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[13],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 2296),
        (const char (*)[13])byte_1AD5E5C0,
        (data::GalleryType *)(v2 + 496));
      if ( *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 512, byte_1AD5E5C0);
      *(_DWORD *)(v2 + 512) = 27;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[16],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 2336),
        (const char (*)[16])byte_1AD5E600,
        (data::GalleryType *)(v2 + 512));
      if ( *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 528, byte_1AD5E600);
      *(_DWORD *)(v2 + 528) = 28;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[13],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 2376),
        (const char (*)[13])byte_1AD5E640,
        (data::GalleryType *)(v2 + 528));
      if ( *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 544, byte_1AD5E640);
      *(_DWORD *)(v2 + 544) = 29;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[25],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 2416),
        (const char (*)[25])byte_1AD5E680,
        (data::GalleryType *)(v2 + 544));
      if ( *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 560, byte_1AD5E680);
      *(_DWORD *)(v2 + 560) = 30;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[22],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 2456),
        (const char (*)[22])byte_1AD5E6C0,
        (data::GalleryType *)(v2 + 560));
      if ( *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 576, byte_1AD5E6C0);
      *(_DWORD *)(v2 + 576) = 31;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[22],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 2496),
        (const char (*)[22])byte_1AD5E700,
        (data::GalleryType *)(v2 + 576));
      if ( *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 592, byte_1AD5E700);
      *(_DWORD *)(v2 + 592) = 32;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[22],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 2536),
        (const char (*)[22])byte_1AD5E740,
        (data::GalleryType *)(v2 + 592));
      if ( *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 608, byte_1AD5E740);
      *(_DWORD *)(v2 + 608) = 33;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[28],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 2576),
        (const char (*)[28])byte_1AD5E780,
        (data::GalleryType *)(v2 + 608));
      if ( *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 624, byte_1AD5E780);
      *(_DWORD *)(v2 + 624) = 34;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[19],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 2616),
        (const char (*)[19])byte_1AD5E7C0,
        (data::GalleryType *)(v2 + 624));
      if ( *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 640, byte_1AD5E7C0);
      *(_DWORD *)(v2 + 640) = 35;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[16],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 2656),
        (const char (*)[16])byte_1AD5E800,
        (data::GalleryType *)(v2 + 640));
      if ( *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 656, byte_1AD5E800);
      *(_DWORD *)(v2 + 656) = 36;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[13],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 2696),
        (const char (*)[13])byte_1AD5E840,
        (data::GalleryType *)(v2 + 656));
      if ( *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 672, byte_1AD5E840);
      *(_DWORD *)(v2 + 672) = 37;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[16],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 2736),
        (const char (*)[16])byte_1AD5E880,
        (data::GalleryType *)(v2 + 672));
      if ( *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 688, byte_1AD5E880);
      *(_DWORD *)(v2 + 688) = 38;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[28],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 2776),
        (const char (*)[28])byte_1AD5E8C0,
        (data::GalleryType *)(v2 + 688));
      if ( *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 704, byte_1AD5E8C0);
      *(_DWORD *)(v2 + 704) = 39;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[13],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 2816),
        (const char (*)[13])byte_1AD5E900,
        (data::GalleryType *)(v2 + 704));
      if ( *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 720, byte_1AD5E900);
      *(_DWORD *)(v2 + 720) = 40;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[22],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 2856),
        (const char (*)[22])byte_1AD5E940,
        (data::GalleryType *)(v2 + 720));
      if ( *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 736, byte_1AD5E940);
      *(_DWORD *)(v2 + 736) = 41;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[22],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 2896),
        (const char (*)[22])byte_1AD5E980,
        (data::GalleryType *)(v2 + 736));
      if ( *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 752, byte_1AD5E980);
      *(_DWORD *)(v2 + 752) = 42;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[31],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 2936),
        (const char (*)[31])byte_1AD5E9C0,
        (data::GalleryType *)(v2 + 752));
      if ( *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 768, byte_1AD5E9C0);
      *(_DWORD *)(v2 + 768) = 43;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[37],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 2976),
        (const char (*)[37])byte_1AD5EA00,
        (data::GalleryType *)(v2 + 768));
      if ( *(_BYTE *)(((v2 + 784) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 784) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 784, byte_1AD5EA00);
      *(_DWORD *)(v2 + 784) = 44;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[34],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 3016),
        (const char (*)[34])byte_1AD5EA60,
        (data::GalleryType *)(v2 + 784));
      if ( *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 800, byte_1AD5EA60);
      *(_DWORD *)(v2 + 800) = 45;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[28],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 3056),
        (const char (*)[28])byte_1AD5EAC0,
        (data::GalleryType *)(v2 + 800));
      if ( *(_BYTE *)(((v2 + 816) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 816) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 816, byte_1AD5EAC0);
      *(_DWORD *)(v2 + 816) = 46;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[28],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 3096),
        (const char (*)[28])byte_1AD5EB00,
        (data::GalleryType *)(v2 + 816));
      if ( *(_BYTE *)(((v2 + 832) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 832) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 832, byte_1AD5EB00);
      *(_DWORD *)(v2 + 832) = 47;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[28],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 3136),
        (const char (*)[28])byte_1AD5EB40,
        (data::GalleryType *)(v2 + 832));
      if ( *(_BYTE *)(((v2 + 848) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 848) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 848, byte_1AD5EB40);
      *(_DWORD *)(v2 + 848) = 48;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[25],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 3176),
        (const char (*)[25])byte_1AD5EB80,
        (data::GalleryType *)(v2 + 848));
      if ( *(_BYTE *)(((v2 + 864) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 864) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 864, byte_1AD5EB80);
      *(_DWORD *)(v2 + 864) = 49;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[16],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 3216),
        (const char (*)[16])byte_1AD5EBC0,
        (data::GalleryType *)(v2 + 864));
      if ( *(_BYTE *)(((v2 + 880) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 880) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 880, byte_1AD5EBC0);
      *(_DWORD *)(v2 + 880) = 50;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[22],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 3256),
        (const char (*)[22])byte_1AD5EC00,
        (data::GalleryType *)(v2 + 880));
      if ( *(_BYTE *)(((v2 + 896) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 896) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 896, byte_1AD5EC00);
      *(_DWORD *)(v2 + 896) = 51;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[22],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 3296),
        (const char (*)[22])byte_1AD5EC40,
        (data::GalleryType *)(v2 + 896));
      if ( *(_BYTE *)(((v2 + 912) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 912) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 912, byte_1AD5EC40);
      *(_DWORD *)(v2 + 912) = 52;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[16],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 3336),
        (const char (*)[16])byte_1AD5EC80,
        (data::GalleryType *)(v2 + 912));
      if ( *(_BYTE *)(((v2 + 928) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 928) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 928, byte_1AD5EC80);
      *(_DWORD *)(v2 + 928) = 53;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[25],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 3376),
        (const char (*)[25])byte_1AD5ECC0,
        (data::GalleryType *)(v2 + 928));
      if ( *(_BYTE *)(((v2 + 944) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 944) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 944, byte_1AD5ECC0);
      *(_DWORD *)(v2 + 944) = 54;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[31],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 3416),
        (const char (*)[31])byte_1AD5ED00,
        (data::GalleryType *)(v2 + 944));
      if ( *(_BYTE *)(((v2 + 960) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 960) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 960, byte_1AD5ED00);
      *(_DWORD *)(v2 + 960) = 55;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[22],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 3456),
        (const char (*)[22])byte_1AD5ED40,
        (data::GalleryType *)(v2 + 960));
      if ( *(_BYTE *)(((v2 + 976) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 976) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 976, byte_1AD5ED40);
      *(_DWORD *)(v2 + 976) = 56;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[13],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 3496),
        (const char (*)[13])byte_1AD5ED80,
        (data::GalleryType *)(v2 + 976));
      if ( *(_BYTE *)(((v2 + 992) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 992) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 992, byte_1AD5ED80);
      *(_DWORD *)(v2 + 992) = 57;
      std::pair<std::string const,data::GalleryType>::pair<char const(&)[19],data::GalleryType,true>(
        (std::pair<const std::string,data::GalleryType> *const)(v2 + 3536),
        (const char (*)[19])byte_1AD5EDC0,
        (data::GalleryType *)(v2 + 992));
      std::allocator<std::pair<std::string const,data::GalleryType>>::allocator((std::allocator<std::pair<const std::string,data::GalleryType> > *const)(v2 + 64));
      std::unordered_map<std::string,data::GalleryType>::unordered_map(
        &data::enumStrToVal(char const*,data::GalleryType &)::m,
        (std::initializer_list<std::pair<const std::string,data::GalleryType> >)__PAIR128__(57LL, v2 + 1296),
        0LL,
        (const std::unordered_map<std::string,data::GalleryType>::hasher *)(v2 + 32),
        (const std::unordered_map<std::string,data::GalleryType>::key_equal *)(v2 + 48),
        (const std::unordered_map<std::string,data::GalleryType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::GalleryType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::GalleryType>::~unordered_map,
        &data::enumStrToVal(char const*,data::GalleryType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::GalleryType>>::~allocator((std::allocator<std::pair<const std::string,data::GalleryType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::GalleryType> *)(v2 + 3576);
            i != (std::pair<const std::string,data::GalleryType> *)(v2 + 1296);
            std::pair<std::string const,data::GalleryType>::~pair(i) )
      {
        --i;
      }
      __asan_poison_stack_memory(v2 + 1296, 2280LL);
      *(_BYTE *)(((v2 + 992) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 976) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 960) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 944) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 928) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 912) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 896) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 880) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 864) >> 3) + 0x7FFF8000) = -8;
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
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 1008) >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((v2 + 1168) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 80);
    v7 = *(const char **)(v2 + 1072);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 1168),
      v7,
      (const std::allocator<char> *)(v2 + 80));
    if ( *(_BYTE *)(((v2 + 1008) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 1008, v7);
    *(std::unordered_map<std::string,data::GalleryType>::iterator *)(v2 + 1008) = std::unordered_map<std::string,data::GalleryType>::find(
                                                                                    &data::enumStrToVal(char const*,data::GalleryType &)::m,
                                                                                    (const std::unordered_map<std::string,data::GalleryType>::key_type *)(v2 + 1168));
    std::string::~string((void *)(v2 + 1168));
    *(_DWORD *)(((v2 + 1168) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 80);
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 1040) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 1040) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 1040, v2 + 1168);
    *(std::unordered_map<std::string,data::GalleryType>::iterator *)(v2 + 1040) = std::unordered_map<std::string,data::GalleryType>::end(&data::enumStrToVal(char const*,data::GalleryType &)::m);
    v8 = (char *)(v2 + 1040);
    v9 = std::__detail::operator==<std::pair<std::string const,data::GalleryType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GalleryType>,true> *)(v2 + 1008),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GalleryType>,true> *)(v2 + 1040));
    *(_BYTE *)(((v2 + 1040) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
    {
      *(_DWORD *)(((v2 + 1232) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 1232) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 1263) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 17) & 7) >= *(_BYTE *)(((v2 + 1263) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 1232, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 1232),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/txt_data_auto/GalleryExcelConfig.gen.cpp",
        "enumStrToVal",
        116);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 1232),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v10, (const char *const *)(v2 + 1072));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1232));
      v5 = -1;
    }
    else
    {
      v11 = std::__detail::_Node_iterator<std::pair<std::string const,data::GalleryType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::GalleryType>,false,true> *const)(v2 + 1008));
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
    if ( *(char *)(((v2 + 1104) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 1135) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 111) & 7) >= *(_BYTE *)(((v2 + 1135) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 1104, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 1104),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_auto/GalleryExcelConfig.gen.cpp",
      "enumStrToVal",
      48);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
      (common::milog::MiLogStream *const)(v2 + 1104),
      (const char (*)[14])"s is nullptr!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1104));
    v5 = -1;
  }
  v14 = v5;
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81C8) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 464) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 3712LL, v17);
  }
  return v14;
};

// Line 125: range 00000000143C4A0A-00000000143C4A20
const char *__cdecl data::getDescription(data::GalleryType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 130: range 00000000143C4A21-00000000143C4BD6
bool __cdecl data::isValidGalleryType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::GalleryType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::GalleryType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:131 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidGalleryType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getGalleryTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::GalleryType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::GalleryType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getGalleryTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::GalleryType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::GalleryType,std::pair<std::string,std::string>>::find(
                                                                                                    v6,
                                                                                                    (const std::map<data::GalleryType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::GalleryType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::GalleryType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 136: range 00000000143C4BD7-00000000143C4D38
bool __cdecl data::isValidGalleryTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::GalleryType> *v5; // rcx
  const std::unordered_map<std::string,data::GalleryType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidGalleryTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getGalleryTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::GalleryType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::GalleryType>::end(v5);
  v6 = data::getGalleryTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::GalleryType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::GalleryType>::find(
                                                                                      v6,
                                                                                      name);
  result = std::__detail::operator!=<std::pair<std::string const,data::GalleryType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GalleryType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GalleryType>,true> *)(v2 + 64));
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

// Line 141: range 00000000143C4D39-00000000143C6D64
const std::unordered_map<std::string,data::GalleryType> *__cdecl data::getGalleryTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::GalleryType> *i; // r14
  char v6[3504]; // [rsp+10h] [rbp-DB0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_6(3456LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "62 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 "
                        "<unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unkno"
                        "wn> 208 4 9 <unknown> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 4 9 <unknown> 28"
                        "8 4 9 <unknown> 304 4 9 <unknown> 320 4 9 <unknown> 336 4 9 <unknown> 352 4 9 <unknown> 368 4 9 "
                        "<unknown> 384 4 9 <unknown> 400 4 9 <unknown> 416 4 9 <unknown> 432 4 9 <unknown> 448 4 9 <unkno"
                        "wn> 464 4 9 <unknown> 480 4 9 <unknown> 496 4 9 <unknown> 512 4 9 <unknown> 528 4 9 <unknown> 54"
                        "4 4 9 <unknown> 560 4 9 <unknown> 576 4 9 <unknown> 592 4 9 <unknown> 608 4 9 <unknown> 624 4 9 "
                        "<unknown> 640 4 9 <unknown> 656 4 9 <unknown> 672 4 9 <unknown> 688 4 9 <unknown> 704 4 9 <unkno"
                        "wn> 720 4 9 <unknown> 736 4 9 <unknown> 752 4 9 <unknown> 768 4 9 <unknown> 784 4 9 <unknown> 80"
                        "0 4 9 <unknown> 816 4 9 <unknown> 832 4 9 <unknown> 848 4 9 <unknown> 864 4 9 <unknown> 880 4 9 "
                        "<unknown> 896 4 9 <unknown> 912 4 9 <unknown> 928 4 9 <unknown> 944 4 9 <unknown> 960 4 9 <unkno"
                        "wn> 976 4 9 <unknown> 992 4 9 <unknown> 1008 2320 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::getGalleryTypeNameMap[abi:cxx11];
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
  v3[536862747] = -234556924;
  v3[536862748] = -234556924;
  v3[536862749] = -234556924;
  v3[536862750] = -234556924;
  v3[536862751] = 61956;
  v3[536862824] = -202116109;
  v3[536862825] = -202116109;
  v3[536862826] = -202116109;
  v3[536862827] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getGalleryTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getGalleryTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[18],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 1008),
      (const char (*)[18])"GALLERY_TYPE_NONE",
      (data::GalleryType *)(v1 + 80));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, "GALLERY_TYPE_NONE");
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[21],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 1048),
      (const char (*)[21])"GALLERY_TYPE_BALLOON",
      (data::GalleryType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "GALLERY_TYPE_BALLOON");
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[18],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 1088),
      (const char (*)[18])"GALLERY_TYPE_FALL",
      (data::GalleryType *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, "GALLERY_TYPE_FALL");
    *(_DWORD *)(v1 + 128) = 3;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[29],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 1128),
      (const char (*)[29])"GALLERY_TYPE_ARENA_CHALLENGE",
      (data::GalleryType *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, "GALLERY_TYPE_ARENA_CHALLENGE");
    *(_DWORD *)(v1 + 144) = 4;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[26],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 1168),
      (const char (*)[26])"GALLERY_TYPE_CATCH_FLOWER",
      (data::GalleryType *)(v1 + 144));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, "GALLERY_TYPE_CATCH_FLOWER");
    *(_DWORD *)(v1 + 160) = 5;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[27],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 1208),
      (const char (*)[27])"GALLERY_TYPE_FADEOUT_FLOOR",
      (data::GalleryType *)(v1 + 160));
    if ( *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 176, "GALLERY_TYPE_FADEOUT_FLOOR");
    *(_DWORD *)(v1 + 176) = 6;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[24],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 1248),
      (const char (*)[24])"GALLERY_TYPE_AVOID_RAYS",
      (data::GalleryType *)(v1 + 176));
    if ( *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 192, "GALLERY_TYPE_AVOID_RAYS");
    *(_DWORD *)(v1 + 192) = 7;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[26],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 1288),
      (const char (*)[26])"GALLERY_TYPE_BROKEN_FLOOR",
      (data::GalleryType *)(v1 + 192));
    if ( *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 208, "GALLERY_TYPE_BROKEN_FLOOR");
    *(_DWORD *)(v1 + 208) = 8;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[25],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 1328),
      (const char (*)[25])"GALLERY_TYPE_BULLET_GAME",
      (data::GalleryType *)(v1 + 208));
    if ( *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 224, "GALLERY_TYPE_BULLET_GAME");
    *(_DWORD *)(v1 + 224) = 9;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[27],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 1368),
      (const char (*)[27])"GALLERY_TYPE_AVOID_BUBBLES",
      (data::GalleryType *)(v1 + 224));
    if ( *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 240, "GALLERY_TYPE_AVOID_BUBBLES");
    *(_DWORD *)(v1 + 240) = 10;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[27],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 1408),
      (const char (*)[27])"GALLERY_TYPE_REMEMBER_ROAD",
      (data::GalleryType *)(v1 + 240));
    if ( *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 256, "GALLERY_TYPE_REMEMBER_ROAD");
    *(_DWORD *)(v1 + 256) = 11;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[24],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 1448),
      (const char (*)[24])"GALLERY_TYPE_MIST_TRIAL",
      (data::GalleryType *)(v1 + 256));
    if ( *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 272, "GALLERY_TYPE_MIST_TRIAL");
    *(_DWORD *)(v1 + 272) = 12;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[27],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 1488),
      (const char (*)[27])"GALLERY_TYPE_HIDE_AND_SEEK",
      (data::GalleryType *)(v1 + 272));
    if ( *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 288, "GALLERY_TYPE_HIDE_AND_SEEK");
    *(_DWORD *)(v1 + 288) = 13;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[28],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 1528),
      (const char (*)[28])"GALLERY_TYPE_BUOYANT_COMBAT",
      (data::GalleryType *)(v1 + 288));
    if ( *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 304, "GALLERY_TYPE_BUOYANT_COMBAT");
    *(_DWORD *)(v1 + 304) = 14;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[30],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 1568),
      (const char (*)[30])"GALLERY_TYPE_BOUNCE_CONJURING",
      (data::GalleryType *)(v1 + 304));
    if ( *(_BYTE *)(((v1 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 320) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 320, "GALLERY_TYPE_BOUNCE_CONJURING");
    *(_DWORD *)(v1 + 320) = 15;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[22],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 1608),
      (const char (*)[22])"GALLERY_TYPE_HANDBALL",
      (data::GalleryType *)(v1 + 320));
    if ( *(_BYTE *)(((v1 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 336) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 336, "GALLERY_TYPE_HANDBALL");
    *(_DWORD *)(v1 + 336) = 16;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[25],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 1648),
      (const char (*)[25])"GALLERY_TYPE_SUMO_COMBAT",
      (data::GalleryType *)(v1 + 336));
    if ( *(_BYTE *)(((v1 + 352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 352) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 352, "GALLERY_TYPE_SUMO_COMBAT");
    *(_DWORD *)(v1 + 352) = 17;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[18],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 1688),
      (const char (*)[18])"GALLERY_TYPE_FISH",
      (data::GalleryType *)(v1 + 352));
    if ( *(_BYTE *)(((v1 + 368) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 368) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 368, "GALLERY_TYPE_FISH");
    *(_DWORD *)(v1 + 368) = 18;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[24],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 1728),
      (const char (*)[24])"GALLERY_TYPE_DIG_COMBAT",
      (data::GalleryType *)(v1 + 368));
    if ( *(_BYTE *)(((v1 + 384) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 384) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 384, "GALLERY_TYPE_DIG_COMBAT");
    *(_DWORD *)(v1 + 384) = 19;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[23],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 1768),
      (const char (*)[23])"GALLERY_TYPE_TRIATHLON",
      (data::GalleryType *)(v1 + 384));
    if ( *(_BYTE *)(((v1 + 400) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 400) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 400, "GALLERY_TYPE_TRIATHLON");
    *(_DWORD *)(v1 + 400) = 20;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[25],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 1808),
      (const char (*)[25])"GALLERY_TYPE_HOME_RACING",
      (data::GalleryType *)(v1 + 400));
    if ( *(_BYTE *)(((v1 + 416) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 416) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 416, "GALLERY_TYPE_HOME_RACING");
    *(_DWORD *)(v1 + 416) = 21;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[29],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 1848),
      (const char (*)[29])"GALLERY_TYPE_SALVAGE_PREVENT",
      (data::GalleryType *)(v1 + 416));
    if ( *(_BYTE *)(((v1 + 432) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 432) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 432, "GALLERY_TYPE_SALVAGE_PREVENT");
    *(_DWORD *)(v1 + 432) = 22;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[28],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 1888),
      (const char (*)[28])"GALLERY_TYPE_SALVAGE_ESCORT",
      (data::GalleryType *)(v1 + 432));
    if ( *(_BYTE *)(((v1 + 448) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 448) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 448, "GALLERY_TYPE_SALVAGE_ESCORT");
    *(_DWORD *)(v1 + 448) = 23;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[26],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 1928),
      (const char (*)[26])"GALLERY_TYPE_HOME_BALLOON",
      (data::GalleryType *)(v1 + 448));
    if ( *(_BYTE *)(((v1 + 464) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 464) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 464, "GALLERY_TYPE_HOME_BALLOON");
    *(_DWORD *)(v1 + 464) = 24;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[26],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 1968),
      (const char (*)[26])"GALLERY_TYPE_CRYSTAL_LINK",
      (data::GalleryType *)(v1 + 464));
    if ( *(_BYTE *)(((v1 + 480) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 480) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 480, "GALLERY_TYPE_CRYSTAL_LINK");
    *(_DWORD *)(v1 + 480) = 25;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[19],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 2008),
      (const char (*)[19])"GALLERY_TYPE_PHOTO",
      (data::GalleryType *)(v1 + 480));
    if ( *(_BYTE *)(((v1 + 496) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 496) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 496, "GALLERY_TYPE_PHOTO");
    *(_DWORD *)(v1 + 496) = 26;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[23],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 2048),
      (const char (*)[23])"GALLERY_TYPE_SWORD_WAY",
      (data::GalleryType *)(v1 + 496));
    if ( *(_BYTE *)(((v1 + 512) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 512) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 512, "GALLERY_TYPE_SWORD_WAY");
    *(_DWORD *)(v1 + 512) = 27;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[39],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 2088),
      (const char (*)[39])"GALLERY_TYPE_LUMINANCE_STONE_CHALLENGE",
      (data::GalleryType *)(v1 + 512));
    if ( *(_BYTE *)(((v1 + 528) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 528) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 528, "GALLERY_TYPE_LUMINANCE_STONE_CHALLENGE");
    *(_DWORD *)(v1 + 528) = 28;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[33],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 2128),
      (const char (*)[33])"GALLERY_TYPE_HOME_SEEK_FURNITURE",
      (data::GalleryType *)(v1 + 528));
    if ( *(_BYTE *)(((v1 + 544) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 544) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 544, "GALLERY_TYPE_HOME_SEEK_FURNITURE");
    *(_DWORD *)(v1 + 544) = 29;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[22],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 2168),
      (const char (*)[22])"GALLERY_TYPE_MP_BLOCK",
      (data::GalleryType *)(v1 + 544));
    if ( *(_BYTE *)(((v1 + 560) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 560) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 560, "GALLERY_TYPE_MP_BLOCK");
    *(_DWORD *)(v1 + 560) = 30;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[31],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 2208),
      (const char (*)[31])"GALLERY_TYPE_ISLAND_PARTY_RAFT",
      (data::GalleryType *)(v1 + 560));
    if ( *(_BYTE *)(((v1 + 576) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 576) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 576, "GALLERY_TYPE_ISLAND_PARTY_RAFT");
    *(_DWORD *)(v1 + 576) = 31;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[31],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 2248),
      (const char (*)[31])"GALLERY_TYPE_ISLAND_PARTY_SAIL",
      (data::GalleryType *)(v1 + 576));
    if ( *(_BYTE *)(((v1 + 592) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 592) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 592, "GALLERY_TYPE_ISLAND_PARTY_SAIL");
    *(_DWORD *)(v1 + 592) = 32;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[36],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 2288),
      (const char (*)[36])"GALLERY_TYPE_ISLAND_PARTY_DOWN_HILL",
      (data::GalleryType *)(v1 + 592));
    if ( *(_BYTE *)(((v1 + 608) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 608) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 608, "GALLERY_TYPE_ISLAND_PARTY_DOWN_HILL");
    *(_DWORD *)(v1 + 608) = 33;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[38],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 2328),
      (const char (*)[38])"GALLERY_TYPE_SUMMER_TIME_V2_BOAT_RACE",
      (data::GalleryType *)(v1 + 608));
    if ( *(_BYTE *)(((v1 + 624) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 624) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 624, "GALLERY_TYPE_SUMMER_TIME_V2_BOAT_RACE");
    *(_DWORD *)(v1 + 624) = 34;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[35],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 2368),
      (const char (*)[35])"GALLERY_TYPE_GRAVEN_INNOCENCE_RACE",
      (data::GalleryType *)(v1 + 624));
    if ( *(_BYTE *)(((v1 + 640) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 640) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 640, "GALLERY_TYPE_GRAVEN_INNOCENCE_RACE");
    *(_DWORD *)(v1 + 640) = 35;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[28],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 2408),
      (const char (*)[28])"GALLERY_TYPE_INSTABLE_SPRAY",
      (data::GalleryType *)(v1 + 640));
    if ( *(_BYTE *)(((v1 + 656) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 656) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 656, "GALLERY_TYPE_INSTABLE_SPRAY");
    *(_DWORD *)(v1 + 656) = 36;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[28],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 2448),
      (const char (*)[28])"GALLERY_TYPE_MUQADAS_POTION",
      (data::GalleryType *)(v1 + 656));
    if ( *(_BYTE *)(((v1 + 672) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 672) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 672, "GALLERY_TYPE_MUQADAS_POTION");
    *(_DWORD *)(v1 + 672) = 37;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[29],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 2488),
      (const char (*)[29])"GALLERY_TYPE_TREASURE_SEELIE",
      (data::GalleryType *)(v1 + 672));
    if ( *(_BYTE *)(((v1 + 688) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 688) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 688, "GALLERY_TYPE_TREASURE_SEELIE");
    *(_DWORD *)(v1 + 688) = 38;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[29],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 2528),
      (const char (*)[29])"GALLERY_TYPE_VINTAGE_HUNTING",
      (data::GalleryType *)(v1 + 688));
    if ( *(_BYTE *)(((v1 + 704) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 704) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 704, "GALLERY_TYPE_VINTAGE_HUNTING");
    *(_DWORD *)(v1 + 704) = 39;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[24],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 2568),
      (const char (*)[24])"GALLERY_TYPE_WIND_FIELD",
      (data::GalleryType *)(v1 + 704));
    if ( *(_BYTE *)(((v1 + 720) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 720) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 720, "GALLERY_TYPE_WIND_FIELD");
    *(_DWORD *)(v1 + 720) = 40;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[38],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 2608),
      (const char (*)[38])"GALLERY_TYPE_FUNGUS_FIGHTING_TRAINING",
      (data::GalleryType *)(v1 + 720));
    if ( *(_BYTE *)(((v1 + 736) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 736) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 736, "GALLERY_TYPE_FUNGUS_FIGHTING_TRAINING");
    *(_DWORD *)(v1 + 736) = 41;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[37],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 2648),
      (const char (*)[37])"GALLERY_TYPE_FUNGUS_FIGHTING_CAPTURE",
      (data::GalleryType *)(v1 + 736));
    if ( *(_BYTE *)(((v1 + 752) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 752) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 752, "GALLERY_TYPE_FUNGUS_FIGHTING_CAPTURE");
    *(_DWORD *)(v1 + 752) = 42;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[34],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 2688),
      (const char (*)[34])"GALLERY_TYPE_CHAR_AMUSE_SPIN_BALL",
      (data::GalleryType *)(v1 + 752));
    if ( *(_BYTE *)(((v1 + 768) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 768) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 768, "GALLERY_TYPE_CHAR_AMUSE_SPIN_BALL");
    *(_DWORD *)(v1 + 768) = 43;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[31],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 2728),
      (const char (*)[31])"GALLERY_TYPE_CHAR_AMUSE_PILLAR",
      (data::GalleryType *)(v1 + 768));
    if ( *(_BYTE *)(((v1 + 784) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 784) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 784, "GALLERY_TYPE_CHAR_AMUSE_PILLAR");
    *(_DWORD *)(v1 + 784) = 44;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[37],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 2768),
      (const char (*)[37])"GALLERY_TYPE_CHAR_AMUSE_RUN_ON_WATER",
      (data::GalleryType *)(v1 + 784));
    if ( *(_BYTE *)(((v1 + 800) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 800) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 800, "GALLERY_TYPE_CHAR_AMUSE_RUN_ON_WATER");
    *(_DWORD *)(v1 + 800) = 45;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[34],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 2808),
      (const char (*)[34])"GALLERY_TYPE_CHAR_AMUSE_BASE_BALL",
      (data::GalleryType *)(v1 + 800));
    if ( *(_BYTE *)(((v1 + 816) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 816) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 816, "GALLERY_TYPE_CHAR_AMUSE_BASE_BALL");
    *(_DWORD *)(v1 + 816) = 46;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[34],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 2848),
      (const char (*)[34])"GALLERY_TYPE_CHAR_AMUSE_FOOT_BALL",
      (data::GalleryType *)(v1 + 816));
    if ( *(_BYTE *)(((v1 + 832) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 832) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 832, "GALLERY_TYPE_CHAR_AMUSE_FOOT_BALL");
    *(_DWORD *)(v1 + 832) = 47;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[35],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 2888),
      (const char (*)[35])"GALLERY_TYPE_CHAR_AMUSE_BRICK_WALL",
      (data::GalleryType *)(v1 + 832));
    if ( *(_BYTE *)(((v1 + 848) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 848) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 848, "GALLERY_TYPE_CHAR_AMUSE_BRICK_WALL");
    *(_DWORD *)(v1 + 848) = 48;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[31],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 2928),
      (const char (*)[31])"GALLERY_TYPE_CHAR_AMUSE_BATTLE",
      (data::GalleryType *)(v1 + 848));
    if ( *(_BYTE *)(((v1 + 864) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 864) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 864, "GALLERY_TYPE_CHAR_AMUSE_BATTLE");
    *(_DWORD *)(v1 + 864) = 49;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[33],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 2968),
      (const char (*)[33])"GALLERY_TYPE_EFFIGY_CHALLENGE_V2",
      (data::GalleryType *)(v1 + 864));
    if ( *(_BYTE *)(((v1 + 880) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 880) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 880, "GALLERY_TYPE_EFFIGY_CHALLENGE_V2");
    *(_DWORD *)(v1 + 880) = 50;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[27],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 3008),
      (const char (*)[27])"GALLERY_TYPE_BRICK_BREAKER",
      (data::GalleryType *)(v1 + 880));
    if ( *(_BYTE *)(((v1 + 896) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 896) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 896, "GALLERY_TYPE_BRICK_BREAKER");
    *(_DWORD *)(v1 + 896) = 51;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[26],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 3048),
      (const char (*)[26])"GALLERY_TYPE_COIN_COLLECT",
      (data::GalleryType *)(v1 + 896));
    if ( *(_BYTE *)(((v1 + 912) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 912) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 912, "GALLERY_TYPE_COIN_COLLECT");
    *(_DWORD *)(v1 + 912) = 52;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[36],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 3088),
      (const char (*)[36])"GALLERY_TYPE_ELECTROHERCULES_BATTLE",
      (data::GalleryType *)(v1 + 912));
    if ( *(_BYTE *)(((v1 + 928) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 928) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 928, "GALLERY_TYPE_ELECTROHERCULES_BATTLE");
    *(_DWORD *)(v1 + 928) = 53;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[36],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 3128),
      (const char (*)[36])"GALLERY_TYPE_LANV3_BOAT_GAME_SINGLE",
      (data::GalleryType *)(v1 + 928));
    if ( *(_BYTE *)(((v1 + 944) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 944) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 944, "GALLERY_TYPE_LANV3_BOAT_GAME_SINGLE");
    *(_DWORD *)(v1 + 944) = 54;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[35],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 3168),
      (const char (*)[35])"GALLERY_TYPE_LANV3_BOAT_GAME_MULTI",
      (data::GalleryType *)(v1 + 944));
    if ( *(_BYTE *)(((v1 + 960) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 960) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 960, "GALLERY_TYPE_LANV3_BOAT_GAME_MULTI");
    *(_DWORD *)(v1 + 960) = 55;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[24],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 3208),
      (const char (*)[24])"GALLERY_TYPE_TEAM_CHAIN",
      (data::GalleryType *)(v1 + 960));
    if ( *(_BYTE *)(((v1 + 976) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 976) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 976, "GALLERY_TYPE_TEAM_CHAIN");
    *(_DWORD *)(v1 + 976) = 56;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[24],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 3248),
      (const char (*)[24])"GALLERY_TYPE_DUEL_HEART",
      (data::GalleryType *)(v1 + 976));
    if ( *(_BYTE *)(((v1 + 992) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 992) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 992, "GALLERY_TYPE_DUEL_HEART");
    *(_DWORD *)(v1 + 992) = 57;
    std::pair<std::string const,data::GalleryType>::pair<char const(&)[24],data::GalleryType,true>(
      (std::pair<const std::string,data::GalleryType> *const)(v1 + 3288),
      (const char (*)[24])"GALLERY_TYPE_LANV3_RACE",
      (data::GalleryType *)(v1 + 992));
    std::allocator<std::pair<std::string const,data::GalleryType>>::allocator((std::allocator<std::pair<const std::string,data::GalleryType> > *const)(v1 + 64));
    std::unordered_map<std::string,data::GalleryType>::unordered_map(
      &data::getGalleryTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::GalleryType> >)__PAIR128__(58LL, v1 + 1008),
      0LL,
      (const std::unordered_map<std::string,data::GalleryType>::hasher *)(v1 + 32),
      (const std::unordered_map<std::string,data::GalleryType>::key_equal *)(v1 + 48),
      (const std::unordered_map<std::string,data::GalleryType>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getGalleryTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::GalleryType>::~unordered_map,
      &data::getGalleryTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::GalleryType>>::~allocator((std::allocator<std::pair<const std::string,data::GalleryType> > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::GalleryType> *)(v1 + 3328);
          i != (std::pair<const std::string,data::GalleryType> *)(v1 + 1008);
          std::pair<std::string const,data::GalleryType>::~pair(i) )
    {
      --i;
    }
  }
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF81A8) = 0LL;
    memset(
      (void *)((unsigned __int64)(v3 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v3 + 2147450880 - (((_DWORD)v3 + 2147450888) & 0xFFFFFFF8) + 432) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    __asan_stack_free_6(v1, 3456LL, v6);
  }
  return &data::getGalleryTypeNameMap[abi:cxx11](void)::m;
};

// Line 207: range 00000000143C6D65-00000000143CB591
const std::map<data::GalleryType,std::pair<std::string,std::string >> *__cdecl data::getGalleryTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::GalleryType,std::pair<std::string,std::string > > *i; // r14
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
  _DWORD *v52; // rax
  _DWORD *v53; // rax
  _DWORD *v54; // rax
  _DWORD *v55; // rax
  _DWORD *v56; // rax
  _DWORD *v57; // rax
  _DWORD *v58; // rax
  _DWORD *v59; // rax
  _DWORD *v60; // rax
  _DWORD *v61; // rax
  char v63[11056]; // [rsp+10h] [rbp-2B30h] BYREF

  v1 = (unsigned __int64)v63;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_8(11008LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "119 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 4 "
                        "9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unknown> 208 4 9 <unk"
                        "nown> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 4 9 <unknown> 288 4 9 <unknown> "
                        "304 4 9 <unknown> 320 4 9 <unknown> 336 4 9 <unknown> 352 4 9 <unknown> 368 4 9 <unknown> 384 4 "
                        "9 <unknown> 400 4 9 <unknown> 416 4 9 <unknown> 432 4 9 <unknown> 448 4 9 <unknown> 464 4 9 <unk"
                        "nown> 480 4 9 <unknown> 496 4 9 <unknown> 512 4 9 <unknown> 528 4 9 <unknown> 544 4 9 <unknown> "
                        "560 4 9 <unknown> 576 4 9 <unknown> 592 4 9 <unknown> 608 4 9 <unknown> 624 4 9 <unknown> 640 4 "
                        "9 <unknown> 656 4 9 <unknown> 672 4 9 <unknown> 688 4 9 <unknown> 704 4 9 <unknown> 720 4 9 <unk"
                        "nown> 736 4 9 <unknown> 752 4 9 <unknown> 768 4 9 <unknown> 784 4 9 <unknown> 800 4 9 <unknown> "
                        "816 4 9 <unknown> 832 4 9 <unknown> 848 4 9 <unknown> 864 4 9 <unknown> 880 4 9 <unknown> 896 4 "
                        "9 <unknown> 912 4 9 <unknown> 928 4 9 <unknown> 944 4 9 <unknown> 960 4 9 <unknown> 976 4 9 <unk"
                        "nown> 992 4 9 <unknown> 1008 64 9 <unknown> 1104 64 9 <unknown> 1200 64 9 <unknown> 1296 64 9 <u"
                        "nknown> 1392 64 9 <unknown> 1488 64 9 <unknown> 1584 64 9 <unknown> 1680 64 9 <unknown> 1776 64 "
                        "9 <unknown> 1872 64 9 <unknown> 1968 64 9 <unknown> 2064 64 9 <unknown> 2160 64 9 <unknown> 2256"
                        " 64 9 <unknown> 2352 64 9 <unknown> 2448 64 9 <unknown> 2544 64 9 <unknown> 2640 64 9 <unknown> "
                        "2736 64 9 <unknown> 2832 64 9 <unknown> 2928 64 9 <unknown> 3024 64 9 <unknown> 3120 64 9 <unkno"
                        "wn> 3216 64 9 <unknown> 3312 64 9 <unknown> 3408 64 9 <unknown> 3504 64 9 <unknown> 3600 64 9 <u"
                        "nknown> 3696 64 9 <unknown> 3792 64 9 <unknown> 3888 64 9 <unknown> 3984 64 9 <unknown> 4080 64 "
                        "9 <unknown> 4176 64 9 <unknown> 4272 64 9 <unknown> 4368 64 9 <unknown> 4464 64 9 <unknown> 4560"
                        " 64 9 <unknown> 4656 64 9 <unknown> 4752 64 9 <unknown> 4848 64 9 <unknown> 4944 64 9 <unknown> "
                        "5040 64 9 <unknown> 5136 64 9 <unknown> 5232 64 9 <unknown> 5328 64 9 <unknown> 5424 64 9 <unkno"
                        "wn> 5520 64 9 <unknown> 5616 64 9 <unknown> 5712 64 9 <unknown> 5808 64 9 <unknown> 5904 64 9 <u"
                        "nknown> 6000 64 9 <unknown> 6096 64 9 <unknown> 6192 64 9 <unknown> 6288 64 9 <unknown> 6384 64 "
                        "9 <unknown> 6480 64 9 <unknown> 6576 4176 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::getGalleryTypeEnumMap[abi:cxx11];
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
  v3[536862747] = -234556924;
  v3[536862748] = -234556924;
  v3[536862749] = -234556924;
  v3[536862750] = -234556924;
  v3[536862751] = 61956;
  v3[536862753] = -219021312;
  v3[536862754] = 62194;
  v3[536862756] = -219021312;
  v3[536862757] = 62194;
  v3[536862759] = -219021312;
  v3[536862760] = 62194;
  v3[536862762] = -219021312;
  v3[536862763] = 62194;
  v3[536862765] = -219021312;
  v3[536862766] = 62194;
  v3[536862768] = -219021312;
  v3[536862769] = 62194;
  v3[536862771] = -219021312;
  v3[536862772] = 62194;
  v3[536862774] = -219021312;
  v3[536862775] = 62194;
  v3[536862777] = -219021312;
  v3[536862778] = 62194;
  v3[536862780] = -219021312;
  v3[536862781] = 62194;
  v3[536862783] = -219021312;
  v3[536862784] = 62194;
  v3[536862786] = -219021312;
  v3[536862787] = 62194;
  v3[536862789] = -219021312;
  v3[536862790] = 62194;
  v3[536862792] = -219021312;
  v3[536862793] = 62194;
  v3[536862795] = -219021312;
  v3[536862796] = 62194;
  v3[536862798] = -219021312;
  v3[536862799] = 62194;
  v3[536862801] = -219021312;
  v3[536862802] = 62194;
  v3[536862804] = -219021312;
  v3[536862805] = 62194;
  v3[536862807] = -219021312;
  v3[536862808] = 62194;
  v3[536862810] = -219021312;
  v3[536862811] = 62194;
  v3[536862813] = -219021312;
  v3[536862814] = 62194;
  v3[536862816] = -219021312;
  v3[536862817] = 62194;
  v3[536862819] = -219021312;
  v3[536862820] = 62194;
  v3[536862822] = -219021312;
  v3[536862823] = 62194;
  v3[536862825] = -219021312;
  v3[536862826] = 62194;
  v3[536862828] = -219021312;
  v3[536862829] = 62194;
  v3[536862831] = -219021312;
  v3[536862832] = 62194;
  v3[536862834] = -219021312;
  v3[536862835] = 62194;
  v3[536862837] = -219021312;
  v3[536862838] = 62194;
  v3[536862840] = -219021312;
  v3[536862841] = 62194;
  v3[536862843] = -219021312;
  v3[536862844] = 62194;
  v3[536862846] = -219021312;
  v3[536862847] = 62194;
  v3[536862849] = -219021312;
  v3[536862850] = 62194;
  v3[536862852] = -219021312;
  v3[536862853] = 62194;
  v3[536862855] = -219021312;
  v3[536862856] = 62194;
  v3[536862858] = -219021312;
  v3[536862859] = 62194;
  v3[536862861] = -219021312;
  v3[536862862] = 62194;
  v3[536862864] = -219021312;
  v3[536862865] = 62194;
  v3[536862867] = -219021312;
  v3[536862868] = 62194;
  v3[536862870] = -219021312;
  v3[536862871] = 62194;
  v3[536862873] = -219021312;
  v3[536862874] = 62194;
  v3[536862876] = -219021312;
  v3[536862877] = 62194;
  v3[536862879] = -219021312;
  v3[536862880] = 62194;
  v3[536862882] = -219021312;
  v3[536862883] = 62194;
  v3[536862885] = -219021312;
  v3[536862886] = 62194;
  v3[536862888] = -219021312;
  v3[536862889] = 62194;
  v3[536862891] = -219021312;
  v3[536862892] = 62194;
  v3[536862894] = -219021312;
  v3[536862895] = 62194;
  v3[536862897] = -219021312;
  v3[536862898] = 62194;
  v3[536862900] = -219021312;
  v3[536862901] = 62194;
  v3[536862903] = -219021312;
  v3[536862904] = 62194;
  v3[536862906] = -219021312;
  v3[536862907] = 62194;
  v3[536862909] = -219021312;
  v3[536862910] = 62194;
  v3[536862912] = -219021312;
  v3[536862913] = 62194;
  v3[536862915] = -219021312;
  v3[536862916] = 62194;
  v3[536862918] = -219021312;
  v3[536862919] = 62194;
  v3[536862921] = -219021312;
  v3[536862922] = 62194;
  v3[536862924] = -219021312;
  v3[536862925] = 62194;
  v3[536863056] = -202116109;
  v3[536863057] = -202116109;
  v3[536863058] = -202116109;
  v3[536863059] = -202116109;
  v3[536863060] = -202116109;
  v3[536863061] = -202116109;
  v3[536863062] = -202116109;
  v3[536863063] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getGalleryTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getGalleryTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[18],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1008),
      (const char (*)[1])byte_1ACFAB80,
      (const char (*)[18])"GALLERY_TYPE_NONE");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 6576),
      (data::GalleryType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 1008));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[10],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1104),
      (const char (*)[10])byte_1AD5DF80,
      (const char (*)[21])"GALLERY_TYPE_BALLOON");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 6648),
      (data::GalleryType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 1104));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[16],char const(&)[18],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1200),
      (const char (*)[16])byte_1AD5DFC0,
      (const char (*)[18])"GALLERY_TYPE_FALL");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 6720),
      (data::GalleryType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 1200));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, v1 + 112);
    *(_DWORD *)(v1 + 128) = 3;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[29],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1296),
      (const char (*)[13])byte_1AD5E000,
      (const char (*)[29])"GALLERY_TYPE_ARENA_CHALLENGE");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 6792),
      (data::GalleryType *)(v1 + 128),
      (const std::pair<std::string,std::string > *)(v1 + 1296));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, v1 + 128);
    *(_DWORD *)(v1 + 144) = 4;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[26],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1392),
      (const char (*)[7])byte_1AD5E040,
      (const char (*)[26])"GALLERY_TYPE_CATCH_FLOWER");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 6864),
      (data::GalleryType *)(v1 + 144),
      (const std::pair<std::string,std::string > *)(v1 + 1392));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, v1 + 144);
    *(_DWORD *)(v1 + 160) = 5;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[27],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1488),
      (const char (*)[13])byte_1AD5E080,
      (const char (*)[27])"GALLERY_TYPE_FADEOUT_FLOOR");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 6936),
      (data::GalleryType *)(v1 + 160),
      (const std::pair<std::string,std::string > *)(v1 + 1488));
    if ( *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 176, v1 + 160);
    *(_DWORD *)(v1 + 176) = 6;
    std::pair<std::string,std::string>::pair<char const(&)[16],char const(&)[24],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1584),
      (const char (*)[16])byte_1AD5E0C0,
      (const char (*)[24])"GALLERY_TYPE_AVOID_RAYS");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 7008),
      (data::GalleryType *)(v1 + 176),
      (const std::pair<std::string,std::string > *)(v1 + 1584));
    if ( *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 192, v1 + 176);
    *(_DWORD *)(v1 + 192) = 7;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[26],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1680),
      (const char (*)[13])byte_1AD5E100,
      (const char (*)[26])"GALLERY_TYPE_BROKEN_FLOOR");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 7080),
      (data::GalleryType *)(v1 + 192),
      (const std::pair<std::string,std::string > *)(v1 + 1680));
    if ( *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 208, v1 + 192);
    *(_DWORD *)(v1 + 208) = 8;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[25],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1776),
      (const char (*)[7])byte_1AD5E140,
      (const char (*)[25])"GALLERY_TYPE_BULLET_GAME");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 7152),
      (data::GalleryType *)(v1 + 208),
      (const std::pair<std::string,std::string > *)(v1 + 1776));
    if ( *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 224, v1 + 208);
    *(_DWORD *)(v1 + 224) = 9;
    std::pair<std::string,std::string>::pair<char const(&)[10],char const(&)[27],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1872),
      (const char (*)[10])byte_1AD5E180,
      (const char (*)[27])"GALLERY_TYPE_AVOID_BUBBLES");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 7224),
      (data::GalleryType *)(v1 + 224),
      (const std::pair<std::string,std::string > *)(v1 + 1872));
    if ( *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 240, v1 + 224);
    *(_DWORD *)(v1 + 240) = 10;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[27],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1968),
      (const char (*)[13])byte_1AD5E1C0,
      (const char (*)[27])"GALLERY_TYPE_REMEMBER_ROAD");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 7296),
      (data::GalleryType *)(v1 + 240),
      (const std::pair<std::string,std::string > *)(v1 + 1968));
    if ( *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 256, v1 + 240);
    *(_DWORD *)(v1 + 256) = 11;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[24],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2064),
      (const char (*)[13])byte_1AD5E200,
      (const char (*)[24])"GALLERY_TYPE_MIST_TRIAL");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 7368),
      (data::GalleryType *)(v1 + 256),
      (const std::pair<std::string,std::string > *)(v1 + 2064));
    if ( *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 272, v1 + 256);
    *(_DWORD *)(v1 + 272) = 12;
    std::pair<std::string,std::string>::pair<char const(&)[10],char const(&)[27],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2160),
      (const char (*)[10])byte_1AD5E240,
      (const char (*)[27])"GALLERY_TYPE_HIDE_AND_SEEK");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 7440),
      (data::GalleryType *)(v1 + 272),
      (const std::pair<std::string,std::string > *)(v1 + 2160));
    if ( *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 288, v1 + 272);
    *(_DWORD *)(v1 + 288) = 13;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[28],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2256),
      (const char (*)[13])byte_1AD5E280,
      (const char (*)[28])"GALLERY_TYPE_BUOYANT_COMBAT");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 7512),
      (data::GalleryType *)(v1 + 288),
      (const std::pair<std::string,std::string > *)(v1 + 2256));
    if ( *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 304, v1 + 288);
    *(_DWORD *)(v1 + 304) = 14;
    std::pair<std::string,std::string>::pair<char const(&)[16],char const(&)[30],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2352),
      (const char (*)[16])byte_1AD5E2C0,
      (const char (*)[30])"GALLERY_TYPE_BOUNCE_CONJURING");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 7584),
      (data::GalleryType *)(v1 + 304),
      (const std::pair<std::string,std::string > *)(v1 + 2352));
    if ( *(_BYTE *)(((v1 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 320) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 320, v1 + 304);
    *(_DWORD *)(v1 + 320) = 15;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[22],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2448),
      (const char (*)[7])byte_1AD5E300,
      (const char (*)[22])"GALLERY_TYPE_HANDBALL");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 7656),
      (data::GalleryType *)(v1 + 320),
      (const std::pair<std::string,std::string > *)(v1 + 2448));
    if ( *(_BYTE *)(((v1 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 336) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 336, v1 + 320);
    *(_DWORD *)(v1 + 336) = 16;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[25],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2544),
      (const char (*)[13])byte_1AD5E340,
      (const char (*)[25])"GALLERY_TYPE_SUMO_COMBAT");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 7728),
      (data::GalleryType *)(v1 + 336),
      (const std::pair<std::string,std::string > *)(v1 + 2544));
    if ( *(_BYTE *)(((v1 + 352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 352) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 352, v1 + 336);
    *(_DWORD *)(v1 + 352) = 17;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[18],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2640),
      (const char (*)[7])byte_1AD5E380,
      (const char (*)[18])"GALLERY_TYPE_FISH");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 7800),
      (data::GalleryType *)(v1 + 352),
      (const std::pair<std::string,std::string > *)(v1 + 2640));
    if ( *(_BYTE *)(((v1 + 368) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 368) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 368, v1 + 352);
    *(_DWORD *)(v1 + 368) = 18;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[24],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2736),
      (const char (*)[13])byte_1AD5E3C0,
      (const char (*)[24])"GALLERY_TYPE_DIG_COMBAT");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 7872),
      (data::GalleryType *)(v1 + 368),
      (const std::pair<std::string,std::string > *)(v1 + 2736));
    if ( *(_BYTE *)(((v1 + 384) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 384) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 384, v1 + 368);
    *(_DWORD *)(v1 + 384) = 19;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[23],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2832),
      (const char (*)[13])byte_1AD5E400,
      (const char (*)[23])"GALLERY_TYPE_TRIATHLON");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 7944),
      (data::GalleryType *)(v1 + 384),
      (const std::pair<std::string,std::string > *)(v1 + 2832));
    if ( *(_BYTE *)(((v1 + 400) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 400) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 400, v1 + 384);
    *(_DWORD *)(v1 + 400) = 20;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[25],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2928),
      (const char (*)[13])byte_1AD5E440,
      (const char (*)[25])"GALLERY_TYPE_HOME_RACING");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 8016),
      (data::GalleryType *)(v1 + 400),
      (const std::pair<std::string,std::string > *)(v1 + 2928));
    if ( *(_BYTE *)(((v1 + 416) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 416) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 416, v1 + 400);
    *(_DWORD *)(v1 + 416) = 21;
    std::pair<std::string,std::string>::pair<char const(&)[22],char const(&)[29],true>(
      (std::pair<std::string,std::string > *const)(v1 + 3024),
      (const char (*)[22])byte_1AD5E480,
      (const char (*)[29])"GALLERY_TYPE_SALVAGE_PREVENT");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 8088),
      (data::GalleryType *)(v1 + 416),
      (const std::pair<std::string,std::string > *)(v1 + 3024));
    if ( *(_BYTE *)(((v1 + 432) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 432) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 432, v1 + 416);
    *(_DWORD *)(v1 + 432) = 22;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[28],true>(
      (std::pair<std::string,std::string > *const)(v1 + 3120),
      (const char (*)[19])byte_1AD5E4C0,
      (const char (*)[28])"GALLERY_TYPE_SALVAGE_ESCORT");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 8160),
      (data::GalleryType *)(v1 + 432),
      (const std::pair<std::string,std::string > *)(v1 + 3120));
    if ( *(_BYTE *)(((v1 + 448) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 448) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 448, v1 + 432);
    *(_DWORD *)(v1 + 448) = 23;
    std::pair<std::string,std::string>::pair<char const(&)[16],char const(&)[26],true>(
      (std::pair<std::string,std::string > *const)(v1 + 3216),
      (const char (*)[16])byte_1AD5E500,
      (const char (*)[26])"GALLERY_TYPE_HOME_BALLOON");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 8232),
      (data::GalleryType *)(v1 + 448),
      (const std::pair<std::string,std::string > *)(v1 + 3216));
    if ( *(_BYTE *)(((v1 + 464) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 464) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 464, v1 + 448);
    *(_DWORD *)(v1 + 464) = 24;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[26],true>(
      (std::pair<std::string,std::string > *const)(v1 + 3312),
      (const char (*)[13])byte_1AD5E540,
      (const char (*)[26])"GALLERY_TYPE_CRYSTAL_LINK");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 8304),
      (data::GalleryType *)(v1 + 464),
      (const std::pair<std::string,std::string > *)(v1 + 3312));
    if ( *(_BYTE *)(((v1 + 480) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 480) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 480, v1 + 464);
    *(_DWORD *)(v1 + 480) = 25;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[19],true>(
      (std::pair<std::string,std::string > *const)(v1 + 3408),
      (const char (*)[13])byte_1AD5E580,
      (const char (*)[19])"GALLERY_TYPE_PHOTO");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 8376),
      (data::GalleryType *)(v1 + 480),
      (const std::pair<std::string,std::string > *)(v1 + 3408));
    if ( *(_BYTE *)(((v1 + 496) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 496) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 496, v1 + 480);
    *(_DWORD *)(v1 + 496) = 26;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[23],true>(
      (std::pair<std::string,std::string > *const)(v1 + 3504),
      (const char (*)[13])byte_1AD5E5C0,
      (const char (*)[23])"GALLERY_TYPE_SWORD_WAY");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 8448),
      (data::GalleryType *)(v1 + 496),
      (const std::pair<std::string,std::string > *)(v1 + 3504));
    if ( *(_BYTE *)(((v1 + 512) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 512) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 512, v1 + 496);
    *(_DWORD *)(v1 + 512) = 27;
    std::pair<std::string,std::string>::pair<char const(&)[16],char const(&)[39],true>(
      (std::pair<std::string,std::string > *const)(v1 + 3600),
      (const char (*)[16])byte_1AD5E600,
      (const char (*)[39])"GALLERY_TYPE_LUMINANCE_STONE_CHALLENGE");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 8520),
      (data::GalleryType *)(v1 + 512),
      (const std::pair<std::string,std::string > *)(v1 + 3600));
    if ( *(_BYTE *)(((v1 + 528) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 528) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 528, v1 + 512);
    *(_DWORD *)(v1 + 528) = 28;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[33],true>(
      (std::pair<std::string,std::string > *const)(v1 + 3696),
      (const char (*)[13])byte_1AD5E640,
      (const char (*)[33])"GALLERY_TYPE_HOME_SEEK_FURNITURE");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 8592),
      (data::GalleryType *)(v1 + 528),
      (const std::pair<std::string,std::string > *)(v1 + 3696));
    if ( *(_BYTE *)(((v1 + 544) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 544) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 544, v1 + 528);
    *(_DWORD *)(v1 + 544) = 29;
    std::pair<std::string,std::string>::pair<char const(&)[25],char const(&)[22],true>(
      (std::pair<std::string,std::string > *const)(v1 + 3792),
      (const char (*)[25])byte_1AD5E680,
      (const char (*)[22])"GALLERY_TYPE_MP_BLOCK");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 8664),
      (data::GalleryType *)(v1 + 544),
      (const std::pair<std::string,std::string > *)(v1 + 3792));
    if ( *(_BYTE *)(((v1 + 560) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 560) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 560, v1 + 544);
    *(_DWORD *)(v1 + 560) = 30;
    std::pair<std::string,std::string>::pair<char const(&)[22],char const(&)[31],true>(
      (std::pair<std::string,std::string > *const)(v1 + 3888),
      (const char (*)[22])byte_1AD5E6C0,
      (const char (*)[31])"GALLERY_TYPE_ISLAND_PARTY_RAFT");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 8736),
      (data::GalleryType *)(v1 + 560),
      (const std::pair<std::string,std::string > *)(v1 + 3888));
    if ( *(_BYTE *)(((v1 + 576) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 576) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 576, v1 + 560);
    *(_DWORD *)(v1 + 576) = 31;
    std::pair<std::string,std::string>::pair<char const(&)[22],char const(&)[31],true>(
      (std::pair<std::string,std::string > *const)(v1 + 3984),
      (const char (*)[22])byte_1AD5E700,
      (const char (*)[31])"GALLERY_TYPE_ISLAND_PARTY_SAIL");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 8808),
      (data::GalleryType *)(v1 + 576),
      (const std::pair<std::string,std::string > *)(v1 + 3984));
    if ( *(_BYTE *)(((v1 + 592) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 592) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 592, v1 + 576);
    *(_DWORD *)(v1 + 592) = 32;
    std::pair<std::string,std::string>::pair<char const(&)[22],char const(&)[36],true>(
      (std::pair<std::string,std::string > *const)(v1 + 4080),
      (const char (*)[22])byte_1AD5E740,
      (const char (*)[36])"GALLERY_TYPE_ISLAND_PARTY_DOWN_HILL");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 8880),
      (data::GalleryType *)(v1 + 592),
      (const std::pair<std::string,std::string > *)(v1 + 4080));
    if ( *(_BYTE *)(((v1 + 608) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 608) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 608, v1 + 592);
    *(_DWORD *)(v1 + 608) = 33;
    std::pair<std::string,std::string>::pair<char const(&)[28],char const(&)[38],true>(
      (std::pair<std::string,std::string > *const)(v1 + 4176),
      (const char (*)[28])byte_1AD5E780,
      (const char (*)[38])"GALLERY_TYPE_SUMMER_TIME_V2_BOAT_RACE");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 8952),
      (data::GalleryType *)(v1 + 608),
      (const std::pair<std::string,std::string > *)(v1 + 4176));
    if ( *(_BYTE *)(((v1 + 624) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 624) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 624, v1 + 608);
    *(_DWORD *)(v1 + 624) = 34;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[35],true>(
      (std::pair<std::string,std::string > *const)(v1 + 4272),
      (const char (*)[19])byte_1AD5E7C0,
      (const char (*)[35])"GALLERY_TYPE_GRAVEN_INNOCENCE_RACE");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 9024),
      (data::GalleryType *)(v1 + 624),
      (const std::pair<std::string,std::string > *)(v1 + 4272));
    if ( *(_BYTE *)(((v1 + 640) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 640) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 640, v1 + 624);
    *(_DWORD *)(v1 + 640) = 35;
    std::pair<std::string,std::string>::pair<char const(&)[16],char const(&)[28],true>(
      (std::pair<std::string,std::string > *const)(v1 + 4368),
      (const char (*)[16])byte_1AD5E800,
      (const char (*)[28])"GALLERY_TYPE_INSTABLE_SPRAY");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 9096),
      (data::GalleryType *)(v1 + 640),
      (const std::pair<std::string,std::string > *)(v1 + 4368));
    if ( *(_BYTE *)(((v1 + 656) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 656) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 656, v1 + 640);
    *(_DWORD *)(v1 + 656) = 36;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[28],true>(
      (std::pair<std::string,std::string > *const)(v1 + 4464),
      (const char (*)[13])byte_1AD5E840,
      (const char (*)[28])"GALLERY_TYPE_MUQADAS_POTION");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 9168),
      (data::GalleryType *)(v1 + 656),
      (const std::pair<std::string,std::string > *)(v1 + 4464));
    if ( *(_BYTE *)(((v1 + 672) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 672) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 672, v1 + 656);
    *(_DWORD *)(v1 + 672) = 37;
    std::pair<std::string,std::string>::pair<char const(&)[16],char const(&)[29],true>(
      (std::pair<std::string,std::string > *const)(v1 + 4560),
      (const char (*)[16])byte_1AD5E880,
      (const char (*)[29])"GALLERY_TYPE_TREASURE_SEELIE");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 9240),
      (data::GalleryType *)(v1 + 672),
      (const std::pair<std::string,std::string > *)(v1 + 4560));
    if ( *(_BYTE *)(((v1 + 688) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 688) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 688, v1 + 672);
    *(_DWORD *)(v1 + 688) = 38;
    std::pair<std::string,std::string>::pair<char const(&)[28],char const(&)[29],true>(
      (std::pair<std::string,std::string > *const)(v1 + 4656),
      (const char (*)[28])byte_1AD5E8C0,
      (const char (*)[29])"GALLERY_TYPE_VINTAGE_HUNTING");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 9312),
      (data::GalleryType *)(v1 + 688),
      (const std::pair<std::string,std::string > *)(v1 + 4656));
    if ( *(_BYTE *)(((v1 + 704) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 704) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 704, v1 + 688);
    *(_DWORD *)(v1 + 704) = 39;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[24],true>(
      (std::pair<std::string,std::string > *const)(v1 + 4752),
      (const char (*)[13])byte_1AD5E900,
      (const char (*)[24])"GALLERY_TYPE_WIND_FIELD");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 9384),
      (data::GalleryType *)(v1 + 704),
      (const std::pair<std::string,std::string > *)(v1 + 4752));
    if ( *(_BYTE *)(((v1 + 720) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 720) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 720, v1 + 704);
    *(_DWORD *)(v1 + 720) = 40;
    std::pair<std::string,std::string>::pair<char const(&)[22],char const(&)[38],true>(
      (std::pair<std::string,std::string > *const)(v1 + 4848),
      (const char (*)[22])byte_1AD5E940,
      (const char (*)[38])"GALLERY_TYPE_FUNGUS_FIGHTING_TRAINING");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 9456),
      (data::GalleryType *)(v1 + 720),
      (const std::pair<std::string,std::string > *)(v1 + 4848));
    if ( *(_BYTE *)(((v1 + 736) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 736) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 736, v1 + 720);
    *(_DWORD *)(v1 + 736) = 41;
    std::pair<std::string,std::string>::pair<char const(&)[22],char const(&)[37],true>(
      (std::pair<std::string,std::string > *const)(v1 + 4944),
      (const char (*)[22])byte_1AD5E980,
      (const char (*)[37])"GALLERY_TYPE_FUNGUS_FIGHTING_CAPTURE");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 9528),
      (data::GalleryType *)(v1 + 736),
      (const std::pair<std::string,std::string > *)(v1 + 4944));
    if ( *(_BYTE *)(((v1 + 752) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 752) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 752, v1 + 736);
    *(_DWORD *)(v1 + 752) = 42;
    std::pair<std::string,std::string>::pair<char const(&)[31],char const(&)[34],true>(
      (std::pair<std::string,std::string > *const)(v1 + 5040),
      (const char (*)[31])byte_1AD5E9C0,
      (const char (*)[34])"GALLERY_TYPE_CHAR_AMUSE_SPIN_BALL");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 9600),
      (data::GalleryType *)(v1 + 752),
      (const std::pair<std::string,std::string > *)(v1 + 5040));
    if ( *(_BYTE *)(((v1 + 768) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 768) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 768, v1 + 752);
    *(_DWORD *)(v1 + 768) = 43;
    std::pair<std::string,std::string>::pair<char const(&)[37],char const(&)[31],true>(
      (std::pair<std::string,std::string > *const)(v1 + 5136),
      (const char (*)[37])byte_1AD5EA00,
      (const char (*)[31])"GALLERY_TYPE_CHAR_AMUSE_PILLAR");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 9672),
      (data::GalleryType *)(v1 + 768),
      (const std::pair<std::string,std::string > *)(v1 + 5136));
    if ( *(_BYTE *)(((v1 + 784) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 784) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 784, v1 + 768);
    *(_DWORD *)(v1 + 784) = 44;
    std::pair<std::string,std::string>::pair<char const(&)[34],char const(&)[37],true>(
      (std::pair<std::string,std::string > *const)(v1 + 5232),
      (const char (*)[34])byte_1AD5EA60,
      (const char (*)[37])"GALLERY_TYPE_CHAR_AMUSE_RUN_ON_WATER");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 9744),
      (data::GalleryType *)(v1 + 784),
      (const std::pair<std::string,std::string > *)(v1 + 5232));
    if ( *(_BYTE *)(((v1 + 800) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 800) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 800, v1 + 784);
    *(_DWORD *)(v1 + 800) = 45;
    std::pair<std::string,std::string>::pair<char const(&)[28],char const(&)[34],true>(
      (std::pair<std::string,std::string > *const)(v1 + 5328),
      (const char (*)[28])byte_1AD5EAC0,
      (const char (*)[34])"GALLERY_TYPE_CHAR_AMUSE_BASE_BALL");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 9816),
      (data::GalleryType *)(v1 + 800),
      (const std::pair<std::string,std::string > *)(v1 + 5328));
    if ( *(_BYTE *)(((v1 + 816) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 816) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 816, v1 + 800);
    *(_DWORD *)(v1 + 816) = 46;
    std::pair<std::string,std::string>::pair<char const(&)[28],char const(&)[34],true>(
      (std::pair<std::string,std::string > *const)(v1 + 5424),
      (const char (*)[28])byte_1AD5EB00,
      (const char (*)[34])"GALLERY_TYPE_CHAR_AMUSE_FOOT_BALL");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 9888),
      (data::GalleryType *)(v1 + 816),
      (const std::pair<std::string,std::string > *)(v1 + 5424));
    if ( *(_BYTE *)(((v1 + 832) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 832) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 832, v1 + 816);
    *(_DWORD *)(v1 + 832) = 47;
    std::pair<std::string,std::string>::pair<char const(&)[28],char const(&)[35],true>(
      (std::pair<std::string,std::string > *const)(v1 + 5520),
      (const char (*)[28])byte_1AD5EB40,
      (const char (*)[35])"GALLERY_TYPE_CHAR_AMUSE_BRICK_WALL");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 9960),
      (data::GalleryType *)(v1 + 832),
      (const std::pair<std::string,std::string > *)(v1 + 5520));
    if ( *(_BYTE *)(((v1 + 848) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 848) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 848, v1 + 832);
    *(_DWORD *)(v1 + 848) = 48;
    std::pair<std::string,std::string>::pair<char const(&)[25],char const(&)[31],true>(
      (std::pair<std::string,std::string > *const)(v1 + 5616),
      (const char (*)[25])byte_1AD5EB80,
      (const char (*)[31])"GALLERY_TYPE_CHAR_AMUSE_BATTLE");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 10032),
      (data::GalleryType *)(v1 + 848),
      (const std::pair<std::string,std::string > *)(v1 + 5616));
    if ( *(_BYTE *)(((v1 + 864) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 864) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 864, v1 + 848);
    *(_DWORD *)(v1 + 864) = 49;
    std::pair<std::string,std::string>::pair<char const(&)[16],char const(&)[33],true>(
      (std::pair<std::string,std::string > *const)(v1 + 5712),
      (const char (*)[16])byte_1AD5EBC0,
      (const char (*)[33])"GALLERY_TYPE_EFFIGY_CHALLENGE_V2");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 10104),
      (data::GalleryType *)(v1 + 864),
      (const std::pair<std::string,std::string > *)(v1 + 5712));
    if ( *(_BYTE *)(((v1 + 880) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 880) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 880, v1 + 864);
    *(_DWORD *)(v1 + 880) = 50;
    std::pair<std::string,std::string>::pair<char const(&)[22],char const(&)[27],true>(
      (std::pair<std::string,std::string > *const)(v1 + 5808),
      (const char (*)[22])byte_1AD5EC00,
      (const char (*)[27])"GALLERY_TYPE_BRICK_BREAKER");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 10176),
      (data::GalleryType *)(v1 + 880),
      (const std::pair<std::string,std::string > *)(v1 + 5808));
    if ( *(_BYTE *)(((v1 + 896) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 896) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 896, v1 + 880);
    *(_DWORD *)(v1 + 896) = 51;
    std::pair<std::string,std::string>::pair<char const(&)[22],char const(&)[26],true>(
      (std::pair<std::string,std::string > *const)(v1 + 5904),
      (const char (*)[22])byte_1AD5EC40,
      (const char (*)[26])"GALLERY_TYPE_COIN_COLLECT");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 10248),
      (data::GalleryType *)(v1 + 896),
      (const std::pair<std::string,std::string > *)(v1 + 5904));
    if ( *(_BYTE *)(((v1 + 912) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 912) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 912, v1 + 896);
    *(_DWORD *)(v1 + 912) = 52;
    std::pair<std::string,std::string>::pair<char const(&)[16],char const(&)[36],true>(
      (std::pair<std::string,std::string > *const)(v1 + 6000),
      (const char (*)[16])byte_1AD5EC80,
      (const char (*)[36])"GALLERY_TYPE_ELECTROHERCULES_BATTLE");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 10320),
      (data::GalleryType *)(v1 + 912),
      (const std::pair<std::string,std::string > *)(v1 + 6000));
    if ( *(_BYTE *)(((v1 + 928) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 928) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 928, v1 + 912);
    *(_DWORD *)(v1 + 928) = 53;
    std::pair<std::string,std::string>::pair<char const(&)[25],char const(&)[36],true>(
      (std::pair<std::string,std::string > *const)(v1 + 6096),
      (const char (*)[25])byte_1AD5ECC0,
      (const char (*)[36])"GALLERY_TYPE_LANV3_BOAT_GAME_SINGLE");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 10392),
      (data::GalleryType *)(v1 + 928),
      (const std::pair<std::string,std::string > *)(v1 + 6096));
    if ( *(_BYTE *)(((v1 + 944) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 944) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 944, v1 + 928);
    *(_DWORD *)(v1 + 944) = 54;
    std::pair<std::string,std::string>::pair<char const(&)[31],char const(&)[35],true>(
      (std::pair<std::string,std::string > *const)(v1 + 6192),
      (const char (*)[31])byte_1AD5ED00,
      (const char (*)[35])"GALLERY_TYPE_LANV3_BOAT_GAME_MULTI");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 10464),
      (data::GalleryType *)(v1 + 944),
      (const std::pair<std::string,std::string > *)(v1 + 6192));
    if ( *(_BYTE *)(((v1 + 960) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 960) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 960, v1 + 944);
    *(_DWORD *)(v1 + 960) = 55;
    std::pair<std::string,std::string>::pair<char const(&)[22],char const(&)[24],true>(
      (std::pair<std::string,std::string > *const)(v1 + 6288),
      (const char (*)[22])byte_1AD5ED40,
      (const char (*)[24])"GALLERY_TYPE_TEAM_CHAIN");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 10536),
      (data::GalleryType *)(v1 + 960),
      (const std::pair<std::string,std::string > *)(v1 + 6288));
    if ( *(_BYTE *)(((v1 + 976) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 976) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 976, v1 + 960);
    *(_DWORD *)(v1 + 976) = 56;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[24],true>(
      (std::pair<std::string,std::string > *const)(v1 + 6384),
      (const char (*)[13])byte_1AD5ED80,
      (const char (*)[24])"GALLERY_TYPE_DUEL_HEART");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 10608),
      (data::GalleryType *)(v1 + 976),
      (const std::pair<std::string,std::string > *)(v1 + 6384));
    if ( *(_BYTE *)(((v1 + 992) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 992) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 992, v1 + 976);
    *(_DWORD *)(v1 + 992) = 57;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[24],true>(
      (std::pair<std::string,std::string > *const)(v1 + 6480),
      (const char (*)[19])byte_1AD5EDC0,
      (const char (*)[24])"GALLERY_TYPE_LANV3_RACE");
    std::pair<data::GalleryType const,std::pair<std::string,std::string>>::pair<data::GalleryType,true>(
      (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *const)(v1 + 10680),
      (data::GalleryType *)(v1 + 992),
      (const std::pair<std::string,std::string > *)(v1 + 6480));
    std::allocator<std::pair<data::GalleryType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::GalleryType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    std::map<data::GalleryType,std::pair<std::string,std::string>>::map(
      &data::getGalleryTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::GalleryType,std::pair<std::string,std::string > > >)__PAIR128__(58LL, v1 + 6576),
      (const std::less<data::GalleryType> *)(v1 + 48),
      (const std::map<data::GalleryType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getGalleryTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::GalleryType,std::pair<std::string,std::string>>::~map,
      &data::getGalleryTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::GalleryType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::GalleryType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *)(v1 + 10752);
          i != (std::pair<const data::GalleryType,std::pair<std::string,std::string > > *)(v1 + 6576);
          std::pair<data::GalleryType const,std::pair<std::string,std::string>>::~pair(i) )
    {
      --i;
    }
    __asan_poison_stack_memory(v1 + 6576, 4176LL);
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 6480));
    v5 = (_DWORD *)(((v1 + 6480) >> 3) + 2147450880);
    *v5 = -117901064;
    v5[1] = -117901064;
    *(_BYTE *)(((v1 + 992) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 6384));
    v6 = (_DWORD *)(((v1 + 6384) >> 3) + 2147450880);
    *v6 = -117901064;
    v6[1] = -117901064;
    *(_BYTE *)(((v1 + 976) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 6288));
    v7 = (_DWORD *)(((v1 + 6288) >> 3) + 2147450880);
    *v7 = -117901064;
    v7[1] = -117901064;
    *(_BYTE *)(((v1 + 960) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 6192));
    v8 = (_DWORD *)(((v1 + 6192) >> 3) + 2147450880);
    *v8 = -117901064;
    v8[1] = -117901064;
    *(_BYTE *)(((v1 + 944) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 6096));
    v9 = (_DWORD *)(((v1 + 6096) >> 3) + 2147450880);
    *v9 = -117901064;
    v9[1] = -117901064;
    *(_BYTE *)(((v1 + 928) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 6000));
    v10 = (_DWORD *)(((v1 + 6000) >> 3) + 2147450880);
    *v10 = -117901064;
    v10[1] = -117901064;
    *(_BYTE *)(((v1 + 912) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 5904));
    v11 = (_DWORD *)(((v1 + 5904) >> 3) + 2147450880);
    *v11 = -117901064;
    v11[1] = -117901064;
    *(_BYTE *)(((v1 + 896) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 5808));
    v12 = (_DWORD *)(((v1 + 5808) >> 3) + 2147450880);
    *v12 = -117901064;
    v12[1] = -117901064;
    *(_BYTE *)(((v1 + 880) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 5712));
    v13 = (_DWORD *)(((v1 + 5712) >> 3) + 2147450880);
    *v13 = -117901064;
    v13[1] = -117901064;
    *(_BYTE *)(((v1 + 864) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 5616));
    v14 = (_DWORD *)(((v1 + 5616) >> 3) + 2147450880);
    *v14 = -117901064;
    v14[1] = -117901064;
    *(_BYTE *)(((v1 + 848) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 5520));
    v15 = (_DWORD *)(((v1 + 5520) >> 3) + 2147450880);
    *v15 = -117901064;
    v15[1] = -117901064;
    *(_BYTE *)(((v1 + 832) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 5424));
    v16 = (_DWORD *)(((v1 + 5424) >> 3) + 2147450880);
    *v16 = -117901064;
    v16[1] = -117901064;
    *(_BYTE *)(((v1 + 816) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 5328));
    v17 = (_DWORD *)(((v1 + 5328) >> 3) + 2147450880);
    *v17 = -117901064;
    v17[1] = -117901064;
    *(_BYTE *)(((v1 + 800) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 5232));
    v18 = (_DWORD *)(((v1 + 5232) >> 3) + 2147450880);
    *v18 = -117901064;
    v18[1] = -117901064;
    *(_BYTE *)(((v1 + 784) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 5136));
    v19 = (_DWORD *)(((v1 + 5136) >> 3) + 2147450880);
    *v19 = -117901064;
    v19[1] = -117901064;
    *(_BYTE *)(((v1 + 768) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 5040));
    v20 = (_DWORD *)(((v1 + 5040) >> 3) + 2147450880);
    *v20 = -117901064;
    v20[1] = -117901064;
    *(_BYTE *)(((v1 + 752) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 4944));
    v21 = (_DWORD *)(((v1 + 4944) >> 3) + 2147450880);
    *v21 = -117901064;
    v21[1] = -117901064;
    *(_BYTE *)(((v1 + 736) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 4848));
    v22 = (_DWORD *)(((v1 + 4848) >> 3) + 2147450880);
    *v22 = -117901064;
    v22[1] = -117901064;
    *(_BYTE *)(((v1 + 720) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 4752));
    v23 = (_DWORD *)(((v1 + 4752) >> 3) + 2147450880);
    *v23 = -117901064;
    v23[1] = -117901064;
    *(_BYTE *)(((v1 + 704) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 4656));
    v24 = (_DWORD *)(((v1 + 4656) >> 3) + 2147450880);
    *v24 = -117901064;
    v24[1] = -117901064;
    *(_BYTE *)(((v1 + 688) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 4560));
    v25 = (_DWORD *)(((v1 + 4560) >> 3) + 2147450880);
    *v25 = -117901064;
    v25[1] = -117901064;
    *(_BYTE *)(((v1 + 672) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 4464));
    v26 = (_DWORD *)(((v1 + 4464) >> 3) + 2147450880);
    *v26 = -117901064;
    v26[1] = -117901064;
    *(_BYTE *)(((v1 + 656) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 4368));
    v27 = (_DWORD *)(((v1 + 4368) >> 3) + 2147450880);
    *v27 = -117901064;
    v27[1] = -117901064;
    *(_BYTE *)(((v1 + 640) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 4272));
    v28 = (_DWORD *)(((v1 + 4272) >> 3) + 2147450880);
    *v28 = -117901064;
    v28[1] = -117901064;
    *(_BYTE *)(((v1 + 624) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 4176));
    v29 = (_DWORD *)(((v1 + 4176) >> 3) + 2147450880);
    *v29 = -117901064;
    v29[1] = -117901064;
    *(_BYTE *)(((v1 + 608) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 4080));
    v30 = (_DWORD *)(((v1 + 4080) >> 3) + 2147450880);
    *v30 = -117901064;
    v30[1] = -117901064;
    *(_BYTE *)(((v1 + 592) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 3984));
    v31 = (_DWORD *)(((v1 + 3984) >> 3) + 2147450880);
    *v31 = -117901064;
    v31[1] = -117901064;
    *(_BYTE *)(((v1 + 576) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 3888));
    v32 = (_DWORD *)(((v1 + 3888) >> 3) + 2147450880);
    *v32 = -117901064;
    v32[1] = -117901064;
    *(_BYTE *)(((v1 + 560) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 3792));
    v33 = (_DWORD *)(((v1 + 3792) >> 3) + 2147450880);
    *v33 = -117901064;
    v33[1] = -117901064;
    *(_BYTE *)(((v1 + 544) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 3696));
    v34 = (_DWORD *)(((v1 + 3696) >> 3) + 2147450880);
    *v34 = -117901064;
    v34[1] = -117901064;
    *(_BYTE *)(((v1 + 528) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 3600));
    v35 = (_DWORD *)(((v1 + 3600) >> 3) + 2147450880);
    *v35 = -117901064;
    v35[1] = -117901064;
    *(_BYTE *)(((v1 + 512) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 3504));
    v36 = (_DWORD *)(((v1 + 3504) >> 3) + 2147450880);
    *v36 = -117901064;
    v36[1] = -117901064;
    *(_BYTE *)(((v1 + 496) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 3408));
    v37 = (_DWORD *)(((v1 + 3408) >> 3) + 2147450880);
    *v37 = -117901064;
    v37[1] = -117901064;
    *(_BYTE *)(((v1 + 480) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 3312));
    v38 = (_DWORD *)(((v1 + 3312) >> 3) + 2147450880);
    *v38 = -117901064;
    v38[1] = -117901064;
    *(_BYTE *)(((v1 + 464) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 3216));
    v39 = (_DWORD *)(((v1 + 3216) >> 3) + 2147450880);
    *v39 = -117901064;
    v39[1] = -117901064;
    *(_BYTE *)(((v1 + 448) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 3120));
    v40 = (_DWORD *)(((v1 + 3120) >> 3) + 2147450880);
    *v40 = -117901064;
    v40[1] = -117901064;
    *(_BYTE *)(((v1 + 432) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 3024));
    v41 = (_DWORD *)(((v1 + 3024) >> 3) + 2147450880);
    *v41 = -117901064;
    v41[1] = -117901064;
    *(_BYTE *)(((v1 + 416) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2928));
    v42 = (_DWORD *)(((v1 + 2928) >> 3) + 2147450880);
    *v42 = -117901064;
    v42[1] = -117901064;
    *(_BYTE *)(((v1 + 400) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2832));
    v43 = (_DWORD *)(((v1 + 2832) >> 3) + 2147450880);
    *v43 = -117901064;
    v43[1] = -117901064;
    *(_BYTE *)(((v1 + 384) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2736));
    v44 = (_DWORD *)(((v1 + 2736) >> 3) + 2147450880);
    *v44 = -117901064;
    v44[1] = -117901064;
    *(_BYTE *)(((v1 + 368) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2640));
    v45 = (_DWORD *)(((v1 + 2640) >> 3) + 2147450880);
    *v45 = -117901064;
    v45[1] = -117901064;
    *(_BYTE *)(((v1 + 352) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2544));
    v46 = (_DWORD *)(((v1 + 2544) >> 3) + 2147450880);
    *v46 = -117901064;
    v46[1] = -117901064;
    *(_BYTE *)(((v1 + 336) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2448));
    v47 = (_DWORD *)(((v1 + 2448) >> 3) + 2147450880);
    *v47 = -117901064;
    v47[1] = -117901064;
    *(_BYTE *)(((v1 + 320) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2352));
    v48 = (_DWORD *)(((v1 + 2352) >> 3) + 2147450880);
    *v48 = -117901064;
    v48[1] = -117901064;
    *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2256));
    v49 = (_DWORD *)(((v1 + 2256) >> 3) + 2147450880);
    *v49 = -117901064;
    v49[1] = -117901064;
    *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2160));
    v50 = (_DWORD *)(((v1 + 2160) >> 3) + 2147450880);
    *v50 = -117901064;
    v50[1] = -117901064;
    *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2064));
    v51 = (_DWORD *)(((v1 + 2064) >> 3) + 2147450880);
    *v51 = -117901064;
    v51[1] = -117901064;
    *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1968));
    v52 = (_DWORD *)(((v1 + 1968) >> 3) + 2147450880);
    *v52 = -117901064;
    v52[1] = -117901064;
    *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1872));
    v53 = (_DWORD *)(((v1 + 1872) >> 3) + 2147450880);
    *v53 = -117901064;
    v53[1] = -117901064;
    *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1776));
    v54 = (_DWORD *)(((v1 + 1776) >> 3) + 2147450880);
    *v54 = -117901064;
    v54[1] = -117901064;
    *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1680));
    v55 = (_DWORD *)(((v1 + 1680) >> 3) + 2147450880);
    *v55 = -117901064;
    v55[1] = -117901064;
    *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1584));
    v56 = (_DWORD *)(((v1 + 1584) >> 3) + 2147450880);
    *v56 = -117901064;
    v56[1] = -117901064;
    *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1488));
    v57 = (_DWORD *)(((v1 + 1488) >> 3) + 2147450880);
    *v57 = -117901064;
    v57[1] = -117901064;
    *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1392));
    v58 = (_DWORD *)(((v1 + 1392) >> 3) + 2147450880);
    *v58 = -117901064;
    v58[1] = -117901064;
    *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1296));
    v59 = (_DWORD *)(((v1 + 1296) >> 3) + 2147450880);
    *v59 = -117901064;
    v59[1] = -117901064;
    *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1200));
    v60 = (_DWORD *)(((v1 + 1200) >> 3) + 2147450880);
    *v60 = -117901064;
    v60[1] = -117901064;
    *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1104));
    v61 = (_DWORD *)(((v1 + 1104) >> 3) + 2147450880);
    *v61 = -117901064;
    v61[1] = -117901064;
    *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1008));
  }
  if ( v63 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8558) = 0LL;
    memset(
      (void *)((unsigned __int64)(v3 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v3 + 2147450880 - (((_DWORD)v3 + 2147450888) & 0xFFFFFFF8) + 1376) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    __asan_stack_free_8(v1, 11008LL, v63);
  }
  return &data::getGalleryTypeEnumMap[abi:cxx11](void)::m;
};

// Line 274: range 00000000143CB592-00000000143D2367
int32_t __cdecl data::GalleryExcelConfig::init(
        data::GalleryExcelConfig *const this,
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
  std::string *v11; // rbx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  bool v15; // bl
  common::milog::MiLogStream *v16; // rax
  bool v17; // bl
  common::milog::MiLogStream *v18; // rax
  bool v19; // bl
  common::milog::MiLogStream *v20; // rax
  bool v21; // bl
  common::milog::MiLogStream *v22; // rax
  bool v23; // bl
  common::milog::MiLogStream *v24; // rax
  bool v25; // bl
  common::milog::MiLogStream *v26; // rax
  bool v27; // bl
  common::milog::MiLogStream *v28; // rax
  bool v29; // bl
  common::milog::MiLogStream *v30; // rax
  bool v31; // bl
  common::milog::MiLogStream *v32; // rax
  unsigned __int64 v33; // rax
  _DWORD *v34; // rax
  bool v35; // r12
  unsigned __int64 v36; // rax
  char *j; // rbx
  _DWORD *v38; // rax
  common::milog::MiLogStream *v39; // rax
  bool v40; // bl
  common::milog::MiLogStream *v41; // rax
  bool v42; // bl
  common::milog::MiLogStream *v43; // rax
  bool v44; // bl
  common::milog::MiLogStream *v45; // rax
  bool v46; // bl
  common::milog::MiLogStream *v47; // rax
  bool v48; // bl
  common::milog::MiLogStream *v49; // rax
  unsigned __int64 v50; // rax
  _DWORD *v51; // rax
  bool v52; // r12
  unsigned __int64 v53; // rax
  char *k; // rbx
  _DWORD *v55; // rax
  common::milog::MiLogStream *v56; // rax
  bool v57; // bl
  common::milog::MiLogStream *v58; // rax
  bool v59; // bl
  common::milog::MiLogStream *v60; // rax
  bool v61; // bl
  common::milog::MiLogStream *v62; // rax
  unsigned __int64 v63; // rax
  _DWORD *v64; // rax
  bool v65; // r12
  unsigned __int64 v66; // rax
  char *m; // rbx
  _DWORD *v68; // rax
  common::milog::MiLogStream *v69; // rax
  bool v70; // bl
  common::milog::MiLogStream *v71; // rax
  bool v72; // bl
  common::milog::MiLogStream *v73; // rax
  unsigned __int64 v74; // rax
  _DWORD *v75; // rax
  bool v76; // r12
  unsigned __int64 v77; // rax
  char *n; // rbx
  _DWORD *v79; // rax
  common::milog::MiLogStream *v80; // rax
  bool v81; // bl
  common::milog::MiLogStream *v82; // rax
  unsigned __int64 v83; // rax
  _DWORD *v84; // rax
  bool v85; // r12
  unsigned __int64 v86; // rax
  char *ii; // rbx
  _DWORD *v88; // rax
  common::milog::MiLogStream *v89; // rax
  bool v90; // bl
  common::milog::MiLogStream *v91; // rax
  unsigned __int64 v92; // rax
  _DWORD *v93; // rax
  bool v94; // r12
  unsigned __int64 v95; // rax
  char *jj; // rbx
  _DWORD *v97; // rax
  common::milog::MiLogStream *v98; // rax
  bool v99; // bl
  common::milog::MiLogStream *v100; // rax
  unsigned __int64 v101; // rax
  _DWORD *v102; // rax
  bool v103; // r12
  unsigned __int64 v104; // rax
  char *kk; // rbx
  _DWORD *v106; // rax
  common::milog::MiLogStream *v107; // rax
  bool v108; // bl
  common::milog::MiLogStream *v109; // rax
  bool v110; // bl
  common::milog::MiLogStream *v111; // rax
  unsigned __int64 v112; // rax
  _DWORD *v113; // rax
  bool v114; // r12
  unsigned __int64 v115; // rax
  char *mm; // rbx
  _DWORD *v117; // rax
  common::milog::MiLogStream *v118; // rax
  std::initializer_list<std::string > __l; // [rsp+10h] [rbp-1A70h]
  std::initializer_list<std::string > v121; // [rsp+20h] [rbp-1A60h]
  std::initializer_list<std::string > v122; // [rsp+30h] [rbp-1A50h]
  std::initializer_list<std::string > v123; // [rsp+40h] [rbp-1A40h]
  std::initializer_list<std::string > v124; // [rsp+50h] [rbp-1A30h]
  std::initializer_list<std::string > v125; // [rsp+60h] [rbp-1A20h]
  std::initializer_list<std::string > v126; // [rsp+70h] [rbp-1A10h]
  std::initializer_list<std::string > v127; // [rsp+80h] [rbp-1A00h]
  uint32_t array_count; // [rsp+A8h] [rbp-19D8h]
  uint32_t i; // [rsp+ACh] [rbp-19D4h]
  char v130[6608]; // [rsp+B0h] [rbp-19D0h] BYREF

  v2 = (unsigned __int64)v130;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_7(6560LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "133 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9"
                        " <unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unkn"
                        "own> 208 1 9 <unknown> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 2"
                        "88 1 9 <unknown> 304 1 9 <unknown> 320 1 9 <unknown> 336 1 9 <unknown> 352 1 9 <unknown> 368 1 9"
                        " <unknown> 384 1 9 <unknown> 400 1 9 <unknown> 416 1 9 <unknown> 432 1 9 <unknown> 448 1 9 <unkn"
                        "own> 464 1 9 <unknown> 480 1 9 <unknown> 496 1 9 <unknown> 512 1 9 <unknown> 528 1 9 <unknown> 5"
                        "44 1 9 <unknown> 560 1 9 <unknown> 576 1 9 <unknown> 592 1 9 <unknown> 608 1 9 <unknown> 624 1 9"
                        " <unknown> 640 1 9 <unknown> 656 1 9 <unknown> 672 1 9 <unknown> 688 1 9 <unknown> 704 1 9 <unkn"
                        "own> 720 1 9 <unknown> 736 1 9 <unknown> 752 1 9 <unknown> 768 1 9 <unknown> 784 1 9 <unknown> 8"
                        "00 1 9 <unknown> 816 1 9 <unknown> 832 1 9 <unknown> 848 1 9 <unknown> 864 24 9 <unknown> 928 24"
                        " 9 <unknown> 992 24 9 <unknown> 1056 24 9 <unknown> 1120 24 9 <unknown> 1184 24 9 <unknown> 1248"
                        " 24 9 <unknown> 1312 24 9 <unknown> 1376 32 11 val_str:277 1440 32 9 <unknown> 1504 32 9 <unknow"
                        "n> 1568 32 9 <unknown> 1632 32 9 <unknown> 1696 32 9 <unknown> 1760 32 9 <unknown> 1824 32 9 <un"
                        "known> 1888 32 9 <unknown> 1952 32 9 <unknown> 2016 32 9 <unknown> 2080 32 9 <unknown> 2144 32 9"
                        " <unknown> 2208 32 9 <unknown> 2272 32 9 <unknown> 2336 32 9 <unknown> 2400 32 9 <unknown> 2464 "
                        "32 9 <unknown> 2528 32 9 <unknown> 2592 32 9 <unknown> 2656 32 9 <unknown> 2720 32 9 <unknown> 2"
                        "784 32 9 <unknown> 2848 32 9 <unknown> 2912 32 9 <unknown> 2976 32 9 <unknown> 3040 32 9 <unknow"
                        "n> 3104 32 9 <unknown> 3168 32 9 <unknown> 3232 32 9 <unknown> 3296 32 9 <unknown> 3360 32 9 <un"
                        "known> 3424 32 9 <unknown> 3488 32 9 <unknown> 3552 32 9 <unknown> 3616 32 9 <unknown> 3680 32 9"
                        " <unknown> 3744 32 9 <unknown> 3808 32 9 <unknown> 3872 32 9 <unknown> 3936 32 9 <unknown> 4000 "
                        "32 9 <unknown> 4064 32 9 <unknown> 4128 32 9 <unknown> 4192 32 9 <unknown> 4256 32 9 <unknown> 4"
                        "320 32 9 <unknown> 4384 32 9 <unknown> 4448 32 9 <unknown> 4512 32 9 <unknown> 4576 32 9 <unknow"
                        "n> 4640 32 9 <unknown> 4704 32 9 <unknown> 4768 32 9 <unknown> 4832 32 9 <unknown> 4896 32 9 <un"
                        "known> 4960 32 9 <unknown> 5024 32 9 <unknown> 5088 32 9 <unknown> 5152 32 9 <unknown> 5216 32 9"
                        " <unknown> 5280 32 9 <unknown> 5344 32 9 <unknown> 5408 32 9 <unknown> 5472 64 9 <unknown> 5568 "
                        "64 9 <unknown> 5664 64 9 <unknown> 5760 64 9 <unknown> 5856 64 9 <unknown> 5952 64 9 <unknown> 6"
                        "048 64 9 <unknown> 6144 64 9 <unknown> 6240 256 12 col_name:275";
  *(_QWORD *)(v2 + 16) = data::GalleryExcelConfig::init;
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
  v4[536862744] = -234753535;
  v4[536862745] = -234753535;
  v4[536862746] = -234753535;
  v4[536862747] = -234881024;
  v4[536862748] = -218959118;
  v4[536862749] = -234881024;
  v4[536862750] = -218959118;
  v4[536862751] = -234881024;
  v4[536862752] = -218959118;
  v4[536862753] = -234881024;
  v4[536862754] = -218959118;
  v4[536862755] = -234881024;
  v4[536862756] = -218959118;
  v4[536862757] = -234881024;
  v4[536862758] = -218959118;
  v4[536862759] = -234881024;
  v4[536862760] = -218959118;
  v4[536862761] = -234881024;
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
  v4[536862893] = -218959118;
  v4[536862896] = -218959118;
  v4[536862899] = -218959118;
  v4[536862902] = -218959118;
  v4[536862905] = -218959118;
  v4[536862908] = -218959118;
  v4[536862911] = -218959118;
  v4[536862914] = -218959118;
  v4[536862923] = -202116109;
  v4[536862924] = -202116109;
  std::string::basic_string(v2 + 1376);
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 1440),
    &byte_1AD61600,
    (const std::allocator<char> *)(v2 + 32));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 1440), &this->id) != 0;
  std::string::~string((void *)(v2 + 1440));
  *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
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
      "./src/txt_data_auto/GalleryExcelConfig.gen.cpp",
      "init",
      280);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 1504),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v6, (const char (*)[29])byte_1AD61640);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1504));
    *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 1568),
      &byte_1AD3FD80,
      (const std::allocator<char> *)(v2 + 48));
    v8 = common::tools::TxtFile::Row::assignToEnum<data::GalleryType>(
           row,
           (const std::string *)(v2 + 1568),
           &this->type) != 0;
    std::string::~string((void *)(v2 + 1568));
    *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
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
        "./src/txt_data_auto/GalleryExcelConfig.gen.cpp",
        "init",
        285);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 1632),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v9, (const char (*)[27])byte_1AD3FDC0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1632));
      *(_DWORD *)(((v2 + 1632) >> 3) + 0x7FFF8000) = -117901064;
      v7 = -1;
    }
    else
    {
      std::vector<std::string>::resize(&this->param, 4uLL);
      array_count = 0;
      for ( i = 0; i <= 3; ++i )
      {
        snprintf((char *)(v2 + 6240), 0x100uLL, &byte_1AD3A020, i + 1);
        *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 64);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 1696),
          (const char *)(v2 + 6240),
          (const std::allocator<char> *)(v2 + 64));
        v10 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 1696));
        std::string::~string((void *)(v2 + 1696));
        *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 64);
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
        if ( !v10 )
        {
          v11 = std::vector<std::string>::operator[](&this->param, i);
          *(_DWORD *)(((v2 + 1760) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 80);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1760),
            (const char *)(v2 + 6240),
            (const std::allocator<char> *)(v2 + 80));
          LOBYTE(v11) = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 1760), v11) != 0;
          std::string::~string((void *)(v2 + 1760));
          *(_DWORD *)(((v2 + 1760) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 80);
          *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
          if ( (_BYTE)v11 )
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
              "./src/txt_data_auto/GalleryExcelConfig.gen.cpp",
              "init",
              297);
            v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 1824),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v12,
                    (const char (*)[14])byte_1AD38B80);
            v14 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                    v13,
                    (const char (*)[256])(v2 + 6240));
            common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])byte_1AD38BC0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1824));
            *(_DWORD *)(((v2 + 1824) >> 3) + 0x7FFF8000) = -117901064;
            v7 = -1;
            goto LABEL_174;
          }
          array_count = i + 1;
        }
      }
      std::vector<std::string>::resize(&this->param, array_count);
      *(_DWORD *)(((v2 + 1888) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 96);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 1888),
        &byte_1AD61680,
        (const std::allocator<char> *)(v2 + 96));
      v15 = common::tools::TxtFile::Row::assignToNum<bool>(
              row,
              (const std::string *)(v2 + 1888),
              &this->is_enable_single_prepare) != 0;
      std::string::~string((void *)(v2 + 1888));
      *(_DWORD *)(((v2 + 1888) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 96);
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      if ( v15 )
      {
        *(_DWORD *)(((v2 + 1952) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 1952) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 1983) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 1983) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 1952, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 1952),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_auto/GalleryExcelConfig.gen.cpp",
          "init",
          306);
        v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 1952),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v16, (const char (*)[48])byte_1AD616C0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1952));
        *(_DWORD *)(((v2 + 1952) >> 3) + 0x7FFF8000) = -117901064;
        v7 = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 2016) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 112);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 2016),
          &byte_1AD61720,
          (const std::allocator<char> *)(v2 + 112));
        v17 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                row,
                (const std::string *)(v2 + 2016),
                &this->single_prepare_time) != 0;
        std::string::~string((void *)(v2 + 2016));
        *(_DWORD *)(((v2 + 2016) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 112);
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
        if ( v17 )
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
            "./src/txt_data_auto/GalleryExcelConfig.gen.cpp",
            "init",
            311);
          v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 2080),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v18, (const char (*)[42])byte_1AD61760);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2080));
          *(_DWORD *)(((v2 + 2080) >> 3) + 0x7FFF8000) = -117901064;
          v7 = -1;
        }
        else
        {
          *(_DWORD *)(((v2 + 2144) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 128);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 2144),
            &byte_1AD617C0,
            (const std::allocator<char> *)(v2 + 128));
          v19 = common::tools::TxtFile::Row::assignToNum<bool>(
                  row,
                  (const std::string *)(v2 + 2144),
                  &this->is_enable_mp_prepare) != 0;
          std::string::~string((void *)(v2 + 2144));
          *(_DWORD *)(((v2 + 2144) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 128);
          *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
          if ( v19 )
          {
            *(_DWORD *)(((v2 + 2208) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 2208) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 2239) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 2239) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 2208, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 2208),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_auto/GalleryExcelConfig.gen.cpp",
              "init",
              316);
            v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 2208),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v20, (const char (*)[48])byte_1AD61800);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2208));
            *(_DWORD *)(((v2 + 2208) >> 3) + 0x7FFF8000) = -117901064;
            v7 = -1;
          }
          else
          {
            *(_DWORD *)(((v2 + 2272) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 144);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 2272),
              &byte_1AD61860,
              (const std::allocator<char> *)(v2 + 144));
            v21 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                    row,
                    (const std::string *)(v2 + 2272),
                    &this->mp_prepare_time) != 0;
            std::string::~string((void *)(v2 + 2272));
            *(_DWORD *)(((v2 + 2272) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 144);
            *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
            if ( v21 )
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
                "./src/txt_data_auto/GalleryExcelConfig.gen.cpp",
                "init",
                321);
              v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 2336),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v22, (const char (*)[42])byte_1AD618A0);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2336));
              *(_DWORD *)(((v2 + 2336) >> 3) + 0x7FFF8000) = -117901064;
              v7 = -1;
            }
            else
            {
              *(_DWORD *)(((v2 + 2400) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 160);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 2400),
                &byte_1AD61900,
                (const std::allocator<char> *)(v2 + 160));
              v23 = common::tools::TxtFile::Row::assignToNum<bool>(
                      row,
                      (const std::string *)(v2 + 2400),
                      &this->is_permit_input_in_prepare) != 0;
              std::string::~string((void *)(v2 + 2400));
              *(_DWORD *)(((v2 + 2400) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 160);
              *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
              if ( v23 )
              {
                *(_DWORD *)(((v2 + 2464) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 2464) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 2495) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 2495) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 2464, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 2464),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_auto/GalleryExcelConfig.gen.cpp",
                  "init",
                  326);
                v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 2464),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(v24, (const char (*)[72])byte_1AD61960);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2464));
                *(_DWORD *)(((v2 + 2464) >> 3) + 0x7FFF8000) = -117901064;
                v7 = -1;
              }
              else
              {
                *(_DWORD *)(((v2 + 2528) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 176);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 2528),
                  &byte_1AD619E0,
                  (const std::allocator<char> *)(v2 + 176));
                v25 = common::tools::TxtFile::Row::assignToNum<bool>(
                        row,
                        (const std::string *)(v2 + 2528),
                        &this->can_interrupt_by_client) != 0;
                std::string::~string((void *)(v2 + 2528));
                *(_DWORD *)(((v2 + 2528) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 176);
                *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                if ( v25 )
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
                    "./src/txt_data_auto/GalleryExcelConfig.gen.cpp",
                    "init",
                    331);
                  v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 2592),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                    v26,
                    (const char (*)[45])byte_1AD61A20);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2592));
                  *(_DWORD *)(((v2 + 2592) >> 3) + 0x7FFF8000) = -117901064;
                  v7 = -1;
                }
                else
                {
                  *(_DWORD *)(((v2 + 2656) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 192);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 2656),
                    "SceneID",
                    (const std::allocator<char> *)(v2 + 192));
                  v27 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                          row,
                          (const std::string *)(v2 + 2656),
                          &this->scene_id) != 0;
                  std::string::~string((void *)(v2 + 2656));
                  *(_DWORD *)(((v2 + 2656) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 192);
                  *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                  if ( v27 )
                  {
                    *(_DWORD *)(((v2 + 2720) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 2720) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 2751) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 2751) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 2720, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 2720),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_auto/GalleryExcelConfig.gen.cpp",
                      "init",
                      336);
                    v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 2720),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                      v28,
                      (const char (*)[28])byte_1AD61AC0);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2720));
                    *(_DWORD *)(((v2 + 2720) >> 3) + 0x7FFF8000) = -117901064;
                    v7 = -1;
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 2784) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 208);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 2784),
                      &byte_1AD61B00,
                      (const std::allocator<char> *)(v2 + 208));
                    v29 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                            row,
                            (const std::string *)(v2 + 2784),
                            &this->control_group_id) != 0;
                    std::string::~string((void *)(v2 + 2784));
                    *(_DWORD *)(((v2 + 2784) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 208);
                    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                    if ( v29 )
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
                        "./src/txt_data_auto/GalleryExcelConfig.gen.cpp",
                        "init",
                        341);
                      v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 2848),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                        v30,
                        (const char (*)[34])byte_1AD61B40);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2848));
                      *(_DWORD *)(((v2 + 2848) >> 3) + 0x7FFF8000) = -117901064;
                      v7 = -1;
                    }
                    else
                    {
                      *(_DWORD *)(((v2 + 2912) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 224);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 2912),
                        "GroupID",
                        (const std::allocator<char> *)(v2 + 224));
                      v31 = common::tools::TxtFile::Row::assignToStr(
                              row,
                              (const std::string *)(v2 + 2912),
                              (std::string *)(v2 + 1376)) != 0;
                      std::string::~string((void *)(v2 + 2912));
                      *(_DWORD *)(((v2 + 2912) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 224);
                      *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                      if ( v31 )
                      {
                        *(_DWORD *)(((v2 + 2976) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v2 + 2976) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v2 + 3007) >> 3) + 0x7FFF8000) != 0
                          && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 3007) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v2 + 2976, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v2 + 2976),
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/txt_data_auto/GalleryExcelConfig.gen.cpp",
                          "init",
                          346);
                        v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                (common::milog::MiLogStream *const)(v2 + 2976),
                                (const char (*)[16])"[CONFIG_ERROR] ");
                        common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                          v32,
                          (const char (*)[28])byte_1AD61BE0);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2976));
                        *(_DWORD *)(((v2 + 2976) >> 3) + 0x7FFF8000) = -117901064;
                        v7 = -1;
                      }
                      else
                      {
                        v33 = ((v2 + 864) >> 3) + 2147450880;
                        *(_WORD *)v33 = 0;
                        *(_BYTE *)(v33 + 2) = 0;
                        v34 = (_DWORD *)(((v2 + 5472) >> 3) + 2147450880);
                        *v34 = 0;
                        v34[1] = 0;
                        *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 240);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 5472),
                          ";",
                          (const std::allocator<char> *)(v2 + 240));
                        *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 256);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 5504),
                          ",",
                          (const std::allocator<char> *)(v2 + 256));
                        __l._M_array = (std::initializer_list<std::string >::iterator)(v2 + 5472);
                        __l._M_len = 2LL;
                        *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 272));
                        std::vector<std::string>::vector(
                          (std::vector<std::string> *const)(v2 + 864),
                          __l,
                          (const std::vector<std::string>::allocator_type *)(v2 + 272));
                        v35 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                                (const std::string *)(v2 + 1376),
                                (const std::vector<std::string> *)(v2 + 864),
                                &this->group_id,
                                1) != 0;
                        std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 864));
                        v36 = ((v2 + 864) >> 3) + 2147450880;
                        *(_WORD *)v36 = -1800;
                        *(_BYTE *)(v36 + 2) = -8;
                        std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 272));
                        *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                        for ( j = (char *)(v2 + 5536); j != (char *)(v2 + 5472); std::string::~string(j) )
                          j -= 32;
                        v38 = (_DWORD *)(((v2 + 5472) >> 3) + 2147450880);
                        *v38 = -117901064;
                        v38[1] = -117901064;
                        std::allocator<char>::~allocator(v2 + 256);
                        *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                        std::allocator<char>::~allocator(v2 + 240);
                        *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                        if ( v35 )
                        {
                          *(_DWORD *)(((v2 + 3040) >> 3) + 0x7FFF8000) = 0;
                          if ( *(char *)(((v2 + 3040) >> 3) + 0x7FFF8000) < 0
                            || *(_BYTE *)(((v2 + 3071) >> 3) + 0x7FFF8000) != 0
                            && (char)((v2 - 96 + 95) & 7) >= *(_BYTE *)(((v2 + 3071) >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_store_n(v2 + 3040, 32LL);
                          }
                          common::milog::MiLogStream::create(
                            (common::milog::MiLogStream *)(v2 + 3040),
                            &common::milog::MiLogDefault::default_log_obj_,
                            4u,
                            "./src/txt_data_auto/GalleryExcelConfig.gen.cpp",
                            "init",
                            351);
                          v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                  (common::milog::MiLogStream *const)(v2 + 3040),
                                  (const char (*)[16])"[CONFIG_ERROR] ");
                          common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                            v39,
                            (const char (*)[28])byte_1AD61BE0);
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3040));
                          *(_DWORD *)(((v2 + 3040) >> 3) + 0x7FFF8000) = -117901064;
                          v7 = -1;
                        }
                        else
                        {
                          *(_DWORD *)(((v2 + 3104) >> 3) + 0x7FFF8000) = 0;
                          *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 1;
                          std::allocator<char>::allocator(v2 + 288);
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)(v2 + 3104),
                            aGroup_14,
                            (const std::allocator<char> *)(v2 + 288));
                          v40 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                  row,
                                  (const std::string *)(v2 + 3104),
                                  &this->group_furniture_id) != 0;
                          std::string::~string((void *)(v2 + 3104));
                          *(_DWORD *)(((v2 + 3104) >> 3) + 0x7FFF8000) = -117901064;
                          std::allocator<char>::~allocator(v2 + 288);
                          *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
                          if ( v40 )
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
                              "./src/txt_data_auto/GalleryExcelConfig.gen.cpp",
                              "init",
                              356);
                            v41 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                    (common::milog::MiLogStream *const)(v2 + 3168),
                                    (const char (*)[16])"[CONFIG_ERROR] ");
                            common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                              v41,
                              (const char (*)[34])byte_1AD61C60);
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3168));
                            *(_DWORD *)(((v2 + 3168) >> 3) + 0x7FFF8000) = -117901064;
                            v7 = -1;
                          }
                          else
                          {
                            *(_DWORD *)(((v2 + 3232) >> 3) + 0x7FFF8000) = 0;
                            *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 1;
                            std::allocator<char>::allocator(v2 + 304);
                            std::string::basic_string<std::allocator<char>>(
                              (std::string *const)(v2 + 3232),
                              &byte_1AD61CC0,
                              (const std::allocator<char> *)(v2 + 304));
                            v42 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                    row,
                                    (const std::string *)(v2 + 3232),
                                    &this->revive_point_group_id) != 0;
                            std::string::~string((void *)(v2 + 3232));
                            *(_DWORD *)(((v2 + 3232) >> 3) + 0x7FFF8000) = -117901064;
                            std::allocator<char>::~allocator(v2 + 304);
                            *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
                            if ( v42 )
                            {
                              *(_DWORD *)(((v2 + 3296) >> 3) + 0x7FFF8000) = 0;
                              if ( *(char *)(((v2 + 3296) >> 3) + 0x7FFF8000) < 0
                                || *(_BYTE *)(((v2 + 3327) >> 3) + 0x7FFF8000) != 0
                                && (char)((v2 - 96 + 95) & 7) >= *(_BYTE *)(((v2 + 3327) >> 3) + 0x7FFF8000) )
                              {
                                __asan_report_store_n(v2 + 3296, 32LL);
                              }
                              common::milog::MiLogStream::create(
                                (common::milog::MiLogStream *)(v2 + 3296),
                                &common::milog::MiLogDefault::default_log_obj_,
                                4u,
                                "./src/txt_data_auto/GalleryExcelConfig.gen.cpp",
                                "init",
                                361);
                              v43 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                      (common::milog::MiLogStream *const)(v2 + 3296),
                                      (const char (*)[16])"[CONFIG_ERROR] ");
                              common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                                v43,
                                (const char (*)[37])byte_1AD61D00);
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3296));
                              *(_DWORD *)(((v2 + 3296) >> 3) + 0x7FFF8000) = -117901064;
                              v7 = -1;
                            }
                            else
                            {
                              *(_DWORD *)(((v2 + 3360) >> 3) + 0x7FFF8000) = 0;
                              *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 1;
                              std::allocator<char>::allocator(v2 + 320);
                              std::string::basic_string<std::allocator<char>>(
                                (std::string *const)(v2 + 3360),
                                &byte_1AD61D60,
                                (const std::allocator<char> *)(v2 + 320));
                              v44 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                      row,
                                      (const std::string *)(v2 + 3360),
                                      &this->revive_point_config_id) != 0;
                              std::string::~string((void *)(v2 + 3360));
                              *(_DWORD *)(((v2 + 3360) >> 3) + 0x7FFF8000) = -117901064;
                              std::allocator<char>::~allocator(v2 + 320);
                              *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
                              if ( v44 )
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
                                  "./src/txt_data_auto/GalleryExcelConfig.gen.cpp",
                                  "init",
                                  366);
                                v45 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                        (common::milog::MiLogStream *const)(v2 + 3424),
                                        (const char (*)[16])"[CONFIG_ERROR] ");
                                common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                                  v45,
                                  (const char (*)[38])byte_1AD61DA0);
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3424));
                                *(_DWORD *)(((v2 + 3424) >> 3) + 0x7FFF8000) = -117901064;
                                v7 = -1;
                              }
                              else
                              {
                                *(_DWORD *)(((v2 + 3488) >> 3) + 0x7FFF8000) = 0;
                                *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 1;
                                std::allocator<char>::allocator(v2 + 336);
                                std::string::basic_string<std::allocator<char>>(
                                  (std::string *const)(v2 + 3488),
                                  "ability_group",
                                  (const std::allocator<char> *)(v2 + 336));
                                v46 = common::tools::TxtFile::Row::assignToStr(
                                        row,
                                        (const std::string *)(v2 + 3488),
                                        &this->ability_group) != 0;
                                std::string::~string((void *)(v2 + 3488));
                                *(_DWORD *)(((v2 + 3488) >> 3) + 0x7FFF8000) = -117901064;
                                std::allocator<char>::~allocator(v2 + 336);
                                *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
                                if ( v46 )
                                {
                                  *(_DWORD *)(((v2 + 3552) >> 3) + 0x7FFF8000) = 0;
                                  if ( *(char *)(((v2 + 3552) >> 3) + 0x7FFF8000) < 0
                                    || *(_BYTE *)(((v2 + 3583) >> 3) + 0x7FFF8000) != 0
                                    && (char)((v2 - 96 + 95) & 7) >= *(_BYTE *)(((v2 + 3583) >> 3) + 0x7FFF8000) )
                                  {
                                    __asan_report_store_n(v2 + 3552, 32LL);
                                  }
                                  common::milog::MiLogStream::create(
                                    (common::milog::MiLogStream *)(v2 + 3552),
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    4u,
                                    "./src/txt_data_auto/GalleryExcelConfig.gen.cpp",
                                    "init",
                                    371);
                                  v47 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                          (common::milog::MiLogStream *const)(v2 + 3552),
                                          (const char (*)[16])"[CONFIG_ERROR] ");
                                  common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                                    v47,
                                    (const char (*)[34])byte_1AD61E40);
                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3552));
                                  *(_DWORD *)(((v2 + 3552) >> 3) + 0x7FFF8000) = -117901064;
                                  v7 = -1;
                                }
                                else
                                {
                                  *(_DWORD *)(((v2 + 3616) >> 3) + 0x7FFF8000) = 0;
                                  *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 1;
                                  std::allocator<char>::allocator(v2 + 352);
                                  std::string::basic_string<std::allocator<char>>(
                                    (std::string *const)(v2 + 3616),
                                    aAbilityGroup_2,
                                    (const std::allocator<char> *)(v2 + 352));
                                  v48 = common::tools::TxtFile::Row::assignToStr(
                                          row,
                                          (const std::string *)(v2 + 3616),
                                          (std::string *)(v2 + 1376)) != 0;
                                  std::string::~string((void *)(v2 + 3616));
                                  *(_DWORD *)(((v2 + 3616) >> 3) + 0x7FFF8000) = -117901064;
                                  std::allocator<char>::~allocator(v2 + 352);
                                  *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
                                  if ( v48 )
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
                                      "./src/txt_data_auto/GalleryExcelConfig.gen.cpp",
                                      "init",
                                      376);
                                    v49 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                            (common::milog::MiLogStream *const)(v2 + 3680),
                                            (const char (*)[16])"[CONFIG_ERROR] ");
                                    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                                      v49,
                                      (const char (*)[40])byte_1AD61EE0);
                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3680));
                                    *(_DWORD *)(((v2 + 3680) >> 3) + 0x7FFF8000) = -117901064;
                                    v7 = -1;
                                  }
                                  else
                                  {
                                    v50 = ((v2 + 928) >> 3) + 2147450880;
                                    *(_WORD *)v50 = 0;
                                    *(_BYTE *)(v50 + 2) = 0;
                                    v51 = (_DWORD *)(((v2 + 5568) >> 3) + 2147450880);
                                    *v51 = 0;
                                    v51[1] = 0;
                                    *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = 1;
                                    std::allocator<char>::allocator(v2 + 368);
                                    std::string::basic_string<std::allocator<char>>(
                                      (std::string *const)(v2 + 5568),
                                      ";",
                                      (const std::allocator<char> *)(v2 + 368));
                                    *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 1;
                                    std::allocator<char>::allocator(v2 + 384);
                                    std::string::basic_string<std::allocator<char>>(
                                      (std::string *const)(v2 + 5600),
                                      ",",
                                      (const std::allocator<char> *)(v2 + 384));
                                    v121._M_array = (std::initializer_list<std::string >::iterator)(v2 + 5568);
                                    v121._M_len = 2LL;
                                    *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = 1;
                                    std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 400));
                                    std::vector<std::string>::vector(
                                      (std::vector<std::string> *const)(v2 + 928),
                                      v121,
                                      (const std::vector<std::string>::allocator_type *)(v2 + 400));
                                    v52 = common::tools::StringUtils::splitToListBySeps(
                                            (const std::string *)(v2 + 1376),
                                            (const std::vector<std::string> *)(v2 + 928),
                                            &this->ability_group_list,
                                            1) != 0;
                                    std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 928));
                                    v53 = ((v2 + 928) >> 3) + 2147450880;
                                    *(_WORD *)v53 = -1800;
                                    *(_BYTE *)(v53 + 2) = -8;
                                    std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 400));
                                    *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
                                    for ( k = (char *)(v2 + 5632); k != (char *)(v2 + 5568); std::string::~string(k) )
                                      k -= 32;
                                    v55 = (_DWORD *)(((v2 + 5568) >> 3) + 2147450880);
                                    *v55 = -117901064;
                                    v55[1] = -117901064;
                                    std::allocator<char>::~allocator(v2 + 384);
                                    *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
                                    std::allocator<char>::~allocator(v2 + 368);
                                    *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
                                    if ( v52 )
                                    {
                                      *(_DWORD *)(((v2 + 3744) >> 3) + 0x7FFF8000) = 0;
                                      if ( *(char *)(((v2 + 3744) >> 3) + 0x7FFF8000) < 0
                                        || *(_BYTE *)(((v2 + 3775) >> 3) + 0x7FFF8000) != 0
                                        && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 3775) >> 3) + 0x7FFF8000) )
                                      {
                                        __asan_report_store_n(v2 + 3744, 32LL);
                                      }
                                      common::milog::MiLogStream::create(
                                        (common::milog::MiLogStream *)(v2 + 3744),
                                        &common::milog::MiLogDefault::default_log_obj_,
                                        4u,
                                        "./src/txt_data_auto/GalleryExcelConfig.gen.cpp",
                                        "init",
                                        381);
                                      v56 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                              (common::milog::MiLogStream *const)(v2 + 3744),
                                              (const char (*)[16])"[CONFIG_ERROR] ");
                                      common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                                        v56,
                                        (const char (*)[40])byte_1AD61EE0);
                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3744));
                                      *(_DWORD *)(((v2 + 3744) >> 3) + 0x7FFF8000) = -117901064;
                                      v7 = -1;
                                    }
                                    else
                                    {
                                      *(_DWORD *)(((v2 + 3808) >> 3) + 0x7FFF8000) = 0;
                                      *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = 1;
                                      std::allocator<char>::allocator(v2 + 416);
                                      std::string::basic_string<std::allocator<char>>(
                                        (std::string *const)(v2 + 3808),
                                        &byte_1AD61F40,
                                        (const std::allocator<char> *)(v2 + 416));
                                      v57 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                              row,
                                              (const std::string *)(v2 + 3808),
                                              &this->duration) != 0;
                                      std::string::~string((void *)(v2 + 3808));
                                      *(_DWORD *)(((v2 + 3808) >> 3) + 0x7FFF8000) = -117901064;
                                      std::allocator<char>::~allocator(v2 + 416);
                                      *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
                                      if ( v57 )
                                      {
                                        *(_DWORD *)(((v2 + 3872) >> 3) + 0x7FFF8000) = 0;
                                        if ( *(char *)(((v2 + 3872) >> 3) + 0x7FFF8000) < 0
                                          || *(_BYTE *)(((v2 + 3903) >> 3) + 0x7FFF8000) != 0
                                          && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 3903) >> 3) + 0x7FFF8000) )
                                        {
                                          __asan_report_store_n(v2 + 3872, 32LL);
                                        }
                                        common::milog::MiLogStream::create(
                                          (common::milog::MiLogStream *)(v2 + 3872),
                                          &common::milog::MiLogDefault::default_log_obj_,
                                          4u,
                                          "./src/txt_data_auto/GalleryExcelConfig.gen.cpp",
                                          "init",
                                          386);
                                        v58 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                (common::milog::MiLogStream *const)(v2 + 3872),
                                                (const char (*)[16])"[CONFIG_ERROR] ");
                                        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                          v58,
                                          (const char (*)[33])byte_1AD61F80);
                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3872));
                                        *(_DWORD *)(((v2 + 3872) >> 3) + 0x7FFF8000) = -117901064;
                                        v7 = -1;
                                      }
                                      else
                                      {
                                        *(_DWORD *)(((v2 + 3936) >> 3) + 0x7FFF8000) = 0;
                                        *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = 1;
                                        std::allocator<char>::allocator(v2 + 432);
                                        std::string::basic_string<std::allocator<char>>(
                                          (std::string *const)(v2 + 3936),
                                          &byte_1AD61FE0,
                                          (const std::allocator<char> *)(v2 + 432));
                                        v59 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                                row,
                                                (const std::string *)(v2 + 3936),
                                                &this->transfer_group_id) != 0;
                                        std::string::~string((void *)(v2 + 3936));
                                        *(_DWORD *)(((v2 + 3936) >> 3) + 0x7FFF8000) = -117901064;
                                        std::allocator<char>::~allocator(v2 + 432);
                                        *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = -8;
                                        if ( v59 )
                                        {
                                          *(_DWORD *)(((v2 + 4000) >> 3) + 0x7FFF8000) = 0;
                                          if ( *(char *)(((v2 + 4000) >> 3) + 0x7FFF8000) < 0
                                            || *(_BYTE *)(((v2 + 4031) >> 3) + 0x7FFF8000) != 0
                                            && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 4031) >> 3) + 0x7FFF8000) )
                                          {
                                            __asan_report_store_n(v2 + 4000, 32LL);
                                          }
                                          common::milog::MiLogStream::create(
                                            (common::milog::MiLogStream *)(v2 + 4000),
                                            &common::milog::MiLogDefault::default_log_obj_,
                                            4u,
                                            "./src/txt_data_auto/GalleryExcelConfig.gen.cpp",
                                            "init",
                                            391);
                                          v60 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                  (common::milog::MiLogStream *const)(v2 + 4000),
                                                  (const char (*)[16])"[CONFIG_ERROR] ");
                                          common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                                            v60,
                                            (const char (*)[49])byte_1AD62020);
                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4000));
                                          *(_DWORD *)(((v2 + 4000) >> 3) + 0x7FFF8000) = -117901064;
                                          v7 = -1;
                                        }
                                        else
                                        {
                                          *(_DWORD *)(((v2 + 4064) >> 3) + 0x7FFF8000) = 0;
                                          *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = 1;
                                          std::allocator<char>::allocator(v2 + 448);
                                          std::string::basic_string<std::allocator<char>>(
                                            (std::string *const)(v2 + 4064),
                                            &byte_1AD62080,
                                            (const std::allocator<char> *)(v2 + 448));
                                          v61 = common::tools::TxtFile::Row::assignToStr(
                                                  row,
                                                  (const std::string *)(v2 + 4064),
                                                  (std::string *)(v2 + 1376)) != 0;
                                          std::string::~string((void *)(v2 + 4064));
                                          *(_DWORD *)(((v2 + 4064) >> 3) + 0x7FFF8000) = -117901064;
                                          std::allocator<char>::~allocator(v2 + 448);
                                          *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = -8;
                                          if ( v61 )
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
                                              "./src/txt_data_auto/GalleryExcelConfig.gen.cpp",
                                              "init",
                                              396);
                                            v62 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                    (common::milog::MiLogStream *const)(v2 + 4128),
                                                    (const char (*)[16])"[CONFIG_ERROR] ");
                                            common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                                              v62,
                                              (const char (*)[50])byte_1AD620C0);
                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4128));
                                            *(_DWORD *)(((v2 + 4128) >> 3) + 0x7FFF8000) = -117901064;
                                            v7 = -1;
                                          }
                                          else
                                          {
                                            v63 = ((v2 + 992) >> 3) + 2147450880;
                                            *(_WORD *)v63 = 0;
                                            *(_BYTE *)(v63 + 2) = 0;
                                            v64 = (_DWORD *)(((v2 + 5664) >> 3) + 2147450880);
                                            *v64 = 0;
                                            v64[1] = 0;
                                            *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = 1;
                                            std::allocator<char>::allocator(v2 + 464);
                                            std::string::basic_string<std::allocator<char>>(
                                              (std::string *const)(v2 + 5664),
                                              ";",
                                              (const std::allocator<char> *)(v2 + 464));
                                            *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = 1;
                                            std::allocator<char>::allocator(v2 + 480);
                                            std::string::basic_string<std::allocator<char>>(
                                              (std::string *const)(v2 + 5696),
                                              ",",
                                              (const std::allocator<char> *)(v2 + 480));
                                            v122._M_array = (std::initializer_list<std::string >::iterator)(v2 + 5664);
                                            v122._M_len = 2LL;
                                            *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = 1;
                                            std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 496));
                                            std::vector<std::string>::vector(
                                              (std::vector<std::string> *const)(v2 + 992),
                                              v122,
                                              (const std::vector<std::string>::allocator_type *)(v2 + 496));
                                            v65 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                                                    (const std::string *)(v2 + 1376),
                                                    (const std::vector<std::string> *)(v2 + 992),
                                                    &this->transfer_config_id_list,
                                                    1) != 0;
                                            std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 992));
                                            v66 = ((v2 + 992) >> 3) + 2147450880;
                                            *(_WORD *)v66 = -1800;
                                            *(_BYTE *)(v66 + 2) = -8;
                                            std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 496));
                                            *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = -8;
                                            for ( m = (char *)(v2 + 5728); m != (char *)(v2 + 5664); std::string::~string(m) )
                                              m -= 32;
                                            v68 = (_DWORD *)(((v2 + 5664) >> 3) + 2147450880);
                                            *v68 = -117901064;
                                            v68[1] = -117901064;
                                            std::allocator<char>::~allocator(v2 + 480);
                                            *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = -8;
                                            std::allocator<char>::~allocator(v2 + 464);
                                            *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = -8;
                                            if ( v65 )
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
                                                "./src/txt_data_auto/GalleryExcelConfig.gen.cpp",
                                                "init",
                                                401);
                                              v69 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                      (common::milog::MiLogStream *const)(v2 + 4192),
                                                      (const char (*)[16])"[CONFIG_ERROR] ");
                                              common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                                                v69,
                                                (const char (*)[50])byte_1AD620C0);
                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4192));
                                              *(_DWORD *)(((v2 + 4192) >> 3) + 0x7FFF8000) = -117901064;
                                              v7 = -1;
                                            }
                                            else
                                            {
                                              *(_DWORD *)(((v2 + 4256) >> 3) + 0x7FFF8000) = 0;
                                              *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = 1;
                                              std::allocator<char>::allocator(v2 + 512);
                                              std::string::basic_string<std::allocator<char>>(
                                                (std::string *const)(v2 + 4256),
                                                &byte_1AD62120,
                                                (const std::allocator<char> *)(v2 + 512));
                                              v70 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                                      row,
                                                      (const std::string *)(v2 + 4256),
                                                      &this->transfer_timeout) != 0;
                                              std::string::~string((void *)(v2 + 4256));
                                              *(_DWORD *)(((v2 + 4256) >> 3) + 0x7FFF8000) = -117901064;
                                              std::allocator<char>::~allocator(v2 + 512);
                                              *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = -8;
                                              if ( v70 )
                                              {
                                                *(_DWORD *)(((v2 + 4320) >> 3) + 0x7FFF8000) = 0;
                                                if ( *(char *)(((v2 + 4320) >> 3) + 0x7FFF8000) < 0
                                                  || *(_BYTE *)(((v2 + 4351) >> 3) + 0x7FFF8000) != 0
                                                  && (char)((v2 - 96 + 95) & 7) >= *(_BYTE *)(((v2 + 4351) >> 3)
                                                                                            + 0x7FFF8000) )
                                                {
                                                  __asan_report_store_n(v2 + 4320, 32LL);
                                                }
                                                common::milog::MiLogStream::create(
                                                  (common::milog::MiLogStream *)(v2 + 4320),
                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                  4u,
                                                  "./src/txt_data_auto/GalleryExcelConfig.gen.cpp",
                                                  "init",
                                                  406);
                                                v71 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                        (common::milog::MiLogStream *const)(v2 + 4320),
                                                        (const char (*)[16])"[CONFIG_ERROR] ");
                                                common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                                                  v71,
                                                  (const char (*)[51])byte_1AD62160);
                                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4320));
                                                *(_DWORD *)(((v2 + 4320) >> 3) + 0x7FFF8000) = -117901064;
                                                v7 = -1;
                                              }
                                              else
                                              {
                                                *(_DWORD *)(((v2 + 4384) >> 3) + 0x7FFF8000) = 0;
                                                *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = 1;
                                                std::allocator<char>::allocator(v2 + 528);
                                                std::string::basic_string<std::allocator<char>>(
                                                  (std::string *const)(v2 + 4384),
                                                  &byte_1AD621C0,
                                                  (const std::allocator<char> *)(v2 + 528));
                                                v72 = common::tools::TxtFile::Row::assignToStr(
                                                        row,
                                                        (const std::string *)(v2 + 4384),
                                                        (std::string *)(v2 + 1376)) != 0;
                                                std::string::~string((void *)(v2 + 4384));
                                                *(_DWORD *)(((v2 + 4384) >> 3) + 0x7FFF8000) = -117901064;
                                                std::allocator<char>::~allocator(v2 + 528);
                                                *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = -8;
                                                if ( v72 )
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
                                                    "./src/txt_data_auto/GalleryExcelConfig.gen.cpp",
                                                    "init",
                                                    411);
                                                  v73 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                          (common::milog::MiLogStream *const)(v2 + 4448),
                                                          (const char (*)[16])"[CONFIG_ERROR] ");
                                                  common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                                                    v73,
                                                    (const char (*)[55])byte_1AD62220);
                                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4448));
                                                  *(_DWORD *)(((v2 + 4448) >> 3) + 0x7FFF8000) = -117901064;
                                                  v7 = -1;
                                                }
                                                else
                                                {
                                                  v74 = ((v2 + 1056) >> 3) + 2147450880;
                                                  *(_WORD *)v74 = 0;
                                                  *(_BYTE *)(v74 + 2) = 0;
                                                  v75 = (_DWORD *)(((v2 + 5760) >> 3) + 2147450880);
                                                  *v75 = 0;
                                                  v75[1] = 0;
                                                  *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = 1;
                                                  std::allocator<char>::allocator(v2 + 544);
                                                  std::string::basic_string<std::allocator<char>>(
                                                    (std::string *const)(v2 + 5760),
                                                    ";",
                                                    (const std::allocator<char> *)(v2 + 544));
                                                  *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = 1;
                                                  std::allocator<char>::allocator(v2 + 560);
                                                  std::string::basic_string<std::allocator<char>>(
                                                    (std::string *const)(v2 + 5792),
                                                    ",",
                                                    (const std::allocator<char> *)(v2 + 560));
                                                  v123._M_array = (std::initializer_list<std::string >::iterator)(v2 + 5760);
                                                  v123._M_len = 2LL;
                                                  *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) = 1;
                                                  std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 576));
                                                  std::vector<std::string>::vector(
                                                    (std::vector<std::string> *const)(v2 + 1056),
                                                    v123,
                                                    (const std::vector<std::string>::allocator_type *)(v2 + 576));
                                                  v76 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                                                          (const std::string *)(v2 + 1376),
                                                          (const std::vector<std::string> *)(v2 + 1056),
                                                          &this->transfer_pre_register_group_id_list,
                                                          1) != 0;
                                                  std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 1056));
                                                  v77 = ((v2 + 1056) >> 3) + 2147450880;
                                                  *(_WORD *)v77 = -1800;
                                                  *(_BYTE *)(v77 + 2) = -8;
                                                  std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 576));
                                                  *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) = -8;
                                                  for ( n = (char *)(v2 + 5824);
                                                        n != (char *)(v2 + 5760);
                                                        std::string::~string(n) )
                                                  {
                                                    n -= 32;
                                                  }
                                                  v79 = (_DWORD *)(((v2 + 5760) >> 3) + 2147450880);
                                                  *v79 = -117901064;
                                                  v79[1] = -117901064;
                                                  std::allocator<char>::~allocator(v2 + 560);
                                                  *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = -8;
                                                  std::allocator<char>::~allocator(v2 + 544);
                                                  *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = -8;
                                                  if ( v76 )
                                                  {
                                                    *(_DWORD *)(((v2 + 4512) >> 3) + 0x7FFF8000) = 0;
                                                    if ( *(char *)(((v2 + 4512) >> 3) + 0x7FFF8000) < 0
                                                      || *(_BYTE *)(((v2 + 4543) >> 3) + 0x7FFF8000) != 0
                                                      && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 4543) >> 3)
                                                                                                + 0x7FFF8000) )
                                                    {
                                                      __asan_report_store_n(v2 + 4512, 32LL);
                                                    }
                                                    common::milog::MiLogStream::create(
                                                      (common::milog::MiLogStream *)(v2 + 4512),
                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                      4u,
                                                      "./src/txt_data_auto/GalleryExcelConfig.gen.cpp",
                                                      "init",
                                                      416);
                                                    v80 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                            (common::milog::MiLogStream *const)(v2 + 4512),
                                                            (const char (*)[16])"[CONFIG_ERROR] ");
                                                    common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                                                      v80,
                                                      (const char (*)[55])byte_1AD62220);
                                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4512));
                                                    *(_DWORD *)(((v2 + 4512) >> 3) + 0x7FFF8000) = -117901064;
                                                    v7 = -1;
                                                  }
                                                  else
                                                  {
                                                    *(_DWORD *)(((v2 + 4576) >> 3) + 0x7FFF8000) = 0;
                                                    *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) = 1;
                                                    std::allocator<char>::allocator(v2 + 592);
                                                    std::string::basic_string<std::allocator<char>>(
                                                      (std::string *const)(v2 + 4576),
                                                      &byte_1AD62280,
                                                      (const std::allocator<char> *)(v2 + 592));
                                                    v81 = common::tools::TxtFile::Row::assignToStr(
                                                            row,
                                                            (const std::string *)(v2 + 4576),
                                                            (std::string *)(v2 + 1376)) != 0;
                                                    std::string::~string((void *)(v2 + 4576));
                                                    *(_DWORD *)(((v2 + 4576) >> 3) + 0x7FFF8000) = -117901064;
                                                    std::allocator<char>::~allocator(v2 + 592);
                                                    *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) = -8;
                                                    if ( v81 )
                                                    {
                                                      *(_DWORD *)(((v2 + 4640) >> 3) + 0x7FFF8000) = 0;
                                                      if ( *(char *)(((v2 + 4640) >> 3) + 0x7FFF8000) < 0
                                                        || *(_BYTE *)(((v2 + 4671) >> 3) + 0x7FFF8000) != 0
                                                        && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 4671) >> 3)
                                                                                             + 0x7FFF8000) )
                                                      {
                                                        __asan_report_store_n(v2 + 4640, 32LL);
                                                      }
                                                      common::milog::MiLogStream::create(
                                                        (common::milog::MiLogStream *)(v2 + 4640),
                                                        &common::milog::MiLogDefault::default_log_obj_,
                                                        4u,
                                                        "./src/txt_data_auto/GalleryExcelConfig.gen.cpp",
                                                        "init",
                                                        421);
                                                      v82 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                              (common::milog::MiLogStream *const)(v2 + 4640),
                                                              (const char (*)[16])"[CONFIG_ERROR] ");
                                                      common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                                                        v82,
                                                        (const char (*)[41])byte_1AD622C0);
                                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4640));
                                                      *(_DWORD *)(((v2 + 4640) >> 3) + 0x7FFF8000) = -117901064;
                                                      v7 = -1;
                                                    }
                                                    else
                                                    {
                                                      v83 = ((v2 + 1120) >> 3) + 2147450880;
                                                      *(_WORD *)v83 = 0;
                                                      *(_BYTE *)(v83 + 2) = 0;
                                                      v84 = (_DWORD *)(((v2 + 5856) >> 3) + 2147450880);
                                                      *v84 = 0;
                                                      v84[1] = 0;
                                                      *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) = 1;
                                                      std::allocator<char>::allocator(v2 + 608);
                                                      std::string::basic_string<std::allocator<char>>(
                                                        (std::string *const)(v2 + 5856),
                                                        ";",
                                                        (const std::allocator<char> *)(v2 + 608));
                                                      *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) = 1;
                                                      std::allocator<char>::allocator(v2 + 624);
                                                      std::string::basic_string<std::allocator<char>>(
                                                        (std::string *const)(v2 + 5888),
                                                        ",",
                                                        (const std::allocator<char> *)(v2 + 624));
                                                      v124._M_array = (std::initializer_list<std::string >::iterator)(v2 + 5856);
                                                      v124._M_len = 2LL;
                                                      *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) = 1;
                                                      std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 640));
                                                      std::vector<std::string>::vector(
                                                        (std::vector<std::string> *const)(v2 + 1120),
                                                        v124,
                                                        (const std::vector<std::string>::allocator_type *)(v2 + 640));
                                                      v85 = common::tools::StringUtils::splitToListBySeps(
                                                              (const std::string *)(v2 + 1376),
                                                              (const std::vector<std::string> *)(v2 + 1120),
                                                              &this->selectable_ability_groups,
                                                              1) != 0;
                                                      std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 1120));
                                                      v86 = ((v2 + 1120) >> 3) + 2147450880;
                                                      *(_WORD *)v86 = -1800;
                                                      *(_BYTE *)(v86 + 2) = -8;
                                                      std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 640));
                                                      *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) = -8;
                                                      for ( ii = (char *)(v2 + 5920);
                                                            ii != (char *)(v2 + 5856);
                                                            std::string::~string(ii) )
                                                      {
                                                        ii -= 32;
                                                      }
                                                      v88 = (_DWORD *)(((v2 + 5856) >> 3) + 2147450880);
                                                      *v88 = -117901064;
                                                      v88[1] = -117901064;
                                                      std::allocator<char>::~allocator(v2 + 624);
                                                      *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) = -8;
                                                      std::allocator<char>::~allocator(v2 + 608);
                                                      *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) = -8;
                                                      if ( v85 )
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
                                                          "./src/txt_data_auto/GalleryExcelConfig.gen.cpp",
                                                          "init",
                                                          426);
                                                        v89 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                (common::milog::MiLogStream *const)(v2 + 4704),
                                                                (const char (*)[16])"[CONFIG_ERROR] ");
                                                        common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                                                          v89,
                                                          (const char (*)[41])byte_1AD622C0);
                                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4704));
                                                        *(_DWORD *)(((v2 + 4704) >> 3) + 0x7FFF8000) = -117901064;
                                                        v7 = -1;
                                                      }
                                                      else
                                                      {
                                                        *(_DWORD *)(((v2 + 4768) >> 3) + 0x7FFF8000) = 0;
                                                        *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) = 1;
                                                        std::allocator<char>::allocator(v2 + 656);
                                                        std::string::basic_string<std::allocator<char>>(
                                                          (std::string *const)(v2 + 4768),
                                                          "TeamAbilityGroup",
                                                          (const std::allocator<char> *)(v2 + 656));
                                                        v90 = common::tools::TxtFile::Row::assignToStr(
                                                                row,
                                                                (const std::string *)(v2 + 4768),
                                                                (std::string *)(v2 + 1376)) != 0;
                                                        std::string::~string((void *)(v2 + 4768));
                                                        *(_DWORD *)(((v2 + 4768) >> 3) + 0x7FFF8000) = -117901064;
                                                        std::allocator<char>::~allocator(v2 + 656);
                                                        *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) = -8;
                                                        if ( v90 )
                                                        {
                                                          *(_DWORD *)(((v2 + 4832) >> 3) + 0x7FFF8000) = 0;
                                                          if ( *(char *)(((v2 + 4832) >> 3) + 0x7FFF8000) < 0
                                                            || *(_BYTE *)(((v2 + 4863) >> 3) + 0x7FFF8000) != 0
                                                            && (char)((v2 - 96 + 95) & 7) >= *(_BYTE *)(((v2 + 4863) >> 3) + 0x7FFF8000) )
                                                          {
                                                            __asan_report_store_n(v2 + 4832, 32LL);
                                                          }
                                                          common::milog::MiLogStream::create(
                                                            (common::milog::MiLogStream *)(v2 + 4832),
                                                            &common::milog::MiLogDefault::default_log_obj_,
                                                            4u,
                                                            "./src/txt_data_auto/GalleryExcelConfig.gen.cpp",
                                                            "init",
                                                            431);
                                                          v91 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                  (common::milog::MiLogStream *const)(v2 + 4832),
                                                                  (const char (*)[16])"[CONFIG_ERROR] ");
                                                          common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                                                            v91,
                                                            (const char (*)[37])byte_1AD4A920);
                                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4832));
                                                          *(_DWORD *)(((v2 + 4832) >> 3) + 0x7FFF8000) = -117901064;
                                                          v7 = -1;
                                                        }
                                                        else
                                                        {
                                                          v92 = ((v2 + 1184) >> 3) + 2147450880;
                                                          *(_WORD *)v92 = 0;
                                                          *(_BYTE *)(v92 + 2) = 0;
                                                          v93 = (_DWORD *)(((v2 + 5952) >> 3) + 2147450880);
                                                          *v93 = 0;
                                                          v93[1] = 0;
                                                          *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) = 1;
                                                          std::allocator<char>::allocator(v2 + 672);
                                                          std::string::basic_string<std::allocator<char>>(
                                                            (std::string *const)(v2 + 5952),
                                                            ";",
                                                            (const std::allocator<char> *)(v2 + 672));
                                                          *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) = 1;
                                                          std::allocator<char>::allocator(v2 + 688);
                                                          std::string::basic_string<std::allocator<char>>(
                                                            (std::string *const)(v2 + 5984),
                                                            ",",
                                                            (const std::allocator<char> *)(v2 + 688));
                                                          v125._M_array = (std::initializer_list<std::string >::iterator)(v2 + 5952);
                                                          v125._M_len = 2LL;
                                                          *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) = 1;
                                                          std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 704));
                                                          std::vector<std::string>::vector(
                                                            (std::vector<std::string> *const)(v2 + 1184),
                                                            v125,
                                                            (const std::vector<std::string>::allocator_type *)(v2 + 704));
                                                          v94 = common::tools::StringUtils::splitToListBySeps(
                                                                  (const std::string *)(v2 + 1376),
                                                                  (const std::vector<std::string> *)(v2 + 1184),
                                                                  &this->team_ability_group_list,
                                                                  1) != 0;
                                                          std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 1184));
                                                          v95 = ((v2 + 1184) >> 3) + 2147450880;
                                                          *(_WORD *)v95 = -1800;
                                                          *(_BYTE *)(v95 + 2) = -8;
                                                          std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 704));
                                                          *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) = -8;
                                                          for ( jj = (char *)(v2 + 6016);
                                                                jj != (char *)(v2 + 5952);
                                                                std::string::~string(jj) )
                                                          {
                                                            jj -= 32;
                                                          }
                                                          v97 = (_DWORD *)(((v2 + 5952) >> 3) + 2147450880);
                                                          *v97 = -117901064;
                                                          v97[1] = -117901064;
                                                          std::allocator<char>::~allocator(v2 + 688);
                                                          *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) = -8;
                                                          std::allocator<char>::~allocator(v2 + 672);
                                                          *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) = -8;
                                                          if ( v94 )
                                                          {
                                                            *(_DWORD *)(((v2 + 4896) >> 3) + 0x7FFF8000) = 0;
                                                            if ( *(char *)(((v2 + 4896) >> 3) + 0x7FFF8000) < 0
                                                              || *(_BYTE *)(((v2 + 4927) >> 3) + 0x7FFF8000) != 0
                                                              && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 4927) >> 3) + 0x7FFF8000) )
                                                            {
                                                              __asan_report_store_n(v2 + 4896, 32LL);
                                                            }
                                                            common::milog::MiLogStream::create(
                                                              (common::milog::MiLogStream *)(v2 + 4896),
                                                              &common::milog::MiLogDefault::default_log_obj_,
                                                              4u,
                                                              "./src/txt_data_auto/GalleryExcelConfig.gen.cpp",
                                                              "init",
                                                              436);
                                                            v98 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                    (common::milog::MiLogStream *const)(v2 + 4896),
                                                                    (const char (*)[16])"[CONFIG_ERROR] ");
                                                            common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                                                              v98,
                                                              (const char (*)[37])byte_1AD4A920);
                                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4896));
                                                            *(_DWORD *)(((v2 + 4896) >> 3) + 0x7FFF8000) = -117901064;
                                                            v7 = -1;
                                                          }
                                                          else
                                                          {
                                                            *(_DWORD *)(((v2 + 4960) >> 3) + 0x7FFF8000) = 0;
                                                            *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) = 1;
                                                            std::allocator<char>::allocator(v2 + 720);
                                                            std::string::basic_string<std::allocator<char>>(
                                                              (std::string *const)(v2 + 4960),
                                                              aTeam_3,
                                                              (const std::allocator<char> *)(v2 + 720));
                                                            v99 = common::tools::TxtFile::Row::assignToStr(
                                                                    row,
                                                                    (const std::string *)(v2 + 4960),
                                                                    (std::string *)(v2 + 1376)) != 0;
                                                            std::string::~string((void *)(v2 + 4960));
                                                            *(_DWORD *)(((v2 + 4960) >> 3) + 0x7FFF8000) = -117901064;
                                                            std::allocator<char>::~allocator(v2 + 720);
                                                            *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) = -8;
                                                            if ( v99 )
                                                            {
                                                              *(_DWORD *)(((v2 + 5024) >> 3) + 0x7FFF8000) = 0;
                                                              if ( *(char *)(((v2 + 5024) >> 3) + 0x7FFF8000) < 0
                                                                || *(_BYTE *)(((v2 + 5055) >> 3) + 0x7FFF8000) != 0
                                                                && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 5055) >> 3) + 0x7FFF8000) )
                                                              {
                                                                __asan_report_store_n(v2 + 5024, 32LL);
                                                              }
                                                              common::milog::MiLogStream::create(
                                                                (common::milog::MiLogStream *)(v2 + 5024),
                                                                &common::milog::MiLogDefault::default_log_obj_,
                                                                4u,
                                                                "./src/txt_data_auto/GalleryExcelConfig.gen.cpp",
                                                                "init",
                                                                441);
                                                              v100 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                       (common::milog::MiLogStream *const)(v2 + 5024),
                                                                       (const char (*)[16])"[CONFIG_ERROR] ");
                                                              common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                                                                v100,
                                                                (const char (*)[45])byte_1AD62360);
                                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5024));
                                                              *(_DWORD *)(((v2 + 5024) >> 3) + 0x7FFF8000) = -117901064;
                                                              v7 = -1;
                                                            }
                                                            else
                                                            {
                                                              v101 = ((v2 + 1248) >> 3) + 2147450880;
                                                              *(_WORD *)v101 = 0;
                                                              *(_BYTE *)(v101 + 2) = 0;
                                                              v102 = (_DWORD *)(((v2 + 6048) >> 3) + 2147450880);
                                                              *v102 = 0;
                                                              v102[1] = 0;
                                                              *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) = 1;
                                                              std::allocator<char>::allocator(v2 + 736);
                                                              std::string::basic_string<std::allocator<char>>(
                                                                (std::string *const)(v2 + 6048),
                                                                ";",
                                                                (const std::allocator<char> *)(v2 + 736));
                                                              *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) = 1;
                                                              std::allocator<char>::allocator(v2 + 752);
                                                              std::string::basic_string<std::allocator<char>>(
                                                                (std::string *const)(v2 + 6080),
                                                                ",",
                                                                (const std::allocator<char> *)(v2 + 752));
                                                              v126._M_array = (std::initializer_list<std::string >::iterator)(v2 + 6048);
                                                              v126._M_len = 2LL;
                                                              *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) = 1;
                                                              std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 768));
                                                              std::vector<std::string>::vector(
                                                                (std::vector<std::string> *const)(v2 + 1248),
                                                                v126,
                                                                (const std::vector<std::string>::allocator_type *)(v2 + 768));
                                                              v103 = common::tools::StringUtils::splitToListBySeps(
                                                                       (const std::string *)(v2 + 1376),
                                                                       (const std::vector<std::string> *)(v2 + 1248),
                                                                       &this->selectable_team_ability_group_list,
                                                                       1) != 0;
                                                              std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 1248));
                                                              v104 = ((v2 + 1248) >> 3) + 2147450880;
                                                              *(_WORD *)v104 = -1800;
                                                              *(_BYTE *)(v104 + 2) = -8;
                                                              std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 768));
                                                              *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) = -8;
                                                              for ( kk = (char *)(v2 + 6112);
                                                                    kk != (char *)(v2 + 6048);
                                                                    std::string::~string(kk) )
                                                              {
                                                                kk -= 32;
                                                              }
                                                              v106 = (_DWORD *)(((v2 + 6048) >> 3) + 2147450880);
                                                              *v106 = -117901064;
                                                              v106[1] = -117901064;
                                                              std::allocator<char>::~allocator(v2 + 752);
                                                              *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) = -8;
                                                              std::allocator<char>::~allocator(v2 + 736);
                                                              *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) = -8;
                                                              if ( v103 )
                                                              {
                                                                *(_DWORD *)(((v2 + 5088) >> 3) + 0x7FFF8000) = 0;
                                                                if ( *(char *)(((v2 + 5088) >> 3) + 0x7FFF8000) < 0
                                                                  || *(_BYTE *)(((v2 + 5119) >> 3) + 0x7FFF8000) != 0
                                                                  && (char)((v2 - 96 + 95) & 7) >= *(_BYTE *)(((v2 + 5119) >> 3) + 0x7FFF8000) )
                                                                {
                                                                  __asan_report_store_n(v2 + 5088, 32LL);
                                                                }
                                                                common::milog::MiLogStream::create(
                                                                  (common::milog::MiLogStream *)(v2 + 5088),
                                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                                  4u,
                                                                  "./src/txt_data_auto/GalleryExcelConfig.gen.cpp",
                                                                  "init",
                                                                  446);
                                                                v107 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                         (common::milog::MiLogStream *const)(v2 + 5088),
                                                                         (const char (*)[16])"[CONFIG_ERROR] ");
                                                                common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                                                                  v107,
                                                                  (const char (*)[45])byte_1AD62360);
                                                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5088));
                                                                *(_DWORD *)(((v2 + 5088) >> 3) + 0x7FFF8000) = -117901064;
                                                                v7 = -1;
                                                              }
                                                              else
                                                              {
                                                                *(_DWORD *)(((v2 + 5152) >> 3) + 0x7FFF8000) = 0;
                                                                *(_BYTE *)(((v2 + 784) >> 3) + 0x7FFF8000) = 1;
                                                                std::allocator<char>::allocator(v2 + 784);
                                                                std::string::basic_string<std::allocator<char>>(
                                                                  (std::string *const)(v2 + 5152),
                                                                  aGroup_15,
                                                                  (const std::allocator<char> *)(v2 + 784));
                                                                v108 = common::tools::TxtFile::Row::assignToNum<bool>(
                                                                         row,
                                                                         (const std::string *)(v2 + 5152),
                                                                         &this->is_disable_group_default_revise_level) != 0;
                                                                std::string::~string((void *)(v2 + 5152));
                                                                *(_DWORD *)(((v2 + 5152) >> 3) + 0x7FFF8000) = -117901064;
                                                                std::allocator<char>::~allocator(v2 + 784);
                                                                *(_BYTE *)(((v2 + 784) >> 3) + 0x7FFF8000) = -8;
                                                                if ( v108 )
                                                                {
                                                                  *(_DWORD *)(((v2 + 5216) >> 3) + 0x7FFF8000) = 0;
                                                                  if ( *(char *)(((v2 + 5216) >> 3) + 0x7FFF8000) < 0
                                                                    || *(_BYTE *)(((v2 + 5247) >> 3) + 0x7FFF8000) != 0
                                                                    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 5247) >> 3) + 0x7FFF8000) )
                                                                  {
                                                                    __asan_report_store_n(v2 + 5216, 32LL);
                                                                  }
                                                                  common::milog::MiLogStream::create(
                                                                    (common::milog::MiLogStream *)(v2 + 5216),
                                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                                    4u,
                                                                    "./src/txt_data_auto/GalleryExcelConfig.gen.cpp",
                                                                    "init",
                                                                    451);
                                                                  v109 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                           (common::milog::MiLogStream *const)(v2 + 5216),
                                                                           (const char (*)[16])"[CONFIG_ERROR] ");
                                                                  common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                                                                    v109,
                                                                    (const char (*)[50])byte_1AD62400);
                                                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5216));
                                                                  *(_DWORD *)(((v2 + 5216) >> 3) + 0x7FFF8000) = -117901064;
                                                                  v7 = -1;
                                                                }
                                                                else
                                                                {
                                                                  *(_DWORD *)(((v2 + 5280) >> 3) + 0x7FFF8000) = 0;
                                                                  *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) = 1;
                                                                  std::allocator<char>::allocator(v2 + 800);
                                                                  std::string::basic_string<std::allocator<char>>(
                                                                    (std::string *const)(v2 + 5280),
                                                                    aGallery_4,
                                                                    (const std::allocator<char> *)(v2 + 800));
                                                                  v110 = common::tools::TxtFile::Row::assignToStr(
                                                                           row,
                                                                           (const std::string *)(v2 + 5280),
                                                                           (std::string *)(v2 + 1376)) != 0;
                                                                  std::string::~string((void *)(v2 + 5280));
                                                                  *(_DWORD *)(((v2 + 5280) >> 3) + 0x7FFF8000) = -117901064;
                                                                  std::allocator<char>::~allocator(v2 + 800);
                                                                  *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) = -8;
                                                                  if ( v110 )
                                                                  {
                                                                    *(_DWORD *)(((v2 + 5344) >> 3) + 0x7FFF8000) = 0;
                                                                    if ( *(char *)(((v2 + 5344) >> 3) + 0x7FFF8000) < 0
                                                                      || *(_BYTE *)(((v2 + 5375) >> 3) + 0x7FFF8000) != 0
                                                                      && (char)((v2 - 96 + 95) & 7) >= *(_BYTE *)(((v2 + 5375) >> 3) + 0x7FFF8000) )
                                                                    {
                                                                      __asan_report_store_n(v2 + 5344, 32LL);
                                                                    }
                                                                    common::milog::MiLogStream::create(
                                                                      (common::milog::MiLogStream *)(v2 + 5344),
                                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                                      4u,
                                                                      "./src/txt_data_auto/GalleryExcelConfig.gen.cpp",
                                                                      "init",
                                                                      456);
                                                                    v111 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                             (common::milog::MiLogStream *const)(v2 + 5344),
                                                                             (const char (*)[16])"[CONFIG_ERROR] ");
                                                                    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                                                                      v111,
                                                                      (const char (*)[40])byte_1AD624A0);
                                                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5344));
                                                                    *(_DWORD *)(((v2 + 5344) >> 3) + 0x7FFF8000) = -117901064;
                                                                    v7 = -1;
                                                                  }
                                                                  else
                                                                  {
                                                                    v112 = ((v2 + 1312) >> 3) + 2147450880;
                                                                    *(_WORD *)v112 = 0;
                                                                    *(_BYTE *)(v112 + 2) = 0;
                                                                    v113 = (_DWORD *)(((v2 + 6144) >> 3) + 2147450880);
                                                                    *v113 = 0;
                                                                    v113[1] = 0;
                                                                    *(_BYTE *)(((v2 + 816) >> 3) + 0x7FFF8000) = 1;
                                                                    std::allocator<char>::allocator(v2 + 816);
                                                                    std::string::basic_string<std::allocator<char>>(
                                                                      (std::string *const)(v2 + 6144),
                                                                      ";",
                                                                      (const std::allocator<char> *)(v2 + 816));
                                                                    *(_BYTE *)(((v2 + 832) >> 3) + 0x7FFF8000) = 1;
                                                                    std::allocator<char>::allocator(v2 + 832);
                                                                    std::string::basic_string<std::allocator<char>>(
                                                                      (std::string *const)(v2 + 6176),
                                                                      ",",
                                                                      (const std::allocator<char> *)(v2 + 832));
                                                                    v127._M_array = (std::initializer_list<std::string >::iterator)(v2 + 6144);
                                                                    v127._M_len = 2LL;
                                                                    *(_BYTE *)(((v2 + 848) >> 3) + 0x7FFF8000) = 1;
                                                                    std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 848));
                                                                    std::vector<std::string>::vector(
                                                                      (std::vector<std::string> *const)(v2 + 1312),
                                                                      v127,
                                                                      (const std::vector<std::string>::allocator_type *)(v2 + 848));
                                                                    v114 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                                                                             (const std::string *)(v2 + 1376),
                                                                             (const std::vector<std::string> *)(v2 + 1312),
                                                                             &this->success_gallery_stop_reasons,
                                                                             1) != 0;
                                                                    std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 1312));
                                                                    v115 = ((v2 + 1312) >> 3) + 2147450880;
                                                                    *(_WORD *)v115 = -1800;
                                                                    *(_BYTE *)(v115 + 2) = -8;
                                                                    std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 848));
                                                                    *(_BYTE *)(((v2 + 848) >> 3) + 0x7FFF8000) = -8;
                                                                    for ( mm = (char *)(v2 + 6208);
                                                                          mm != (char *)(v2 + 6144);
                                                                          std::string::~string(mm) )
                                                                    {
                                                                      mm -= 32;
                                                                    }
                                                                    v117 = (_DWORD *)(((v2 + 6144) >> 3) + 2147450880);
                                                                    *v117 = -117901064;
                                                                    v117[1] = -117901064;
                                                                    std::allocator<char>::~allocator(v2 + 832);
                                                                    *(_BYTE *)(((v2 + 832) >> 3) + 0x7FFF8000) = -8;
                                                                    std::allocator<char>::~allocator(v2 + 816);
                                                                    *(_BYTE *)(((v2 + 816) >> 3) + 0x7FFF8000) = -8;
                                                                    if ( v114 )
                                                                    {
                                                                      *(_DWORD *)(((v2 + 5408) >> 3) + 0x7FFF8000) = 0;
                                                                      if ( *(char *)(((v2 + 5408) >> 3) + 0x7FFF8000) < 0
                                                                        || *(_BYTE *)(((v2 + 5439) >> 3) + 0x7FFF8000) != 0
                                                                        && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 5439) >> 3) + 0x7FFF8000) )
                                                                      {
                                                                        __asan_report_store_n(v2 + 5408, 32LL);
                                                                      }
                                                                      common::milog::MiLogStream::create(
                                                                        (common::milog::MiLogStream *)(v2 + 5408),
                                                                        &common::milog::MiLogDefault::default_log_obj_,
                                                                        4u,
                                                                        "./src/txt_data_auto/GalleryExcelConfig.gen.cpp",
                                                                        "init",
                                                                        461);
                                                                      v118 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                               (common::milog::MiLogStream *const)(v2 + 5408),
                                                                               (const char (*)[16])"[CONFIG_ERROR] ");
                                                                      common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                                                                        v118,
                                                                        (const char (*)[40])byte_1AD624A0);
                                                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5408));
                                                                      *(_DWORD *)(((v2 + 5408) >> 3) + 0x7FFF8000) = -117901064;
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
LABEL_174:
  std::string::~string((void *)(v2 + 1376));
  if ( v130 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80A4) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 172) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF80B0) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8304) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862766) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147451056 - (((_DWORD)v4 + 2147451064) & 0xFFFFFFF8) + 604) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF832C) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_7(v2, 6560LL, v130);
  }
  return v7;
};

// Line 470: range 00000000143D2368-00000000143D333D
int32_t __cdecl data::GalleryExcelConfigMgrBase::loadGalleryExcelConfig(
        data::GalleryExcelConfigMgrBase *const this,
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
  data::GalleryExcelConfig *v23; // rax
  unsigned int *v24; // rcx
  data::GalleryExcelConfig *v25; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::GalleryExcelConfig>,false,false>,bool> v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  int v29; // edx
  char *i; // r14
  std::string *__for_begin; // [rsp+28h] [rbp-8738h]
  const common::tools::TxtFile::Row *row_ptr; // [rsp+48h] [rbp-8718h]
  char v35[34576]; // [rsp+50h] [rbp-8710h] BYREF

  v3 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_10(34528LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 48 1 9 <unknown> 64 4 5 r:485 80 4 9 <unknown> 96 32 9 paths:471 160 32 9 <unknown> 224 32 9 "
                        "<unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 336 8 "
                        "data:488 944 376 24 debug_message_stream:496 1392 32880 12 txt_file:479";
  *(_QWORD *)(v3 + 16) = data::GalleryExcelConfigMgrBase::loadGalleryExcelConfig;
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
  v5[536862747] = -219021312;
  v5[536862748] = -218959118;
  v5[536862749] = 62194;
  v5[536862761] = -218959360;
  v5[536862762] = -218959118;
  v5[536862763] = 62194;
  v5[536863791] = -202116109;
  v5[536863792] = -202116109;
  v5[536863793] = -202116109;
  v5[536863794] = -202116109;
  v5[536863795] = -202116109;
  v5[536863796] = -202116109;
  v5[536863797] = -202116109;
  v5[536863798] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 96),
    "/txt/GalleryData.txt",
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
    __asan_unpoison_stack_memory(v3 + 1392, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v3 + 1392));
    v7 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v3 + 1392), v7) )
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
        "./src/txt_data_auto/GalleryExcelConfig.gen.cpp",
        "loadGalleryExcelConfig",
        482);
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
        v12 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v3 + 1392));
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 64);
        if ( v12 <= *(_DWORD *)(v3 + 64) )
          break;
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v3 + 1392), *(_DWORD *)(v3 + 64));
        __asan_unpoison_stack_memory(v3 + 544, 336LL);
        data::GalleryExcelConfig::GalleryExcelConfig((data::GalleryExcelConfig *const)(v3 + 544));
        if ( row_ptr )
        {
          if ( data::GalleryExcelConfig::init((data::GalleryExcelConfig *const)(v3 + 544), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 944, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 944);
            v15 = std::operator<<<std::char_traits<char>>(v3 + 944, &unk_1AD3B5A0);
            if ( *(_BYTE *)(((v3 + 552) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 552) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 552);
            std::ostream::operator<<(v15, *(unsigned int *)(v3 + 552));
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
              "./src/txt_data_auto/GalleryExcelConfig.gen.cpp",
              "loadGalleryExcelConfig",
              498);
            v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 352),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v17 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v16, (const char (*)[2])"<");
            v18 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, __for_begin);
            v19 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v18,
                    (const char (*)[11])byte_1AD384E0);
            *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 64);
            v20 = (unsigned int)(*(_DWORD *)(v3 + 64) + 1);
            if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v3 + 80, v20);
            *(_DWORD *)(v3 + 80) = v20;
            v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v19,
                    (const unsigned int *)(v3 + 80));
            v22 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v21,
                    (const char (*)[13])byte_1AD38520);
            *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 416, 32LL);
            }
            std::ostringstream::str(v3 + 416, v3 + 944);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, (const std::string *)(v3 + 416));
            std::string::~string((void *)(v3 + 416));
            *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
            *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            std::ostringstream::~ostringstream(v3 + 944);
            __asan_poison_stack_memory(v3 + 944, 376LL);
            v14 = 0;
          }
          else
          {
            v23 = std::move<data::GalleryExcelConfig &>((data::GalleryExcelConfig *)(v3 + 544));
            v26 = std::unordered_map<unsigned int,data::GalleryExcelConfig>::emplace<unsigned int &,data::GalleryExcelConfig>(
                    &this->gallery_excel_config_map,
                    (unsigned int *)(v3 + 552),
                    v23,
                    v24,
                    v25);
            if ( !v26.second )
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
                "./src/txt_data_auto/GalleryExcelConfig.gen.cpp",
                "loadGalleryExcelConfig",
                503);
              v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 480),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v28 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v27, (const char (*)[9])byte_1AD3B5E0);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v28,
                (const unsigned int *)(v3 + 552));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
              *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
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
            "./src/txt_data_auto/GalleryExcelConfig.gen.cpp",
            "loadGalleryExcelConfig",
            491);
          v13 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 288),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v14 = 0;
        }
        data::GalleryExcelConfig::~GalleryExcelConfig((data::GalleryExcelConfig *const)(v3 + 544));
        __asan_poison_stack_memory(v3 + 544, 336LL);
        if ( v14 != 1 )
        {
          v29 = 0;
          goto LABEL_45;
        }
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 64);
      }
      v29 = 1;
LABEL_45:
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      v10 = v29 == 1;
    }
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v3 + 1392));
    __asan_poison_stack_memory(v3 + 1392, 32880LL);
    if ( !v10 )
      goto LABEL_49;
  }
  v2 = 0;
LABEL_49:
  for ( i = (char *)(v3 + 128); i != (char *)(v3 + 96); std::string::~string(i) )
    i -= 32;
  if ( v35 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF90D4) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862726) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450896 - (((_DWORD)v5 + 2147450904) & 0xFFFFFFF8) + 4300) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_10(v3, 34528LL, v35);
  }
  return v2;
};

// Line 512: range 00000000143D333E-00000000143D3521
int32_t __cdecl data::GalleryExcelConfigMgrBase::loadConfig(
        data::GalleryExcelConfigMgrBase *const this,
        HK4EDesignConfig *config)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  char v7[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::GalleryExcelConfigMgrBase::loadConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( data::GalleryExcelConfigMgrBase::loadGalleryExcelConfig(this, config) )
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
      "./src/txt_data_auto/GalleryExcelConfig.gen.cpp",
      "loadConfig",
      515);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      v5,
      (const char (*)[30])"loadGalleryExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v7 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 522: range 00000000143D3522-00000000143D3534
int32_t __cdecl data::GalleryExcelConfigMgrBase::rewriteConfig(
        data::GalleryExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 527: range 00000000143D3536-00000000143D3548
int32_t __cdecl data::GalleryExcelConfigMgrBase::finalConfig(
        data::GalleryExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 532: range 00000000143D354A-00000000143D3705
data::GalleryExcelConfig *__fastcall data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(
        data::GalleryExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::GalleryExcelConfigMap *p_gallery_excel_config_map; // rdx
  data::GalleryExcelConfigMap *v6; // rdx
  bool v7; // al
  data::GalleryExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:531 64 8 8 iter:533 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::GalleryExcelConfigMgrBase::findGalleryExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_gallery_excel_config_map = &this->gallery_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::GalleryExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::GalleryExcelConfig>::find(
                                                                                        p_gallery_excel_config_map,
                                                                                        (const std::unordered_map<unsigned int,data::GalleryExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->gallery_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::GalleryExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::GalleryExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::GalleryExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GalleryExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GalleryExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::GalleryExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::GalleryExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 545: range 00000000143D3706-00000000143D38C1
const data::GalleryExcelConfig *__fastcall data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(
        const data::GalleryExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::GalleryExcelConfigMap *p_gallery_excel_config_map; // rdx
  data::GalleryExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::GalleryExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:544 64 8 8 iter:546 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::GalleryExcelConfigMgrBase::findGalleryExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_gallery_excel_config_map = &this->gallery_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::GalleryExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::GalleryExcelConfig>::find(
                                                                                              p_gallery_excel_config_map,
                                                                                              (const std::unordered_map<unsigned int,data::GalleryExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->gallery_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::GalleryExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::GalleryExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::GalleryExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GalleryExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GalleryExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GalleryExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GalleryExcelConfig>,false,false> *const)(v2 + 64))->second;
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

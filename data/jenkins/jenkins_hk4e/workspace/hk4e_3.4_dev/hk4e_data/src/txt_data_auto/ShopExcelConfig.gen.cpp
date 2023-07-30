// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ShopExcelConfig.gen.cpp

// Line 12: range 000000000CB7270E-000000000CB72A81
const char *__fastcall data::enumValToStr(data::ShopType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::ShopType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::ShopType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
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
  map = data::getShopTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::ShopType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::ShopType,std::pair<std::string,std::string>>::find(
                                                                                                 map,
                                                                                                 (const std::map<data::ShopType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::ShopType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::ShopType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::ShopType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::ShopType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
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
    result = "INVALID_ShopType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::ShopType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::ShopType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 24: range 000000000CB72A82-000000000CB7303A
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::ShopType>,false,true>::pointer v10; // rax
  data::ShopType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::ShopType> *m; // [rsp+18h] [rbp-188h]
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
    m = data::getShopTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::ShopType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ShopType>::find(
                                                                                     m,
                                                                                     (const std::unordered_map<std::string,data::ShopType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::ShopType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::ShopType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::ShopType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ShopType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ShopType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
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
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::ShopType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::ShopType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
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

// Line 45: range 000000000CB7303B-000000000CB77A19
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int v5; // eax
  std::pair<const std::string,data::ShopType> *i; // r14
  const char *v7; // rsi
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::ShopType>,false,true>::pointer v11; // rax
  data::ShopType second; // ecx
  char v13; // dl
  unsigned int v14; // ebx
  char v17[7024]; // [rsp+20h] [rbp-1B70h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_7(6976LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "124 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 4 9 <unknown> 112 4 9"
                        " <unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unkn"
                        "own> 208 4 9 <unknown> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 4 9 <unknown> 2"
                        "88 4 9 <unknown> 304 4 9 <unknown> 320 4 9 <unknown> 336 4 9 <unknown> 352 4 9 <unknown> 368 4 9"
                        " <unknown> 384 4 9 <unknown> 400 4 9 <unknown> 416 4 9 <unknown> 432 4 9 <unknown> 448 4 9 <unkn"
                        "own> 464 4 9 <unknown> 480 4 9 <unknown> 496 4 9 <unknown> 512 4 9 <unknown> 528 4 9 <unknown> 5"
                        "44 4 9 <unknown> 560 4 9 <unknown> 576 4 9 <unknown> 592 4 9 <unknown> 608 4 9 <unknown> 624 4 9"
                        " <unknown> 640 4 9 <unknown> 656 4 9 <unknown> 672 4 9 <unknown> 688 4 9 <unknown> 704 4 9 <unkn"
                        "own> 720 4 9 <unknown> 736 4 9 <unknown> 752 4 9 <unknown> 768 4 9 <unknown> 784 4 9 <unknown> 8"
                        "00 4 9 <unknown> 816 4 9 <unknown> 832 4 9 <unknown> 848 4 9 <unknown> 864 4 9 <unknown> 880 4 9"
                        " <unknown> 896 4 9 <unknown> 912 4 9 <unknown> 928 4 9 <unknown> 944 4 9 <unknown> 960 4 9 <unkn"
                        "own> 976 4 9 <unknown> 992 4 9 <unknown> 1008 4 9 <unknown> 1024 4 9 <unknown> 1040 4 9 <unknown"
                        "> 1056 4 9 <unknown> 1072 4 9 <unknown> 1088 4 9 <unknown> 1104 4 9 <unknown> 1120 4 9 <unknown>"
                        " 1136 4 9 <unknown> 1152 4 9 <unknown> 1168 4 9 <unknown> 1184 4 9 <unknown> 1200 4 9 <unknown> "
                        "1216 4 9 <unknown> 1232 4 9 <unknown> 1248 4 9 <unknown> 1264 4 9 <unknown> 1280 4 9 <unknown> 1"
                        "296 4 9 <unknown> 1312 4 9 <unknown> 1328 4 9 <unknown> 1344 4 9 <unknown> 1360 4 9 <unknown> 13"
                        "76 4 9 <unknown> 1392 4 9 <unknown> 1408 4 9 <unknown> 1424 4 9 <unknown> 1440 4 9 <unknown> 145"
                        "6 4 9 <unknown> 1472 4 9 <unknown> 1488 4 9 <unknown> 1504 4 9 <unknown> 1520 4 9 <unknown> 1536"
                        " 4 9 <unknown> 1552 4 9 <unknown> 1568 4 9 <unknown> 1584 4 9 <unknown> 1600 4 9 <unknown> 1616 "
                        "4 9 <unknown> 1632 4 9 <unknown> 1648 4 9 <unknown> 1664 4 9 <unknown> 1680 4 9 <unknown> 1696 4"
                        " 9 <unknown> 1712 4 9 <unknown> 1728 4 9 <unknown> 1744 4 9 <unknown> 1760 4 9 <unknown> 1776 4 "
                        "9 <unknown> 1792 4 9 <unknown> 1808 4 9 <unknown> 1824 4 9 <unknown> 1840 4 9 <unknown> 1856 4 9"
                        " <unknown> 1872 4 9 <unknown> 1888 4 9 <unknown> 1904 8 6 it:169 1936 8 9 <unknown> 1968 8 4 s:4"
                        "4 2000 32 9 <unknown> 2064 32 9 <unknown> 2128 32 9 <unknown> 2192 4520 9 <unknown>";
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
  v4[536862751] = -234556924;
  v4[536862752] = -234556924;
  v4[536862753] = -234556924;
  v4[536862754] = -234556924;
  v4[536862755] = -234556924;
  v4[536862756] = -234556924;
  v4[536862757] = -234556924;
  v4[536862758] = -234556924;
  v4[536862759] = -234556924;
  v4[536862760] = -234556924;
  v4[536862761] = -234556924;
  v4[536862762] = -234556924;
  v4[536862763] = -234556924;
  v4[536862764] = -234556924;
  v4[536862765] = -234556924;
  v4[536862766] = -234556924;
  v4[536862767] = -234556924;
  v4[536862768] = -234556924;
  v4[536862769] = -234556924;
  v4[536862770] = -234556924;
  v4[536862771] = -234556924;
  v4[536862772] = -234556924;
  v4[536862773] = -234556924;
  v4[536862774] = -234556924;
  v4[536862775] = -234556924;
  v4[536862776] = -234556924;
  v4[536862777] = -234556924;
  v4[536862778] = -234556924;
  v4[536862779] = 61956;
  v4[536862779] = -234881024;
  v4[536862780] = 62194;
  v4[536862780] = -234881024;
  v4[536862781] = 62194;
  v4[536862781] = -234881024;
  v4[536862782] = 62194;
  v4[536862783] = -219021312;
  v4[536862784] = 62194;
  v4[536862785] = -219021312;
  v4[536862786] = 62194;
  v4[536862787] = -219021312;
  v4[536862788] = 62194;
  v4[536862929] = -218103808;
  v4[536862930] = -202116109;
  v4[536862931] = -202116109;
  v4[536862932] = -202116109;
  v4[536862933] = -202116109;
  v4[536862934] = -202116109;
  v4[536862935] = -202116109;
  v4[536862936] = -202116109;
  v4[536862937] = -202116109;
  *(_QWORD *)(v2 + 1968) = s;
  if ( *(_QWORD *)(v2 + 1968) )
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::ShopType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::ShopType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, e);
      *(_DWORD *)(v2 + 96) = 900;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[13],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 2192),
        (const char (*)[13])_x,
        (data::ShopType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, _x);
      *(_DWORD *)(v2 + 112) = 901;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[13],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 2232),
        (const char (*)[13])byte_1A13B2E0,
        (data::ShopType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1A13B2E0);
      *(_DWORD *)(v2 + 128) = 902;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[13],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 2272),
        (const char (*)[13])byte_1A13B320,
        (data::ShopType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, byte_1A13B320);
      *(_DWORD *)(v2 + 144) = 903;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[19],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 2312),
        (const char (*)[19])byte_1A13B360,
        (data::ShopType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, byte_1A13B360);
      *(_DWORD *)(v2 + 160) = 1001;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[13],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 2352),
        (const char (*)[13])byte_1A13B3A0,
        (data::ShopType *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, byte_1A13B3A0);
      *(_DWORD *)(v2 + 176) = 1002;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[16],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 2392),
        (const char (*)[16])byte_1A13B3E0,
        (data::ShopType *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, byte_1A13B3E0);
      *(_DWORD *)(v2 + 192) = 1003;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[13],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 2432),
        (const char (*)[13])byte_1A13B420,
        (data::ShopType *)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 208, byte_1A13B420);
      *(_DWORD *)(v2 + 208) = 1004;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[13],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 2472),
        (const char (*)[13])byte_1A13B460,
        (data::ShopType *)(v2 + 208));
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 224, byte_1A13B460);
      *(_DWORD *)(v2 + 224) = 1005;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[7],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 2512),
        (const char (*)[7])byte_1A13B4A0,
        (data::ShopType *)(v2 + 224));
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 240, byte_1A13B4A0);
      *(_DWORD *)(v2 + 240) = 1006;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[16],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 2552),
        (const char (*)[16])byte_1A13B4E0,
        (data::ShopType *)(v2 + 240));
      if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 256, byte_1A13B4E0);
      *(_DWORD *)(v2 + 256) = 1007;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[13],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 2592),
        (const char (*)[13])byte_1A13B520,
        (data::ShopType *)(v2 + 256));
      if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 272, byte_1A13B520);
      *(_DWORD *)(v2 + 272) = 1008;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[16],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 2632),
        (const char (*)[16])byte_1A13B560,
        (data::ShopType *)(v2 + 272));
      if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 288, byte_1A13B560);
      *(_DWORD *)(v2 + 288) = 1009;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[25],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 2672),
        (const char (*)[25])byte_1A13B5A0,
        (data::ShopType *)(v2 + 288));
      if ( *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 304, byte_1A13B5A0);
      *(_DWORD *)(v2 + 304) = 1010;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[13],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 2712),
        (const char (*)[13])byte_1A13B5E0,
        (data::ShopType *)(v2 + 304));
      if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 320, byte_1A13B5E0);
      *(_DWORD *)(v2 + 320) = 1011;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[20],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 2752),
        (const char (*)[20])byte_1A13B620,
        (data::ShopType *)(v2 + 320));
      if ( *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 336, byte_1A13B620);
      *(_DWORD *)(v2 + 336) = 1012;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[20],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 2792),
        (const char (*)[20])byte_1A13B660,
        (data::ShopType *)(v2 + 336));
      if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 352, byte_1A13B660);
      *(_DWORD *)(v2 + 352) = 1013;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[17],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 2832),
        (const char (*)[17])byte_1A13B6A0,
        (data::ShopType *)(v2 + 352));
      if ( *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 368, byte_1A13B6A0);
      *(_DWORD *)(v2 + 368) = 1014;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[17],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 2872),
        (const char (*)[17])byte_1A13B6E0,
        (data::ShopType *)(v2 + 368));
      if ( *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 384, byte_1A13B6E0);
      *(_DWORD *)(v2 + 384) = 1015;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[20],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 2912),
        (const char (*)[20])byte_1A13B720,
        (data::ShopType *)(v2 + 384));
      if ( *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 400, byte_1A13B720);
      *(_DWORD *)(v2 + 400) = 1016;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[32],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 2952),
        (const char (*)[32])byte_1A13B760,
        (data::ShopType *)(v2 + 400));
      if ( *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 416, byte_1A13B760);
      *(_DWORD *)(v2 + 416) = 1017;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[20],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 2992),
        (const char (*)[20])byte_1A13B7A0,
        (data::ShopType *)(v2 + 416));
      if ( *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 432, byte_1A13B7A0);
      *(_DWORD *)(v2 + 432) = 1018;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[23],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 3032),
        (const char (*)[23])byte_1A13B7E0,
        (data::ShopType *)(v2 + 432));
      if ( *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 448, byte_1A13B7E0);
      *(_DWORD *)(v2 + 448) = 1019;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[17],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 3072),
        (const char (*)[17])byte_1A13B820,
        (data::ShopType *)(v2 + 448));
      if ( *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 464, byte_1A13B820);
      *(_DWORD *)(v2 + 464) = 1020;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[17],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 3112),
        (const char (*)[17])byte_1A13B860,
        (data::ShopType *)(v2 + 464));
      if ( *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 480, byte_1A13B860);
      *(_DWORD *)(v2 + 480) = 1021;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[17],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 3152),
        (const char (*)[17])byte_1A13B8A0,
        (data::ShopType *)(v2 + 480));
      if ( *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 496, byte_1A13B8A0);
      *(_DWORD *)(v2 + 496) = 1022;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[17],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 3192),
        (const char (*)[17])byte_1A13B8E0,
        (data::ShopType *)(v2 + 496));
      if ( *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 512, byte_1A13B8E0);
      *(_DWORD *)(v2 + 512) = 1023;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[17],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 3232),
        (const char (*)[17])byte_1A13B920,
        (data::ShopType *)(v2 + 512));
      if ( *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 528, byte_1A13B920);
      *(_DWORD *)(v2 + 528) = 1024;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[17],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 3272),
        (const char (*)[17])byte_1A13B960,
        (data::ShopType *)(v2 + 528));
      if ( *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 544, byte_1A13B960);
      *(_DWORD *)(v2 + 544) = 1025;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[17],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 3312),
        (const char (*)[17])byte_1A13B9A0,
        (data::ShopType *)(v2 + 544));
      if ( *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 560, byte_1A13B9A0);
      *(_DWORD *)(v2 + 560) = 1026;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[20],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 3352),
        (const char (*)[20])byte_1A13B9E0,
        (data::ShopType *)(v2 + 560));
      if ( *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 576, byte_1A13B9E0);
      *(_DWORD *)(v2 + 576) = 1027;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[20],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 3392),
        (const char (*)[20])byte_1A13BA20,
        (data::ShopType *)(v2 + 576));
      if ( *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 592, byte_1A13BA20);
      *(_DWORD *)(v2 + 592) = 1028;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[17],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 3432),
        (const char (*)[17])byte_1A13BA60,
        (data::ShopType *)(v2 + 592));
      if ( *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 608, byte_1A13BA60);
      *(_DWORD *)(v2 + 608) = 1029;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[17],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 3472),
        (const char (*)[17])byte_1A13BAA0,
        (data::ShopType *)(v2 + 608));
      if ( *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 624, byte_1A13BAA0);
      *(_DWORD *)(v2 + 624) = 1030;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[20],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 3512),
        (const char (*)[20])byte_1A13BAE0,
        (data::ShopType *)(v2 + 624));
      if ( *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 640, byte_1A13BAE0);
      *(_DWORD *)(v2 + 640) = 1031;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[17],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 3552),
        (const char (*)[17])byte_1A13BB20,
        (data::ShopType *)(v2 + 640));
      if ( *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 656, byte_1A13BB20);
      *(_DWORD *)(v2 + 656) = 1032;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[17],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 3592),
        (const char (*)[17])byte_1A13BB60,
        (data::ShopType *)(v2 + 656));
      if ( *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 672, byte_1A13BB60);
      *(_DWORD *)(v2 + 672) = 1033;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[17],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 3632),
        (const char (*)[17])byte_1A13BBA0,
        (data::ShopType *)(v2 + 672));
      if ( *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 688, byte_1A13BBA0);
      *(_DWORD *)(v2 + 688) = 1034;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[26],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 3672),
        (const char (*)[26])byte_1A13BBE0,
        (data::ShopType *)(v2 + 688));
      if ( *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 704, byte_1A13BBE0);
      *(_DWORD *)(v2 + 704) = 1035;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[20],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 3712),
        (const char (*)[20])byte_1A13BC20,
        (data::ShopType *)(v2 + 704));
      if ( *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 720, byte_1A13BC20);
      *(_DWORD *)(v2 + 720) = 1036;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[35],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 3752),
        (const char (*)[35])byte_1A13BC60,
        (data::ShopType *)(v2 + 720));
      if ( *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 736, byte_1A13BC60);
      *(_DWORD *)(v2 + 736) = 1037;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[28],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 3792),
        (const char (*)[28])byte_1A13BCC0,
        (data::ShopType *)(v2 + 736));
      if ( *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 752, byte_1A13BCC0);
      *(_DWORD *)(v2 + 752) = 1038;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[34],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 3832),
        (const char (*)[34])byte_1A13BD00,
        (data::ShopType *)(v2 + 752));
      if ( *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 768, byte_1A13BD00);
      *(_DWORD *)(v2 + 768) = 1039;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[20],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 3872),
        (const char (*)[20])byte_1A13BD60,
        (data::ShopType *)(v2 + 768));
      if ( *(_BYTE *)(((v2 + 784) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 784) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 784, byte_1A13BD60);
      *(_DWORD *)(v2 + 784) = 1040;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[28],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 3912),
        (const char (*)[28])byte_1A13BDA0,
        (data::ShopType *)(v2 + 784));
      if ( *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 800, byte_1A13BDA0);
      *(_DWORD *)(v2 + 800) = 1041;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[25],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 3952),
        (const char (*)[25])byte_1A13BDE0,
        (data::ShopType *)(v2 + 800));
      if ( *(_BYTE *)(((v2 + 816) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 816) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 816, byte_1A13BDE0);
      *(_DWORD *)(v2 + 816) = 1042;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[17],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 3992),
        (const char (*)[17])byte_1A13BE20,
        (data::ShopType *)(v2 + 816));
      if ( *(_BYTE *)(((v2 + 832) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 832) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 832, byte_1A13BE20);
      *(_DWORD *)(v2 + 832) = 1043;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[22],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 4032),
        (const char (*)[22])byte_1A13BE60,
        (data::ShopType *)(v2 + 832));
      if ( *(_BYTE *)(((v2 + 848) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 848) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 848, byte_1A13BE60);
      *(_DWORD *)(v2 + 848) = 1044;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[22],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 4072),
        (const char (*)[22])byte_1A13BEA0,
        (data::ShopType *)(v2 + 848));
      if ( *(_BYTE *)(((v2 + 864) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 864) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 864, byte_1A13BEA0);
      *(_DWORD *)(v2 + 864) = 1045;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[17],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 4112),
        (const char (*)[17])byte_1A13BEE0,
        (data::ShopType *)(v2 + 864));
      if ( *(_BYTE *)(((v2 + 880) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 880) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 880, byte_1A13BEE0);
      *(_DWORD *)(v2 + 880) = 1046;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[17],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 4152),
        (const char (*)[17])byte_1A13BF20,
        (data::ShopType *)(v2 + 880));
      if ( *(_BYTE *)(((v2 + 896) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 896) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 896, byte_1A13BF20);
      *(_DWORD *)(v2 + 896) = 1047;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[20],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 4192),
        (const char (*)[20])byte_1A13BF60,
        (data::ShopType *)(v2 + 896));
      if ( *(_BYTE *)(((v2 + 912) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 912) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 912, byte_1A13BF60);
      *(_DWORD *)(v2 + 912) = 1048;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[19],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 4232),
        (const char (*)[19])byte_1A13BFA0,
        (data::ShopType *)(v2 + 912));
      if ( *(_BYTE *)(((v2 + 928) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 928) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 928, byte_1A13BFA0);
      *(_DWORD *)(v2 + 928) = 1049;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[19],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 4272),
        (const char (*)[19])byte_1A13BFE0,
        (data::ShopType *)(v2 + 928));
      if ( *(_BYTE *)(((v2 + 944) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 944) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 944, byte_1A13BFE0);
      *(_DWORD *)(v2 + 944) = 1050;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[17],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 4312),
        (const char (*)[17])byte_1A13C020,
        (data::ShopType *)(v2 + 944));
      if ( *(_BYTE *)(((v2 + 960) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 960) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 960, byte_1A13C020);
      *(_DWORD *)(v2 + 960) = 1051;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[17],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 4352),
        (const char (*)[17])byte_1A13C060,
        (data::ShopType *)(v2 + 960));
      if ( *(_BYTE *)(((v2 + 976) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 976) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 976, byte_1A13C060);
      *(_DWORD *)(v2 + 976) = 1052;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[13],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 4392),
        (const char (*)[13])byte_1A13C0A0,
        (data::ShopType *)(v2 + 976));
      if ( *(_BYTE *)(((v2 + 992) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 992) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 992, byte_1A13C0A0);
      *(_DWORD *)(v2 + 992) = 1053;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[17],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 4432),
        (const char (*)[17])byte_1A13C0E0,
        (data::ShopType *)(v2 + 992));
      if ( *(_BYTE *)(((v2 + 1008) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1008) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1008, byte_1A13C0E0);
      *(_DWORD *)(v2 + 1008) = 1054;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[17],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 4472),
        (const char (*)[17])byte_1A13C120,
        (data::ShopType *)(v2 + 1008));
      if ( *(_BYTE *)(((v2 + 1024) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1024) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1024, byte_1A13C120);
      *(_DWORD *)(v2 + 1024) = 1055;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[17],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 4512),
        (const char (*)[17])byte_1A13C160,
        (data::ShopType *)(v2 + 1024));
      if ( *(_BYTE *)(((v2 + 1040) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1040) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1040, byte_1A13C160);
      *(_DWORD *)(v2 + 1040) = 1056;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[14],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 4552),
        (const char (*)[14])byte_1A13C1A0,
        (data::ShopType *)(v2 + 1040));
      if ( *(_BYTE *)(((v2 + 1056) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1056) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1056, byte_1A13C1A0);
      *(_DWORD *)(v2 + 1056) = 1057;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[26],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 4592),
        (const char (*)[26])byte_1A13C1E0,
        (data::ShopType *)(v2 + 1056));
      if ( *(_BYTE *)(((v2 + 1072) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1072) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1072, byte_1A13C1E0);
      *(_DWORD *)(v2 + 1072) = 1058;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[26],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 4632),
        (const char (*)[26])byte_1A13C220,
        (data::ShopType *)(v2 + 1072));
      if ( *(_BYTE *)(((v2 + 1088) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1088) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1088, byte_1A13C220);
      *(_DWORD *)(v2 + 1088) = 1059;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[17],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 4672),
        (const char (*)[17])byte_1A13C260,
        (data::ShopType *)(v2 + 1088));
      if ( *(_BYTE *)(((v2 + 1104) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1104) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1104, byte_1A13C260);
      *(_DWORD *)(v2 + 1104) = 1060;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[23],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 4712),
        (const char (*)[23])byte_1A13C2A0,
        (data::ShopType *)(v2 + 1104));
      if ( *(_BYTE *)(((v2 + 1120) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1120) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1120, byte_1A13C2A0);
      *(_DWORD *)(v2 + 1120) = 1061;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[17],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 4752),
        (const char (*)[17])byte_1A13C2E0,
        (data::ShopType *)(v2 + 1120));
      if ( *(_BYTE *)(((v2 + 1136) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1136) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1136, byte_1A13C2E0);
      *(_DWORD *)(v2 + 1136) = 1062;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[23],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 4792),
        (const char (*)[23])byte_1A13C320,
        (data::ShopType *)(v2 + 1136));
      if ( *(_BYTE *)(((v2 + 1152) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1152) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1152, byte_1A13C320);
      *(_DWORD *)(v2 + 1152) = 1063;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[20],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 4832),
        (const char (*)[20])byte_1A13C360,
        (data::ShopType *)(v2 + 1152));
      if ( *(_BYTE *)(((v2 + 1168) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1168) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1168, byte_1A13C360);
      *(_DWORD *)(v2 + 1168) = 1064;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[20],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 4872),
        (const char (*)[20])byte_1A13C3A0,
        (data::ShopType *)(v2 + 1168));
      if ( *(_BYTE *)(((v2 + 1184) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1184) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1184, byte_1A13C3A0);
      *(_DWORD *)(v2 + 1184) = 1065;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[20],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 4912),
        (const char (*)[20])byte_1A13C3E0,
        (data::ShopType *)(v2 + 1184));
      if ( *(_BYTE *)(((v2 + 1200) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1200) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1200, byte_1A13C3E0);
      *(_DWORD *)(v2 + 1200) = 1066;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[20],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 4952),
        (const char (*)[20])byte_1A13C420,
        (data::ShopType *)(v2 + 1200));
      if ( *(_BYTE *)(((v2 + 1216) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1216) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1216, byte_1A13C420);
      *(_DWORD *)(v2 + 1216) = 1067;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[17],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 4992),
        (const char (*)[17])byte_1A13C460,
        (data::ShopType *)(v2 + 1216));
      if ( *(_BYTE *)(((v2 + 1232) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1232) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1232, byte_1A13C460);
      *(_DWORD *)(v2 + 1232) = 1068;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[29],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 5032),
        (const char (*)[29])byte_1A13C4A0,
        (data::ShopType *)(v2 + 1232));
      if ( *(_BYTE *)(((v2 + 1248) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1248) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1248, byte_1A13C4A0);
      *(_DWORD *)(v2 + 1248) = 1069;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[19],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 5072),
        (const char (*)[19])byte_1A13C4E0,
        (data::ShopType *)(v2 + 1248));
      if ( *(_BYTE *)(((v2 + 1264) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1264) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1264, byte_1A13C4E0);
      *(_DWORD *)(v2 + 1264) = 1070;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[23],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 5112),
        (const char (*)[23])byte_1A13C520,
        (data::ShopType *)(v2 + 1264));
      if ( *(_BYTE *)(((v2 + 1280) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1280) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1280, byte_1A13C520);
      *(_DWORD *)(v2 + 1280) = 1071;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[20],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 5152),
        (const char (*)[20])byte_1A13C560,
        (data::ShopType *)(v2 + 1280));
      if ( *(_BYTE *)(((v2 + 1296) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1296) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1296, byte_1A13C560);
      *(_DWORD *)(v2 + 1296) = 1072;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[17],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 5192),
        (const char (*)[17])byte_1A13C5A0,
        (data::ShopType *)(v2 + 1296));
      if ( *(_BYTE *)(((v2 + 1312) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1312) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1312, byte_1A13C5A0);
      *(_DWORD *)(v2 + 1312) = 1073;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[20],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 5232),
        (const char (*)[20])byte_1A13C5E0,
        (data::ShopType *)(v2 + 1312));
      if ( *(_BYTE *)(((v2 + 1328) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1328) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1328, byte_1A13C5E0);
      *(_DWORD *)(v2 + 1328) = 1074;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[20],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 5272),
        (const char (*)[20])byte_1A13C620,
        (data::ShopType *)(v2 + 1328));
      if ( *(_BYTE *)(((v2 + 1344) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1344) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1344, byte_1A13C620);
      *(_DWORD *)(v2 + 1344) = 1075;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[20],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 5312),
        (const char (*)[20])byte_1A13C660,
        (data::ShopType *)(v2 + 1344));
      if ( *(_BYTE *)(((v2 + 1360) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1360) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1360, byte_1A13C660);
      *(_DWORD *)(v2 + 1360) = 1076;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[23],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 5352),
        (const char (*)[23])byte_1A13C6A0,
        (data::ShopType *)(v2 + 1360));
      if ( *(_BYTE *)(((v2 + 1376) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1376) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1376, byte_1A13C6A0);
      *(_DWORD *)(v2 + 1376) = 1077;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[20],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 5392),
        (const char (*)[20])byte_1A13C6E0,
        (data::ShopType *)(v2 + 1376));
      if ( *(_BYTE *)(((v2 + 1392) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1392) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1392, byte_1A13C6E0);
      *(_DWORD *)(v2 + 1392) = 1078;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[17],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 5432),
        (const char (*)[17])byte_1A13C720,
        (data::ShopType *)(v2 + 1392));
      if ( *(_BYTE *)(((v2 + 1408) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1408) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1408, byte_1A13C720);
      *(_DWORD *)(v2 + 1408) = 1079;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[23],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 5472),
        (const char (*)[23])byte_1A13C760,
        (data::ShopType *)(v2 + 1408));
      if ( *(_BYTE *)(((v2 + 1424) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1424) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1424, byte_1A13C760);
      *(_DWORD *)(v2 + 1424) = 1080;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[23],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 5512),
        (const char (*)[23])byte_1A13C7A0,
        (data::ShopType *)(v2 + 1424));
      if ( *(_BYTE *)(((v2 + 1440) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1440) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1440, byte_1A13C7A0);
      *(_DWORD *)(v2 + 1440) = 1081;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[17],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 5552),
        (const char (*)[17])byte_1A13C7E0,
        (data::ShopType *)(v2 + 1440));
      if ( *(_BYTE *)(((v2 + 1456) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1456) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1456, byte_1A13C7E0);
      *(_DWORD *)(v2 + 1456) = 1082;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[20],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 5592),
        (const char (*)[20])byte_1A13C820,
        (data::ShopType *)(v2 + 1456));
      if ( *(_BYTE *)(((v2 + 1472) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1472) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1472, byte_1A13C820);
      *(_DWORD *)(v2 + 1472) = 1083;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[17],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 5632),
        (const char (*)[17])byte_1A13C860,
        (data::ShopType *)(v2 + 1472));
      if ( *(_BYTE *)(((v2 + 1488) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1488) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1488, byte_1A13C860);
      *(_DWORD *)(v2 + 1488) = 1084;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[23],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 5672),
        (const char (*)[23])byte_1A13C8A0,
        (data::ShopType *)(v2 + 1488));
      if ( *(_BYTE *)(((v2 + 1504) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1504) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1504, byte_1A13C8A0);
      *(_DWORD *)(v2 + 1504) = 1085;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[20],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 5712),
        (const char (*)[20])byte_1A13C8E0,
        (data::ShopType *)(v2 + 1504));
      if ( *(_BYTE *)(((v2 + 1520) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1520) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1520, byte_1A13C8E0);
      *(_DWORD *)(v2 + 1520) = 1086;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[20],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 5752),
        (const char (*)[20])byte_1A13C920,
        (data::ShopType *)(v2 + 1520));
      if ( *(_BYTE *)(((v2 + 1536) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1536) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1536, byte_1A13C920);
      *(_DWORD *)(v2 + 1536) = 1087;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[20],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 5792),
        (const char (*)[20])byte_1A13C960,
        (data::ShopType *)(v2 + 1536));
      if ( *(_BYTE *)(((v2 + 1552) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1552) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1552, byte_1A13C960);
      *(_DWORD *)(v2 + 1552) = 1088;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[20],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 5832),
        (const char (*)[20])byte_1A13C9A0,
        (data::ShopType *)(v2 + 1552));
      if ( *(_BYTE *)(((v2 + 1568) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1568) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1568, byte_1A13C9A0);
      *(_DWORD *)(v2 + 1568) = 2000;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[32],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 5872),
        (const char (*)[32])byte_1A13C9E0,
        (data::ShopType *)(v2 + 1568));
      if ( *(_BYTE *)(((v2 + 1584) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1584) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1584, byte_1A13C9E0);
      *(_DWORD *)(v2 + 1584) = 2001;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[32],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 5912),
        (const char (*)[32])byte_1A13CA20,
        (data::ShopType *)(v2 + 1584));
      if ( *(_BYTE *)(((v2 + 1600) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1600) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1600, byte_1A13CA20);
      *(_DWORD *)(v2 + 1600) = 2002;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[32],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 5952),
        (const char (*)[32])byte_1A13CA60,
        (data::ShopType *)(v2 + 1600));
      if ( *(_BYTE *)(((v2 + 1616) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1616) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1616, byte_1A13CA60);
      *(_DWORD *)(v2 + 1616) = 2003;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[32],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 5992),
        (const char (*)[32])byte_1A13CAA0,
        (data::ShopType *)(v2 + 1616));
      if ( *(_BYTE *)(((v2 + 1632) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1632) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1632, byte_1A13CAA0);
      *(_DWORD *)(v2 + 1632) = 15001;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[25],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 6032),
        (const char (*)[25])byte_1A13CAE0,
        (data::ShopType *)(v2 + 1632));
      if ( *(_BYTE *)(((v2 + 1648) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1648) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1648, byte_1A13CAE0);
      *(_DWORD *)(v2 + 1648) = 16001;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[22],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 6072),
        (const char (*)[22])byte_1A13CB20,
        (data::ShopType *)(v2 + 1648));
      if ( *(_BYTE *)(((v2 + 1664) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1664) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1664, byte_1A13CB20);
      *(_DWORD *)(v2 + 1664) = 16002;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[25],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 6112),
        (const char (*)[25])byte_1A13CB60,
        (data::ShopType *)(v2 + 1664));
      if ( *(_BYTE *)(((v2 + 1680) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1680) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1680, byte_1A13CB60);
      *(_DWORD *)(v2 + 1680) = 20001;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[25],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 6152),
        (const char (*)[25])byte_1A13CBA0,
        (data::ShopType *)(v2 + 1680));
      if ( *(_BYTE *)(((v2 + 1696) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1696) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1696, byte_1A13CBA0);
      *(_DWORD *)(v2 + 1696) = 20002;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[25],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 6192),
        (const char (*)[25])byte_1A13CBE0,
        (data::ShopType *)(v2 + 1696));
      if ( *(_BYTE *)(((v2 + 1712) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1712) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1712, byte_1A13CBE0);
      *(_DWORD *)(v2 + 1712) = 20003;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[25],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 6232),
        (const char (*)[25])byte_1A13CC20,
        (data::ShopType *)(v2 + 1712));
      if ( *(_BYTE *)(((v2 + 1728) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1728) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1728, byte_1A13CC20);
      *(_DWORD *)(v2 + 1728) = 20004;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[22],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 6272),
        (const char (*)[22])byte_1A13CC60,
        (data::ShopType *)(v2 + 1728));
      if ( *(_BYTE *)(((v2 + 1744) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1744) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1744, byte_1A13CC60);
      *(_DWORD *)(v2 + 1744) = 20005;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[25],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 6312),
        (const char (*)[25])byte_1A13CCA0,
        (data::ShopType *)(v2 + 1744));
      if ( *(_BYTE *)(((v2 + 1760) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1760) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1760, byte_1A13CCA0);
      *(_DWORD *)(v2 + 1760) = 27001;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[22],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 6352),
        (const char (*)[22])byte_1A13CCE0,
        (data::ShopType *)(v2 + 1760));
      if ( *(_BYTE *)(((v2 + 1776) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1776) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1776, byte_1A13CCE0);
      *(_DWORD *)(v2 + 1776) = 28001;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[25],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 6392),
        (const char (*)[25])byte_1A13CD20,
        (data::ShopType *)(v2 + 1776));
      if ( *(_BYTE *)(((v2 + 1792) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1792) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1792, byte_1A13CD20);
      *(_DWORD *)(v2 + 1792) = 30001;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[25],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 6432),
        (const char (*)[25])byte_1A13CD60,
        (data::ShopType *)(v2 + 1792));
      if ( *(_BYTE *)(((v2 + 1808) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1808) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1808, byte_1A13CD60);
      *(_DWORD *)(v2 + 1808) = 30002;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[28],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 6472),
        (const char (*)[28])byte_1A13CDA0,
        (data::ShopType *)(v2 + 1808));
      if ( *(_BYTE *)(((v2 + 1824) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1824) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1824, byte_1A13CDA0);
      *(_DWORD *)(v2 + 1824) = 31001;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[23],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 6512),
        (const char (*)[23])byte_1A13CDE0,
        (data::ShopType *)(v2 + 1824));
      if ( *(_BYTE *)(((v2 + 1840) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1840) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1840, byte_1A13CDE0);
      *(_DWORD *)(v2 + 1840) = 32001;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[22],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 6552),
        (const char (*)[22])byte_1A13CE20,
        (data::ShopType *)(v2 + 1840));
      if ( *(_BYTE *)(((v2 + 1856) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1856) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1856, byte_1A13CE20);
      *(_DWORD *)(v2 + 1856) = 32002;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[22],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 6592),
        (const char (*)[22])byte_1A13CE60,
        (data::ShopType *)(v2 + 1856));
      if ( *(_BYTE *)(((v2 + 1872) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1872) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1872, byte_1A13CE60);
      *(_DWORD *)(v2 + 1872) = 33001;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[19],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 6632),
        (const char (*)[19])byte_1A13CEA0,
        (data::ShopType *)(v2 + 1872));
      if ( *(_BYTE *)(((v2 + 1888) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 1888) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 1888, byte_1A13CEA0);
      *(_DWORD *)(v2 + 1888) = 34001;
      std::pair<std::string const,data::ShopType>::pair<char const(&)[25],data::ShopType,true>(
        (std::pair<const std::string,data::ShopType> *const)(v2 + 6672),
        (const char (*)[25])byte_1A13CEE0,
        (data::ShopType *)(v2 + 1888));
      std::allocator<std::pair<std::string const,data::ShopType>>::allocator((std::allocator<std::pair<const std::string,data::ShopType> > *const)(v2 + 64));
      std::unordered_map<std::string,data::ShopType>::unordered_map(
        &data::enumStrToVal(char const*,data::ShopType &)::m,
        (std::initializer_list<std::pair<const std::string,data::ShopType> >)__PAIR128__(113LL, v2 + 2192),
        0LL,
        (const std::unordered_map<std::string,data::ShopType>::hasher *)(v2 + 32),
        (const std::unordered_map<std::string,data::ShopType>::key_equal *)(v2 + 48),
        (const std::unordered_map<std::string,data::ShopType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::ShopType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::ShopType>::~unordered_map,
        &data::enumStrToVal(char const*,data::ShopType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::ShopType>>::~allocator((std::allocator<std::pair<const std::string,data::ShopType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::ShopType> *)(v2 + 6712);
            i != (std::pair<const std::string,data::ShopType> *)(v2 + 2192);
            std::pair<std::string const,data::ShopType>::~pair(i) )
      {
        --i;
      }
      __asan_poison_stack_memory(v2 + 2192, 4520LL);
      *(_BYTE *)(((v2 + 1888) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1872) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1856) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1840) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1824) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1808) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1792) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1776) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1760) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1744) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1728) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1712) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1696) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1680) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1664) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1648) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1632) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1616) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1600) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1584) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1568) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1552) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1536) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1520) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1504) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1488) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1472) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1456) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1440) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1424) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1408) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1392) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1376) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1360) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1344) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1328) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1312) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1296) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1280) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1264) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1248) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1232) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1216) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1200) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1184) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1168) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1152) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1136) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1104) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1072) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1040) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 1008) >> 3) + 0x7FFF8000) = -8;
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
    *(_BYTE *)(((v2 + 1904) >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((v2 + 2064) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 80);
    v7 = *(const char **)(v2 + 1968);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 2064),
      v7,
      (const std::allocator<char> *)(v2 + 80));
    if ( *(_BYTE *)(((v2 + 1904) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 1904, v7);
    *(std::unordered_map<std::string,data::ShopType>::iterator *)(v2 + 1904) = std::unordered_map<std::string,data::ShopType>::find(
                                                                                 &data::enumStrToVal(char const*,data::ShopType &)::m,
                                                                                 (const std::unordered_map<std::string,data::ShopType>::key_type *)(v2 + 2064));
    std::string::~string((void *)(v2 + 2064));
    *(_DWORD *)(((v2 + 2064) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 80);
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 1936) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 1936) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 1936, v2 + 2064);
    *(std::unordered_map<std::string,data::ShopType>::iterator *)(v2 + 1936) = std::unordered_map<std::string,data::ShopType>::end(&data::enumStrToVal(char const*,data::ShopType &)::m);
    v8 = (char *)(v2 + 1936);
    v9 = std::__detail::operator==<std::pair<std::string const,data::ShopType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ShopType>,true> *)(v2 + 1904),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ShopType>,true> *)(v2 + 1936));
    *(_BYTE *)(((v2 + 1936) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
    {
      *(_DWORD *)(((v2 + 2128) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 2128) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 2159) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 111) & 7) >= *(_BYTE *)(((v2 + 2159) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 2128, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 2128),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
        "enumStrToVal",
        172);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 2128),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v10, (const char *const *)(v2 + 1968));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2128));
      v5 = -1;
    }
    else
    {
      v11 = std::__detail::_Node_iterator<std::pair<std::string const,data::ShopType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::ShopType>,false,true> *const)(v2 + 1904));
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
    if ( *(char *)(((v2 + 2000) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 2031) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 48 + 31) & 7) >= *(_BYTE *)(((v2 + 2031) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 2000, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 2000),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
      "enumStrToVal",
      48);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
      (common::milog::MiLogStream *const)(v2 + 2000),
      (const char (*)[14])"s is nullptr!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2000));
    v5 = -1;
  }
  v14 = v5;
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8360) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 872) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_7(v2, 6976LL, v17);
  }
  return v14;
};

// Line 181: range 000000000CB77A1A-000000000CB77A30
const char *__cdecl data::getDescription(data::ShopType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 186: range 000000000CB77A31-000000000CB77BE6
bool __cdecl data::isValidShopType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::ShopType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::ShopType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:187 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidShopType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getShopTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::ShopType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::ShopType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getShopTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::ShopType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::ShopType,std::pair<std::string,std::string>>::find(
                                                                                                 v6,
                                                                                                 (const std::map<data::ShopType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::ShopType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::ShopType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 192: range 000000000CB77BE7-000000000CB77D48
bool __cdecl data::isValidShopTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::ShopType> *v5; // rcx
  const std::unordered_map<std::string,data::ShopType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidShopTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getShopTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::ShopType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ShopType>::end(v5);
  v6 = data::getShopTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::ShopType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::ShopType>::find(
                                                                                   v6,
                                                                                   name);
  result = std::__detail::operator!=<std::pair<std::string const,data::ShopType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ShopType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ShopType>,true> *)(v2 + 64));
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

// Line 197: range 000000000CB77D49-000000000CB7B9A4
const std::unordered_map<std::string,data::ShopType> *__cdecl data::getShopTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::ShopType> *i; // r14
  char v6[6768]; // [rsp+10h] [rbp-1A70h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_7(6720LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "118 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9"
                        " <unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unkn"
                        "own> 208 4 9 <unknown> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 4 9 <unknown> 2"
                        "88 4 9 <unknown> 304 4 9 <unknown> 320 4 9 <unknown> 336 4 9 <unknown> 352 4 9 <unknown> 368 4 9"
                        " <unknown> 384 4 9 <unknown> 400 4 9 <unknown> 416 4 9 <unknown> 432 4 9 <unknown> 448 4 9 <unkn"
                        "own> 464 4 9 <unknown> 480 4 9 <unknown> 496 4 9 <unknown> 512 4 9 <unknown> 528 4 9 <unknown> 5"
                        "44 4 9 <unknown> 560 4 9 <unknown> 576 4 9 <unknown> 592 4 9 <unknown> 608 4 9 <unknown> 624 4 9"
                        " <unknown> 640 4 9 <unknown> 656 4 9 <unknown> 672 4 9 <unknown> 688 4 9 <unknown> 704 4 9 <unkn"
                        "own> 720 4 9 <unknown> 736 4 9 <unknown> 752 4 9 <unknown> 768 4 9 <unknown> 784 4 9 <unknown> 8"
                        "00 4 9 <unknown> 816 4 9 <unknown> 832 4 9 <unknown> 848 4 9 <unknown> 864 4 9 <unknown> 880 4 9"
                        " <unknown> 896 4 9 <unknown> 912 4 9 <unknown> 928 4 9 <unknown> 944 4 9 <unknown> 960 4 9 <unkn"
                        "own> 976 4 9 <unknown> 992 4 9 <unknown> 1008 4 9 <unknown> 1024 4 9 <unknown> 1040 4 9 <unknown"
                        "> 1056 4 9 <unknown> 1072 4 9 <unknown> 1088 4 9 <unknown> 1104 4 9 <unknown> 1120 4 9 <unknown>"
                        " 1136 4 9 <unknown> 1152 4 9 <unknown> 1168 4 9 <unknown> 1184 4 9 <unknown> 1200 4 9 <unknown> "
                        "1216 4 9 <unknown> 1232 4 9 <unknown> 1248 4 9 <unknown> 1264 4 9 <unknown> 1280 4 9 <unknown> 1"
                        "296 4 9 <unknown> 1312 4 9 <unknown> 1328 4 9 <unknown> 1344 4 9 <unknown> 1360 4 9 <unknown> 13"
                        "76 4 9 <unknown> 1392 4 9 <unknown> 1408 4 9 <unknown> 1424 4 9 <unknown> 1440 4 9 <unknown> 145"
                        "6 4 9 <unknown> 1472 4 9 <unknown> 1488 4 9 <unknown> 1504 4 9 <unknown> 1520 4 9 <unknown> 1536"
                        " 4 9 <unknown> 1552 4 9 <unknown> 1568 4 9 <unknown> 1584 4 9 <unknown> 1600 4 9 <unknown> 1616 "
                        "4 9 <unknown> 1632 4 9 <unknown> 1648 4 9 <unknown> 1664 4 9 <unknown> 1680 4 9 <unknown> 1696 4"
                        " 9 <unknown> 1712 4 9 <unknown> 1728 4 9 <unknown> 1744 4 9 <unknown> 1760 4 9 <unknown> 1776 4 "
                        "9 <unknown> 1792 4 9 <unknown> 1808 4 9 <unknown> 1824 4 9 <unknown> 1840 4 9 <unknown> 1856 4 9"
                        " <unknown> 1872 4 9 <unknown> 1888 4 9 <unknown> 1904 4560 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::getShopTypeNameMap[abi:cxx11];
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
  v3[536862751] = -234556924;
  v3[536862752] = -234556924;
  v3[536862753] = -234556924;
  v3[536862754] = -234556924;
  v3[536862755] = -234556924;
  v3[536862756] = -234556924;
  v3[536862757] = -234556924;
  v3[536862758] = -234556924;
  v3[536862759] = -234556924;
  v3[536862760] = -234556924;
  v3[536862761] = -234556924;
  v3[536862762] = -234556924;
  v3[536862763] = -234556924;
  v3[536862764] = -234556924;
  v3[536862765] = -234556924;
  v3[536862766] = -234556924;
  v3[536862767] = -234556924;
  v3[536862768] = -234556924;
  v3[536862769] = -234556924;
  v3[536862770] = -234556924;
  v3[536862771] = -234556924;
  v3[536862772] = -234556924;
  v3[536862773] = -234556924;
  v3[536862774] = -234556924;
  v3[536862775] = -234556924;
  v3[536862776] = -234556924;
  v3[536862777] = -234556924;
  v3[536862778] = -234556924;
  v3[536862779] = 61956;
  v3[536862922] = -202116109;
  v3[536862923] = -202116109;
  v3[536862924] = -202116109;
  v3[536862925] = -202116109;
  v3[536862926] = -202116109;
  v3[536862927] = -202116109;
  v3[536862928] = -202116109;
  v3[536862929] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getShopTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getShopTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[15],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 1904),
      (const char (*)[15])"SHOP_TYPE_NONE",
      (data::ShopType *)(v1 + 80));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, "SHOP_TYPE_NONE");
    *(_DWORD *)(v1 + 96) = 900;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[20],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 1944),
      (const char (*)[20])"SHOP_TYPE_RECOMMEND",
      (data::ShopType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "SHOP_TYPE_RECOMMEND");
    *(_DWORD *)(v1 + 112) = 901;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[16],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 1984),
      (const char (*)[16])"SHOP_TYPE_HCOIN",
      (data::ShopType *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, "SHOP_TYPE_HCOIN");
    *(_DWORD *)(v1 + 128) = 902;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[18],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 2024),
      (const char (*)[18])"SHOP_TYPE_PACKAGE",
      (data::ShopType *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, "SHOP_TYPE_PACKAGE");
    *(_DWORD *)(v1 + 144) = 903;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[16],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 2064),
      (const char (*)[16])"SHOP_TYPE_MCOIN",
      (data::ShopType *)(v1 + 144));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, "SHOP_TYPE_MCOIN");
    *(_DWORD *)(v1 + 160) = 1001;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[17],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 2104),
      (const char (*)[17])"SHOP_TYPE_PAIMON",
      (data::ShopType *)(v1 + 160));
    if ( *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 176, "SHOP_TYPE_PAIMON");
    *(_DWORD *)(v1 + 176) = 1002;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[15],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 2144),
      (const char (*)[15])"SHOP_TYPE_CITY",
      (data::ShopType *)(v1 + 176));
    if ( *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 192, "SHOP_TYPE_CITY");
    *(_DWORD *)(v1 + 192) = 1003;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[21],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 2184),
      (const char (*)[21])"SHOP_TYPE_BLACKSMITH",
      (data::ShopType *)(v1 + 192));
    if ( *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 208, "SHOP_TYPE_BLACKSMITH");
    *(_DWORD *)(v1 + 208) = 1004;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[18],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 2224),
      (const char (*)[18])"SHOP_TYPE_GROCERY",
      (data::ShopType *)(v1 + 208));
    if ( *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 224, "SHOP_TYPE_GROCERY");
    *(_DWORD *)(v1 + 224) = 1005;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[15],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 2264),
      (const char (*)[15])"SHOP_TYPE_FOOD",
      (data::ShopType *)(v1 + 224));
    if ( *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 240, "SHOP_TYPE_FOOD");
    *(_DWORD *)(v1 + 240) = 1006;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[19],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 2304),
      (const char (*)[19])"SHOP_TYPE_SEA_LAMP",
      (data::ShopType *)(v1 + 240));
    if ( *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 256, "SHOP_TYPE_SEA_LAMP");
    *(_DWORD *)(v1 + 256) = 1007;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[23],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 2344),
      (const char (*)[23])"SHOP_TYPE_VIRTUAL_SHOP",
      (data::ShopType *)(v1 + 256));
    if ( *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 272, "SHOP_TYPE_VIRTUAL_SHOP");
    *(_DWORD *)(v1 + 272) = 1008;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[24],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 2384),
      (const char (*)[24])"SHOP_TYPE_LIYUE_GROCERY",
      (data::ShopType *)(v1 + 272));
    if ( *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 288, "SHOP_TYPE_LIYUE_GROCERY");
    *(_DWORD *)(v1 + 288) = 1009;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[25],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 2424),
      (const char (*)[25])"SHOP_TYPE_LIYUE_SOUVENIR",
      (data::ShopType *)(v1 + 288));
    if ( *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 304, "SHOP_TYPE_LIYUE_SOUVENIR");
    *(_DWORD *)(v1 + 304) = 1010;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[27],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 2464),
      (const char (*)[27])"SHOP_TYPE_LIYUE_RESTAURANT",
      (data::ShopType *)(v1 + 304));
    if ( *(_BYTE *)(((v1 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 320) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 320, "SHOP_TYPE_LIYUE_RESTAURANT");
    *(_DWORD *)(v1 + 320) = 1011;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[20],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 2504),
      (const char (*)[20])"SHOP_TYPE_NPC_Flora",
      (data::ShopType *)(v1 + 320));
    if ( *(_BYTE *)(((v1 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 336) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 336, "SHOP_TYPE_NPC_Flora");
    *(_DWORD *)(v1 + 336) = 1012;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[22],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 2544),
      (const char (*)[22])"SHOP_TYPE_NPC_Charles",
      (data::ShopType *)(v1 + 336));
    if ( *(_BYTE *)(((v1 + 352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 352) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 352, "SHOP_TYPE_NPC_Charles");
    *(_DWORD *)(v1 + 352) = 1013;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[21],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 2584),
      (const char (*)[21])"SHOP_TYPE_NPC_Shiliu",
      (data::ShopType *)(v1 + 352));
    if ( *(_BYTE *)(((v1 + 368) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 368) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 368, "SHOP_TYPE_NPC_Shiliu");
    *(_DWORD *)(v1 + 368) = 1014;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[21],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 2624),
      (const char (*)[21])"SHOP_TYPE_NPC_Schulz",
      (data::ShopType *)(v1 + 368));
    if ( *(_BYTE *)(((v1 + 384) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 384) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 384, "SHOP_TYPE_NPC_Schulz");
    *(_DWORD *)(v1 + 384) = 1015;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[20],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 2664),
      (const char (*)[20])"SHOP_TYPE_NPC_Brook",
      (data::ShopType *)(v1 + 384));
    if ( *(_BYTE *)(((v1 + 400) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 400) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 400, "SHOP_TYPE_NPC_Brook");
    *(_DWORD *)(v1 + 400) = 1016;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[22],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 2704),
      (const char (*)[22])"SHOP_TYPE_NPC_Hopkins",
      (data::ShopType *)(v1 + 400));
    if ( *(_BYTE *)(((v1 + 416) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 416) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 416, "SHOP_TYPE_NPC_Hopkins");
    *(_DWORD *)(v1 + 416) = 1017;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[20],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 2744),
      (const char (*)[20])"SHOP_TYPE_NPC_Draff",
      (data::ShopType *)(v1 + 416));
    if ( *(_BYTE *)(((v1 + 432) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 432) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 432, "SHOP_TYPE_NPC_Draff");
    *(_DWORD *)(v1 + 432) = 1018;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[22],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 2784),
      (const char (*)[22])"SHOP_TYPE_NPC_Chloris",
      (data::ShopType *)(v1 + 432));
    if ( *(_BYTE *)(((v1 + 448) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 448) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 448, "SHOP_TYPE_NPC_Chloris");
    *(_DWORD *)(v1 + 448) = 1019;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[20],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 2824),
      (const char (*)[20])"SHOP_TYPE_NPC_Licai",
      (data::ShopType *)(v1 + 448));
    if ( *(_BYTE *)(((v1 + 464) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 464) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 464, "SHOP_TYPE_NPC_Licai");
    *(_DWORD *)(v1 + 464) = 1020;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[21],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 2864),
      (const char (*)[21])"SHOP_TYPE_NPC_Yueshu",
      (data::ShopType *)(v1 + 464));
    if ( *(_BYTE *)(((v1 + 480) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 480) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 480, "SHOP_TYPE_NPC_Yueshu");
    *(_DWORD *)(v1 + 480) = 1021;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[18],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 2904),
      (const char (*)[18])"SHOP_TYPE_NPC_Gui",
      (data::ShopType *)(v1 + 480));
    if ( *(_BYTE *)(((v1 + 496) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 496) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 496, "SHOP_TYPE_NPC_Gui");
    *(_DWORD *)(v1 + 496) = 1022;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[18],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 2944),
      (const char (*)[18])"SHOP_TYPE_NPC_Gao",
      (data::ShopType *)(v1 + 496));
    if ( *(_BYTE *)(((v1 + 512) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 512) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 512, "SHOP_TYPE_NPC_Gao");
    *(_DWORD *)(v1 + 512) = 1023;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[18],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 2984),
      (const char (*)[18])"SHOP_TYPE_NPC_Sun",
      (data::ShopType *)(v1 + 512));
    if ( *(_BYTE *)(((v1 + 528) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 528) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 528, "SHOP_TYPE_NPC_Sun");
    *(_DWORD *)(v1 + 528) = 1024;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[21],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 3024),
      (const char (*)[21])"SHOP_TYPE_NPC_Qiming",
      (data::ShopType *)(v1 + 528));
    if ( *(_BYTE *)(((v1 + 544) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 544) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 544, "SHOP_TYPE_NPC_Qiming");
    *(_DWORD *)(v1 + 544) = 1025;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[24],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 3064),
      (const char (*)[24])"SHOP_TYPE_NPC_Zhangshun",
      (data::ShopType *)(v1 + 544));
    if ( *(_BYTE *)(((v1 + 560) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 560) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 560, "SHOP_TYPE_NPC_Zhangshun");
    *(_DWORD *)(v1 + 560) = 1026;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[19],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 3104),
      (const char (*)[19])"SHOP_TYPE_NPC_Chen",
      (data::ShopType *)(v1 + 560));
    if ( *(_BYTE *)(((v1 + 576) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 576) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 576, "SHOP_TYPE_NPC_Chen");
    *(_DWORD *)(v1 + 576) = 1027;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[22],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 3144),
      (const char (*)[22])"SHOP_TYPE_NPC_ErNiang",
      (data::ShopType *)(v1 + 576));
    if ( *(_BYTE *)(((v1 + 592) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 592) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 592, "SHOP_TYPE_NPC_ErNiang");
    *(_DWORD *)(v1 + 592) = 1028;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[21],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 3184),
      (const char (*)[21])"SHOP_TYPE_NPC_Shitou",
      (data::ShopType *)(v1 + 592));
    if ( *(_BYTE *)(((v1 + 608) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 608) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 608, "SHOP_TYPE_NPC_Shitou");
    *(_DWORD *)(v1 + 608) = 1029;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[21],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 3224),
      (const char (*)[21])"SHOP_TYPE_NPC_Jifang",
      (data::ShopType *)(v1 + 608));
    if ( *(_BYTE *)(((v1 + 624) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 624) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 624, "SHOP_TYPE_NPC_Jifang");
    *(_DWORD *)(v1 + 624) = 1030;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[18],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 3264),
      (const char (*)[18])"SHOP_TYPE_NPC_Zhu",
      (data::ShopType *)(v1 + 624));
    if ( *(_BYTE *)(((v1 + 640) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 640) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 640, "SHOP_TYPE_NPC_Zhu");
    *(_DWORD *)(v1 + 640) = 1031;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[18],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 3304),
      (const char (*)[18])"SHOP_TYPE_NPC_Bai",
      (data::ShopType *)(v1 + 640));
    if ( *(_BYTE *)(((v1 + 656) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 656) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 656, "SHOP_TYPE_NPC_Bai");
    *(_DWORD *)(v1 + 656) = 1032;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[18],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 3344),
      (const char (*)[18])"SHOP_TYPE_NPC_Kai",
      (data::ShopType *)(v1 + 656));
    if ( *(_BYTE *)(((v1 + 672) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 672) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 672, "SHOP_TYPE_NPC_Kai");
    *(_DWORD *)(v1 + 672) = 1033;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[23],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 3384),
      (const char (*)[23])"SHOP_TYPE_NPC_Linglang",
      (data::ShopType *)(v1 + 672));
    if ( *(_BYTE *)(((v1 + 688) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 688) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 688, "SHOP_TYPE_NPC_Linglang");
    *(_DWORD *)(v1 + 688) = 1034;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[25],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 3424),
      (const char (*)[25])"SHOP_TYPE_NPC_VerrGoldet",
      (data::ShopType *)(v1 + 688));
    if ( *(_BYTE *)(((v1 + 704) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 704) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 704, "SHOP_TYPE_NPC_VerrGoldet");
    *(_DWORD *)(v1 + 704) = 1035;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[19],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 3464),
      (const char (*)[19])"SHOP_TYPE_NPC_Zhou",
      (data::ShopType *)(v1 + 704));
    if ( *(_BYTE *)(((v1 + 720) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 720) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 720, "SHOP_TYPE_NPC_Zhou");
    *(_DWORD *)(v1 + 720) = 1036;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[25],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 3504),
      (const char (*)[25])"SHOP_TYPE_TASK_Ekaterina",
      (data::ShopType *)(v1 + 720));
    if ( *(_BYTE *)(((v1 + 736) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 736) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 736, "SHOP_TYPE_TASK_Ekaterina");
    *(_DWORD *)(v1 + 736) = 1037;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[25],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 3544),
      (const char (*)[25])"SHOP_TYPE_ACTIVITY_ASTER",
      (data::ShopType *)(v1 + 736));
    if ( *(_BYTE *)(((v1 + 752) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 752) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 752, "SHOP_TYPE_ACTIVITY_ASTER");
    *(_DWORD *)(v1 + 752) = 1038;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[25],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 3584),
      (const char (*)[25])"SHOP_TYPE_TASK_Tartaglia",
      (data::ShopType *)(v1 + 752));
    if ( *(_BYTE *)(((v1 + 768) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 768) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 768, "SHOP_TYPE_TASK_Tartaglia");
    *(_DWORD *)(v1 + 768) = 1039;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[21],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 3624),
      (const char (*)[21])"SHOP_TYPE_NPC_Harris",
      (data::ShopType *)(v1 + 768));
    if ( *(_BYTE *)(((v1 + 784) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 784) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 784, "SHOP_TYPE_NPC_Harris");
    *(_DWORD *)(v1 + 784) = 1040;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[32],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 3664),
      (const char (*)[32])"SHOP_TYPE_ACTIVITY_DRAGON_SPINE",
      (data::ShopType *)(v1 + 784));
    if ( *(_BYTE *)(((v1 + 800) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 800) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 800, "SHOP_TYPE_ACTIVITY_DRAGON_SPINE");
    *(_DWORD *)(v1 + 800) = 1041;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[32],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 3704),
      (const char (*)[32])"SHOP_TYPE_ACTIVITY_TREASURE_MAP",
      (data::ShopType *)(v1 + 800));
    if ( *(_BYTE *)(((v1 + 816) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 816) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 816, "SHOP_TYPE_ACTIVITY_TREASURE_MAP");
    *(_DWORD *)(v1 + 816) = 1042;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[21],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 3744),
      (const char (*)[21])"SHOP_TYPE_NPC_Yinian",
      (data::ShopType *)(v1 + 816));
    if ( *(_BYTE *)(((v1 + 832) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 832) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 832, "SHOP_TYPE_NPC_Yinian");
    *(_DWORD *)(v1 + 832) = 1043;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[28],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 3784),
      (const char (*)[28])"SHOP_TYPE_ACTIVITY_SEA_LAMP",
      (data::ShopType *)(v1 + 832));
    if ( *(_BYTE *)(((v1 + 848) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 848) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 848, "SHOP_TYPE_ACTIVITY_SEA_LAMP");
    *(_DWORD *)(v1 + 848) = 1044;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[30],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 3824),
      (const char (*)[30])"SHOP_TYPE_ACTIVITY_FLEUR_FAIR",
      (data::ShopType *)(v1 + 848));
    if ( *(_BYTE *)(((v1 + 864) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 864) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 864, "SHOP_TYPE_ACTIVITY_FLEUR_FAIR");
    *(_DWORD *)(v1 + 864) = 1045;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[24],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 3864),
      (const char (*)[24])"SHOP_TYPE_NPC_Changshun",
      (data::ShopType *)(v1 + 864));
    if ( *(_BYTE *)(((v1 + 880) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 880) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 880, "SHOP_TYPE_NPC_Changshun");
    *(_DWORD *)(v1 + 880) = 1046;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[20],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 3904),
      (const char (*)[20])"SHOP_TYPE_NPC_Bolai",
      (data::ShopType *)(v1 + 880));
    if ( *(_BYTE *)(((v1 + 896) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 896) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 896, "SHOP_TYPE_NPC_Bolai");
    *(_DWORD *)(v1 + 896) = 1047;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[22],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 3944),
      (const char (*)[22])"SHOP_TYPE_NPC_Ashanpo",
      (data::ShopType *)(v1 + 896));
    if ( *(_BYTE *)(((v1 + 912) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 912) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 912, "SHOP_TYPE_NPC_Ashanpo");
    *(_DWORD *)(v1 + 912) = 1048;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[15],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 3984),
      (const char (*)[15])"SHOP_TYPE_HOME",
      (data::ShopType *)(v1 + 912));
    if ( *(_BYTE *)(((v1 + 928) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 928) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 928, "SHOP_TYPE_HOME");
    *(_DWORD *)(v1 + 928) = 1049;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[21],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 4024),
      (const char (*)[21])"SHOP_TYPE_HOME_LIMIT",
      (data::ShopType *)(v1 + 928));
    if ( *(_BYTE *)(((v1 + 944) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 944) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 944, "SHOP_TYPE_HOME_LIMIT");
    *(_DWORD *)(v1 + 944) = 1050;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[23],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 4064),
      (const char (*)[23])"SHOP_TYPE_NPC_MasterLu",
      (data::ShopType *)(v1 + 944));
    if ( *(_BYTE *)(((v1 + 960) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 960) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 960, "SHOP_TYPE_NPC_MasterLu");
    *(_DWORD *)(v1 + 960) = 1051;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[19],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 4104),
      (const char (*)[19])"SHOP_TYPE_NPC_Goth",
      (data::ShopType *)(v1 + 960));
    if ( *(_BYTE *)(((v1 + 976) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 976) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 976, "SHOP_TYPE_NPC_Goth");
    *(_DWORD *)(v1 + 976) = 1052;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[18],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 4144),
      (const char (*)[18])"SHOP_TYPE_COSTUME",
      (data::ShopType *)(v1 + 976));
    if ( *(_BYTE *)(((v1 + 992) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 992) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 992, "SHOP_TYPE_COSTUME");
    *(_DWORD *)(v1 + 992) = 1053;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[20],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 4184),
      (const char (*)[20])"SHOP_TYPE_NPC_Obata",
      (data::ShopType *)(v1 + 992));
    if ( *(_BYTE *)(((v1 + 1008) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1008) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1008, "SHOP_TYPE_NPC_Obata");
    *(_DWORD *)(v1 + 1008) = 1054;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[21],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 4224),
      (const char (*)[21])"SHOP_TYPE_NPC_Qiuyue",
      (data::ShopType *)(v1 + 1008));
    if ( *(_BYTE *)(((v1 + 1024) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1024) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1024, "SHOP_TYPE_NPC_Qiuyue");
    *(_DWORD *)(v1 + 1024) = 1055;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[21],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 4264),
      (const char (*)[21])"SHOP_TYPE_NPC_Ryouko",
      (data::ShopType *)(v1 + 1024));
    if ( *(_BYTE *)(((v1 + 1040) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1040) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1040, "SHOP_TYPE_NPC_Ryouko");
    *(_DWORD *)(v1 + 1040) = 1056;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[26],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 4304),
      (const char (*)[26])"SHOP_TYPE_INAZUMA_GROCERY",
      (data::ShopType *)(v1 + 1040));
    if ( *(_BYTE *)(((v1 + 1056) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1056) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1056, "SHOP_TYPE_INAZUMA_GROCERY");
    *(_DWORD *)(v1 + 1056) = 1057;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[27],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 4344),
      (const char (*)[27])"SHOP_TYPE_INAZUMA_SOUVENIR",
      (data::ShopType *)(v1 + 1056));
    if ( *(_BYTE *)(((v1 + 1072) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1072) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1072, "SHOP_TYPE_INAZUMA_SOUVENIR");
    *(_DWORD *)(v1 + 1072) = 1058;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[29],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 4384),
      (const char (*)[29])"SHOP_TYPE_INAZUMA_RESTAURANT",
      (data::ShopType *)(v1 + 1072));
    if ( *(_BYTE *)(((v1 + 1088) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1088) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1088, "SHOP_TYPE_INAZUMA_RESTAURANT");
    *(_DWORD *)(v1 + 1088) = 1059;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[21],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 4424),
      (const char (*)[21])"SHOP_TYPE_NPC_Kuroda",
      (data::ShopType *)(v1 + 1088));
    if ( *(_BYTE *)(((v1 + 1104) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1104) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1104, "SHOP_TYPE_NPC_Kuroda");
    *(_DWORD *)(v1 + 1104) = 1060;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[27],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 4464),
      (const char (*)[27])"SHOP_TYPE_NPC_KiminamiAnna",
      (data::ShopType *)(v1 + 1104));
    if ( *(_BYTE *)(((v1 + 1120) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1120) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1120, "SHOP_TYPE_NPC_KiminamiAnna");
    *(_DWORD *)(v1 + 1120) = 1061;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[21],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 4504),
      (const char (*)[21])"SHOP_TYPE_NPC_Tomoki",
      (data::ShopType *)(v1 + 1120));
    if ( *(_BYTE *)(((v1 + 1136) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1136) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1136, "SHOP_TYPE_NPC_Tomoki");
    *(_DWORD *)(v1 + 1136) = 1062;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[24],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 4544),
      (const char (*)[24])"SHOP_TYPE_NPC_Karpillia",
      (data::ShopType *)(v1 + 1136));
    if ( *(_BYTE *)(((v1 + 1152) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1152) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1152, "SHOP_TYPE_NPC_Karpillia");
    *(_DWORD *)(v1 + 1152) = 1063;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[29],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 4584),
      (const char (*)[29])"SHOP_TYPE_BLACKSMITH_INAZUMA",
      (data::ShopType *)(v1 + 1152));
    if ( *(_BYTE *)(((v1 + 1168) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1168) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1168, "SHOP_TYPE_BLACKSMITH_INAZUMA");
    *(_DWORD *)(v1 + 1168) = 1064;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[15],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 4624),
      (const char (*)[15])"SHOP_TYPE_FISH",
      (data::ShopType *)(v1 + 1168));
    if ( *(_BYTE *)(((v1 + 1184) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1184) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1184, "SHOP_TYPE_FISH");
    *(_DWORD *)(v1 + 1184) = 1065;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[21],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 4664),
      (const char (*)[21])"SHOP_TYPE_FISH_LIYUE",
      (data::ShopType *)(v1 + 1184));
    if ( *(_BYTE *)(((v1 + 1200) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1200) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1200, "SHOP_TYPE_FISH_LIYUE");
    *(_DWORD *)(v1 + 1200) = 1066;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[23],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 4704),
      (const char (*)[23])"SHOP_TYPE_FISH_INAZUMA",
      (data::ShopType *)(v1 + 1200));
    if ( *(_BYTE *)(((v1 + 1216) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1216) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1216, "SHOP_TYPE_FISH_INAZUMA");
    *(_DWORD *)(v1 + 1216) = 1067;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[21],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 4744),
      (const char (*)[21])"SHOP_TYPE_NPC_Kiyoko",
      (data::ShopType *)(v1 + 1216));
    if ( *(_BYTE *)(((v1 + 1232) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1232) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1232, "SHOP_TYPE_NPC_Kiyoko");
    *(_DWORD *)(v1 + 1232) = 1068;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[32],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 4784),
      (const char (*)[32])"SHOP_TYPE_EXPIRED_WIDGET_MENGDE",
      (data::ShopType *)(v1 + 1232));
    if ( *(_BYTE *)(((v1 + 1248) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1248) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1248, "SHOP_TYPE_EXPIRED_WIDGET_MENGDE");
    *(_DWORD *)(v1 + 1248) = 1069;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[30],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 4824),
      (const char (*)[30])"SHOP_TYPE_CAPTURE_ANIMAL_SHOP",
      (data::ShopType *)(v1 + 1248));
    if ( *(_BYTE *)(((v1 + 1264) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1264) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1264, "SHOP_TYPE_CAPTURE_ANIMAL_SHOP");
    *(_DWORD *)(v1 + 1264) = 1070;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[29],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 4864),
      (const char (*)[29])"SHOP_TYPE_NPC_YamashiroKenta",
      (data::ShopType *)(v1 + 1264));
    if ( *(_BYTE *)(((v1 + 1280) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1280) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1280, "SHOP_TYPE_NPC_YamashiroKenta");
    *(_DWORD *)(v1 + 1280) = 1071;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[22],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 4904),
      (const char (*)[22])"SHOP_TYPE_FISH_SUMERU",
      (data::ShopType *)(v1 + 1280));
    if ( *(_BYTE *)(((v1 + 1296) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1296) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1296, "SHOP_TYPE_FISH_SUMERU");
    *(_DWORD *)(v1 + 1296) = 1072;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[18],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 4944),
      (const char (*)[18])"SHOP_TYPE_NPC_Pam",
      (data::ShopType *)(v1 + 1296));
    if ( *(_BYTE *)(((v1 + 1312) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1312) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1312, "SHOP_TYPE_NPC_Pam");
    *(_DWORD *)(v1 + 1312) = 1073;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[21],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 4984),
      (const char (*)[21])"SHOP_TYPE_NPC_Lambad",
      (data::ShopType *)(v1 + 1312));
    if ( *(_BYTE *)(((v1 + 1328) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1328) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1328, "SHOP_TYPE_NPC_Lambad");
    *(_DWORD *)(v1 + 1328) = 1074;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[21],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 5024),
      (const char (*)[21])"SHOP_TYPE_NPC_Hamawi",
      (data::ShopType *)(v1 + 1328));
    if ( *(_BYTE *)(((v1 + 1344) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1344) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1344, "SHOP_TYPE_NPC_Hamawi");
    *(_DWORD *)(v1 + 1344) = 1075;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[21],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 5064),
      (const char (*)[21])"SHOP_TYPE_NPC_Khalid",
      (data::ShopType *)(v1 + 1344));
    if ( *(_BYTE *)(((v1 + 1360) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1360) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1360, "SHOP_TYPE_NPC_Khalid");
    *(_DWORD *)(v1 + 1360) = 1076;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[22],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 5104),
      (const char (*)[22])"SHOP_TYPE_NPC_Ahangar",
      (data::ShopType *)(v1 + 1360));
    if ( *(_BYTE *)(((v1 + 1376) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1376) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1376, "SHOP_TYPE_NPC_Ahangar");
    *(_DWORD *)(v1 + 1376) = 1077;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[21],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 5144),
      (const char (*)[21])"SHOP_TYPE_NPC_Afshin",
      (data::ShopType *)(v1 + 1376));
    if ( *(_BYTE *)(((v1 + 1392) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1392) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1392, "SHOP_TYPE_NPC_Afshin");
    *(_DWORD *)(v1 + 1392) = 1078;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[18],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 5184),
      (const char (*)[18])"SHOP_TYPE_NPC_Jut",
      (data::ShopType *)(v1 + 1392));
    if ( *(_BYTE *)(((v1 + 1408) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1408) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1408, "SHOP_TYPE_NPC_Jut");
    *(_DWORD *)(v1 + 1408) = 1079;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[21],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 5224),
      (const char (*)[21])"SHOP_TYPE_NPC_Butrus",
      (data::ShopType *)(v1 + 1408));
    if ( *(_BYTE *)(((v1 + 1424) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1424) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1424, "SHOP_TYPE_NPC_Butrus");
    *(_DWORD *)(v1 + 1424) = 1080;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[23],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 5264),
      (const char (*)[23])"SHOP_TYPE_NPC_Jahangir",
      (data::ShopType *)(v1 + 1424));
    if ( *(_BYTE *)(((v1 + 1440) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1440) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1440, "SHOP_TYPE_NPC_Jahangir");
    *(_DWORD *)(v1 + 1440) = 1081;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[21],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 5304),
      (const char (*)[21])"SHOP_TYPE_NPC_Qiuwei",
      (data::ShopType *)(v1 + 1440));
    if ( *(_BYTE *)(((v1 + 1456) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1456) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1456, "SHOP_TYPE_NPC_Qiuwei");
    *(_DWORD *)(v1 + 1456) = 1082;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[20],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 5344),
      (const char (*)[20])"SHOP_TYPE_NPC_Babak",
      (data::ShopType *)(v1 + 1456));
    if ( *(_BYTE *)(((v1 + 1472) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1472) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1472, "SHOP_TYPE_NPC_Babak");
    *(_DWORD *)(v1 + 1472) = 1083;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[19],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 5384),
      (const char (*)[19])"SHOP_TYPE_NPC_Rama",
      (data::ShopType *)(v1 + 1472));
    if ( *(_BYTE *)(((v1 + 1488) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1488) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1488, "SHOP_TYPE_NPC_Rama");
    *(_DWORD *)(v1 + 1488) = 1084;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[22],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 5424),
      (const char (*)[22])"SHOP_TYPE_NPC_Ashpazi",
      (data::ShopType *)(v1 + 1488));
    if ( *(_BYTE *)(((v1 + 1504) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1504) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1504, "SHOP_TYPE_NPC_Ashpazi");
    *(_DWORD *)(v1 + 1504) = 1085;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[22],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 5464),
      (const char (*)[22])"SHOP_TYPE_NPC_Aramani",
      (data::ShopType *)(v1 + 1504));
    if ( *(_BYTE *)(((v1 + 1520) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1520) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1520, "SHOP_TYPE_NPC_Aramani");
    *(_DWORD *)(v1 + 1520) = 1086;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[23],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 5504),
      (const char (*)[23])"SHOP_TYPE_NPC_Aravinay",
      (data::ShopType *)(v1 + 1520));
    if ( *(_BYTE *)(((v1 + 1536) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1536) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1536, "SHOP_TYPE_NPC_Aravinay");
    *(_DWORD *)(v1 + 1536) = 1087;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[21],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 5544),
      (const char (*)[21])"SHOP_TYPE_NPC_Enteka",
      (data::ShopType *)(v1 + 1536));
    if ( *(_BYTE *)(((v1 + 1552) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1552) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1552, "SHOP_TYPE_NPC_Enteka");
    *(_DWORD *)(v1 + 1552) = 1088;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[21],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 5584),
      (const char (*)[21])"SHOP_TYPE_NPC_Azalai",
      (data::ShopType *)(v1 + 1552));
    if ( *(_BYTE *)(((v1 + 1568) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1568) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1568, "SHOP_TYPE_NPC_Azalai");
    *(_DWORD *)(v1 + 1568) = 2000;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[19],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 5624),
      (const char (*)[19])"SHOP_TYPE_GCG_CARD",
      (data::ShopType *)(v1 + 1568));
    if ( *(_BYTE *)(((v1 + 1584) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1584) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1584, "SHOP_TYPE_GCG_CARD");
    *(_DWORD *)(v1 + 1584) = 2001;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[24],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 5664),
      (const char (*)[24])"SHOP_TYPE_GCG_CARD_FACE",
      (data::ShopType *)(v1 + 1584));
    if ( *(_BYTE *)(((v1 + 1600) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1600) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1600, "SHOP_TYPE_GCG_CARD_FACE");
    *(_DWORD *)(v1 + 1600) = 2002;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[25],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 5704),
      (const char (*)[25])"SHOP_TYPE_GCG_APPEARANCE",
      (data::ShopType *)(v1 + 1600));
    if ( *(_BYTE *)(((v1 + 1616) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1616) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1616, "SHOP_TYPE_GCG_APPEARANCE");
    *(_DWORD *)(v1 + 1616) = 2003;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[23],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 5744),
      (const char (*)[23])"SHOP_TYPE_GCG_EXCHANGE",
      (data::ShopType *)(v1 + 1616));
    if ( *(_BYTE *)(((v1 + 1632) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1632) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1632, "SHOP_TYPE_GCG_EXCHANGE");
    *(_DWORD *)(v1 + 1632) = 15001;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[35],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 5784),
      (const char (*)[35])"SHOP_TYPE_ACTIVITY_CHANNELLER_SLAB",
      (data::ShopType *)(v1 + 1632));
    if ( *(_BYTE *)(((v1 + 1648) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1648) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1648, "SHOP_TYPE_ACTIVITY_CHANNELLER_SLAB");
    *(_DWORD *)(v1 + 1648) = 16001;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[31],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 5824),
      (const char (*)[31])"SHOP_TYPE_ACTIVITY_SUMMER_TIME",
      (data::ShopType *)(v1 + 1648));
    if ( *(_BYTE *)(((v1 + 1664) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1664) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1664, "SHOP_TYPE_ACTIVITY_SUMMER_TIME");
    *(_DWORD *)(v1 + 1664) = 16002;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[36],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 5864),
      (const char (*)[36])"SHOP_TYPE_ACTIVITY_BOUNCE_CONJURING",
      (data::ShopType *)(v1 + 1664));
    if ( *(_BYTE *)(((v1 + 1680) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1680) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1680, "SHOP_TYPE_ACTIVITY_BOUNCE_CONJURING");
    *(_DWORD *)(v1 + 1680) = 20001;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[30],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 5904),
      (const char (*)[30])"SHOP_TYPE_ACTIVITY_BLITZ_RUSH",
      (data::ShopType *)(v1 + 1680));
    if ( *(_BYTE *)(((v1 + 1696) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1696) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1696, "SHOP_TYPE_ACTIVITY_BLITZ_RUSH");
    *(_DWORD *)(v1 + 1696) = 20002;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[25],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 5944),
      (const char (*)[25])"SHOP_TYPE_ACTIVITY_CHESS",
      (data::ShopType *)(v1 + 1696));
    if ( *(_BYTE *)(((v1 + 1712) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1712) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1712, "SHOP_TYPE_ACTIVITY_CHESS");
    *(_DWORD *)(v1 + 1712) = 20003;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[37],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 5984),
      (const char (*)[37])"SHOP_TYPE_ACTIVITY_ROGUELIKE_DUNGEON",
      (data::ShopType *)(v1 + 1712));
    if ( *(_BYTE *)(((v1 + 1728) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1728) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1728, "SHOP_TYPE_ACTIVITY_ROGUELIKE_DUNGEON");
    *(_DWORD *)(v1 + 1728) = 20004;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[31],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 6024),
      (const char (*)[31])"SHOP_TYPE_ACTIVITY_WINTER_CAMP",
      (data::ShopType *)(v1 + 1728));
    if ( *(_BYTE *)(((v1 + 1744) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1744) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1744, "SHOP_TYPE_ACTIVITY_WINTER_CAMP");
    *(_DWORD *)(v1 + 1744) = 20005;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[32],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 6064),
      (const char (*)[32])"SHOP_TYPE_ACTIVITY_LANTERN_RITE",
      (data::ShopType *)(v1 + 1744));
    if ( *(_BYTE *)(((v1 + 1760) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1760) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1760, "SHOP_TYPE_ACTIVITY_LANTERN_RITE");
    *(_DWORD *)(v1 + 1760) = 27001;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[31],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 6104),
      (const char (*)[31])"SHOP_TYPE_ACTIVITY_ROGUE_DIARY",
      (data::ShopType *)(v1 + 1760));
    if ( *(_BYTE *)(((v1 + 1776) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1776) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1776, "SHOP_TYPE_ACTIVITY_ROGUE_DIARY");
    *(_DWORD *)(v1 + 1776) = 28001;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[34],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 6144),
      (const char (*)[34])"SHOP_TYPE_ACTIVITY_SUMMER_TIME_V2",
      (data::ShopType *)(v1 + 1776));
    if ( *(_BYTE *)(((v1 + 1792) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1792) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1792, "SHOP_TYPE_ACTIVITY_SUMMER_TIME_V2");
    *(_DWORD *)(v1 + 1792) = 30001;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[36],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 6184),
      (const char (*)[36])"SHOP_TYPE_ACTIVITY_GRAVEN_INNOCENCE",
      (data::ShopType *)(v1 + 1792));
    if ( *(_BYTE *)(((v1 + 1808) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1808) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1808, "SHOP_TYPE_ACTIVITY_GRAVEN_INNOCENCE");
    *(_DWORD *)(v1 + 1808) = 30002;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[35],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 6224),
      (const char (*)[35])"SHOP_TYPE_ACTIVITY_TREASURE_SEELIE",
      (data::ShopType *)(v1 + 1808));
    if ( *(_BYTE *)(((v1 + 1824) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1824) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1824, "SHOP_TYPE_ACTIVITY_TREASURE_SEELIE");
    *(_DWORD *)(v1 + 1824) = 31001;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[41],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 6264),
      (const char (*)[41])"SHOP_TYPE_ACTIVITY_VINTAGE_ANGEL_S_SHARE",
      (data::ShopType *)(v1 + 1824));
    if ( *(_BYTE *)(((v1 + 1840) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1840) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1840, "SHOP_TYPE_ACTIVITY_VINTAGE_ANGEL_S_SHARE");
    *(_DWORD *)(v1 + 1840) = 32001;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[34],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 6304),
      (const char (*)[34])"SHOP_TYPE_ACTIVITY_FUNGUS_FIGHTER",
      (data::ShopType *)(v1 + 1840));
    if ( *(_BYTE *)(((v1 + 1856) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1856) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1856, "SHOP_TYPE_ACTIVITY_FUNGUS_FIGHTER");
    *(_DWORD *)(v1 + 1856) = 32002;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[29],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 6344),
      (const char (*)[29])"SHOP_TYPE_ACTIVITY_EFFIGY_V2",
      (data::ShopType *)(v1 + 1856));
    if ( *(_BYTE *)(((v1 + 1872) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1872) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1872, "SHOP_TYPE_ACTIVITY_EFFIGY_V2");
    *(_DWORD *)(v1 + 1872) = 33001;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[33],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 6384),
      (const char (*)[33])"SHOP_TYPE_ACTIVITY_BRICK_BREAKER",
      (data::ShopType *)(v1 + 1872));
    if ( *(_BYTE *)(((v1 + 1888) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1888) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1888, "SHOP_TYPE_ACTIVITY_BRICK_BREAKER");
    *(_DWORD *)(v1 + 1888) = 34001;
    std::pair<std::string const,data::ShopType>::pair<char const(&)[30],data::ShopType,true>(
      (std::pair<const std::string,data::ShopType> *const)(v1 + 6424),
      (const char (*)[30])"SHOP_TYPE_ACTIVITY_TEAM_CHAIN",
      (data::ShopType *)(v1 + 1888));
    std::allocator<std::pair<std::string const,data::ShopType>>::allocator((std::allocator<std::pair<const std::string,data::ShopType> > *const)(v1 + 64));
    std::unordered_map<std::string,data::ShopType>::unordered_map(
      &data::getShopTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::ShopType> >)__PAIR128__(114LL, v1 + 1904),
      0LL,
      (const std::unordered_map<std::string,data::ShopType>::hasher *)(v1 + 32),
      (const std::unordered_map<std::string,data::ShopType>::key_equal *)(v1 + 48),
      (const std::unordered_map<std::string,data::ShopType>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getShopTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::ShopType>::~unordered_map,
      &data::getShopTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::ShopType>>::~allocator((std::allocator<std::pair<const std::string,data::ShopType> > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::ShopType> *)(v1 + 6464);
          i != (std::pair<const std::string,data::ShopType> *)(v1 + 1904);
          std::pair<std::string const,data::ShopType>::~pair(i) )
    {
      --i;
    }
  }
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8340) = 0LL;
    memset(
      (void *)((unsigned __int64)(v3 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v3 + 2147450880 - (((_DWORD)v3 + 2147450888) & 0xFFFFFFF8) + 840) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    __asan_stack_free_7(v1, 6720LL, v6);
  }
  return &data::getShopTypeNameMap[abi:cxx11](void)::m;
};

// Line 319: range 000000000CB7B9A5-000000000CB84489
const std::map<data::ShopType,std::pair<std::string,std::string >> *__cdecl data::getShopTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::ShopType,std::pair<std::string,std::string > > *i; // r14
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
  _DWORD *v62; // rax
  _DWORD *v63; // rax
  _DWORD *v64; // rax
  _DWORD *v65; // rax
  _DWORD *v66; // rax
  _DWORD *v67; // rax
  _DWORD *v68; // rax
  _DWORD *v69; // rax
  _DWORD *v70; // rax
  _DWORD *v71; // rax
  _DWORD *v72; // rax
  _DWORD *v73; // rax
  _DWORD *v74; // rax
  _DWORD *v75; // rax
  _DWORD *v76; // rax
  _DWORD *v77; // rax
  _DWORD *v78; // rax
  _DWORD *v79; // rax
  _DWORD *v80; // rax
  _DWORD *v81; // rax
  _DWORD *v82; // rax
  _DWORD *v83; // rax
  _DWORD *v84; // rax
  _DWORD *v85; // rax
  _DWORD *v86; // rax
  _DWORD *v87; // rax
  _DWORD *v88; // rax
  _DWORD *v89; // rax
  _DWORD *v90; // rax
  _DWORD *v91; // rax
  _DWORD *v92; // rax
  _DWORD *v93; // rax
  _DWORD *v94; // rax
  _DWORD *v95; // rax
  _DWORD *v96; // rax
  _DWORD *v97; // rax
  _DWORD *v98; // rax
  _DWORD *v99; // rax
  _DWORD *v100; // rax
  _DWORD *v101; // rax
  _DWORD *v102; // rax
  _DWORD *v103; // rax
  _DWORD *v104; // rax
  _DWORD *v105; // rax
  _DWORD *v106; // rax
  _DWORD *v107; // rax
  _DWORD *v108; // rax
  _DWORD *v109; // rax
  _DWORD *v110; // rax
  _DWORD *v111; // rax
  _DWORD *v112; // rax
  _DWORD *v113; // rax
  _DWORD *v114; // rax
  _DWORD *v115; // rax
  _DWORD *v116; // rax
  _DWORD *v117; // rax
  char v119[21360]; // [rsp+10h] [rbp-5370h] BYREF

  v1 = (unsigned __int64)v119;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_9(21312LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = a2314819Unknown;
  *(_QWORD *)(v1 + 16) = data::getShopTypeEnumMap[abi:cxx11];
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
  v3[536862751] = -234556924;
  v3[536862752] = -234556924;
  v3[536862753] = -234556924;
  v3[536862754] = -234556924;
  v3[536862755] = -234556924;
  v3[536862756] = -234556924;
  v3[536862757] = -234556924;
  v3[536862758] = -234556924;
  v3[536862759] = -234556924;
  v3[536862760] = -234556924;
  v3[536862761] = -234556924;
  v3[536862762] = -234556924;
  v3[536862763] = -234556924;
  v3[536862764] = -234556924;
  v3[536862765] = -234556924;
  v3[536862766] = -234556924;
  v3[536862767] = -234556924;
  v3[536862768] = -234556924;
  v3[536862769] = -234556924;
  v3[536862770] = -234556924;
  v3[536862771] = -234556924;
  v3[536862772] = -234556924;
  v3[536862773] = -234556924;
  v3[536862774] = -234556924;
  v3[536862775] = -234556924;
  v3[536862776] = -234556924;
  v3[536862777] = -234556924;
  v3[536862778] = -234556924;
  v3[536862779] = 61956;
  v3[536862781] = -219021312;
  v3[536862782] = 62194;
  v3[536862784] = -219021312;
  v3[536862785] = 62194;
  v3[536862787] = -219021312;
  v3[536862788] = 62194;
  v3[536862790] = -219021312;
  v3[536862791] = 62194;
  v3[536862793] = -219021312;
  v3[536862794] = 62194;
  v3[536862796] = -219021312;
  v3[536862797] = 62194;
  v3[536862799] = -219021312;
  v3[536862800] = 62194;
  v3[536862802] = -219021312;
  v3[536862803] = 62194;
  v3[536862805] = -219021312;
  v3[536862806] = 62194;
  v3[536862808] = -219021312;
  v3[536862809] = 62194;
  v3[536862811] = -219021312;
  v3[536862812] = 62194;
  v3[536862814] = -219021312;
  v3[536862815] = 62194;
  v3[536862817] = -219021312;
  v3[536862818] = 62194;
  v3[536862820] = -219021312;
  v3[536862821] = 62194;
  v3[536862823] = -219021312;
  v3[536862824] = 62194;
  v3[536862826] = -219021312;
  v3[536862827] = 62194;
  v3[536862829] = -219021312;
  v3[536862830] = 62194;
  v3[536862832] = -219021312;
  v3[536862833] = 62194;
  v3[536862835] = -219021312;
  v3[536862836] = 62194;
  v3[536862838] = -219021312;
  v3[536862839] = 62194;
  v3[536862841] = -219021312;
  v3[536862842] = 62194;
  v3[536862844] = -219021312;
  v3[536862845] = 62194;
  v3[536862847] = -219021312;
  v3[536862848] = 62194;
  v3[536862850] = -219021312;
  v3[536862851] = 62194;
  v3[536862853] = -219021312;
  v3[536862854] = 62194;
  v3[536862856] = -219021312;
  v3[536862857] = 62194;
  v3[536862859] = -219021312;
  v3[536862860] = 62194;
  v3[536862862] = -219021312;
  v3[536862863] = 62194;
  v3[536862865] = -219021312;
  v3[536862866] = 62194;
  v3[536862868] = -219021312;
  v3[536862869] = 62194;
  v3[536862871] = -219021312;
  v3[536862872] = 62194;
  v3[536862874] = -219021312;
  v3[536862875] = 62194;
  v3[536862877] = -219021312;
  v3[536862878] = 62194;
  v3[536862880] = -219021312;
  v3[536862881] = 62194;
  v3[536862883] = -219021312;
  v3[536862884] = 62194;
  v3[536862886] = -219021312;
  v3[536862887] = 62194;
  v3[536862889] = -219021312;
  v3[536862890] = 62194;
  v3[536862892] = -219021312;
  v3[536862893] = 62194;
  v3[536862895] = -219021312;
  v3[536862896] = 62194;
  v3[536862898] = -219021312;
  v3[536862899] = 62194;
  v3[536862901] = -219021312;
  v3[536862902] = 62194;
  v3[536862904] = -219021312;
  v3[536862905] = 62194;
  v3[536862907] = -219021312;
  v3[536862908] = 62194;
  v3[536862910] = -219021312;
  v3[536862911] = 62194;
  v3[536862913] = -219021312;
  v3[536862914] = 62194;
  v3[536862916] = -219021312;
  v3[536862917] = 62194;
  v3[536862919] = -219021312;
  v3[536862920] = 62194;
  v3[536862922] = -219021312;
  v3[536862923] = 62194;
  v3[536862925] = -219021312;
  v3[536862926] = 62194;
  v3[536862928] = -219021312;
  v3[536862929] = 62194;
  v3[536862931] = -219021312;
  v3[536862932] = 62194;
  v3[536862934] = -219021312;
  v3[536862935] = 62194;
  v3[536862937] = -219021312;
  v3[536862938] = 62194;
  v3[536862940] = -219021312;
  v3[536862941] = 62194;
  v3[536862943] = -219021312;
  v3[536862944] = 62194;
  v3[536862946] = -219021312;
  v3[536862947] = 62194;
  v3[536862949] = -219021312;
  v3[536862950] = 62194;
  v3[536862952] = -219021312;
  v3[536862953] = 62194;
  v3[536862955] = -219021312;
  v3[536862956] = 62194;
  v3[536862958] = -219021312;
  v3[536862959] = 62194;
  v3[536862961] = -219021312;
  v3[536862962] = 62194;
  v3[536862964] = -219021312;
  v3[536862965] = 62194;
  v3[536862967] = -219021312;
  v3[536862968] = 62194;
  v3[536862970] = -219021312;
  v3[536862971] = 62194;
  v3[536862973] = -219021312;
  v3[536862974] = 62194;
  v3[536862976] = -219021312;
  v3[536862977] = 62194;
  v3[536862979] = -219021312;
  v3[536862980] = 62194;
  v3[536862982] = -219021312;
  v3[536862983] = 62194;
  v3[536862985] = -219021312;
  v3[536862986] = 62194;
  v3[536862988] = -219021312;
  v3[536862989] = 62194;
  v3[536862991] = -219021312;
  v3[536862992] = 62194;
  v3[536862994] = -219021312;
  v3[536862995] = 62194;
  v3[536862997] = -219021312;
  v3[536862998] = 62194;
  v3[536863000] = -219021312;
  v3[536863001] = 62194;
  v3[536863003] = -219021312;
  v3[536863004] = 62194;
  v3[536863006] = -219021312;
  v3[536863007] = 62194;
  v3[536863009] = -219021312;
  v3[536863010] = 62194;
  v3[536863012] = -219021312;
  v3[536863013] = 62194;
  v3[536863015] = -219021312;
  v3[536863016] = 62194;
  v3[536863018] = -219021312;
  v3[536863019] = 62194;
  v3[536863021] = -219021312;
  v3[536863022] = 62194;
  v3[536863024] = -219021312;
  v3[536863025] = 62194;
  v3[536863027] = -219021312;
  v3[536863028] = 62194;
  v3[536863030] = -219021312;
  v3[536863031] = 62194;
  v3[536863033] = -219021312;
  v3[536863034] = 62194;
  v3[536863036] = -219021312;
  v3[536863037] = 62194;
  v3[536863039] = -219021312;
  v3[536863040] = 62194;
  v3[536863042] = -219021312;
  v3[536863043] = 62194;
  v3[536863045] = -219021312;
  v3[536863046] = 62194;
  v3[536863048] = -219021312;
  v3[536863049] = 62194;
  v3[536863051] = -219021312;
  v3[536863052] = 62194;
  v3[536863054] = -219021312;
  v3[536863055] = 62194;
  v3[536863057] = -219021312;
  v3[536863058] = 62194;
  v3[536863060] = -219021312;
  v3[536863061] = 62194;
  v3[536863063] = -219021312;
  v3[536863064] = 62194;
  v3[536863066] = -219021312;
  v3[536863067] = 62194;
  v3[536863069] = -219021312;
  v3[536863070] = 62194;
  v3[536863072] = -219021312;
  v3[536863073] = 62194;
  v3[536863075] = -219021312;
  v3[536863076] = 62194;
  v3[536863078] = -219021312;
  v3[536863079] = 62194;
  v3[536863081] = -219021312;
  v3[536863082] = 62194;
  v3[536863084] = -219021312;
  v3[536863085] = 62194;
  v3[536863087] = -219021312;
  v3[536863088] = 62194;
  v3[536863090] = -219021312;
  v3[536863091] = 62194;
  v3[536863093] = -219021312;
  v3[536863094] = 62194;
  v3[536863096] = -219021312;
  v3[536863097] = 62194;
  v3[536863099] = -219021312;
  v3[536863100] = 62194;
  v3[536863102] = -219021312;
  v3[536863103] = 62194;
  v3[536863105] = -219021312;
  v3[536863106] = 62194;
  v3[536863108] = -219021312;
  v3[536863109] = 62194;
  v3[536863111] = -219021312;
  v3[536863112] = 62194;
  v3[536863114] = -219021312;
  v3[536863115] = 62194;
  v3[536863117] = -219021312;
  v3[536863118] = 62194;
  v3[536863120] = -219021312;
  v3[536863121] = 62194;
  v3[536863378] = -202116109;
  v3[536863379] = -202116109;
  v3[536863380] = -202116109;
  v3[536863381] = -202116109;
  v3[536863382] = -202116109;
  v3[536863383] = -202116109;
  v3[536863384] = -202116109;
  v3[536863385] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getShopTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getShopTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[15],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1904),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[15])"SHOP_TYPE_NONE");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 12848),
      (data::ShopType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 1904));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 900;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[20],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2000),
      (const char (*)[13])_x,
      (const char (*)[20])"SHOP_TYPE_RECOMMEND");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 12920),
      (data::ShopType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 2000));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 901;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[16],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2096),
      (const char (*)[13])byte_1A13B2E0,
      (const char (*)[16])"SHOP_TYPE_HCOIN");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 12992),
      (data::ShopType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 2096));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, v1 + 112);
    *(_DWORD *)(v1 + 128) = 902;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[18],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2192),
      (const char (*)[13])byte_1A13B320,
      (const char (*)[18])"SHOP_TYPE_PACKAGE");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 13064),
      (data::ShopType *)(v1 + 128),
      (const std::pair<std::string,std::string > *)(v1 + 2192));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, v1 + 128);
    *(_DWORD *)(v1 + 144) = 903;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[16],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2288),
      (const char (*)[19])byte_1A13B360,
      (const char (*)[16])"SHOP_TYPE_MCOIN");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 13136),
      (data::ShopType *)(v1 + 144),
      (const std::pair<std::string,std::string > *)(v1 + 2288));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, v1 + 144);
    *(_DWORD *)(v1 + 160) = 1001;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[17],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2384),
      (const char (*)[13])byte_1A13B3A0,
      (const char (*)[17])"SHOP_TYPE_PAIMON");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 13208),
      (data::ShopType *)(v1 + 160),
      (const std::pair<std::string,std::string > *)(v1 + 2384));
    if ( *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 176, v1 + 160);
    *(_DWORD *)(v1 + 176) = 1002;
    std::pair<std::string,std::string>::pair<char const(&)[16],char const(&)[15],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2480),
      (const char (*)[16])byte_1A13B3E0,
      (const char (*)[15])"SHOP_TYPE_CITY");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 13280),
      (data::ShopType *)(v1 + 176),
      (const std::pair<std::string,std::string > *)(v1 + 2480));
    if ( *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 192, v1 + 176);
    *(_DWORD *)(v1 + 192) = 1003;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2576),
      (const char (*)[13])byte_1A13B420,
      (const char (*)[21])"SHOP_TYPE_BLACKSMITH");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 13352),
      (data::ShopType *)(v1 + 192),
      (const std::pair<std::string,std::string > *)(v1 + 2576));
    if ( *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 208, v1 + 192);
    *(_DWORD *)(v1 + 208) = 1004;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[18],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2672),
      (const char (*)[13])byte_1A13B460,
      (const char (*)[18])"SHOP_TYPE_GROCERY");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 13424),
      (data::ShopType *)(v1 + 208),
      (const std::pair<std::string,std::string > *)(v1 + 2672));
    if ( *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 224, v1 + 208);
    *(_DWORD *)(v1 + 224) = 1005;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[15],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2768),
      (const char (*)[7])byte_1A13B4A0,
      (const char (*)[15])"SHOP_TYPE_FOOD");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 13496),
      (data::ShopType *)(v1 + 224),
      (const std::pair<std::string,std::string > *)(v1 + 2768));
    if ( *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 240, v1 + 224);
    *(_DWORD *)(v1 + 240) = 1006;
    std::pair<std::string,std::string>::pair<char const(&)[16],char const(&)[19],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2864),
      (const char (*)[16])byte_1A13B4E0,
      (const char (*)[19])"SHOP_TYPE_SEA_LAMP");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 13568),
      (data::ShopType *)(v1 + 240),
      (const std::pair<std::string,std::string > *)(v1 + 2864));
    if ( *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 256, v1 + 240);
    *(_DWORD *)(v1 + 256) = 1007;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[23],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2960),
      (const char (*)[13])byte_1A13B520,
      (const char (*)[23])"SHOP_TYPE_VIRTUAL_SHOP");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 13640),
      (data::ShopType *)(v1 + 256),
      (const std::pair<std::string,std::string > *)(v1 + 2960));
    if ( *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 272, v1 + 256);
    *(_DWORD *)(v1 + 272) = 1008;
    std::pair<std::string,std::string>::pair<char const(&)[16],char const(&)[24],true>(
      (std::pair<std::string,std::string > *const)(v1 + 3056),
      (const char (*)[16])byte_1A13B560,
      (const char (*)[24])"SHOP_TYPE_LIYUE_GROCERY");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 13712),
      (data::ShopType *)(v1 + 272),
      (const std::pair<std::string,std::string > *)(v1 + 3056));
    if ( *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 288, v1 + 272);
    *(_DWORD *)(v1 + 288) = 1009;
    std::pair<std::string,std::string>::pair<char const(&)[25],char const(&)[25],true>(
      (std::pair<std::string,std::string > *const)(v1 + 3152),
      (const char (*)[25])byte_1A13B5A0,
      (const char (*)[25])"SHOP_TYPE_LIYUE_SOUVENIR");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 13784),
      (data::ShopType *)(v1 + 288),
      (const std::pair<std::string,std::string > *)(v1 + 3152));
    if ( *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 304, v1 + 288);
    *(_DWORD *)(v1 + 304) = 1010;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[27],true>(
      (std::pair<std::string,std::string > *const)(v1 + 3248),
      (const char (*)[13])byte_1A13B5E0,
      (const char (*)[27])"SHOP_TYPE_LIYUE_RESTAURANT");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 13856),
      (data::ShopType *)(v1 + 304),
      (const std::pair<std::string,std::string > *)(v1 + 3248));
    if ( *(_BYTE *)(((v1 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 320) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 320, v1 + 304);
    *(_DWORD *)(v1 + 320) = 1011;
    std::pair<std::string,std::string>::pair<char const(&)[20],char const(&)[20],true>(
      (std::pair<std::string,std::string > *const)(v1 + 3344),
      (const char (*)[20])byte_1A13B620,
      (const char (*)[20])"SHOP_TYPE_NPC_Flora");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 13928),
      (data::ShopType *)(v1 + 320),
      (const std::pair<std::string,std::string > *)(v1 + 3344));
    if ( *(_BYTE *)(((v1 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 336) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 336, v1 + 320);
    *(_DWORD *)(v1 + 336) = 1012;
    std::pair<std::string,std::string>::pair<char const(&)[20],char const(&)[22],true>(
      (std::pair<std::string,std::string > *const)(v1 + 3440),
      (const char (*)[20])byte_1A13B660,
      (const char (*)[22])"SHOP_TYPE_NPC_Charles");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 14000),
      (data::ShopType *)(v1 + 336),
      (const std::pair<std::string,std::string > *)(v1 + 3440));
    if ( *(_BYTE *)(((v1 + 352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 352) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 352, v1 + 336);
    *(_DWORD *)(v1 + 352) = 1013;
    std::pair<std::string,std::string>::pair<char const(&)[17],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 3536),
      (const char (*)[17])byte_1A13B6A0,
      (const char (*)[21])"SHOP_TYPE_NPC_Shiliu");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 14072),
      (data::ShopType *)(v1 + 352),
      (const std::pair<std::string,std::string > *)(v1 + 3536));
    if ( *(_BYTE *)(((v1 + 368) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 368) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 368, v1 + 352);
    *(_DWORD *)(v1 + 368) = 1014;
    std::pair<std::string,std::string>::pair<char const(&)[17],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 3632),
      (const char (*)[17])byte_1A13B6E0,
      (const char (*)[21])"SHOP_TYPE_NPC_Schulz");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 14144),
      (data::ShopType *)(v1 + 368),
      (const std::pair<std::string,std::string > *)(v1 + 3632));
    if ( *(_BYTE *)(((v1 + 384) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 384) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 384, v1 + 368);
    *(_DWORD *)(v1 + 384) = 1015;
    std::pair<std::string,std::string>::pair<char const(&)[20],char const(&)[20],true>(
      (std::pair<std::string,std::string > *const)(v1 + 3728),
      (const char (*)[20])byte_1A13B720,
      (const char (*)[20])"SHOP_TYPE_NPC_Brook");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 14216),
      (data::ShopType *)(v1 + 384),
      (const std::pair<std::string,std::string > *)(v1 + 3728));
    if ( *(_BYTE *)(((v1 + 400) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 400) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 400, v1 + 384);
    *(_DWORD *)(v1 + 400) = 1016;
    std::pair<std::string,std::string>::pair<char const(&)[32],char const(&)[22],true>(
      (std::pair<std::string,std::string > *const)(v1 + 3824),
      (const char (*)[32])byte_1A13B760,
      (const char (*)[22])"SHOP_TYPE_NPC_Hopkins");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 14288),
      (data::ShopType *)(v1 + 400),
      (const std::pair<std::string,std::string > *)(v1 + 3824));
    if ( *(_BYTE *)(((v1 + 416) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 416) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 416, v1 + 400);
    *(_DWORD *)(v1 + 416) = 1017;
    std::pair<std::string,std::string>::pair<char const(&)[20],char const(&)[20],true>(
      (std::pair<std::string,std::string > *const)(v1 + 3920),
      (const char (*)[20])byte_1A13B7A0,
      (const char (*)[20])"SHOP_TYPE_NPC_Draff");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 14360),
      (data::ShopType *)(v1 + 416),
      (const std::pair<std::string,std::string > *)(v1 + 3920));
    if ( *(_BYTE *)(((v1 + 432) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 432) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 432, v1 + 416);
    *(_DWORD *)(v1 + 432) = 1018;
    std::pair<std::string,std::string>::pair<char const(&)[23],char const(&)[22],true>(
      (std::pair<std::string,std::string > *const)(v1 + 4016),
      (const char (*)[23])byte_1A13B7E0,
      (const char (*)[22])"SHOP_TYPE_NPC_Chloris");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 14432),
      (data::ShopType *)(v1 + 432),
      (const std::pair<std::string,std::string > *)(v1 + 4016));
    if ( *(_BYTE *)(((v1 + 448) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 448) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 448, v1 + 432);
    *(_DWORD *)(v1 + 448) = 1019;
    std::pair<std::string,std::string>::pair<char const(&)[17],char const(&)[20],true>(
      (std::pair<std::string,std::string > *const)(v1 + 4112),
      (const char (*)[17])byte_1A13B820,
      (const char (*)[20])"SHOP_TYPE_NPC_Licai");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 14504),
      (data::ShopType *)(v1 + 448),
      (const std::pair<std::string,std::string > *)(v1 + 4112));
    if ( *(_BYTE *)(((v1 + 464) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 464) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 464, v1 + 448);
    *(_DWORD *)(v1 + 464) = 1020;
    std::pair<std::string,std::string>::pair<char const(&)[17],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 4208),
      (const char (*)[17])byte_1A13B860,
      (const char (*)[21])"SHOP_TYPE_NPC_Yueshu");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 14576),
      (data::ShopType *)(v1 + 464),
      (const std::pair<std::string,std::string > *)(v1 + 4208));
    if ( *(_BYTE *)(((v1 + 480) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 480) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 480, v1 + 464);
    *(_DWORD *)(v1 + 480) = 1021;
    std::pair<std::string,std::string>::pair<char const(&)[17],char const(&)[18],true>(
      (std::pair<std::string,std::string > *const)(v1 + 4304),
      (const char (*)[17])byte_1A13B8A0,
      (const char (*)[18])"SHOP_TYPE_NPC_Gui");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 14648),
      (data::ShopType *)(v1 + 480),
      (const std::pair<std::string,std::string > *)(v1 + 4304));
    if ( *(_BYTE *)(((v1 + 496) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 496) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 496, v1 + 480);
    *(_DWORD *)(v1 + 496) = 1022;
    std::pair<std::string,std::string>::pair<char const(&)[17],char const(&)[18],true>(
      (std::pair<std::string,std::string > *const)(v1 + 4400),
      (const char (*)[17])byte_1A13B8E0,
      (const char (*)[18])"SHOP_TYPE_NPC_Gao");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 14720),
      (data::ShopType *)(v1 + 496),
      (const std::pair<std::string,std::string > *)(v1 + 4400));
    if ( *(_BYTE *)(((v1 + 512) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 512) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 512, v1 + 496);
    *(_DWORD *)(v1 + 512) = 1023;
    std::pair<std::string,std::string>::pair<char const(&)[17],char const(&)[18],true>(
      (std::pair<std::string,std::string > *const)(v1 + 4496),
      (const char (*)[17])byte_1A13B920,
      (const char (*)[18])"SHOP_TYPE_NPC_Sun");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 14792),
      (data::ShopType *)(v1 + 512),
      (const std::pair<std::string,std::string > *)(v1 + 4496));
    if ( *(_BYTE *)(((v1 + 528) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 528) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 528, v1 + 512);
    *(_DWORD *)(v1 + 528) = 1024;
    std::pair<std::string,std::string>::pair<char const(&)[17],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 4592),
      (const char (*)[17])byte_1A13B960,
      (const char (*)[21])"SHOP_TYPE_NPC_Qiming");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 14864),
      (data::ShopType *)(v1 + 528),
      (const std::pair<std::string,std::string > *)(v1 + 4592));
    if ( *(_BYTE *)(((v1 + 544) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 544) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 544, v1 + 528);
    *(_DWORD *)(v1 + 544) = 1025;
    std::pair<std::string,std::string>::pair<char const(&)[17],char const(&)[24],true>(
      (std::pair<std::string,std::string > *const)(v1 + 4688),
      (const char (*)[17])byte_1A13B9A0,
      (const char (*)[24])"SHOP_TYPE_NPC_Zhangshun");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 14936),
      (data::ShopType *)(v1 + 544),
      (const std::pair<std::string,std::string > *)(v1 + 4688));
    if ( *(_BYTE *)(((v1 + 560) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 560) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 560, v1 + 544);
    *(_DWORD *)(v1 + 560) = 1026;
    std::pair<std::string,std::string>::pair<char const(&)[20],char const(&)[19],true>(
      (std::pair<std::string,std::string > *const)(v1 + 4784),
      (const char (*)[20])byte_1A13B9E0,
      (const char (*)[19])"SHOP_TYPE_NPC_Chen");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 15008),
      (data::ShopType *)(v1 + 560),
      (const std::pair<std::string,std::string > *)(v1 + 4784));
    if ( *(_BYTE *)(((v1 + 576) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 576) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 576, v1 + 560);
    *(_DWORD *)(v1 + 576) = 1027;
    std::pair<std::string,std::string>::pair<char const(&)[20],char const(&)[22],true>(
      (std::pair<std::string,std::string > *const)(v1 + 4880),
      (const char (*)[20])byte_1A13BA20,
      (const char (*)[22])"SHOP_TYPE_NPC_ErNiang");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 15080),
      (data::ShopType *)(v1 + 576),
      (const std::pair<std::string,std::string > *)(v1 + 4880));
    if ( *(_BYTE *)(((v1 + 592) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 592) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 592, v1 + 576);
    *(_DWORD *)(v1 + 592) = 1028;
    std::pair<std::string,std::string>::pair<char const(&)[17],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 4976),
      (const char (*)[17])byte_1A13BA60,
      (const char (*)[21])"SHOP_TYPE_NPC_Shitou");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 15152),
      (data::ShopType *)(v1 + 592),
      (const std::pair<std::string,std::string > *)(v1 + 4976));
    if ( *(_BYTE *)(((v1 + 608) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 608) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 608, v1 + 592);
    *(_DWORD *)(v1 + 608) = 1029;
    std::pair<std::string,std::string>::pair<char const(&)[17],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 5072),
      (const char (*)[17])byte_1A13BAA0,
      (const char (*)[21])"SHOP_TYPE_NPC_Jifang");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 15224),
      (data::ShopType *)(v1 + 608),
      (const std::pair<std::string,std::string > *)(v1 + 5072));
    if ( *(_BYTE *)(((v1 + 624) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 624) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 624, v1 + 608);
    *(_DWORD *)(v1 + 624) = 1030;
    std::pair<std::string,std::string>::pair<char const(&)[20],char const(&)[18],true>(
      (std::pair<std::string,std::string > *const)(v1 + 5168),
      (const char (*)[20])byte_1A13BAE0,
      (const char (*)[18])"SHOP_TYPE_NPC_Zhu");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 15296),
      (data::ShopType *)(v1 + 624),
      (const std::pair<std::string,std::string > *)(v1 + 5168));
    if ( *(_BYTE *)(((v1 + 640) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 640) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 640, v1 + 624);
    *(_DWORD *)(v1 + 640) = 1031;
    std::pair<std::string,std::string>::pair<char const(&)[17],char const(&)[18],true>(
      (std::pair<std::string,std::string > *const)(v1 + 5264),
      (const char (*)[17])byte_1A13BB20,
      (const char (*)[18])"SHOP_TYPE_NPC_Bai");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 15368),
      (data::ShopType *)(v1 + 640),
      (const std::pair<std::string,std::string > *)(v1 + 5264));
    if ( *(_BYTE *)(((v1 + 656) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 656) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 656, v1 + 640);
    *(_DWORD *)(v1 + 656) = 1032;
    std::pair<std::string,std::string>::pair<char const(&)[17],char const(&)[18],true>(
      (std::pair<std::string,std::string > *const)(v1 + 5360),
      (const char (*)[17])byte_1A13BB60,
      (const char (*)[18])"SHOP_TYPE_NPC_Kai");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 15440),
      (data::ShopType *)(v1 + 656),
      (const std::pair<std::string,std::string > *)(v1 + 5360));
    if ( *(_BYTE *)(((v1 + 672) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 672) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 672, v1 + 656);
    *(_DWORD *)(v1 + 672) = 1033;
    std::pair<std::string,std::string>::pair<char const(&)[17],char const(&)[23],true>(
      (std::pair<std::string,std::string > *const)(v1 + 5456),
      (const char (*)[17])byte_1A13BBA0,
      (const char (*)[23])"SHOP_TYPE_NPC_Linglang");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 15512),
      (data::ShopType *)(v1 + 672),
      (const std::pair<std::string,std::string > *)(v1 + 5456));
    if ( *(_BYTE *)(((v1 + 688) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 688) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 688, v1 + 672);
    *(_DWORD *)(v1 + 688) = 1034;
    std::pair<std::string,std::string>::pair<char const(&)[26],char const(&)[25],true>(
      (std::pair<std::string,std::string > *const)(v1 + 5552),
      (const char (*)[26])byte_1A13BBE0,
      (const char (*)[25])"SHOP_TYPE_NPC_VerrGoldet");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 15584),
      (data::ShopType *)(v1 + 688),
      (const std::pair<std::string,std::string > *)(v1 + 5552));
    if ( *(_BYTE *)(((v1 + 704) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 704) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 704, v1 + 688);
    *(_DWORD *)(v1 + 704) = 1035;
    std::pair<std::string,std::string>::pair<char const(&)[20],char const(&)[19],true>(
      (std::pair<std::string,std::string > *const)(v1 + 5648),
      (const char (*)[20])byte_1A13BC20,
      (const char (*)[19])"SHOP_TYPE_NPC_Zhou");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 15656),
      (data::ShopType *)(v1 + 704),
      (const std::pair<std::string,std::string > *)(v1 + 5648));
    if ( *(_BYTE *)(((v1 + 720) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 720) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 720, v1 + 704);
    *(_DWORD *)(v1 + 720) = 1036;
    std::pair<std::string,std::string>::pair<char const(&)[35],char const(&)[25],true>(
      (std::pair<std::string,std::string > *const)(v1 + 5744),
      (const char (*)[35])byte_1A13BC60,
      (const char (*)[25])"SHOP_TYPE_TASK_Ekaterina");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 15728),
      (data::ShopType *)(v1 + 720),
      (const std::pair<std::string,std::string > *)(v1 + 5744));
    if ( *(_BYTE *)(((v1 + 736) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 736) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 736, v1 + 720);
    *(_DWORD *)(v1 + 736) = 1037;
    std::pair<std::string,std::string>::pair<char const(&)[28],char const(&)[25],true>(
      (std::pair<std::string,std::string > *const)(v1 + 5840),
      (const char (*)[28])byte_1A13BCC0,
      (const char (*)[25])"SHOP_TYPE_ACTIVITY_ASTER");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 15800),
      (data::ShopType *)(v1 + 736),
      (const std::pair<std::string,std::string > *)(v1 + 5840));
    if ( *(_BYTE *)(((v1 + 752) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 752) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 752, v1 + 736);
    *(_DWORD *)(v1 + 752) = 1038;
    std::pair<std::string,std::string>::pair<char const(&)[34],char const(&)[25],true>(
      (std::pair<std::string,std::string > *const)(v1 + 5936),
      (const char (*)[34])byte_1A13BD00,
      (const char (*)[25])"SHOP_TYPE_TASK_Tartaglia");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 15872),
      (data::ShopType *)(v1 + 752),
      (const std::pair<std::string,std::string > *)(v1 + 5936));
    if ( *(_BYTE *)(((v1 + 768) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 768) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 768, v1 + 752);
    *(_DWORD *)(v1 + 768) = 1039;
    std::pair<std::string,std::string>::pair<char const(&)[20],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 6032),
      (const char (*)[20])byte_1A13BD60,
      (const char (*)[21])"SHOP_TYPE_NPC_Harris");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 15944),
      (data::ShopType *)(v1 + 768),
      (const std::pair<std::string,std::string > *)(v1 + 6032));
    if ( *(_BYTE *)(((v1 + 784) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 784) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 784, v1 + 768);
    *(_DWORD *)(v1 + 784) = 1040;
    std::pair<std::string,std::string>::pair<char const(&)[28],char const(&)[32],true>(
      (std::pair<std::string,std::string > *const)(v1 + 6128),
      (const char (*)[28])byte_1A13BDA0,
      (const char (*)[32])"SHOP_TYPE_ACTIVITY_DRAGON_SPINE");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 16016),
      (data::ShopType *)(v1 + 784),
      (const std::pair<std::string,std::string > *)(v1 + 6128));
    if ( *(_BYTE *)(((v1 + 800) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 800) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 800, v1 + 784);
    *(_DWORD *)(v1 + 800) = 1041;
    std::pair<std::string,std::string>::pair<char const(&)[25],char const(&)[32],true>(
      (std::pair<std::string,std::string > *const)(v1 + 6224),
      (const char (*)[25])byte_1A13BDE0,
      (const char (*)[32])"SHOP_TYPE_ACTIVITY_TREASURE_MAP");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 16088),
      (data::ShopType *)(v1 + 800),
      (const std::pair<std::string,std::string > *)(v1 + 6224));
    if ( *(_BYTE *)(((v1 + 816) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 816) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 816, v1 + 800);
    *(_DWORD *)(v1 + 816) = 1042;
    std::pair<std::string,std::string>::pair<char const(&)[17],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 6320),
      (const char (*)[17])byte_1A13BE20,
      (const char (*)[21])"SHOP_TYPE_NPC_Yinian");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 16160),
      (data::ShopType *)(v1 + 816),
      (const std::pair<std::string,std::string > *)(v1 + 6320));
    if ( *(_BYTE *)(((v1 + 832) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 832) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 832, v1 + 816);
    *(_DWORD *)(v1 + 832) = 1043;
    std::pair<std::string,std::string>::pair<char const(&)[22],char const(&)[28],true>(
      (std::pair<std::string,std::string > *const)(v1 + 6416),
      (const char (*)[22])byte_1A13BE60,
      (const char (*)[28])"SHOP_TYPE_ACTIVITY_SEA_LAMP");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 16232),
      (data::ShopType *)(v1 + 832),
      (const std::pair<std::string,std::string > *)(v1 + 6416));
    if ( *(_BYTE *)(((v1 + 848) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 848) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 848, v1 + 832);
    *(_DWORD *)(v1 + 848) = 1044;
    std::pair<std::string,std::string>::pair<char const(&)[22],char const(&)[30],true>(
      (std::pair<std::string,std::string > *const)(v1 + 6512),
      (const char (*)[22])byte_1A13BEA0,
      (const char (*)[30])"SHOP_TYPE_ACTIVITY_FLEUR_FAIR");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 16304),
      (data::ShopType *)(v1 + 848),
      (const std::pair<std::string,std::string > *)(v1 + 6512));
    if ( *(_BYTE *)(((v1 + 864) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 864) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 864, v1 + 848);
    *(_DWORD *)(v1 + 864) = 1045;
    std::pair<std::string,std::string>::pair<char const(&)[17],char const(&)[24],true>(
      (std::pair<std::string,std::string > *const)(v1 + 6608),
      (const char (*)[17])byte_1A13BEE0,
      (const char (*)[24])"SHOP_TYPE_NPC_Changshun");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 16376),
      (data::ShopType *)(v1 + 864),
      (const std::pair<std::string,std::string > *)(v1 + 6608));
    if ( *(_BYTE *)(((v1 + 880) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 880) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 880, v1 + 864);
    *(_DWORD *)(v1 + 880) = 1046;
    std::pair<std::string,std::string>::pair<char const(&)[17],char const(&)[20],true>(
      (std::pair<std::string,std::string > *const)(v1 + 6704),
      (const char (*)[17])byte_1A13BF20,
      (const char (*)[20])"SHOP_TYPE_NPC_Bolai");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 16448),
      (data::ShopType *)(v1 + 880),
      (const std::pair<std::string,std::string > *)(v1 + 6704));
    if ( *(_BYTE *)(((v1 + 896) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 896) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 896, v1 + 880);
    *(_DWORD *)(v1 + 896) = 1047;
    std::pair<std::string,std::string>::pair<char const(&)[20],char const(&)[22],true>(
      (std::pair<std::string,std::string > *const)(v1 + 6800),
      (const char (*)[20])byte_1A13BF60,
      (const char (*)[22])"SHOP_TYPE_NPC_Ashanpo");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 16520),
      (data::ShopType *)(v1 + 896),
      (const std::pair<std::string,std::string > *)(v1 + 6800));
    if ( *(_BYTE *)(((v1 + 912) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 912) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 912, v1 + 896);
    *(_DWORD *)(v1 + 912) = 1048;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[15],true>(
      (std::pair<std::string,std::string > *const)(v1 + 6896),
      (const char (*)[19])byte_1A13BFA0,
      (const char (*)[15])"SHOP_TYPE_HOME");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 16592),
      (data::ShopType *)(v1 + 912),
      (const std::pair<std::string,std::string > *)(v1 + 6896));
    if ( *(_BYTE *)(((v1 + 928) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 928) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 928, v1 + 912);
    *(_DWORD *)(v1 + 928) = 1049;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 6992),
      (const char (*)[19])byte_1A13BFE0,
      (const char (*)[21])"SHOP_TYPE_HOME_LIMIT");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 16664),
      (data::ShopType *)(v1 + 928),
      (const std::pair<std::string,std::string > *)(v1 + 6992));
    if ( *(_BYTE *)(((v1 + 944) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 944) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 944, v1 + 928);
    *(_DWORD *)(v1 + 944) = 1050;
    std::pair<std::string,std::string>::pair<char const(&)[17],char const(&)[23],true>(
      (std::pair<std::string,std::string > *const)(v1 + 7088),
      (const char (*)[17])byte_1A13C020,
      (const char (*)[23])"SHOP_TYPE_NPC_MasterLu");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 16736),
      (data::ShopType *)(v1 + 944),
      (const std::pair<std::string,std::string > *)(v1 + 7088));
    if ( *(_BYTE *)(((v1 + 960) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 960) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 960, v1 + 944);
    *(_DWORD *)(v1 + 960) = 1051;
    std::pair<std::string,std::string>::pair<char const(&)[17],char const(&)[19],true>(
      (std::pair<std::string,std::string > *const)(v1 + 7184),
      (const char (*)[17])byte_1A13C060,
      (const char (*)[19])"SHOP_TYPE_NPC_Goth");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 16808),
      (data::ShopType *)(v1 + 960),
      (const std::pair<std::string,std::string > *)(v1 + 7184));
    if ( *(_BYTE *)(((v1 + 976) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 976) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 976, v1 + 960);
    *(_DWORD *)(v1 + 976) = 1052;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[18],true>(
      (std::pair<std::string,std::string > *const)(v1 + 7280),
      (const char (*)[13])byte_1A13C0A0,
      (const char (*)[18])"SHOP_TYPE_COSTUME");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 16880),
      (data::ShopType *)(v1 + 976),
      (const std::pair<std::string,std::string > *)(v1 + 7280));
    if ( *(_BYTE *)(((v1 + 992) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 992) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 992, v1 + 976);
    *(_DWORD *)(v1 + 992) = 1053;
    std::pair<std::string,std::string>::pair<char const(&)[17],char const(&)[20],true>(
      (std::pair<std::string,std::string > *const)(v1 + 7376),
      (const char (*)[17])byte_1A13C0E0,
      (const char (*)[20])"SHOP_TYPE_NPC_Obata");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 16952),
      (data::ShopType *)(v1 + 992),
      (const std::pair<std::string,std::string > *)(v1 + 7376));
    if ( *(_BYTE *)(((v1 + 1008) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1008) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1008, v1 + 992);
    *(_DWORD *)(v1 + 1008) = 1054;
    std::pair<std::string,std::string>::pair<char const(&)[17],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 7472),
      (const char (*)[17])byte_1A13C120,
      (const char (*)[21])"SHOP_TYPE_NPC_Qiuyue");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 17024),
      (data::ShopType *)(v1 + 1008),
      (const std::pair<std::string,std::string > *)(v1 + 7472));
    if ( *(_BYTE *)(((v1 + 1024) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1024) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1024, v1 + 1008);
    *(_DWORD *)(v1 + 1024) = 1055;
    std::pair<std::string,std::string>::pair<char const(&)[17],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 7568),
      (const char (*)[17])byte_1A13C160,
      (const char (*)[21])"SHOP_TYPE_NPC_Ryouko");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 17096),
      (data::ShopType *)(v1 + 1024),
      (const std::pair<std::string,std::string > *)(v1 + 7568));
    if ( *(_BYTE *)(((v1 + 1040) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1040) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1040, v1 + 1024);
    *(_DWORD *)(v1 + 1040) = 1056;
    std::pair<std::string,std::string>::pair<char const(&)[14],char const(&)[26],true>(
      (std::pair<std::string,std::string > *const)(v1 + 7664),
      (const char (*)[14])byte_1A13C1A0,
      (const char (*)[26])"SHOP_TYPE_INAZUMA_GROCERY");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 17168),
      (data::ShopType *)(v1 + 1040),
      (const std::pair<std::string,std::string > *)(v1 + 7664));
    if ( *(_BYTE *)(((v1 + 1056) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1056) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1056, v1 + 1040);
    *(_DWORD *)(v1 + 1056) = 1057;
    std::pair<std::string,std::string>::pair<char const(&)[26],char const(&)[27],true>(
      (std::pair<std::string,std::string > *const)(v1 + 7760),
      (const char (*)[26])byte_1A13C1E0,
      (const char (*)[27])"SHOP_TYPE_INAZUMA_SOUVENIR");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 17240),
      (data::ShopType *)(v1 + 1056),
      (const std::pair<std::string,std::string > *)(v1 + 7760));
    if ( *(_BYTE *)(((v1 + 1072) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1072) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1072, v1 + 1056);
    *(_DWORD *)(v1 + 1072) = 1058;
    std::pair<std::string,std::string>::pair<char const(&)[26],char const(&)[29],true>(
      (std::pair<std::string,std::string > *const)(v1 + 7856),
      (const char (*)[26])byte_1A13C220,
      (const char (*)[29])"SHOP_TYPE_INAZUMA_RESTAURANT");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 17312),
      (data::ShopType *)(v1 + 1072),
      (const std::pair<std::string,std::string > *)(v1 + 7856));
    if ( *(_BYTE *)(((v1 + 1088) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1088) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1088, v1 + 1072);
    *(_DWORD *)(v1 + 1088) = 1059;
    std::pair<std::string,std::string>::pair<char const(&)[17],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 7952),
      (const char (*)[17])byte_1A13C260,
      (const char (*)[21])"SHOP_TYPE_NPC_Kuroda");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 17384),
      (data::ShopType *)(v1 + 1088),
      (const std::pair<std::string,std::string > *)(v1 + 7952));
    if ( *(_BYTE *)(((v1 + 1104) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1104) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1104, v1 + 1088);
    *(_DWORD *)(v1 + 1104) = 1060;
    std::pair<std::string,std::string>::pair<char const(&)[23],char const(&)[27],true>(
      (std::pair<std::string,std::string > *const)(v1 + 8048),
      (const char (*)[23])byte_1A13C2A0,
      (const char (*)[27])"SHOP_TYPE_NPC_KiminamiAnna");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 17456),
      (data::ShopType *)(v1 + 1104),
      (const std::pair<std::string,std::string > *)(v1 + 8048));
    if ( *(_BYTE *)(((v1 + 1120) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1120) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1120, v1 + 1104);
    *(_DWORD *)(v1 + 1120) = 1061;
    std::pair<std::string,std::string>::pair<char const(&)[17],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 8144),
      (const char (*)[17])byte_1A13C2E0,
      (const char (*)[21])"SHOP_TYPE_NPC_Tomoki");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 17528),
      (data::ShopType *)(v1 + 1120),
      (const std::pair<std::string,std::string > *)(v1 + 8144));
    if ( *(_BYTE *)(((v1 + 1136) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1136) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1136, v1 + 1120);
    *(_DWORD *)(v1 + 1136) = 1062;
    std::pair<std::string,std::string>::pair<char const(&)[23],char const(&)[24],true>(
      (std::pair<std::string,std::string > *const)(v1 + 8240),
      (const char (*)[23])byte_1A13C320,
      (const char (*)[24])"SHOP_TYPE_NPC_Karpillia");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 17600),
      (data::ShopType *)(v1 + 1136),
      (const std::pair<std::string,std::string > *)(v1 + 8240));
    if ( *(_BYTE *)(((v1 + 1152) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1152) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1152, v1 + 1136);
    *(_DWORD *)(v1 + 1152) = 1063;
    std::pair<std::string,std::string>::pair<char const(&)[20],char const(&)[29],true>(
      (std::pair<std::string,std::string > *const)(v1 + 8336),
      (const char (*)[20])byte_1A13C360,
      (const char (*)[29])"SHOP_TYPE_BLACKSMITH_INAZUMA");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 17672),
      (data::ShopType *)(v1 + 1152),
      (const std::pair<std::string,std::string > *)(v1 + 8336));
    if ( *(_BYTE *)(((v1 + 1168) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1168) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1168, v1 + 1152);
    *(_DWORD *)(v1 + 1168) = 1064;
    std::pair<std::string,std::string>::pair<char const(&)[20],char const(&)[15],true>(
      (std::pair<std::string,std::string > *const)(v1 + 8432),
      (const char (*)[20])byte_1A13C3A0,
      (const char (*)[15])"SHOP_TYPE_FISH");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 17744),
      (data::ShopType *)(v1 + 1168),
      (const std::pair<std::string,std::string > *)(v1 + 8432));
    if ( *(_BYTE *)(((v1 + 1184) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1184) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1184, v1 + 1168);
    *(_DWORD *)(v1 + 1184) = 1065;
    std::pair<std::string,std::string>::pair<char const(&)[20],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 8528),
      (const char (*)[20])byte_1A13C3E0,
      (const char (*)[21])"SHOP_TYPE_FISH_LIYUE");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 17816),
      (data::ShopType *)(v1 + 1184),
      (const std::pair<std::string,std::string > *)(v1 + 8528));
    if ( *(_BYTE *)(((v1 + 1200) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1200) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1200, v1 + 1184);
    *(_DWORD *)(v1 + 1200) = 1066;
    std::pair<std::string,std::string>::pair<char const(&)[20],char const(&)[23],true>(
      (std::pair<std::string,std::string > *const)(v1 + 8624),
      (const char (*)[20])byte_1A13C420,
      (const char (*)[23])"SHOP_TYPE_FISH_INAZUMA");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 17888),
      (data::ShopType *)(v1 + 1200),
      (const std::pair<std::string,std::string > *)(v1 + 8624));
    if ( *(_BYTE *)(((v1 + 1216) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1216) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1216, v1 + 1200);
    *(_DWORD *)(v1 + 1216) = 1067;
    std::pair<std::string,std::string>::pair<char const(&)[17],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 8720),
      (const char (*)[17])byte_1A13C460,
      (const char (*)[21])"SHOP_TYPE_NPC_Kiyoko");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 17960),
      (data::ShopType *)(v1 + 1216),
      (const std::pair<std::string,std::string > *)(v1 + 8720));
    if ( *(_BYTE *)(((v1 + 1232) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1232) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1232, v1 + 1216);
    *(_DWORD *)(v1 + 1232) = 1068;
    std::pair<std::string,std::string>::pair<char const(&)[29],char const(&)[32],true>(
      (std::pair<std::string,std::string > *const)(v1 + 8816),
      (const char (*)[29])byte_1A13C4A0,
      (const char (*)[32])"SHOP_TYPE_EXPIRED_WIDGET_MENGDE");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 18032),
      (data::ShopType *)(v1 + 1232),
      (const std::pair<std::string,std::string > *)(v1 + 8816));
    if ( *(_BYTE *)(((v1 + 1248) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1248) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1248, v1 + 1232);
    *(_DWORD *)(v1 + 1248) = 1069;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[30],true>(
      (std::pair<std::string,std::string > *const)(v1 + 8912),
      (const char (*)[19])byte_1A13C4E0,
      (const char (*)[30])"SHOP_TYPE_CAPTURE_ANIMAL_SHOP");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 18104),
      (data::ShopType *)(v1 + 1248),
      (const std::pair<std::string,std::string > *)(v1 + 8912));
    if ( *(_BYTE *)(((v1 + 1264) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1264) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1264, v1 + 1248);
    *(_DWORD *)(v1 + 1264) = 1070;
    std::pair<std::string,std::string>::pair<char const(&)[23],char const(&)[29],true>(
      (std::pair<std::string,std::string > *const)(v1 + 9008),
      (const char (*)[23])byte_1A13C520,
      (const char (*)[29])"SHOP_TYPE_NPC_YamashiroKenta");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 18176),
      (data::ShopType *)(v1 + 1264),
      (const std::pair<std::string,std::string > *)(v1 + 9008));
    if ( *(_BYTE *)(((v1 + 1280) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1280) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1280, v1 + 1264);
    *(_DWORD *)(v1 + 1280) = 1071;
    std::pair<std::string,std::string>::pair<char const(&)[20],char const(&)[22],true>(
      (std::pair<std::string,std::string > *const)(v1 + 9104),
      (const char (*)[20])byte_1A13C560,
      (const char (*)[22])"SHOP_TYPE_FISH_SUMERU");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 18248),
      (data::ShopType *)(v1 + 1280),
      (const std::pair<std::string,std::string > *)(v1 + 9104));
    if ( *(_BYTE *)(((v1 + 1296) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1296) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1296, v1 + 1280);
    *(_DWORD *)(v1 + 1296) = 1072;
    std::pair<std::string,std::string>::pair<char const(&)[17],char const(&)[18],true>(
      (std::pair<std::string,std::string > *const)(v1 + 9200),
      (const char (*)[17])byte_1A13C5A0,
      (const char (*)[18])"SHOP_TYPE_NPC_Pam");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 18320),
      (data::ShopType *)(v1 + 1296),
      (const std::pair<std::string,std::string > *)(v1 + 9200));
    if ( *(_BYTE *)(((v1 + 1312) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1312) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1312, v1 + 1296);
    *(_DWORD *)(v1 + 1312) = 1073;
    std::pair<std::string,std::string>::pair<char const(&)[20],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 9296),
      (const char (*)[20])byte_1A13C5E0,
      (const char (*)[21])"SHOP_TYPE_NPC_Lambad");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 18392),
      (data::ShopType *)(v1 + 1312),
      (const std::pair<std::string,std::string > *)(v1 + 9296));
    if ( *(_BYTE *)(((v1 + 1328) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1328) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1328, v1 + 1312);
    *(_DWORD *)(v1 + 1328) = 1074;
    std::pair<std::string,std::string>::pair<char const(&)[20],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 9392),
      (const char (*)[20])byte_1A13C620,
      (const char (*)[21])"SHOP_TYPE_NPC_Hamawi");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 18464),
      (data::ShopType *)(v1 + 1328),
      (const std::pair<std::string,std::string > *)(v1 + 9392));
    if ( *(_BYTE *)(((v1 + 1344) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1344) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1344, v1 + 1328);
    *(_DWORD *)(v1 + 1344) = 1075;
    std::pair<std::string,std::string>::pair<char const(&)[20],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 9488),
      (const char (*)[20])byte_1A13C660,
      (const char (*)[21])"SHOP_TYPE_NPC_Khalid");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 18536),
      (data::ShopType *)(v1 + 1344),
      (const std::pair<std::string,std::string > *)(v1 + 9488));
    if ( *(_BYTE *)(((v1 + 1360) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1360) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1360, v1 + 1344);
    *(_DWORD *)(v1 + 1360) = 1076;
    std::pair<std::string,std::string>::pair<char const(&)[23],char const(&)[22],true>(
      (std::pair<std::string,std::string > *const)(v1 + 9584),
      (const char (*)[23])byte_1A13C6A0,
      (const char (*)[22])"SHOP_TYPE_NPC_Ahangar");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 18608),
      (data::ShopType *)(v1 + 1360),
      (const std::pair<std::string,std::string > *)(v1 + 9584));
    if ( *(_BYTE *)(((v1 + 1376) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1376) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1376, v1 + 1360);
    *(_DWORD *)(v1 + 1376) = 1077;
    std::pair<std::string,std::string>::pair<char const(&)[20],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 9680),
      (const char (*)[20])byte_1A13C6E0,
      (const char (*)[21])"SHOP_TYPE_NPC_Afshin");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 18680),
      (data::ShopType *)(v1 + 1376),
      (const std::pair<std::string,std::string > *)(v1 + 9680));
    if ( *(_BYTE *)(((v1 + 1392) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1392) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1392, v1 + 1376);
    *(_DWORD *)(v1 + 1392) = 1078;
    std::pair<std::string,std::string>::pair<char const(&)[17],char const(&)[18],true>(
      (std::pair<std::string,std::string > *const)(v1 + 9776),
      (const char (*)[17])byte_1A13C720,
      (const char (*)[18])"SHOP_TYPE_NPC_Jut");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 18752),
      (data::ShopType *)(v1 + 1392),
      (const std::pair<std::string,std::string > *)(v1 + 9776));
    if ( *(_BYTE *)(((v1 + 1408) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1408) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1408, v1 + 1392);
    *(_DWORD *)(v1 + 1408) = 1079;
    std::pair<std::string,std::string>::pair<char const(&)[23],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 9872),
      (const char (*)[23])byte_1A13C760,
      (const char (*)[21])"SHOP_TYPE_NPC_Butrus");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 18824),
      (data::ShopType *)(v1 + 1408),
      (const std::pair<std::string,std::string > *)(v1 + 9872));
    if ( *(_BYTE *)(((v1 + 1424) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1424) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1424, v1 + 1408);
    *(_DWORD *)(v1 + 1424) = 1080;
    std::pair<std::string,std::string>::pair<char const(&)[23],char const(&)[23],true>(
      (std::pair<std::string,std::string > *const)(v1 + 9968),
      (const char (*)[23])byte_1A13C7A0,
      (const char (*)[23])"SHOP_TYPE_NPC_Jahangir");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 18896),
      (data::ShopType *)(v1 + 1424),
      (const std::pair<std::string,std::string > *)(v1 + 9968));
    if ( *(_BYTE *)(((v1 + 1440) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1440) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1440, v1 + 1424);
    *(_DWORD *)(v1 + 1440) = 1081;
    std::pair<std::string,std::string>::pair<char const(&)[17],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 10064),
      (const char (*)[17])byte_1A13C7E0,
      (const char (*)[21])"SHOP_TYPE_NPC_Qiuwei");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 18968),
      (data::ShopType *)(v1 + 1440),
      (const std::pair<std::string,std::string > *)(v1 + 10064));
    if ( *(_BYTE *)(((v1 + 1456) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1456) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1456, v1 + 1440);
    *(_DWORD *)(v1 + 1456) = 1082;
    std::pair<std::string,std::string>::pair<char const(&)[20],char const(&)[20],true>(
      (std::pair<std::string,std::string > *const)(v1 + 10160),
      (const char (*)[20])byte_1A13C820,
      (const char (*)[20])"SHOP_TYPE_NPC_Babak");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 19040),
      (data::ShopType *)(v1 + 1456),
      (const std::pair<std::string,std::string > *)(v1 + 10160));
    if ( *(_BYTE *)(((v1 + 1472) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1472) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1472, v1 + 1456);
    *(_DWORD *)(v1 + 1472) = 1083;
    std::pair<std::string,std::string>::pair<char const(&)[17],char const(&)[19],true>(
      (std::pair<std::string,std::string > *const)(v1 + 10256),
      (const char (*)[17])byte_1A13C860,
      (const char (*)[19])"SHOP_TYPE_NPC_Rama");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 19112),
      (data::ShopType *)(v1 + 1472),
      (const std::pair<std::string,std::string > *)(v1 + 10256));
    if ( *(_BYTE *)(((v1 + 1488) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1488) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1488, v1 + 1472);
    *(_DWORD *)(v1 + 1488) = 1084;
    std::pair<std::string,std::string>::pair<char const(&)[23],char const(&)[22],true>(
      (std::pair<std::string,std::string > *const)(v1 + 10352),
      (const char (*)[23])byte_1A13C8A0,
      (const char (*)[22])"SHOP_TYPE_NPC_Ashpazi");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 19184),
      (data::ShopType *)(v1 + 1488),
      (const std::pair<std::string,std::string > *)(v1 + 10352));
    if ( *(_BYTE *)(((v1 + 1504) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1504) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1504, v1 + 1488);
    *(_DWORD *)(v1 + 1504) = 1085;
    std::pair<std::string,std::string>::pair<char const(&)[20],char const(&)[22],true>(
      (std::pair<std::string,std::string > *const)(v1 + 10448),
      (const char (*)[20])byte_1A13C8E0,
      (const char (*)[22])"SHOP_TYPE_NPC_Aramani");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 19256),
      (data::ShopType *)(v1 + 1504),
      (const std::pair<std::string,std::string > *)(v1 + 10448));
    if ( *(_BYTE *)(((v1 + 1520) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1520) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1520, v1 + 1504);
    *(_DWORD *)(v1 + 1520) = 1086;
    std::pair<std::string,std::string>::pair<char const(&)[20],char const(&)[23],true>(
      (std::pair<std::string,std::string > *const)(v1 + 10544),
      (const char (*)[20])byte_1A13C920,
      (const char (*)[23])"SHOP_TYPE_NPC_Aravinay");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 19328),
      (data::ShopType *)(v1 + 1520),
      (const std::pair<std::string,std::string > *)(v1 + 10544));
    if ( *(_BYTE *)(((v1 + 1536) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1536) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1536, v1 + 1520);
    *(_DWORD *)(v1 + 1536) = 1087;
    std::pair<std::string,std::string>::pair<char const(&)[20],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 10640),
      (const char (*)[20])byte_1A13C960,
      (const char (*)[21])"SHOP_TYPE_NPC_Enteka");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 19400),
      (data::ShopType *)(v1 + 1536),
      (const std::pair<std::string,std::string > *)(v1 + 10640));
    if ( *(_BYTE *)(((v1 + 1552) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1552) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1552, v1 + 1536);
    *(_DWORD *)(v1 + 1552) = 1088;
    std::pair<std::string,std::string>::pair<char const(&)[20],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 10736),
      (const char (*)[20])byte_1A13C9A0,
      (const char (*)[21])"SHOP_TYPE_NPC_Azalai");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 19472),
      (data::ShopType *)(v1 + 1552),
      (const std::pair<std::string,std::string > *)(v1 + 10736));
    if ( *(_BYTE *)(((v1 + 1568) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1568) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1568, v1 + 1552);
    *(_DWORD *)(v1 + 1568) = 2000;
    std::pair<std::string,std::string>::pair<char const(&)[32],char const(&)[19],true>(
      (std::pair<std::string,std::string > *const)(v1 + 10832),
      (const char (*)[32])byte_1A13C9E0,
      (const char (*)[19])"SHOP_TYPE_GCG_CARD");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 19544),
      (data::ShopType *)(v1 + 1568),
      (const std::pair<std::string,std::string > *)(v1 + 10832));
    if ( *(_BYTE *)(((v1 + 1584) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1584) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1584, v1 + 1568);
    *(_DWORD *)(v1 + 1584) = 2001;
    std::pair<std::string,std::string>::pair<char const(&)[32],char const(&)[24],true>(
      (std::pair<std::string,std::string > *const)(v1 + 10928),
      (const char (*)[32])byte_1A13CA20,
      (const char (*)[24])"SHOP_TYPE_GCG_CARD_FACE");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 19616),
      (data::ShopType *)(v1 + 1584),
      (const std::pair<std::string,std::string > *)(v1 + 10928));
    if ( *(_BYTE *)(((v1 + 1600) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1600) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1600, v1 + 1584);
    *(_DWORD *)(v1 + 1600) = 2002;
    std::pair<std::string,std::string>::pair<char const(&)[32],char const(&)[25],true>(
      (std::pair<std::string,std::string > *const)(v1 + 11024),
      (const char (*)[32])byte_1A13CA60,
      (const char (*)[25])"SHOP_TYPE_GCG_APPEARANCE");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 19688),
      (data::ShopType *)(v1 + 1600),
      (const std::pair<std::string,std::string > *)(v1 + 11024));
    if ( *(_BYTE *)(((v1 + 1616) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1616) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1616, v1 + 1600);
    *(_DWORD *)(v1 + 1616) = 2003;
    std::pair<std::string,std::string>::pair<char const(&)[32],char const(&)[23],true>(
      (std::pair<std::string,std::string > *const)(v1 + 11120),
      (const char (*)[32])byte_1A13CAA0,
      (const char (*)[23])"SHOP_TYPE_GCG_EXCHANGE");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 19760),
      (data::ShopType *)(v1 + 1616),
      (const std::pair<std::string,std::string > *)(v1 + 11120));
    if ( *(_BYTE *)(((v1 + 1632) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1632) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1632, v1 + 1616);
    *(_DWORD *)(v1 + 1632) = 15001;
    std::pair<std::string,std::string>::pair<char const(&)[25],char const(&)[35],true>(
      (std::pair<std::string,std::string > *const)(v1 + 11216),
      (const char (*)[25])byte_1A13CAE0,
      (const char (*)[35])"SHOP_TYPE_ACTIVITY_CHANNELLER_SLAB");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 19832),
      (data::ShopType *)(v1 + 1632),
      (const std::pair<std::string,std::string > *)(v1 + 11216));
    if ( *(_BYTE *)(((v1 + 1648) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1648) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1648, v1 + 1632);
    *(_DWORD *)(v1 + 1648) = 16001;
    std::pair<std::string,std::string>::pair<char const(&)[22],char const(&)[31],true>(
      (std::pair<std::string,std::string > *const)(v1 + 11312),
      (const char (*)[22])byte_1A13CB20,
      (const char (*)[31])"SHOP_TYPE_ACTIVITY_SUMMER_TIME");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 19904),
      (data::ShopType *)(v1 + 1648),
      (const std::pair<std::string,std::string > *)(v1 + 11312));
    if ( *(_BYTE *)(((v1 + 1664) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1664) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1664, v1 + 1648);
    *(_DWORD *)(v1 + 1664) = 16002;
    std::pair<std::string,std::string>::pair<char const(&)[25],char const(&)[36],true>(
      (std::pair<std::string,std::string > *const)(v1 + 11408),
      (const char (*)[25])byte_1A13CB60,
      (const char (*)[36])"SHOP_TYPE_ACTIVITY_BOUNCE_CONJURING");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 19976),
      (data::ShopType *)(v1 + 1664),
      (const std::pair<std::string,std::string > *)(v1 + 11408));
    if ( *(_BYTE *)(((v1 + 1680) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1680) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1680, v1 + 1664);
    *(_DWORD *)(v1 + 1680) = 20001;
    std::pair<std::string,std::string>::pair<char const(&)[25],char const(&)[30],true>(
      (std::pair<std::string,std::string > *const)(v1 + 11504),
      (const char (*)[25])byte_1A13CBA0,
      (const char (*)[30])"SHOP_TYPE_ACTIVITY_BLITZ_RUSH");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 20048),
      (data::ShopType *)(v1 + 1680),
      (const std::pair<std::string,std::string > *)(v1 + 11504));
    if ( *(_BYTE *)(((v1 + 1696) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1696) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1696, v1 + 1680);
    *(_DWORD *)(v1 + 1696) = 20002;
    std::pair<std::string,std::string>::pair<char const(&)[25],char const(&)[25],true>(
      (std::pair<std::string,std::string > *const)(v1 + 11600),
      (const char (*)[25])byte_1A13CBE0,
      (const char (*)[25])"SHOP_TYPE_ACTIVITY_CHESS");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 20120),
      (data::ShopType *)(v1 + 1696),
      (const std::pair<std::string,std::string > *)(v1 + 11600));
    if ( *(_BYTE *)(((v1 + 1712) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1712) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1712, v1 + 1696);
    *(_DWORD *)(v1 + 1712) = 20003;
    std::pair<std::string,std::string>::pair<char const(&)[25],char const(&)[37],true>(
      (std::pair<std::string,std::string > *const)(v1 + 11696),
      (const char (*)[25])byte_1A13CC20,
      (const char (*)[37])"SHOP_TYPE_ACTIVITY_ROGUELIKE_DUNGEON");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 20192),
      (data::ShopType *)(v1 + 1712),
      (const std::pair<std::string,std::string > *)(v1 + 11696));
    if ( *(_BYTE *)(((v1 + 1728) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1728) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1728, v1 + 1712);
    *(_DWORD *)(v1 + 1728) = 20004;
    std::pair<std::string,std::string>::pair<char const(&)[22],char const(&)[31],true>(
      (std::pair<std::string,std::string > *const)(v1 + 11792),
      (const char (*)[22])byte_1A13CC60,
      (const char (*)[31])"SHOP_TYPE_ACTIVITY_WINTER_CAMP");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 20264),
      (data::ShopType *)(v1 + 1728),
      (const std::pair<std::string,std::string > *)(v1 + 11792));
    if ( *(_BYTE *)(((v1 + 1744) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1744) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1744, v1 + 1728);
    *(_DWORD *)(v1 + 1744) = 20005;
    std::pair<std::string,std::string>::pair<char const(&)[25],char const(&)[32],true>(
      (std::pair<std::string,std::string > *const)(v1 + 11888),
      (const char (*)[25])byte_1A13CCA0,
      (const char (*)[32])"SHOP_TYPE_ACTIVITY_LANTERN_RITE");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 20336),
      (data::ShopType *)(v1 + 1744),
      (const std::pair<std::string,std::string > *)(v1 + 11888));
    if ( *(_BYTE *)(((v1 + 1760) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1760) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1760, v1 + 1744);
    *(_DWORD *)(v1 + 1760) = 27001;
    std::pair<std::string,std::string>::pair<char const(&)[22],char const(&)[31],true>(
      (std::pair<std::string,std::string > *const)(v1 + 11984),
      (const char (*)[22])byte_1A13CCE0,
      (const char (*)[31])"SHOP_TYPE_ACTIVITY_ROGUE_DIARY");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 20408),
      (data::ShopType *)(v1 + 1760),
      (const std::pair<std::string,std::string > *)(v1 + 11984));
    if ( *(_BYTE *)(((v1 + 1776) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1776) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1776, v1 + 1760);
    *(_DWORD *)(v1 + 1776) = 28001;
    std::pair<std::string,std::string>::pair<char const(&)[25],char const(&)[34],true>(
      (std::pair<std::string,std::string > *const)(v1 + 12080),
      (const char (*)[25])byte_1A13CD20,
      (const char (*)[34])"SHOP_TYPE_ACTIVITY_SUMMER_TIME_V2");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 20480),
      (data::ShopType *)(v1 + 1776),
      (const std::pair<std::string,std::string > *)(v1 + 12080));
    if ( *(_BYTE *)(((v1 + 1792) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1792) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1792, v1 + 1776);
    *(_DWORD *)(v1 + 1792) = 30001;
    std::pair<std::string,std::string>::pair<char const(&)[25],char const(&)[36],true>(
      (std::pair<std::string,std::string > *const)(v1 + 12176),
      (const char (*)[25])byte_1A13CD60,
      (const char (*)[36])"SHOP_TYPE_ACTIVITY_GRAVEN_INNOCENCE");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 20552),
      (data::ShopType *)(v1 + 1792),
      (const std::pair<std::string,std::string > *)(v1 + 12176));
    if ( *(_BYTE *)(((v1 + 1808) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1808) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1808, v1 + 1792);
    *(_DWORD *)(v1 + 1808) = 30002;
    std::pair<std::string,std::string>::pair<char const(&)[28],char const(&)[35],true>(
      (std::pair<std::string,std::string > *const)(v1 + 12272),
      (const char (*)[28])byte_1A13CDA0,
      (const char (*)[35])"SHOP_TYPE_ACTIVITY_TREASURE_SEELIE");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 20624),
      (data::ShopType *)(v1 + 1808),
      (const std::pair<std::string,std::string > *)(v1 + 12272));
    if ( *(_BYTE *)(((v1 + 1824) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1824) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1824, v1 + 1808);
    *(_DWORD *)(v1 + 1824) = 31001;
    std::pair<std::string,std::string>::pair<char const(&)[23],char const(&)[41],true>(
      (std::pair<std::string,std::string > *const)(v1 + 12368),
      (const char (*)[23])byte_1A13CDE0,
      (const char (*)[41])"SHOP_TYPE_ACTIVITY_VINTAGE_ANGEL_S_SHARE");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 20696),
      (data::ShopType *)(v1 + 1824),
      (const std::pair<std::string,std::string > *)(v1 + 12368));
    if ( *(_BYTE *)(((v1 + 1840) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1840) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1840, v1 + 1824);
    *(_DWORD *)(v1 + 1840) = 32001;
    std::pair<std::string,std::string>::pair<char const(&)[22],char const(&)[34],true>(
      (std::pair<std::string,std::string > *const)(v1 + 12464),
      (const char (*)[22])byte_1A13CE20,
      (const char (*)[34])"SHOP_TYPE_ACTIVITY_FUNGUS_FIGHTER");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 20768),
      (data::ShopType *)(v1 + 1840),
      (const std::pair<std::string,std::string > *)(v1 + 12464));
    if ( *(_BYTE *)(((v1 + 1856) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1856) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1856, v1 + 1840);
    *(_DWORD *)(v1 + 1856) = 32002;
    std::pair<std::string,std::string>::pair<char const(&)[22],char const(&)[29],true>(
      (std::pair<std::string,std::string > *const)(v1 + 12560),
      (const char (*)[22])byte_1A13CE60,
      (const char (*)[29])"SHOP_TYPE_ACTIVITY_EFFIGY_V2");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 20840),
      (data::ShopType *)(v1 + 1856),
      (const std::pair<std::string,std::string > *)(v1 + 12560));
    if ( *(_BYTE *)(((v1 + 1872) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1872) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1872, v1 + 1856);
    *(_DWORD *)(v1 + 1872) = 33001;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[33],true>(
      (std::pair<std::string,std::string > *const)(v1 + 12656),
      (const char (*)[19])byte_1A13CEA0,
      (const char (*)[33])"SHOP_TYPE_ACTIVITY_BRICK_BREAKER");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 20912),
      (data::ShopType *)(v1 + 1872),
      (const std::pair<std::string,std::string > *)(v1 + 12656));
    if ( *(_BYTE *)(((v1 + 1888) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1888) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1888, v1 + 1872);
    *(_DWORD *)(v1 + 1888) = 34001;
    std::pair<std::string,std::string>::pair<char const(&)[25],char const(&)[30],true>(
      (std::pair<std::string,std::string > *const)(v1 + 12752),
      (const char (*)[25])byte_1A13CEE0,
      (const char (*)[30])"SHOP_TYPE_ACTIVITY_TEAM_CHAIN");
    std::pair<data::ShopType const,std::pair<std::string,std::string>>::pair<data::ShopType,true>(
      (std::pair<const data::ShopType,std::pair<std::string,std::string > > *const)(v1 + 20984),
      (data::ShopType *)(v1 + 1888),
      (const std::pair<std::string,std::string > *)(v1 + 12752));
    std::allocator<std::pair<data::ShopType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::ShopType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    std::map<data::ShopType,std::pair<std::string,std::string>>::map(
      &data::getShopTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::ShopType,std::pair<std::string,std::string > > >)__PAIR128__(114LL, v1 + 12848),
      (const std::less<data::ShopType> *)(v1 + 48),
      (const std::map<data::ShopType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getShopTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::ShopType,std::pair<std::string,std::string>>::~map,
      &data::getShopTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::ShopType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::ShopType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::ShopType,std::pair<std::string,std::string > > *)(v1 + 21056);
          i != (std::pair<const data::ShopType,std::pair<std::string,std::string > > *)(v1 + 12848);
          std::pair<data::ShopType const,std::pair<std::string,std::string>>::~pair(i) )
    {
      --i;
    }
    __asan_poison_stack_memory(v1 + 12848, 8208LL);
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 12752));
    v5 = (_DWORD *)(((v1 + 12752) >> 3) + 2147450880);
    *v5 = -117901064;
    v5[1] = -117901064;
    *(_BYTE *)(((v1 + 1888) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 12656));
    v6 = (_DWORD *)(((v1 + 12656) >> 3) + 2147450880);
    *v6 = -117901064;
    v6[1] = -117901064;
    *(_BYTE *)(((v1 + 1872) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 12560));
    v7 = (_DWORD *)(((v1 + 12560) >> 3) + 2147450880);
    *v7 = -117901064;
    v7[1] = -117901064;
    *(_BYTE *)(((v1 + 1856) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 12464));
    v8 = (_DWORD *)(((v1 + 12464) >> 3) + 2147450880);
    *v8 = -117901064;
    v8[1] = -117901064;
    *(_BYTE *)(((v1 + 1840) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 12368));
    v9 = (_DWORD *)(((v1 + 12368) >> 3) + 2147450880);
    *v9 = -117901064;
    v9[1] = -117901064;
    *(_BYTE *)(((v1 + 1824) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 12272));
    v10 = (_DWORD *)(((v1 + 12272) >> 3) + 2147450880);
    *v10 = -117901064;
    v10[1] = -117901064;
    *(_BYTE *)(((v1 + 1808) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 12176));
    v11 = (_DWORD *)(((v1 + 12176) >> 3) + 2147450880);
    *v11 = -117901064;
    v11[1] = -117901064;
    *(_BYTE *)(((v1 + 1792) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 12080));
    v12 = (_DWORD *)(((v1 + 12080) >> 3) + 2147450880);
    *v12 = -117901064;
    v12[1] = -117901064;
    *(_BYTE *)(((v1 + 1776) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 11984));
    v13 = (_DWORD *)(((v1 + 11984) >> 3) + 2147450880);
    *v13 = -117901064;
    v13[1] = -117901064;
    *(_BYTE *)(((v1 + 1760) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 11888));
    v14 = (_DWORD *)(((v1 + 11888) >> 3) + 2147450880);
    *v14 = -117901064;
    v14[1] = -117901064;
    *(_BYTE *)(((v1 + 1744) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 11792));
    v15 = (_DWORD *)(((v1 + 11792) >> 3) + 2147450880);
    *v15 = -117901064;
    v15[1] = -117901064;
    *(_BYTE *)(((v1 + 1728) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 11696));
    v16 = (_DWORD *)(((v1 + 11696) >> 3) + 2147450880);
    *v16 = -117901064;
    v16[1] = -117901064;
    *(_BYTE *)(((v1 + 1712) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 11600));
    v17 = (_DWORD *)(((v1 + 11600) >> 3) + 2147450880);
    *v17 = -117901064;
    v17[1] = -117901064;
    *(_BYTE *)(((v1 + 1696) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 11504));
    v18 = (_DWORD *)(((v1 + 11504) >> 3) + 2147450880);
    *v18 = -117901064;
    v18[1] = -117901064;
    *(_BYTE *)(((v1 + 1680) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 11408));
    v19 = (_DWORD *)(((v1 + 11408) >> 3) + 2147450880);
    *v19 = -117901064;
    v19[1] = -117901064;
    *(_BYTE *)(((v1 + 1664) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 11312));
    v20 = (_DWORD *)(((v1 + 11312) >> 3) + 2147450880);
    *v20 = -117901064;
    v20[1] = -117901064;
    *(_BYTE *)(((v1 + 1648) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 11216));
    v21 = (_DWORD *)(((v1 + 11216) >> 3) + 2147450880);
    *v21 = -117901064;
    v21[1] = -117901064;
    *(_BYTE *)(((v1 + 1632) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 11120));
    v22 = (_DWORD *)(((v1 + 11120) >> 3) + 2147450880);
    *v22 = -117901064;
    v22[1] = -117901064;
    *(_BYTE *)(((v1 + 1616) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 11024));
    v23 = (_DWORD *)(((v1 + 11024) >> 3) + 2147450880);
    *v23 = -117901064;
    v23[1] = -117901064;
    *(_BYTE *)(((v1 + 1600) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 10928));
    v24 = (_DWORD *)(((v1 + 10928) >> 3) + 2147450880);
    *v24 = -117901064;
    v24[1] = -117901064;
    *(_BYTE *)(((v1 + 1584) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 10832));
    v25 = (_DWORD *)(((v1 + 10832) >> 3) + 2147450880);
    *v25 = -117901064;
    v25[1] = -117901064;
    *(_BYTE *)(((v1 + 1568) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 10736));
    v26 = (_DWORD *)(((v1 + 10736) >> 3) + 2147450880);
    *v26 = -117901064;
    v26[1] = -117901064;
    *(_BYTE *)(((v1 + 1552) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 10640));
    v27 = (_DWORD *)(((v1 + 10640) >> 3) + 2147450880);
    *v27 = -117901064;
    v27[1] = -117901064;
    *(_BYTE *)(((v1 + 1536) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 10544));
    v28 = (_DWORD *)(((v1 + 10544) >> 3) + 2147450880);
    *v28 = -117901064;
    v28[1] = -117901064;
    *(_BYTE *)(((v1 + 1520) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 10448));
    v29 = (_DWORD *)(((v1 + 10448) >> 3) + 2147450880);
    *v29 = -117901064;
    v29[1] = -117901064;
    *(_BYTE *)(((v1 + 1504) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 10352));
    v30 = (_DWORD *)(((v1 + 10352) >> 3) + 2147450880);
    *v30 = -117901064;
    v30[1] = -117901064;
    *(_BYTE *)(((v1 + 1488) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 10256));
    v31 = (_DWORD *)(((v1 + 10256) >> 3) + 2147450880);
    *v31 = -117901064;
    v31[1] = -117901064;
    *(_BYTE *)(((v1 + 1472) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 10160));
    v32 = (_DWORD *)(((v1 + 10160) >> 3) + 2147450880);
    *v32 = -117901064;
    v32[1] = -117901064;
    *(_BYTE *)(((v1 + 1456) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 10064));
    v33 = (_DWORD *)(((v1 + 10064) >> 3) + 2147450880);
    *v33 = -117901064;
    v33[1] = -117901064;
    *(_BYTE *)(((v1 + 1440) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 9968));
    v34 = (_DWORD *)(((v1 + 9968) >> 3) + 2147450880);
    *v34 = -117901064;
    v34[1] = -117901064;
    *(_BYTE *)(((v1 + 1424) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 9872));
    v35 = (_DWORD *)(((v1 + 9872) >> 3) + 2147450880);
    *v35 = -117901064;
    v35[1] = -117901064;
    *(_BYTE *)(((v1 + 1408) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 9776));
    v36 = (_DWORD *)(((v1 + 9776) >> 3) + 2147450880);
    *v36 = -117901064;
    v36[1] = -117901064;
    *(_BYTE *)(((v1 + 1392) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 9680));
    v37 = (_DWORD *)(((v1 + 9680) >> 3) + 2147450880);
    *v37 = -117901064;
    v37[1] = -117901064;
    *(_BYTE *)(((v1 + 1376) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 9584));
    v38 = (_DWORD *)(((v1 + 9584) >> 3) + 2147450880);
    *v38 = -117901064;
    v38[1] = -117901064;
    *(_BYTE *)(((v1 + 1360) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 9488));
    v39 = (_DWORD *)(((v1 + 9488) >> 3) + 2147450880);
    *v39 = -117901064;
    v39[1] = -117901064;
    *(_BYTE *)(((v1 + 1344) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 9392));
    v40 = (_DWORD *)(((v1 + 9392) >> 3) + 2147450880);
    *v40 = -117901064;
    v40[1] = -117901064;
    *(_BYTE *)(((v1 + 1328) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 9296));
    v41 = (_DWORD *)(((v1 + 9296) >> 3) + 2147450880);
    *v41 = -117901064;
    v41[1] = -117901064;
    *(_BYTE *)(((v1 + 1312) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 9200));
    v42 = (_DWORD *)(((v1 + 9200) >> 3) + 2147450880);
    *v42 = -117901064;
    v42[1] = -117901064;
    *(_BYTE *)(((v1 + 1296) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 9104));
    v43 = (_DWORD *)(((v1 + 9104) >> 3) + 2147450880);
    *v43 = -117901064;
    v43[1] = -117901064;
    *(_BYTE *)(((v1 + 1280) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 9008));
    v44 = (_DWORD *)(((v1 + 9008) >> 3) + 2147450880);
    *v44 = -117901064;
    v44[1] = -117901064;
    *(_BYTE *)(((v1 + 1264) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 8912));
    v45 = (_DWORD *)(((v1 + 8912) >> 3) + 2147450880);
    *v45 = -117901064;
    v45[1] = -117901064;
    *(_BYTE *)(((v1 + 1248) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 8816));
    v46 = (_DWORD *)(((v1 + 8816) >> 3) + 2147450880);
    *v46 = -117901064;
    v46[1] = -117901064;
    *(_BYTE *)(((v1 + 1232) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 8720));
    v47 = (_DWORD *)(((v1 + 8720) >> 3) + 2147450880);
    *v47 = -117901064;
    v47[1] = -117901064;
    *(_BYTE *)(((v1 + 1216) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 8624));
    v48 = (_DWORD *)(((v1 + 8624) >> 3) + 2147450880);
    *v48 = -117901064;
    v48[1] = -117901064;
    *(_BYTE *)(((v1 + 1200) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 8528));
    v49 = (_DWORD *)(((v1 + 8528) >> 3) + 2147450880);
    *v49 = -117901064;
    v49[1] = -117901064;
    *(_BYTE *)(((v1 + 1184) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 8432));
    v50 = (_DWORD *)(((v1 + 8432) >> 3) + 2147450880);
    *v50 = -117901064;
    v50[1] = -117901064;
    *(_BYTE *)(((v1 + 1168) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 8336));
    v51 = (_DWORD *)(((v1 + 8336) >> 3) + 2147450880);
    *v51 = -117901064;
    v51[1] = -117901064;
    *(_BYTE *)(((v1 + 1152) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 8240));
    v52 = (_DWORD *)(((v1 + 8240) >> 3) + 2147450880);
    *v52 = -117901064;
    v52[1] = -117901064;
    *(_BYTE *)(((v1 + 1136) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 8144));
    v53 = (_DWORD *)(((v1 + 8144) >> 3) + 2147450880);
    *v53 = -117901064;
    v53[1] = -117901064;
    *(_BYTE *)(((v1 + 1120) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 8048));
    v54 = (_DWORD *)(((v1 + 8048) >> 3) + 2147450880);
    *v54 = -117901064;
    v54[1] = -117901064;
    *(_BYTE *)(((v1 + 1104) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 7952));
    v55 = (_DWORD *)(((v1 + 7952) >> 3) + 2147450880);
    *v55 = -117901064;
    v55[1] = -117901064;
    *(_BYTE *)(((v1 + 1088) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 7856));
    v56 = (_DWORD *)(((v1 + 7856) >> 3) + 2147450880);
    *v56 = -117901064;
    v56[1] = -117901064;
    *(_BYTE *)(((v1 + 1072) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 7760));
    v57 = (_DWORD *)(((v1 + 7760) >> 3) + 2147450880);
    *v57 = -117901064;
    v57[1] = -117901064;
    *(_BYTE *)(((v1 + 1056) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 7664));
    v58 = (_DWORD *)(((v1 + 7664) >> 3) + 2147450880);
    *v58 = -117901064;
    v58[1] = -117901064;
    *(_BYTE *)(((v1 + 1040) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 7568));
    v59 = (_DWORD *)(((v1 + 7568) >> 3) + 2147450880);
    *v59 = -117901064;
    v59[1] = -117901064;
    *(_BYTE *)(((v1 + 1024) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 7472));
    v60 = (_DWORD *)(((v1 + 7472) >> 3) + 2147450880);
    *v60 = -117901064;
    v60[1] = -117901064;
    *(_BYTE *)(((v1 + 1008) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 7376));
    v61 = (_DWORD *)(((v1 + 7376) >> 3) + 2147450880);
    *v61 = -117901064;
    v61[1] = -117901064;
    *(_BYTE *)(((v1 + 992) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 7280));
    v62 = (_DWORD *)(((v1 + 7280) >> 3) + 2147450880);
    *v62 = -117901064;
    v62[1] = -117901064;
    *(_BYTE *)(((v1 + 976) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 7184));
    v63 = (_DWORD *)(((v1 + 7184) >> 3) + 2147450880);
    *v63 = -117901064;
    v63[1] = -117901064;
    *(_BYTE *)(((v1 + 960) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 7088));
    v64 = (_DWORD *)(((v1 + 7088) >> 3) + 2147450880);
    *v64 = -117901064;
    v64[1] = -117901064;
    *(_BYTE *)(((v1 + 944) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 6992));
    v65 = (_DWORD *)(((v1 + 6992) >> 3) + 2147450880);
    *v65 = -117901064;
    v65[1] = -117901064;
    *(_BYTE *)(((v1 + 928) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 6896));
    v66 = (_DWORD *)(((v1 + 6896) >> 3) + 2147450880);
    *v66 = -117901064;
    v66[1] = -117901064;
    *(_BYTE *)(((v1 + 912) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 6800));
    v67 = (_DWORD *)(((v1 + 6800) >> 3) + 2147450880);
    *v67 = -117901064;
    v67[1] = -117901064;
    *(_BYTE *)(((v1 + 896) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 6704));
    v68 = (_DWORD *)(((v1 + 6704) >> 3) + 2147450880);
    *v68 = -117901064;
    v68[1] = -117901064;
    *(_BYTE *)(((v1 + 880) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 6608));
    v69 = (_DWORD *)(((v1 + 6608) >> 3) + 2147450880);
    *v69 = -117901064;
    v69[1] = -117901064;
    *(_BYTE *)(((v1 + 864) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 6512));
    v70 = (_DWORD *)(((v1 + 6512) >> 3) + 2147450880);
    *v70 = -117901064;
    v70[1] = -117901064;
    *(_BYTE *)(((v1 + 848) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 6416));
    v71 = (_DWORD *)(((v1 + 6416) >> 3) + 2147450880);
    *v71 = -117901064;
    v71[1] = -117901064;
    *(_BYTE *)(((v1 + 832) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 6320));
    v72 = (_DWORD *)(((v1 + 6320) >> 3) + 2147450880);
    *v72 = -117901064;
    v72[1] = -117901064;
    *(_BYTE *)(((v1 + 816) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 6224));
    v73 = (_DWORD *)(((v1 + 6224) >> 3) + 2147450880);
    *v73 = -117901064;
    v73[1] = -117901064;
    *(_BYTE *)(((v1 + 800) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 6128));
    v74 = (_DWORD *)(((v1 + 6128) >> 3) + 2147450880);
    *v74 = -117901064;
    v74[1] = -117901064;
    *(_BYTE *)(((v1 + 784) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 6032));
    v75 = (_DWORD *)(((v1 + 6032) >> 3) + 2147450880);
    *v75 = -117901064;
    v75[1] = -117901064;
    *(_BYTE *)(((v1 + 768) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 5936));
    v76 = (_DWORD *)(((v1 + 5936) >> 3) + 2147450880);
    *v76 = -117901064;
    v76[1] = -117901064;
    *(_BYTE *)(((v1 + 752) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 5840));
    v77 = (_DWORD *)(((v1 + 5840) >> 3) + 2147450880);
    *v77 = -117901064;
    v77[1] = -117901064;
    *(_BYTE *)(((v1 + 736) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 5744));
    v78 = (_DWORD *)(((v1 + 5744) >> 3) + 2147450880);
    *v78 = -117901064;
    v78[1] = -117901064;
    *(_BYTE *)(((v1 + 720) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 5648));
    v79 = (_DWORD *)(((v1 + 5648) >> 3) + 2147450880);
    *v79 = -117901064;
    v79[1] = -117901064;
    *(_BYTE *)(((v1 + 704) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 5552));
    v80 = (_DWORD *)(((v1 + 5552) >> 3) + 2147450880);
    *v80 = -117901064;
    v80[1] = -117901064;
    *(_BYTE *)(((v1 + 688) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 5456));
    v81 = (_DWORD *)(((v1 + 5456) >> 3) + 2147450880);
    *v81 = -117901064;
    v81[1] = -117901064;
    *(_BYTE *)(((v1 + 672) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 5360));
    v82 = (_DWORD *)(((v1 + 5360) >> 3) + 2147450880);
    *v82 = -117901064;
    v82[1] = -117901064;
    *(_BYTE *)(((v1 + 656) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 5264));
    v83 = (_DWORD *)(((v1 + 5264) >> 3) + 2147450880);
    *v83 = -117901064;
    v83[1] = -117901064;
    *(_BYTE *)(((v1 + 640) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 5168));
    v84 = (_DWORD *)(((v1 + 5168) >> 3) + 2147450880);
    *v84 = -117901064;
    v84[1] = -117901064;
    *(_BYTE *)(((v1 + 624) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 5072));
    v85 = (_DWORD *)(((v1 + 5072) >> 3) + 2147450880);
    *v85 = -117901064;
    v85[1] = -117901064;
    *(_BYTE *)(((v1 + 608) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 4976));
    v86 = (_DWORD *)(((v1 + 4976) >> 3) + 2147450880);
    *v86 = -117901064;
    v86[1] = -117901064;
    *(_BYTE *)(((v1 + 592) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 4880));
    v87 = (_DWORD *)(((v1 + 4880) >> 3) + 2147450880);
    *v87 = -117901064;
    v87[1] = -117901064;
    *(_BYTE *)(((v1 + 576) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 4784));
    v88 = (_DWORD *)(((v1 + 4784) >> 3) + 2147450880);
    *v88 = -117901064;
    v88[1] = -117901064;
    *(_BYTE *)(((v1 + 560) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 4688));
    v89 = (_DWORD *)(((v1 + 4688) >> 3) + 2147450880);
    *v89 = -117901064;
    v89[1] = -117901064;
    *(_BYTE *)(((v1 + 544) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 4592));
    v90 = (_DWORD *)(((v1 + 4592) >> 3) + 2147450880);
    *v90 = -117901064;
    v90[1] = -117901064;
    *(_BYTE *)(((v1 + 528) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 4496));
    v91 = (_DWORD *)(((v1 + 4496) >> 3) + 2147450880);
    *v91 = -117901064;
    v91[1] = -117901064;
    *(_BYTE *)(((v1 + 512) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 4400));
    v92 = (_DWORD *)(((v1 + 4400) >> 3) + 2147450880);
    *v92 = -117901064;
    v92[1] = -117901064;
    *(_BYTE *)(((v1 + 496) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 4304));
    v93 = (_DWORD *)(((v1 + 4304) >> 3) + 2147450880);
    *v93 = -117901064;
    v93[1] = -117901064;
    *(_BYTE *)(((v1 + 480) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 4208));
    v94 = (_DWORD *)(((v1 + 4208) >> 3) + 2147450880);
    *v94 = -117901064;
    v94[1] = -117901064;
    *(_BYTE *)(((v1 + 464) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 4112));
    v95 = (_DWORD *)(((v1 + 4112) >> 3) + 2147450880);
    *v95 = -117901064;
    v95[1] = -117901064;
    *(_BYTE *)(((v1 + 448) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 4016));
    v96 = (_DWORD *)(((v1 + 4016) >> 3) + 2147450880);
    *v96 = -117901064;
    v96[1] = -117901064;
    *(_BYTE *)(((v1 + 432) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 3920));
    v97 = (_DWORD *)(((v1 + 3920) >> 3) + 2147450880);
    *v97 = -117901064;
    v97[1] = -117901064;
    *(_BYTE *)(((v1 + 416) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 3824));
    v98 = (_DWORD *)(((v1 + 3824) >> 3) + 2147450880);
    *v98 = -117901064;
    v98[1] = -117901064;
    *(_BYTE *)(((v1 + 400) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 3728));
    v99 = (_DWORD *)(((v1 + 3728) >> 3) + 2147450880);
    *v99 = -117901064;
    v99[1] = -117901064;
    *(_BYTE *)(((v1 + 384) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 3632));
    v100 = (_DWORD *)(((v1 + 3632) >> 3) + 2147450880);
    *v100 = -117901064;
    v100[1] = -117901064;
    *(_BYTE *)(((v1 + 368) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 3536));
    v101 = (_DWORD *)(((v1 + 3536) >> 3) + 2147450880);
    *v101 = -117901064;
    v101[1] = -117901064;
    *(_BYTE *)(((v1 + 352) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 3440));
    v102 = (_DWORD *)(((v1 + 3440) >> 3) + 2147450880);
    *v102 = -117901064;
    v102[1] = -117901064;
    *(_BYTE *)(((v1 + 336) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 3344));
    v103 = (_DWORD *)(((v1 + 3344) >> 3) + 2147450880);
    *v103 = -117901064;
    v103[1] = -117901064;
    *(_BYTE *)(((v1 + 320) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 3248));
    v104 = (_DWORD *)(((v1 + 3248) >> 3) + 2147450880);
    *v104 = -117901064;
    v104[1] = -117901064;
    *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 3152));
    v105 = (_DWORD *)(((v1 + 3152) >> 3) + 2147450880);
    *v105 = -117901064;
    v105[1] = -117901064;
    *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 3056));
    v106 = (_DWORD *)(((v1 + 3056) >> 3) + 2147450880);
    *v106 = -117901064;
    v106[1] = -117901064;
    *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2960));
    v107 = (_DWORD *)(((v1 + 2960) >> 3) + 2147450880);
    *v107 = -117901064;
    v107[1] = -117901064;
    *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2864));
    v108 = (_DWORD *)(((v1 + 2864) >> 3) + 2147450880);
    *v108 = -117901064;
    v108[1] = -117901064;
    *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2768));
    v109 = (_DWORD *)(((v1 + 2768) >> 3) + 2147450880);
    *v109 = -117901064;
    v109[1] = -117901064;
    *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2672));
    v110 = (_DWORD *)(((v1 + 2672) >> 3) + 2147450880);
    *v110 = -117901064;
    v110[1] = -117901064;
    *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2576));
    v111 = (_DWORD *)(((v1 + 2576) >> 3) + 2147450880);
    *v111 = -117901064;
    v111[1] = -117901064;
    *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2480));
    v112 = (_DWORD *)(((v1 + 2480) >> 3) + 2147450880);
    *v112 = -117901064;
    v112[1] = -117901064;
    *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2384));
    v113 = (_DWORD *)(((v1 + 2384) >> 3) + 2147450880);
    *v113 = -117901064;
    v113[1] = -117901064;
    *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2288));
    v114 = (_DWORD *)(((v1 + 2288) >> 3) + 2147450880);
    *v114 = -117901064;
    v114[1] = -117901064;
    *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2192));
    v115 = (_DWORD *)(((v1 + 2192) >> 3) + 2147450880);
    *v115 = -117901064;
    v115[1] = -117901064;
    *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2096));
    v116 = (_DWORD *)(((v1 + 2096) >> 3) + 2147450880);
    *v116 = -117901064;
    v116[1] = -117901064;
    *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2000));
    v117 = (_DWORD *)(((v1 + 2000) >> 3) + 2147450880);
    *v117 = -117901064;
    v117[1] = -117901064;
    *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1904));
  }
  if ( v119 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8A60) = 0LL;
    memset(
      (void *)((unsigned __int64)(v3 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v3 + 2147450880 - (((_DWORD)v3 + 2147450888) & 0xFFFFFFF8) + 2664) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    __asan_stack_free_9(v1, 21312LL, v119);
  }
  return &data::getShopTypeEnumMap[abi:cxx11](void)::m;
};

// Line 441: range 000000000CB8448A-000000000CB847FD
const char *__fastcall data::enumValToStr(data::ShopRefreshType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::ShopRefreshType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::ShopRefreshType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 5 e:440 64 8 8 iter:443 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getShopRefreshTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::ShopRefreshType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::ShopRefreshType,std::pair<std::string,std::string>>::find(map, (const std::map<data::ShopRefreshType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::ShopRefreshType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::ShopRefreshType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::ShopRefreshType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::ShopRefreshType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
      "enumValToStr",
      446);
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
    result = "INVALID_ShopRefreshType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::ShopRefreshType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::ShopRefreshType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 453: range 000000000CB847FE-000000000CB84DB6
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::ShopRefreshType>,false,true>::pointer v10; // rax
  data::ShopRefreshType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::ShopRefreshType> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:462 96 8 9 <unknown> 128 8 5 s:452 160 32 9 <unknown> 224 32 9 <unk"
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
    m = data::getShopRefreshTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::ShopRefreshType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ShopRefreshType>::find(
                                                                                            m,
                                                                                            (const std::unordered_map<std::string,data::ShopRefreshType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::ShopRefreshType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::ShopRefreshType>::end(m);
    v7 = (char *)(v2 + 96);
    refreshed = std::__detail::operator==<std::pair<std::string const,data::ShopRefreshType>,true>(
                  (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ShopRefreshType>,true> *)(v2 + 64),
                  (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ShopRefreshType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
        "enumNameToVal",
        465);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::ShopRefreshType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::ShopRefreshType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
      "enumNameToVal",
      456);
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

// Line 474: range 000000000CB84DB7-000000000CB85812
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::ShopRefreshType> *i; // r14
  unsigned __int64 v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool refreshed; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::ShopRefreshType>,false,true>::pointer v12; // rax
  data::ShopRefreshType second; // ecx
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
                        " <unknown> 144 4 9 <unknown> 160 8 6 it:488 192 8 9 <unknown> 224 8 5 s:473 256 32 9 <unknown> 3"
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::ShopRefreshType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::ShopRefreshType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, e);
      *(_DWORD *)(v2 + 112) = 1;
      std::pair<std::string const,data::ShopRefreshType>::pair<char const(&)[4],data::ShopRefreshType,true>(
        (std::pair<const std::string,data::ShopRefreshType> *const)(v2 + 448),
        (const char (*)[4])off_1A140920,
        (data::ShopRefreshType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, off_1A140920);
      *(_DWORD *)(v2 + 128) = 2;
      std::pair<std::string const,data::ShopRefreshType>::pair<char const(&)[4],data::ShopRefreshType,true>(
        (std::pair<const std::string,data::ShopRefreshType> *const)(v2 + 488),
        (const char (*)[4])off_1A140960,
        (data::ShopRefreshType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, off_1A140960);
      *(_DWORD *)(v2 + 144) = 3;
      std::pair<std::string const,data::ShopRefreshType>::pair<char const(&)[4],data::ShopRefreshType,true>(
        (std::pair<const std::string,data::ShopRefreshType> *const)(v2 + 528),
        (const char (*)[4])off_1A1409A0,
        (data::ShopRefreshType *)(v2 + 144));
      std::allocator<std::pair<std::string const,data::ShopRefreshType>>::allocator((std::allocator<std::pair<const std::string,data::ShopRefreshType> > *const)(v2 + 80));
      std::unordered_map<std::string,data::ShopRefreshType>::unordered_map(
        &data::enumStrToVal(char const*,data::ShopRefreshType &)::m,
        (std::initializer_list<std::pair<const std::string,data::ShopRefreshType> >)__PAIR128__(3LL, v2 + 448),
        0LL,
        (const std::unordered_map<std::string,data::ShopRefreshType>::hasher *)(v2 + 48),
        (const std::unordered_map<std::string,data::ShopRefreshType>::key_equal *)(v2 + 64),
        (const std::unordered_map<std::string,data::ShopRefreshType>::allocator_type *)(v2 + 80));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::ShopRefreshType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::ShopRefreshType>::~unordered_map,
        &data::enumStrToVal(char const*,data::ShopRefreshType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::ShopRefreshType>>::~allocator((std::allocator<std::pair<const std::string,data::ShopRefreshType> > *const)(v2 + 80));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::ShopRefreshType> *)(v2 + 568);
            i != (std::pair<const std::string,data::ShopRefreshType> *)(v2 + 448);
            std::pair<std::string const,data::ShopRefreshType>::~pair(i) )
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
    *(std::unordered_map<std::string,data::ShopRefreshType>::iterator *)(v2 + 160) = std::unordered_map<std::string,data::ShopRefreshType>::find(
                                                                                       &data::enumStrToVal(char const*,data::ShopRefreshType &)::m,
                                                                                       (const std::unordered_map<std::string,data::ShopRefreshType>::key_type *)(v2 + 320));
    std::string::~string((void *)(v2 + 320));
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 96);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, v2 + 320);
    *(std::unordered_map<std::string,data::ShopRefreshType>::iterator *)(v2 + 192) = std::unordered_map<std::string,data::ShopRefreshType>::end(&data::enumStrToVal(char const*,data::ShopRefreshType &)::m);
    v9 = (char *)(v2 + 192);
    refreshed = std::__detail::operator==<std::pair<std::string const,data::ShopRefreshType>,true>(
                  (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ShopRefreshType>,true> *)(v2 + 160),
                  (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ShopRefreshType>,true> *)(v2 + 192));
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( refreshed )
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
        "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
        "enumStrToVal",
        491);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 384),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)(v2 + 224));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::ShopRefreshType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::ShopRefreshType>,false,true> *const)(v2 + 160));
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
      "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
      "enumStrToVal",
      477);
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

// Line 500: range 000000000CB85813-000000000CB85829
const char *__cdecl data::getDescription(data::ShopRefreshType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 505: range 000000000CB8582A-000000000CB859DF
bool __cdecl data::isValidShopRefreshType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::ShopRefreshType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::ShopRefreshType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:506 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidShopRefreshType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getShopRefreshTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::ShopRefreshType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::ShopRefreshType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getShopRefreshTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::ShopRefreshType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::ShopRefreshType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::ShopRefreshType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::ShopRefreshType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::ShopRefreshType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 511: range 000000000CB859E0-000000000CB85B41
bool __cdecl data::isValidShopRefreshTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::ShopRefreshType> *v5; // rcx
  const std::unordered_map<std::string,data::ShopRefreshType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidShopRefreshTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getShopRefreshTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::ShopRefreshType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ShopRefreshType>::end(v5);
  v6 = data::getShopRefreshTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::ShopRefreshType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::ShopRefreshType>::find(
                                                                                          v6,
                                                                                          name);
  result = std::__detail::operator!=<std::pair<std::string const,data::ShopRefreshType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ShopRefreshType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ShopRefreshType>,true> *)(v2 + 64));
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

// Line 516: range 000000000CB85B42-000000000CB860A1
const std::unordered_map<std::string,data::ShopRefreshType> *__cdecl data::getShopRefreshTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::ShopRefreshType> *i; // r14
  const std::unordered_map<std::string,data::ShopRefreshType> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getShopRefreshTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -234753535;
  v3[536862723] = -234556924;
  v3[536862724] = -234556924;
  v3[536862730] = -202116109;
  v3[536862731] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getShopRefreshTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getShopRefreshTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v0);
    *(_DWORD *)(v1 + 96) = 0;
    std::pair<std::string const,data::ShopRefreshType>::pair<char const(&)[18],data::ShopRefreshType,true>(
      (std::pair<const std::string,data::ShopRefreshType> *const)(v1 + 160),
      (const char (*)[18])"SHOP_REFRESH_NONE",
      (data::ShopRefreshType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "SHOP_REFRESH_NONE");
    *(_DWORD *)(v1 + 112) = 1;
    std::pair<std::string const,data::ShopRefreshType>::pair<char const(&)[21],data::ShopRefreshType,true>(
      (std::pair<const std::string,data::ShopRefreshType> *const)(v1 + 200),
      (const char (*)[21])"SHOP_REFRESH_MONTHLY",
      (data::ShopRefreshType *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, "SHOP_REFRESH_MONTHLY");
    *(_DWORD *)(v1 + 128) = 2;
    std::pair<std::string const,data::ShopRefreshType>::pair<char const(&)[20],data::ShopRefreshType,true>(
      (std::pair<const std::string,data::ShopRefreshType> *const)(v1 + 240),
      (const char (*)[20])"SHOP_REFRESH_WEEKLY",
      (data::ShopRefreshType *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, "SHOP_REFRESH_WEEKLY");
    *(_DWORD *)(v1 + 144) = 3;
    std::pair<std::string const,data::ShopRefreshType>::pair<char const(&)[19],data::ShopRefreshType,true>(
      (std::pair<const std::string,data::ShopRefreshType> *const)(v1 + 280),
      (const char (*)[19])"SHOP_REFRESH_DAILY",
      (data::ShopRefreshType *)(v1 + 144));
    std::allocator<std::pair<std::string const,data::ShopRefreshType>>::allocator((std::allocator<std::pair<const std::string,data::ShopRefreshType> > *const)(v1 + 80));
    std::unordered_map<std::string,data::ShopRefreshType>::unordered_map(
      &data::getShopRefreshTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::ShopRefreshType> >)__PAIR128__(4LL, v1 + 160),
      0LL,
      (const std::unordered_map<std::string,data::ShopRefreshType>::hasher *)(v1 + 48),
      (const std::unordered_map<std::string,data::ShopRefreshType>::key_equal *)(v1 + 64),
      (const std::unordered_map<std::string,data::ShopRefreshType>::allocator_type *)(v1 + 80));
    __cxa_guard_release(&`guard variable for'data::getShopRefreshTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::ShopRefreshType>::~unordered_map,
      &data::getShopRefreshTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::ShopRefreshType>>::~allocator((std::allocator<std::pair<const std::string,data::ShopRefreshType> > *const)(v1 + 80));
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::ShopRefreshType> *)(v1 + 320);
          i != (std::pair<const std::string,data::ShopRefreshType> *)(v1 + 160);
          std::pair<std::string const,data::ShopRefreshType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getShopRefreshTypeNameMap[abi:cxx11](void)::m;
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

// Line 528: range 000000000CB860A2-000000000CB86872
const std::map<data::ShopRefreshType,std::pair<std::string,std::string >> *__cdecl data::getShopRefreshTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::ShopRefreshType,std::pair<std::string,std::string > > *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getShopRefreshTypeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getShopRefreshTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getShopRefreshTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 64, v0);
    *(_DWORD *)(v1 + 64) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[18],true>(
      (std::pair<std::string,std::string > *const)(v1 + 128),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[18])"SHOP_REFRESH_NONE");
    std::pair<data::ShopRefreshType const,std::pair<std::string,std::string>>::pair<data::ShopRefreshType,true>(
      (std::pair<const data::ShopRefreshType,std::pair<std::string,std::string > > *const)(v1 + 512),
      (data::ShopRefreshType *)(v1 + 64),
      (const std::pair<std::string,std::string > *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v1 + 64);
    *(_DWORD *)(v1 + 80) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[4],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 224),
      (const char (*)[4])off_1A140920,
      (const char (*)[21])"SHOP_REFRESH_MONTHLY");
    std::pair<data::ShopRefreshType const,std::pair<std::string,std::string>>::pair<data::ShopRefreshType,true>(
      (std::pair<const data::ShopRefreshType,std::pair<std::string,std::string > > *const)(v1 + 584),
      (data::ShopRefreshType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 224));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[4],char const(&)[20],true>(
      (std::pair<std::string,std::string > *const)(v1 + 320),
      (const char (*)[4])off_1A140960,
      (const char (*)[20])"SHOP_REFRESH_WEEKLY");
    std::pair<data::ShopRefreshType const,std::pair<std::string,std::string>>::pair<data::ShopRefreshType,true>(
      (std::pair<const data::ShopRefreshType,std::pair<std::string,std::string > > *const)(v1 + 656),
      (data::ShopRefreshType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 320));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 3;
    std::pair<std::string,std::string>::pair<char const(&)[4],char const(&)[19],true>(
      (std::pair<std::string,std::string > *const)(v1 + 416),
      (const char (*)[4])off_1A1409A0,
      (const char (*)[19])"SHOP_REFRESH_DAILY");
    std::pair<data::ShopRefreshType const,std::pair<std::string,std::string>>::pair<data::ShopRefreshType,true>(
      (std::pair<const data::ShopRefreshType,std::pair<std::string,std::string > > *const)(v1 + 728),
      (data::ShopRefreshType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 416));
    std::allocator<std::pair<data::ShopRefreshType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::ShopRefreshType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    std::map<data::ShopRefreshType,std::pair<std::string,std::string>>::map(
      &data::getShopRefreshTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::ShopRefreshType,std::pair<std::string,std::string > > >)__PAIR128__(4LL, v1 + 512),
      (const std::less<data::ShopRefreshType> *)(v1 + 32),
      (const std::map<data::ShopRefreshType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 48));
    __cxa_guard_release(&`guard variable for'data::getShopRefreshTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::ShopRefreshType,std::pair<std::string,std::string>>::~map,
      &data::getShopRefreshTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::ShopRefreshType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::ShopRefreshType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::ShopRefreshType,std::pair<std::string,std::string > > *)(v1 + 800);
          i != (std::pair<const data::ShopRefreshType,std::pair<std::string,std::string > > *)(v1 + 512);
          std::pair<data::ShopRefreshType const,std::pair<std::string,std::string>>::~pair(i) )
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
  return &data::getShopRefreshTypeEnumMap[abi:cxx11](void)::m;
};

// Line 540: range 000000000CB86873-000000000CB86BE6
const char *__fastcall data::enumValToStr(data::ShopPrecondition e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::ShopPrecondition,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::ShopPrecondition,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 5 e:539 64 8 8 iter:542 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getShopPreconditionEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::ShopPrecondition,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::ShopPrecondition,std::pair<std::string,std::string>>::find(map, (const std::map<data::ShopPrecondition,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::ShopPrecondition,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::ShopPrecondition,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::ShopPrecondition,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::ShopPrecondition,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
      "enumValToStr",
      545);
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
    result = "INVALID_ShopPrecondition";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::ShopPrecondition const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::ShopPrecondition,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 552: range 000000000CB86BE7-000000000CB8719F
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::ShopPrecondition>,false,true>::pointer v10; // rax
  data::ShopPrecondition second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::ShopPrecondition> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:561 96 8 9 <unknown> 128 8 5 s:551 160 32 9 <unknown> 224 32 9 <unk"
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
    m = data::getShopPreconditionNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::ShopPrecondition>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ShopPrecondition>::find(
                                                                                             m,
                                                                                             (const std::unordered_map<std::string,data::ShopPrecondition>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::ShopPrecondition>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::ShopPrecondition>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::ShopPrecondition>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ShopPrecondition>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ShopPrecondition>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
        "enumNameToVal",
        564);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::ShopPrecondition>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::ShopPrecondition>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
      "enumNameToVal",
      555);
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

// Line 573: range 000000000CB871A0-000000000CB8845C
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int v5; // eax
  std::pair<const std::string,data::ShopPrecondition> *i; // r14
  const char *v7; // rsi
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::ShopPrecondition>,false,true>::pointer v11; // rax
  data::ShopPrecondition second; // ecx
  char v13; // dl
  unsigned int v14; // ebx
  char v17[1584]; // [rsp+20h] [rbp-630h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1536LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "29 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 4 9 <unknown> 128 4 9"
                        " <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unknown> 208 4 9 <unkn"
                        "own> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 4 9 <unknown> 288 4 9 <unknown> 3"
                        "04 4 9 <unknown> 320 4 9 <unknown> 336 4 9 <unknown> 352 4 9 <unknown> 368 4 9 <unknown> 384 4 9"
                        " <unknown> 400 8 6 it:602 432 8 9 <unknown> 464 8 5 s:572 496 32 9 <unknown> 560 32 9 <unknown> "
                        "624 32 9 <unknown> 688 720 9 <unknown>";
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
  v4[536862732] = 61956;
  v4[536862732] = -234881024;
  v4[536862733] = 62194;
  v4[536862733] = -234881024;
  v4[536862734] = 62194;
  v4[536862734] = -234881024;
  v4[536862735] = 62194;
  v4[536862736] = -219021312;
  v4[536862737] = 62194;
  v4[536862738] = -219021312;
  v4[536862739] = 62194;
  v4[536862740] = -219021312;
  v4[536862741] = 62194;
  v4[536862764] = -202116109;
  v4[536862765] = -202116109;
  v4[536862766] = -202116109;
  v4[536862767] = -202116109;
  *(_QWORD *)(v2 + 464) = s;
  if ( *(_QWORD *)(v2 + 464) )
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::ShopPrecondition &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::ShopPrecondition &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, e);
      *(_DWORD *)(v2 + 112) = 1;
      std::pair<std::string const,data::ShopPrecondition>::pair<char const(&)[9],data::ShopPrecondition,true>(
        (std::pair<const std::string,data::ShopPrecondition> *const)(v2 + 688),
        (const char (*)[9])byte_1A140FE0,
        (data::ShopPrecondition *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1A140FE0);
      *(_DWORD *)(v2 + 128) = 2;
      std::pair<std::string const,data::ShopPrecondition>::pair<char const(&)[13],data::ShopPrecondition,true>(
        (std::pair<const std::string,data::ShopPrecondition> *const)(v2 + 728),
        (const char (*)[13])byte_1A141020,
        (data::ShopPrecondition *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, byte_1A141020);
      *(_DWORD *)(v2 + 144) = 3;
      std::pair<std::string const,data::ShopPrecondition>::pair<char const(&)[25],data::ShopPrecondition,true>(
        (std::pair<const std::string,data::ShopPrecondition> *const)(v2 + 768),
        (const char (*)[25])byte_1A141060,
        (data::ShopPrecondition *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, byte_1A141060);
      *(_DWORD *)(v2 + 160) = 4;
      std::pair<std::string const,data::ShopPrecondition>::pair<char const(&)[28],data::ShopPrecondition,true>(
        (std::pair<const std::string,data::ShopPrecondition> *const)(v2 + 808),
        (const char (*)[28])byte_1A1410A0,
        (data::ShopPrecondition *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, byte_1A1410A0);
      *(_DWORD *)(v2 + 176) = 5;
      std::pair<std::string const,data::ShopPrecondition>::pair<char const(&)[13],data::ShopPrecondition,true>(
        (std::pair<const std::string,data::ShopPrecondition> *const)(v2 + 848),
        (const char (*)[13])byte_1A1410E0,
        (data::ShopPrecondition *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, byte_1A1410E0);
      *(_DWORD *)(v2 + 192) = 6;
      std::pair<std::string const,data::ShopPrecondition>::pair<char const(&)[13],data::ShopPrecondition,true>(
        (std::pair<const std::string,data::ShopPrecondition> *const)(v2 + 888),
        (const char (*)[13])byte_1A141120,
        (data::ShopPrecondition *)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 208, byte_1A141120);
      *(_DWORD *)(v2 + 208) = 7;
      std::pair<std::string const,data::ShopPrecondition>::pair<char const(&)[23],data::ShopPrecondition,true>(
        (std::pair<const std::string,data::ShopPrecondition> *const)(v2 + 928),
        (const char (*)[23])byte_1A141160,
        (data::ShopPrecondition *)(v2 + 208));
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 224, byte_1A141160);
      *(_DWORD *)(v2 + 224) = 8;
      std::pair<std::string const,data::ShopPrecondition>::pair<char const(&)[19],data::ShopPrecondition,true>(
        (std::pair<const std::string,data::ShopPrecondition> *const)(v2 + 968),
        (const char (*)[19])byte_1A1411A0,
        (data::ShopPrecondition *)(v2 + 224));
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 240, byte_1A1411A0);
      *(_DWORD *)(v2 + 240) = 9;
      std::pair<std::string const,data::ShopPrecondition>::pair<char const(&)[19],data::ShopPrecondition,true>(
        (std::pair<const std::string,data::ShopPrecondition> *const)(v2 + 1008),
        (const char (*)[19])byte_1A1411E0,
        (data::ShopPrecondition *)(v2 + 240));
      if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 256, byte_1A1411E0);
      *(_DWORD *)(v2 + 256) = 10;
      std::pair<std::string const,data::ShopPrecondition>::pair<char const(&)[19],data::ShopPrecondition,true>(
        (std::pair<const std::string,data::ShopPrecondition> *const)(v2 + 1048),
        (const char (*)[19])byte_1A141220,
        (data::ShopPrecondition *)(v2 + 256));
      if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 272, byte_1A141220);
      *(_DWORD *)(v2 + 272) = 11;
      std::pair<std::string const,data::ShopPrecondition>::pair<char const(&)[16],data::ShopPrecondition,true>(
        (std::pair<const std::string,data::ShopPrecondition> *const)(v2 + 1088),
        (const char (*)[16])byte_1A141260,
        (data::ShopPrecondition *)(v2 + 272));
      if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 288, byte_1A141260);
      *(_DWORD *)(v2 + 288) = 12;
      std::pair<std::string const,data::ShopPrecondition>::pair<char const(&)[13],data::ShopPrecondition,true>(
        (std::pair<const std::string,data::ShopPrecondition> *const)(v2 + 1128),
        (const char (*)[13])byte_1A1412A0,
        (data::ShopPrecondition *)(v2 + 288));
      if ( *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 304, byte_1A1412A0);
      *(_DWORD *)(v2 + 304) = 13;
      std::pair<std::string const,data::ShopPrecondition>::pair<char const(&)[25],data::ShopPrecondition,true>(
        (std::pair<const std::string,data::ShopPrecondition> *const)(v2 + 1168),
        (const char (*)[25])byte_1A1412E0,
        (data::ShopPrecondition *)(v2 + 304));
      if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 320, byte_1A1412E0);
      *(_DWORD *)(v2 + 320) = 14;
      std::pair<std::string const,data::ShopPrecondition>::pair<char const(&)[25],data::ShopPrecondition,true>(
        (std::pair<const std::string,data::ShopPrecondition> *const)(v2 + 1208),
        (const char (*)[25])byte_1A141320,
        (data::ShopPrecondition *)(v2 + 320));
      if ( *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 336, byte_1A141320);
      *(_DWORD *)(v2 + 336) = 15;
      std::pair<std::string const,data::ShopPrecondition>::pair<char const(&)[25],data::ShopPrecondition,true>(
        (std::pair<const std::string,data::ShopPrecondition> *const)(v2 + 1248),
        (const char (*)[25])byte_1A141360,
        (data::ShopPrecondition *)(v2 + 336));
      if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 352, byte_1A141360);
      *(_DWORD *)(v2 + 352) = 16;
      std::pair<std::string const,data::ShopPrecondition>::pair<char const(&)[25],data::ShopPrecondition,true>(
        (std::pair<const std::string,data::ShopPrecondition> *const)(v2 + 1288),
        (const char (*)[25])byte_1A1413A0,
        (data::ShopPrecondition *)(v2 + 352));
      if ( *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 368, byte_1A1413A0);
      *(_DWORD *)(v2 + 368) = 17;
      std::pair<std::string const,data::ShopPrecondition>::pair<char const(&)[32],data::ShopPrecondition,true>(
        (std::pair<const std::string,data::ShopPrecondition> *const)(v2 + 1328),
        (const char (*)[32])byte_1A1413E0,
        (data::ShopPrecondition *)(v2 + 368));
      if ( *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 384, byte_1A1413E0);
      *(_DWORD *)(v2 + 384) = 18;
      std::pair<std::string const,data::ShopPrecondition>::pair<char const(&)[28],data::ShopPrecondition,true>(
        (std::pair<const std::string,data::ShopPrecondition> *const)(v2 + 1368),
        (const char (*)[28])byte_1A141420,
        (data::ShopPrecondition *)(v2 + 384));
      std::allocator<std::pair<std::string const,data::ShopPrecondition>>::allocator((std::allocator<std::pair<const std::string,data::ShopPrecondition> > *const)(v2 + 80));
      std::unordered_map<std::string,data::ShopPrecondition>::unordered_map(
        &data::enumStrToVal(char const*,data::ShopPrecondition &)::m,
        (std::initializer_list<std::pair<const std::string,data::ShopPrecondition> >)__PAIR128__(18LL, v2 + 688),
        0LL,
        (const std::unordered_map<std::string,data::ShopPrecondition>::hasher *)(v2 + 48),
        (const std::unordered_map<std::string,data::ShopPrecondition>::key_equal *)(v2 + 64),
        (const std::unordered_map<std::string,data::ShopPrecondition>::allocator_type *)(v2 + 80));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::ShopPrecondition &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::ShopPrecondition>::~unordered_map,
        &data::enumStrToVal(char const*,data::ShopPrecondition &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::ShopPrecondition>>::~allocator((std::allocator<std::pair<const std::string,data::ShopPrecondition> > *const)(v2 + 80));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::ShopPrecondition> *)(v2 + 1408);
            i != (std::pair<const std::string,data::ShopPrecondition> *)(v2 + 688);
            std::pair<std::string const,data::ShopPrecondition>::~pair(i) )
      {
        --i;
      }
      __asan_poison_stack_memory(v2 + 688, 720LL);
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
    *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((v2 + 560) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 96);
    v7 = *(const char **)(v2 + 464);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 560),
      v7,
      (const std::allocator<char> *)(v2 + 96));
    if ( *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 400, v7);
    *(std::unordered_map<std::string,data::ShopPrecondition>::iterator *)(v2 + 400) = std::unordered_map<std::string,data::ShopPrecondition>::find(
                                                                                        &data::enumStrToVal(char const*,data::ShopPrecondition &)::m,
                                                                                        (const std::unordered_map<std::string,data::ShopPrecondition>::key_type *)(v2 + 560));
    std::string::~string((void *)(v2 + 560));
    *(_DWORD *)(((v2 + 560) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 96);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 432, v2 + 560);
    *(std::unordered_map<std::string,data::ShopPrecondition>::iterator *)(v2 + 432) = std::unordered_map<std::string,data::ShopPrecondition>::end(&data::enumStrToVal(char const*,data::ShopPrecondition &)::m);
    v8 = (char *)(v2 + 432);
    v9 = std::__detail::operator==<std::pair<std::string const,data::ShopPrecondition>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ShopPrecondition>,true> *)(v2 + 400),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ShopPrecondition>,true> *)(v2 + 432));
    *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
    {
      *(_DWORD *)(((v2 + 624) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 624) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 655) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 655) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 624, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 624),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
        "enumStrToVal",
        605);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 624),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v10, (const char *const *)(v2 + 464));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 624));
      v5 = -1;
    }
    else
    {
      v11 = std::__detail::_Node_iterator<std::pair<std::string const,data::ShopPrecondition>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::ShopPrecondition>,false,true> *const)(v2 + 400));
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
      "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
      "enumStrToVal",
      576);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
      (common::milog::MiLogStream *const)(v2 + 496),
      (const char (*)[14])"s is nullptr!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 496));
    v5 = -1;
  }
  v14 = v5;
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80B8) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 192) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1536LL, v17);
  }
  return v14;
};

// Line 614: range 000000000CB8845D-000000000CB88473
const char *__cdecl data::getDescription(data::ShopPrecondition e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 619: range 000000000CB88474-000000000CB88629
bool __cdecl data::isValidShopPrecondition(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::ShopPrecondition,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::ShopPrecondition,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:620 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidShopPrecondition;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getShopPreconditionEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::ShopPrecondition,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::ShopPrecondition,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getShopPreconditionEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::ShopPrecondition,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::ShopPrecondition,std::pair<std::string,std::string>>::find(v6, (const std::map<data::ShopPrecondition,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::ShopPrecondition,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::ShopPrecondition,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 625: range 000000000CB8862A-000000000CB8878B
bool __cdecl data::isValidShopPreconditionName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::ShopPrecondition> *v5; // rcx
  const std::unordered_map<std::string,data::ShopPrecondition> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidShopPreconditionName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getShopPreconditionNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::ShopPrecondition>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ShopPrecondition>::end(v5);
  v6 = data::getShopPreconditionNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::ShopPrecondition>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::ShopPrecondition>::find(
                                                                                           v6,
                                                                                           name);
  result = std::__detail::operator!=<std::pair<std::string const,data::ShopPrecondition>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ShopPrecondition>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ShopPrecondition>,true> *)(v2 + 64));
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

// Line 630: range 000000000CB8878C-000000000CB8943D
const std::unordered_map<std::string,data::ShopPrecondition> *__cdecl data::getShopPreconditionNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::ShopPrecondition> *i; // r14
  char v6[1328]; // [rsp+10h] [rbp-530h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_5(1280LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "23 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 "
                        "<unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unkno"
                        "wn> 208 4 9 <unknown> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 4 9 <unknown> 28"
                        "8 4 9 <unknown> 304 4 9 <unknown> 320 4 9 <unknown> 336 4 9 <unknown> 352 4 9 <unknown> 368 4 9 "
                        "<unknown> 384 760 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::getShopPreconditionNameMap[abi:cxx11];
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
  v3[536862755] = -218103808;
  v3[536862756] = -202116109;
  v3[536862757] = -202116109;
  v3[536862758] = -202116109;
  v3[536862759] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getShopPreconditionNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getShopPreconditionNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string const,data::ShopPrecondition>::pair<char const(&)[23],data::ShopPrecondition,true>(
      (std::pair<const std::string,data::ShopPrecondition> *const)(v1 + 384),
      (const char (*)[23])"SHOP_PRECONDITION_NONE",
      (data::ShopPrecondition *)(v1 + 80));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, "SHOP_PRECONDITION_NONE");
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string const,data::ShopPrecondition>::pair<char const(&)[26],data::ShopPrecondition,true>(
      (std::pair<const std::string,data::ShopPrecondition> *const)(v1 + 424),
      (const char (*)[26])"SHOP_PRECONDITION_SPECIFY",
      (data::ShopPrecondition *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "SHOP_PRECONDITION_SPECIFY");
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string const,data::ShopPrecondition>::pair<char const(&)[23],data::ShopPrecondition,true>(
      (std::pair<const std::string,data::ShopPrecondition> *const)(v1 + 464),
      (const char (*)[23])"SHOP_PRECONDITION_REST",
      (data::ShopPrecondition *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, "SHOP_PRECONDITION_REST");
    *(_DWORD *)(v1 + 128) = 3;
    std::pair<std::string const,data::ShopPrecondition>::pair<char const(&)[29],data::ShopPrecondition,true>(
      (std::pair<const std::string,data::ShopPrecondition> *const)(v1 + 504),
      (const char (*)[29])"SHOP_PRECONDITION_SHEET_REST",
      (data::ShopPrecondition *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, "SHOP_PRECONDITION_SHEET_REST");
    *(_DWORD *)(v1 + 144) = 4;
    std::pair<std::string const,data::ShopPrecondition>::pair<char const(&)[43],data::ShopPrecondition,true>(
      (std::pair<const std::string,data::ShopPrecondition> *const)(v1 + 544),
      (const char (*)[43])"SHOP_PRECONDITION_SHEET_TEASURE_MAP_REGION",
      (data::ShopPrecondition *)(v1 + 144));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, "SHOP_PRECONDITION_SHEET_TEASURE_MAP_REGION");
    *(_DWORD *)(v1 + 160) = 5;
    std::pair<std::string const,data::ShopPrecondition>::pair<char const(&)[29],data::ShopPrecondition,true>(
      (std::pair<const std::string,data::ShopPrecondition> *const)(v1 + 584),
      (const char (*)[29])"SHOP_PRECONDITION_HOME_LEVEL",
      (data::ShopPrecondition *)(v1 + 160));
    if ( *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 176, "SHOP_PRECONDITION_HOME_LEVEL");
    *(_DWORD *)(v1 + 176) = 6;
    std::pair<std::string const,data::ShopPrecondition>::pair<char const(&)[31],data::ShopPrecondition,true>(
      (std::pair<const std::string,data::ShopPrecondition> *const)(v1 + 624),
      (const char (*)[31])"SHOP_PRECONDITION_QUEST_FINISH",
      (data::ShopPrecondition *)(v1 + 176));
    if ( *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 192, "SHOP_PRECONDITION_QUEST_FINISH");
    *(_DWORD *)(v1 + 192) = 7;
    std::pair<std::string const,data::ShopPrecondition>::pair<char const(&)[50],data::ShopPrecondition,true>(
      (std::pair<const std::string,data::ShopPrecondition> *const)(v1 + 664),
      (const char (*)[50])"SHOP_PRECONDITION_SHEET_FLEUR_FAIR_WATCHER_FINISH",
      (data::ShopPrecondition *)(v1 + 192));
    if ( *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 208, "SHOP_PRECONDITION_SHEET_FLEUR_FAIR_WATCHER_FINISH");
    *(_DWORD *)(v1 + 208) = 8;
    std::pair<std::string const,data::ShopPrecondition>::pair<char const(&)[35],data::ShopPrecondition,true>(
      (std::pair<const std::string,data::ShopPrecondition> *const)(v1 + 704),
      (const char (*)[35])"SHOP_PRECONDITION_QUEST_FINISH_ALL",
      (data::ShopPrecondition *)(v1 + 208));
    if ( *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 224, "SHOP_PRECONDITION_QUEST_FINISH_ALL");
    *(_DWORD *)(v1 + 224) = 9;
    std::pair<std::string const,data::ShopPrecondition>::pair<char const(&)[35],data::ShopPrecondition,true>(
      (std::pair<const std::string,data::ShopPrecondition> *const)(v1 + 744),
      (const char (*)[35])"SHOP_PRECONDITION_QUEST_FINISH_ANY",
      (data::ShopPrecondition *)(v1 + 224));
    if ( *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 240, "SHOP_PRECONDITION_QUEST_FINISH_ANY");
    *(_DWORD *)(v1 + 240) = 10;
    std::pair<std::string const,data::ShopPrecondition>::pair<char const(&)[28],data::ShopPrecondition,true>(
      (std::pair<const std::string,data::ShopPrecondition> *const)(v1 + 784),
      (const char (*)[28])"SHOP_PRECONDITION_GCG_LEVEL",
      (data::ShopPrecondition *)(v1 + 240));
    if ( *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 256, "SHOP_PRECONDITION_GCG_LEVEL");
    *(_DWORD *)(v1 + 256) = 11;
    std::pair<std::string const,data::ShopPrecondition>::pair<char const(&)[39],data::ShopPrecondition,true>(
      (std::pair<const std::string,data::ShopPrecondition> *const)(v1 + 824),
      (const char (*)[39])"SHOP_PRECONDITION_GCG_CARD_PROFICIENCY",
      (data::ShopPrecondition *)(v1 + 256));
    if ( *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 272, "SHOP_PRECONDITION_GCG_CARD_PROFICIENCY");
    *(_DWORD *)(v1 + 272) = 12;
    std::pair<std::string const,data::ShopPrecondition>::pair<char const(&)[31],data::ShopPrecondition,true>(
      (std::pair<const std::string,data::ShopPrecondition> *const)(v1 + 864),
      (const char (*)[31])"SHOP_PRECONDITION_GCG_HAS_CARD",
      (data::ShopPrecondition *)(v1 + 272));
    if ( *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 288, "SHOP_PRECONDITION_GCG_HAS_CARD");
    *(_DWORD *)(v1 + 288) = 13;
    std::pair<std::string const,data::ShopPrecondition>::pair<char const(&)[40],data::ShopPrecondition,true>(
      (std::pair<const std::string,data::ShopPrecondition> *const)(v1 + 904),
      (const char (*)[40])"SHOP_PRECONDITION_GCGTC_NLEVEL_FINISHED",
      (data::ShopPrecondition *)(v1 + 288));
    if ( *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 304, "SHOP_PRECONDITION_GCGTC_NLEVEL_FINISHED");
    *(_DWORD *)(v1 + 304) = 14;
    std::pair<std::string const,data::ShopPrecondition>::pair<char const(&)[40],data::ShopPrecondition,true>(
      (std::pair<const std::string,data::ShopPrecondition> *const)(v1 + 944),
      (const char (*)[40])"SHOP_PRECONDITION_GCGTC_HLEVEL_FINISHED",
      (data::ShopPrecondition *)(v1 + 304));
    if ( *(_BYTE *)(((v1 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 320) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 320, "SHOP_PRECONDITION_GCGTC_HLEVEL_FINISHED");
    *(_DWORD *)(v1 + 320) = 15;
    std::pair<std::string const,data::ShopPrecondition>::pair<char const(&)[40],data::ShopPrecondition,true>(
      (std::pair<const std::string,data::ShopPrecondition> *const)(v1 + 984),
      (const char (*)[40])"SHOP_PRECONDITION_GCGBC_NLEVEL_FINISHED",
      (data::ShopPrecondition *)(v1 + 320));
    if ( *(_BYTE *)(((v1 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 336) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 336, "SHOP_PRECONDITION_GCGBC_NLEVEL_FINISHED");
    *(_DWORD *)(v1 + 336) = 16;
    std::pair<std::string const,data::ShopPrecondition>::pair<char const(&)[40],data::ShopPrecondition,true>(
      (std::pair<const std::string,data::ShopPrecondition> *const)(v1 + 1024),
      (const char (*)[40])"SHOP_PRECONDITION_GCGBC_HLEVEL_FINISHED",
      (data::ShopPrecondition *)(v1 + 336));
    if ( *(_BYTE *)(((v1 + 352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 352) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 352, "SHOP_PRECONDITION_GCGBC_HLEVEL_FINISHED");
    *(_DWORD *)(v1 + 352) = 17;
    std::pair<std::string const,data::ShopPrecondition>::pair<char const(&)[45],data::ShopPrecondition,true>(
      (std::pair<const std::string,data::ShopPrecondition> *const)(v1 + 1064),
      (const char (*)[45])"SHOP_PRECONDITION_DONE_TEASURE_SEELIE_REGION",
      (data::ShopPrecondition *)(v1 + 352));
    if ( *(_BYTE *)(((v1 + 368) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 368) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 368, "SHOP_PRECONDITION_DONE_TEASURE_SEELIE_REGION");
    *(_DWORD *)(v1 + 368) = 18;
    std::pair<std::string const,data::ShopPrecondition>::pair<char const(&)[47],data::ShopPrecondition,true>(
      (std::pair<const std::string,data::ShopPrecondition> *const)(v1 + 1104),
      (const char (*)[47])"SHOP_PRECONDITION_GCG_LEVEL_CHALLENGE_FINISHED",
      (data::ShopPrecondition *)(v1 + 368));
    std::allocator<std::pair<std::string const,data::ShopPrecondition>>::allocator((std::allocator<std::pair<const std::string,data::ShopPrecondition> > *const)(v1 + 64));
    std::unordered_map<std::string,data::ShopPrecondition>::unordered_map(
      &data::getShopPreconditionNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::ShopPrecondition> >)__PAIR128__(19LL, v1 + 384),
      0LL,
      (const std::unordered_map<std::string,data::ShopPrecondition>::hasher *)(v1 + 32),
      (const std::unordered_map<std::string,data::ShopPrecondition>::key_equal *)(v1 + 48),
      (const std::unordered_map<std::string,data::ShopPrecondition>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getShopPreconditionNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::ShopPrecondition>::~unordered_map,
      &data::getShopPreconditionNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::ShopPrecondition>>::~allocator((std::allocator<std::pair<const std::string,data::ShopPrecondition> > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::ShopPrecondition> *)(v1 + 1144);
          i != (std::pair<const std::string,data::ShopPrecondition> *)(v1 + 384);
          std::pair<std::string const,data::ShopPrecondition>::~pair(i) )
    {
      --i;
    }
  }
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8098) = 0LL;
    memset(
      (void *)((unsigned __int64)(v3 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v3 + 2147450880 - (((_DWORD)v3 + 2147450888) & 0xFFFFFFF8) + 160) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    __asan_stack_free_5(v1, 1280LL, v6);
  }
  return &data::getShopPreconditionNameMap[abi:cxx11](void)::m;
};

// Line 657: range 000000000CB8943E-000000000CB8ACE5
const std::map<data::ShopPrecondition,std::pair<std::string,std::string >> *__cdecl data::getShopPreconditionEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::ShopPrecondition,std::pair<std::string,std::string > > *i; // r14
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
  char v24[3760]; // [rsp+10h] [rbp-EB0h] BYREF

  v1 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_6(3712LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "41 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 4 9"
                        " <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unknown> 208 4 9 <unkn"
                        "own> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 4 9 <unknown> 288 4 9 <unknown> 3"
                        "04 4 9 <unknown> 320 4 9 <unknown> 336 4 9 <unknown> 352 4 9 <unknown> 368 4 9 <unknown> 384 64 "
                        "9 <unknown> 480 64 9 <unknown> 576 64 9 <unknown> 672 64 9 <unknown> 768 64 9 <unknown> 864 64 9"
                        " <unknown> 960 64 9 <unknown> 1056 64 9 <unknown> 1152 64 9 <unknown> 1248 64 9 <unknown> 1344 6"
                        "4 9 <unknown> 1440 64 9 <unknown> 1536 64 9 <unknown> 1632 64 9 <unknown> 1728 64 9 <unknown> 18"
                        "24 64 9 <unknown> 1920 64 9 <unknown> 2016 64 9 <unknown> 2112 64 9 <unknown> 2208 1368 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::getShopPreconditionEnumMap[abi:cxx11];
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
  v3[536862734] = -218959118;
  v3[536862737] = -218959118;
  v3[536862740] = -218959118;
  v3[536862743] = -218959118;
  v3[536862746] = -218959118;
  v3[536862749] = -218959118;
  v3[536862752] = -218959118;
  v3[536862755] = -218959118;
  v3[536862758] = -218959118;
  v3[536862761] = -218959118;
  v3[536862764] = -218959118;
  v3[536862767] = -218959118;
  v3[536862770] = -218959118;
  v3[536862773] = -218959118;
  v3[536862776] = -218959118;
  v3[536862779] = -218959118;
  v3[536862782] = -218959118;
  v3[536862785] = -218959118;
  v3[536862788] = -218959118;
  v3[536862831] = -218103808;
  v3[536862832] = -202116109;
  v3[536862833] = -202116109;
  v3[536862834] = -202116109;
  v3[536862835] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getShopPreconditionEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getShopPreconditionEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[23],true>(
      (std::pair<std::string,std::string > *const)(v1 + 384),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[23])"SHOP_PRECONDITION_NONE");
    std::pair<data::ShopPrecondition const,std::pair<std::string,std::string>>::pair<data::ShopPrecondition,true>(
      (std::pair<const data::ShopPrecondition,std::pair<std::string,std::string > > *const)(v1 + 2208),
      (data::ShopPrecondition *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 384));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[9],char const(&)[26],true>(
      (std::pair<std::string,std::string > *const)(v1 + 480),
      (const char (*)[9])byte_1A140FE0,
      (const char (*)[26])"SHOP_PRECONDITION_SPECIFY");
    std::pair<data::ShopPrecondition const,std::pair<std::string,std::string>>::pair<data::ShopPrecondition,true>(
      (std::pair<const data::ShopPrecondition,std::pair<std::string,std::string > > *const)(v1 + 2280),
      (data::ShopPrecondition *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 480));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[23],true>(
      (std::pair<std::string,std::string > *const)(v1 + 576),
      (const char (*)[13])byte_1A141020,
      (const char (*)[23])"SHOP_PRECONDITION_REST");
    std::pair<data::ShopPrecondition const,std::pair<std::string,std::string>>::pair<data::ShopPrecondition,true>(
      (std::pair<const data::ShopPrecondition,std::pair<std::string,std::string > > *const)(v1 + 2352),
      (data::ShopPrecondition *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 576));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, v1 + 112);
    *(_DWORD *)(v1 + 128) = 3;
    std::pair<std::string,std::string>::pair<char const(&)[25],char const(&)[29],true>(
      (std::pair<std::string,std::string > *const)(v1 + 672),
      (const char (*)[25])byte_1A141060,
      (const char (*)[29])"SHOP_PRECONDITION_SHEET_REST");
    std::pair<data::ShopPrecondition const,std::pair<std::string,std::string>>::pair<data::ShopPrecondition,true>(
      (std::pair<const data::ShopPrecondition,std::pair<std::string,std::string > > *const)(v1 + 2424),
      (data::ShopPrecondition *)(v1 + 128),
      (const std::pair<std::string,std::string > *)(v1 + 672));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, v1 + 128);
    *(_DWORD *)(v1 + 144) = 4;
    std::pair<std::string,std::string>::pair<char const(&)[28],char const(&)[43],true>(
      (std::pair<std::string,std::string > *const)(v1 + 768),
      (const char (*)[28])byte_1A1410A0,
      (const char (*)[43])"SHOP_PRECONDITION_SHEET_TEASURE_MAP_REGION");
    std::pair<data::ShopPrecondition const,std::pair<std::string,std::string>>::pair<data::ShopPrecondition,true>(
      (std::pair<const data::ShopPrecondition,std::pair<std::string,std::string > > *const)(v1 + 2496),
      (data::ShopPrecondition *)(v1 + 144),
      (const std::pair<std::string,std::string > *)(v1 + 768));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, v1 + 144);
    *(_DWORD *)(v1 + 160) = 5;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[29],true>(
      (std::pair<std::string,std::string > *const)(v1 + 864),
      (const char (*)[13])byte_1A1410E0,
      (const char (*)[29])"SHOP_PRECONDITION_HOME_LEVEL");
    std::pair<data::ShopPrecondition const,std::pair<std::string,std::string>>::pair<data::ShopPrecondition,true>(
      (std::pair<const data::ShopPrecondition,std::pair<std::string,std::string > > *const)(v1 + 2568),
      (data::ShopPrecondition *)(v1 + 160),
      (const std::pair<std::string,std::string > *)(v1 + 864));
    if ( *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 176, v1 + 160);
    *(_DWORD *)(v1 + 176) = 6;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[31],true>(
      (std::pair<std::string,std::string > *const)(v1 + 960),
      (const char (*)[13])byte_1A141120,
      (const char (*)[31])"SHOP_PRECONDITION_QUEST_FINISH");
    std::pair<data::ShopPrecondition const,std::pair<std::string,std::string>>::pair<data::ShopPrecondition,true>(
      (std::pair<const data::ShopPrecondition,std::pair<std::string,std::string > > *const)(v1 + 2640),
      (data::ShopPrecondition *)(v1 + 176),
      (const std::pair<std::string,std::string > *)(v1 + 960));
    if ( *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 192, v1 + 176);
    *(_DWORD *)(v1 + 192) = 7;
    std::pair<std::string,std::string>::pair<char const(&)[23],char const(&)[50],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1056),
      (const char (*)[23])byte_1A141160,
      (const char (*)[50])"SHOP_PRECONDITION_SHEET_FLEUR_FAIR_WATCHER_FINISH");
    std::pair<data::ShopPrecondition const,std::pair<std::string,std::string>>::pair<data::ShopPrecondition,true>(
      (std::pair<const data::ShopPrecondition,std::pair<std::string,std::string > > *const)(v1 + 2712),
      (data::ShopPrecondition *)(v1 + 192),
      (const std::pair<std::string,std::string > *)(v1 + 1056));
    if ( *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 208, v1 + 192);
    *(_DWORD *)(v1 + 208) = 8;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[35],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1152),
      (const char (*)[19])byte_1A1411A0,
      (const char (*)[35])"SHOP_PRECONDITION_QUEST_FINISH_ALL");
    std::pair<data::ShopPrecondition const,std::pair<std::string,std::string>>::pair<data::ShopPrecondition,true>(
      (std::pair<const data::ShopPrecondition,std::pair<std::string,std::string > > *const)(v1 + 2784),
      (data::ShopPrecondition *)(v1 + 208),
      (const std::pair<std::string,std::string > *)(v1 + 1152));
    if ( *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 224, v1 + 208);
    *(_DWORD *)(v1 + 224) = 9;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[35],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1248),
      (const char (*)[19])byte_1A1411E0,
      (const char (*)[35])"SHOP_PRECONDITION_QUEST_FINISH_ANY");
    std::pair<data::ShopPrecondition const,std::pair<std::string,std::string>>::pair<data::ShopPrecondition,true>(
      (std::pair<const data::ShopPrecondition,std::pair<std::string,std::string > > *const)(v1 + 2856),
      (data::ShopPrecondition *)(v1 + 224),
      (const std::pair<std::string,std::string > *)(v1 + 1248));
    if ( *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 240, v1 + 224);
    *(_DWORD *)(v1 + 240) = 10;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[28],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1344),
      (const char (*)[19])byte_1A141220,
      (const char (*)[28])"SHOP_PRECONDITION_GCG_LEVEL");
    std::pair<data::ShopPrecondition const,std::pair<std::string,std::string>>::pair<data::ShopPrecondition,true>(
      (std::pair<const data::ShopPrecondition,std::pair<std::string,std::string > > *const)(v1 + 2928),
      (data::ShopPrecondition *)(v1 + 240),
      (const std::pair<std::string,std::string > *)(v1 + 1344));
    if ( *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 256, v1 + 240);
    *(_DWORD *)(v1 + 256) = 11;
    std::pair<std::string,std::string>::pair<char const(&)[16],char const(&)[39],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1440),
      (const char (*)[16])byte_1A141260,
      (const char (*)[39])"SHOP_PRECONDITION_GCG_CARD_PROFICIENCY");
    std::pair<data::ShopPrecondition const,std::pair<std::string,std::string>>::pair<data::ShopPrecondition,true>(
      (std::pair<const data::ShopPrecondition,std::pair<std::string,std::string > > *const)(v1 + 3000),
      (data::ShopPrecondition *)(v1 + 256),
      (const std::pair<std::string,std::string > *)(v1 + 1440));
    if ( *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 272, v1 + 256);
    *(_DWORD *)(v1 + 272) = 12;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[31],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1536),
      (const char (*)[13])byte_1A1412A0,
      (const char (*)[31])"SHOP_PRECONDITION_GCG_HAS_CARD");
    std::pair<data::ShopPrecondition const,std::pair<std::string,std::string>>::pair<data::ShopPrecondition,true>(
      (std::pair<const data::ShopPrecondition,std::pair<std::string,std::string > > *const)(v1 + 3072),
      (data::ShopPrecondition *)(v1 + 272),
      (const std::pair<std::string,std::string > *)(v1 + 1536));
    if ( *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 288, v1 + 272);
    *(_DWORD *)(v1 + 288) = 13;
    std::pair<std::string,std::string>::pair<char const(&)[25],char const(&)[40],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1632),
      (const char (*)[25])byte_1A1412E0,
      (const char (*)[40])"SHOP_PRECONDITION_GCGTC_NLEVEL_FINISHED");
    std::pair<data::ShopPrecondition const,std::pair<std::string,std::string>>::pair<data::ShopPrecondition,true>(
      (std::pair<const data::ShopPrecondition,std::pair<std::string,std::string > > *const)(v1 + 3144),
      (data::ShopPrecondition *)(v1 + 288),
      (const std::pair<std::string,std::string > *)(v1 + 1632));
    if ( *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 304, v1 + 288);
    *(_DWORD *)(v1 + 304) = 14;
    std::pair<std::string,std::string>::pair<char const(&)[25],char const(&)[40],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1728),
      (const char (*)[25])byte_1A141320,
      (const char (*)[40])"SHOP_PRECONDITION_GCGTC_HLEVEL_FINISHED");
    std::pair<data::ShopPrecondition const,std::pair<std::string,std::string>>::pair<data::ShopPrecondition,true>(
      (std::pair<const data::ShopPrecondition,std::pair<std::string,std::string > > *const)(v1 + 3216),
      (data::ShopPrecondition *)(v1 + 304),
      (const std::pair<std::string,std::string > *)(v1 + 1728));
    if ( *(_BYTE *)(((v1 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 320) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 320, v1 + 304);
    *(_DWORD *)(v1 + 320) = 15;
    std::pair<std::string,std::string>::pair<char const(&)[25],char const(&)[40],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1824),
      (const char (*)[25])byte_1A141360,
      (const char (*)[40])"SHOP_PRECONDITION_GCGBC_NLEVEL_FINISHED");
    std::pair<data::ShopPrecondition const,std::pair<std::string,std::string>>::pair<data::ShopPrecondition,true>(
      (std::pair<const data::ShopPrecondition,std::pair<std::string,std::string > > *const)(v1 + 3288),
      (data::ShopPrecondition *)(v1 + 320),
      (const std::pair<std::string,std::string > *)(v1 + 1824));
    if ( *(_BYTE *)(((v1 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 336) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 336, v1 + 320);
    *(_DWORD *)(v1 + 336) = 16;
    std::pair<std::string,std::string>::pair<char const(&)[25],char const(&)[40],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1920),
      (const char (*)[25])byte_1A1413A0,
      (const char (*)[40])"SHOP_PRECONDITION_GCGBC_HLEVEL_FINISHED");
    std::pair<data::ShopPrecondition const,std::pair<std::string,std::string>>::pair<data::ShopPrecondition,true>(
      (std::pair<const data::ShopPrecondition,std::pair<std::string,std::string > > *const)(v1 + 3360),
      (data::ShopPrecondition *)(v1 + 336),
      (const std::pair<std::string,std::string > *)(v1 + 1920));
    if ( *(_BYTE *)(((v1 + 352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 352) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 352, v1 + 336);
    *(_DWORD *)(v1 + 352) = 17;
    std::pair<std::string,std::string>::pair<char const(&)[32],char const(&)[45],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2016),
      (const char (*)[32])byte_1A1413E0,
      (const char (*)[45])"SHOP_PRECONDITION_DONE_TEASURE_SEELIE_REGION");
    std::pair<data::ShopPrecondition const,std::pair<std::string,std::string>>::pair<data::ShopPrecondition,true>(
      (std::pair<const data::ShopPrecondition,std::pair<std::string,std::string > > *const)(v1 + 3432),
      (data::ShopPrecondition *)(v1 + 352),
      (const std::pair<std::string,std::string > *)(v1 + 2016));
    if ( *(_BYTE *)(((v1 + 368) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 368) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 368, v1 + 352);
    *(_DWORD *)(v1 + 368) = 18;
    std::pair<std::string,std::string>::pair<char const(&)[28],char const(&)[47],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2112),
      (const char (*)[28])byte_1A141420,
      (const char (*)[47])"SHOP_PRECONDITION_GCG_LEVEL_CHALLENGE_FINISHED");
    std::pair<data::ShopPrecondition const,std::pair<std::string,std::string>>::pair<data::ShopPrecondition,true>(
      (std::pair<const data::ShopPrecondition,std::pair<std::string,std::string > > *const)(v1 + 3504),
      (data::ShopPrecondition *)(v1 + 368),
      (const std::pair<std::string,std::string > *)(v1 + 2112));
    std::allocator<std::pair<data::ShopPrecondition const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::ShopPrecondition,std::pair<std::string,std::string > > > *const)(v1 + 64));
    std::map<data::ShopPrecondition,std::pair<std::string,std::string>>::map(
      &data::getShopPreconditionEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::ShopPrecondition,std::pair<std::string,std::string > > >)__PAIR128__(19LL, v1 + 2208),
      (const std::less<data::ShopPrecondition> *)(v1 + 48),
      (const std::map<data::ShopPrecondition,std::pair<std::string,std::string >>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getShopPreconditionEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::ShopPrecondition,std::pair<std::string,std::string>>::~map,
      &data::getShopPreconditionEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::ShopPrecondition const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::ShopPrecondition,std::pair<std::string,std::string > > > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::ShopPrecondition,std::pair<std::string,std::string > > *)(v1 + 3576);
          i != (std::pair<const data::ShopPrecondition,std::pair<std::string,std::string > > *)(v1 + 2208);
          std::pair<data::ShopPrecondition const,std::pair<std::string,std::string>>::~pair(i) )
    {
      --i;
    }
    __asan_poison_stack_memory(v1 + 2208, 1368LL);
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2112));
    v5 = (_DWORD *)(((v1 + 2112) >> 3) + 2147450880);
    *v5 = -117901064;
    v5[1] = -117901064;
    *(_BYTE *)(((v1 + 368) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2016));
    v6 = (_DWORD *)(((v1 + 2016) >> 3) + 2147450880);
    *v6 = -117901064;
    v6[1] = -117901064;
    *(_BYTE *)(((v1 + 352) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1920));
    v7 = (_DWORD *)(((v1 + 1920) >> 3) + 2147450880);
    *v7 = -117901064;
    v7[1] = -117901064;
    *(_BYTE *)(((v1 + 336) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1824));
    v8 = (_DWORD *)(((v1 + 1824) >> 3) + 2147450880);
    *v8 = -117901064;
    v8[1] = -117901064;
    *(_BYTE *)(((v1 + 320) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1728));
    v9 = (_DWORD *)(((v1 + 1728) >> 3) + 2147450880);
    *v9 = -117901064;
    v9[1] = -117901064;
    *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1632));
    v10 = (_DWORD *)(((v1 + 1632) >> 3) + 2147450880);
    *v10 = -117901064;
    v10[1] = -117901064;
    *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1536));
    v11 = (_DWORD *)(((v1 + 1536) >> 3) + 2147450880);
    *v11 = -117901064;
    v11[1] = -117901064;
    *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1440));
    v12 = (_DWORD *)(((v1 + 1440) >> 3) + 2147450880);
    *v12 = -117901064;
    v12[1] = -117901064;
    *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1344));
    v13 = (_DWORD *)(((v1 + 1344) >> 3) + 2147450880);
    *v13 = -117901064;
    v13[1] = -117901064;
    *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1248));
    v14 = (_DWORD *)(((v1 + 1248) >> 3) + 2147450880);
    *v14 = -117901064;
    v14[1] = -117901064;
    *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1152));
    v15 = (_DWORD *)(((v1 + 1152) >> 3) + 2147450880);
    *v15 = -117901064;
    v15[1] = -117901064;
    *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 1056));
    v16 = (_DWORD *)(((v1 + 1056) >> 3) + 2147450880);
    *v16 = -117901064;
    v16[1] = -117901064;
    *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 960));
    v17 = (_DWORD *)(((v1 + 960) >> 3) + 2147450880);
    *v17 = -117901064;
    v17[1] = -117901064;
    *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 864));
    v18 = (_DWORD *)(((v1 + 864) >> 3) + 2147450880);
    *v18 = -117901064;
    v18[1] = -117901064;
    *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 768));
    v19 = (_DWORD *)(((v1 + 768) >> 3) + 2147450880);
    *v19 = -117901064;
    v19[1] = -117901064;
    *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 672));
    v20 = (_DWORD *)(((v1 + 672) >> 3) + 2147450880);
    *v20 = -117901064;
    v20[1] = -117901064;
    *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 576));
    v21 = (_DWORD *)(((v1 + 576) >> 3) + 2147450880);
    *v21 = -117901064;
    v21[1] = -117901064;
    *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 480));
    v22 = (_DWORD *)(((v1 + 480) >> 3) + 2147450880);
    *v22 = -117901064;
    v22[1] = -117901064;
    *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 384));
  }
  if ( v24 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF81C8) = 0LL;
    memset(
      (void *)((unsigned __int64)(v3 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v3 + 2147450880 - (((_DWORD)v3 + 2147450888) & 0xFFFFFFF8) + 464) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    __asan_stack_free_6(v1, 3712LL, v24);
  }
  return &data::getShopPreconditionEnumMap[abi:cxx11](void)::m;
};

// Line 685: range 000000000CB8ACE6-000000000CB8C0DF
int32_t __cdecl data::ShopExcelConfig::init(data::ShopExcelConfig *const this, const common::tools::TxtFile::Row *row)
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
  bool v20; // r15
  common::milog::MiLogStream *v21; // rax
  int32_t v22; // ebx
  char v24[1232]; // [rsp+10h] [rbp-4D0h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1184LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "24 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <un"
                        "known> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unk"
                        "nown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unkn"
                        "own> 992 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ShopExcelConfig::init;
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
  v4[536862756] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 160),
    &byte_1A142140,
    (const std::allocator<char> *)(v2 + 32));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 160), &this->shop_id) != 0;
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
      "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
      "init",
      688);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 224),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v6, (const char (*)[29])byte_1A1421C0);
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
      &byte_1A142200,
      (const std::allocator<char> *)(v2 + 48));
    v8 = common::tools::TxtFile::Row::assignToEnum<data::ShopType>(
           row,
           (const std::string *)(v2 + 288),
           &this->shop_type) != 0;
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
        "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
        "init",
        693);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 352),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v9, (const char (*)[33])byte_1A142240);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
      v7 = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 416),
        &byte_1A1422A0,
        (const std::allocator<char> *)(v2 + 64));
      v10 = common::tools::TxtFile::Row::assignToEnum<data::ShopRefreshType>(
              row,
              (const std::string *)(v2 + 416),
              &this->refresh_type) != 0;
      std::string::~string((void *)(v2 + 416));
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( v10 )
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
          "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
          "init",
          698);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 480),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v11, (const char (*)[33])byte_1A1422E0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
        v7 = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 544),
          &byte_1A142340,
          (const std::allocator<char> *)(v2 + 80));
        v12 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                row,
                (const std::string *)(v2 + 544),
                &this->refresh_param) != 0;
        std::string::~string((void *)(v2 + 544));
        *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
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
            "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
            "init",
            703);
          v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 608),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v13, (const char (*)[33])byte_1A142380);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
          v7 = -1;
        }
        else
        {
          *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 96);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 672),
            "OpenStateType",
            (const std::allocator<char> *)(v2 + 96));
          v14 = common::tools::TxtFile::Row::assignToEnum<data::OpenStateType>(
                  row,
                  (const std::string *)(v2 + 672),
                  &this->open_state_type) != 0;
          std::string::~string((void *)(v2 + 672));
          *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 96);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( v14 )
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
              "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
              "init",
              708);
            v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 736),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v15, (const char (*)[34])byte_1A142420);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 736));
            v7 = -1;
          }
          else
          {
            *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 112);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 800),
              &byte_1A142480,
              (const std::allocator<char> *)(v2 + 112));
            v16 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                    row,
                    (const std::string *)(v2 + 800),
                    &this->city_id) != 0;
            std::string::~string((void *)(v2 + 800));
            *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 112);
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
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
                "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
                "init",
                713);
              v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 864),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v17, (const char (*)[29])byte_1A1424C0);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 864));
              v7 = -1;
            }
            else
            {
              *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 128);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 928),
                &byte_1A142500,
                (const std::allocator<char> *)(v2 + 128));
              v18 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                      row,
                      (const std::string *)(v2 + 928),
                      &this->city_discount_level) != 0;
              std::string::~string((void *)(v2 + 928));
              *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 128);
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
              if ( v18 )
              {
                *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 992) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 96 + 95) & 7) >= *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 992, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 992),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
                  "init",
                  718);
                v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 992),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v19, (const char (*)[48])byte_1A142540);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 992));
                v7 = -1;
              }
              else
              {
                *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 144);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1056),
                  &byte_1A1425A0,
                  (const std::allocator<char> *)(v2 + 144));
                v20 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                        row,
                        (const std::string *)(v2 + 1056),
                        &this->scoin_discount_rate) != 0;
                std::string::~string((void *)(v2 + 1056));
                *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 144);
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
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
                    "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
                    "init",
                    723);
                  v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 1120),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                    v21,
                    (const char (*)[39])byte_1A1425E0);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1120));
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
  v22 = v7;
  if ( v24 == (char *)v2 )
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8080) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8088) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8090) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1184LL, v24);
  }
  return v22;
};

// Line 731: range 000000000CB8C0E0-000000000CB8C902
int32_t __cdecl data::LimitStrategy::init(data::LimitStrategy *const this, const common::tools::TxtFile::Row *row)
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
  *(_QWORD *)(v2 + 16) = data::LimitStrategy::init;
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
    &byte_1A142700,
    (const std::allocator<char> *)(v2 + 48));
  v5 = common::tools::TxtFile::Row::assignToEnum<data::ShopPrecondition>(
         row,
         (const std::string *)(v2 + 96),
         &this->limit_cond_type) != 0;
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
      "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
      "init",
      734);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 160),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v6, (const char (*)[27])byte_1A142740);
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
      &byte_1A142780,
      (const std::allocator<char> *)(v2 + 64));
    v8 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
           row,
           (const std::string *)(v2 + 224),
           &this->limit_cond_param) != 0;
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
        "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
        "init",
        739);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v9, (const char (*)[27])byte_1A1427C0);
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
        &byte_1A142800,
        (const std::allocator<char> *)(v2 + 80));
      v10 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
              row,
              (const std::string *)(v2 + 352),
              &this->limit_num) != 0;
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
          "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
          "init",
          744);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 416),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v11, (const char (*)[27])byte_1A142840);
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

// Line 752: range 000000000CB8C904-000000000CB92C19
int32_t __cdecl data::ShopGoodsExcelConfig::init(
        data::ShopGoodsExcelConfig *const this,
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
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  unsigned __int64 v49; // rax
  _DWORD *v50; // rax
  bool v51; // r15
  unsigned __int64 v52; // rax
  char *j; // r14
  _DWORD *v54; // rax
  common::milog::MiLogStream *v55; // rax
  bool t; // [rsp+0h] [rbp-1660h]
  bool ta; // [rsp+0h] [rbp-1660h]
  bool tb; // [rsp+0h] [rbp-1660h]
  bool tc; // [rsp+0h] [rbp-1660h]
  bool td; // [rsp+0h] [rbp-1660h]
  bool te; // [rsp+0h] [rbp-1660h]
  bool tf; // [rsp+0h] [rbp-1660h]
  bool tg; // [rsp+0h] [rbp-1660h]
  bool th; // [rsp+0h] [rbp-1660h]
  uint32_t *ti; // [rsp+0h] [rbp-1660h]
  bool tj; // [rsp+0h] [rbp-1660h]
  uint32_t *tk; // [rsp+0h] [rbp-1660h]
  bool tl; // [rsp+0h] [rbp-1660h]
  bool tm; // [rsp+0h] [rbp-1660h]
  data::ShopPrecondition *tn; // [rsp+0h] [rbp-1660h]
  bool to; // [rsp+0h] [rbp-1660h]
  uint32_t *tp; // [rsp+0h] [rbp-1660h]
  bool tq; // [rsp+0h] [rbp-1660h]
  uint32_t *tr; // [rsp+0h] [rbp-1660h]
  bool ts; // [rsp+0h] [rbp-1660h]
  bool tt; // [rsp+0h] [rbp-1660h]
  bool tu; // [rsp+0h] [rbp-1660h]
  bool tv; // [rsp+0h] [rbp-1660h]
  bool tw; // [rsp+0h] [rbp-1660h]
  bool tx; // [rsp+0h] [rbp-1660h]
  bool ty; // [rsp+0h] [rbp-1660h]
  bool tz; // [rsp+0h] [rbp-1660h]
  bool tba; // [rsp+0h] [rbp-1660h]
  std::string *tbb; // [rsp+0h] [rbp-1660h]
  bool tbc; // [rsp+0h] [rbp-1660h]
  bool tbd; // [rsp+0h] [rbp-1660h]
  bool tbe; // [rsp+0h] [rbp-1660h]
  bool tbf; // [rsp+0h] [rbp-1660h]
  bool tbg; // [rsp+0h] [rbp-1660h]
  bool tbh; // [rsp+0h] [rbp-1660h]
  bool tbi; // [rsp+0h] [rbp-1660h]
  bool tbj; // [rsp+0h] [rbp-1660h]
  uint32_t array_count; // [rsp+20h] [rbp-1640h]
  uint32_t array_counta; // [rsp+20h] [rbp-1640h]
  uint32_t array_countb; // [rsp+20h] [rbp-1640h]
  uint32_t i; // [rsp+24h] [rbp-163Ch]
  uint32_t i_0; // [rsp+28h] [rbp-1638h]
  uint32_t i_1; // [rsp+2Ch] [rbp-1634h]
  char v100[5680]; // [rsp+30h] [rbp-1630h] BYREF

  v2 = (unsigned __int64)v100;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_7(5632LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "113 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9"
                        " <unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unkn"
                        "own> 208 1 9 <unknown> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 2"
                        "88 1 9 <unknown> 304 1 9 <unknown> 320 1 9 <unknown> 336 1 9 <unknown> 352 1 9 <unknown> 368 1 9"
                        " <unknown> 384 1 9 <unknown> 400 1 9 <unknown> 416 1 9 <unknown> 432 1 9 <unknown> 448 1 9 <unkn"
                        "own> 464 1 9 <unknown> 480 1 9 <unknown> 496 1 9 <unknown> 512 1 9 <unknown> 528 1 9 <unknown> 5"
                        "44 1 9 <unknown> 560 1 9 <unknown> 576 1 9 <unknown> 592 1 9 <unknown> 608 1 9 <unknown> 624 1 9"
                        " <unknown> 640 1 9 <unknown> 656 1 9 <unknown> 672 24 9 <unknown> 736 32 11 val_str:755 800 32 9"
                        " <unknown> 864 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown> 1056 32 9 <unknown> 1120 32 "
                        "9 <unknown> 1184 32 9 <unknown> 1248 32 9 <unknown> 1312 32 9 <unknown> 1376 32 9 <unknown> 1440"
                        " 32 9 <unknown> 1504 32 9 <unknown> 1568 32 9 <unknown> 1632 32 9 <unknown> 1696 32 9 <unknown> "
                        "1760 32 9 <unknown> 1824 32 9 <unknown> 1888 32 9 <unknown> 1952 32 9 <unknown> 2016 32 9 <unkno"
                        "wn> 2080 32 9 <unknown> 2144 32 9 <unknown> 2208 32 9 <unknown> 2272 32 9 <unknown> 2336 32 9 <u"
                        "nknown> 2400 32 9 <unknown> 2464 32 9 <unknown> 2528 32 9 <unknown> 2592 32 9 <unknown> 2656 32 "
                        "9 <unknown> 2720 32 9 <unknown> 2784 32 9 <unknown> 2848 32 9 <unknown> 2912 32 9 <unknown> 2976"
                        " 32 9 <unknown> 3040 32 9 <unknown> 3104 32 9 <unknown> 3168 32 9 <unknown> 3232 32 9 <unknown> "
                        "3296 32 9 <unknown> 3360 32 9 <unknown> 3424 32 9 <unknown> 3488 32 9 <unknown> 3552 32 9 <unkno"
                        "wn> 3616 32 9 <unknown> 3680 32 9 <unknown> 3744 32 9 <unknown> 3808 32 9 <unknown> 3872 32 9 <u"
                        "nknown> 3936 32 9 <unknown> 4000 32 9 <unknown> 4064 32 9 <unknown> 4128 32 9 <unknown> 4192 32 "
                        "9 <unknown> 4256 32 9 <unknown> 4320 32 9 <unknown> 4384 32 9 <unknown> 4448 32 9 <unknown> 4512"
                        " 32 9 <unknown> 4576 32 9 <unknown> 4640 32 9 <unknown> 4704 32 9 <unknown> 4768 32 9 <unknown> "
                        "4832 32 9 <unknown> 4896 32 9 <unknown> 4960 32 9 <unknown> 5024 32 9 <unknown> 5088 32 9 <unkno"
                        "wn> 5152 32 9 <unknown> 5216 64 9 <unknown> 5312 256 12 col_name:753";
  *(_QWORD *)(v2 + 16) = data::ShopGoodsExcelConfig::init;
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
  v4[536862741] = -234881024;
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
  v4[536862885] = -218959118;
  v4[536862894] = -202116109;
  v4[536862895] = -202116109;
  std::string::basic_string(v2 + 736);
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 800),
    byte_1A140FE0,
    (const std::allocator<char> *)(v2 + 32));
  t = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 800), &this->goods_id) != 0;
  std::string::~string((void *)(v2 + 800));
  *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( t )
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
      "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
      "init",
      758);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 864),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v5, (const char (*)[29])byte_1A143120);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 864));
    *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 928),
      &byte_1A142200,
      (const std::allocator<char> *)(v2 + 48));
    ta = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 928), &this->shop_type) != 0;
    std::string::~string((void *)(v2 + 928));
    *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( ta )
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
        "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
        "init",
        763);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 992),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v7, (const char (*)[33])byte_1A142240);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 992));
      *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 1056),
        &byte_1A143160,
        (const std::allocator<char> *)(v2 + 64));
      tb = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 1056), &this->item_id) != 0;
      std::string::~string((void *)(v2 + 1056));
      *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( tb )
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
          "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
          "init",
          768);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 1120),
               (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v8, (const char (*)[35])byte_1A1431A0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1120));
        *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 1184),
          &byte_1A143200,
          (const std::allocator<char> *)(v2 + 80));
        tc = common::tools::TxtFile::Row::assignToNum<unsigned int>(
               row,
               (const std::string *)(v2 + 1184),
               &this->rotate_id) != 0;
        std::string::~string((void *)(v2 + 1184));
        *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( tc )
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
            "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
            "init",
            773);
          v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v2 + 1248),
                 (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v9, (const char (*)[35])byte_1A143240);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1248));
          *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = -117901064;
          v6 = -1;
        }
        else
        {
          *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 96);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1312),
            &byte_1A1432A0,
            (const std::allocator<char> *)(v2 + 96));
          td = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                 row,
                 (const std::string *)(v2 + 1312),
                 &this->item_count) != 0;
          std::string::~string((void *)(v2 + 1312));
          *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 96);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( td )
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
              "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
              "init",
              778);
            v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 1376),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v10, (const char (*)[39])byte_1A1432E0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1376));
            *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = -117901064;
            v6 = -1;
          }
          else
          {
            *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 112);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1440),
              &byte_1A143340,
              (const std::allocator<char> *)(v2 + 112));
            te = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                   row,
                   (const std::string *)(v2 + 1440),
                   &this->cost_scoin) != 0;
            std::string::~string((void *)(v2 + 1440));
            *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 112);
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
            if ( te )
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
                "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
                "init",
                783);
              v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1504),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v11, (const char (*)[33])byte_1A143380);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1504));
              *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = -117901064;
              v6 = -1;
            }
            else
            {
              *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 128);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1568),
                &byte_1A1433E0,
                (const std::allocator<char> *)(v2 + 128));
              tf = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                     row,
                     (const std::string *)(v2 + 1568),
                     &this->cost_hcoin) != 0;
              std::string::~string((void *)(v2 + 1568));
              *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 128);
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
              if ( tf )
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
                  "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
                  "init",
                  788);
                v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1632),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v12, (const char (*)[33])byte_1A143420);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1632));
                *(_DWORD *)(((v2 + 1632) >> 3) + 0x7FFF8000) = -117901064;
                v6 = -1;
              }
              else
              {
                *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 144);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1696),
                  &byte_1A143480,
                  (const std::allocator<char> *)(v2 + 144));
                tg = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                       row,
                       (const std::string *)(v2 + 1696),
                       &this->cost_mcoin) != 0;
                std::string::~string((void *)(v2 + 1696));
                *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 144);
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
                if ( tg )
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
                    "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
                    "init",
                    793);
                  v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 1760),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                    v13,
                    (const char (*)[39])byte_1A1434C0);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1760));
                  *(_DWORD *)(((v2 + 1760) >> 3) + 0x7FFF8000) = -117901064;
                  v6 = -1;
                }
                else
                {
                  std::vector<data::IdCountConfig>::resize(&this->cost_items, 6uLL);
                  array_count = 0;
                  for ( i = 0; i <= 5; ++i )
                  {
                    snprintf((char *)(v2 + 5312), 0x100uLL, asc_1A143520, i + 1);
                    *(_DWORD *)(((v2 + 1824) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 160);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 1824),
                      (const char *)(v2 + 5312),
                      (const std::allocator<char> *)(v2 + 160));
                    th = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 1824));
                    std::string::~string((void *)(v2 + 1824));
                    *(_DWORD *)(((v2 + 1824) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 160);
                    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                    if ( !th )
                    {
                      ti = &std::vector<data::IdCountConfig>::operator[](&this->cost_items, i)->id;
                      *(_DWORD *)(((v2 + 1888) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 176);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 1888),
                        (const char *)(v2 + 5312),
                        (const std::allocator<char> *)(v2 + 176));
                      LOBYTE(ti) = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                     row,
                                     (const std::string *)(v2 + 1888),
                                     ti) != 0;
                      std::string::~string((void *)(v2 + 1888));
                      *(_DWORD *)(((v2 + 1888) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 176);
                      *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                      if ( (_BYTE)ti )
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
                          "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
                          "init",
                          805);
                        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                (common::milog::MiLogStream *const)(v2 + 1952),
                                (const char (*)[16])"[CONFIG_ERROR] ");
                        v15 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                v14,
                                (const char (*)[14])byte_1A143560);
                        v16 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                                v15,
                                (const char (*)[256])(v2 + 5312));
                        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                          v16,
                          (const char (*)[7])byte_1A1435A0);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1952));
                        *(_DWORD *)(((v2 + 1952) >> 3) + 0x7FFF8000) = -117901064;
                        v6 = -1;
                        goto LABEL_154;
                      }
                      snprintf((char *)(v2 + 5312), 0x100uLL, asc_1A1435E0, i + 1);
                      *(_DWORD *)(((v2 + 2016) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 192);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 2016),
                        (const char *)(v2 + 5312),
                        (const std::allocator<char> *)(v2 + 192));
                      tj = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 2016));
                      std::string::~string((void *)(v2 + 2016));
                      *(_DWORD *)(((v2 + 2016) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 192);
                      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                      if ( !tj )
                      {
                        tk = &std::vector<data::IdCountConfig>::operator[](&this->cost_items, i)->count;
                        *(_DWORD *)(((v2 + 2080) >> 3) + 0x7FFF8000) = 0;
                        *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 208);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 2080),
                          (const char *)(v2 + 5312),
                          (const std::allocator<char> *)(v2 + 208));
                        LOBYTE(tk) = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                       row,
                                       (const std::string *)(v2 + 2080),
                                       tk) != 0;
                        std::string::~string((void *)(v2 + 2080));
                        *(_DWORD *)(((v2 + 2080) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 208);
                        *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                        if ( (_BYTE)tk )
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
                            "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
                            "init",
                            813);
                          v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                  (common::milog::MiLogStream *const)(v2 + 2144),
                                  (const char (*)[16])"[CONFIG_ERROR] ");
                          v18 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                  v17,
                                  (const char (*)[14])byte_1A143560);
                          v19 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                                  v18,
                                  (const char (*)[256])(v2 + 5312));
                          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                            v19,
                            (const char (*)[7])byte_1A1435A0);
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2144));
                          *(_DWORD *)(((v2 + 2144) >> 3) + 0x7FFF8000) = -117901064;
                          v6 = -1;
                          goto LABEL_154;
                        }
                        array_count = i + 1;
                      }
                    }
                  }
                  std::vector<data::IdCountConfig>::resize(&this->cost_items, array_count);
                  *(_DWORD *)(((v2 + 2208) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 224);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 2208),
                    &byte_1A143620,
                    (const std::allocator<char> *)(v2 + 224));
                  tl = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                         row,
                         (const std::string *)(v2 + 2208),
                         &this->buy_limit) != 0;
                  std::string::~string((void *)(v2 + 2208));
                  *(_DWORD *)(((v2 + 2208) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 224);
                  *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                  if ( tl )
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
                      "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
                      "init",
                      822);
                    v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 2272),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                      v20,
                      (const char (*)[33])byte_1A143660);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2272));
                    *(_DWORD *)(((v2 + 2272) >> 3) + 0x7FFF8000) = -117901064;
                    v6 = -1;
                  }
                  else
                  {
                    std::vector<data::LimitStrategy>::resize(&this->limit_strategy_list, 3uLL);
                    array_counta = 0;
                    for ( i_0 = 0; i_0 <= 2; ++i_0 )
                    {
                      snprintf((char *)(v2 + 5312), 0x100uLL, asc_1A1436C0, i_0 + 1);
                      *(_DWORD *)(((v2 + 2336) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 240);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 2336),
                        (const char *)(v2 + 5312),
                        (const std::allocator<char> *)(v2 + 240));
                      tm = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 2336));
                      std::string::~string((void *)(v2 + 2336));
                      *(_DWORD *)(((v2 + 2336) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 240);
                      *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                      if ( !tm )
                      {
                        tn = &std::vector<data::LimitStrategy>::operator[](&this->limit_strategy_list, i_0)->limit_cond_type;
                        *(_DWORD *)(((v2 + 2400) >> 3) + 0x7FFF8000) = 0;
                        *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 256);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 2400),
                          (const char *)(v2 + 5312),
                          (const std::allocator<char> *)(v2 + 256));
                        LOBYTE(tn) = common::tools::TxtFile::Row::assignToEnum<data::ShopPrecondition>(
                                       row,
                                       (const std::string *)(v2 + 2400),
                                       tn) != 0;
                        std::string::~string((void *)(v2 + 2400));
                        *(_DWORD *)(((v2 + 2400) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 256);
                        *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                        if ( (_BYTE)tn )
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
                            "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
                            "init",
                            834);
                          v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                  (common::milog::MiLogStream *const)(v2 + 2464),
                                  (const char (*)[16])"[CONFIG_ERROR] ");
                          v22 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                  v21,
                                  (const char (*)[14])byte_1A143560);
                          v23 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                                  v22,
                                  (const char (*)[256])(v2 + 5312));
                          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                            v23,
                            (const char (*)[7])byte_1A1435A0);
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2464));
                          *(_DWORD *)(((v2 + 2464) >> 3) + 0x7FFF8000) = -117901064;
                          v6 = -1;
                          goto LABEL_154;
                        }
                        snprintf((char *)(v2 + 5312), 0x100uLL, asc_1A143700, i_0 + 1);
                        *(_DWORD *)(((v2 + 2528) >> 3) + 0x7FFF8000) = 0;
                        *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 272);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 2528),
                          (const char *)(v2 + 5312),
                          (const std::allocator<char> *)(v2 + 272));
                        to = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 2528));
                        std::string::~string((void *)(v2 + 2528));
                        *(_DWORD *)(((v2 + 2528) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 272);
                        *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                        if ( !to )
                        {
                          tp = &std::vector<data::LimitStrategy>::operator[](&this->limit_strategy_list, i_0)->limit_cond_param;
                          *(_DWORD *)(((v2 + 2592) >> 3) + 0x7FFF8000) = 0;
                          *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 1;
                          std::allocator<char>::allocator(v2 + 288);
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)(v2 + 2592),
                            (const char *)(v2 + 5312),
                            (const std::allocator<char> *)(v2 + 288));
                          LOBYTE(tp) = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                         row,
                                         (const std::string *)(v2 + 2592),
                                         tp) != 0;
                          std::string::~string((void *)(v2 + 2592));
                          *(_DWORD *)(((v2 + 2592) >> 3) + 0x7FFF8000) = -117901064;
                          std::allocator<char>::~allocator(v2 + 288);
                          *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
                          if ( (_BYTE)tp )
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
                              "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
                              "init",
                              842);
                            v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                    (common::milog::MiLogStream *const)(v2 + 2656),
                                    (const char (*)[16])"[CONFIG_ERROR] ");
                            v25 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                    v24,
                                    (const char (*)[14])byte_1A143560);
                            v26 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                                    v25,
                                    (const char (*)[256])(v2 + 5312));
                            common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                              v26,
                              (const char (*)[7])byte_1A1435A0);
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2656));
                            *(_DWORD *)(((v2 + 2656) >> 3) + 0x7FFF8000) = -117901064;
                            v6 = -1;
                            goto LABEL_154;
                          }
                          snprintf((char *)(v2 + 5312), 0x100uLL, asc_1A143740, i_0 + 1);
                          *(_DWORD *)(((v2 + 2720) >> 3) + 0x7FFF8000) = 0;
                          *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 1;
                          std::allocator<char>::allocator(v2 + 304);
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)(v2 + 2720),
                            (const char *)(v2 + 5312),
                            (const std::allocator<char> *)(v2 + 304));
                          tq = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 2720));
                          std::string::~string((void *)(v2 + 2720));
                          *(_DWORD *)(((v2 + 2720) >> 3) + 0x7FFF8000) = -117901064;
                          std::allocator<char>::~allocator(v2 + 304);
                          *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
                          if ( !tq )
                          {
                            tr = &std::vector<data::LimitStrategy>::operator[](&this->limit_strategy_list, i_0)->limit_num;
                            *(_DWORD *)(((v2 + 2784) >> 3) + 0x7FFF8000) = 0;
                            *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 1;
                            std::allocator<char>::allocator(v2 + 320);
                            std::string::basic_string<std::allocator<char>>(
                              (std::string *const)(v2 + 2784),
                              (const char *)(v2 + 5312),
                              (const std::allocator<char> *)(v2 + 320));
                            LOBYTE(tr) = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                           row,
                                           (const std::string *)(v2 + 2784),
                                           tr) != 0;
                            std::string::~string((void *)(v2 + 2784));
                            *(_DWORD *)(((v2 + 2784) >> 3) + 0x7FFF8000) = -117901064;
                            std::allocator<char>::~allocator(v2 + 320);
                            *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
                            if ( (_BYTE)tr )
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
                                "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
                                "init",
                                850);
                              v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                      (common::milog::MiLogStream *const)(v2 + 2848),
                                      (const char (*)[16])"[CONFIG_ERROR] ");
                              v28 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                      v27,
                                      (const char (*)[14])byte_1A143560);
                              v29 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                                      v28,
                                      (const char (*)[256])(v2 + 5312));
                              common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                                v29,
                                (const char (*)[7])byte_1A1435A0);
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2848));
                              *(_DWORD *)(((v2 + 2848) >> 3) + 0x7FFF8000) = -117901064;
                              v6 = -1;
                              goto LABEL_154;
                            }
                            array_counta = i_0 + 1;
                          }
                        }
                      }
                    }
                    std::vector<data::LimitStrategy>::resize(&this->limit_strategy_list, array_counta);
                    *(_DWORD *)(((v2 + 2912) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 336);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 2912),
                      &byte_1A1422A0,
                      (const std::allocator<char> *)(v2 + 336));
                    ts = common::tools::TxtFile::Row::assignToEnum<data::ShopRefreshType>(
                           row,
                           (const std::string *)(v2 + 2912),
                           &this->refresh_type) != 0;
                    std::string::~string((void *)(v2 + 2912));
                    *(_DWORD *)(((v2 + 2912) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 336);
                    *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
                    if ( ts )
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
                        "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
                        "init",
                        859);
                      v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 2976),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                        v30,
                        (const char (*)[33])byte_1A1422E0);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2976));
                      *(_DWORD *)(((v2 + 2976) >> 3) + 0x7FFF8000) = -117901064;
                      v6 = -1;
                    }
                    else
                    {
                      *(_DWORD *)(((v2 + 3040) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 352);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 3040),
                        &byte_1A142340,
                        (const std::allocator<char> *)(v2 + 352));
                      tt = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                             row,
                             (const std::string *)(v2 + 3040),
                             &this->refresh_param) != 0;
                      std::string::~string((void *)(v2 + 3040));
                      *(_DWORD *)(((v2 + 3040) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 352);
                      *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
                      if ( tt )
                      {
                        *(_DWORD *)(((v2 + 3104) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v2 + 3104) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v2 + 3135) >> 3) + 0x7FFF8000) != 0
                          && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 3135) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v2 + 3104, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v2 + 3104),
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
                          "init",
                          864);
                        v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                (common::milog::MiLogStream *const)(v2 + 3104),
                                (const char (*)[16])"[CONFIG_ERROR] ");
                        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                          v31,
                          (const char (*)[33])byte_1A142380);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3104));
                        *(_DWORD *)(((v2 + 3104) >> 3) + 0x7FFF8000) = -117901064;
                        v6 = -1;
                      }
                      else
                      {
                        *(_DWORD *)(((v2 + 3168) >> 3) + 0x7FFF8000) = 0;
                        *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 368);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 3168),
                          &byte_1A143780,
                          (const std::allocator<char> *)(v2 + 368));
                        tu = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                               row,
                               (const std::string *)(v2 + 3168),
                               &this->display_days_before_sell) != 0;
                        std::string::~string((void *)(v2 + 3168));
                        *(_DWORD *)(((v2 + 3168) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 368);
                        *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
                        if ( tu )
                        {
                          *(_DWORD *)(((v2 + 3232) >> 3) + 0x7FFF8000) = 0;
                          if ( *(char *)(((v2 + 3232) >> 3) + 0x7FFF8000) < 0
                            || *(_BYTE *)(((v2 + 3263) >> 3) + 0x7FFF8000) != 0
                            && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 3263) >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_store_n(v2 + 3232, 32LL);
                          }
                          common::milog::MiLogStream::create(
                            (common::milog::MiLogStream *)(v2 + 3232),
                            &common::milog::MiLogDefault::default_log_obj_,
                            4u,
                            "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
                            "init",
                            869);
                          v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                  (common::milog::MiLogStream *const)(v2 + 3232),
                                  (const char (*)[16])"[CONFIG_ERROR] ");
                          common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                            v32,
                            (const char (*)[39])byte_1A1437C0);
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3232));
                          *(_DWORD *)(((v2 + 3232) >> 3) + 0x7FFF8000) = -117901064;
                          v6 = -1;
                        }
                        else
                        {
                          *(_DWORD *)(((v2 + 3296) >> 3) + 0x7FFF8000) = 0;
                          *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 1;
                          std::allocator<char>::allocator(v2 + 384);
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)(v2 + 3296),
                            &byte_1A143820,
                            (const std::allocator<char> *)(v2 + 384));
                          tv = common::tools::TxtFile::Row::assignToStr(
                                 row,
                                 (const std::string *)(v2 + 3296),
                                 &this->begin_time) != 0;
                          std::string::~string((void *)(v2 + 3296));
                          *(_DWORD *)(((v2 + 3296) >> 3) + 0x7FFF8000) = -117901064;
                          std::allocator<char>::~allocator(v2 + 384);
                          *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
                          if ( tv )
                          {
                            *(_DWORD *)(((v2 + 3360) >> 3) + 0x7FFF8000) = 0;
                            if ( *(char *)(((v2 + 3360) >> 3) + 0x7FFF8000) < 0
                              || *(_BYTE *)(((v2 + 3391) >> 3) + 0x7FFF8000) != 0
                              && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 3391) >> 3) + 0x7FFF8000) )
                            {
                              __asan_report_store_n(v2 + 3360, 32LL);
                            }
                            common::milog::MiLogStream::create(
                              (common::milog::MiLogStream *)(v2 + 3360),
                              &common::milog::MiLogDefault::default_log_obj_,
                              4u,
                              "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
                              "init",
                              874);
                            v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                    (common::milog::MiLogStream *const)(v2 + 3360),
                                    (const char (*)[16])"[CONFIG_ERROR] ");
                            common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                              v33,
                              (const char (*)[33])byte_1A143860);
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3360));
                            *(_DWORD *)(((v2 + 3360) >> 3) + 0x7FFF8000) = -117901064;
                            v6 = -1;
                          }
                          else
                          {
                            *(_DWORD *)(((v2 + 3424) >> 3) + 0x7FFF8000) = 0;
                            *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = 1;
                            std::allocator<char>::allocator(v2 + 400);
                            std::string::basic_string<std::allocator<char>>(
                              (std::string *const)(v2 + 3424),
                              &byte_1A1438C0,
                              (const std::allocator<char> *)(v2 + 400));
                            tw = common::tools::TxtFile::Row::assignToStr(
                                   row,
                                   (const std::string *)(v2 + 3424),
                                   &this->end_time) != 0;
                            std::string::~string((void *)(v2 + 3424));
                            *(_DWORD *)(((v2 + 3424) >> 3) + 0x7FFF8000) = -117901064;
                            std::allocator<char>::~allocator(v2 + 400);
                            *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
                            if ( tw )
                            {
                              *(_DWORD *)(((v2 + 3488) >> 3) + 0x7FFF8000) = 0;
                              if ( *(char *)(((v2 + 3488) >> 3) + 0x7FFF8000) < 0
                                || *(_BYTE *)(((v2 + 3519) >> 3) + 0x7FFF8000) != 0
                                && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 3519) >> 3) + 0x7FFF8000) )
                              {
                                __asan_report_store_n(v2 + 3488, 32LL);
                              }
                              common::milog::MiLogStream::create(
                                (common::milog::MiLogStream *)(v2 + 3488),
                                &common::milog::MiLogDefault::default_log_obj_,
                                4u,
                                "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
                                "init",
                                879);
                              v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                      (common::milog::MiLogStream *const)(v2 + 3488),
                                      (const char (*)[16])"[CONFIG_ERROR] ");
                              common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                v34,
                                (const char (*)[33])byte_1A143900);
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3488));
                              *(_DWORD *)(((v2 + 3488) >> 3) + 0x7FFF8000) = -117901064;
                              v6 = -1;
                            }
                            else
                            {
                              *(_DWORD *)(((v2 + 3552) >> 3) + 0x7FFF8000) = 0;
                              *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = 1;
                              std::allocator<char>::allocator(v2 + 416);
                              std::string::basic_string<std::allocator<char>>(
                                (std::string *const)(v2 + 3552),
                                &byte_1A143960,
                                (const std::allocator<char> *)(v2 + 416));
                              tx = common::tools::TxtFile::Row::assignToNum<bool>(
                                     row,
                                     (const std::string *)(v2 + 3552),
                                     &this->is_buy_once) != 0;
                              std::string::~string((void *)(v2 + 3552));
                              *(_DWORD *)(((v2 + 3552) >> 3) + 0x7FFF8000) = -117901064;
                              std::allocator<char>::~allocator(v2 + 416);
                              *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
                              if ( tx )
                              {
                                *(_DWORD *)(((v2 + 3616) >> 3) + 0x7FFF8000) = 0;
                                if ( *(char *)(((v2 + 3616) >> 3) + 0x7FFF8000) < 0
                                  || *(_BYTE *)(((v2 + 3647) >> 3) + 0x7FFF8000) != 0
                                  && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 3647) >> 3) + 0x7FFF8000) )
                                {
                                  __asan_report_store_n(v2 + 3616, 32LL);
                                }
                                common::milog::MiLogStream::create(
                                  (common::milog::MiLogStream *)(v2 + 3616),
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  4u,
                                  "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
                                  "init",
                                  884);
                                v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                        (common::milog::MiLogStream *const)(v2 + 3616),
                                        (const char (*)[16])"[CONFIG_ERROR] ");
                                common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                  v35,
                                  (const char (*)[39])byte_1A1439A0);
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3616));
                                *(_DWORD *)(((v2 + 3616) >> 3) + 0x7FFF8000) = -117901064;
                                v6 = -1;
                              }
                              else
                              {
                                *(_DWORD *)(((v2 + 3680) >> 3) + 0x7FFF8000) = 0;
                                *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = 1;
                                std::allocator<char>::allocator(v2 + 432);
                                std::string::basic_string<std::allocator<char>>(
                                  (std::string *const)(v2 + 3680),
                                  &byte_1A143A00,
                                  (const std::allocator<char> *)(v2 + 432));
                                ty = common::tools::TxtFile::Row::assignToEnum<data::ShopPrecondition>(
                                       row,
                                       (const std::string *)(v2 + 3680),
                                       &this->precondition) != 0;
                                std::string::~string((void *)(v2 + 3680));
                                *(_DWORD *)(((v2 + 3680) >> 3) + 0x7FFF8000) = -117901064;
                                std::allocator<char>::~allocator(v2 + 432);
                                *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = -8;
                                if ( ty )
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
                                    "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
                                    "init",
                                    889);
                                  v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                          (common::milog::MiLogStream *const)(v2 + 3744),
                                          (const char (*)[16])"[CONFIG_ERROR] ");
                                  common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                    v36,
                                    (const char (*)[33])byte_1A143A40);
                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3744));
                                  *(_DWORD *)(((v2 + 3744) >> 3) + 0x7FFF8000) = -117901064;
                                  v6 = -1;
                                }
                                else
                                {
                                  *(_DWORD *)(((v2 + 3808) >> 3) + 0x7FFF8000) = 0;
                                  *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = 1;
                                  std::allocator<char>::allocator(v2 + 448);
                                  std::string::basic_string<std::allocator<char>>(
                                    (std::string *const)(v2 + 3808),
                                    &byte_1A143AA0,
                                    (const std::allocator<char> *)(v2 + 448));
                                  tz = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                         row,
                                         (const std::string *)(v2 + 3808),
                                         &this->precondition_param) != 0;
                                  std::string::~string((void *)(v2 + 3808));
                                  *(_DWORD *)(((v2 + 3808) >> 3) + 0x7FFF8000) = -117901064;
                                  std::allocator<char>::~allocator(v2 + 448);
                                  *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = -8;
                                  if ( tz )
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
                                      "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
                                      "init",
                                      894);
                                    v37 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                            (common::milog::MiLogStream *const)(v2 + 3872),
                                            (const char (*)[16])"[CONFIG_ERROR] ");
                                    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                      v37,
                                      (const char (*)[39])byte_1A143AE0);
                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3872));
                                    *(_DWORD *)(((v2 + 3872) >> 3) + 0x7FFF8000) = -117901064;
                                    v6 = -1;
                                  }
                                  else
                                  {
                                    std::vector<std::string>::resize(&this->precondition_param_list, 2uLL);
                                    array_countb = 0;
                                    for ( i_1 = 0; i_1 <= 1; ++i_1 )
                                    {
                                      snprintf((char *)(v2 + 5312), 0x100uLL, &byte_1A143B40, i_1 + 1);
                                      *(_DWORD *)(((v2 + 3936) >> 3) + 0x7FFF8000) = 0;
                                      *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = 1;
                                      std::allocator<char>::allocator(v2 + 464);
                                      std::string::basic_string<std::allocator<char>>(
                                        (std::string *const)(v2 + 3936),
                                        (const char *)(v2 + 5312),
                                        (const std::allocator<char> *)(v2 + 464));
                                      tba = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 3936));
                                      std::string::~string((void *)(v2 + 3936));
                                      *(_DWORD *)(((v2 + 3936) >> 3) + 0x7FFF8000) = -117901064;
                                      std::allocator<char>::~allocator(v2 + 464);
                                      *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = -8;
                                      if ( !tba )
                                      {
                                        tbb = std::vector<std::string>::operator[](&this->precondition_param_list, i_1);
                                        *(_DWORD *)(((v2 + 4000) >> 3) + 0x7FFF8000) = 0;
                                        *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = 1;
                                        std::allocator<char>::allocator(v2 + 480);
                                        std::string::basic_string<std::allocator<char>>(
                                          (std::string *const)(v2 + 4000),
                                          (const char *)(v2 + 5312),
                                          (const std::allocator<char> *)(v2 + 480));
                                        LOBYTE(tbb) = common::tools::TxtFile::Row::assignToStr(
                                                        row,
                                                        (const std::string *)(v2 + 4000),
                                                        tbb) != 0;
                                        std::string::~string((void *)(v2 + 4000));
                                        *(_DWORD *)(((v2 + 4000) >> 3) + 0x7FFF8000) = -117901064;
                                        std::allocator<char>::~allocator(v2 + 480);
                                        *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = -8;
                                        if ( (_BYTE)tbb )
                                        {
                                          *(_DWORD *)(((v2 + 4064) >> 3) + 0x7FFF8000) = 0;
                                          if ( *(char *)(((v2 + 4064) >> 3) + 0x7FFF8000) < 0
                                            || *(_BYTE *)(((v2 + 4095) >> 3) + 0x7FFF8000) != 0
                                            && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 4095) >> 3) + 0x7FFF8000) )
                                          {
                                            __asan_report_store_n(v2 + 4064, 32LL);
                                          }
                                          common::milog::MiLogStream::create(
                                            (common::milog::MiLogStream *)(v2 + 4064),
                                            &common::milog::MiLogDefault::default_log_obj_,
                                            4u,
                                            "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
                                            "init",
                                            906);
                                          v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                  (common::milog::MiLogStream *const)(v2 + 4064),
                                                  (const char (*)[16])"[CONFIG_ERROR] ");
                                          v39 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                                  v38,
                                                  (const char (*)[14])byte_1A143560);
                                          v40 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                                                  v39,
                                                  (const char (*)[256])(v2 + 5312));
                                          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                                            v40,
                                            (const char (*)[7])byte_1A1435A0);
                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4064));
                                          *(_DWORD *)(((v2 + 4064) >> 3) + 0x7FFF8000) = -117901064;
                                          v6 = -1;
                                          goto LABEL_154;
                                        }
                                        array_countb = i_1 + 1;
                                      }
                                    }
                                    std::vector<std::string>::resize(&this->precondition_param_list, array_countb);
                                    *(_DWORD *)(((v2 + 4128) >> 3) + 0x7FFF8000) = 0;
                                    *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = 1;
                                    std::allocator<char>::allocator(v2 + 496);
                                    std::string::basic_string<std::allocator<char>>(
                                      (std::string *const)(v2 + 4128),
                                      &byte_1A143B80,
                                      (const std::allocator<char> *)(v2 + 496));
                                    tbc = common::tools::TxtFile::Row::assignToNum<bool>(
                                            row,
                                            (const std::string *)(v2 + 4128),
                                            &this->precondition_hidden) != 0;
                                    std::string::~string((void *)(v2 + 4128));
                                    *(_DWORD *)(((v2 + 4128) >> 3) + 0x7FFF8000) = -117901064;
                                    std::allocator<char>::~allocator(v2 + 496);
                                    *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = -8;
                                    if ( tbc )
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
                                        "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
                                        "init",
                                        915);
                                      v41 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                              (common::milog::MiLogStream *const)(v2 + 4192),
                                              (const char (*)[16])"[CONFIG_ERROR] ");
                                      common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                                        v41,
                                        (const char (*)[45])byte_1A143BC0);
                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4192));
                                      *(_DWORD *)(((v2 + 4192) >> 3) + 0x7FFF8000) = -117901064;
                                      v6 = -1;
                                    }
                                    else
                                    {
                                      *(_DWORD *)(((v2 + 4256) >> 3) + 0x7FFF8000) = 0;
                                      *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = 1;
                                      std::allocator<char>::allocator(v2 + 512);
                                      std::string::basic_string<std::allocator<char>>(
                                        (std::string *const)(v2 + 4256),
                                        &byte_1A143C20,
                                        (const std::allocator<char> *)(v2 + 512));
                                      tbd = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                              row,
                                              (const std::string *)(v2 + 4256),
                                              &this->min_show_level) != 0;
                                      std::string::~string((void *)(v2 + 4256));
                                      *(_DWORD *)(((v2 + 4256) >> 3) + 0x7FFF8000) = -117901064;
                                      std::allocator<char>::~allocator(v2 + 512);
                                      *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = -8;
                                      if ( tbd )
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
                                          "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
                                          "init",
                                          920);
                                        v42 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                (common::milog::MiLogStream *const)(v2 + 4320),
                                                (const char (*)[16])"[CONFIG_ERROR] ");
                                        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                          v42,
                                          (const char (*)[39])byte_1A143C60);
                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4320));
                                        *(_DWORD *)(((v2 + 4320) >> 3) + 0x7FFF8000) = -117901064;
                                        v6 = -1;
                                      }
                                      else
                                      {
                                        *(_DWORD *)(((v2 + 4384) >> 3) + 0x7FFF8000) = 0;
                                        *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = 1;
                                        std::allocator<char>::allocator(v2 + 528);
                                        std::string::basic_string<std::allocator<char>>(
                                          (std::string *const)(v2 + 4384),
                                          &byte_1A143CC0,
                                          (const std::allocator<char> *)(v2 + 528));
                                        tbe = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                                row,
                                                (const std::string *)(v2 + 4384),
                                                &this->min_player_level) != 0;
                                        std::string::~string((void *)(v2 + 4384));
                                        *(_DWORD *)(((v2 + 4384) >> 3) + 0x7FFF8000) = -117901064;
                                        std::allocator<char>::~allocator(v2 + 528);
                                        *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = -8;
                                        if ( tbe )
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
                                            "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
                                            "init",
                                            925);
                                          v43 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                  (common::milog::MiLogStream *const)(v2 + 4448),
                                                  (const char (*)[16])"[CONFIG_ERROR] ");
                                          common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                            v43,
                                            (const char (*)[39])byte_1A143D00);
                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4448));
                                          *(_DWORD *)(((v2 + 4448) >> 3) + 0x7FFF8000) = -117901064;
                                          v6 = -1;
                                        }
                                        else
                                        {
                                          *(_DWORD *)(((v2 + 4512) >> 3) + 0x7FFF8000) = 0;
                                          *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = 1;
                                          std::allocator<char>::allocator(v2 + 544);
                                          std::string::basic_string<std::allocator<char>>(
                                            (std::string *const)(v2 + 4512),
                                            &byte_1A143D60,
                                            (const std::allocator<char> *)(v2 + 544));
                                          tbf = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                                  row,
                                                  (const std::string *)(v2 + 4512),
                                                  &this->max_player_level) != 0;
                                          std::string::~string((void *)(v2 + 4512));
                                          *(_DWORD *)(((v2 + 4512) >> 3) + 0x7FFF8000) = -117901064;
                                          std::allocator<char>::~allocator(v2 + 544);
                                          *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = -8;
                                          if ( tbf )
                                          {
                                            *(_DWORD *)(((v2 + 4576) >> 3) + 0x7FFF8000) = 0;
                                            if ( *(char *)(((v2 + 4576) >> 3) + 0x7FFF8000) < 0
                                              || *(_BYTE *)(((v2 + 4607) >> 3) + 0x7FFF8000) != 0
                                              && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 4607) >> 3) + 0x7FFF8000) )
                                            {
                                              __asan_report_store_n(v2 + 4576, 32LL);
                                            }
                                            common::milog::MiLogStream::create(
                                              (common::milog::MiLogStream *)(v2 + 4576),
                                              &common::milog::MiLogDefault::default_log_obj_,
                                              4u,
                                              "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
                                              "init",
                                              930);
                                            v44 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                    (common::milog::MiLogStream *const)(v2 + 4576),
                                                    (const char (*)[16])"[CONFIG_ERROR] ");
                                            common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                              v44,
                                              (const char (*)[39])byte_1A143DA0);
                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4576));
                                            *(_DWORD *)(((v2 + 4576) >> 3) + 0x7FFF8000) = -117901064;
                                            v6 = -1;
                                          }
                                          else
                                          {
                                            *(_DWORD *)(((v2 + 4640) >> 3) + 0x7FFF8000) = 0;
                                            *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = 1;
                                            std::allocator<char>::allocator(v2 + 560);
                                            std::string::basic_string<std::allocator<char>>(
                                              (std::string *const)(v2 + 4640),
                                              &byte_1A143E00,
                                              (const std::allocator<char> *)(v2 + 560));
                                            tbg = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                                    row,
                                                    (const std::string *)(v2 + 4640),
                                                    &this->sort_level) != 0;
                                            std::string::~string((void *)(v2 + 4640));
                                            *(_DWORD *)(((v2 + 4640) >> 3) + 0x7FFF8000) = -117901064;
                                            std::allocator<char>::~allocator(v2 + 560);
                                            *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = -8;
                                            if ( tbg )
                                            {
                                              *(_DWORD *)(((v2 + 4704) >> 3) + 0x7FFF8000) = 0;
                                              if ( *(char *)(((v2 + 4704) >> 3) + 0x7FFF8000) < 0
                                                || *(_BYTE *)(((v2 + 4735) >> 3) + 0x7FFF8000) != 0
                                                && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 4735) >> 3) + 0x7FFF8000) )
                                              {
                                                __asan_report_store_n(v2 + 4704, 32LL);
                                              }
                                              common::milog::MiLogStream::create(
                                                (common::milog::MiLogStream *)(v2 + 4704),
                                                &common::milog::MiLogDefault::default_log_obj_,
                                                4u,
                                                "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
                                                "init",
                                                935);
                                              v45 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                      (common::milog::MiLogStream *const)(v2 + 4704),
                                                      (const char (*)[16])"[CONFIG_ERROR] ");
                                              common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                                v45,
                                                (const char (*)[33])byte_1A143E40);
                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4704));
                                              *(_DWORD *)(((v2 + 4704) >> 3) + 0x7FFF8000) = -117901064;
                                              v6 = -1;
                                            }
                                            else
                                            {
                                              *(_DWORD *)(((v2 + 4768) >> 3) + 0x7FFF8000) = 0;
                                              *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) = 1;
                                              std::allocator<char>::allocator(v2 + 576);
                                              std::string::basic_string<std::allocator<char>>(
                                                (std::string *const)(v2 + 4768),
                                                &byte_1A143EA0,
                                                (const std::allocator<char> *)(v2 + 576));
                                              tbh = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                                      row,
                                                      (const std::string *)(v2 + 4768),
                                                      &this->secondary_sheet_id) != 0;
                                              std::string::~string((void *)(v2 + 4768));
                                              *(_DWORD *)(((v2 + 4768) >> 3) + 0x7FFF8000) = -117901064;
                                              std::allocator<char>::~allocator(v2 + 576);
                                              *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) = -8;
                                              if ( tbh )
                                              {
                                                *(_DWORD *)(((v2 + 4832) >> 3) + 0x7FFF8000) = 0;
                                                if ( *(char *)(((v2 + 4832) >> 3) + 0x7FFF8000) < 0
                                                  || *(_BYTE *)(((v2 + 4863) >> 3) + 0x7FFF8000) != 0
                                                  && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 4863) >> 3)
                                                                                            + 0x7FFF8000) )
                                                {
                                                  __asan_report_store_n(v2 + 4832, 32LL);
                                                }
                                                common::milog::MiLogStream::create(
                                                  (common::milog::MiLogStream *)(v2 + 4832),
                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                  4u,
                                                  "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
                                                  "init",
                                                  940);
                                                v46 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                        (common::milog::MiLogStream *const)(v2 + 4832),
                                                        (const char (*)[16])"[CONFIG_ERROR] ");
                                                common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                                                  v46,
                                                  (const char (*)[35])byte_1A143EE0);
                                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4832));
                                                *(_DWORD *)(((v2 + 4832) >> 3) + 0x7FFF8000) = -117901064;
                                                v6 = -1;
                                              }
                                              else
                                              {
                                                *(_DWORD *)(((v2 + 4896) >> 3) + 0x7FFF8000) = 0;
                                                *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) = 1;
                                                std::allocator<char>::allocator(v2 + 592);
                                                std::string::basic_string<std::allocator<char>>(
                                                  (std::string *const)(v2 + 4896),
                                                  aN_2,
                                                  (const std::allocator<char> *)(v2 + 592));
                                                tbi = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                                        row,
                                                        (const std::string *)(v2 + 4896),
                                                        &this->choose_one_group_id) != 0;
                                                std::string::~string((void *)(v2 + 4896));
                                                *(_DWORD *)(((v2 + 4896) >> 3) + 0x7FFF8000) = -117901064;
                                                std::allocator<char>::~allocator(v2 + 592);
                                                *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) = -8;
                                                if ( tbi )
                                                {
                                                  *(_DWORD *)(((v2 + 4960) >> 3) + 0x7FFF8000) = 0;
                                                  if ( *(char *)(((v2 + 4960) >> 3) + 0x7FFF8000) < 0
                                                    || *(_BYTE *)(((v2 + 4991) >> 3) + 0x7FFF8000) != 0
                                                    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 4991) >> 3)
                                                                                          + 0x7FFF8000) )
                                                  {
                                                    __asan_report_store_n(v2 + 4960, 32LL);
                                                  }
                                                  common::milog::MiLogStream::create(
                                                    (common::milog::MiLogStream *)(v2 + 4960),
                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                    4u,
                                                    "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
                                                    "init",
                                                    945);
                                                  v47 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                          (common::milog::MiLogStream *const)(v2 + 4960),
                                                          (const char (*)[16])"[CONFIG_ERROR] ");
                                                  common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                                                    v47,
                                                    (const char (*)[31])byte_1A143F80);
                                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4960));
                                                  *(_DWORD *)(((v2 + 4960) >> 3) + 0x7FFF8000) = -117901064;
                                                  v6 = -1;
                                                }
                                                else
                                                {
                                                  *(_DWORD *)(((v2 + 5024) >> 3) + 0x7FFF8000) = 0;
                                                  *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) = 1;
                                                  std::allocator<char>::allocator(v2 + 608);
                                                  std::string::basic_string<std::allocator<char>>(
                                                    (std::string *const)(v2 + 5024),
                                                    &byte_1A143FC0,
                                                    (const std::allocator<char> *)(v2 + 608));
                                                  tbj = common::tools::TxtFile::Row::assignToStr(
                                                          row,
                                                          (const std::string *)(v2 + 5024),
                                                          (std::string *)(v2 + 736)) != 0;
                                                  std::string::~string((void *)(v2 + 5024));
                                                  *(_DWORD *)(((v2 + 5024) >> 3) + 0x7FFF8000) = -117901064;
                                                  std::allocator<char>::~allocator(v2 + 608);
                                                  *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) = -8;
                                                  if ( tbj )
                                                  {
                                                    *(_DWORD *)(((v2 + 5088) >> 3) + 0x7FFF8000) = 0;
                                                    if ( *(char *)(((v2 + 5088) >> 3) + 0x7FFF8000) < 0
                                                      || *(_BYTE *)(((v2 + 5119) >> 3) + 0x7FFF8000) != 0
                                                      && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 5119) >> 3)
                                                                                                + 0x7FFF8000) )
                                                    {
                                                      __asan_report_store_n(v2 + 5088, 32LL);
                                                    }
                                                    common::milog::MiLogStream::create(
                                                      (common::milog::MiLogStream *)(v2 + 5088),
                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                      4u,
                                                      "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
                                                      "init",
                                                      950);
                                                    v48 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                            (common::milog::MiLogStream *const)(v2 + 5088),
                                                            (const char (*)[16])"[CONFIG_ERROR] ");
                                                    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                                      v48,
                                                      (const char (*)[33])byte_1A144000);
                                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5088));
                                                    *(_DWORD *)(((v2 + 5088) >> 3) + 0x7FFF8000) = -117901064;
                                                    v6 = -1;
                                                  }
                                                  else
                                                  {
                                                    v49 = ((v2 + 672) >> 3) + 2147450880;
                                                    *(_WORD *)v49 = 0;
                                                    *(_BYTE *)(v49 + 2) = 0;
                                                    v50 = (_DWORD *)(((v2 + 5216) >> 3) + 2147450880);
                                                    *v50 = 0;
                                                    v50[1] = 0;
                                                    *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) = 1;
                                                    std::allocator<char>::allocator(v2 + 624);
                                                    std::string::basic_string<std::allocator<char>>(
                                                      (std::string *const)(v2 + 5216),
                                                      ";",
                                                      (const std::allocator<char> *)(v2 + 624));
                                                    *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) = 1;
                                                    std::allocator<char>::allocator(v2 + 640);
                                                    std::string::basic_string<std::allocator<char>>(
                                                      (std::string *const)(v2 + 5248),
                                                      ",",
                                                      (const std::allocator<char> *)(v2 + 640));
                                                    *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) = 1;
                                                    std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 656));
                                                    std::vector<std::string>::vector(
                                                      (std::vector<std::string> *const)(v2 + 672),
                                                      (std::initializer_list<std::string >)__PAIR128__(2LL, v2 + 5216),
                                                      (const std::vector<std::string>::allocator_type *)(v2 + 656));
                                                    v51 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                                                            (const std::string *)(v2 + 736),
                                                            (const std::vector<std::string> *)(v2 + 672),
                                                            &this->platform_type_list,
                                                            1) != 0;
                                                    std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 672));
                                                    v52 = ((v2 + 672) >> 3) + 2147450880;
                                                    *(_WORD *)v52 = -1800;
                                                    *(_BYTE *)(v52 + 2) = -8;
                                                    std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 656));
                                                    *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) = -8;
                                                    for ( j = (char *)(v2 + 5280);
                                                          j != (char *)(v2 + 5216);
                                                          std::string::~string(j) )
                                                    {
                                                      j -= 32;
                                                    }
                                                    v54 = (_DWORD *)(((v2 + 5216) >> 3) + 2147450880);
                                                    *v54 = -117901064;
                                                    v54[1] = -117901064;
                                                    std::allocator<char>::~allocator(v2 + 640);
                                                    *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) = -8;
                                                    std::allocator<char>::~allocator(v2 + 624);
                                                    *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) = -8;
                                                    if ( v51 )
                                                    {
                                                      *(_DWORD *)(((v2 + 5152) >> 3) + 0x7FFF8000) = 0;
                                                      if ( *(char *)(((v2 + 5152) >> 3) + 0x7FFF8000) < 0
                                                        || *(_BYTE *)(((v2 + 5183) >> 3) + 0x7FFF8000) != 0
                                                        && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 5183) >> 3)
                                                                                             + 0x7FFF8000) )
                                                      {
                                                        __asan_report_store_n(v2 + 5152, 32LL);
                                                      }
                                                      common::milog::MiLogStream::create(
                                                        (common::milog::MiLogStream *)(v2 + 5152),
                                                        &common::milog::MiLogDefault::default_log_obj_,
                                                        4u,
                                                        "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
                                                        "init",
                                                        955);
                                                      v55 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                              (common::milog::MiLogStream *const)(v2 + 5152),
                                                              (const char (*)[16])"[CONFIG_ERROR] ");
                                                      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                                        v55,
                                                        (const char (*)[33])byte_1A144000);
                                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5152));
                                                      *(_DWORD *)(((v2 + 5152) >> 3) + 0x7FFF8000) = -117901064;
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
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_154:
  std::string::~string((void *)(v2 + 736));
  if ( v100 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8054) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 92) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8290) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862746) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450976 - (((_DWORD)v4 + 2147450984) & 0xFFFFFFF8) + 568) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF82B8) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_7(v2, 5632LL, v100);
  }
  return v6;
};

// Line 963: range 000000000CB92C1A-000000000CB936B2
int32_t __cdecl data::ShopRotateExcelConfig::init(
        data::ShopRotateExcelConfig *const this,
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
  *(_QWORD *)(v2 + 16) = data::ShopRotateExcelConfig::init;
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
    "ID",
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
      "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
      "init",
      966);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 160),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v6, (const char (*)[23])byte_1A144180);
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
      &byte_1A143200,
      (const std::allocator<char> *)(v2 + 48));
    v8 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 224), &this->rotate_id) != 0;
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
        "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
        "init",
        971);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v9, (const char (*)[35])byte_1A143240);
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
        &byte_1A1441C0,
        (const std::allocator<char> *)(v2 + 64));
      v10 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 352), &this->item_id) != 0;
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
          "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
          "init",
          976);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 416),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v11, (const char (*)[29])byte_1A144200);
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
          &byte_1A144240,
          (const std::allocator<char> *)(v2 + 80));
        v12 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                row,
                (const std::string *)(v2 + 480),
                &this->rotate_order) != 0;
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
            "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
            "init",
            981);
          v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 544),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v13, (const char (*)[33])byte_1A144280);
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

// Line 989: range 000000000CB936B4-000000000CB93C3C
int32_t __cdecl data::ShopSpecialKeysDataExcelConfig::init(
        data::ShopSpecialKeysDataExcelConfig *const this,
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
  *(_QWORD *)(v2 + 16) = data::ShopSpecialKeysDataExcelConfig::init;
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
    byte_1A140FE0,
    (const std::allocator<char> *)(v2 + 32));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 64), &this->goods_id) != 0;
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
      "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
      "init",
      992);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v6, (const char (*)[29])byte_1A143120);
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
      &byte_1A144360,
      (const std::allocator<char> *)(v2 + 48));
    v8 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
           row,
           (const std::string *)(v2 + 192),
           &this->single_limit) != 0;
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
        "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
        "init",
        997);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 256),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v9, (const char (*)[39])byte_1A1443A0);
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

// Line 1006: range 000000000CB93C3E-000000000CB94DA2
int32_t __cdecl data::ShopExcelConfigMgrBase::loadShopExcelConfig(
        data::ShopExcelConfigMgrBase *const this,
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
  __int64 v19; // r14
  const char *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rcx
  __int64 v25; // rsi
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // r14
  data::ShopExcelConfig *v28; // rax
  data::ShopType *v29; // rcx
  data::ShopExcelConfig *v30; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<const data::ShopType,data::ShopExcelConfig>,false,false>,bool> v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // r14
  __int64 v34; // rsi
  __int64 v35; // rax
  unsigned __int64 v36; // rax
  int v37; // edx
  char *i; // r14
  std::string *__for_begin; // [rsp+28h] [rbp-8618h]
  const common::tools::TxtFile::Row *row_ptr; // [rsp+48h] [rbp-85F8h]
  char v43[34288]; // [rsp+50h] [rbp-85F0h] BYREF

  v3 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_10(34240LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "14 48 1 9 <unknown> 64 4 6 r:1021 80 4 9 <unknown> 96 8 9 <unknown> 128 32 10 paths:1007 192 32 "
                        "9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9"
                        " <unknown> 576 40 9 data:1024 656 376 25 debug_message_stream:1032 1104 32880 13 txt_file:1015";
  *(_QWORD *)(v3 + 16) = data::ShopExcelConfigMgrBase::loadShopExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862725] = -218959118;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -218959118;
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
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 128),
    "/txt/ShopData.txt",
    (const std::allocator<char> *)(v3 + 48));
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  for ( __for_begin = (std::string *)(v3 + 128); __for_begin != (std::string *)(v3 + 160); ++__for_begin )
  {
    *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    p_real_data_base_dir = &config->real_data_base_dir;
    if ( *(char *)(((v3 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) )
    {
      p_real_data_base_dir = (std::string *)32;
      __asan_report_store_n(v3 + 192, 32LL);
    }
    std::operator+<char>((std::string *)(v3 + 192), p_real_data_base_dir, __for_begin);
    std::string::operator=(__for_begin, v3 + 192);
    std::string::~string((void *)(v3 + 192));
    *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
    __asan_unpoison_stack_memory(v3 + 1104, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v3 + 1104));
    v7 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v3 + 1104), v7) )
    {
      *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 256) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 95) & 7) >= *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 256, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 256),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
        "loadShopExcelConfig",
        1018);
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v3 + 256),
             (const char (*)[8])byte_1A1445A0);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1A1445E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
      *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
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
        v15 = *(unsigned int *)(v3 + 64);
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v3 + 1104), v15);
        v13 = ((v3 + 576) >> 3) + 2147450880;
        *(_DWORD *)v13 = 0;
        *(_BYTE *)(v13 + 4) = 0;
        v14 = *(_BYTE *)(((v3 + 615) >> 3) + 0x7FFF8000);
        LOBYTE(v15) = v14 != 0;
        if ( *(char *)(((v3 + 576) >> 3) + 0x7FFF8000) < 0 || v14 != 0 && (char)((v3 + 103) & 7) >= v14 )
        {
          v15 = 40LL;
          __asan_report_store_n(v3 + 576, 40LL);
        }
        *(_QWORD *)(v3 + 576) = 0LL;
        *(_QWORD *)(v3 + 584) = 0LL;
        *(_QWORD *)(v3 + 592) = 0LL;
        *(_QWORD *)(v3 + 600) = 0LL;
        *(_QWORD *)(v3 + 608) = 0LL;
        v16 = &`vtable for'data::ShopExcelConfig + 2;
        if ( *(_BYTE *)(((v3 + 576) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 576, v15);
        *(_QWORD *)(v3 + 576) = v16;
        if ( row_ptr )
        {
          if ( data::ShopExcelConfig::init((data::ShopExcelConfig *const)(v3 + 576), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 656, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 656);
            v19 = std::operator<<<std::char_traits<char>>(v3 + 656, &unk_1A144660);
            if ( *(_BYTE *)(((v3 + 588) >> 3) + 0x7FFF8000) != 0
              && (char)(((v3 + 76) & 7) + 3) >= *(_BYTE *)(((v3 + 588) >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v3 + 588);
            }
            v20 = data::enumValToStr((data::ShopType)*(_DWORD *)(v3 + 588), (((_BYTE)v3 + 76) & 7u) + 3);
            std::operator<<<std::char_traits<char>>(v19, v20);
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
              "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
              "loadShopExcelConfig",
              1034);
            v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 384),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v22 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v21, (const char (*)[2])"<");
            v23 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, __for_begin);
            v24 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v23,
                    (const char (*)[11])byte_1A1446E0);
            *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 64);
            v25 = (unsigned int)(*(_DWORD *)(v3 + 64) + 1);
            if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v3 + 80, v25);
            *(_DWORD *)(v3 + 80) = v25;
            v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v24,
                    (const unsigned int *)(v3 + 80));
            v27 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v26,
                    (const char (*)[13])byte_1A144720);
            *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 448) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 448, 32LL);
            }
            std::ostringstream::str(v3 + 448, v3 + 656);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v27, (const std::string *)(v3 + 448));
            std::string::~string((void *)(v3 + 448));
            *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
            *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            std::ostringstream::~ostringstream(v3 + 656);
            __asan_poison_stack_memory(v3 + 656, 376LL);
            v18 = 0;
          }
          else
          {
            v28 = std::move<data::ShopExcelConfig &>((data::ShopExcelConfig *)(v3 + 576));
            v31 = std::unordered_map<data::ShopType,data::ShopExcelConfig>::emplace<data::ShopType&,data::ShopExcelConfig>(
                    &this->shop_excel_config_map,
                    (data::ShopType *)(v3 + 588),
                    v28,
                    v29,
                    v30);
            if ( !v31.second )
            {
              *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 512) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 64 + 95) & 7) >= *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 512, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 512),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
                "loadShopExcelConfig",
                1039);
              v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 512),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v33 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                      v32,
                      (const char (*)[15])byte_1A144760);
              *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
              v34 = (((_BYTE)v3 + 76) & 7u) + 3;
              if ( *(_BYTE *)(((v3 + 588) >> 3) + 0x7FFF8000) != 0
                && (char)(((v3 + 76) & 7) + 3) >= *(_BYTE *)(((v3 + 588) >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v3 + 588);
              }
              v35 = (__int64)data::enumValToStr((data::ShopType)*(_DWORD *)(v3 + 588), v34);
              if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
                v35 = __asan_report_store8(v3 + 96, v34);
              *(_QWORD *)(v3 + 96) = v35;
              common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v33, (const char *const *)(v3 + 96));
              *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
              *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -117901064;
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
          *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 320) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 320, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 320),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
            "loadShopExcelConfig",
            1027);
          v17 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 320),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
          *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v18 = 0;
        }
        data::ShopExcelConfig::~ShopExcelConfig((data::ShopExcelConfig *const)(v3 + 576));
        v36 = ((v3 + 576) >> 3) + 2147450880;
        *(_DWORD *)v36 = -117901064;
        *(_BYTE *)(v36 + 4) = -8;
        if ( v18 != 1 )
        {
          v37 = 0;
          goto LABEL_53;
        }
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 64);
      }
      v37 = 1;
LABEL_53:
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      v10 = v37 == 1;
    }
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v3 + 1104));
    __asan_poison_stack_memory(v3 + 1104, 32880LL);
    if ( !v10 )
      goto LABEL_57;
  }
  v2 = 0;
LABEL_57:
  for ( i = (char *)(v3 + 160); i != (char *)(v3 + 128); std::string::~string(i) )
    i -= 32;
  if ( v43 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8014) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF90B0) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862727) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450900 - (((_DWORD)v5 + 2147450908) & 0xFFFFFFF8) + 4260) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_10(v3, 34240LL, v43);
  }
  return v2;
};

// Line 1048: range 000000000CB94DA4-000000000CB960F6
int32_t __cdecl data::ShopExcelConfigMgrBase::loadShopGoodsExcelConfig(
        data::ShopExcelConfigMgrBase *const this,
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
  common::milog::MiLogStream *v12; // rax
  int v13; // r14d
  __int64 v14; // rcx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rcx
  __int64 v19; // rsi
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  data::ShopGoodsExcelConfig *v22; // rax
  unsigned int *v23; // rcx
  data::ShopGoodsExcelConfig *v24; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ShopGoodsExcelConfig>,false,false>,bool> v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  int v28; // edx
  char *i; // r14
  int32_t v31; // [rsp+1Ch] [rbp-87F4h]
  std::string *__for_begin; // [rsp+38h] [rbp-87D8h]
  const common::tools::TxtFile::Row *row_ptr; // [rsp+58h] [rbp-87B8h]
  char v35[34736]; // [rsp+60h] [rbp-87B0h] BYREF

  v2 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_10(34688LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "17 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 4 6 "
                        "r:1067 128 4 9 <unknown> 144 32 9 <unknown> 208 32 9 <unknown> 272 32 9 <unknown> 336 32 9 <unkn"
                        "own> 400 32 9 <unknown> 464 32 9 <unknown> 528 160 10 paths:1049 752 280 9 data:1070 1104 376 25"
                        " debug_message_stream:1078 1552 32880 13 txt_file:1061";
  *(_QWORD *)(v2 + 16) = data::ShopExcelConfigMgrBase::loadShopGoodsExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
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
  v4[536862741] = -219021312;
  v4[536862742] = -218959118;
  v4[536862743] = 62194;
  v4[536862752] = -218959360;
  v4[536862753] = -218959118;
  v4[536862754] = 62194;
  v4[536862766] = -218959360;
  v4[536862767] = -218959118;
  v4[536862768] = 62194;
  v4[536863796] = -202116109;
  v4[536863797] = -202116109;
  v4[536863798] = -202116109;
  v4[536863799] = -202116109;
  v4[536863800] = -202116109;
  v4[536863801] = -202116109;
  v4[536863802] = -202116109;
  v4[536863803] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 528),
    "/txt/ShopGoodsData.txt",
    (const std::allocator<char> *)(v2 + 32));
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 560),
    "/txt/ShopmallGoodsData.txt",
    (const std::allocator<char> *)(v2 + 48));
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 592),
    "/txt/ActivityShopGoodsData.txt",
    (const std::allocator<char> *)(v2 + 64));
  std::allocator<char>::~allocator(v2 + 64);
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 80);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 624),
    "/txt/HomeWorldShopData.txt",
    (const std::allocator<char> *)(v2 + 80));
  std::allocator<char>::~allocator(v2 + 80);
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 96);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 656),
    "/txt/GCGShopGoodsData.txt",
    (const std::allocator<char> *)(v2 + 96));
  std::allocator<char>::~allocator(v2 + 96);
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  for ( __for_begin = (std::string *)(v2 + 528); __for_begin != (std::string *)(v2 + 688); ++__for_begin )
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
    __asan_unpoison_stack_memory(v2 + 1552, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v2 + 1552));
    v6 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v2 + 1552), v6) )
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
        "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
        "loadShopGoodsExcelConfig",
        1064);
      v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v2 + 208),
             (const char (*)[8])byte_1A1445A0);
      v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])byte_1A1445E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 208));
      *(_DWORD *)(((v2 + 208) >> 3) + 0x7FFF8000) = -117901064;
      v31 = -1;
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
        v11 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v2 + 1552));
        if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v2 + 112);
        if ( v11 <= *(_DWORD *)(v2 + 112) )
          break;
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v2 + 1552), *(_DWORD *)(v2 + 112));
        __asan_unpoison_stack_memory(v2 + 752, 280LL);
        data::ShopGoodsExcelConfig::ShopGoodsExcelConfig((data::ShopGoodsExcelConfig *const)(v2 + 752));
        if ( row_ptr )
        {
          if ( data::ShopGoodsExcelConfig::init((data::ShopGoodsExcelConfig *const)(v2 + 752), row_ptr) )
          {
            __asan_unpoison_stack_memory(v2 + 1104, 376LL);
            std::ostringstream::basic_ostringstream(v2 + 1104);
            v14 = std::operator<<<std::char_traits<char>>(v2 + 1104, &unk_1A144A80);
            if ( *(_BYTE *)(((v2 + 760) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 760) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v2 + 760);
            std::ostream::operator<<(v14, *(unsigned int *)(v2 + 760));
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
              "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
              "loadShopGoodsExcelConfig",
              1080);
            v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 336),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v16 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v15, (const char (*)[2])"<");
            v17 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, __for_begin);
            v18 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v17,
                    (const char (*)[11])byte_1A1446E0);
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v2 + 112);
            v19 = (unsigned int)(*(_DWORD *)(v2 + 112) + 1);
            if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v2 + 128, v19);
            *(_DWORD *)(v2 + 128) = v19;
            v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v18,
                    (const unsigned int *)(v2 + 128));
            v21 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v20,
                    (const char (*)[13])byte_1A144720);
            *(_DWORD *)(((v2 + 400) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 400) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 431) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 81) & 7) >= *(_BYTE *)(((v2 + 431) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 400, 32LL);
            }
            std::ostringstream::str(v2 + 400, v2 + 1104);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, (const std::string *)(v2 + 400));
            std::string::~string((void *)(v2 + 400));
            *(_DWORD *)(((v2 + 400) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 336));
            *(_DWORD *)(((v2 + 336) >> 3) + 0x7FFF8000) = -117901064;
            v31 = -1;
            std::ostringstream::~ostringstream(v2 + 1104);
            __asan_poison_stack_memory(v2 + 1104, 376LL);
            v13 = 0;
          }
          else
          {
            v22 = std::move<data::ShopGoodsExcelConfig &>((data::ShopGoodsExcelConfig *)(v2 + 752));
            v25 = std::unordered_map<unsigned int,data::ShopGoodsExcelConfig>::emplace<unsigned int &,data::ShopGoodsExcelConfig>(
                    &this->shop_goods_excel_config_map,
                    (unsigned int *)(v2 + 760),
                    v22,
                    v23,
                    v24);
            if ( !v25.second )
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
                "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
                "loadShopGoodsExcelConfig",
                1085);
              v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 464),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v27 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v26,
                      (const char (*)[14])byte_1A144AC0);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v27,
                (const unsigned int *)(v2 + 760));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 464));
              *(_DWORD *)(((v2 + 464) >> 3) + 0x7FFF8000) = -117901064;
              v31 = -1;
              v13 = 0;
            }
            else
            {
              v13 = 1;
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
            "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
            "loadShopGoodsExcelConfig",
            1073);
          v12 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v2 + 272),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 112));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 272));
          *(_DWORD *)(((v2 + 272) >> 3) + 0x7FFF8000) = -117901064;
          v31 = -1;
          v13 = 0;
        }
        data::ShopGoodsExcelConfig::~ShopGoodsExcelConfig((data::ShopGoodsExcelConfig *const)(v2 + 752));
        __asan_poison_stack_memory(v2 + 752, 280LL);
        if ( v13 != 1 )
        {
          v28 = 0;
          goto LABEL_45;
        }
        if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v2 + 112);
      }
      v28 = 1;
LABEL_45:
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      v9 = v28 == 1;
    }
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v2 + 1552));
    __asan_poison_stack_memory(v2 + 1552, 32880LL);
    if ( !v9 )
      goto LABEL_49;
  }
  v31 = 0;
LABEL_49:
  for ( i = (char *)(v2 + 688); i != (char *)(v2 + 528); std::string::~string(i) )
    i -= 32;
  if ( v35 == (char *)v2 )
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8054) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF90E8) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862743) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450964 - (((_DWORD)v4 + 2147450972) & 0xFFFFFFF8) + 4252) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_10(v2, 34688LL, v35);
  }
  return v31;
};

// Line 1094: range 000000000CB960F8-000000000CB9735E
int32_t __cdecl data::ShopExcelConfigMgrBase::loadShopRotateExcelConfig(
        data::ShopExcelConfigMgrBase *const this,
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
  __int64 v12; // rsi
  unsigned __int64 v13; // rax
  __int64 *v14; // rdx
  __int64 v15; // rsi
  common::milog::MiLogStream *v16; // rax
  int v17; // r14d
  __int64 v18; // rcx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rcx
  __int64 v23; // rsi
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  data::ShopRotateExcelConfig *v26; // rax
  unsigned int *v27; // rcx
  data::ShopRotateExcelConfig *v28; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ShopRotateExcelConfig>,false,false>,bool> v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  unsigned __int64 v32; // rax
  int v33; // edx
  char *i; // r14
  int32_t v36; // [rsp+1Ch] [rbp-8634h]
  std::string *__for_begin; // [rsp+38h] [rbp-8618h]
  const common::tools::TxtFile::Row *row_ptr; // [rsp+58h] [rbp-85F8h]
  char v40[34288]; // [rsp+60h] [rbp-85F0h] BYREF

  v2 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_10(34240LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "14 48 1 9 <unknown> 64 1 9 <unknown> 80 4 6 r:1110 96 4 9 <unknown> 112 24 9 data:1113 176 32 9 "
                        "<unknown> 240 32 9 <unknown> 304 32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496 32 9 <"
                        "unknown> 560 64 10 paths:1095 656 376 25 debug_message_stream:1121 1104 32880 13 txt_file:1104";
  *(_QWORD *)(v2 + 16) = data::ShopExcelConfigMgrBase::loadShopRotateExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = 61956;
  v4[536862724] = -218959360;
  v4[536862725] = 62194;
  v4[536862726] = -219021312;
  v4[536862727] = 62194;
  v4[536862728] = -219021312;
  v4[536862729] = 62194;
  v4[536862730] = -219021312;
  v4[536862731] = 62194;
  v4[536862732] = -219021312;
  v4[536862733] = 62194;
  v4[536862734] = -219021312;
  v4[536862735] = 62194;
  v4[536862736] = -219021312;
  v4[536862737] = 62194;
  v4[536862739] = -219021312;
  v4[536862740] = 62194;
  v4[536862752] = -218959360;
  v4[536862753] = -218959118;
  v4[536862754] = 62194;
  v4[536863782] = -202116109;
  v4[536863783] = -202116109;
  v4[536863784] = -202116109;
  v4[536863785] = -202116109;
  v4[536863786] = -202116109;
  v4[536863787] = -202116109;
  v4[536863788] = -202116109;
  v4[536863789] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 560),
    "/txt/ShopRotateData.txt",
    (const std::allocator<char> *)(v2 + 48));
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 592),
    "/txt/ShopmallRotateData.txt",
    (const std::allocator<char> *)(v2 + 64));
  std::allocator<char>::~allocator(v2 + 64);
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  for ( __for_begin = (std::string *)(v2 + 560); __for_begin != (std::string *)(v2 + 624); ++__for_begin )
  {
    *(_DWORD *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    p_real_data_base_dir = &config->real_data_base_dir;
    if ( *(char *)(((v2 + 176) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 80 + 31) & 7) >= *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) )
    {
      p_real_data_base_dir = (std::string *)32;
      __asan_report_store_n(v2 + 176, 32LL);
    }
    std::operator+<char>((std::string *)(v2 + 176), p_real_data_base_dir, __for_begin);
    std::string::operator=(__for_begin, v2 + 176);
    std::string::~string((void *)(v2 + 176));
    *(_DWORD *)(((v2 + 176) >> 3) + 0x7FFF8000) = -117901064;
    __asan_unpoison_stack_memory(v2 + 1104, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v2 + 1104));
    v6 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v2 + 1104), v6) )
    {
      *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 240) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 64 + 79) & 7) >= *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 240, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 240),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
        "loadShopRotateExcelConfig",
        1107);
      v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v2 + 240),
             (const char (*)[8])byte_1A1445A0);
      v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])byte_1A1445E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
      *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = -117901064;
      v36 = -1;
      v9 = 0;
    }
    else
    {
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
      v10 = *(unsigned __int8 *)(((v2 + 80) >> 3) + 0x7FFF8000);
      if ( (_BYTE)v10 != 0 && (char)v10 <= 3 )
        __asan_report_store4(v2 + 80, v6);
      for ( *(_DWORD *)(v2 + 80) = 0; ; ++*(_DWORD *)(v2 + 80) )
      {
        v11 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v2 + 1104));
        if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v2 + 80);
        if ( v11 <= *(_DWORD *)(v2 + 80) )
          break;
        v12 = *(unsigned int *)(v2 + 80);
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v2 + 1104), v12);
        v13 = ((v2 + 112) >> 3) + 2147450880;
        *(_WORD *)v13 = 0;
        *(_BYTE *)(v13 + 2) = 0;
        v14 = &`vtable for'data::ShopRotateExcelConfig + 2;
        if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 112, v12);
        *(_QWORD *)(v2 + 112) = v14;
        if ( *(_BYTE *)(((v2 + 120) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 120) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 120, v12);
        *(_DWORD *)(v2 + 120) = 0;
        v15 = (((_BYTE)v2 + 124) & 7u) + 3;
        if ( *(_BYTE *)(((v2 + 124) >> 3) + 0x7FFF8000) != 0
          && (char)(((v2 + 124) & 7) + 3) >= *(_BYTE *)(((v2 + 124) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v2 + 124, v15);
        }
        *(_DWORD *)(v2 + 124) = 0;
        if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 128, v15);
        *(_DWORD *)(v2 + 128) = 0;
        if ( *(_BYTE *)(((v2 + 132) >> 3) + 0x7FFF8000) != 0
          && (char)(((v2 - 124) & 7) + 3) >= *(_BYTE *)(((v2 + 132) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v2 + 132, (((_BYTE)v2 - 124) & 7u) + 3);
        }
        *(_DWORD *)(v2 + 132) = 0;
        if ( row_ptr )
        {
          if ( data::ShopRotateExcelConfig::init((data::ShopRotateExcelConfig *const)(v2 + 112), row_ptr) )
          {
            __asan_unpoison_stack_memory(v2 + 656, 376LL);
            std::ostringstream::basic_ostringstream(v2 + 656);
            v18 = std::operator<<<std::char_traits<char>>(v2 + 656, &unk_1A144CE0);
            if ( *(_BYTE *)(((v2 + 120) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 120) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v2 + 120);
            std::ostream::operator<<(v18, *(unsigned int *)(v2 + 120));
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
              4u,
              "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
              "loadShopRotateExcelConfig",
              1123);
            v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 368),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v20 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v19, (const char (*)[2])"<");
            v21 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, __for_begin);
            v22 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v21,
                    (const char (*)[11])byte_1A1446E0);
            *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v2 + 80);
            v23 = (unsigned int)(*(_DWORD *)(v2 + 80) + 1);
            if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v2 + 96, v23);
            *(_DWORD *)(v2 + 96) = v23;
            v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v22,
                    (const unsigned int *)(v2 + 96));
            v25 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v24,
                    (const char (*)[13])byte_1A144720);
            *(_DWORD *)(((v2 + 432) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 432) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 463) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 80 + 31) & 7) >= *(_BYTE *)(((v2 + 463) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 432, 32LL);
            }
            std::ostringstream::str(v2 + 432, v2 + 656);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v25, (const std::string *)(v2 + 432));
            std::string::~string((void *)(v2 + 432));
            *(_DWORD *)(((v2 + 432) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 368));
            *(_DWORD *)(((v2 + 368) >> 3) + 0x7FFF8000) = -117901064;
            v36 = -1;
            std::ostringstream::~ostringstream(v2 + 656);
            __asan_poison_stack_memory(v2 + 656, 376LL);
            v17 = 0;
          }
          else
          {
            v26 = std::move<data::ShopRotateExcelConfig &>((data::ShopRotateExcelConfig *)(v2 + 112));
            v29 = std::unordered_map<unsigned int,data::ShopRotateExcelConfig>::emplace<unsigned int &,data::ShopRotateExcelConfig>(
                    &this->shop_rotate_excel_config_map,
                    (unsigned int *)(v2 + 120),
                    v26,
                    v27,
                    v28);
            if ( !v29.second )
            {
              *(_DWORD *)(((v2 + 496) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 496) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 527) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 64 + 79) & 7) >= *(_BYTE *)(((v2 + 527) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 496, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 496),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
                "loadShopRotateExcelConfig",
                1128);
              v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 496),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v31 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v30, (const char (*)[9])byte_1A144D20);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v31,
                (const unsigned int *)(v2 + 120));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 496));
              *(_DWORD *)(((v2 + 496) >> 3) + 0x7FFF8000) = -117901064;
              v36 = -1;
              v17 = 0;
            }
            else
            {
              v17 = 1;
            }
          }
        }
        else
        {
          *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 304) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 304, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 304),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
            "loadShopRotateExcelConfig",
            1116);
          v16 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v2 + 304),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v2 + 80));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
          *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
          v36 = -1;
          v17 = 0;
        }
        data::ShopRotateExcelConfig::~ShopRotateExcelConfig((data::ShopRotateExcelConfig *const)(v2 + 112));
        v32 = ((v2 + 112) >> 3) + 2147450880;
        *(_WORD *)v32 = -1800;
        *(_BYTE *)(v32 + 2) = -8;
        if ( v17 != 1 )
        {
          v33 = 0;
          goto LABEL_55;
        }
        if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v2 + 80);
      }
      v33 = 1;
LABEL_55:
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      v9 = v33 == 1;
    }
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v2 + 1104));
    __asan_poison_stack_memory(v2 + 1104, 32880LL);
    if ( !v9 )
      goto LABEL_59;
  }
  v36 = 0;
LABEL_59:
  for ( i = (char *)(v2 + 624); i != (char *)(v2 + 560); std::string::~string(i) )
    i -= 32;
  if ( v40 == (char *)v2 )
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF90B0) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862741) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450956 - (((_DWORD)v4 + 2147450964) & 0xFFFFFFF8) + 4204) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_10(v2, 34240LL, v40);
  }
  return v36;
};

// Line 1137: range 000000000CB97360-000000000CB98403
int32_t __cdecl data::ShopExcelConfigMgrBase::loadShopSpecialKeysDataExcelConfig(
        data::ShopExcelConfigMgrBase *const this,
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
  data::ShopSpecialKeysDataExcelConfig *v25; // rax
  unsigned int *v26; // rcx
  data::ShopSpecialKeysDataExcelConfig *v27; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ShopSpecialKeysDataExcelConfig>,false,false>,bool> v28; // rax
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
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 6 r:1152 64 4 9 <unknown> 80 16 9 data:1155 112 32 10 paths:1138 176 32"
                        " 9 <unknown> 240 32 9 <unknown> 304 32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496 32 "
                        "9 <unknown> 560 376 25 debug_message_stream:1163 1008 32880 13 txt_file:1146";
  *(_QWORD *)(v3 + 16) = data::ShopExcelConfigMgrBase::loadShopSpecialKeysDataExcelConfig;
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
    "/txt/ShopSpecialKeysData.txt",
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
        "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
        "loadShopSpecialKeysDataExcelConfig",
        1149);
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v3 + 240),
             (const char (*)[8])byte_1A1445A0);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1A1445E0);
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
        v14 = &`vtable for'data::ShopSpecialKeysDataExcelConfig + 2;
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
          if ( data::ShopSpecialKeysDataExcelConfig::init(
                 (data::ShopSpecialKeysDataExcelConfig *const)(v3 + 80),
                 row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 560, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 560);
            v17 = std::operator<<<std::char_traits<char>>(v3 + 560, &unk_1A144A80);
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
              "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
              "loadShopSpecialKeysDataExcelConfig",
              1165);
            v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 368),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v19 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v18, (const char (*)[2])"<");
            v20 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, __for_begin);
            v21 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v20,
                    (const char (*)[11])byte_1A1446E0);
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
                    (const char (*)[13])byte_1A144720);
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
            v25 = std::move<data::ShopSpecialKeysDataExcelConfig &>((data::ShopSpecialKeysDataExcelConfig *)(v3 + 80));
            v28 = std::unordered_map<unsigned int,data::ShopSpecialKeysDataExcelConfig>::emplace<unsigned int &,data::ShopSpecialKeysDataExcelConfig>(
                    &this->shop_special_keys_data_excel_config_map,
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
                "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
                "loadShopSpecialKeysDataExcelConfig",
                1170);
              v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 496),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v30 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v29,
                      (const char (*)[14])byte_1A144AC0);
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
            "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
            "loadShopSpecialKeysDataExcelConfig",
            1158);
          v15 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 304),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 304));
          *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v16 = 0;
        }
        data::ShopSpecialKeysDataExcelConfig::~ShopSpecialKeysDataExcelConfig((data::ShopSpecialKeysDataExcelConfig *const)(v3 + 80));
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

// Line 1179: range 000000000CB98404-000000000CB989AE
int32_t __cdecl data::ShopExcelConfigMgrBase::loadConfig(
        data::ShopExcelConfigMgrBase *const this,
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
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)data::ShopExcelConfigMgrBase::loadConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  if ( data::ShopExcelConfigMgrBase::loadShopExcelConfig(this, config) )
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
      "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
      "loadConfig",
      1182);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      v5,
      (const char (*)[27])"loadShopExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( data::ShopExcelConfigMgrBase::loadShopGoodsExcelConfig(this, config) )
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
      "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
      "loadConfig",
      1187);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      v7,
      (const char (*)[32])"loadShopGoodsExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( data::ShopExcelConfigMgrBase::loadShopRotateExcelConfig(this, config) )
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
      "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
      "loadConfig",
      1192);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      v8,
      (const char (*)[33])"loadShopRotateExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else if ( data::ShopExcelConfigMgrBase::loadShopSpecialKeysDataExcelConfig(this, config) )
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
      "./src/txt_data_auto/ShopExcelConfig.gen.cpp",
      "loadConfig",
      1197);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
      v9,
      (const char (*)[42])"loadShopSpecialKeysDataExcelConfig failed");
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

// Line 1204: range 000000000CB989B0-000000000CB989C2
int32_t __cdecl data::ShopExcelConfigMgrBase::rewriteConfig(
        data::ShopExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 1209: range 000000000CB989C4-000000000CB989D6
int32_t __cdecl data::ShopExcelConfigMgrBase::finalConfig(
        data::ShopExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 1214: range 000000000CB989D8-000000000CB98B93
data::ShopExcelConfig *__fastcall data::ShopExcelConfigMgrBase::findShopExcelConfig(
        data::ShopExcelConfigMgrBase *const this,
        __int64 shop_type)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ShopExcelConfigMap *p_shop_excel_config_map; // rdx
  data::ShopExcelConfigMap *v6; // rdx
  bool v7; // al
  data::ShopExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 shop_type:1213 64 8 9 iter:1215 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ShopExcelConfigMgrBase::findShopExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = shop_type;
  p_shop_excel_config_map = &this->shop_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, shop_type);
  *(std::unordered_map<data::ShopType,data::ShopExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<data::ShopType,data::ShopExcelConfig>::find(
                                                                                       p_shop_excel_config_map,
                                                                                       (const std::unordered_map<data::ShopType,data::ShopExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->shop_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<data::ShopType,data::ShopExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<data::ShopType,data::ShopExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<data::ShopType const,data::ShopExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<const data::ShopType,data::ShopExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<const data::ShopType,data::ShopExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<data::ShopType const,data::ShopExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<const data::ShopType,data::ShopExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1227: range 000000000CB98B94-000000000CB98D4F
const data::ShopExcelConfig *__fastcall data::ShopExcelConfigMgrBase::findShopExcelConfig(
        const data::ShopExcelConfigMgrBase *const this,
        __int64 shop_type)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ShopExcelConfigMap *p_shop_excel_config_map; // rdx
  data::ShopExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::ShopExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 shop_type:1226 64 8 9 iter:1228 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ShopExcelConfigMgrBase::findShopExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = shop_type;
  p_shop_excel_config_map = &this->shop_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, shop_type);
  *(std::unordered_map<data::ShopType,data::ShopExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<data::ShopType,data::ShopExcelConfig>::find(
                                                                                             p_shop_excel_config_map,
                                                                                             (const std::unordered_map<data::ShopType,data::ShopExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->shop_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<data::ShopType,data::ShopExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<data::ShopType,data::ShopExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<data::ShopType const,data::ShopExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<const data::ShopType,data::ShopExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<const data::ShopType,data::ShopExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<data::ShopType const,data::ShopExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<const data::ShopType,data::ShopExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1240: range 000000000CB98D50-000000000CB98F0B
data::ShopGoodsExcelConfig *__fastcall data::ShopExcelConfigMgrBase::findShopGoodsExcelConfig(
        data::ShopExcelConfigMgrBase *const this,
        __int64 goods_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ShopGoodsExcelConfigMap *p_shop_goods_excel_config_map; // rdx
  data::ShopGoodsExcelConfigMap *v6; // rdx
  bool v7; // al
  data::ShopGoodsExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 goods_id:1239 64 8 9 iter:1241 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ShopExcelConfigMgrBase::findShopGoodsExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = goods_id;
  p_shop_goods_excel_config_map = &this->shop_goods_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, goods_id);
  *(std::unordered_map<unsigned int,data::ShopGoodsExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ShopGoodsExcelConfig>::find(
                                                                                          p_shop_goods_excel_config_map,
                                                                                          (const std::unordered_map<unsigned int,data::ShopGoodsExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->shop_goods_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ShopGoodsExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ShopGoodsExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ShopGoodsExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ShopGoodsExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ShopGoodsExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::ShopGoodsExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ShopGoodsExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1253: range 000000000CB98F0C-000000000CB990C7
const data::ShopGoodsExcelConfig *__fastcall data::ShopExcelConfigMgrBase::findShopGoodsExcelConfig(
        const data::ShopExcelConfigMgrBase *const this,
        __int64 goods_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ShopGoodsExcelConfigMap *p_shop_goods_excel_config_map; // rdx
  data::ShopGoodsExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::ShopGoodsExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 goods_id:1252 64 8 9 iter:1254 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ShopExcelConfigMgrBase::findShopGoodsExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = goods_id;
  p_shop_goods_excel_config_map = &this->shop_goods_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, goods_id);
  *(std::unordered_map<unsigned int,data::ShopGoodsExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ShopGoodsExcelConfig>::find(
                                                                                                p_shop_goods_excel_config_map,
                                                                                                (const std::unordered_map<unsigned int,data::ShopGoodsExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->shop_goods_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ShopGoodsExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ShopGoodsExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ShopGoodsExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ShopGoodsExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ShopGoodsExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ShopGoodsExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ShopGoodsExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1266: range 000000000CB990C8-000000000CB99283
data::ShopRotateExcelConfig *__fastcall data::ShopExcelConfigMgrBase::findShopRotateExcelConfig(
        data::ShopExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ShopRotateExcelConfigMap *p_shop_rotate_excel_config_map; // rdx
  data::ShopRotateExcelConfigMap *v6; // rdx
  bool v7; // al
  data::ShopRotateExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 id:1265 64 8 9 iter:1267 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ShopExcelConfigMgrBase::findShopRotateExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_shop_rotate_excel_config_map = &this->shop_rotate_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::ShopRotateExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ShopRotateExcelConfig>::find(
                                                                                           p_shop_rotate_excel_config_map,
                                                                                           (const std::unordered_map<unsigned int,data::ShopRotateExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->shop_rotate_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ShopRotateExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ShopRotateExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ShopRotateExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ShopRotateExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ShopRotateExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::ShopRotateExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ShopRotateExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1279: range 000000000CB99284-000000000CB9943F
const data::ShopRotateExcelConfig *__fastcall data::ShopExcelConfigMgrBase::findShopRotateExcelConfig(
        const data::ShopExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ShopRotateExcelConfigMap *p_shop_rotate_excel_config_map; // rdx
  data::ShopRotateExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::ShopRotateExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 id:1278 64 8 9 iter:1280 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ShopExcelConfigMgrBase::findShopRotateExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_shop_rotate_excel_config_map = &this->shop_rotate_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::ShopRotateExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ShopRotateExcelConfig>::find(
                                                                                                 p_shop_rotate_excel_config_map,
                                                                                                 (const std::unordered_map<unsigned int,data::ShopRotateExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->shop_rotate_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ShopRotateExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ShopRotateExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ShopRotateExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ShopRotateExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ShopRotateExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ShopRotateExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ShopRotateExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1292: range 000000000CB99440-000000000CB99601
data::ShopSpecialKeysDataExcelConfig *__fastcall data::ShopExcelConfigMgrBase::findShopSpecialKeysDataExcelConfig(
        data::ShopExcelConfigMgrBase *const this,
        __int64 goods_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ShopSpecialKeysDataExcelConfigMap *p_shop_special_keys_data_excel_config_map; // rdx
  data::ShopSpecialKeysDataExcelConfigMap *v6; // rdx
  bool v7; // al
  data::ShopSpecialKeysDataExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 goods_id:1291 64 8 9 iter:1293 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ShopExcelConfigMgrBase::findShopSpecialKeysDataExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = goods_id;
  p_shop_special_keys_data_excel_config_map = &this->shop_special_keys_data_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, goods_id);
  *(std::unordered_map<unsigned int,data::ShopSpecialKeysDataExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ShopSpecialKeysDataExcelConfig>::find(
                                                                                                    p_shop_special_keys_data_excel_config_map,
                                                                                                    (const std::unordered_map<unsigned int,data::ShopSpecialKeysDataExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->shop_special_keys_data_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ShopSpecialKeysDataExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ShopSpecialKeysDataExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ShopSpecialKeysDataExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ShopSpecialKeysDataExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ShopSpecialKeysDataExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::ShopSpecialKeysDataExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ShopSpecialKeysDataExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1305: range 000000000CB99602-000000000CB997C3
const data::ShopSpecialKeysDataExcelConfig *__fastcall data::ShopExcelConfigMgrBase::findShopSpecialKeysDataExcelConfig(
        const data::ShopExcelConfigMgrBase *const this,
        __int64 goods_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ShopSpecialKeysDataExcelConfigMap *p_shop_special_keys_data_excel_config_map; // rdx
  data::ShopSpecialKeysDataExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::ShopSpecialKeysDataExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 goods_id:1304 64 8 9 iter:1306 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ShopExcelConfigMgrBase::findShopSpecialKeysDataExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = goods_id;
  p_shop_special_keys_data_excel_config_map = &this->shop_special_keys_data_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, goods_id);
  *(std::unordered_map<unsigned int,data::ShopSpecialKeysDataExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ShopSpecialKeysDataExcelConfig>::find(p_shop_special_keys_data_excel_config_map, (const std::unordered_map<unsigned int,data::ShopSpecialKeysDataExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->shop_special_keys_data_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ShopSpecialKeysDataExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ShopSpecialKeysDataExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ShopSpecialKeysDataExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ShopSpecialKeysDataExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ShopSpecialKeysDataExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ShopSpecialKeysDataExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ShopSpecialKeysDataExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp

// Line 12: range 000000000CC7FCA4-000000000CC80017
const char *__fastcall data::enumValToStr(data::RegionShape e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::RegionShape,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::RegionShape,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
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
  map = data::getRegionShapeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::RegionShape,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::RegionShape,std::pair<std::string,std::string>>::find(
                                                                                                    map,
                                                                                                    (const std::map<data::RegionShape,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::RegionShape,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::RegionShape,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::RegionShape,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::RegionShape,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
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
    result = "INVALID_RegionShape";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::RegionShape const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::RegionShape,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 24: range 000000000CC80018-000000000CC805D0
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::RegionShape>,false,true>::pointer v10; // rax
  data::RegionShape second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::RegionShape> *m; // [rsp+18h] [rbp-188h]
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
    m = data::getRegionShapeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::RegionShape>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::RegionShape>::find(
                                                                                        m,
                                                                                        (const std::unordered_map<std::string,data::RegionShape>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::RegionShape>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::RegionShape>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::RegionShape>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RegionShape>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RegionShape>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
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
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::RegionShape>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::RegionShape>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
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

// Line 45: range 000000000CC805D1-000000000CC80C26
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  const char *v6; // rsi
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::RegionShape>,false,true>::pointer v10; // rax
  data::RegionShape second; // ecx
  char v12; // dl
  char v14[384]; // [rsp+10h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 5 it:56 96 8 9 <unknown> 128 8 4 s:44 160 32 9 <unknown> 224 32 9 <unkno"
                        "wn> 288 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::RegionShape &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::RegionShape &)::m) )
    {
      data::enumStrToVal(char const*,data::RegionShape &)::m._M_h._M_buckets = 0LL;
      data::enumStrToVal(char const*,data::RegionShape &)::m._M_h._M_bucket_count = 0LL;
      data::enumStrToVal(char const*,data::RegionShape &)::m._M_h._M_before_begin._M_nxt = 0LL;
      data::enumStrToVal(char const*,data::RegionShape &)::m._M_h._M_element_count = 0LL;
      *(_QWORD *)&data::enumStrToVal(char const*,data::RegionShape &)::m._M_h._M_rehash_policy._M_max_load_factor = 0LL;
      data::enumStrToVal(char const*,data::RegionShape &)::m._M_h._M_rehash_policy._M_next_resize = 0LL;
      data::enumStrToVal(char const*,data::RegionShape &)::m._M_h._M_single_bucket = 0LL;
      std::unordered_map<std::string,data::RegionShape>::unordered_map(&data::enumStrToVal(char const*,data::RegionShape &)::m);
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::RegionShape &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::RegionShape>::~unordered_map,
        &data::enumStrToVal(char const*,data::RegionShape &)::m,
        &_dso_handle);
    }
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::RegionShape>::iterator *)(v2 + 64) = std::unordered_map<std::string,data::RegionShape>::find(
                                                                                  &data::enumStrToVal(char const*,data::RegionShape &)::m,
                                                                                  (const std::unordered_map<std::string,data::RegionShape>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::RegionShape>::iterator *)(v2 + 96) = std::unordered_map<std::string,data::RegionShape>::end(&data::enumStrToVal(char const*,data::RegionShape &)::m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::RegionShape>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RegionShape>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RegionShape>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
        "enumStrToVal",
        59);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_iterator<std::pair<std::string const,data::RegionShape>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::RegionShape>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
      "enumStrToVal",
      48);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[14])"s is nullptr!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    result = 0xFFFFFFFFLL;
  }
  if ( v14 == (char *)v2 )
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

// Line 68: range 000000000CC80C27-000000000CC80C3D
const char *__cdecl data::getDescription(data::RegionShape e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 73: range 000000000CC80C3E-000000000CC80DF3
bool __cdecl data::isValidRegionShape(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::RegionShape,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::RegionShape,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 4 e:74 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidRegionShape;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getRegionShapeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::RegionShape,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::RegionShape,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getRegionShapeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::RegionShape,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::RegionShape,std::pair<std::string,std::string>>::find(
                                                                                                    v6,
                                                                                                    (const std::map<data::RegionShape,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::RegionShape,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::RegionShape,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 79: range 000000000CC80DF4-000000000CC80F55
bool __cdecl data::isValidRegionShapeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::RegionShape> *v5; // rcx
  const std::unordered_map<std::string,data::RegionShape> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidRegionShapeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getRegionShapeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::RegionShape>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::RegionShape>::end(v5);
  v6 = data::getRegionShapeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::RegionShape>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::RegionShape>::find(
                                                                                      v6,
                                                                                      name);
  result = std::__detail::operator!=<std::pair<std::string const,data::RegionShape>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RegionShape>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::RegionShape>,true> *)(v2 + 64));
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

// Line 84: range 000000000CC80F56-000000000CC81570
const std::unordered_map<std::string,data::RegionShape> *__cdecl data::getRegionShapeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::RegionShape> *i; // r14
  const std::unordered_map<std::string,data::RegionShape> *result; // rax
  char v6[496]; // [rsp+10h] [rbp-1F0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(448LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "9 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 4 9 "
                        "<unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 200 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::getRegionShapeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -234753535;
  v3[536862723] = -234556924;
  v3[536862724] = -234556924;
  v3[536862725] = 61956;
  v3[536862731] = -218103808;
  v3[536862732] = -202116109;
  v3[536862733] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getRegionShapeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getRegionShapeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v0);
    *(_DWORD *)(v1 + 96) = 0;
    std::pair<std::string const,data::RegionShape>::pair<char const(&)[12],data::RegionShape,true>(
      (std::pair<const std::string,data::RegionShape> *const)(v1 + 176),
      (const char (*)[12])"REGION_NONE",
      (data::RegionShape *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "REGION_NONE");
    *(_DWORD *)(v1 + 112) = 1;
    std::pair<std::string const,data::RegionShape>::pair<char const(&)[14],data::RegionShape,true>(
      (std::pair<const std::string,data::RegionShape> *const)(v1 + 216),
      (const char (*)[14])"REGION_SPHERE",
      (data::RegionShape *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, "REGION_SPHERE");
    *(_DWORD *)(v1 + 128) = 2;
    std::pair<std::string const,data::RegionShape>::pair<char const(&)[13],data::RegionShape,true>(
      (std::pair<const std::string,data::RegionShape> *const)(v1 + 256),
      (const char (*)[13])"REGION_CUBIC",
      (data::RegionShape *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, "REGION_CUBIC");
    *(_DWORD *)(v1 + 144) = 3;
    std::pair<std::string const,data::RegionShape>::pair<char const(&)[16],data::RegionShape,true>(
      (std::pair<const std::string,data::RegionShape> *const)(v1 + 296),
      (const char (*)[16])"REGION_CYLINDER",
      (data::RegionShape *)(v1 + 144));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, "REGION_CYLINDER");
    *(_DWORD *)(v1 + 160) = 4;
    std::pair<std::string const,data::RegionShape>::pair<char const(&)[15],data::RegionShape,true>(
      (std::pair<const std::string,data::RegionShape> *const)(v1 + 336),
      (const char (*)[15])"REGION_POLYGON",
      (data::RegionShape *)(v1 + 160));
    std::allocator<std::pair<std::string const,data::RegionShape>>::allocator((std::allocator<std::pair<const std::string,data::RegionShape> > *const)(v1 + 80));
    std::unordered_map<std::string,data::RegionShape>::unordered_map(
      &data::getRegionShapeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::RegionShape> >)__PAIR128__(5LL, v1 + 176),
      0LL,
      (const std::unordered_map<std::string,data::RegionShape>::hasher *)(v1 + 48),
      (const std::unordered_map<std::string,data::RegionShape>::key_equal *)(v1 + 64),
      (const std::unordered_map<std::string,data::RegionShape>::allocator_type *)(v1 + 80));
    __cxa_guard_release(&`guard variable for'data::getRegionShapeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::RegionShape>::~unordered_map,
      &data::getRegionShapeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::RegionShape>>::~allocator((std::allocator<std::pair<const std::string,data::RegionShape> > *const)(v1 + 80));
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::RegionShape> *)(v1 + 376);
          i != (std::pair<const std::string,data::RegionShape> *)(v1 + 176);
          std::pair<std::string const,data::RegionShape>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getRegionShapeNameMap[abi:cxx11](void)::m;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0LL;
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
  }
  return result;
};

// Line 97: range 000000000CC81571-000000000CC81E36
const std::map<data::RegionShape,std::pair<std::string,std::string >> *__cdecl data::getRegionShapeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::RegionShape,std::pair<std::string,std::string > > *i; // r14
  _DWORD *v5; // rax
  _DWORD *v6; // rax
  _DWORD *v7; // rax
  _DWORD *v8; // rax
  char v10[1104]; // [rsp+10h] [rbp-450h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_5(1056LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "13 32 1 9 <unknown> 48 1 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 "
                        "<unknown> 128 4 9 <unknown> 144 64 9 <unknown> 240 64 9 <unknown> 336 64 9 <unknown> 432 64 9 <u"
                        "nknown> 528 64 9 <unknown> 624 360 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::getRegionShapeEnumMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556924;
  v3[536862723] = -234556924;
  v3[536862724] = 61956;
  v3[536862726] = -219021312;
  v3[536862727] = 62194;
  v3[536862729] = -219021312;
  v3[536862730] = 62194;
  v3[536862732] = -219021312;
  v3[536862733] = 62194;
  v3[536862735] = -219021312;
  v3[536862736] = 62194;
  v3[536862738] = -219021312;
  v3[536862739] = 62194;
  v3[536862750] = -218103808;
  v3[536862751] = -202116109;
  v3[536862752] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getRegionShapeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getRegionShapeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 64, v0);
    *(_DWORD *)(v1 + 64) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[12],true>(
      (std::pair<std::string,std::string > *const)(v1 + 144),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[12])"REGION_NONE");
    std::pair<data::RegionShape const,std::pair<std::string,std::string>>::pair<data::RegionShape,true>(
      (std::pair<const data::RegionShape,std::pair<std::string,std::string > > *const)(v1 + 624),
      (data::RegionShape *)(v1 + 64),
      (const std::pair<std::string,std::string > *)(v1 + 144));
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v1 + 64);
    *(_DWORD *)(v1 + 80) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[14],true>(
      (std::pair<std::string,std::string > *const)(v1 + 240),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[14])"REGION_SPHERE");
    std::pair<data::RegionShape const,std::pair<std::string,std::string>>::pair<data::RegionShape,true>(
      (std::pair<const data::RegionShape,std::pair<std::string,std::string > > *const)(v1 + 696),
      (data::RegionShape *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 240));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[13],true>(
      (std::pair<std::string,std::string > *const)(v1 + 336),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[13])"REGION_CUBIC");
    std::pair<data::RegionShape const,std::pair<std::string,std::string>>::pair<data::RegionShape,true>(
      (std::pair<const data::RegionShape,std::pair<std::string,std::string > > *const)(v1 + 768),
      (data::RegionShape *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 336));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 3;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[16],true>(
      (std::pair<std::string,std::string > *const)(v1 + 432),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[16])"REGION_CYLINDER");
    std::pair<data::RegionShape const,std::pair<std::string,std::string>>::pair<data::RegionShape,true>(
      (std::pair<const data::RegionShape,std::pair<std::string,std::string > > *const)(v1 + 840),
      (data::RegionShape *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 432));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, v1 + 112);
    *(_DWORD *)(v1 + 128) = 4;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[15],true>(
      (std::pair<std::string,std::string > *const)(v1 + 528),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[15])"REGION_POLYGON");
    std::pair<data::RegionShape const,std::pair<std::string,std::string>>::pair<data::RegionShape,true>(
      (std::pair<const data::RegionShape,std::pair<std::string,std::string > > *const)(v1 + 912),
      (data::RegionShape *)(v1 + 128),
      (const std::pair<std::string,std::string > *)(v1 + 528));
    std::allocator<std::pair<data::RegionShape const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::RegionShape,std::pair<std::string,std::string > > > *const)(v1 + 48));
    std::map<data::RegionShape,std::pair<std::string,std::string>>::map(
      &data::getRegionShapeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::RegionShape,std::pair<std::string,std::string > > >)__PAIR128__(5LL, v1 + 624),
      (const std::less<data::RegionShape> *)(v1 + 32),
      (const std::map<data::RegionShape,std::pair<std::string,std::string >>::allocator_type *)(v1 + 48));
    __cxa_guard_release(&`guard variable for'data::getRegionShapeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::RegionShape,std::pair<std::string,std::string>>::~map,
      &data::getRegionShapeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::RegionShape const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::RegionShape,std::pair<std::string,std::string > > > *const)(v1 + 48));
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::RegionShape,std::pair<std::string,std::string > > *)(v1 + 984);
          i != (std::pair<const data::RegionShape,std::pair<std::string,std::string > > *)(v1 + 624);
          std::pair<data::RegionShape const,std::pair<std::string,std::string>>::~pair(i) )
    {
      --i;
    }
    __asan_poison_stack_memory(v1 + 624, 360LL);
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 528));
    v5 = (_DWORD *)(((v1 + 528) >> 3) + 2147450880);
    *v5 = -117901064;
    v5[1] = -117901064;
    *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 432));
    v6 = (_DWORD *)(((v1 + 432) >> 3) + 2147450880);
    *v6 = -117901064;
    v6[1] = -117901064;
    *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 336));
    v7 = (_DWORD *)(((v1 + 336) >> 3) + 2147450880);
    *v7 = -117901064;
    v7[1] = -117901064;
    *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 240));
    v8 = (_DWORD *)(((v1 + 240) >> 3) + 2147450880);
    *v8 = -117901064;
    v8[1] = -117901064;
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 144));
  }
  if ( v10 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF807C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v3 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v3 + 2147450880 - (((_DWORD)v3 + 2147450888) & 0xFFFFFFF8) + 132) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    __asan_stack_free_5(v1, 1056LL, v10);
  }
  return &data::getRegionShapeEnumMap[abi:cxx11](void)::m;
};

// Line 110: range 000000000CC81E37-000000000CC821AA
const char *__fastcall data::enumValToStr(data::EventType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::EventType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::EventType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 5 e:109 64 8 8 iter:112 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getEventTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::EventType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::EventType,std::pair<std::string,std::string>>::find(
                                                                                                  map,
                                                                                                  (const std::map<data::EventType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::EventType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::EventType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::EventType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::EventType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
      "enumValToStr",
      115);
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
    result = "INVALID_EventType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::EventType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::EventType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 122: range 000000000CC821AB-000000000CC82763
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::EventType>,false,true>::pointer v10; // rax
  data::EventType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::EventType> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:131 96 8 9 <unknown> 128 8 5 s:121 160 32 9 <unknown> 224 32 9 <unk"
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
    m = data::getEventTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::EventType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::EventType>::find(
                                                                                      m,
                                                                                      (const std::unordered_map<std::string,data::EventType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::EventType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::EventType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::EventType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::EventType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::EventType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
        "enumNameToVal",
        134);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::EventType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::EventType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
      "enumNameToVal",
      125);
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

// Line 143: range 000000000CC82764-000000000CC82DB9
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  const char *v6; // rsi
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::EventType>,false,true>::pointer v10; // rax
  data::EventType second; // ecx
  char v12; // dl
  char v14[384]; // [rsp+10h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:154 96 8 9 <unknown> 128 8 5 s:142 160 32 9 <unknown> 224 32 9 <unk"
                        "nown> 288 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::EventType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::EventType &)::m) )
    {
      data::enumStrToVal(char const*,data::EventType &)::m._M_h._M_buckets = 0LL;
      data::enumStrToVal(char const*,data::EventType &)::m._M_h._M_bucket_count = 0LL;
      data::enumStrToVal(char const*,data::EventType &)::m._M_h._M_before_begin._M_nxt = 0LL;
      data::enumStrToVal(char const*,data::EventType &)::m._M_h._M_element_count = 0LL;
      *(_QWORD *)&data::enumStrToVal(char const*,data::EventType &)::m._M_h._M_rehash_policy._M_max_load_factor = 0LL;
      data::enumStrToVal(char const*,data::EventType &)::m._M_h._M_rehash_policy._M_next_resize = 0LL;
      data::enumStrToVal(char const*,data::EventType &)::m._M_h._M_single_bucket = 0LL;
      std::unordered_map<std::string,data::EventType>::unordered_map(&data::enumStrToVal(char const*,data::EventType &)::m);
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::EventType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::EventType>::~unordered_map,
        &data::enumStrToVal(char const*,data::EventType &)::m,
        &_dso_handle);
    }
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::EventType>::iterator *)(v2 + 64) = std::unordered_map<std::string,data::EventType>::find(
                                                                                &data::enumStrToVal(char const*,data::EventType &)::m,
                                                                                (const std::unordered_map<std::string,data::EventType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::EventType>::iterator *)(v2 + 96) = std::unordered_map<std::string,data::EventType>::end(&data::enumStrToVal(char const*,data::EventType &)::m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::EventType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::EventType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::EventType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
        "enumStrToVal",
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
      v10 = std::__detail::_Node_iterator<std::pair<std::string const,data::EventType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::EventType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
      "enumStrToVal",
      146);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[14])"s is nullptr!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    result = 0xFFFFFFFFLL;
  }
  if ( v14 == (char *)v2 )
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

// Line 166: range 000000000CC82DBA-000000000CC82DD0
const char *__cdecl data::getDescription(data::EventType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 171: range 000000000CC82DD1-000000000CC82F86
bool __cdecl data::isValidEventType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::EventType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::EventType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:172 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidEventType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getEventTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::EventType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::EventType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getEventTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::EventType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::EventType,std::pair<std::string,std::string>>::find(
                                                                                                  v6,
                                                                                                  (const std::map<data::EventType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::EventType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::EventType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 177: range 000000000CC82F87-000000000CC830E8
bool __cdecl data::isValidEventTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::EventType> *v5; // rcx
  const std::unordered_map<std::string,data::EventType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidEventTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getEventTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::EventType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::EventType>::end(v5);
  v6 = data::getEventTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::EventType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::EventType>::find(
                                                                                    v6,
                                                                                    name);
  result = std::__detail::operator!=<std::pair<std::string const,data::EventType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::EventType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::EventType>,true> *)(v2 + 64));
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

// Line 182: range 000000000CC830E9-000000000CC875CA
const std::unordered_map<std::string,data::EventType> *__cdecl data::getEventTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::EventType> *i; // r14
  char v6[7728]; // [rsp+10h] [rbp-1E30h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_7(7680LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "135 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9"
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
                        " <unknown> 1872 4 9 <unknown> 1888 4 9 <unknown> 1904 4 9 <unknown> 1920 4 9 <unknown> 1936 4 9 "
                        "<unknown> 1952 4 9 <unknown> 1968 4 9 <unknown> 1984 4 9 <unknown> 2000 4 9 <unknown> 2016 4 9 <"
                        "unknown> 2032 4 9 <unknown> 2048 4 9 <unknown> 2064 4 9 <unknown> 2080 4 9 <unknown> 2096 4 9 <u"
                        "nknown> 2112 4 9 <unknown> 2128 4 9 <unknown> 2144 4 9 <unknown> 2160 4 9 <unknown> 2176 5240 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::getEventTypeNameMap[abi:cxx11];
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
  v3[536862779] = -234556924;
  v3[536862780] = -234556924;
  v3[536862781] = -234556924;
  v3[536862782] = -234556924;
  v3[536862783] = -234556924;
  v3[536862784] = -234556924;
  v3[536862785] = -234556924;
  v3[536862786] = -234556924;
  v3[536862787] = -234556924;
  v3[536862951] = -218103808;
  v3[536862952] = -202116109;
  v3[536862953] = -202116109;
  v3[536862954] = -202116109;
  v3[536862955] = -202116109;
  v3[536862956] = -202116109;
  v3[536862957] = -202116109;
  v3[536862958] = -202116109;
  v3[536862959] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getEventTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getEventTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string const,data::EventType>::pair<char const(&)[11],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 2176),
      (const char (*)[11])"EVENT_NONE",
      (data::EventType *)(v1 + 80));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, "EVENT_NONE");
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string const,data::EventType>::pair<char const(&)[22],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 2216),
      (const char (*)[22])"EVENT_ANY_MONSTER_DIE",
      (data::EventType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "EVENT_ANY_MONSTER_DIE");
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string const,data::EventType>::pair<char const(&)[21],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 2256),
      (const char (*)[21])"EVENT_ANY_GADGET_DIE",
      (data::EventType *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, "EVENT_ANY_GADGET_DIE");
    *(_DWORD *)(v1 + 128) = 3;
    std::pair<std::string const,data::EventType>::pair<char const(&)[22],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 2296),
      (const char (*)[22])"EVENT_VARIABLE_CHANGE",
      (data::EventType *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, "EVENT_VARIABLE_CHANGE");
    *(_DWORD *)(v1 + 144) = 4;
    std::pair<std::string const,data::EventType>::pair<char const(&)[19],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 2336),
      (const char (*)[19])"EVENT_ENTER_REGION",
      (data::EventType *)(v1 + 144));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, "EVENT_ENTER_REGION");
    *(_DWORD *)(v1 + 160) = 5;
    std::pair<std::string const,data::EventType>::pair<char const(&)[19],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 2376),
      (const char (*)[19])"EVENT_LEAVE_REGION",
      (data::EventType *)(v1 + 160));
    if ( *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 176, "EVENT_LEAVE_REGION");
    *(_DWORD *)(v1 + 176) = 6;
    std::pair<std::string const,data::EventType>::pair<char const(&)[20],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 2416),
      (const char (*)[20])"EVENT_GADGET_CREATE",
      (data::EventType *)(v1 + 176));
    if ( *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 192, "EVENT_GADGET_CREATE");
    *(_DWORD *)(v1 + 192) = 7;
    std::pair<std::string const,data::EventType>::pair<char const(&)[26],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 2456),
      (const char (*)[26])"EVENT_GADGET_STATE_CHANGE",
      (data::EventType *)(v1 + 192));
    if ( *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 208, "EVENT_GADGET_STATE_CHANGE");
    *(_DWORD *)(v1 + 208) = 8;
    std::pair<std::string const,data::EventType>::pair<char const(&)[21],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 2496),
      (const char (*)[21])"EVENT_DUNGEON_SETTLE",
      (data::EventType *)(v1 + 208));
    if ( *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 224, "EVENT_DUNGEON_SETTLE");
    *(_DWORD *)(v1 + 224) = 9;
    std::pair<std::string const,data::EventType>::pair<char const(&)[20],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 2536),
      (const char (*)[20])"EVENT_SELECT_OPTION",
      (data::EventType *)(v1 + 224));
    if ( *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 240, "EVENT_SELECT_OPTION");
    *(_DWORD *)(v1 + 240) = 10;
    std::pair<std::string const,data::EventType>::pair<char const(&)[21],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 2576),
      (const char (*)[21])"EVENT_CLIENT_EXECUTE",
      (data::EventType *)(v1 + 240));
    if ( *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 256, "EVENT_CLIENT_EXECUTE");
    *(_DWORD *)(v1 + 256) = 11;
    std::pair<std::string const,data::EventType>::pair<char const(&)[23],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 2616),
      (const char (*)[23])"EVENT_ANY_MONSTER_LIVE",
      (data::EventType *)(v1 + 256));
    if ( *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 272, "EVENT_ANY_MONSTER_LIVE");
    *(_DWORD *)(v1 + 272) = 12;
    std::pair<std::string const,data::EventType>::pair<char const(&)[33],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 2656),
      (const char (*)[33])"EVENT_SPECIFIC_MONSTER_HP_CHANGE",
      (data::EventType *)(v1 + 272));
    if ( *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 288, "EVENT_SPECIFIC_MONSTER_HP_CHANGE");
    *(_DWORD *)(v1 + 288) = 13;
    std::pair<std::string const,data::EventType>::pair<char const(&)[40],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 2696),
      (const char (*)[40])"EVENT_CITY_LEVELUP_UNLOCK_DUNGEON_ENTRY",
      (data::EventType *)(v1 + 288));
    if ( *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 304, "EVENT_CITY_LEVELUP_UNLOCK_DUNGEON_ENTRY");
    *(_DWORD *)(v1 + 304) = 14;
    std::pair<std::string const,data::EventType>::pair<char const(&)[32],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 2736),
      (const char (*)[32])"EVENT_DUNGEON_BROADCAST_ONTIMER",
      (data::EventType *)(v1 + 304));
    if ( *(_BYTE *)(((v1 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 320) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 320, "EVENT_DUNGEON_BROADCAST_ONTIMER");
    *(_DWORD *)(v1 + 320) = 15;
    std::pair<std::string const,data::EventType>::pair<char const(&)[18],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 2776),
      (const char (*)[18])"EVENT_TIMER_EVENT",
      (data::EventType *)(v1 + 320));
    if ( *(_BYTE *)(((v1 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 336) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 336, "EVENT_TIMER_EVENT");
    *(_DWORD *)(v1 + 336) = 16;
    std::pair<std::string const,data::EventType>::pair<char const(&)[24],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 2816),
      (const char (*)[24])"EVENT_CHALLENGE_SUCCESS",
      (data::EventType *)(v1 + 336));
    if ( *(_BYTE *)(((v1 + 352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 352) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 352, "EVENT_CHALLENGE_SUCCESS");
    *(_DWORD *)(v1 + 352) = 17;
    std::pair<std::string const,data::EventType>::pair<char const(&)[21],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 2856),
      (const char (*)[21])"EVENT_CHALLENGE_FAIL",
      (data::EventType *)(v1 + 352));
    if ( *(_BYTE *)(((v1 + 368) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 368) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 368, "EVENT_CHALLENGE_FAIL");
    *(_DWORD *)(v1 + 368) = 18;
    std::pair<std::string const,data::EventType>::pair<char const(&)[24],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 2896),
      (const char (*)[24])"EVENT_SEAL_BATTLE_BEGIN",
      (data::EventType *)(v1 + 368));
    if ( *(_BYTE *)(((v1 + 384) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 384) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 384, "EVENT_SEAL_BATTLE_BEGIN");
    *(_DWORD *)(v1 + 384) = 19;
    std::pair<std::string const,data::EventType>::pair<char const(&)[22],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 2936),
      (const char (*)[22])"EVENT_SEAL_BATTLE_END",
      (data::EventType *)(v1 + 384));
    if ( *(_BYTE *)(((v1 + 400) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 400) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 400, "EVENT_SEAL_BATTLE_END");
    *(_DWORD *)(v1 + 400) = 20;
    std::pair<std::string const,data::EventType>::pair<char const(&)[13],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 2976),
      (const char (*)[13])"EVENT_GATHER",
      (data::EventType *)(v1 + 400));
    if ( *(_BYTE *)(((v1 + 416) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 416) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 416, "EVENT_GATHER");
    *(_DWORD *)(v1 + 416) = 21;
    std::pair<std::string const,data::EventType>::pair<char const(&)[19],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 3016),
      (const char (*)[19])"EVENT_QUEST_FINISH",
      (data::EventType *)(v1 + 416));
    if ( *(_BYTE *)(((v1 + 432) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 432) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 432, "EVENT_QUEST_FINISH");
    *(_DWORD *)(v1 + 432) = 22;
    std::pair<std::string const,data::EventType>::pair<char const(&)[21],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 3056),
      (const char (*)[21])"EVENT_MONSTER_BATTLE",
      (data::EventType *)(v1 + 432));
    if ( *(_BYTE *)(((v1 + 448) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 448) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 448, "EVENT_MONSTER_BATTLE");
    *(_DWORD *)(v1 + 448) = 23;
    std::pair<std::string const,data::EventType>::pair<char const(&)[19],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 3096),
      (const char (*)[19])"EVENT_CITY_LEVELUP",
      (data::EventType *)(v1 + 448));
    if ( *(_BYTE *)(((v1 + 464) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 464) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 464, "EVENT_CITY_LEVELUP");
    *(_DWORD *)(v1 + 464) = 24;
    std::pair<std::string const,data::EventType>::pair<char const(&)[19],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 3136),
      (const char (*)[19])"EVENT_CUTSCENE_END",
      (data::EventType *)(v1 + 464));
    if ( *(_BYTE *)(((v1 + 480) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 480) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 480, "EVENT_CUTSCENE_END");
    *(_DWORD *)(v1 + 480) = 25;
    std::pair<std::string const,data::EventType>::pair<char const(&)[27],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 3176),
      (const char (*)[27])"EVENT_AVATAR_NEAR_PLATFORM",
      (data::EventType *)(v1 + 480));
    if ( *(_BYTE *)(((v1 + 496) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 496) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 496, "EVENT_AVATAR_NEAR_PLATFORM");
    *(_DWORD *)(v1 + 496) = 26;
    std::pair<std::string const,data::EventType>::pair<char const(&)[27],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 3216),
      (const char (*)[27])"EVENT_PLATFORM_REACH_POINT",
      (data::EventType *)(v1 + 496));
    if ( *(_BYTE *)(((v1 + 512) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 512) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 512, "EVENT_PLATFORM_REACH_POINT");
    *(_DWORD *)(v1 + 512) = 27;
    std::pair<std::string const,data::EventType>::pair<char const(&)[25],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 3256),
      (const char (*)[25])"EVENT_UNLOCK_TRANS_POINT",
      (data::EventType *)(v1 + 512));
    if ( *(_BYTE *)(((v1 + 528) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 528) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 528, "EVENT_UNLOCK_TRANS_POINT");
    *(_DWORD *)(v1 + 528) = 28;
    std::pair<std::string const,data::EventType>::pair<char const(&)[18],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 3296),
      (const char (*)[18])"EVENT_QUEST_START",
      (data::EventType *)(v1 + 528));
    if ( *(_BYTE *)(((v1 + 544) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 544) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 544, "EVENT_QUEST_START");
    *(_DWORD *)(v1 + 544) = 29;
    std::pair<std::string const,data::EventType>::pair<char const(&)[17],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 3336),
      (const char (*)[17])"EVENT_GROUP_LOAD",
      (data::EventType *)(v1 + 544));
    if ( *(_BYTE *)(((v1 + 560) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 560) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 560, "EVENT_GROUP_LOAD");
    *(_DWORD *)(v1 + 560) = 30;
    std::pair<std::string const,data::EventType>::pair<char const(&)[24],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 3376),
      (const char (*)[24])"EVENT_GROUP_WILL_UNLOAD",
      (data::EventType *)(v1 + 560));
    if ( *(_BYTE *)(((v1 + 576) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 576) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 576, "EVENT_GROUP_WILL_UNLOAD");
    *(_DWORD *)(v1 + 576) = 31;
    std::pair<std::string const,data::EventType>::pair<char const(&)[25],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 3416),
      (const char (*)[25])"EVENT_GROUP_WILL_REFRESH",
      (data::EventType *)(v1 + 576));
    if ( *(_BYTE *)(((v1 + 592) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 592) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 592, "EVENT_GROUP_WILL_REFRESH");
    *(_DWORD *)(v1 + 592) = 32;
    std::pair<std::string const,data::EventType>::pair<char const(&)[20],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 3456),
      (const char (*)[20])"EVENT_GROUP_REFRESH",
      (data::EventType *)(v1 + 592));
    if ( *(_BYTE *)(((v1 + 608) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 608) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 608, "EVENT_GROUP_REFRESH");
    *(_DWORD *)(v1 + 608) = 33;
    std::pair<std::string const,data::EventType>::pair<char const(&)[25],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 3496),
      (const char (*)[25])"EVENT_DUNGEON_REWARD_GET",
      (data::EventType *)(v1 + 608));
    if ( *(_BYTE *)(((v1 + 624) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 624) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 624, "EVENT_DUNGEON_REWARD_GET");
    *(_DWORD *)(v1 + 624) = 34;
    std::pair<std::string const,data::EventType>::pair<char const(&)[32],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 3536),
      (const char (*)[32])"EVENT_SPECIFIC_GADGET_HP_CHANGE",
      (data::EventType *)(v1 + 624));
    if ( *(_BYTE *)(((v1 + 640) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 640) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 640, "EVENT_SPECIFIC_GADGET_HP_CHANGE");
    *(_DWORD *)(v1 + 640) = 35;
    std::pair<std::string const,data::EventType>::pair<char const(&)[24],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 3576),
      (const char (*)[24])"EVENT_MONSTER_TIDE_OVER",
      (data::EventType *)(v1 + 640));
    if ( *(_BYTE *)(((v1 + 656) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 656) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 656, "EVENT_MONSTER_TIDE_OVER");
    *(_DWORD *)(v1 + 656) = 36;
    std::pair<std::string const,data::EventType>::pair<char const(&)[26],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 3616),
      (const char (*)[26])"EVENT_MONSTER_TIDE_CREATE",
      (data::EventType *)(v1 + 656));
    if ( *(_BYTE *)(((v1 + 672) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 672) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 672, "EVENT_MONSTER_TIDE_CREATE");
    *(_DWORD *)(v1 + 672) = 37;
    std::pair<std::string const,data::EventType>::pair<char const(&)[23],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 3656),
      (const char (*)[23])"EVENT_MONSTER_TIDE_DIE",
      (data::EventType *)(v1 + 672));
    if ( *(_BYTE *)(((v1 + 688) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 688) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 688, "EVENT_MONSTER_TIDE_DIE");
    *(_DWORD *)(v1 + 688) = 38;
    std::pair<std::string const,data::EventType>::pair<char const(&)[27],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 3696),
      (const char (*)[27])"EVENT_SEALAMP_PHASE_CHANGE",
      (data::EventType *)(v1 + 688));
    if ( *(_BYTE *)(((v1 + 704) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 704) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 704, "EVENT_SEALAMP_PHASE_CHANGE");
    *(_DWORD *)(v1 + 704) = 39;
    std::pair<std::string const,data::EventType>::pair<char const(&)[30],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 3736),
      (const char (*)[30])"EVENT_BLOSSOM_PROGRESS_FINISH",
      (data::EventType *)(v1 + 704));
    if ( *(_BYTE *)(((v1 + 720) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 720) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 720, "EVENT_BLOSSOM_PROGRESS_FINISH");
    *(_DWORD *)(v1 + 720) = 40;
    std::pair<std::string const,data::EventType>::pair<char const(&)[24],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 3776),
      (const char (*)[24])"EVENT_BLOSSOM_CHEST_DIE",
      (data::EventType *)(v1 + 720));
    if ( *(_BYTE *)(((v1 + 736) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 736) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 736, "EVENT_BLOSSOM_CHEST_DIE");
    *(_DWORD *)(v1 + 736) = 41;
    std::pair<std::string const,data::EventType>::pair<char const(&)[24],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 3816),
      (const char (*)[24])"EVENT_GADGET_PLAY_START",
      (data::EventType *)(v1 + 736));
    if ( *(_BYTE *)(((v1 + 752) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 752) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 752, "EVENT_GADGET_PLAY_START");
    *(_DWORD *)(v1 + 752) = 42;
    std::pair<std::string const,data::EventType>::pair<char const(&)[27],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 3856),
      (const char (*)[27])"EVENT_GADGET_PLAY_START_CD",
      (data::EventType *)(v1 + 752));
    if ( *(_BYTE *)(((v1 + 768) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 768) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 768, "EVENT_GADGET_PLAY_START_CD");
    *(_DWORD *)(v1 + 768) = 43;
    std::pair<std::string const,data::EventType>::pair<char const(&)[23],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 3896),
      (const char (*)[23])"EVENT_GADGET_PLAY_STOP",
      (data::EventType *)(v1 + 768));
    if ( *(_BYTE *)(((v1 + 784) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 784) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 784, "EVENT_GADGET_PLAY_STOP");
    *(_DWORD *)(v1 + 784) = 44;
    std::pair<std::string const,data::EventType>::pair<char const(&)[24],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 3936),
      (const char (*)[24])"EVENT_GADGET_LUA_NOTIFY",
      (data::EventType *)(v1 + 784));
    if ( *(_BYTE *)(((v1 + 800) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 800) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 800, "EVENT_GADGET_LUA_NOTIFY");
    *(_DWORD *)(v1 + 800) = 45;
    std::pair<std::string const,data::EventType>::pair<char const(&)[22],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 3976),
      (const char (*)[22])"EVENT_MP_PLAY_PREPARE",
      (data::EventType *)(v1 + 800));
    if ( *(_BYTE *)(((v1 + 816) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 816) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 816, "EVENT_MP_PLAY_PREPARE");
    *(_DWORD *)(v1 + 816) = 46;
    std::pair<std::string const,data::EventType>::pair<char const(&)[21],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 4016),
      (const char (*)[21])"EVENT_MP_PLAY_BATTLE",
      (data::EventType *)(v1 + 816));
    if ( *(_BYTE *)(((v1 + 832) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 832) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 832, "EVENT_MP_PLAY_BATTLE");
    *(_DWORD *)(v1 + 832) = 47;
    std::pair<std::string const,data::EventType>::pair<char const(&)[32],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 4056),
      (const char (*)[32])"EVENT_MP_PLAY_PREPARE_INTERRUPT",
      (data::EventType *)(v1 + 832));
    if ( *(_BYTE *)(((v1 + 848) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 848) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 848, "EVENT_MP_PLAY_PREPARE_INTERRUPT");
    *(_DWORD *)(v1 + 848) = 48;
    std::pair<std::string const,data::EventType>::pair<char const(&)[24],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 4096),
      (const char (*)[24])"EVENT_SELECT_DIFFICULTY",
      (data::EventType *)(v1 + 848));
    if ( *(_BYTE *)(((v1 + 864) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 864) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 864, "EVENT_SELECT_DIFFICULTY");
    *(_DWORD *)(v1 + 864) = 49;
    std::pair<std::string const,data::EventType>::pair<char const(&)[33],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 4136),
      (const char (*)[33])"EVENT_SCENE_MP_PLAY_BATTLE_STATE",
      (data::EventType *)(v1 + 864));
    if ( *(_BYTE *)(((v1 + 880) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 880) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 880, "EVENT_SCENE_MP_PLAY_BATTLE_STATE");
    *(_DWORD *)(v1 + 880) = 50;
    std::pair<std::string const,data::EventType>::pair<char const(&)[40],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 4176),
      (const char (*)[40])"EVENT_SCENE_MP_PLAY_BATTLE_STAGE_CHANGE",
      (data::EventType *)(v1 + 880));
    if ( *(_BYTE *)(((v1 + 896) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 896) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 896, "EVENT_SCENE_MP_PLAY_BATTLE_STAGE_CHANGE");
    *(_DWORD *)(v1 + 896) = 51;
    std::pair<std::string const,data::EventType>::pair<char const(&)[34],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 4216),
      (const char (*)[34])"EVENT_SCENE_MP_PLAY_BATTLE_RESULT",
      (data::EventType *)(v1 + 896));
    if ( *(_BYTE *)(((v1 + 912) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 912) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 912, "EVENT_SCENE_MP_PLAY_BATTLE_RESULT");
    *(_DWORD *)(v1 + 912) = 52;
    std::pair<std::string const,data::EventType>::pair<char const(&)[36],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 4256),
      (const char (*)[36])"EVENT_SEAL_BATTLE_PROGRESS_DECREASE",
      (data::EventType *)(v1 + 912));
    if ( *(_BYTE *)(((v1 + 928) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 928) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 928, "EVENT_SEAL_BATTLE_PROGRESS_DECREASE");
    *(_DWORD *)(v1 + 928) = 53;
    std::pair<std::string const,data::EventType>::pair<char const(&)[25],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 4296),
      (const char (*)[25])"EVENT_GENERAL_REWARD_DIE",
      (data::EventType *)(v1 + 928));
    if ( *(_BYTE *)(((v1 + 944) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 944) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 944, "EVENT_GENERAL_REWARD_DIE");
    *(_DWORD *)(v1 + 944) = 54;
    std::pair<std::string const,data::EventType>::pair<char const(&)[37],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 4336),
      (const char (*)[37])"EVENT_SCENE_MP_PLAY_BATTLE_INTERRUPT",
      (data::EventType *)(v1 + 944));
    if ( *(_BYTE *)(((v1 + 960) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 960) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 960, "EVENT_SCENE_MP_PLAY_BATTLE_INTERRUPT");
    *(_DWORD *)(v1 + 960) = 55;
    std::pair<std::string const,data::EventType>::pair<char const(&)[37],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 4376),
      (const char (*)[37])"EVENT_MONSTER_DIE_BEFORE_LEAVE_SCENE",
      (data::EventType *)(v1 + 960));
    if ( *(_BYTE *)(((v1 + 976) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 976) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 976, "EVENT_MONSTER_DIE_BEFORE_LEAVE_SCENE");
    *(_DWORD *)(v1 + 976) = 56;
    std::pair<std::string const,data::EventType>::pair<char const(&)[25],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 4416),
      (const char (*)[25])"EVENT_SCENE_MP_PLAY_OPEN",
      (data::EventType *)(v1 + 976));
    if ( *(_BYTE *)(((v1 + 992) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 992) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 992, "EVENT_SCENE_MP_PLAY_OPEN");
    *(_DWORD *)(v1 + 992) = 57;
    std::pair<std::string const,data::EventType>::pair<char const(&)[23],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 4456),
      (const char (*)[23])"EVENT_OFFERING_LEVELUP",
      (data::EventType *)(v1 + 992));
    if ( *(_BYTE *)(((v1 + 1008) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1008) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1008, "EVENT_OFFERING_LEVELUP");
    *(_DWORD *)(v1 + 1008) = 58;
    std::pair<std::string const,data::EventType>::pair<char const(&)[21],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 4496),
      (const char (*)[21])"EVENT_DUNGEON_REVIVE",
      (data::EventType *)(v1 + 1008));
    if ( *(_BYTE *)(((v1 + 1024) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1024) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1024, "EVENT_DUNGEON_REVIVE");
    *(_DWORD *)(v1 + 1024) = 59;
    std::pair<std::string const,data::EventType>::pair<char const(&)[35],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 4536),
      (const char (*)[35])"EVENT_SCENE_MP_PLAY_ALL_AVATAR_DIE",
      (data::EventType *)(v1 + 1024));
    if ( *(_BYTE *)(((v1 + 1040) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1040) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1040, "EVENT_SCENE_MP_PLAY_ALL_AVATAR_DIE");
    *(_DWORD *)(v1 + 1040) = 60;
    std::pair<std::string const,data::EventType>::pair<char const(&)[29],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 4576),
      (const char (*)[29])"EVENT_DUNGEON_ALL_AVATAR_DIE",
      (data::EventType *)(v1 + 1040));
    if ( *(_BYTE *)(((v1 + 1056) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1056) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1056, "EVENT_DUNGEON_ALL_AVATAR_DIE");
    *(_DWORD *)(v1 + 1056) = 61;
    std::pair<std::string const,data::EventType>::pair<char const(&)[27],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 4616),
      (const char (*)[27])"EVENT_GENERAL_REWARD_TAKEN",
      (data::EventType *)(v1 + 1056));
    if ( *(_BYTE *)(((v1 + 1072) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1072) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1072, "EVENT_GENERAL_REWARD_TAKEN");
    *(_DWORD *)(v1 + 1072) = 62;
    std::pair<std::string const,data::EventType>::pair<char const(&)[32],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 4656),
      (const char (*)[32])"EVENT_PLATFORM_REACH_ARRAYPOINT",
      (data::EventType *)(v1 + 1072));
    if ( *(_BYTE *)(((v1 + 1088) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1088) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1088, "EVENT_PLATFORM_REACH_ARRAYPOINT");
    *(_DWORD *)(v1 + 1088) = 63;
    std::pair<std::string const,data::EventType>::pair<char const(&)[38],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 4696),
      (const char (*)[38])"EVENT_SCENE_MULTISTAGE_PLAY_STAGE_END",
      (data::EventType *)(v1 + 1088));
    if ( *(_BYTE *)(((v1 + 1104) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1104) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1104, "EVENT_SCENE_MULTISTAGE_PLAY_STAGE_END");
    *(_DWORD *)(v1 + 1104) = 64;
    std::pair<std::string const,data::EventType>::pair<char const(&)[42],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 4736),
      (const char (*)[42])"EVENT_SCENE_MULTISTAGE_PLAY_END_STAGE_REQ",
      (data::EventType *)(v1 + 1104));
    if ( *(_BYTE *)(((v1 + 1120) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1120) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1120, "EVENT_SCENE_MULTISTAGE_PLAY_END_STAGE_REQ");
    *(_DWORD *)(v1 + 1120) = 65;
    std::pair<std::string const,data::EventType>::pair<char const(&)[29],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 4776),
      (const char (*)[29])"EVENT_MECHANICUS_PICKED_CARD",
      (data::EventType *)(v1 + 1120));
    if ( *(_BYTE *)(((v1 + 1136) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1136) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1136, "EVENT_MECHANICUS_PICKED_CARD");
    *(_DWORD *)(v1 + 1136) = 66;
    std::pair<std::string const,data::EventType>::pair<char const(&)[29],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 4816),
      (const char (*)[29])"EVENT_POOL_MONSTER_TIDE_OVER",
      (data::EventType *)(v1 + 1136));
    if ( *(_BYTE *)(((v1 + 1152) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1152) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1152, "EVENT_POOL_MONSTER_TIDE_OVER");
    *(_DWORD *)(v1 + 1152) = 67;
    std::pair<std::string const,data::EventType>::pair<char const(&)[31],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 4856),
      (const char (*)[31])"EVENT_POOL_MONSTER_TIDE_CREATE",
      (data::EventType *)(v1 + 1152));
    if ( *(_BYTE *)(((v1 + 1168) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1168) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1168, "EVENT_POOL_MONSTER_TIDE_CREATE");
    *(_DWORD *)(v1 + 1168) = 68;
    std::pair<std::string const,data::EventType>::pair<char const(&)[28],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 4896),
      (const char (*)[28])"EVENT_POOL_MONSTER_TIDE_DIE",
      (data::EventType *)(v1 + 1168));
    if ( *(_BYTE *)(((v1 + 1184) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1184) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1184, "EVENT_POOL_MONSTER_TIDE_DIE");
    *(_DWORD *)(v1 + 1184) = 69;
    std::pair<std::string const,data::EventType>::pair<char const(&)[30],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 4936),
      (const char (*)[30])"EVENT_DUNGEON_AVATAR_SLIP_DIE",
      (data::EventType *)(v1 + 1184));
    if ( *(_BYTE *)(((v1 + 1200) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1200) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1200, "EVENT_DUNGEON_AVATAR_SLIP_DIE");
    *(_DWORD *)(v1 + 1200) = 70;
    std::pair<std::string const,data::EventType>::pair<char const(&)[20],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 4976),
      (const char (*)[20])"EVENT_GALLERY_START",
      (data::EventType *)(v1 + 1200));
    if ( *(_BYTE *)(((v1 + 1216) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1216) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1216, "EVENT_GALLERY_START");
    *(_DWORD *)(v1 + 1216) = 71;
    std::pair<std::string const,data::EventType>::pair<char const(&)[19],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 5016),
      (const char (*)[19])"EVENT_GALLERY_STOP",
      (data::EventType *)(v1 + 1216));
    if ( *(_BYTE *)(((v1 + 1232) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1232) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1232, "EVENT_GALLERY_STOP");
    *(_DWORD *)(v1 + 1232) = 72;
    std::pair<std::string const,data::EventType>::pair<char const(&)[21],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 5056),
      (const char (*)[21])"EVENT_TIME_AXIS_PASS",
      (data::EventType *)(v1 + 1232));
    if ( *(_BYTE *)(((v1 + 1248) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1248) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1248, "EVENT_TIME_AXIS_PASS");
    *(_DWORD *)(v1 + 1248) = 73;
    std::pair<std::string const,data::EventType>::pair<char const(&)[42],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 5096),
      (const char (*)[42])"EVENT_FLEUR_FAIR_DUNGEON_ALL_PLAYER_ENTER",
      (data::EventType *)(v1 + 1248));
    if ( *(_BYTE *)(((v1 + 1264) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1264) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1264, "EVENT_FLEUR_FAIR_DUNGEON_ALL_PLAYER_ENTER");
    *(_DWORD *)(v1 + 1264) = 74;
    std::pair<std::string const,data::EventType>::pair<char const(&)[22],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 5136),
      (const char (*)[22])"EVENT_GADGETTALK_DONE",
      (data::EventType *)(v1 + 1264));
    if ( *(_BYTE *)(((v1 + 1280) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1280) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1280, "EVENT_GADGETTALK_DONE");
    *(_DWORD *)(v1 + 1280) = 75;
    std::pair<std::string const,data::EventType>::pair<char const(&)[20],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 5176),
      (const char (*)[20])"EVENT_SET_GAME_TIME",
      (data::EventType *)(v1 + 1280));
    if ( *(_BYTE *)(((v1 + 1296) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1296) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1296, "EVENT_SET_GAME_TIME");
    *(_DWORD *)(v1 + 1296) = 76;
    std::pair<std::string const,data::EventType>::pair<char const(&)[32],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 5216),
      (const char (*)[32])"EVENT_HIDE_AND_SEEK_PLAYER_QUIT",
      (data::EventType *)(v1 + 1296));
    if ( *(_BYTE *)(((v1 + 1312) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1312) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1312, "EVENT_HIDE_AND_SEEK_PLAYER_QUIT");
    *(_DWORD *)(v1 + 1312) = 77;
    std::pair<std::string const,data::EventType>::pair<char const(&)[17],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 5256),
      (const char (*)[17])"EVENT_AVATAR_DIE",
      (data::EventType *)(v1 + 1312));
    if ( *(_BYTE *)(((v1 + 1328) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1328) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1328, "EVENT_AVATAR_DIE");
    *(_DWORD *)(v1 + 1328) = 78;
    std::pair<std::string const,data::EventType>::pair<char const(&)[40],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 5296),
      (const char (*)[40])"EVENT_SCENE_MULTISTAGE_PLAY_STAGE_START",
      (data::EventType *)(v1 + 1328));
    if ( *(_BYTE *)(((v1 + 1344) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1344) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1344, "EVENT_SCENE_MULTISTAGE_PLAY_STAGE_START");
    *(_DWORD *)(v1 + 1344) = 79;
    std::pair<std::string const,data::EventType>::pair<char const(&)[28],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 5336),
      (const char (*)[28])"EVENT_GALLERY_PROGRESS_PASS",
      (data::EventType *)(v1 + 1344));
    if ( *(_BYTE *)(((v1 + 1360) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1360) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1360, "EVENT_GALLERY_PROGRESS_PASS");
    *(_DWORD *)(v1 + 1360) = 80;
    std::pair<std::string const,data::EventType>::pair<char const(&)[29],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 5376),
      (const char (*)[29])"EVENT_GALLERY_PROGRESS_EMPTY",
      (data::EventType *)(v1 + 1360));
    if ( *(_BYTE *)(((v1 + 1376) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1376) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1376, "EVENT_GALLERY_PROGRESS_EMPTY");
    *(_DWORD *)(v1 + 1376) = 81;
    std::pair<std::string const,data::EventType>::pair<char const(&)[28],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 5416),
      (const char (*)[28])"EVENT_GALLERY_PROGRESS_FULL",
      (data::EventType *)(v1 + 1376));
    if ( *(_BYTE *)(((v1 + 1392) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1392) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1392, "EVENT_GALLERY_PROGRESS_FULL");
    *(_DWORD *)(v1 + 1392) = 82;
    std::pair<std::string const,data::EventType>::pair<char const(&)[27],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 5456),
      (const char (*)[27])"EVENT_HUNTING_FINISH_FINAL",
      (data::EventType *)(v1 + 1392));
    if ( *(_BYTE *)(((v1 + 1408) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1408) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1408, "EVENT_HUNTING_FINISH_FINAL");
    *(_DWORD *)(v1 + 1408) = 83;
    std::pair<std::string const,data::EventType>::pair<char const(&)[32],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 5496),
      (const char (*)[32])"EVENT_USE_WIDGET_TOY_FOX_CAMERA",
      (data::EventType *)(v1 + 1408));
    if ( *(_BYTE *)(((v1 + 1424) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1424) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1424, "EVENT_USE_WIDGET_TOY_FOX_CAMERA");
    *(_DWORD *)(v1 + 1424) = 84;
    std::pair<std::string const,data::EventType>::pair<char const(&)[26],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 5536),
      (const char (*)[26])"EVENT_LUNA_RITE_SACRIFICE",
      (data::EventType *)(v1 + 1424));
    if ( *(_BYTE *)(((v1 + 1440) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1440) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1440, "EVENT_LUNA_RITE_SACRIFICE");
    *(_DWORD *)(v1 + 1440) = 85;
    std::pair<std::string const,data::EventType>::pair<char const(&)[29],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 5576),
      (const char (*)[29])"EVENT_SUMO_SWITCH_TEAM_EVENT",
      (data::EventType *)(v1 + 1440));
    if ( *(_BYTE *)(((v1 + 1456) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1456) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1456, "EVENT_SUMO_SWITCH_TEAM_EVENT");
    *(_DWORD *)(v1 + 1456) = 86;
    std::pair<std::string const,data::EventType>::pair<char const(&)[20],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 5616),
      (const char (*)[20])"EVENT_FISHING_START",
      (data::EventType *)(v1 + 1456));
    if ( *(_BYTE *)(((v1 + 1472) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1472) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1472, "EVENT_FISHING_START");
    *(_DWORD *)(v1 + 1472) = 87;
    std::pair<std::string const,data::EventType>::pair<char const(&)[19],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 5656),
      (const char (*)[19])"EVENT_FISHING_STOP",
      (data::EventType *)(v1 + 1472));
    if ( *(_BYTE *)(((v1 + 1488) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1488) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1488, "EVENT_FISHING_STOP");
    *(_DWORD *)(v1 + 1488) = 88;
    std::pair<std::string const,data::EventType>::pair<char const(&)[25],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 5696),
      (const char (*)[25])"EVENT_FISHING_QTE_FINISH",
      (data::EventType *)(v1 + 1488));
    if ( *(_BYTE *)(((v1 + 1504) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1504) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1504, "EVENT_FISHING_QTE_FINISH");
    *(_DWORD *)(v1 + 1504) = 89;
    std::pair<std::string const,data::EventType>::pair<char const(&)[27],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 5736),
      (const char (*)[27])"EVENT_FISHING_TIMEOUT_FLEE",
      (data::EventType *)(v1 + 1504));
    if ( *(_BYTE *)(((v1 + 1520) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1520) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1520, "EVENT_FISHING_TIMEOUT_FLEE");
    *(_DWORD *)(v1 + 1520) = 90;
    std::pair<std::string const,data::EventType>::pair<char const(&)[30],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 5776),
      (const char (*)[30])"EVENT_ROGUE_CELL_STATE_CHANGE",
      (data::EventType *)(v1 + 1520));
    if ( *(_BYTE *)(((v1 + 1536) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1536) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1536, "EVENT_ROGUE_CELL_STATE_CHANGE");
    *(_DWORD *)(v1 + 1536) = 91;
    std::pair<std::string const,data::EventType>::pair<char const(&)[27],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 5816),
      (const char (*)[27])"EVENT_ROGUE_CELL_CONSTRUCT",
      (data::EventType *)(v1 + 1536));
    if ( *(_BYTE *)(((v1 + 1552) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1552) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1552, "EVENT_ROGUE_CELL_CONSTRUCT");
    *(_DWORD *)(v1 + 1552) = 92;
    std::pair<std::string const,data::EventType>::pair<char const(&)[36],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 5856),
      (const char (*)[36])"EVENT_ROGUE_CELL_FINISH_SELECT_CARD",
      (data::EventType *)(v1 + 1552));
    if ( *(_BYTE *)(((v1 + 1568) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1568) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1568, "EVENT_ROGUE_CELL_FINISH_SELECT_CARD");
    *(_DWORD *)(v1 + 1568) = 93;
    std::pair<std::string const,data::EventType>::pair<char const(&)[26],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 5896),
      (const char (*)[26])"EVENT_ANY_MONSTER_CAPTURE",
      (data::EventType *)(v1 + 1568));
    if ( *(_BYTE *)(((v1 + 1584) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1584) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1584, "EVENT_ANY_MONSTER_CAPTURE");
    *(_DWORD *)(v1 + 1584) = 94;
    std::pair<std::string const,data::EventType>::pair<char const(&)[31],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 5936),
      (const char (*)[31])"EVENT_ACTIVITY_INTERACT_GADGET",
      (data::EventType *)(v1 + 1584));
    if ( *(_BYTE *)(((v1 + 1600) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1600) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1600, "EVENT_ACTIVITY_INTERACT_GADGET");
    *(_DWORD *)(v1 + 1600) = 95;
    std::pair<std::string const,data::EventType>::pair<char const(&)[22],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 5976),
      (const char (*)[22])"EVENT_CHALLENGE_PAUSE",
      (data::EventType *)(v1 + 1600));
    if ( *(_BYTE *)(((v1 + 1616) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1616) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1616, "EVENT_CHALLENGE_PAUSE");
    *(_DWORD *)(v1 + 1616) = 96;
    std::pair<std::string const,data::EventType>::pair<char const(&)[23],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 6016),
      (const char (*)[23])"EVENT_LEVEL_TAG_CHANGE",
      (data::EventType *)(v1 + 1616));
    if ( *(_BYTE *)(((v1 + 1632) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1632) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1632, "EVENT_LEVEL_TAG_CHANGE");
    *(_DWORD *)(v1 + 1632) = 97;
    std::pair<std::string const,data::EventType>::pair<char const(&)[27],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 6056),
      (const char (*)[27])"EVENT_CUSTOM_DUNGEON_START",
      (data::EventType *)(v1 + 1632));
    if ( *(_BYTE *)(((v1 + 1648) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1648) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1648, "EVENT_CUSTOM_DUNGEON_START");
    *(_DWORD *)(v1 + 1648) = 98;
    std::pair<std::string const,data::EventType>::pair<char const(&)[29],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 6096),
      (const char (*)[29])"EVENT_CUSTOM_DUNGEON_RESTART",
      (data::EventType *)(v1 + 1648));
    if ( *(_BYTE *)(((v1 + 1664) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1664) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1664, "EVENT_CUSTOM_DUNGEON_RESTART");
    *(_DWORD *)(v1 + 1664) = 99;
    std::pair<std::string const,data::EventType>::pair<char const(&)[30],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 6136),
      (const char (*)[30])"EVENT_CUSTOM_DUNGEON_REACTIVE",
      (data::EventType *)(v1 + 1664));
    if ( *(_BYTE *)(((v1 + 1680) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1680) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1680, "EVENT_CUSTOM_DUNGEON_REACTIVE");
    *(_DWORD *)(v1 + 1680) = 100;
    std::pair<std::string const,data::EventType>::pair<char const(&)[31],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 6176),
      (const char (*)[31])"EVENT_CUSTOM_DUNGEON_OUT_STUCK",
      (data::EventType *)(v1 + 1680));
    if ( *(_BYTE *)(((v1 + 1696) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1696) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1696, "EVENT_CUSTOM_DUNGEON_OUT_STUCK");
    *(_DWORD *)(v1 + 1696) = 101;
    std::pair<std::string const,data::EventType>::pair<char const(&)[30],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 6216),
      (const char (*)[30])"EVENT_CUSTOM_DUNGEON_EXIT_TRY",
      (data::EventType *)(v1 + 1696));
    if ( *(_BYTE *)(((v1 + 1712) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1712) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1712, "EVENT_CUSTOM_DUNGEON_EXIT_TRY");
    *(_DWORD *)(v1 + 1712) = 102;
    std::pair<std::string const,data::EventType>::pair<char const(&)[38],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 6256),
      (const char (*)[38])"EVENT_CUSTOM_DUNGEON_OFFICIAL_RESTART",
      (data::EventType *)(v1 + 1712));
    if ( *(_BYTE *)(((v1 + 1728) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1728) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1728, "EVENT_CUSTOM_DUNGEON_OFFICIAL_RESTART");
    *(_DWORD *)(v1 + 1728) = 103;
    std::pair<std::string const,data::EventType>::pair<char const(&)[40],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 6296),
      (const char (*)[40])"EVENT_ANY_MONSTER_CAPTURE_AND_DISAPPEAR",
      (data::EventType *)(v1 + 1728));
    if ( *(_BYTE *)(((v1 + 1744) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1744) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1744, "EVENT_ANY_MONSTER_CAPTURE_AND_DISAPPEAR");
    *(_DWORD *)(v1 + 1744) = 104;
    std::pair<std::string const,data::EventType>::pair<char const(&)[23],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 6336),
      (const char (*)[23])"EVENT_MICHIAE_INTERACT",
      (data::EventType *)(v1 + 1744));
    if ( *(_BYTE *)(((v1 + 1760) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1760) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1760, "EVENT_MICHIAE_INTERACT");
    *(_DWORD *)(v1 + 1760) = 105;
    std::pair<std::string const,data::EventType>::pair<char const(&)[24],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 6376),
      (const char (*)[24])"EVENT_SELECT_UIINTERACT",
      (data::EventType *)(v1 + 1760));
    if ( *(_BYTE *)(((v1 + 1776) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1776) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1776, "EVENT_SELECT_UIINTERACT");
    *(_DWORD *)(v1 + 1776) = 106;
    std::pair<std::string const,data::EventType>::pair<char const(&)[17],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 6416),
      (const char (*)[17])"EVENT_LUA_NOTIFY",
      (data::EventType *)(v1 + 1776));
    if ( *(_BYTE *)(((v1 + 1792) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1792) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1792, "EVENT_LUA_NOTIFY");
    *(_DWORD *)(v1 + 1792) = 107;
    std::pair<std::string const,data::EventType>::pair<char const(&)[19],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 6456),
      (const char (*)[19])"EVENT_PHOTO_FINISH",
      (data::EventType *)(v1 + 1792));
    if ( *(_BYTE *)(((v1 + 1808) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1808) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1808, "EVENT_PHOTO_FINISH");
    *(_DWORD *)(v1 + 1808) = 108;
    std::pair<std::string const,data::EventType>::pair<char const(&)[27],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 6496),
      (const char (*)[27])"EVENT_IRODORI_MASTER_READY",
      (data::EventType *)(v1 + 1808));
    if ( *(_BYTE *)(((v1 + 1824) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1824) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1824, "EVENT_IRODORI_MASTER_READY");
    *(_DWORD *)(v1 + 1824) = 109;
    std::pair<std::string const,data::EventType>::pair<char const(&)[24],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 6536),
      (const char (*)[24])"EVENT_ROGUE_START_FIGHT",
      (data::EventType *)(v1 + 1824));
    if ( *(_BYTE *)(((v1 + 1840) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1840) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1840, "EVENT_ROGUE_START_FIGHT");
    *(_DWORD *)(v1 + 1840) = 110;
    std::pair<std::string const,data::EventType>::pair<char const(&)[32],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 6576),
      (const char (*)[32])"EVENT_ROGUE_CREAGE_FIGHT_GADGET",
      (data::EventType *)(v1 + 1840));
    if ( *(_BYTE *)(((v1 + 1856) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1856) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1856, "EVENT_ROGUE_CREAGE_FIGHT_GADGET");
    *(_DWORD *)(v1 + 1856) = 111;
    std::pair<std::string const,data::EventType>::pair<char const(&)[33],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 6616),
      (const char (*)[33])"EVENT_ROGUE_CREAGE_REPAIR_GADGET",
      (data::EventType *)(v1 + 1856));
    if ( *(_BYTE *)(((v1 + 1872) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1872) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1872, "EVENT_ROGUE_CREAGE_REPAIR_GADGET");
    *(_DWORD *)(v1 + 1872) = 112;
    std::pair<std::string const,data::EventType>::pair<char const(&)[24],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 6656),
      (const char (*)[24])"EVENT_ROGUE_OPEN_ACCESS",
      (data::EventType *)(v1 + 1872));
    if ( *(_BYTE *)(((v1 + 1888) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1888) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1888, "EVENT_ROGUE_OPEN_ACCESS");
    *(_DWORD *)(v1 + 1888) = 113;
    std::pair<std::string const,data::EventType>::pair<char const(&)[29],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 6696),
      (const char (*)[29])"EVENT_GADGET_GIVING_FINISHED",
      (data::EventType *)(v1 + 1888));
    if ( *(_BYTE *)(((v1 + 1904) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1904) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1904, "EVENT_GADGET_GIVING_FINISHED");
    *(_DWORD *)(v1 + 1904) = 114;
    std::pair<std::string const,data::EventType>::pair<char const(&)[31],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 6736),
      (const char (*)[31])"EVENT_OBSERVATION_POINT_NOTIFY",
      (data::EventType *)(v1 + 1904));
    if ( *(_BYTE *)(((v1 + 1920) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1920) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1920, "EVENT_OBSERVATION_POINT_NOTIFY");
    *(_DWORD *)(v1 + 1920) = 115;
    std::pair<std::string const,data::EventType>::pair<char const(&)[29],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 6776),
      (const char (*)[29])"EVENT_GADGET_GIVING_TAKEBACK",
      (data::EventType *)(v1 + 1920));
    if ( *(_BYTE *)(((v1 + 1936) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1936) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1936, "EVENT_GADGET_GIVING_TAKEBACK");
    *(_DWORD *)(v1 + 1936) = 116;
    std::pair<std::string const,data::EventType>::pair<char const(&)[26],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 6816),
      (const char (*)[26])"EVENT_ECHO_SHELL_INTERACT",
      (data::EventType *)(v1 + 1936));
    if ( *(_BYTE *)(((v1 + 1952) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1952) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1952, "EVENT_ECHO_SHELL_INTERACT");
    *(_DWORD *)(v1 + 1952) = 117;
    std::pair<std::string const,data::EventType>::pair<char const(&)[35],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 6856),
      (const char (*)[35])"EVENT_ARANARA_COLLECTION_COLLECTED",
      (data::EventType *)(v1 + 1952));
    if ( *(_BYTE *)(((v1 + 1968) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1968) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1968, "EVENT_ARANARA_COLLECTION_COLLECTED");
    *(_DWORD *)(v1 + 1968) = 118;
    std::pair<std::string const,data::EventType>::pair<char const(&)[25],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 6896),
      (const char (*)[25])"EVENT_DEATH_ZONE_OBSERVE",
      (data::EventType *)(v1 + 1968));
    if ( *(_BYTE *)(((v1 + 1984) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1984) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1984, "EVENT_DEATH_ZONE_OBSERVE");
    *(_DWORD *)(v1 + 1984) = 119;
    std::pair<std::string const,data::EventType>::pair<char const(&)[31],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 6936),
      (const char (*)[31])"EVENT_DEATH_ZONE_STATUS_CHANGE",
      (data::EventType *)(v1 + 1984));
    if ( *(_BYTE *)(((v1 + 2000) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 2000) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 2000, "EVENT_DEATH_ZONE_STATUS_CHANGE");
    *(_DWORD *)(v1 + 2000) = 120;
    std::pair<std::string const,data::EventType>::pair<char const(&)[33],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 6976),
      (const char (*)[33])"EVENT_GALLERY_PLAYER_LEAVE_SCENE",
      (data::EventType *)(v1 + 2000));
    if ( *(_BYTE *)(((v1 + 2016) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 2016) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 2016, "EVENT_GALLERY_PLAYER_LEAVE_SCENE");
    *(_DWORD *)(v1 + 2016) = 2701;
    std::pair<std::string const,data::EventType>::pair<char const(&)[23],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 7016),
      (const char (*)[23])"EVENT_PLATFORM_ARRIVAL",
      (data::EventType *)(v1 + 2016));
    if ( *(_BYTE *)(((v1 + 2032) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 2032) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 2032, "EVENT_PLATFORM_ARRIVAL");
    *(_DWORD *)(v1 + 2032) = 2800;
    std::pair<std::string const,data::EventType>::pair<char const(&)[39],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 7056),
      (const char (*)[39])"EVENT_PLAYER_BACK_GALLERY_REVIVE_POINT",
      (data::EventType *)(v1 + 2032));
    if ( *(_BYTE *)(((v1 + 2048) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 2048) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 2048, "EVENT_PLAYER_BACK_GALLERY_REVIVE_POINT");
    *(_DWORD *)(v1 + 2048) = 2801;
    std::pair<std::string const,data::EventType>::pair<char const(&)[43],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 7096),
      (const char (*)[43])"EVENT_GALLERY_CANNOT_START_AFTER_COUNTDOWN",
      (data::EventType *)(v1 + 2048));
    if ( *(_BYTE *)(((v1 + 2064) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 2064) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 2064, "EVENT_GALLERY_CANNOT_START_AFTER_COUNTDOWN");
    *(_DWORD *)(v1 + 2064) = 3000;
    std::pair<std::string const,data::EventType>::pair<char const(&)[37],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 7136),
      (const char (*)[37])"EVENT_CUSTOM_GADGET_SLOT_MAP_CHANGED",
      (data::EventType *)(v1 + 2064));
    if ( *(_BYTE *)(((v1 + 2080) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 2080) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 2080, "EVENT_CUSTOM_GADGET_SLOT_MAP_CHANGED");
    *(_DWORD *)(v1 + 2080) = 3001;
    std::pair<std::string const,data::EventType>::pair<char const(&)[33],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 7176),
      (const char (*)[33])"EVENT_GRAVEN_PHOTO_REFRESH_GROUP",
      (data::EventType *)(v1 + 2080));
    if ( *(_BYTE *)(((v1 + 2096) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 2096) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 2096, "EVENT_GRAVEN_PHOTO_REFRESH_GROUP");
    *(_DWORD *)(v1 + 2096) = 3101;
    std::pair<std::string const,data::EventType>::pair<char const(&)[32],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 7216),
      (const char (*)[32])"EVENT_GADGET_CHAIN_LEVEL_CHANGE",
      (data::EventType *)(v1 + 2096));
    if ( *(_BYTE *)(((v1 + 2112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 2112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 2112, "EVENT_GADGET_CHAIN_LEVEL_CHANGE");
    *(_DWORD *)(v1 + 2112) = 3200;
    std::pair<std::string const,data::EventType>::pair<char const(&)[31],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 7256),
      (const char (*)[31])"EVENT_GCG_TAVERN_SCENE_REFRESH",
      (data::EventType *)(v1 + 2112));
    if ( *(_BYTE *)(((v1 + 2128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 2128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 2128, "EVENT_GCG_TAVERN_SCENE_REFRESH");
    *(_DWORD *)(v1 + 2128) = 3201;
    std::pair<std::string const,data::EventType>::pair<char const(&)[46],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 7296),
      (const char (*)[46])"EVENT_CHAR_AMUSEMENT_DUNGEON_ALL_PLAYER_ENTER",
      (data::EventType *)(v1 + 2128));
    if ( *(_BYTE *)(((v1 + 2144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 2144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 2144, "EVENT_CHAR_AMUSEMENT_DUNGEON_ALL_PLAYER_ENTER");
    *(_DWORD *)(v1 + 2144) = 3202;
    std::pair<std::string const,data::EventType>::pair<char const(&)[34],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 7336),
      (const char (*)[34])"EVENT_TRAINING_FUNGUS_SELECT_DONE",
      (data::EventType *)(v1 + 2144));
    if ( *(_BYTE *)(((v1 + 2160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 2160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 2160, "EVENT_TRAINING_FUNGUS_SELECT_DONE");
    *(_DWORD *)(v1 + 2160) = 3300;
    std::pair<std::string const,data::EventType>::pair<char const(&)[24],data::EventType,true>(
      (std::pair<const std::string,data::EventType> *const)(v1 + 7376),
      (const char (*)[24])"EVENT_GALLERY_PRE_START",
      (data::EventType *)(v1 + 2160));
    std::allocator<std::pair<std::string const,data::EventType>>::allocator((std::allocator<std::pair<const std::string,data::EventType> > *const)(v1 + 64));
    std::unordered_map<std::string,data::EventType>::unordered_map(
      &data::getEventTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::EventType> >)__PAIR128__(131LL, v1 + 2176),
      0LL,
      (const std::unordered_map<std::string,data::EventType>::hasher *)(v1 + 32),
      (const std::unordered_map<std::string,data::EventType>::key_equal *)(v1 + 48),
      (const std::unordered_map<std::string,data::EventType>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getEventTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::EventType>::~unordered_map,
      &data::getEventTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::EventType>>::~allocator((std::allocator<std::pair<const std::string,data::EventType> > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::EventType> *)(v1 + 7416);
          i != (std::pair<const std::string,data::EventType> *)(v1 + 2176);
          std::pair<std::string const,data::EventType>::~pair(i) )
    {
      --i;
    }
  }
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF83B8) = 0LL;
    memset(
      (void *)((unsigned __int64)(v3 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v3 + 2147450880 - (((_DWORD)v3 + 2147450888) & 0xFFFFFFF8) + 960) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    __asan_stack_free_7(v1, 7680LL, v6);
  }
  return &data::getEventTypeNameMap[abi:cxx11](void)::m;
};

// Line 321: range 000000000CC875CB-000000000CC90ED2
const std::map<data::EventType,std::pair<std::string,std::string >> *__cdecl data::getEventTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::EventType,std::pair<std::string,std::string > > *i; // r14
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
  _DWORD *v118; // rax
  _DWORD *v119; // rax
  _DWORD *v120; // rax
  _DWORD *v121; // rax
  _DWORD *v122; // rax
  _DWORD *v123; // rax
  _DWORD *v124; // rax
  _DWORD *v125; // rax
  _DWORD *v126; // rax
  _DWORD *v127; // rax
  _DWORD *v128; // rax
  _DWORD *v129; // rax
  _DWORD *v130; // rax
  _DWORD *v131; // rax
  _DWORD *v132; // rax
  _DWORD *v133; // rax
  _DWORD *v134; // rax
  char v136[24496]; // [rsp+10h] [rbp-5FB0h] BYREF

  v1 = (unsigned __int64)v136;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_9(24448LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = a2654819Unknown;
  *(_QWORD *)(v1 + 16) = data::getEventTypeEnumMap[abi:cxx11];
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
  v3[536862779] = -234556924;
  v3[536862780] = -234556924;
  v3[536862781] = -234556924;
  v3[536862782] = -234556924;
  v3[536862783] = -234556924;
  v3[536862784] = -234556924;
  v3[536862785] = -234556924;
  v3[536862786] = -234556924;
  v3[536862787] = -234556924;
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
  v3[536862892] = -218959118;
  v3[536862895] = -218959118;
  v3[536862898] = -218959118;
  v3[536862901] = -218959118;
  v3[536862904] = -218959118;
  v3[536862907] = -218959118;
  v3[536862910] = -218959118;
  v3[536862913] = -218959118;
  v3[536862916] = -218959118;
  v3[536862919] = -218959118;
  v3[536862922] = -218959118;
  v3[536862925] = -218959118;
  v3[536862928] = -218959118;
  v3[536862931] = -218959118;
  v3[536862934] = -218959118;
  v3[536862937] = -218959118;
  v3[536862940] = -218959118;
  v3[536862943] = -218959118;
  v3[536862946] = -218959118;
  v3[536862949] = -218959118;
  v3[536862952] = -218959118;
  v3[536862955] = -218959118;
  v3[536862958] = -218959118;
  v3[536862961] = -218959118;
  v3[536862964] = -218959118;
  v3[536862967] = -218959118;
  v3[536862970] = -218959118;
  v3[536862973] = -218959118;
  v3[536862976] = -218959118;
  v3[536862979] = -218959118;
  v3[536862982] = -218959118;
  v3[536862985] = -218959118;
  v3[536862988] = -218959118;
  v3[536862991] = -218959118;
  v3[536862994] = -218959118;
  v3[536862997] = -218959118;
  v3[536863000] = -218959118;
  v3[536863003] = -218959118;
  v3[536863006] = -218959118;
  v3[536863009] = -218959118;
  v3[536863012] = -218959118;
  v3[536863015] = -218959118;
  v3[536863018] = -218959118;
  v3[536863021] = -218959118;
  v3[536863024] = -218959118;
  v3[536863027] = -218959118;
  v3[536863030] = -218959118;
  v3[536863033] = -218959118;
  v3[536863036] = -218959118;
  v3[536863039] = -218959118;
  v3[536863042] = -218959118;
  v3[536863045] = -218959118;
  v3[536863048] = -218959118;
  v3[536863051] = -218959118;
  v3[536863054] = -218959118;
  v3[536863057] = -218959118;
  v3[536863060] = -218959118;
  v3[536863063] = -218959118;
  v3[536863066] = -218959118;
  v3[536863069] = -218959118;
  v3[536863072] = -218959118;
  v3[536863075] = -218959118;
  v3[536863078] = -218959118;
  v3[536863081] = -218959118;
  v3[536863084] = -218959118;
  v3[536863087] = -218959118;
  v3[536863090] = -218959118;
  v3[536863093] = -218959118;
  v3[536863096] = -218959118;
  v3[536863099] = -218959118;
  v3[536863102] = -218959118;
  v3[536863105] = -218959118;
  v3[536863108] = -218959118;
  v3[536863111] = -218959118;
  v3[536863114] = -218959118;
  v3[536863117] = -218959118;
  v3[536863120] = -218959118;
  v3[536863123] = -218959118;
  v3[536863126] = -218959118;
  v3[536863129] = -218959118;
  v3[536863132] = -218959118;
  v3[536863135] = -218959118;
  v3[536863138] = -218959118;
  v3[536863141] = -218959118;
  v3[536863144] = -218959118;
  v3[536863147] = -218959118;
  v3[536863150] = -218959118;
  v3[536863153] = -218959118;
  v3[536863156] = -218959118;
  v3[536863159] = -218959118;
  v3[536863162] = -218959118;
  v3[536863165] = -218959118;
  v3[536863168] = -218959118;
  v3[536863171] = -218959118;
  v3[536863174] = -218959118;
  v3[536863177] = -218959118;
  v3[536863180] = -218959118;
  v3[536863475] = -218103808;
  v3[536863476] = -202116109;
  v3[536863477] = -202116109;
  v3[536863478] = -202116109;
  v3[536863479] = -202116109;
  v3[536863480] = -202116109;
  v3[536863481] = -202116109;
  v3[536863482] = -202116109;
  v3[536863483] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getEventTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getEventTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[11],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2176),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[11])"EVENT_NONE");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 14752),
      (data::EventType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 2176));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[22],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2272),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[22])"EVENT_ANY_MONSTER_DIE");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 14824),
      (data::EventType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 2272));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2368),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[21])"EVENT_ANY_GADGET_DIE");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 14896),
      (data::EventType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 2368));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, v1 + 112);
    *(_DWORD *)(v1 + 128) = 3;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[22],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2464),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[22])"EVENT_VARIABLE_CHANGE");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 14968),
      (data::EventType *)(v1 + 128),
      (const std::pair<std::string,std::string > *)(v1 + 2464));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, v1 + 128);
    *(_DWORD *)(v1 + 144) = 4;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[19],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2560),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[19])"EVENT_ENTER_REGION");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 15040),
      (data::EventType *)(v1 + 144),
      (const std::pair<std::string,std::string > *)(v1 + 2560));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, v1 + 144);
    *(_DWORD *)(v1 + 160) = 5;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[19],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2656),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[19])"EVENT_LEAVE_REGION");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 15112),
      (data::EventType *)(v1 + 160),
      (const std::pair<std::string,std::string > *)(v1 + 2656));
    if ( *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 176, v1 + 160);
    *(_DWORD *)(v1 + 176) = 6;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[20],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2752),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[20])"EVENT_GADGET_CREATE");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 15184),
      (data::EventType *)(v1 + 176),
      (const std::pair<std::string,std::string > *)(v1 + 2752));
    if ( *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 192, v1 + 176);
    *(_DWORD *)(v1 + 192) = 7;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[26],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2848),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[26])"EVENT_GADGET_STATE_CHANGE");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 15256),
      (data::EventType *)(v1 + 192),
      (const std::pair<std::string,std::string > *)(v1 + 2848));
    if ( *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 208, v1 + 192);
    *(_DWORD *)(v1 + 208) = 8;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2944),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[21])"EVENT_DUNGEON_SETTLE");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 15328),
      (data::EventType *)(v1 + 208),
      (const std::pair<std::string,std::string > *)(v1 + 2944));
    if ( *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 224, v1 + 208);
    *(_DWORD *)(v1 + 224) = 9;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[20],true>(
      (std::pair<std::string,std::string > *const)(v1 + 3040),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[20])"EVENT_SELECT_OPTION");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 15400),
      (data::EventType *)(v1 + 224),
      (const std::pair<std::string,std::string > *)(v1 + 3040));
    if ( *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 240, v1 + 224);
    *(_DWORD *)(v1 + 240) = 10;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 3136),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[21])"EVENT_CLIENT_EXECUTE");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 15472),
      (data::EventType *)(v1 + 240),
      (const std::pair<std::string,std::string > *)(v1 + 3136));
    if ( *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 256, v1 + 240);
    *(_DWORD *)(v1 + 256) = 11;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[23],true>(
      (std::pair<std::string,std::string > *const)(v1 + 3232),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[23])"EVENT_ANY_MONSTER_LIVE");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 15544),
      (data::EventType *)(v1 + 256),
      (const std::pair<std::string,std::string > *)(v1 + 3232));
    if ( *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 272, v1 + 256);
    *(_DWORD *)(v1 + 272) = 12;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[33],true>(
      (std::pair<std::string,std::string > *const)(v1 + 3328),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[33])"EVENT_SPECIFIC_MONSTER_HP_CHANGE");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 15616),
      (data::EventType *)(v1 + 272),
      (const std::pair<std::string,std::string > *)(v1 + 3328));
    if ( *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 288, v1 + 272);
    *(_DWORD *)(v1 + 288) = 13;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[40],true>(
      (std::pair<std::string,std::string > *const)(v1 + 3424),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[40])"EVENT_CITY_LEVELUP_UNLOCK_DUNGEON_ENTRY");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 15688),
      (data::EventType *)(v1 + 288),
      (const std::pair<std::string,std::string > *)(v1 + 3424));
    if ( *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 304, v1 + 288);
    *(_DWORD *)(v1 + 304) = 14;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[32],true>(
      (std::pair<std::string,std::string > *const)(v1 + 3520),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[32])"EVENT_DUNGEON_BROADCAST_ONTIMER");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 15760),
      (data::EventType *)(v1 + 304),
      (const std::pair<std::string,std::string > *)(v1 + 3520));
    if ( *(_BYTE *)(((v1 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 320) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 320, v1 + 304);
    *(_DWORD *)(v1 + 320) = 15;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[18],true>(
      (std::pair<std::string,std::string > *const)(v1 + 3616),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[18])"EVENT_TIMER_EVENT");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 15832),
      (data::EventType *)(v1 + 320),
      (const std::pair<std::string,std::string > *)(v1 + 3616));
    if ( *(_BYTE *)(((v1 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 336) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 336, v1 + 320);
    *(_DWORD *)(v1 + 336) = 16;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[24],true>(
      (std::pair<std::string,std::string > *const)(v1 + 3712),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[24])"EVENT_CHALLENGE_SUCCESS");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 15904),
      (data::EventType *)(v1 + 336),
      (const std::pair<std::string,std::string > *)(v1 + 3712));
    if ( *(_BYTE *)(((v1 + 352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 352) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 352, v1 + 336);
    *(_DWORD *)(v1 + 352) = 17;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 3808),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[21])"EVENT_CHALLENGE_FAIL");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 15976),
      (data::EventType *)(v1 + 352),
      (const std::pair<std::string,std::string > *)(v1 + 3808));
    if ( *(_BYTE *)(((v1 + 368) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 368) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 368, v1 + 352);
    *(_DWORD *)(v1 + 368) = 18;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[24],true>(
      (std::pair<std::string,std::string > *const)(v1 + 3904),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[24])"EVENT_SEAL_BATTLE_BEGIN");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 16048),
      (data::EventType *)(v1 + 368),
      (const std::pair<std::string,std::string > *)(v1 + 3904));
    if ( *(_BYTE *)(((v1 + 384) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 384) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 384, v1 + 368);
    *(_DWORD *)(v1 + 384) = 19;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[22],true>(
      (std::pair<std::string,std::string > *const)(v1 + 4000),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[22])"EVENT_SEAL_BATTLE_END");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 16120),
      (data::EventType *)(v1 + 384),
      (const std::pair<std::string,std::string > *)(v1 + 4000));
    if ( *(_BYTE *)(((v1 + 400) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 400) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 400, v1 + 384);
    *(_DWORD *)(v1 + 400) = 20;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[13],true>(
      (std::pair<std::string,std::string > *const)(v1 + 4096),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[13])"EVENT_GATHER");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 16192),
      (data::EventType *)(v1 + 400),
      (const std::pair<std::string,std::string > *)(v1 + 4096));
    if ( *(_BYTE *)(((v1 + 416) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 416) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 416, v1 + 400);
    *(_DWORD *)(v1 + 416) = 21;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[19],true>(
      (std::pair<std::string,std::string > *const)(v1 + 4192),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[19])"EVENT_QUEST_FINISH");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 16264),
      (data::EventType *)(v1 + 416),
      (const std::pair<std::string,std::string > *)(v1 + 4192));
    if ( *(_BYTE *)(((v1 + 432) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 432) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 432, v1 + 416);
    *(_DWORD *)(v1 + 432) = 22;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 4288),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[21])"EVENT_MONSTER_BATTLE");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 16336),
      (data::EventType *)(v1 + 432),
      (const std::pair<std::string,std::string > *)(v1 + 4288));
    if ( *(_BYTE *)(((v1 + 448) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 448) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 448, v1 + 432);
    *(_DWORD *)(v1 + 448) = 23;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[19],true>(
      (std::pair<std::string,std::string > *const)(v1 + 4384),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[19])"EVENT_CITY_LEVELUP");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 16408),
      (data::EventType *)(v1 + 448),
      (const std::pair<std::string,std::string > *)(v1 + 4384));
    if ( *(_BYTE *)(((v1 + 464) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 464) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 464, v1 + 448);
    *(_DWORD *)(v1 + 464) = 24;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[19],true>(
      (std::pair<std::string,std::string > *const)(v1 + 4480),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[19])"EVENT_CUTSCENE_END");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 16480),
      (data::EventType *)(v1 + 464),
      (const std::pair<std::string,std::string > *)(v1 + 4480));
    if ( *(_BYTE *)(((v1 + 480) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 480) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 480, v1 + 464);
    *(_DWORD *)(v1 + 480) = 25;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[27],true>(
      (std::pair<std::string,std::string > *const)(v1 + 4576),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[27])"EVENT_AVATAR_NEAR_PLATFORM");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 16552),
      (data::EventType *)(v1 + 480),
      (const std::pair<std::string,std::string > *)(v1 + 4576));
    if ( *(_BYTE *)(((v1 + 496) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 496) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 496, v1 + 480);
    *(_DWORD *)(v1 + 496) = 26;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[27],true>(
      (std::pair<std::string,std::string > *const)(v1 + 4672),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[27])"EVENT_PLATFORM_REACH_POINT");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 16624),
      (data::EventType *)(v1 + 496),
      (const std::pair<std::string,std::string > *)(v1 + 4672));
    if ( *(_BYTE *)(((v1 + 512) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 512) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 512, v1 + 496);
    *(_DWORD *)(v1 + 512) = 27;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[25],true>(
      (std::pair<std::string,std::string > *const)(v1 + 4768),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[25])"EVENT_UNLOCK_TRANS_POINT");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 16696),
      (data::EventType *)(v1 + 512),
      (const std::pair<std::string,std::string > *)(v1 + 4768));
    if ( *(_BYTE *)(((v1 + 528) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 528) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 528, v1 + 512);
    *(_DWORD *)(v1 + 528) = 28;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[18],true>(
      (std::pair<std::string,std::string > *const)(v1 + 4864),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[18])"EVENT_QUEST_START");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 16768),
      (data::EventType *)(v1 + 528),
      (const std::pair<std::string,std::string > *)(v1 + 4864));
    if ( *(_BYTE *)(((v1 + 544) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 544) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 544, v1 + 528);
    *(_DWORD *)(v1 + 544) = 29;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[17],true>(
      (std::pair<std::string,std::string > *const)(v1 + 4960),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[17])"EVENT_GROUP_LOAD");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 16840),
      (data::EventType *)(v1 + 544),
      (const std::pair<std::string,std::string > *)(v1 + 4960));
    if ( *(_BYTE *)(((v1 + 560) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 560) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 560, v1 + 544);
    *(_DWORD *)(v1 + 560) = 30;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[24],true>(
      (std::pair<std::string,std::string > *const)(v1 + 5056),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[24])"EVENT_GROUP_WILL_UNLOAD");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 16912),
      (data::EventType *)(v1 + 560),
      (const std::pair<std::string,std::string > *)(v1 + 5056));
    if ( *(_BYTE *)(((v1 + 576) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 576) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 576, v1 + 560);
    *(_DWORD *)(v1 + 576) = 31;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[25],true>(
      (std::pair<std::string,std::string > *const)(v1 + 5152),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[25])"EVENT_GROUP_WILL_REFRESH");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 16984),
      (data::EventType *)(v1 + 576),
      (const std::pair<std::string,std::string > *)(v1 + 5152));
    if ( *(_BYTE *)(((v1 + 592) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 592) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 592, v1 + 576);
    *(_DWORD *)(v1 + 592) = 32;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[20],true>(
      (std::pair<std::string,std::string > *const)(v1 + 5248),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[20])"EVENT_GROUP_REFRESH");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 17056),
      (data::EventType *)(v1 + 592),
      (const std::pair<std::string,std::string > *)(v1 + 5248));
    if ( *(_BYTE *)(((v1 + 608) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 608) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 608, v1 + 592);
    *(_DWORD *)(v1 + 608) = 33;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[25],true>(
      (std::pair<std::string,std::string > *const)(v1 + 5344),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[25])"EVENT_DUNGEON_REWARD_GET");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 17128),
      (data::EventType *)(v1 + 608),
      (const std::pair<std::string,std::string > *)(v1 + 5344));
    if ( *(_BYTE *)(((v1 + 624) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 624) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 624, v1 + 608);
    *(_DWORD *)(v1 + 624) = 34;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[32],true>(
      (std::pair<std::string,std::string > *const)(v1 + 5440),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[32])"EVENT_SPECIFIC_GADGET_HP_CHANGE");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 17200),
      (data::EventType *)(v1 + 624),
      (const std::pair<std::string,std::string > *)(v1 + 5440));
    if ( *(_BYTE *)(((v1 + 640) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 640) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 640, v1 + 624);
    *(_DWORD *)(v1 + 640) = 35;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[24],true>(
      (std::pair<std::string,std::string > *const)(v1 + 5536),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[24])"EVENT_MONSTER_TIDE_OVER");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 17272),
      (data::EventType *)(v1 + 640),
      (const std::pair<std::string,std::string > *)(v1 + 5536));
    if ( *(_BYTE *)(((v1 + 656) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 656) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 656, v1 + 640);
    *(_DWORD *)(v1 + 656) = 36;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[26],true>(
      (std::pair<std::string,std::string > *const)(v1 + 5632),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[26])"EVENT_MONSTER_TIDE_CREATE");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 17344),
      (data::EventType *)(v1 + 656),
      (const std::pair<std::string,std::string > *)(v1 + 5632));
    if ( *(_BYTE *)(((v1 + 672) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 672) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 672, v1 + 656);
    *(_DWORD *)(v1 + 672) = 37;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[23],true>(
      (std::pair<std::string,std::string > *const)(v1 + 5728),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[23])"EVENT_MONSTER_TIDE_DIE");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 17416),
      (data::EventType *)(v1 + 672),
      (const std::pair<std::string,std::string > *)(v1 + 5728));
    if ( *(_BYTE *)(((v1 + 688) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 688) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 688, v1 + 672);
    *(_DWORD *)(v1 + 688) = 38;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[27],true>(
      (std::pair<std::string,std::string > *const)(v1 + 5824),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[27])"EVENT_SEALAMP_PHASE_CHANGE");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 17488),
      (data::EventType *)(v1 + 688),
      (const std::pair<std::string,std::string > *)(v1 + 5824));
    if ( *(_BYTE *)(((v1 + 704) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 704) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 704, v1 + 688);
    *(_DWORD *)(v1 + 704) = 39;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[30],true>(
      (std::pair<std::string,std::string > *const)(v1 + 5920),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[30])"EVENT_BLOSSOM_PROGRESS_FINISH");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 17560),
      (data::EventType *)(v1 + 704),
      (const std::pair<std::string,std::string > *)(v1 + 5920));
    if ( *(_BYTE *)(((v1 + 720) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 720) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 720, v1 + 704);
    *(_DWORD *)(v1 + 720) = 40;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[24],true>(
      (std::pair<std::string,std::string > *const)(v1 + 6016),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[24])"EVENT_BLOSSOM_CHEST_DIE");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 17632),
      (data::EventType *)(v1 + 720),
      (const std::pair<std::string,std::string > *)(v1 + 6016));
    if ( *(_BYTE *)(((v1 + 736) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 736) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 736, v1 + 720);
    *(_DWORD *)(v1 + 736) = 41;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[24],true>(
      (std::pair<std::string,std::string > *const)(v1 + 6112),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[24])"EVENT_GADGET_PLAY_START");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 17704),
      (data::EventType *)(v1 + 736),
      (const std::pair<std::string,std::string > *)(v1 + 6112));
    if ( *(_BYTE *)(((v1 + 752) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 752) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 752, v1 + 736);
    *(_DWORD *)(v1 + 752) = 42;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[27],true>(
      (std::pair<std::string,std::string > *const)(v1 + 6208),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[27])"EVENT_GADGET_PLAY_START_CD");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 17776),
      (data::EventType *)(v1 + 752),
      (const std::pair<std::string,std::string > *)(v1 + 6208));
    if ( *(_BYTE *)(((v1 + 768) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 768) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 768, v1 + 752);
    *(_DWORD *)(v1 + 768) = 43;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[23],true>(
      (std::pair<std::string,std::string > *const)(v1 + 6304),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[23])"EVENT_GADGET_PLAY_STOP");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 17848),
      (data::EventType *)(v1 + 768),
      (const std::pair<std::string,std::string > *)(v1 + 6304));
    if ( *(_BYTE *)(((v1 + 784) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 784) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 784, v1 + 768);
    *(_DWORD *)(v1 + 784) = 44;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[24],true>(
      (std::pair<std::string,std::string > *const)(v1 + 6400),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[24])"EVENT_GADGET_LUA_NOTIFY");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 17920),
      (data::EventType *)(v1 + 784),
      (const std::pair<std::string,std::string > *)(v1 + 6400));
    if ( *(_BYTE *)(((v1 + 800) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 800) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 800, v1 + 784);
    *(_DWORD *)(v1 + 800) = 45;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[22],true>(
      (std::pair<std::string,std::string > *const)(v1 + 6496),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[22])"EVENT_MP_PLAY_PREPARE");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 17992),
      (data::EventType *)(v1 + 800),
      (const std::pair<std::string,std::string > *)(v1 + 6496));
    if ( *(_BYTE *)(((v1 + 816) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 816) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 816, v1 + 800);
    *(_DWORD *)(v1 + 816) = 46;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 6592),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[21])"EVENT_MP_PLAY_BATTLE");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 18064),
      (data::EventType *)(v1 + 816),
      (const std::pair<std::string,std::string > *)(v1 + 6592));
    if ( *(_BYTE *)(((v1 + 832) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 832) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 832, v1 + 816);
    *(_DWORD *)(v1 + 832) = 47;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[32],true>(
      (std::pair<std::string,std::string > *const)(v1 + 6688),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[32])"EVENT_MP_PLAY_PREPARE_INTERRUPT");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 18136),
      (data::EventType *)(v1 + 832),
      (const std::pair<std::string,std::string > *)(v1 + 6688));
    if ( *(_BYTE *)(((v1 + 848) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 848) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 848, v1 + 832);
    *(_DWORD *)(v1 + 848) = 48;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[24],true>(
      (std::pair<std::string,std::string > *const)(v1 + 6784),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[24])"EVENT_SELECT_DIFFICULTY");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 18208),
      (data::EventType *)(v1 + 848),
      (const std::pair<std::string,std::string > *)(v1 + 6784));
    if ( *(_BYTE *)(((v1 + 864) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 864) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 864, v1 + 848);
    *(_DWORD *)(v1 + 864) = 49;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[33],true>(
      (std::pair<std::string,std::string > *const)(v1 + 6880),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[33])"EVENT_SCENE_MP_PLAY_BATTLE_STATE");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 18280),
      (data::EventType *)(v1 + 864),
      (const std::pair<std::string,std::string > *)(v1 + 6880));
    if ( *(_BYTE *)(((v1 + 880) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 880) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 880, v1 + 864);
    *(_DWORD *)(v1 + 880) = 50;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[40],true>(
      (std::pair<std::string,std::string > *const)(v1 + 6976),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[40])"EVENT_SCENE_MP_PLAY_BATTLE_STAGE_CHANGE");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 18352),
      (data::EventType *)(v1 + 880),
      (const std::pair<std::string,std::string > *)(v1 + 6976));
    if ( *(_BYTE *)(((v1 + 896) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 896) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 896, v1 + 880);
    *(_DWORD *)(v1 + 896) = 51;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[34],true>(
      (std::pair<std::string,std::string > *const)(v1 + 7072),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[34])"EVENT_SCENE_MP_PLAY_BATTLE_RESULT");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 18424),
      (data::EventType *)(v1 + 896),
      (const std::pair<std::string,std::string > *)(v1 + 7072));
    if ( *(_BYTE *)(((v1 + 912) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 912) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 912, v1 + 896);
    *(_DWORD *)(v1 + 912) = 52;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[36],true>(
      (std::pair<std::string,std::string > *const)(v1 + 7168),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[36])"EVENT_SEAL_BATTLE_PROGRESS_DECREASE");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 18496),
      (data::EventType *)(v1 + 912),
      (const std::pair<std::string,std::string > *)(v1 + 7168));
    if ( *(_BYTE *)(((v1 + 928) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 928) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 928, v1 + 912);
    *(_DWORD *)(v1 + 928) = 53;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[25],true>(
      (std::pair<std::string,std::string > *const)(v1 + 7264),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[25])"EVENT_GENERAL_REWARD_DIE");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 18568),
      (data::EventType *)(v1 + 928),
      (const std::pair<std::string,std::string > *)(v1 + 7264));
    if ( *(_BYTE *)(((v1 + 944) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 944) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 944, v1 + 928);
    *(_DWORD *)(v1 + 944) = 54;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[37],true>(
      (std::pair<std::string,std::string > *const)(v1 + 7360),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[37])"EVENT_SCENE_MP_PLAY_BATTLE_INTERRUPT");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 18640),
      (data::EventType *)(v1 + 944),
      (const std::pair<std::string,std::string > *)(v1 + 7360));
    if ( *(_BYTE *)(((v1 + 960) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 960) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 960, v1 + 944);
    *(_DWORD *)(v1 + 960) = 55;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[37],true>(
      (std::pair<std::string,std::string > *const)(v1 + 7456),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[37])"EVENT_MONSTER_DIE_BEFORE_LEAVE_SCENE");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 18712),
      (data::EventType *)(v1 + 960),
      (const std::pair<std::string,std::string > *)(v1 + 7456));
    if ( *(_BYTE *)(((v1 + 976) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 976) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 976, v1 + 960);
    *(_DWORD *)(v1 + 976) = 56;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[25],true>(
      (std::pair<std::string,std::string > *const)(v1 + 7552),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[25])"EVENT_SCENE_MP_PLAY_OPEN");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 18784),
      (data::EventType *)(v1 + 976),
      (const std::pair<std::string,std::string > *)(v1 + 7552));
    if ( *(_BYTE *)(((v1 + 992) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 992) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 992, v1 + 976);
    *(_DWORD *)(v1 + 992) = 57;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[23],true>(
      (std::pair<std::string,std::string > *const)(v1 + 7648),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[23])"EVENT_OFFERING_LEVELUP");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 18856),
      (data::EventType *)(v1 + 992),
      (const std::pair<std::string,std::string > *)(v1 + 7648));
    if ( *(_BYTE *)(((v1 + 1008) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1008) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1008, v1 + 992);
    *(_DWORD *)(v1 + 1008) = 58;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 7744),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[21])"EVENT_DUNGEON_REVIVE");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 18928),
      (data::EventType *)(v1 + 1008),
      (const std::pair<std::string,std::string > *)(v1 + 7744));
    if ( *(_BYTE *)(((v1 + 1024) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1024) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1024, v1 + 1008);
    *(_DWORD *)(v1 + 1024) = 59;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[35],true>(
      (std::pair<std::string,std::string > *const)(v1 + 7840),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[35])"EVENT_SCENE_MP_PLAY_ALL_AVATAR_DIE");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 19000),
      (data::EventType *)(v1 + 1024),
      (const std::pair<std::string,std::string > *)(v1 + 7840));
    if ( *(_BYTE *)(((v1 + 1040) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1040) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1040, v1 + 1024);
    *(_DWORD *)(v1 + 1040) = 60;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[29],true>(
      (std::pair<std::string,std::string > *const)(v1 + 7936),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[29])"EVENT_DUNGEON_ALL_AVATAR_DIE");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 19072),
      (data::EventType *)(v1 + 1040),
      (const std::pair<std::string,std::string > *)(v1 + 7936));
    if ( *(_BYTE *)(((v1 + 1056) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1056) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1056, v1 + 1040);
    *(_DWORD *)(v1 + 1056) = 61;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[27],true>(
      (std::pair<std::string,std::string > *const)(v1 + 8032),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[27])"EVENT_GENERAL_REWARD_TAKEN");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 19144),
      (data::EventType *)(v1 + 1056),
      (const std::pair<std::string,std::string > *)(v1 + 8032));
    if ( *(_BYTE *)(((v1 + 1072) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1072) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1072, v1 + 1056);
    *(_DWORD *)(v1 + 1072) = 62;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[32],true>(
      (std::pair<std::string,std::string > *const)(v1 + 8128),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[32])"EVENT_PLATFORM_REACH_ARRAYPOINT");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 19216),
      (data::EventType *)(v1 + 1072),
      (const std::pair<std::string,std::string > *)(v1 + 8128));
    if ( *(_BYTE *)(((v1 + 1088) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1088) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1088, v1 + 1072);
    *(_DWORD *)(v1 + 1088) = 63;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[38],true>(
      (std::pair<std::string,std::string > *const)(v1 + 8224),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[38])"EVENT_SCENE_MULTISTAGE_PLAY_STAGE_END");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 19288),
      (data::EventType *)(v1 + 1088),
      (const std::pair<std::string,std::string > *)(v1 + 8224));
    if ( *(_BYTE *)(((v1 + 1104) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1104) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1104, v1 + 1088);
    *(_DWORD *)(v1 + 1104) = 64;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[42],true>(
      (std::pair<std::string,std::string > *const)(v1 + 8320),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[42])"EVENT_SCENE_MULTISTAGE_PLAY_END_STAGE_REQ");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 19360),
      (data::EventType *)(v1 + 1104),
      (const std::pair<std::string,std::string > *)(v1 + 8320));
    if ( *(_BYTE *)(((v1 + 1120) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1120) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1120, v1 + 1104);
    *(_DWORD *)(v1 + 1120) = 65;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[29],true>(
      (std::pair<std::string,std::string > *const)(v1 + 8416),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[29])"EVENT_MECHANICUS_PICKED_CARD");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 19432),
      (data::EventType *)(v1 + 1120),
      (const std::pair<std::string,std::string > *)(v1 + 8416));
    if ( *(_BYTE *)(((v1 + 1136) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1136) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1136, v1 + 1120);
    *(_DWORD *)(v1 + 1136) = 66;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[29],true>(
      (std::pair<std::string,std::string > *const)(v1 + 8512),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[29])"EVENT_POOL_MONSTER_TIDE_OVER");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 19504),
      (data::EventType *)(v1 + 1136),
      (const std::pair<std::string,std::string > *)(v1 + 8512));
    if ( *(_BYTE *)(((v1 + 1152) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1152) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1152, v1 + 1136);
    *(_DWORD *)(v1 + 1152) = 67;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[31],true>(
      (std::pair<std::string,std::string > *const)(v1 + 8608),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[31])"EVENT_POOL_MONSTER_TIDE_CREATE");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 19576),
      (data::EventType *)(v1 + 1152),
      (const std::pair<std::string,std::string > *)(v1 + 8608));
    if ( *(_BYTE *)(((v1 + 1168) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1168) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1168, v1 + 1152);
    *(_DWORD *)(v1 + 1168) = 68;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[28],true>(
      (std::pair<std::string,std::string > *const)(v1 + 8704),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[28])"EVENT_POOL_MONSTER_TIDE_DIE");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 19648),
      (data::EventType *)(v1 + 1168),
      (const std::pair<std::string,std::string > *)(v1 + 8704));
    if ( *(_BYTE *)(((v1 + 1184) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1184) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1184, v1 + 1168);
    *(_DWORD *)(v1 + 1184) = 69;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[30],true>(
      (std::pair<std::string,std::string > *const)(v1 + 8800),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[30])"EVENT_DUNGEON_AVATAR_SLIP_DIE");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 19720),
      (data::EventType *)(v1 + 1184),
      (const std::pair<std::string,std::string > *)(v1 + 8800));
    if ( *(_BYTE *)(((v1 + 1200) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1200) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1200, v1 + 1184);
    *(_DWORD *)(v1 + 1200) = 70;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[20],true>(
      (std::pair<std::string,std::string > *const)(v1 + 8896),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[20])"EVENT_GALLERY_START");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 19792),
      (data::EventType *)(v1 + 1200),
      (const std::pair<std::string,std::string > *)(v1 + 8896));
    if ( *(_BYTE *)(((v1 + 1216) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1216) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1216, v1 + 1200);
    *(_DWORD *)(v1 + 1216) = 71;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[19],true>(
      (std::pair<std::string,std::string > *const)(v1 + 8992),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[19])"EVENT_GALLERY_STOP");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 19864),
      (data::EventType *)(v1 + 1216),
      (const std::pair<std::string,std::string > *)(v1 + 8992));
    if ( *(_BYTE *)(((v1 + 1232) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1232) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1232, v1 + 1216);
    *(_DWORD *)(v1 + 1232) = 72;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 9088),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[21])"EVENT_TIME_AXIS_PASS");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 19936),
      (data::EventType *)(v1 + 1232),
      (const std::pair<std::string,std::string > *)(v1 + 9088));
    if ( *(_BYTE *)(((v1 + 1248) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1248) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1248, v1 + 1232);
    *(_DWORD *)(v1 + 1248) = 73;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[42],true>(
      (std::pair<std::string,std::string > *const)(v1 + 9184),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[42])"EVENT_FLEUR_FAIR_DUNGEON_ALL_PLAYER_ENTER");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 20008),
      (data::EventType *)(v1 + 1248),
      (const std::pair<std::string,std::string > *)(v1 + 9184));
    if ( *(_BYTE *)(((v1 + 1264) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1264) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1264, v1 + 1248);
    *(_DWORD *)(v1 + 1264) = 74;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[22],true>(
      (std::pair<std::string,std::string > *const)(v1 + 9280),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[22])"EVENT_GADGETTALK_DONE");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 20080),
      (data::EventType *)(v1 + 1264),
      (const std::pair<std::string,std::string > *)(v1 + 9280));
    if ( *(_BYTE *)(((v1 + 1280) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1280) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1280, v1 + 1264);
    *(_DWORD *)(v1 + 1280) = 75;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[20],true>(
      (std::pair<std::string,std::string > *const)(v1 + 9376),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[20])"EVENT_SET_GAME_TIME");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 20152),
      (data::EventType *)(v1 + 1280),
      (const std::pair<std::string,std::string > *)(v1 + 9376));
    if ( *(_BYTE *)(((v1 + 1296) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1296) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1296, v1 + 1280);
    *(_DWORD *)(v1 + 1296) = 76;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[32],true>(
      (std::pair<std::string,std::string > *const)(v1 + 9472),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[32])"EVENT_HIDE_AND_SEEK_PLAYER_QUIT");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 20224),
      (data::EventType *)(v1 + 1296),
      (const std::pair<std::string,std::string > *)(v1 + 9472));
    if ( *(_BYTE *)(((v1 + 1312) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1312) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1312, v1 + 1296);
    *(_DWORD *)(v1 + 1312) = 77;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[17],true>(
      (std::pair<std::string,std::string > *const)(v1 + 9568),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[17])"EVENT_AVATAR_DIE");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 20296),
      (data::EventType *)(v1 + 1312),
      (const std::pair<std::string,std::string > *)(v1 + 9568));
    if ( *(_BYTE *)(((v1 + 1328) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1328) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1328, v1 + 1312);
    *(_DWORD *)(v1 + 1328) = 78;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[40],true>(
      (std::pair<std::string,std::string > *const)(v1 + 9664),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[40])"EVENT_SCENE_MULTISTAGE_PLAY_STAGE_START");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 20368),
      (data::EventType *)(v1 + 1328),
      (const std::pair<std::string,std::string > *)(v1 + 9664));
    if ( *(_BYTE *)(((v1 + 1344) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1344) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1344, v1 + 1328);
    *(_DWORD *)(v1 + 1344) = 79;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[28],true>(
      (std::pair<std::string,std::string > *const)(v1 + 9760),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[28])"EVENT_GALLERY_PROGRESS_PASS");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 20440),
      (data::EventType *)(v1 + 1344),
      (const std::pair<std::string,std::string > *)(v1 + 9760));
    if ( *(_BYTE *)(((v1 + 1360) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1360) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1360, v1 + 1344);
    *(_DWORD *)(v1 + 1360) = 80;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[29],true>(
      (std::pair<std::string,std::string > *const)(v1 + 9856),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[29])"EVENT_GALLERY_PROGRESS_EMPTY");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 20512),
      (data::EventType *)(v1 + 1360),
      (const std::pair<std::string,std::string > *)(v1 + 9856));
    if ( *(_BYTE *)(((v1 + 1376) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1376) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1376, v1 + 1360);
    *(_DWORD *)(v1 + 1376) = 81;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[28],true>(
      (std::pair<std::string,std::string > *const)(v1 + 9952),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[28])"EVENT_GALLERY_PROGRESS_FULL");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 20584),
      (data::EventType *)(v1 + 1376),
      (const std::pair<std::string,std::string > *)(v1 + 9952));
    if ( *(_BYTE *)(((v1 + 1392) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1392) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1392, v1 + 1376);
    *(_DWORD *)(v1 + 1392) = 82;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[27],true>(
      (std::pair<std::string,std::string > *const)(v1 + 10048),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[27])"EVENT_HUNTING_FINISH_FINAL");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 20656),
      (data::EventType *)(v1 + 1392),
      (const std::pair<std::string,std::string > *)(v1 + 10048));
    if ( *(_BYTE *)(((v1 + 1408) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1408) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1408, v1 + 1392);
    *(_DWORD *)(v1 + 1408) = 83;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[32],true>(
      (std::pair<std::string,std::string > *const)(v1 + 10144),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[32])"EVENT_USE_WIDGET_TOY_FOX_CAMERA");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 20728),
      (data::EventType *)(v1 + 1408),
      (const std::pair<std::string,std::string > *)(v1 + 10144));
    if ( *(_BYTE *)(((v1 + 1424) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1424) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1424, v1 + 1408);
    *(_DWORD *)(v1 + 1424) = 84;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[26],true>(
      (std::pair<std::string,std::string > *const)(v1 + 10240),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[26])"EVENT_LUNA_RITE_SACRIFICE");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 20800),
      (data::EventType *)(v1 + 1424),
      (const std::pair<std::string,std::string > *)(v1 + 10240));
    if ( *(_BYTE *)(((v1 + 1440) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1440) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1440, v1 + 1424);
    *(_DWORD *)(v1 + 1440) = 85;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[29],true>(
      (std::pair<std::string,std::string > *const)(v1 + 10336),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[29])"EVENT_SUMO_SWITCH_TEAM_EVENT");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 20872),
      (data::EventType *)(v1 + 1440),
      (const std::pair<std::string,std::string > *)(v1 + 10336));
    if ( *(_BYTE *)(((v1 + 1456) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1456) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1456, v1 + 1440);
    *(_DWORD *)(v1 + 1456) = 86;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[20],true>(
      (std::pair<std::string,std::string > *const)(v1 + 10432),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[20])"EVENT_FISHING_START");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 20944),
      (data::EventType *)(v1 + 1456),
      (const std::pair<std::string,std::string > *)(v1 + 10432));
    if ( *(_BYTE *)(((v1 + 1472) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1472) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1472, v1 + 1456);
    *(_DWORD *)(v1 + 1472) = 87;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[19],true>(
      (std::pair<std::string,std::string > *const)(v1 + 10528),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[19])"EVENT_FISHING_STOP");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 21016),
      (data::EventType *)(v1 + 1472),
      (const std::pair<std::string,std::string > *)(v1 + 10528));
    if ( *(_BYTE *)(((v1 + 1488) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1488) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1488, v1 + 1472);
    *(_DWORD *)(v1 + 1488) = 88;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[25],true>(
      (std::pair<std::string,std::string > *const)(v1 + 10624),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[25])"EVENT_FISHING_QTE_FINISH");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 21088),
      (data::EventType *)(v1 + 1488),
      (const std::pair<std::string,std::string > *)(v1 + 10624));
    if ( *(_BYTE *)(((v1 + 1504) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1504) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1504, v1 + 1488);
    *(_DWORD *)(v1 + 1504) = 89;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[27],true>(
      (std::pair<std::string,std::string > *const)(v1 + 10720),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[27])"EVENT_FISHING_TIMEOUT_FLEE");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 21160),
      (data::EventType *)(v1 + 1504),
      (const std::pair<std::string,std::string > *)(v1 + 10720));
    if ( *(_BYTE *)(((v1 + 1520) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1520) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1520, v1 + 1504);
    *(_DWORD *)(v1 + 1520) = 90;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[30],true>(
      (std::pair<std::string,std::string > *const)(v1 + 10816),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[30])"EVENT_ROGUE_CELL_STATE_CHANGE");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 21232),
      (data::EventType *)(v1 + 1520),
      (const std::pair<std::string,std::string > *)(v1 + 10816));
    if ( *(_BYTE *)(((v1 + 1536) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1536) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1536, v1 + 1520);
    *(_DWORD *)(v1 + 1536) = 91;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[27],true>(
      (std::pair<std::string,std::string > *const)(v1 + 10912),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[27])"EVENT_ROGUE_CELL_CONSTRUCT");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 21304),
      (data::EventType *)(v1 + 1536),
      (const std::pair<std::string,std::string > *)(v1 + 10912));
    if ( *(_BYTE *)(((v1 + 1552) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1552) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1552, v1 + 1536);
    *(_DWORD *)(v1 + 1552) = 92;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[36],true>(
      (std::pair<std::string,std::string > *const)(v1 + 11008),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[36])"EVENT_ROGUE_CELL_FINISH_SELECT_CARD");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 21376),
      (data::EventType *)(v1 + 1552),
      (const std::pair<std::string,std::string > *)(v1 + 11008));
    if ( *(_BYTE *)(((v1 + 1568) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1568) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1568, v1 + 1552);
    *(_DWORD *)(v1 + 1568) = 93;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[26],true>(
      (std::pair<std::string,std::string > *const)(v1 + 11104),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[26])"EVENT_ANY_MONSTER_CAPTURE");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 21448),
      (data::EventType *)(v1 + 1568),
      (const std::pair<std::string,std::string > *)(v1 + 11104));
    if ( *(_BYTE *)(((v1 + 1584) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1584) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1584, v1 + 1568);
    *(_DWORD *)(v1 + 1584) = 94;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[31],true>(
      (std::pair<std::string,std::string > *const)(v1 + 11200),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[31])"EVENT_ACTIVITY_INTERACT_GADGET");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 21520),
      (data::EventType *)(v1 + 1584),
      (const std::pair<std::string,std::string > *)(v1 + 11200));
    if ( *(_BYTE *)(((v1 + 1600) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1600) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1600, v1 + 1584);
    *(_DWORD *)(v1 + 1600) = 95;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[22],true>(
      (std::pair<std::string,std::string > *const)(v1 + 11296),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[22])"EVENT_CHALLENGE_PAUSE");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 21592),
      (data::EventType *)(v1 + 1600),
      (const std::pair<std::string,std::string > *)(v1 + 11296));
    if ( *(_BYTE *)(((v1 + 1616) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1616) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1616, v1 + 1600);
    *(_DWORD *)(v1 + 1616) = 96;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[23],true>(
      (std::pair<std::string,std::string > *const)(v1 + 11392),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[23])"EVENT_LEVEL_TAG_CHANGE");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 21664),
      (data::EventType *)(v1 + 1616),
      (const std::pair<std::string,std::string > *)(v1 + 11392));
    if ( *(_BYTE *)(((v1 + 1632) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1632) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1632, v1 + 1616);
    *(_DWORD *)(v1 + 1632) = 97;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[27],true>(
      (std::pair<std::string,std::string > *const)(v1 + 11488),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[27])"EVENT_CUSTOM_DUNGEON_START");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 21736),
      (data::EventType *)(v1 + 1632),
      (const std::pair<std::string,std::string > *)(v1 + 11488));
    if ( *(_BYTE *)(((v1 + 1648) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1648) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1648, v1 + 1632);
    *(_DWORD *)(v1 + 1648) = 98;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[29],true>(
      (std::pair<std::string,std::string > *const)(v1 + 11584),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[29])"EVENT_CUSTOM_DUNGEON_RESTART");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 21808),
      (data::EventType *)(v1 + 1648),
      (const std::pair<std::string,std::string > *)(v1 + 11584));
    if ( *(_BYTE *)(((v1 + 1664) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1664) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1664, v1 + 1648);
    *(_DWORD *)(v1 + 1664) = 99;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[30],true>(
      (std::pair<std::string,std::string > *const)(v1 + 11680),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[30])"EVENT_CUSTOM_DUNGEON_REACTIVE");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 21880),
      (data::EventType *)(v1 + 1664),
      (const std::pair<std::string,std::string > *)(v1 + 11680));
    if ( *(_BYTE *)(((v1 + 1680) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1680) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1680, v1 + 1664);
    *(_DWORD *)(v1 + 1680) = 100;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[31],true>(
      (std::pair<std::string,std::string > *const)(v1 + 11776),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[31])"EVENT_CUSTOM_DUNGEON_OUT_STUCK");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 21952),
      (data::EventType *)(v1 + 1680),
      (const std::pair<std::string,std::string > *)(v1 + 11776));
    if ( *(_BYTE *)(((v1 + 1696) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1696) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1696, v1 + 1680);
    *(_DWORD *)(v1 + 1696) = 101;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[30],true>(
      (std::pair<std::string,std::string > *const)(v1 + 11872),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[30])"EVENT_CUSTOM_DUNGEON_EXIT_TRY");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 22024),
      (data::EventType *)(v1 + 1696),
      (const std::pair<std::string,std::string > *)(v1 + 11872));
    if ( *(_BYTE *)(((v1 + 1712) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1712) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1712, v1 + 1696);
    *(_DWORD *)(v1 + 1712) = 102;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[38],true>(
      (std::pair<std::string,std::string > *const)(v1 + 11968),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[38])"EVENT_CUSTOM_DUNGEON_OFFICIAL_RESTART");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 22096),
      (data::EventType *)(v1 + 1712),
      (const std::pair<std::string,std::string > *)(v1 + 11968));
    if ( *(_BYTE *)(((v1 + 1728) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1728) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1728, v1 + 1712);
    *(_DWORD *)(v1 + 1728) = 103;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[40],true>(
      (std::pair<std::string,std::string > *const)(v1 + 12064),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[40])"EVENT_ANY_MONSTER_CAPTURE_AND_DISAPPEAR");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 22168),
      (data::EventType *)(v1 + 1728),
      (const std::pair<std::string,std::string > *)(v1 + 12064));
    if ( *(_BYTE *)(((v1 + 1744) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1744) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1744, v1 + 1728);
    *(_DWORD *)(v1 + 1744) = 104;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[23],true>(
      (std::pair<std::string,std::string > *const)(v1 + 12160),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[23])"EVENT_MICHIAE_INTERACT");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 22240),
      (data::EventType *)(v1 + 1744),
      (const std::pair<std::string,std::string > *)(v1 + 12160));
    if ( *(_BYTE *)(((v1 + 1760) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1760) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1760, v1 + 1744);
    *(_DWORD *)(v1 + 1760) = 105;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[24],true>(
      (std::pair<std::string,std::string > *const)(v1 + 12256),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[24])"EVENT_SELECT_UIINTERACT");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 22312),
      (data::EventType *)(v1 + 1760),
      (const std::pair<std::string,std::string > *)(v1 + 12256));
    if ( *(_BYTE *)(((v1 + 1776) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1776) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1776, v1 + 1760);
    *(_DWORD *)(v1 + 1776) = 106;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[17],true>(
      (std::pair<std::string,std::string > *const)(v1 + 12352),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[17])"EVENT_LUA_NOTIFY");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 22384),
      (data::EventType *)(v1 + 1776),
      (const std::pair<std::string,std::string > *)(v1 + 12352));
    if ( *(_BYTE *)(((v1 + 1792) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1792) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1792, v1 + 1776);
    *(_DWORD *)(v1 + 1792) = 107;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[19],true>(
      (std::pair<std::string,std::string > *const)(v1 + 12448),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[19])"EVENT_PHOTO_FINISH");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 22456),
      (data::EventType *)(v1 + 1792),
      (const std::pair<std::string,std::string > *)(v1 + 12448));
    if ( *(_BYTE *)(((v1 + 1808) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1808) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1808, v1 + 1792);
    *(_DWORD *)(v1 + 1808) = 108;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[27],true>(
      (std::pair<std::string,std::string > *const)(v1 + 12544),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[27])"EVENT_IRODORI_MASTER_READY");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 22528),
      (data::EventType *)(v1 + 1808),
      (const std::pair<std::string,std::string > *)(v1 + 12544));
    if ( *(_BYTE *)(((v1 + 1824) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1824) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1824, v1 + 1808);
    *(_DWORD *)(v1 + 1824) = 109;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[24],true>(
      (std::pair<std::string,std::string > *const)(v1 + 12640),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[24])"EVENT_ROGUE_START_FIGHT");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 22600),
      (data::EventType *)(v1 + 1824),
      (const std::pair<std::string,std::string > *)(v1 + 12640));
    if ( *(_BYTE *)(((v1 + 1840) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1840) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1840, v1 + 1824);
    *(_DWORD *)(v1 + 1840) = 110;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[32],true>(
      (std::pair<std::string,std::string > *const)(v1 + 12736),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[32])"EVENT_ROGUE_CREAGE_FIGHT_GADGET");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 22672),
      (data::EventType *)(v1 + 1840),
      (const std::pair<std::string,std::string > *)(v1 + 12736));
    if ( *(_BYTE *)(((v1 + 1856) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1856) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1856, v1 + 1840);
    *(_DWORD *)(v1 + 1856) = 111;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[33],true>(
      (std::pair<std::string,std::string > *const)(v1 + 12832),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[33])"EVENT_ROGUE_CREAGE_REPAIR_GADGET");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 22744),
      (data::EventType *)(v1 + 1856),
      (const std::pair<std::string,std::string > *)(v1 + 12832));
    if ( *(_BYTE *)(((v1 + 1872) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1872) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1872, v1 + 1856);
    *(_DWORD *)(v1 + 1872) = 112;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[24],true>(
      (std::pair<std::string,std::string > *const)(v1 + 12928),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[24])"EVENT_ROGUE_OPEN_ACCESS");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 22816),
      (data::EventType *)(v1 + 1872),
      (const std::pair<std::string,std::string > *)(v1 + 12928));
    if ( *(_BYTE *)(((v1 + 1888) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1888) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1888, v1 + 1872);
    *(_DWORD *)(v1 + 1888) = 113;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[29],true>(
      (std::pair<std::string,std::string > *const)(v1 + 13024),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[29])"EVENT_GADGET_GIVING_FINISHED");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 22888),
      (data::EventType *)(v1 + 1888),
      (const std::pair<std::string,std::string > *)(v1 + 13024));
    if ( *(_BYTE *)(((v1 + 1904) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1904) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1904, v1 + 1888);
    *(_DWORD *)(v1 + 1904) = 114;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[31],true>(
      (std::pair<std::string,std::string > *const)(v1 + 13120),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[31])"EVENT_OBSERVATION_POINT_NOTIFY");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 22960),
      (data::EventType *)(v1 + 1904),
      (const std::pair<std::string,std::string > *)(v1 + 13120));
    if ( *(_BYTE *)(((v1 + 1920) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1920) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1920, v1 + 1904);
    *(_DWORD *)(v1 + 1920) = 115;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[29],true>(
      (std::pair<std::string,std::string > *const)(v1 + 13216),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[29])"EVENT_GADGET_GIVING_TAKEBACK");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 23032),
      (data::EventType *)(v1 + 1920),
      (const std::pair<std::string,std::string > *)(v1 + 13216));
    if ( *(_BYTE *)(((v1 + 1936) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1936) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1936, v1 + 1920);
    *(_DWORD *)(v1 + 1936) = 116;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[26],true>(
      (std::pair<std::string,std::string > *const)(v1 + 13312),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[26])"EVENT_ECHO_SHELL_INTERACT");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 23104),
      (data::EventType *)(v1 + 1936),
      (const std::pair<std::string,std::string > *)(v1 + 13312));
    if ( *(_BYTE *)(((v1 + 1952) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1952) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1952, v1 + 1936);
    *(_DWORD *)(v1 + 1952) = 117;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[35],true>(
      (std::pair<std::string,std::string > *const)(v1 + 13408),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[35])"EVENT_ARANARA_COLLECTION_COLLECTED");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 23176),
      (data::EventType *)(v1 + 1952),
      (const std::pair<std::string,std::string > *)(v1 + 13408));
    if ( *(_BYTE *)(((v1 + 1968) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1968) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1968, v1 + 1952);
    *(_DWORD *)(v1 + 1968) = 118;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[25],true>(
      (std::pair<std::string,std::string > *const)(v1 + 13504),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[25])"EVENT_DEATH_ZONE_OBSERVE");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 23248),
      (data::EventType *)(v1 + 1968),
      (const std::pair<std::string,std::string > *)(v1 + 13504));
    if ( *(_BYTE *)(((v1 + 1984) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 1984) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 1984, v1 + 1968);
    *(_DWORD *)(v1 + 1984) = 119;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[31],true>(
      (std::pair<std::string,std::string > *const)(v1 + 13600),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[31])"EVENT_DEATH_ZONE_STATUS_CHANGE");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 23320),
      (data::EventType *)(v1 + 1984),
      (const std::pair<std::string,std::string > *)(v1 + 13600));
    if ( *(_BYTE *)(((v1 + 2000) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 2000) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 2000, v1 + 1984);
    *(_DWORD *)(v1 + 2000) = 120;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[33],true>(
      (std::pair<std::string,std::string > *const)(v1 + 13696),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[33])"EVENT_GALLERY_PLAYER_LEAVE_SCENE");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 23392),
      (data::EventType *)(v1 + 2000),
      (const std::pair<std::string,std::string > *)(v1 + 13696));
    if ( *(_BYTE *)(((v1 + 2016) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 2016) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 2016, v1 + 2000);
    *(_DWORD *)(v1 + 2016) = 2701;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[23],true>(
      (std::pair<std::string,std::string > *const)(v1 + 13792),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[23])"EVENT_PLATFORM_ARRIVAL");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 23464),
      (data::EventType *)(v1 + 2016),
      (const std::pair<std::string,std::string > *)(v1 + 13792));
    if ( *(_BYTE *)(((v1 + 2032) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 2032) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 2032, v1 + 2016);
    *(_DWORD *)(v1 + 2032) = 2800;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[39],true>(
      (std::pair<std::string,std::string > *const)(v1 + 13888),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[39])"EVENT_PLAYER_BACK_GALLERY_REVIVE_POINT");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 23536),
      (data::EventType *)(v1 + 2032),
      (const std::pair<std::string,std::string > *)(v1 + 13888));
    if ( *(_BYTE *)(((v1 + 2048) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 2048) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 2048, v1 + 2032);
    *(_DWORD *)(v1 + 2048) = 2801;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[43],true>(
      (std::pair<std::string,std::string > *const)(v1 + 13984),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[43])"EVENT_GALLERY_CANNOT_START_AFTER_COUNTDOWN");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 23608),
      (data::EventType *)(v1 + 2048),
      (const std::pair<std::string,std::string > *)(v1 + 13984));
    if ( *(_BYTE *)(((v1 + 2064) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 2064) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 2064, v1 + 2048);
    *(_DWORD *)(v1 + 2064) = 3000;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[37],true>(
      (std::pair<std::string,std::string > *const)(v1 + 14080),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[37])"EVENT_CUSTOM_GADGET_SLOT_MAP_CHANGED");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 23680),
      (data::EventType *)(v1 + 2064),
      (const std::pair<std::string,std::string > *)(v1 + 14080));
    if ( *(_BYTE *)(((v1 + 2080) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 2080) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 2080, v1 + 2064);
    *(_DWORD *)(v1 + 2080) = 3001;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[33],true>(
      (std::pair<std::string,std::string > *const)(v1 + 14176),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[33])"EVENT_GRAVEN_PHOTO_REFRESH_GROUP");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 23752),
      (data::EventType *)(v1 + 2080),
      (const std::pair<std::string,std::string > *)(v1 + 14176));
    if ( *(_BYTE *)(((v1 + 2096) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 2096) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 2096, v1 + 2080);
    *(_DWORD *)(v1 + 2096) = 3101;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[32],true>(
      (std::pair<std::string,std::string > *const)(v1 + 14272),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[32])"EVENT_GADGET_CHAIN_LEVEL_CHANGE");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 23824),
      (data::EventType *)(v1 + 2096),
      (const std::pair<std::string,std::string > *)(v1 + 14272));
    if ( *(_BYTE *)(((v1 + 2112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 2112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 2112, v1 + 2096);
    *(_DWORD *)(v1 + 2112) = 3200;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[31],true>(
      (std::pair<std::string,std::string > *const)(v1 + 14368),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[31])"EVENT_GCG_TAVERN_SCENE_REFRESH");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 23896),
      (data::EventType *)(v1 + 2112),
      (const std::pair<std::string,std::string > *)(v1 + 14368));
    if ( *(_BYTE *)(((v1 + 2128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 2128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 2128, v1 + 2112);
    *(_DWORD *)(v1 + 2128) = 3201;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[46],true>(
      (std::pair<std::string,std::string > *const)(v1 + 14464),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[46])"EVENT_CHAR_AMUSEMENT_DUNGEON_ALL_PLAYER_ENTER");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 23968),
      (data::EventType *)(v1 + 2128),
      (const std::pair<std::string,std::string > *)(v1 + 14464));
    if ( *(_BYTE *)(((v1 + 2144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 2144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 2144, v1 + 2128);
    *(_DWORD *)(v1 + 2144) = 3202;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[34],true>(
      (std::pair<std::string,std::string > *const)(v1 + 14560),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[34])"EVENT_TRAINING_FUNGUS_SELECT_DONE");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 24040),
      (data::EventType *)(v1 + 2144),
      (const std::pair<std::string,std::string > *)(v1 + 14560));
    if ( *(_BYTE *)(((v1 + 2160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 2160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 2160, v1 + 2144);
    *(_DWORD *)(v1 + 2160) = 3300;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[24],true>(
      (std::pair<std::string,std::string > *const)(v1 + 14656),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[24])"EVENT_GALLERY_PRE_START");
    std::pair<data::EventType const,std::pair<std::string,std::string>>::pair<data::EventType,true>(
      (std::pair<const data::EventType,std::pair<std::string,std::string > > *const)(v1 + 24112),
      (data::EventType *)(v1 + 2160),
      (const std::pair<std::string,std::string > *)(v1 + 14656));
    std::allocator<std::pair<data::EventType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::EventType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    std::map<data::EventType,std::pair<std::string,std::string>>::map(
      &data::getEventTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::EventType,std::pair<std::string,std::string > > >)__PAIR128__(131LL, v1 + 14752),
      (const std::less<data::EventType> *)(v1 + 48),
      (const std::map<data::EventType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getEventTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::EventType,std::pair<std::string,std::string>>::~map,
      &data::getEventTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::EventType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::EventType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::EventType,std::pair<std::string,std::string > > *)(v1 + 24184);
          i != (std::pair<const data::EventType,std::pair<std::string,std::string > > *)(v1 + 14752);
          std::pair<data::EventType const,std::pair<std::string,std::string>>::~pair(i) )
    {
      --i;
    }
    __asan_poison_stack_memory(v1 + 14752, 9432LL);
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 14656));
    v5 = (_DWORD *)(((v1 + 14656) >> 3) + 2147450880);
    *v5 = -117901064;
    v5[1] = -117901064;
    *(_BYTE *)(((v1 + 2160) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 14560));
    v6 = (_DWORD *)(((v1 + 14560) >> 3) + 2147450880);
    *v6 = -117901064;
    v6[1] = -117901064;
    *(_BYTE *)(((v1 + 2144) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 14464));
    v7 = (_DWORD *)(((v1 + 14464) >> 3) + 2147450880);
    *v7 = -117901064;
    v7[1] = -117901064;
    *(_BYTE *)(((v1 + 2128) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 14368));
    v8 = (_DWORD *)(((v1 + 14368) >> 3) + 2147450880);
    *v8 = -117901064;
    v8[1] = -117901064;
    *(_BYTE *)(((v1 + 2112) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 14272));
    v9 = (_DWORD *)(((v1 + 14272) >> 3) + 2147450880);
    *v9 = -117901064;
    v9[1] = -117901064;
    *(_BYTE *)(((v1 + 2096) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 14176));
    v10 = (_DWORD *)(((v1 + 14176) >> 3) + 2147450880);
    *v10 = -117901064;
    v10[1] = -117901064;
    *(_BYTE *)(((v1 + 2080) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 14080));
    v11 = (_DWORD *)(((v1 + 14080) >> 3) + 2147450880);
    *v11 = -117901064;
    v11[1] = -117901064;
    *(_BYTE *)(((v1 + 2064) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 13984));
    v12 = (_DWORD *)(((v1 + 13984) >> 3) + 2147450880);
    *v12 = -117901064;
    v12[1] = -117901064;
    *(_BYTE *)(((v1 + 2048) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 13888));
    v13 = (_DWORD *)(((v1 + 13888) >> 3) + 2147450880);
    *v13 = -117901064;
    v13[1] = -117901064;
    *(_BYTE *)(((v1 + 2032) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 13792));
    v14 = (_DWORD *)(((v1 + 13792) >> 3) + 2147450880);
    *v14 = -117901064;
    v14[1] = -117901064;
    *(_BYTE *)(((v1 + 2016) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 13696));
    v15 = (_DWORD *)(((v1 + 13696) >> 3) + 2147450880);
    *v15 = -117901064;
    v15[1] = -117901064;
    *(_BYTE *)(((v1 + 2000) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 13600));
    v16 = (_DWORD *)(((v1 + 13600) >> 3) + 2147450880);
    *v16 = -117901064;
    v16[1] = -117901064;
    *(_BYTE *)(((v1 + 1984) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 13504));
    v17 = (_DWORD *)(((v1 + 13504) >> 3) + 2147450880);
    *v17 = -117901064;
    v17[1] = -117901064;
    *(_BYTE *)(((v1 + 1968) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 13408));
    v18 = (_DWORD *)(((v1 + 13408) >> 3) + 2147450880);
    *v18 = -117901064;
    v18[1] = -117901064;
    *(_BYTE *)(((v1 + 1952) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 13312));
    v19 = (_DWORD *)(((v1 + 13312) >> 3) + 2147450880);
    *v19 = -117901064;
    v19[1] = -117901064;
    *(_BYTE *)(((v1 + 1936) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 13216));
    v20 = (_DWORD *)(((v1 + 13216) >> 3) + 2147450880);
    *v20 = -117901064;
    v20[1] = -117901064;
    *(_BYTE *)(((v1 + 1920) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 13120));
    v21 = (_DWORD *)(((v1 + 13120) >> 3) + 2147450880);
    *v21 = -117901064;
    v21[1] = -117901064;
    *(_BYTE *)(((v1 + 1904) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 13024));
    v22 = (_DWORD *)(((v1 + 13024) >> 3) + 2147450880);
    *v22 = -117901064;
    v22[1] = -117901064;
    *(_BYTE *)(((v1 + 1888) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 12928));
    v23 = (_DWORD *)(((v1 + 12928) >> 3) + 2147450880);
    *v23 = -117901064;
    v23[1] = -117901064;
    *(_BYTE *)(((v1 + 1872) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 12832));
    v24 = (_DWORD *)(((v1 + 12832) >> 3) + 2147450880);
    *v24 = -117901064;
    v24[1] = -117901064;
    *(_BYTE *)(((v1 + 1856) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 12736));
    v25 = (_DWORD *)(((v1 + 12736) >> 3) + 2147450880);
    *v25 = -117901064;
    v25[1] = -117901064;
    *(_BYTE *)(((v1 + 1840) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 12640));
    v26 = (_DWORD *)(((v1 + 12640) >> 3) + 2147450880);
    *v26 = -117901064;
    v26[1] = -117901064;
    *(_BYTE *)(((v1 + 1824) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 12544));
    v27 = (_DWORD *)(((v1 + 12544) >> 3) + 2147450880);
    *v27 = -117901064;
    v27[1] = -117901064;
    *(_BYTE *)(((v1 + 1808) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 12448));
    v28 = (_DWORD *)(((v1 + 12448) >> 3) + 2147450880);
    *v28 = -117901064;
    v28[1] = -117901064;
    *(_BYTE *)(((v1 + 1792) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 12352));
    v29 = (_DWORD *)(((v1 + 12352) >> 3) + 2147450880);
    *v29 = -117901064;
    v29[1] = -117901064;
    *(_BYTE *)(((v1 + 1776) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 12256));
    v30 = (_DWORD *)(((v1 + 12256) >> 3) + 2147450880);
    *v30 = -117901064;
    v30[1] = -117901064;
    *(_BYTE *)(((v1 + 1760) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 12160));
    v31 = (_DWORD *)(((v1 + 12160) >> 3) + 2147450880);
    *v31 = -117901064;
    v31[1] = -117901064;
    *(_BYTE *)(((v1 + 1744) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 12064));
    v32 = (_DWORD *)(((v1 + 12064) >> 3) + 2147450880);
    *v32 = -117901064;
    v32[1] = -117901064;
    *(_BYTE *)(((v1 + 1728) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 11968));
    v33 = (_DWORD *)(((v1 + 11968) >> 3) + 2147450880);
    *v33 = -117901064;
    v33[1] = -117901064;
    *(_BYTE *)(((v1 + 1712) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 11872));
    v34 = (_DWORD *)(((v1 + 11872) >> 3) + 2147450880);
    *v34 = -117901064;
    v34[1] = -117901064;
    *(_BYTE *)(((v1 + 1696) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 11776));
    v35 = (_DWORD *)(((v1 + 11776) >> 3) + 2147450880);
    *v35 = -117901064;
    v35[1] = -117901064;
    *(_BYTE *)(((v1 + 1680) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 11680));
    v36 = (_DWORD *)(((v1 + 11680) >> 3) + 2147450880);
    *v36 = -117901064;
    v36[1] = -117901064;
    *(_BYTE *)(((v1 + 1664) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 11584));
    v37 = (_DWORD *)(((v1 + 11584) >> 3) + 2147450880);
    *v37 = -117901064;
    v37[1] = -117901064;
    *(_BYTE *)(((v1 + 1648) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 11488));
    v38 = (_DWORD *)(((v1 + 11488) >> 3) + 2147450880);
    *v38 = -117901064;
    v38[1] = -117901064;
    *(_BYTE *)(((v1 + 1632) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 11392));
    v39 = (_DWORD *)(((v1 + 11392) >> 3) + 2147450880);
    *v39 = -117901064;
    v39[1] = -117901064;
    *(_BYTE *)(((v1 + 1616) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 11296));
    v40 = (_DWORD *)(((v1 + 11296) >> 3) + 2147450880);
    *v40 = -117901064;
    v40[1] = -117901064;
    *(_BYTE *)(((v1 + 1600) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 11200));
    v41 = (_DWORD *)(((v1 + 11200) >> 3) + 2147450880);
    *v41 = -117901064;
    v41[1] = -117901064;
    *(_BYTE *)(((v1 + 1584) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 11104));
    v42 = (_DWORD *)(((v1 + 11104) >> 3) + 2147450880);
    *v42 = -117901064;
    v42[1] = -117901064;
    *(_BYTE *)(((v1 + 1568) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 11008));
    v43 = (_DWORD *)(((v1 + 11008) >> 3) + 2147450880);
    *v43 = -117901064;
    v43[1] = -117901064;
    *(_BYTE *)(((v1 + 1552) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 10912));
    v44 = (_DWORD *)(((v1 + 10912) >> 3) + 2147450880);
    *v44 = -117901064;
    v44[1] = -117901064;
    *(_BYTE *)(((v1 + 1536) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 10816));
    v45 = (_DWORD *)(((v1 + 10816) >> 3) + 2147450880);
    *v45 = -117901064;
    v45[1] = -117901064;
    *(_BYTE *)(((v1 + 1520) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 10720));
    v46 = (_DWORD *)(((v1 + 10720) >> 3) + 2147450880);
    *v46 = -117901064;
    v46[1] = -117901064;
    *(_BYTE *)(((v1 + 1504) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 10624));
    v47 = (_DWORD *)(((v1 + 10624) >> 3) + 2147450880);
    *v47 = -117901064;
    v47[1] = -117901064;
    *(_BYTE *)(((v1 + 1488) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 10528));
    v48 = (_DWORD *)(((v1 + 10528) >> 3) + 2147450880);
    *v48 = -117901064;
    v48[1] = -117901064;
    *(_BYTE *)(((v1 + 1472) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 10432));
    v49 = (_DWORD *)(((v1 + 10432) >> 3) + 2147450880);
    *v49 = -117901064;
    v49[1] = -117901064;
    *(_BYTE *)(((v1 + 1456) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 10336));
    v50 = (_DWORD *)(((v1 + 10336) >> 3) + 2147450880);
    *v50 = -117901064;
    v50[1] = -117901064;
    *(_BYTE *)(((v1 + 1440) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 10240));
    v51 = (_DWORD *)(((v1 + 10240) >> 3) + 2147450880);
    *v51 = -117901064;
    v51[1] = -117901064;
    *(_BYTE *)(((v1 + 1424) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 10144));
    v52 = (_DWORD *)(((v1 + 10144) >> 3) + 2147450880);
    *v52 = -117901064;
    v52[1] = -117901064;
    *(_BYTE *)(((v1 + 1408) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 10048));
    v53 = (_DWORD *)(((v1 + 10048) >> 3) + 2147450880);
    *v53 = -117901064;
    v53[1] = -117901064;
    *(_BYTE *)(((v1 + 1392) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 9952));
    v54 = (_DWORD *)(((v1 + 9952) >> 3) + 2147450880);
    *v54 = -117901064;
    v54[1] = -117901064;
    *(_BYTE *)(((v1 + 1376) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 9856));
    v55 = (_DWORD *)(((v1 + 9856) >> 3) + 2147450880);
    *v55 = -117901064;
    v55[1] = -117901064;
    *(_BYTE *)(((v1 + 1360) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 9760));
    v56 = (_DWORD *)(((v1 + 9760) >> 3) + 2147450880);
    *v56 = -117901064;
    v56[1] = -117901064;
    *(_BYTE *)(((v1 + 1344) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 9664));
    v57 = (_DWORD *)(((v1 + 9664) >> 3) + 2147450880);
    *v57 = -117901064;
    v57[1] = -117901064;
    *(_BYTE *)(((v1 + 1328) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 9568));
    v58 = (_DWORD *)(((v1 + 9568) >> 3) + 2147450880);
    *v58 = -117901064;
    v58[1] = -117901064;
    *(_BYTE *)(((v1 + 1312) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 9472));
    v59 = (_DWORD *)(((v1 + 9472) >> 3) + 2147450880);
    *v59 = -117901064;
    v59[1] = -117901064;
    *(_BYTE *)(((v1 + 1296) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 9376));
    v60 = (_DWORD *)(((v1 + 9376) >> 3) + 2147450880);
    *v60 = -117901064;
    v60[1] = -117901064;
    *(_BYTE *)(((v1 + 1280) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 9280));
    v61 = (_DWORD *)(((v1 + 9280) >> 3) + 2147450880);
    *v61 = -117901064;
    v61[1] = -117901064;
    *(_BYTE *)(((v1 + 1264) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 9184));
    v62 = (_DWORD *)(((v1 + 9184) >> 3) + 2147450880);
    *v62 = -117901064;
    v62[1] = -117901064;
    *(_BYTE *)(((v1 + 1248) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 9088));
    v63 = (_DWORD *)(((v1 + 9088) >> 3) + 2147450880);
    *v63 = -117901064;
    v63[1] = -117901064;
    *(_BYTE *)(((v1 + 1232) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 8992));
    v64 = (_DWORD *)(((v1 + 8992) >> 3) + 2147450880);
    *v64 = -117901064;
    v64[1] = -117901064;
    *(_BYTE *)(((v1 + 1216) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 8896));
    v65 = (_DWORD *)(((v1 + 8896) >> 3) + 2147450880);
    *v65 = -117901064;
    v65[1] = -117901064;
    *(_BYTE *)(((v1 + 1200) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 8800));
    v66 = (_DWORD *)(((v1 + 8800) >> 3) + 2147450880);
    *v66 = -117901064;
    v66[1] = -117901064;
    *(_BYTE *)(((v1 + 1184) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 8704));
    v67 = (_DWORD *)(((v1 + 8704) >> 3) + 2147450880);
    *v67 = -117901064;
    v67[1] = -117901064;
    *(_BYTE *)(((v1 + 1168) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 8608));
    v68 = (_DWORD *)(((v1 + 8608) >> 3) + 2147450880);
    *v68 = -117901064;
    v68[1] = -117901064;
    *(_BYTE *)(((v1 + 1152) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 8512));
    v69 = (_DWORD *)(((v1 + 8512) >> 3) + 2147450880);
    *v69 = -117901064;
    v69[1] = -117901064;
    *(_BYTE *)(((v1 + 1136) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 8416));
    v70 = (_DWORD *)(((v1 + 8416) >> 3) + 2147450880);
    *v70 = -117901064;
    v70[1] = -117901064;
    *(_BYTE *)(((v1 + 1120) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 8320));
    v71 = (_DWORD *)(((v1 + 8320) >> 3) + 2147450880);
    *v71 = -117901064;
    v71[1] = -117901064;
    *(_BYTE *)(((v1 + 1104) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 8224));
    v72 = (_DWORD *)(((v1 + 8224) >> 3) + 2147450880);
    *v72 = -117901064;
    v72[1] = -117901064;
    *(_BYTE *)(((v1 + 1088) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 8128));
    v73 = (_DWORD *)(((v1 + 8128) >> 3) + 2147450880);
    *v73 = -117901064;
    v73[1] = -117901064;
    *(_BYTE *)(((v1 + 1072) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 8032));
    v74 = (_DWORD *)(((v1 + 8032) >> 3) + 2147450880);
    *v74 = -117901064;
    v74[1] = -117901064;
    *(_BYTE *)(((v1 + 1056) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 7936));
    v75 = (_DWORD *)(((v1 + 7936) >> 3) + 2147450880);
    *v75 = -117901064;
    v75[1] = -117901064;
    *(_BYTE *)(((v1 + 1040) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 7840));
    v76 = (_DWORD *)(((v1 + 7840) >> 3) + 2147450880);
    *v76 = -117901064;
    v76[1] = -117901064;
    *(_BYTE *)(((v1 + 1024) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 7744));
    v77 = (_DWORD *)(((v1 + 7744) >> 3) + 2147450880);
    *v77 = -117901064;
    v77[1] = -117901064;
    *(_BYTE *)(((v1 + 1008) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 7648));
    v78 = (_DWORD *)(((v1 + 7648) >> 3) + 2147450880);
    *v78 = -117901064;
    v78[1] = -117901064;
    *(_BYTE *)(((v1 + 992) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 7552));
    v79 = (_DWORD *)(((v1 + 7552) >> 3) + 2147450880);
    *v79 = -117901064;
    v79[1] = -117901064;
    *(_BYTE *)(((v1 + 976) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 7456));
    v80 = (_DWORD *)(((v1 + 7456) >> 3) + 2147450880);
    *v80 = -117901064;
    v80[1] = -117901064;
    *(_BYTE *)(((v1 + 960) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 7360));
    v81 = (_DWORD *)(((v1 + 7360) >> 3) + 2147450880);
    *v81 = -117901064;
    v81[1] = -117901064;
    *(_BYTE *)(((v1 + 944) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 7264));
    v82 = (_DWORD *)(((v1 + 7264) >> 3) + 2147450880);
    *v82 = -117901064;
    v82[1] = -117901064;
    *(_BYTE *)(((v1 + 928) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 7168));
    v83 = (_DWORD *)(((v1 + 7168) >> 3) + 2147450880);
    *v83 = -117901064;
    v83[1] = -117901064;
    *(_BYTE *)(((v1 + 912) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 7072));
    v84 = (_DWORD *)(((v1 + 7072) >> 3) + 2147450880);
    *v84 = -117901064;
    v84[1] = -117901064;
    *(_BYTE *)(((v1 + 896) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 6976));
    v85 = (_DWORD *)(((v1 + 6976) >> 3) + 2147450880);
    *v85 = -117901064;
    v85[1] = -117901064;
    *(_BYTE *)(((v1 + 880) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 6880));
    v86 = (_DWORD *)(((v1 + 6880) >> 3) + 2147450880);
    *v86 = -117901064;
    v86[1] = -117901064;
    *(_BYTE *)(((v1 + 864) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 6784));
    v87 = (_DWORD *)(((v1 + 6784) >> 3) + 2147450880);
    *v87 = -117901064;
    v87[1] = -117901064;
    *(_BYTE *)(((v1 + 848) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 6688));
    v88 = (_DWORD *)(((v1 + 6688) >> 3) + 2147450880);
    *v88 = -117901064;
    v88[1] = -117901064;
    *(_BYTE *)(((v1 + 832) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 6592));
    v89 = (_DWORD *)(((v1 + 6592) >> 3) + 2147450880);
    *v89 = -117901064;
    v89[1] = -117901064;
    *(_BYTE *)(((v1 + 816) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 6496));
    v90 = (_DWORD *)(((v1 + 6496) >> 3) + 2147450880);
    *v90 = -117901064;
    v90[1] = -117901064;
    *(_BYTE *)(((v1 + 800) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 6400));
    v91 = (_DWORD *)(((v1 + 6400) >> 3) + 2147450880);
    *v91 = -117901064;
    v91[1] = -117901064;
    *(_BYTE *)(((v1 + 784) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 6304));
    v92 = (_DWORD *)(((v1 + 6304) >> 3) + 2147450880);
    *v92 = -117901064;
    v92[1] = -117901064;
    *(_BYTE *)(((v1 + 768) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 6208));
    v93 = (_DWORD *)(((v1 + 6208) >> 3) + 2147450880);
    *v93 = -117901064;
    v93[1] = -117901064;
    *(_BYTE *)(((v1 + 752) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 6112));
    v94 = (_DWORD *)(((v1 + 6112) >> 3) + 2147450880);
    *v94 = -117901064;
    v94[1] = -117901064;
    *(_BYTE *)(((v1 + 736) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 6016));
    v95 = (_DWORD *)(((v1 + 6016) >> 3) + 2147450880);
    *v95 = -117901064;
    v95[1] = -117901064;
    *(_BYTE *)(((v1 + 720) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 5920));
    v96 = (_DWORD *)(((v1 + 5920) >> 3) + 2147450880);
    *v96 = -117901064;
    v96[1] = -117901064;
    *(_BYTE *)(((v1 + 704) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 5824));
    v97 = (_DWORD *)(((v1 + 5824) >> 3) + 2147450880);
    *v97 = -117901064;
    v97[1] = -117901064;
    *(_BYTE *)(((v1 + 688) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 5728));
    v98 = (_DWORD *)(((v1 + 5728) >> 3) + 2147450880);
    *v98 = -117901064;
    v98[1] = -117901064;
    *(_BYTE *)(((v1 + 672) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 5632));
    v99 = (_DWORD *)(((v1 + 5632) >> 3) + 2147450880);
    *v99 = -117901064;
    v99[1] = -117901064;
    *(_BYTE *)(((v1 + 656) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 5536));
    v100 = (_DWORD *)(((v1 + 5536) >> 3) + 2147450880);
    *v100 = -117901064;
    v100[1] = -117901064;
    *(_BYTE *)(((v1 + 640) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 5440));
    v101 = (_DWORD *)(((v1 + 5440) >> 3) + 2147450880);
    *v101 = -117901064;
    v101[1] = -117901064;
    *(_BYTE *)(((v1 + 624) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 5344));
    v102 = (_DWORD *)(((v1 + 5344) >> 3) + 2147450880);
    *v102 = -117901064;
    v102[1] = -117901064;
    *(_BYTE *)(((v1 + 608) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 5248));
    v103 = (_DWORD *)(((v1 + 5248) >> 3) + 2147450880);
    *v103 = -117901064;
    v103[1] = -117901064;
    *(_BYTE *)(((v1 + 592) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 5152));
    v104 = (_DWORD *)(((v1 + 5152) >> 3) + 2147450880);
    *v104 = -117901064;
    v104[1] = -117901064;
    *(_BYTE *)(((v1 + 576) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 5056));
    v105 = (_DWORD *)(((v1 + 5056) >> 3) + 2147450880);
    *v105 = -117901064;
    v105[1] = -117901064;
    *(_BYTE *)(((v1 + 560) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 4960));
    v106 = (_DWORD *)(((v1 + 4960) >> 3) + 2147450880);
    *v106 = -117901064;
    v106[1] = -117901064;
    *(_BYTE *)(((v1 + 544) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 4864));
    v107 = (_DWORD *)(((v1 + 4864) >> 3) + 2147450880);
    *v107 = -117901064;
    v107[1] = -117901064;
    *(_BYTE *)(((v1 + 528) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 4768));
    v108 = (_DWORD *)(((v1 + 4768) >> 3) + 2147450880);
    *v108 = -117901064;
    v108[1] = -117901064;
    *(_BYTE *)(((v1 + 512) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 4672));
    v109 = (_DWORD *)(((v1 + 4672) >> 3) + 2147450880);
    *v109 = -117901064;
    v109[1] = -117901064;
    *(_BYTE *)(((v1 + 496) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 4576));
    v110 = (_DWORD *)(((v1 + 4576) >> 3) + 2147450880);
    *v110 = -117901064;
    v110[1] = -117901064;
    *(_BYTE *)(((v1 + 480) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 4480));
    v111 = (_DWORD *)(((v1 + 4480) >> 3) + 2147450880);
    *v111 = -117901064;
    v111[1] = -117901064;
    *(_BYTE *)(((v1 + 464) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 4384));
    v112 = (_DWORD *)(((v1 + 4384) >> 3) + 2147450880);
    *v112 = -117901064;
    v112[1] = -117901064;
    *(_BYTE *)(((v1 + 448) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 4288));
    v113 = (_DWORD *)(((v1 + 4288) >> 3) + 2147450880);
    *v113 = -117901064;
    v113[1] = -117901064;
    *(_BYTE *)(((v1 + 432) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 4192));
    v114 = (_DWORD *)(((v1 + 4192) >> 3) + 2147450880);
    *v114 = -117901064;
    v114[1] = -117901064;
    *(_BYTE *)(((v1 + 416) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 4096));
    v115 = (_DWORD *)(((v1 + 4096) >> 3) + 2147450880);
    *v115 = -117901064;
    v115[1] = -117901064;
    *(_BYTE *)(((v1 + 400) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 4000));
    v116 = (_DWORD *)(((v1 + 4000) >> 3) + 2147450880);
    *v116 = -117901064;
    v116[1] = -117901064;
    *(_BYTE *)(((v1 + 384) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 3904));
    v117 = (_DWORD *)(((v1 + 3904) >> 3) + 2147450880);
    *v117 = -117901064;
    v117[1] = -117901064;
    *(_BYTE *)(((v1 + 368) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 3808));
    v118 = (_DWORD *)(((v1 + 3808) >> 3) + 2147450880);
    *v118 = -117901064;
    v118[1] = -117901064;
    *(_BYTE *)(((v1 + 352) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 3712));
    v119 = (_DWORD *)(((v1 + 3712) >> 3) + 2147450880);
    *v119 = -117901064;
    v119[1] = -117901064;
    *(_BYTE *)(((v1 + 336) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 3616));
    v120 = (_DWORD *)(((v1 + 3616) >> 3) + 2147450880);
    *v120 = -117901064;
    v120[1] = -117901064;
    *(_BYTE *)(((v1 + 320) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 3520));
    v121 = (_DWORD *)(((v1 + 3520) >> 3) + 2147450880);
    *v121 = -117901064;
    v121[1] = -117901064;
    *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 3424));
    v122 = (_DWORD *)(((v1 + 3424) >> 3) + 2147450880);
    *v122 = -117901064;
    v122[1] = -117901064;
    *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 3328));
    v123 = (_DWORD *)(((v1 + 3328) >> 3) + 2147450880);
    *v123 = -117901064;
    v123[1] = -117901064;
    *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 3232));
    v124 = (_DWORD *)(((v1 + 3232) >> 3) + 2147450880);
    *v124 = -117901064;
    v124[1] = -117901064;
    *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 3136));
    v125 = (_DWORD *)(((v1 + 3136) >> 3) + 2147450880);
    *v125 = -117901064;
    v125[1] = -117901064;
    *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 3040));
    v126 = (_DWORD *)(((v1 + 3040) >> 3) + 2147450880);
    *v126 = -117901064;
    v126[1] = -117901064;
    *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2944));
    v127 = (_DWORD *)(((v1 + 2944) >> 3) + 2147450880);
    *v127 = -117901064;
    v127[1] = -117901064;
    *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2848));
    v128 = (_DWORD *)(((v1 + 2848) >> 3) + 2147450880);
    *v128 = -117901064;
    v128[1] = -117901064;
    *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2752));
    v129 = (_DWORD *)(((v1 + 2752) >> 3) + 2147450880);
    *v129 = -117901064;
    v129[1] = -117901064;
    *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2656));
    v130 = (_DWORD *)(((v1 + 2656) >> 3) + 2147450880);
    *v130 = -117901064;
    v130[1] = -117901064;
    *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2560));
    v131 = (_DWORD *)(((v1 + 2560) >> 3) + 2147450880);
    *v131 = -117901064;
    v131[1] = -117901064;
    *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2464));
    v132 = (_DWORD *)(((v1 + 2464) >> 3) + 2147450880);
    *v132 = -117901064;
    v132[1] = -117901064;
    *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2368));
    v133 = (_DWORD *)(((v1 + 2368) >> 3) + 2147450880);
    *v133 = -117901064;
    v133[1] = -117901064;
    *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2272));
    v134 = (_DWORD *)(((v1 + 2272) >> 3) + 2147450880);
    *v134 = -117901064;
    v134[1] = -117901064;
    *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 2176));
  }
  if ( v136 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8BE8) = 0LL;
    memset(
      (void *)((unsigned __int64)(v3 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v3 + 2147450880 - (((_DWORD)v3 + 2147450888) & 0xFFFFFFF8) + 3056) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    __asan_stack_free_9(v1, 24448LL, v136);
  }
  return &data::getEventTypeEnumMap[abi:cxx11](void)::m;
};

// Line 460: range 000000000CC90ED3-000000000CC91246
const char *__fastcall data::enumValToStr(data::GadgetType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::GadgetType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::GadgetType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 5 e:459 64 8 8 iter:462 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getGadgetTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::GadgetType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::GadgetType,std::pair<std::string,std::string>>::find(
                                                                                                   map,
                                                                                                   (const std::map<data::GadgetType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::GadgetType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::GadgetType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::GadgetType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::GadgetType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
      "enumValToStr",
      465);
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
    result = "INVALID_GadgetType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::GadgetType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::GadgetType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 472: range 000000000CC91247-000000000CC917FF
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::GadgetType>,false,true>::pointer v10; // rax
  data::GadgetType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::GadgetType> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:481 96 8 9 <unknown> 128 8 5 s:471 160 32 9 <unknown> 224 32 9 <unk"
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
    m = data::getGadgetTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::GadgetType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::GadgetType>::find(
                                                                                       m,
                                                                                       (const std::unordered_map<std::string,data::GadgetType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::GadgetType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::GadgetType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::GadgetType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GadgetType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GadgetType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
        "enumNameToVal",
        484);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::GadgetType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::GadgetType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
      "enumNameToVal",
      475);
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

// Line 493: range 000000000CC91800-000000000CC9225B
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::GadgetType> *i; // r14
  unsigned __int64 v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::GadgetType>,false,true>::pointer v12; // rax
  data::GadgetType second; // ecx
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
                        " <unknown> 144 4 9 <unknown> 160 8 6 it:507 192 8 9 <unknown> 224 8 5 s:492 256 32 9 <unknown> 3"
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::GadgetType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::GadgetType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, e);
      *(_DWORD *)(v2 + 112) = 1;
      std::pair<std::string const,data::GadgetType>::pair<char const(&)[19],data::GadgetType,true>(
        (std::pair<const std::string,data::GadgetType> *const)(v2 + 448),
        (const char (*)[19])byte_1A16C940,
        (data::GadgetType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1A16C940);
      *(_DWORD *)(v2 + 128) = 2;
      std::pair<std::string const,data::GadgetType>::pair<char const(&)[19],data::GadgetType,true>(
        (std::pair<const std::string,data::GadgetType> *const)(v2 + 488),
        (const char (*)[19])byte_1A16C980,
        (data::GadgetType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, byte_1A16C980);
      *(_DWORD *)(v2 + 144) = 3;
      std::pair<std::string const,data::GadgetType>::pair<char const(&)[19],data::GadgetType,true>(
        (std::pair<const std::string,data::GadgetType> *const)(v2 + 528),
        (const char (*)[19])byte_1A16C9C0,
        (data::GadgetType *)(v2 + 144));
      std::allocator<std::pair<std::string const,data::GadgetType>>::allocator((std::allocator<std::pair<const std::string,data::GadgetType> > *const)(v2 + 80));
      std::unordered_map<std::string,data::GadgetType>::unordered_map(
        &data::enumStrToVal(char const*,data::GadgetType &)::m,
        (std::initializer_list<std::pair<const std::string,data::GadgetType> >)__PAIR128__(3LL, v2 + 448),
        0LL,
        (const std::unordered_map<std::string,data::GadgetType>::hasher *)(v2 + 48),
        (const std::unordered_map<std::string,data::GadgetType>::key_equal *)(v2 + 64),
        (const std::unordered_map<std::string,data::GadgetType>::allocator_type *)(v2 + 80));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::GadgetType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::GadgetType>::~unordered_map,
        &data::enumStrToVal(char const*,data::GadgetType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::GadgetType>>::~allocator((std::allocator<std::pair<const std::string,data::GadgetType> > *const)(v2 + 80));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::GadgetType> *)(v2 + 568);
            i != (std::pair<const std::string,data::GadgetType> *)(v2 + 448);
            std::pair<std::string const,data::GadgetType>::~pair(i) )
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
    *(std::unordered_map<std::string,data::GadgetType>::iterator *)(v2 + 160) = std::unordered_map<std::string,data::GadgetType>::find(
                                                                                  &data::enumStrToVal(char const*,data::GadgetType &)::m,
                                                                                  (const std::unordered_map<std::string,data::GadgetType>::key_type *)(v2 + 320));
    std::string::~string((void *)(v2 + 320));
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 96);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, v2 + 320);
    *(std::unordered_map<std::string,data::GadgetType>::iterator *)(v2 + 192) = std::unordered_map<std::string,data::GadgetType>::end(&data::enumStrToVal(char const*,data::GadgetType &)::m);
    v9 = (char *)(v2 + 192);
    v10 = std::__detail::operator==<std::pair<std::string const,data::GadgetType>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GadgetType>,true> *)(v2 + 160),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GadgetType>,true> *)(v2 + 192));
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
        "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
        "enumStrToVal",
        510);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 384),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)(v2 + 224));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::GadgetType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::GadgetType>,false,true> *const)(v2 + 160));
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
      "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
      "enumStrToVal",
      496);
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

// Line 519: range 000000000CC9225C-000000000CC92272
const char *__cdecl data::getDescription(data::GadgetType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 524: range 000000000CC92273-000000000CC92428
bool __cdecl data::isValidGadgetType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::GadgetType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::GadgetType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:525 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidGadgetType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getGadgetTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::GadgetType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::GadgetType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getGadgetTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::GadgetType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::GadgetType,std::pair<std::string,std::string>>::find(
                                                                                                   v6,
                                                                                                   (const std::map<data::GadgetType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::GadgetType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::GadgetType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 530: range 000000000CC92429-000000000CC9258A
bool __cdecl data::isValidGadgetTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::GadgetType> *v5; // rcx
  const std::unordered_map<std::string,data::GadgetType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidGadgetTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getGadgetTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::GadgetType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::GadgetType>::end(v5);
  v6 = data::getGadgetTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::GadgetType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::GadgetType>::find(
                                                                                     v6,
                                                                                     name);
  result = std::__detail::operator!=<std::pair<std::string const,data::GadgetType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GadgetType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GadgetType>,true> *)(v2 + 64));
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

// Line 535: range 000000000CC9258B-000000000CC92AEA
const std::unordered_map<std::string,data::GadgetType> *__cdecl data::getGadgetTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::GadgetType> *i; // r14
  const std::unordered_map<std::string,data::GadgetType> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getGadgetTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -234753535;
  v3[536862723] = -234556924;
  v3[536862724] = -234556924;
  v3[536862730] = -202116109;
  v3[536862731] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getGadgetTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getGadgetTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v0);
    *(_DWORD *)(v1 + 96) = 0;
    std::pair<std::string const,data::GadgetType>::pair<char const(&)[12],data::GadgetType,true>(
      (std::pair<const std::string,data::GadgetType> *const)(v1 + 160),
      (const char (*)[12])"GADGET_NONE",
      (data::GadgetType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "GADGET_NONE");
    *(_DWORD *)(v1 + 112) = 1;
    std::pair<std::string const,data::GadgetType>::pair<char const(&)[19],data::GadgetType,true>(
      (std::pair<const std::string,data::GadgetType> *const)(v1 + 200),
      (const char (*)[19])"GADGET_WORLD_CHECT",
      (data::GadgetType *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, "GADGET_WORLD_CHECT");
    *(_DWORD *)(v1 + 128) = 2;
    std::pair<std::string const,data::GadgetType>::pair<char const(&)[28],data::GadgetType,true>(
      (std::pair<const std::string,data::GadgetType> *const)(v1 + 240),
      (const char (*)[28])"GADGET_DUNGEON_SECRET_CHEST",
      (data::GadgetType *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, "GADGET_DUNGEON_SECRET_CHEST");
    *(_DWORD *)(v1 + 144) = 3;
    std::pair<std::string const,data::GadgetType>::pair<char const(&)[26],data::GadgetType,true>(
      (std::pair<const std::string,data::GadgetType> *const)(v1 + 280),
      (const char (*)[26])"GADGET_DUNGEON_PASS_CHEST",
      (data::GadgetType *)(v1 + 144));
    std::allocator<std::pair<std::string const,data::GadgetType>>::allocator((std::allocator<std::pair<const std::string,data::GadgetType> > *const)(v1 + 80));
    std::unordered_map<std::string,data::GadgetType>::unordered_map(
      &data::getGadgetTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::GadgetType> >)__PAIR128__(4LL, v1 + 160),
      0LL,
      (const std::unordered_map<std::string,data::GadgetType>::hasher *)(v1 + 48),
      (const std::unordered_map<std::string,data::GadgetType>::key_equal *)(v1 + 64),
      (const std::unordered_map<std::string,data::GadgetType>::allocator_type *)(v1 + 80));
    __cxa_guard_release(&`guard variable for'data::getGadgetTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::GadgetType>::~unordered_map,
      &data::getGadgetTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::GadgetType>>::~allocator((std::allocator<std::pair<const std::string,data::GadgetType> > *const)(v1 + 80));
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::GadgetType> *)(v1 + 320);
          i != (std::pair<const std::string,data::GadgetType> *)(v1 + 160);
          std::pair<std::string const,data::GadgetType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getGadgetTypeNameMap[abi:cxx11](void)::m;
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

// Line 547: range 000000000CC92AEB-000000000CC932BB
const std::map<data::GadgetType,std::pair<std::string,std::string >> *__cdecl data::getGadgetTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::GadgetType,std::pair<std::string,std::string > > *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getGadgetTypeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getGadgetTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getGadgetTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 64, v0);
    *(_DWORD *)(v1 + 64) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[12],true>(
      (std::pair<std::string,std::string > *const)(v1 + 128),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[12])"GADGET_NONE");
    std::pair<data::GadgetType const,std::pair<std::string,std::string>>::pair<data::GadgetType,true>(
      (std::pair<const data::GadgetType,std::pair<std::string,std::string > > *const)(v1 + 512),
      (data::GadgetType *)(v1 + 64),
      (const std::pair<std::string,std::string > *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v1 + 64);
    *(_DWORD *)(v1 + 80) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[19],true>(
      (std::pair<std::string,std::string > *const)(v1 + 224),
      (const char (*)[19])byte_1A16C940,
      (const char (*)[19])"GADGET_WORLD_CHECT");
    std::pair<data::GadgetType const,std::pair<std::string,std::string>>::pair<data::GadgetType,true>(
      (std::pair<const data::GadgetType,std::pair<std::string,std::string > > *const)(v1 + 584),
      (data::GadgetType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 224));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[28],true>(
      (std::pair<std::string,std::string > *const)(v1 + 320),
      (const char (*)[19])byte_1A16C980,
      (const char (*)[28])"GADGET_DUNGEON_SECRET_CHEST");
    std::pair<data::GadgetType const,std::pair<std::string,std::string>>::pair<data::GadgetType,true>(
      (std::pair<const data::GadgetType,std::pair<std::string,std::string > > *const)(v1 + 656),
      (data::GadgetType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 320));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 3;
    std::pair<std::string,std::string>::pair<char const(&)[19],char const(&)[26],true>(
      (std::pair<std::string,std::string > *const)(v1 + 416),
      (const char (*)[19])byte_1A16C9C0,
      (const char (*)[26])"GADGET_DUNGEON_PASS_CHEST");
    std::pair<data::GadgetType const,std::pair<std::string,std::string>>::pair<data::GadgetType,true>(
      (std::pair<const data::GadgetType,std::pair<std::string,std::string > > *const)(v1 + 728),
      (data::GadgetType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 416));
    std::allocator<std::pair<data::GadgetType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::GadgetType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    std::map<data::GadgetType,std::pair<std::string,std::string>>::map(
      &data::getGadgetTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::GadgetType,std::pair<std::string,std::string > > >)__PAIR128__(4LL, v1 + 512),
      (const std::less<data::GadgetType> *)(v1 + 32),
      (const std::map<data::GadgetType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 48));
    __cxa_guard_release(&`guard variable for'data::getGadgetTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::GadgetType,std::pair<std::string,std::string>>::~map,
      &data::getGadgetTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::GadgetType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::GadgetType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::GadgetType,std::pair<std::string,std::string > > *)(v1 + 800);
          i != (std::pair<const data::GadgetType,std::pair<std::string,std::string > > *)(v1 + 512);
          std::pair<data::GadgetType const,std::pair<std::string,std::string>>::~pair(i) )
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
  return &data::getGadgetTypeEnumMap[abi:cxx11](void)::m;
};

// Line 559: range 000000000CC932BC-000000000CC9362F
const char *__fastcall data::enumValToStr(data::GroupKillPolicy e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::GroupKillPolicy,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::GroupKillPolicy,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 5 e:558 64 8 8 iter:561 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getGroupKillPolicyEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::GroupKillPolicy,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::GroupKillPolicy,std::pair<std::string,std::string>>::find(map, (const std::map<data::GroupKillPolicy,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::GroupKillPolicy,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::GroupKillPolicy,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::GroupKillPolicy,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::GroupKillPolicy,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
      "enumValToStr",
      564);
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
    result = "INVALID_GroupKillPolicy";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::GroupKillPolicy const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::GroupKillPolicy,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 571: range 000000000CC93630-000000000CC93BE8
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::GroupKillPolicy>,false,true>::pointer v10; // rax
  data::GroupKillPolicy second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::GroupKillPolicy> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:580 96 8 9 <unknown> 128 8 5 s:570 160 32 9 <unknown> 224 32 9 <unk"
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
    m = data::getGroupKillPolicyNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::GroupKillPolicy>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::GroupKillPolicy>::find(
                                                                                            m,
                                                                                            (const std::unordered_map<std::string,data::GroupKillPolicy>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::GroupKillPolicy>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::GroupKillPolicy>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::GroupKillPolicy>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GroupKillPolicy>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GroupKillPolicy>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
        "enumNameToVal",
        583);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::GroupKillPolicy>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::GroupKillPolicy>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
      "enumNameToVal",
      574);
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

// Line 592: range 000000000CC93BE9-000000000CC9423E
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  const char *v6; // rsi
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::GroupKillPolicy>,false,true>::pointer v10; // rax
  data::GroupKillPolicy second; // ecx
  char v12; // dl
  char v14[384]; // [rsp+10h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:603 96 8 9 <unknown> 128 8 5 s:591 160 32 9 <unknown> 224 32 9 <unk"
                        "nown> 288 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::GroupKillPolicy &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::GroupKillPolicy &)::m) )
    {
      data::enumStrToVal(char const*,data::GroupKillPolicy &)::m._M_h._M_buckets = 0LL;
      data::enumStrToVal(char const*,data::GroupKillPolicy &)::m._M_h._M_bucket_count = 0LL;
      data::enumStrToVal(char const*,data::GroupKillPolicy &)::m._M_h._M_before_begin._M_nxt = 0LL;
      data::enumStrToVal(char const*,data::GroupKillPolicy &)::m._M_h._M_element_count = 0LL;
      *(_QWORD *)&data::enumStrToVal(char const*,data::GroupKillPolicy &)::m._M_h._M_rehash_policy._M_max_load_factor = 0LL;
      data::enumStrToVal(char const*,data::GroupKillPolicy &)::m._M_h._M_rehash_policy._M_next_resize = 0LL;
      data::enumStrToVal(char const*,data::GroupKillPolicy &)::m._M_h._M_single_bucket = 0LL;
      std::unordered_map<std::string,data::GroupKillPolicy>::unordered_map(&data::enumStrToVal(char const*,data::GroupKillPolicy &)::m);
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::GroupKillPolicy &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::GroupKillPolicy>::~unordered_map,
        &data::enumStrToVal(char const*,data::GroupKillPolicy &)::m,
        &_dso_handle);
    }
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::GroupKillPolicy>::iterator *)(v2 + 64) = std::unordered_map<std::string,data::GroupKillPolicy>::find(
                                                                                      &data::enumStrToVal(char const*,data::GroupKillPolicy &)::m,
                                                                                      (const std::unordered_map<std::string,data::GroupKillPolicy>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::GroupKillPolicy>::iterator *)(v2 + 96) = std::unordered_map<std::string,data::GroupKillPolicy>::end(&data::enumStrToVal(char const*,data::GroupKillPolicy &)::m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::GroupKillPolicy>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GroupKillPolicy>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GroupKillPolicy>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
        "enumStrToVal",
        606);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_iterator<std::pair<std::string const,data::GroupKillPolicy>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::GroupKillPolicy>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
      "enumStrToVal",
      595);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[14])"s is nullptr!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    result = 0xFFFFFFFFLL;
  }
  if ( v14 == (char *)v2 )
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

// Line 615: range 000000000CC9423F-000000000CC94255
const char *__cdecl data::getDescription(data::GroupKillPolicy e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 620: range 000000000CC94256-000000000CC9440B
bool __cdecl data::isValidGroupKillPolicy(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::GroupKillPolicy,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::GroupKillPolicy,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:621 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidGroupKillPolicy;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getGroupKillPolicyEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::GroupKillPolicy,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::GroupKillPolicy,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getGroupKillPolicyEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::GroupKillPolicy,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::GroupKillPolicy,std::pair<std::string,std::string>>::find(v6, (const std::map<data::GroupKillPolicy,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::GroupKillPolicy,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::GroupKillPolicy,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 626: range 000000000CC9440C-000000000CC9456D
bool __cdecl data::isValidGroupKillPolicyName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::GroupKillPolicy> *v5; // rcx
  const std::unordered_map<std::string,data::GroupKillPolicy> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidGroupKillPolicyName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getGroupKillPolicyNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::GroupKillPolicy>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::GroupKillPolicy>::end(v5);
  v6 = data::getGroupKillPolicyNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::GroupKillPolicy>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::GroupKillPolicy>::find(
                                                                                          v6,
                                                                                          name);
  result = std::__detail::operator!=<std::pair<std::string const,data::GroupKillPolicy>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GroupKillPolicy>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GroupKillPolicy>,true> *)(v2 + 64));
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

// Line 631: range 000000000CC9456E-000000000CC94B88
const std::unordered_map<std::string,data::GroupKillPolicy> *__cdecl data::getGroupKillPolicyNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::GroupKillPolicy> *i; // r14
  const std::unordered_map<std::string,data::GroupKillPolicy> *result; // rax
  char v6[496]; // [rsp+10h] [rbp-1F0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(448LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "9 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 4 9 "
                        "<unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 200 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::getGroupKillPolicyNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -234753535;
  v3[536862723] = -234556924;
  v3[536862724] = -234556924;
  v3[536862725] = 61956;
  v3[536862731] = -218103808;
  v3[536862732] = -202116109;
  v3[536862733] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getGroupKillPolicyNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getGroupKillPolicyNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v0);
    *(_DWORD *)(v1 + 96) = 0;
    std::pair<std::string const,data::GroupKillPolicy>::pair<char const(&)[16],data::GroupKillPolicy,true>(
      (std::pair<const std::string,data::GroupKillPolicy> *const)(v1 + 176),
      (const char (*)[16])"GROUP_KILL_NONE",
      (data::GroupKillPolicy *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "GROUP_KILL_NONE");
    *(_DWORD *)(v1 + 112) = 1;
    std::pair<std::string const,data::GroupKillPolicy>::pair<char const(&)[15],data::GroupKillPolicy,true>(
      (std::pair<const std::string,data::GroupKillPolicy> *const)(v1 + 216),
      (const char (*)[15])"GROUP_KILL_ALL",
      (data::GroupKillPolicy *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, "GROUP_KILL_ALL");
    *(_DWORD *)(v1 + 128) = 2;
    std::pair<std::string const,data::GroupKillPolicy>::pair<char const(&)[19],data::GroupKillPolicy,true>(
      (std::pair<const std::string,data::GroupKillPolicy> *const)(v1 + 256),
      (const char (*)[19])"GROUP_KILL_MONSTER",
      (data::GroupKillPolicy *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, "GROUP_KILL_MONSTER");
    *(_DWORD *)(v1 + 144) = 3;
    std::pair<std::string const,data::GroupKillPolicy>::pair<char const(&)[18],data::GroupKillPolicy,true>(
      (std::pair<const std::string,data::GroupKillPolicy> *const)(v1 + 296),
      (const char (*)[18])"GROUP_KILL_GADGET",
      (data::GroupKillPolicy *)(v1 + 144));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, "GROUP_KILL_GADGET");
    *(_DWORD *)(v1 + 160) = 4;
    std::pair<std::string const,data::GroupKillPolicy>::pair<char const(&)[15],data::GroupKillPolicy,true>(
      (std::pair<const std::string,data::GroupKillPolicy> *const)(v1 + 336),
      (const char (*)[15])"GROUP_KILL_NPC",
      (data::GroupKillPolicy *)(v1 + 160));
    std::allocator<std::pair<std::string const,data::GroupKillPolicy>>::allocator((std::allocator<std::pair<const std::string,data::GroupKillPolicy> > *const)(v1 + 80));
    std::unordered_map<std::string,data::GroupKillPolicy>::unordered_map(
      &data::getGroupKillPolicyNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::GroupKillPolicy> >)__PAIR128__(5LL, v1 + 176),
      0LL,
      (const std::unordered_map<std::string,data::GroupKillPolicy>::hasher *)(v1 + 48),
      (const std::unordered_map<std::string,data::GroupKillPolicy>::key_equal *)(v1 + 64),
      (const std::unordered_map<std::string,data::GroupKillPolicy>::allocator_type *)(v1 + 80));
    __cxa_guard_release(&`guard variable for'data::getGroupKillPolicyNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::GroupKillPolicy>::~unordered_map,
      &data::getGroupKillPolicyNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::GroupKillPolicy>>::~allocator((std::allocator<std::pair<const std::string,data::GroupKillPolicy> > *const)(v1 + 80));
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::GroupKillPolicy> *)(v1 + 376);
          i != (std::pair<const std::string,data::GroupKillPolicy> *)(v1 + 176);
          std::pair<std::string const,data::GroupKillPolicy>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getGroupKillPolicyNameMap[abi:cxx11](void)::m;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0LL;
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
  }
  return result;
};

// Line 644: range 000000000CC94B89-000000000CC9544E
const std::map<data::GroupKillPolicy,std::pair<std::string,std::string >> *__cdecl data::getGroupKillPolicyEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::GroupKillPolicy,std::pair<std::string,std::string > > *i; // r14
  _DWORD *v5; // rax
  _DWORD *v6; // rax
  _DWORD *v7; // rax
  _DWORD *v8; // rax
  char v10[1104]; // [rsp+10h] [rbp-450h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_5(1056LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "13 32 1 9 <unknown> 48 1 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 "
                        "<unknown> 128 4 9 <unknown> 144 64 9 <unknown> 240 64 9 <unknown> 336 64 9 <unknown> 432 64 9 <u"
                        "nknown> 528 64 9 <unknown> 624 360 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::getGroupKillPolicyEnumMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556924;
  v3[536862723] = -234556924;
  v3[536862724] = 61956;
  v3[536862726] = -219021312;
  v3[536862727] = 62194;
  v3[536862729] = -219021312;
  v3[536862730] = 62194;
  v3[536862732] = -219021312;
  v3[536862733] = 62194;
  v3[536862735] = -219021312;
  v3[536862736] = 62194;
  v3[536862738] = -219021312;
  v3[536862739] = 62194;
  v3[536862750] = -218103808;
  v3[536862751] = -202116109;
  v3[536862752] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getGroupKillPolicyEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getGroupKillPolicyEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 64, v0);
    *(_DWORD *)(v1 + 64) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[16],true>(
      (std::pair<std::string,std::string > *const)(v1 + 144),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[16])"GROUP_KILL_NONE");
    std::pair<data::GroupKillPolicy const,std::pair<std::string,std::string>>::pair<data::GroupKillPolicy,true>(
      (std::pair<const data::GroupKillPolicy,std::pair<std::string,std::string > > *const)(v1 + 624),
      (data::GroupKillPolicy *)(v1 + 64),
      (const std::pair<std::string,std::string > *)(v1 + 144));
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v1 + 64);
    *(_DWORD *)(v1 + 80) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[15],true>(
      (std::pair<std::string,std::string > *const)(v1 + 240),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[15])"GROUP_KILL_ALL");
    std::pair<data::GroupKillPolicy const,std::pair<std::string,std::string>>::pair<data::GroupKillPolicy,true>(
      (std::pair<const data::GroupKillPolicy,std::pair<std::string,std::string > > *const)(v1 + 696),
      (data::GroupKillPolicy *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 240));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[19],true>(
      (std::pair<std::string,std::string > *const)(v1 + 336),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[19])"GROUP_KILL_MONSTER");
    std::pair<data::GroupKillPolicy const,std::pair<std::string,std::string>>::pair<data::GroupKillPolicy,true>(
      (std::pair<const data::GroupKillPolicy,std::pair<std::string,std::string > > *const)(v1 + 768),
      (data::GroupKillPolicy *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 336));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 3;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[18],true>(
      (std::pair<std::string,std::string > *const)(v1 + 432),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[18])"GROUP_KILL_GADGET");
    std::pair<data::GroupKillPolicy const,std::pair<std::string,std::string>>::pair<data::GroupKillPolicy,true>(
      (std::pair<const data::GroupKillPolicy,std::pair<std::string,std::string > > *const)(v1 + 840),
      (data::GroupKillPolicy *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 432));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, v1 + 112);
    *(_DWORD *)(v1 + 128) = 4;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[15],true>(
      (std::pair<std::string,std::string > *const)(v1 + 528),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[15])"GROUP_KILL_NPC");
    std::pair<data::GroupKillPolicy const,std::pair<std::string,std::string>>::pair<data::GroupKillPolicy,true>(
      (std::pair<const data::GroupKillPolicy,std::pair<std::string,std::string > > *const)(v1 + 912),
      (data::GroupKillPolicy *)(v1 + 128),
      (const std::pair<std::string,std::string > *)(v1 + 528));
    std::allocator<std::pair<data::GroupKillPolicy const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::GroupKillPolicy,std::pair<std::string,std::string > > > *const)(v1 + 48));
    std::map<data::GroupKillPolicy,std::pair<std::string,std::string>>::map(
      &data::getGroupKillPolicyEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::GroupKillPolicy,std::pair<std::string,std::string > > >)__PAIR128__(5LL, v1 + 624),
      (const std::less<data::GroupKillPolicy> *)(v1 + 32),
      (const std::map<data::GroupKillPolicy,std::pair<std::string,std::string >>::allocator_type *)(v1 + 48));
    __cxa_guard_release(&`guard variable for'data::getGroupKillPolicyEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::GroupKillPolicy,std::pair<std::string,std::string>>::~map,
      &data::getGroupKillPolicyEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::GroupKillPolicy const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::GroupKillPolicy,std::pair<std::string,std::string > > > *const)(v1 + 48));
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::GroupKillPolicy,std::pair<std::string,std::string > > *)(v1 + 984);
          i != (std::pair<const data::GroupKillPolicy,std::pair<std::string,std::string > > *)(v1 + 624);
          std::pair<data::GroupKillPolicy const,std::pair<std::string,std::string>>::~pair(i) )
    {
      --i;
    }
    __asan_poison_stack_memory(v1 + 624, 360LL);
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 528));
    v5 = (_DWORD *)(((v1 + 528) >> 3) + 2147450880);
    *v5 = -117901064;
    v5[1] = -117901064;
    *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 432));
    v6 = (_DWORD *)(((v1 + 432) >> 3) + 2147450880);
    *v6 = -117901064;
    v6[1] = -117901064;
    *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 336));
    v7 = (_DWORD *)(((v1 + 336) >> 3) + 2147450880);
    *v7 = -117901064;
    v7[1] = -117901064;
    *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 240));
    v8 = (_DWORD *)(((v1 + 240) >> 3) + 2147450880);
    *v8 = -117901064;
    v8[1] = -117901064;
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 144));
  }
  if ( v10 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF807C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v3 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v3 + 2147450880 - (((_DWORD)v3 + 2147450888) & 0xFFFFFFF8) + 132) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    __asan_stack_free_5(v1, 1056LL, v10);
  }
  return &data::getGroupKillPolicyEnumMap[abi:cxx11](void)::m;
};

// Line 657: range 000000000CC9544F-000000000CC957C2
const char *__fastcall data::enumValToStr(data::PlatformRotType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::PlatformRotType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::PlatformRotType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 5 e:656 64 8 8 iter:659 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getPlatformRotTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::PlatformRotType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::PlatformRotType,std::pair<std::string,std::string>>::find(map, (const std::map<data::PlatformRotType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::PlatformRotType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::PlatformRotType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::PlatformRotType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::PlatformRotType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
      "enumValToStr",
      662);
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
    result = "INVALID_PlatformRotType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::PlatformRotType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::PlatformRotType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 669: range 000000000CC957C3-000000000CC95D7B
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::PlatformRotType>,false,true>::pointer v10; // rax
  data::PlatformRotType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::PlatformRotType> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:678 96 8 9 <unknown> 128 8 5 s:668 160 32 9 <unknown> 224 32 9 <unk"
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
    m = data::getPlatformRotTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::PlatformRotType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::PlatformRotType>::find(
                                                                                            m,
                                                                                            (const std::unordered_map<std::string,data::PlatformRotType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::PlatformRotType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::PlatformRotType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::PlatformRotType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::PlatformRotType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::PlatformRotType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
        "enumNameToVal",
        681);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::PlatformRotType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::PlatformRotType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
      "enumNameToVal",
      672);
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

// Line 690: range 000000000CC95D7C-000000000CC963D1
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  const char *v6; // rsi
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::PlatformRotType>,false,true>::pointer v10; // rax
  data::PlatformRotType second; // ecx
  char v12; // dl
  char v14[384]; // [rsp+10h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:701 96 8 9 <unknown> 128 8 5 s:689 160 32 9 <unknown> 224 32 9 <unk"
                        "nown> 288 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::PlatformRotType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::PlatformRotType &)::m) )
    {
      data::enumStrToVal(char const*,data::PlatformRotType &)::m._M_h._M_buckets = 0LL;
      data::enumStrToVal(char const*,data::PlatformRotType &)::m._M_h._M_bucket_count = 0LL;
      data::enumStrToVal(char const*,data::PlatformRotType &)::m._M_h._M_before_begin._M_nxt = 0LL;
      data::enumStrToVal(char const*,data::PlatformRotType &)::m._M_h._M_element_count = 0LL;
      *(_QWORD *)&data::enumStrToVal(char const*,data::PlatformRotType &)::m._M_h._M_rehash_policy._M_max_load_factor = 0LL;
      data::enumStrToVal(char const*,data::PlatformRotType &)::m._M_h._M_rehash_policy._M_next_resize = 0LL;
      data::enumStrToVal(char const*,data::PlatformRotType &)::m._M_h._M_single_bucket = 0LL;
      std::unordered_map<std::string,data::PlatformRotType>::unordered_map(&data::enumStrToVal(char const*,data::PlatformRotType &)::m);
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::PlatformRotType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::PlatformRotType>::~unordered_map,
        &data::enumStrToVal(char const*,data::PlatformRotType &)::m,
        &_dso_handle);
    }
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::PlatformRotType>::iterator *)(v2 + 64) = std::unordered_map<std::string,data::PlatformRotType>::find(
                                                                                      &data::enumStrToVal(char const*,data::PlatformRotType &)::m,
                                                                                      (const std::unordered_map<std::string,data::PlatformRotType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::PlatformRotType>::iterator *)(v2 + 96) = std::unordered_map<std::string,data::PlatformRotType>::end(&data::enumStrToVal(char const*,data::PlatformRotType &)::m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::PlatformRotType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::PlatformRotType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::PlatformRotType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
        "enumStrToVal",
        704);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_iterator<std::pair<std::string const,data::PlatformRotType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::PlatformRotType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
      "enumStrToVal",
      693);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[14])"s is nullptr!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    result = 0xFFFFFFFFLL;
  }
  if ( v14 == (char *)v2 )
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

// Line 713: range 000000000CC963D2-000000000CC963E8
const char *__cdecl data::getDescription(data::PlatformRotType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 718: range 000000000CC963E9-000000000CC9659E
bool __cdecl data::isValidPlatformRotType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::PlatformRotType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::PlatformRotType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:719 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidPlatformRotType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getPlatformRotTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::PlatformRotType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::PlatformRotType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getPlatformRotTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::PlatformRotType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::PlatformRotType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::PlatformRotType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::PlatformRotType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::PlatformRotType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 724: range 000000000CC9659F-000000000CC96700
bool __cdecl data::isValidPlatformRotTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::PlatformRotType> *v5; // rcx
  const std::unordered_map<std::string,data::PlatformRotType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidPlatformRotTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getPlatformRotTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::PlatformRotType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::PlatformRotType>::end(v5);
  v6 = data::getPlatformRotTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::PlatformRotType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::PlatformRotType>::find(
                                                                                          v6,
                                                                                          name);
  result = std::__detail::operator!=<std::pair<std::string const,data::PlatformRotType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::PlatformRotType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::PlatformRotType>,true> *)(v2 + 64));
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

// Line 729: range 000000000CC96701-000000000CC96BC3
const std::unordered_map<std::string,data::PlatformRotType> *__cdecl data::getPlatformRotTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::PlatformRotType> *i; // r14
  const std::unordered_map<std::string,data::PlatformRotType> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getPlatformRotTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556927;
  v3[536862723] = -234556924;
  v3[536862727] = -218103808;
  v3[536862728] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getPlatformRotTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getPlatformRotTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string const,data::PlatformRotType>::pair<char const(&)[18],data::PlatformRotType,true>(
      (std::pair<const std::string,data::PlatformRotType> *const)(v1 + 128),
      (const char (*)[18])"PLATFORM_ROT_NONE",
      (data::PlatformRotType *)(v1 + 80));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, "PLATFORM_ROT_NONE");
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string const,data::PlatformRotType>::pair<char const(&)[19],data::PlatformRotType,true>(
      (std::pair<const std::string,data::PlatformRotType> *const)(v1 + 168),
      (const char (*)[19])"PLATFORM_ROT_SPEED",
      (data::PlatformRotType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "PLATFORM_ROT_SPEED");
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string const,data::PlatformRotType>::pair<char const(&)[19],data::PlatformRotType,true>(
      (std::pair<const std::string,data::PlatformRotType> *const)(v1 + 208),
      (const char (*)[19])"PLATFORM_ROT_ROUND",
      (data::PlatformRotType *)(v1 + 112));
    std::allocator<std::pair<std::string const,data::PlatformRotType>>::allocator((std::allocator<std::pair<const std::string,data::PlatformRotType> > *const)(v1 + 64));
    std::unordered_map<std::string,data::PlatformRotType>::unordered_map(
      &data::getPlatformRotTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::PlatformRotType> >)__PAIR128__(3LL, v1 + 128),
      0LL,
      (const std::unordered_map<std::string,data::PlatformRotType>::hasher *)(v1 + 32),
      (const std::unordered_map<std::string,data::PlatformRotType>::key_equal *)(v1 + 48),
      (const std::unordered_map<std::string,data::PlatformRotType>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getPlatformRotTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::PlatformRotType>::~unordered_map,
      &data::getPlatformRotTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::PlatformRotType>>::~allocator((std::allocator<std::pair<const std::string,data::PlatformRotType> > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::PlatformRotType> *)(v1 + 248);
          i != (std::pair<const std::string,data::PlatformRotType> *)(v1 + 128);
          std::pair<std::string const,data::PlatformRotType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getPlatformRotTypeNameMap[abi:cxx11](void)::m;
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

// Line 740: range 000000000CC96BC4-000000000CC972C2
const std::map<data::PlatformRotType,std::pair<std::string,std::string >> *__cdecl data::getPlatformRotTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::PlatformRotType,std::pair<std::string,std::string > > *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getPlatformRotTypeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getPlatformRotTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getPlatformRotTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[18],true>(
      (std::pair<std::string,std::string > *const)(v1 + 128),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[18])"PLATFORM_ROT_NONE");
    std::pair<data::PlatformRotType const,std::pair<std::string,std::string>>::pair<data::PlatformRotType,true>(
      (std::pair<const data::PlatformRotType,std::pair<std::string,std::string > > *const)(v1 + 416),
      (data::PlatformRotType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[19],true>(
      (std::pair<std::string,std::string > *const)(v1 + 224),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[19])"PLATFORM_ROT_SPEED");
    std::pair<data::PlatformRotType const,std::pair<std::string,std::string>>::pair<data::PlatformRotType,true>(
      (std::pair<const data::PlatformRotType,std::pair<std::string,std::string > > *const)(v1 + 488),
      (data::PlatformRotType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 224));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[19],true>(
      (std::pair<std::string,std::string > *const)(v1 + 320),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[19])"PLATFORM_ROT_ROUND");
    std::pair<data::PlatformRotType const,std::pair<std::string,std::string>>::pair<data::PlatformRotType,true>(
      (std::pair<const data::PlatformRotType,std::pair<std::string,std::string > > *const)(v1 + 560),
      (data::PlatformRotType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 320));
    std::allocator<std::pair<data::PlatformRotType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::PlatformRotType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    std::map<data::PlatformRotType,std::pair<std::string,std::string>>::map(
      &data::getPlatformRotTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::PlatformRotType,std::pair<std::string,std::string > > >)__PAIR128__(3LL, v1 + 416),
      (const std::less<data::PlatformRotType> *)(v1 + 48),
      (const std::map<data::PlatformRotType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getPlatformRotTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::PlatformRotType,std::pair<std::string,std::string>>::~map,
      &data::getPlatformRotTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::PlatformRotType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::PlatformRotType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::PlatformRotType,std::pair<std::string,std::string > > *)(v1 + 632);
          i != (std::pair<const data::PlatformRotType,std::pair<std::string,std::string > > *)(v1 + 416);
          std::pair<data::PlatformRotType const,std::pair<std::string,std::string>>::~pair(i) )
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
  return &data::getPlatformRotTypeEnumMap[abi:cxx11](void)::m;
};

// Line 751: range 000000000CC972C3-000000000CC97636
const char *__fastcall data::enumValToStr(data::ExploreType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::ExploreType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::ExploreType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 5 e:750 64 8 8 iter:753 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getExploreTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::ExploreType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::ExploreType,std::pair<std::string,std::string>>::find(
                                                                                                    map,
                                                                                                    (const std::map<data::ExploreType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::ExploreType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::ExploreType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::ExploreType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::ExploreType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
      "enumValToStr",
      756);
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
    result = "INVALID_ExploreType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::ExploreType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::ExploreType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 763: range 000000000CC97637-000000000CC97BEF
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::ExploreType>,false,true>::pointer v10; // rax
  data::ExploreType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::ExploreType> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:772 96 8 9 <unknown> 128 8 5 s:762 160 32 9 <unknown> 224 32 9 <unk"
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
    m = data::getExploreTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::ExploreType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ExploreType>::find(
                                                                                        m,
                                                                                        (const std::unordered_map<std::string,data::ExploreType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::ExploreType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::ExploreType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::ExploreType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ExploreType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ExploreType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
        "enumNameToVal",
        775);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::ExploreType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::ExploreType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
      "enumNameToVal",
      766);
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

// Line 784: range 000000000CC97BF0-000000000CC9864B
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::ExploreType> *i; // r14
  unsigned __int64 v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::ExploreType>,false,true>::pointer v12; // rax
  data::ExploreType second; // ecx
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
                        " <unknown> 144 4 9 <unknown> 160 8 6 it:798 192 8 9 <unknown> 224 8 5 s:783 256 32 9 <unknown> 3"
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::ExploreType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::ExploreType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, e);
      *(_DWORD *)(v2 + 112) = 1;
      std::pair<std::string const,data::ExploreType>::pair<char const(&)[6],data::ExploreType,true>(
        (std::pair<const std::string,data::ExploreType> *const)(v2 + 448),
        (const char (*)[6])"chest",
        (data::ExploreType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "chest");
      *(_DWORD *)(v2 + 128) = 2;
      std::pair<std::string const,data::ExploreType>::pair<char const(&)[7],data::ExploreType,true>(
        (std::pair<const std::string,data::ExploreType> *const)(v2 + 488),
        (const char (*)[7])"temple",
        (data::ExploreType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "temple");
      *(_DWORD *)(v2 + 144) = 3;
      std::pair<std::string const,data::ExploreType>::pair<char const(&)[7],data::ExploreType,true>(
        (std::pair<const std::string,data::ExploreType> *const)(v2 + 528),
        (const char (*)[7])"gather",
        (data::ExploreType *)(v2 + 144));
      std::allocator<std::pair<std::string const,data::ExploreType>>::allocator((std::allocator<std::pair<const std::string,data::ExploreType> > *const)(v2 + 80));
      std::unordered_map<std::string,data::ExploreType>::unordered_map(
        &data::enumStrToVal(char const*,data::ExploreType &)::m,
        (std::initializer_list<std::pair<const std::string,data::ExploreType> >)__PAIR128__(3LL, v2 + 448),
        0LL,
        (const std::unordered_map<std::string,data::ExploreType>::hasher *)(v2 + 48),
        (const std::unordered_map<std::string,data::ExploreType>::key_equal *)(v2 + 64),
        (const std::unordered_map<std::string,data::ExploreType>::allocator_type *)(v2 + 80));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::ExploreType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::ExploreType>::~unordered_map,
        &data::enumStrToVal(char const*,data::ExploreType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::ExploreType>>::~allocator((std::allocator<std::pair<const std::string,data::ExploreType> > *const)(v2 + 80));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::ExploreType> *)(v2 + 568);
            i != (std::pair<const std::string,data::ExploreType> *)(v2 + 448);
            std::pair<std::string const,data::ExploreType>::~pair(i) )
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
    *(std::unordered_map<std::string,data::ExploreType>::iterator *)(v2 + 160) = std::unordered_map<std::string,data::ExploreType>::find(
                                                                                   &data::enumStrToVal(char const*,data::ExploreType &)::m,
                                                                                   (const std::unordered_map<std::string,data::ExploreType>::key_type *)(v2 + 320));
    std::string::~string((void *)(v2 + 320));
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 96);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, v2 + 320);
    *(std::unordered_map<std::string,data::ExploreType>::iterator *)(v2 + 192) = std::unordered_map<std::string,data::ExploreType>::end(&data::enumStrToVal(char const*,data::ExploreType &)::m);
    v9 = (char *)(v2 + 192);
    v10 = std::__detail::operator==<std::pair<std::string const,data::ExploreType>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ExploreType>,true> *)(v2 + 160),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ExploreType>,true> *)(v2 + 192));
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
        "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
        "enumStrToVal",
        801);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 384),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)(v2 + 224));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::ExploreType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::ExploreType>,false,true> *const)(v2 + 160));
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
      "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
      "enumStrToVal",
      787);
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

// Line 810: range 000000000CC9864C-000000000CC98662
const char *__cdecl data::getDescription(data::ExploreType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 815: range 000000000CC98663-000000000CC98818
bool __cdecl data::isValidExploreType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::ExploreType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::ExploreType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:816 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidExploreType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getExploreTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::ExploreType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::ExploreType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getExploreTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::ExploreType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::ExploreType,std::pair<std::string,std::string>>::find(
                                                                                                    v6,
                                                                                                    (const std::map<data::ExploreType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::ExploreType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::ExploreType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 821: range 000000000CC98819-000000000CC9897A
bool __cdecl data::isValidExploreTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::ExploreType> *v5; // rcx
  const std::unordered_map<std::string,data::ExploreType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidExploreTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getExploreTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::ExploreType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ExploreType>::end(v5);
  v6 = data::getExploreTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::ExploreType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::ExploreType>::find(
                                                                                      v6,
                                                                                      name);
  result = std::__detail::operator!=<std::pair<std::string const,data::ExploreType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ExploreType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ExploreType>,true> *)(v2 + 64));
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

// Line 826: range 000000000CC9897B-000000000CC98EDA
const std::unordered_map<std::string,data::ExploreType> *__cdecl data::getExploreTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::ExploreType> *i; // r14
  const std::unordered_map<std::string,data::ExploreType> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getExploreTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -234753535;
  v3[536862723] = -234556924;
  v3[536862724] = -234556924;
  v3[536862730] = -202116109;
  v3[536862731] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getExploreTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getExploreTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v0);
    *(_DWORD *)(v1 + 96) = 0;
    std::pair<std::string const,data::ExploreType>::pair<char const(&)[13],data::ExploreType,true>(
      (std::pair<const std::string,data::ExploreType> *const)(v1 + 160),
      (const char (*)[13])"EXPLORE_NONE",
      (data::ExploreType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "EXPLORE_NONE");
    *(_DWORD *)(v1 + 112) = 1;
    std::pair<std::string const,data::ExploreType>::pair<char const(&)[14],data::ExploreType,true>(
      (std::pair<const std::string,data::ExploreType> *const)(v1 + 200),
      (const char (*)[14])"EXPLORE_CHEST",
      (data::ExploreType *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, "EXPLORE_CHEST");
    *(_DWORD *)(v1 + 128) = 2;
    std::pair<std::string const,data::ExploreType>::pair<char const(&)[15],data::ExploreType,true>(
      (std::pair<const std::string,data::ExploreType> *const)(v1 + 240),
      (const char (*)[15])"EXPLORE_TEMPLE",
      (data::ExploreType *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, "EXPLORE_TEMPLE");
    *(_DWORD *)(v1 + 144) = 3;
    std::pair<std::string const,data::ExploreType>::pair<char const(&)[15],data::ExploreType,true>(
      (std::pair<const std::string,data::ExploreType> *const)(v1 + 280),
      (const char (*)[15])"EXPLORE_GATHER",
      (data::ExploreType *)(v1 + 144));
    std::allocator<std::pair<std::string const,data::ExploreType>>::allocator((std::allocator<std::pair<const std::string,data::ExploreType> > *const)(v1 + 80));
    std::unordered_map<std::string,data::ExploreType>::unordered_map(
      &data::getExploreTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::ExploreType> >)__PAIR128__(4LL, v1 + 160),
      0LL,
      (const std::unordered_map<std::string,data::ExploreType>::hasher *)(v1 + 48),
      (const std::unordered_map<std::string,data::ExploreType>::key_equal *)(v1 + 64),
      (const std::unordered_map<std::string,data::ExploreType>::allocator_type *)(v1 + 80));
    __cxa_guard_release(&`guard variable for'data::getExploreTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::ExploreType>::~unordered_map,
      &data::getExploreTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::ExploreType>>::~allocator((std::allocator<std::pair<const std::string,data::ExploreType> > *const)(v1 + 80));
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::ExploreType> *)(v1 + 320);
          i != (std::pair<const std::string,data::ExploreType> *)(v1 + 160);
          std::pair<std::string const,data::ExploreType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getExploreTypeNameMap[abi:cxx11](void)::m;
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

// Line 838: range 000000000CC98EDB-000000000CC996AB
const std::map<data::ExploreType,std::pair<std::string,std::string >> *__cdecl data::getExploreTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::ExploreType,std::pair<std::string,std::string > > *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getExploreTypeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getExploreTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getExploreTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 64, v0);
    *(_DWORD *)(v1 + 64) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[13],true>(
      (std::pair<std::string,std::string > *const)(v1 + 128),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[13])"EXPLORE_NONE");
    std::pair<data::ExploreType const,std::pair<std::string,std::string>>::pair<data::ExploreType,true>(
      (std::pair<const data::ExploreType,std::pair<std::string,std::string > > *const)(v1 + 512),
      (data::ExploreType *)(v1 + 64),
      (const std::pair<std::string,std::string > *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v1 + 64);
    *(_DWORD *)(v1 + 80) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[6],char const(&)[14],true>(
      (std::pair<std::string,std::string > *const)(v1 + 224),
      (const char (*)[6])"chest",
      (const char (*)[14])"EXPLORE_CHEST");
    std::pair<data::ExploreType const,std::pair<std::string,std::string>>::pair<data::ExploreType,true>(
      (std::pair<const data::ExploreType,std::pair<std::string,std::string > > *const)(v1 + 584),
      (data::ExploreType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 224));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[15],true>(
      (std::pair<std::string,std::string > *const)(v1 + 320),
      (const char (*)[7])"temple",
      (const char (*)[15])"EXPLORE_TEMPLE");
    std::pair<data::ExploreType const,std::pair<std::string,std::string>>::pair<data::ExploreType,true>(
      (std::pair<const data::ExploreType,std::pair<std::string,std::string > > *const)(v1 + 656),
      (data::ExploreType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 320));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 3;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[15],true>(
      (std::pair<std::string,std::string > *const)(v1 + 416),
      (const char (*)[7])"gather",
      (const char (*)[15])"EXPLORE_GATHER");
    std::pair<data::ExploreType const,std::pair<std::string,std::string>>::pair<data::ExploreType,true>(
      (std::pair<const data::ExploreType,std::pair<std::string,std::string > > *const)(v1 + 728),
      (data::ExploreType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 416));
    std::allocator<std::pair<data::ExploreType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::ExploreType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    std::map<data::ExploreType,std::pair<std::string,std::string>>::map(
      &data::getExploreTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::ExploreType,std::pair<std::string,std::string > > >)__PAIR128__(4LL, v1 + 512),
      (const std::less<data::ExploreType> *)(v1 + 32),
      (const std::map<data::ExploreType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 48));
    __cxa_guard_release(&`guard variable for'data::getExploreTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::ExploreType,std::pair<std::string,std::string>>::~map,
      &data::getExploreTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::ExploreType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::ExploreType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::ExploreType,std::pair<std::string,std::string > > *)(v1 + 800);
          i != (std::pair<const data::ExploreType,std::pair<std::string,std::string > > *)(v1 + 512);
          std::pair<data::ExploreType const,std::pair<std::string,std::string>>::~pair(i) )
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
  return &data::getExploreTypeEnumMap[abi:cxx11](void)::m;
};

// Line 850: range 000000000CC996AC-000000000CC99A1F
const char *__fastcall data::enumValToStr(data::FatherChallengeProperty e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::FatherChallengeProperty,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::FatherChallengeProperty,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 5 e:849 64 8 8 iter:852 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getFatherChallengePropertyEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::FatherChallengeProperty,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::FatherChallengeProperty,std::pair<std::string,std::string>>::find(map, (const std::map<data::FatherChallengeProperty,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::FatherChallengeProperty,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::FatherChallengeProperty,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::FatherChallengeProperty,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::FatherChallengeProperty,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
      "enumValToStr",
      855);
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
    result = "INVALID_FatherChallengeProperty";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::FatherChallengeProperty const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::FatherChallengeProperty,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 862: range 000000000CC99A20-000000000CC99FD8
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::FatherChallengeProperty>,false,true>::pointer v10; // rax
  data::FatherChallengeProperty second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::FatherChallengeProperty> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:871 96 8 9 <unknown> 128 8 5 s:861 160 32 9 <unknown> 224 32 9 <unk"
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
    m = data::getFatherChallengePropertyNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::FatherChallengeProperty>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::FatherChallengeProperty>::find(
                                                                                                    m,
                                                                                                    (const std::unordered_map<std::string,data::FatherChallengeProperty>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::FatherChallengeProperty>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::FatherChallengeProperty>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::FatherChallengeProperty>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::FatherChallengeProperty>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::FatherChallengeProperty>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
        "enumNameToVal",
        874);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::FatherChallengeProperty>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::FatherChallengeProperty>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
      "enumNameToVal",
      865);
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

// Line 883: range 000000000CC99FD9-000000000CC9A62E
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  const char *v6; // rsi
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::FatherChallengeProperty>,false,true>::pointer v10; // rax
  data::FatherChallengeProperty second; // ecx
  char v12; // dl
  char v14[384]; // [rsp+10h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:894 96 8 9 <unknown> 128 8 5 s:882 160 32 9 <unknown> 224 32 9 <unk"
                        "nown> 288 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::FatherChallengeProperty &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::FatherChallengeProperty &)::m) )
    {
      data::enumStrToVal(char const*,data::FatherChallengeProperty &)::m._M_h._M_buckets = 0LL;
      data::enumStrToVal(char const*,data::FatherChallengeProperty &)::m._M_h._M_bucket_count = 0LL;
      data::enumStrToVal(char const*,data::FatherChallengeProperty &)::m._M_h._M_before_begin._M_nxt = 0LL;
      data::enumStrToVal(char const*,data::FatherChallengeProperty &)::m._M_h._M_element_count = 0LL;
      *(_QWORD *)&data::enumStrToVal(char const*,data::FatherChallengeProperty &)::m._M_h._M_rehash_policy._M_max_load_factor = 0LL;
      data::enumStrToVal(char const*,data::FatherChallengeProperty &)::m._M_h._M_rehash_policy._M_next_resize = 0LL;
      data::enumStrToVal(char const*,data::FatherChallengeProperty &)::m._M_h._M_single_bucket = 0LL;
      std::unordered_map<std::string,data::FatherChallengeProperty>::unordered_map(&data::enumStrToVal(char const*,data::FatherChallengeProperty &)::m);
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::FatherChallengeProperty &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::FatherChallengeProperty>::~unordered_map,
        &data::enumStrToVal(char const*,data::FatherChallengeProperty &)::m,
        &_dso_handle);
    }
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::FatherChallengeProperty>::iterator *)(v2 + 64) = std::unordered_map<std::string,data::FatherChallengeProperty>::find(
                                                                                              &data::enumStrToVal(char const*,data::FatherChallengeProperty &)::m,
                                                                                              (const std::unordered_map<std::string,data::FatherChallengeProperty>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::FatherChallengeProperty>::iterator *)(v2 + 96) = std::unordered_map<std::string,data::FatherChallengeProperty>::end(&data::enumStrToVal(char const*,data::FatherChallengeProperty &)::m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::FatherChallengeProperty>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::FatherChallengeProperty>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::FatherChallengeProperty>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
        "enumStrToVal",
        897);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_iterator<std::pair<std::string const,data::FatherChallengeProperty>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::FatherChallengeProperty>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
      "enumStrToVal",
      886);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[14])"s is nullptr!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    result = 0xFFFFFFFFLL;
  }
  if ( v14 == (char *)v2 )
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

// Line 906: range 000000000CC9A62F-000000000CC9A645
const char *__cdecl data::getDescription(data::FatherChallengeProperty e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 911: range 000000000CC9A646-000000000CC9A7FB
bool __cdecl data::isValidFatherChallengeProperty(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::FatherChallengeProperty,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::FatherChallengeProperty,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:912 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidFatherChallengeProperty;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getFatherChallengePropertyEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::FatherChallengeProperty,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::FatherChallengeProperty,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getFatherChallengePropertyEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::FatherChallengeProperty,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::FatherChallengeProperty,std::pair<std::string,std::string>>::find(v6, (const std::map<data::FatherChallengeProperty,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::FatherChallengeProperty,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::FatherChallengeProperty,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 917: range 000000000CC9A7FC-000000000CC9A95D
bool __cdecl data::isValidFatherChallengePropertyName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::FatherChallengeProperty> *v5; // rcx
  const std::unordered_map<std::string,data::FatherChallengeProperty> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidFatherChallengePropertyName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getFatherChallengePropertyNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::FatherChallengeProperty>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::FatherChallengeProperty>::end(v5);
  v6 = data::getFatherChallengePropertyNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::FatherChallengeProperty>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::FatherChallengeProperty>::find(
                                                                                                  v6,
                                                                                                  name);
  result = std::__detail::operator!=<std::pair<std::string const,data::FatherChallengeProperty>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::FatherChallengeProperty>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::FatherChallengeProperty>,true> *)(v2 + 64));
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

// Line 922: range 000000000CC9A95E-000000000CC9AF78
const std::unordered_map<std::string,data::FatherChallengeProperty> *__cdecl data::getFatherChallengePropertyNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::FatherChallengeProperty> *i; // r14
  const std::unordered_map<std::string,data::FatherChallengeProperty> *result; // rax
  char v6[496]; // [rsp+10h] [rbp-1F0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(448LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "9 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 4 9 "
                        "<unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 200 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::getFatherChallengePropertyNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -234753535;
  v3[536862723] = -234556924;
  v3[536862724] = -234556924;
  v3[536862725] = 61956;
  v3[536862731] = -218103808;
  v3[536862732] = -202116109;
  v3[536862733] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getFatherChallengePropertyNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getFatherChallengePropertyNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v0);
    *(_DWORD *)(v1 + 96) = 0;
    std::pair<std::string const,data::FatherChallengeProperty>::pair<char const(&)[9],data::FatherChallengeProperty,true>(
      (std::pair<const std::string,data::FatherChallengeProperty> *const)(v1 + 176),
      (const char (*)[9])"DURATION",
      (data::FatherChallengeProperty *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "DURATION");
    *(_DWORD *)(v1 + 112) = 1;
    std::pair<std::string const,data::FatherChallengeProperty>::pair<char const(&)[9],data::FatherChallengeProperty,true>(
      (std::pair<const std::string,data::FatherChallengeProperty> *const)(v1 + 216),
      (const char (*)[9])"CUR_SUCC",
      (data::FatherChallengeProperty *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, "CUR_SUCC");
    *(_DWORD *)(v1 + 128) = 2;
    std::pair<std::string const,data::FatherChallengeProperty>::pair<char const(&)[9],data::FatherChallengeProperty,true>(
      (std::pair<const std::string,data::FatherChallengeProperty> *const)(v1 + 256),
      (const char (*)[9])"CUR_FAIL",
      (data::FatherChallengeProperty *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, "CUR_FAIL");
    *(_DWORD *)(v1 + 144) = 3;
    std::pair<std::string const,data::FatherChallengeProperty>::pair<char const(&)[9],data::FatherChallengeProperty,true>(
      (std::pair<const std::string,data::FatherChallengeProperty> *const)(v1 + 296),
      (const char (*)[9])"SUM_SUCC",
      (data::FatherChallengeProperty *)(v1 + 144));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, "SUM_SUCC");
    *(_DWORD *)(v1 + 160) = 4;
    std::pair<std::string const,data::FatherChallengeProperty>::pair<char const(&)[9],data::FatherChallengeProperty,true>(
      (std::pair<const std::string,data::FatherChallengeProperty> *const)(v1 + 336),
      (const char (*)[9])"SUM_FAIL",
      (data::FatherChallengeProperty *)(v1 + 160));
    std::allocator<std::pair<std::string const,data::FatherChallengeProperty>>::allocator((std::allocator<std::pair<const std::string,data::FatherChallengeProperty> > *const)(v1 + 80));
    std::unordered_map<std::string,data::FatherChallengeProperty>::unordered_map(
      &data::getFatherChallengePropertyNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::FatherChallengeProperty> >)__PAIR128__(5LL, v1 + 176),
      0LL,
      (const std::unordered_map<std::string,data::FatherChallengeProperty>::hasher *)(v1 + 48),
      (const std::unordered_map<std::string,data::FatherChallengeProperty>::key_equal *)(v1 + 64),
      (const std::unordered_map<std::string,data::FatherChallengeProperty>::allocator_type *)(v1 + 80));
    __cxa_guard_release(&`guard variable for'data::getFatherChallengePropertyNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::FatherChallengeProperty>::~unordered_map,
      &data::getFatherChallengePropertyNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::FatherChallengeProperty>>::~allocator((std::allocator<std::pair<const std::string,data::FatherChallengeProperty> > *const)(v1 + 80));
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::FatherChallengeProperty> *)(v1 + 376);
          i != (std::pair<const std::string,data::FatherChallengeProperty> *)(v1 + 176);
          std::pair<std::string const,data::FatherChallengeProperty>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getFatherChallengePropertyNameMap[abi:cxx11](void)::m;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0LL;
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
  }
  return result;
};

// Line 935: range 000000000CC9AF79-000000000CC9B83E
const std::map<data::FatherChallengeProperty,std::pair<std::string,std::string >> *__cdecl data::getFatherChallengePropertyEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::FatherChallengeProperty,std::pair<std::string,std::string > > *i; // r14
  _DWORD *v5; // rax
  _DWORD *v6; // rax
  _DWORD *v7; // rax
  _DWORD *v8; // rax
  char v10[1104]; // [rsp+10h] [rbp-450h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_5(1056LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "13 32 1 9 <unknown> 48 1 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 "
                        "<unknown> 128 4 9 <unknown> 144 64 9 <unknown> 240 64 9 <unknown> 336 64 9 <unknown> 432 64 9 <u"
                        "nknown> 528 64 9 <unknown> 624 360 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::getFatherChallengePropertyEnumMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556924;
  v3[536862723] = -234556924;
  v3[536862724] = 61956;
  v3[536862726] = -219021312;
  v3[536862727] = 62194;
  v3[536862729] = -219021312;
  v3[536862730] = 62194;
  v3[536862732] = -219021312;
  v3[536862733] = 62194;
  v3[536862735] = -219021312;
  v3[536862736] = 62194;
  v3[536862738] = -219021312;
  v3[536862739] = 62194;
  v3[536862750] = -218103808;
  v3[536862751] = -202116109;
  v3[536862752] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getFatherChallengePropertyEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getFatherChallengePropertyEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 64, v0);
    *(_DWORD *)(v1 + 64) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[9],true>(
      (std::pair<std::string,std::string > *const)(v1 + 144),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[9])"DURATION");
    std::pair<data::FatherChallengeProperty const,std::pair<std::string,std::string>>::pair<data::FatherChallengeProperty,true>(
      (std::pair<const data::FatherChallengeProperty,std::pair<std::string,std::string > > *const)(v1 + 624),
      (data::FatherChallengeProperty *)(v1 + 64),
      (const std::pair<std::string,std::string > *)(v1 + 144));
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v1 + 64);
    *(_DWORD *)(v1 + 80) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[9],true>(
      (std::pair<std::string,std::string > *const)(v1 + 240),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[9])"CUR_SUCC");
    std::pair<data::FatherChallengeProperty const,std::pair<std::string,std::string>>::pair<data::FatherChallengeProperty,true>(
      (std::pair<const data::FatherChallengeProperty,std::pair<std::string,std::string > > *const)(v1 + 696),
      (data::FatherChallengeProperty *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 240));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[9],true>(
      (std::pair<std::string,std::string > *const)(v1 + 336),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[9])"CUR_FAIL");
    std::pair<data::FatherChallengeProperty const,std::pair<std::string,std::string>>::pair<data::FatherChallengeProperty,true>(
      (std::pair<const data::FatherChallengeProperty,std::pair<std::string,std::string > > *const)(v1 + 768),
      (data::FatherChallengeProperty *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 336));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 3;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[9],true>(
      (std::pair<std::string,std::string > *const)(v1 + 432),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[9])"SUM_SUCC");
    std::pair<data::FatherChallengeProperty const,std::pair<std::string,std::string>>::pair<data::FatherChallengeProperty,true>(
      (std::pair<const data::FatherChallengeProperty,std::pair<std::string,std::string > > *const)(v1 + 840),
      (data::FatherChallengeProperty *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 432));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, v1 + 112);
    *(_DWORD *)(v1 + 128) = 4;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[9],true>(
      (std::pair<std::string,std::string > *const)(v1 + 528),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[9])"SUM_FAIL");
    std::pair<data::FatherChallengeProperty const,std::pair<std::string,std::string>>::pair<data::FatherChallengeProperty,true>(
      (std::pair<const data::FatherChallengeProperty,std::pair<std::string,std::string > > *const)(v1 + 912),
      (data::FatherChallengeProperty *)(v1 + 128),
      (const std::pair<std::string,std::string > *)(v1 + 528));
    std::allocator<std::pair<data::FatherChallengeProperty const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::FatherChallengeProperty,std::pair<std::string,std::string > > > *const)(v1 + 48));
    std::map<data::FatherChallengeProperty,std::pair<std::string,std::string>>::map(
      &data::getFatherChallengePropertyEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::FatherChallengeProperty,std::pair<std::string,std::string > > >)__PAIR128__(5LL, v1 + 624),
      (const std::less<data::FatherChallengeProperty> *)(v1 + 32),
      (const std::map<data::FatherChallengeProperty,std::pair<std::string,std::string >>::allocator_type *)(v1 + 48));
    __cxa_guard_release(&`guard variable for'data::getFatherChallengePropertyEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::FatherChallengeProperty,std::pair<std::string,std::string>>::~map,
      &data::getFatherChallengePropertyEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::FatherChallengeProperty const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::FatherChallengeProperty,std::pair<std::string,std::string > > > *const)(v1 + 48));
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::FatherChallengeProperty,std::pair<std::string,std::string > > *)(v1 + 984);
          i != (std::pair<const data::FatherChallengeProperty,std::pair<std::string,std::string > > *)(v1 + 624);
          std::pair<data::FatherChallengeProperty const,std::pair<std::string,std::string>>::~pair(i) )
    {
      --i;
    }
    __asan_poison_stack_memory(v1 + 624, 360LL);
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 528));
    v5 = (_DWORD *)(((v1 + 528) >> 3) + 2147450880);
    *v5 = -117901064;
    v5[1] = -117901064;
    *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 432));
    v6 = (_DWORD *)(((v1 + 432) >> 3) + 2147450880);
    *v6 = -117901064;
    v6[1] = -117901064;
    *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 336));
    v7 = (_DWORD *)(((v1 + 336) >> 3) + 2147450880);
    *v7 = -117901064;
    v7[1] = -117901064;
    *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 240));
    v8 = (_DWORD *)(((v1 + 240) >> 3) + 2147450880);
    *v8 = -117901064;
    v8[1] = -117901064;
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 144));
  }
  if ( v10 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF807C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v3 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v3 + 2147450880 - (((_DWORD)v3 + 2147450888) & 0xFFFFFFF8) + 132) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    __asan_stack_free_5(v1, 1056LL, v10);
  }
  return &data::getFatherChallengePropertyEnumMap[abi:cxx11](void)::m;
};

// Line 948: range 000000000CC9B83F-000000000CC9BBB2
const char *__fastcall data::enumValToStr(data::ChallengeEventMarkType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::ChallengeEventMarkType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::ChallengeEventMarkType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 5 e:947 64 8 8 iter:950 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getChallengeEventMarkTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::ChallengeEventMarkType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::ChallengeEventMarkType,std::pair<std::string,std::string>>::find(map, (const std::map<data::ChallengeEventMarkType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::ChallengeEventMarkType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::ChallengeEventMarkType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::ChallengeEventMarkType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::ChallengeEventMarkType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
      "enumValToStr",
      953);
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
    result = "INVALID_ChallengeEventMarkType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::ChallengeEventMarkType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::ChallengeEventMarkType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 960: range 000000000CC9BBB3-000000000CC9C16B
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::ChallengeEventMarkType>,false,true>::pointer v10; // rax
  data::ChallengeEventMarkType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::ChallengeEventMarkType> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:969 96 8 9 <unknown> 128 8 5 s:959 160 32 9 <unknown> 224 32 9 <unk"
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
    m = data::getChallengeEventMarkTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::ChallengeEventMarkType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ChallengeEventMarkType>::find(
                                                                                                   m,
                                                                                                   (const std::unordered_map<std::string,data::ChallengeEventMarkType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::ChallengeEventMarkType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::ChallengeEventMarkType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::ChallengeEventMarkType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ChallengeEventMarkType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ChallengeEventMarkType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
        "enumNameToVal",
        972);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::ChallengeEventMarkType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::ChallengeEventMarkType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
      "enumNameToVal",
      963);
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

// Line 981: range 000000000CC9C16C-000000000CC9C7C1
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  const char *v6; // rsi
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::ChallengeEventMarkType>,false,true>::pointer v10; // rax
  data::ChallengeEventMarkType second; // ecx
  char v12; // dl
  char v14[384]; // [rsp+10h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:992 96 8 9 <unknown> 128 8 5 s:980 160 32 9 <unknown> 224 32 9 <unk"
                        "nown> 288 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::ChallengeEventMarkType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::ChallengeEventMarkType &)::m) )
    {
      data::enumStrToVal(char const*,data::ChallengeEventMarkType &)::m._M_h._M_buckets = 0LL;
      data::enumStrToVal(char const*,data::ChallengeEventMarkType &)::m._M_h._M_bucket_count = 0LL;
      data::enumStrToVal(char const*,data::ChallengeEventMarkType &)::m._M_h._M_before_begin._M_nxt = 0LL;
      data::enumStrToVal(char const*,data::ChallengeEventMarkType &)::m._M_h._M_element_count = 0LL;
      *(_QWORD *)&data::enumStrToVal(char const*,data::ChallengeEventMarkType &)::m._M_h._M_rehash_policy._M_max_load_factor = 0LL;
      data::enumStrToVal(char const*,data::ChallengeEventMarkType &)::m._M_h._M_rehash_policy._M_next_resize = 0LL;
      data::enumStrToVal(char const*,data::ChallengeEventMarkType &)::m._M_h._M_single_bucket = 0LL;
      std::unordered_map<std::string,data::ChallengeEventMarkType>::unordered_map(&data::enumStrToVal(char const*,data::ChallengeEventMarkType &)::m);
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::ChallengeEventMarkType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::ChallengeEventMarkType>::~unordered_map,
        &data::enumStrToVal(char const*,data::ChallengeEventMarkType &)::m,
        &_dso_handle);
    }
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::ChallengeEventMarkType>::iterator *)(v2 + 64) = std::unordered_map<std::string,data::ChallengeEventMarkType>::find(
                                                                                             &data::enumStrToVal(char const*,data::ChallengeEventMarkType &)::m,
                                                                                             (const std::unordered_map<std::string,data::ChallengeEventMarkType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::ChallengeEventMarkType>::iterator *)(v2 + 96) = std::unordered_map<std::string,data::ChallengeEventMarkType>::end(&data::enumStrToVal(char const*,data::ChallengeEventMarkType &)::m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::ChallengeEventMarkType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ChallengeEventMarkType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ChallengeEventMarkType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
        "enumStrToVal",
        995);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_iterator<std::pair<std::string const,data::ChallengeEventMarkType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::ChallengeEventMarkType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
      "enumStrToVal",
      984);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[14])"s is nullptr!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    result = 0xFFFFFFFFLL;
  }
  if ( v14 == (char *)v2 )
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

// Line 1004: range 000000000CC9C7C2-000000000CC9C7D8
const char *__cdecl data::getDescription(data::ChallengeEventMarkType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 1009: range 000000000CC9C7D9-000000000CC9C98E
bool __cdecl data::isValidChallengeEventMarkType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::ChallengeEventMarkType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::ChallengeEventMarkType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 6 e:1010 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidChallengeEventMarkType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getChallengeEventMarkTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::ChallengeEventMarkType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::ChallengeEventMarkType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getChallengeEventMarkTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::ChallengeEventMarkType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::ChallengeEventMarkType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::ChallengeEventMarkType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::ChallengeEventMarkType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::ChallengeEventMarkType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 1015: range 000000000CC9C98F-000000000CC9CAF0
bool __cdecl data::isValidChallengeEventMarkTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::ChallengeEventMarkType> *v5; // rcx
  const std::unordered_map<std::string,data::ChallengeEventMarkType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidChallengeEventMarkTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getChallengeEventMarkTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::ChallengeEventMarkType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ChallengeEventMarkType>::end(v5);
  v6 = data::getChallengeEventMarkTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::ChallengeEventMarkType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::ChallengeEventMarkType>::find(
                                                                                                 v6,
                                                                                                 name);
  result = std::__detail::operator!=<std::pair<std::string const,data::ChallengeEventMarkType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ChallengeEventMarkType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ChallengeEventMarkType>,true> *)(v2 + 64));
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

// Line 1020: range 000000000CC9CAF1-000000000CC9D10B
const std::unordered_map<std::string,data::ChallengeEventMarkType> *__cdecl data::getChallengeEventMarkTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::ChallengeEventMarkType> *i; // r14
  const std::unordered_map<std::string,data::ChallengeEventMarkType> *result; // rax
  char v6[496]; // [rsp+10h] [rbp-1F0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(448LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "9 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 4 9 "
                        "<unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 200 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::getChallengeEventMarkTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -234753535;
  v3[536862723] = -234556924;
  v3[536862724] = -234556924;
  v3[536862725] = 61956;
  v3[536862731] = -218103808;
  v3[536862732] = -202116109;
  v3[536862733] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getChallengeEventMarkTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getChallengeEventMarkTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v0);
    *(_DWORD *)(v1 + 96) = 0;
    std::pair<std::string const,data::ChallengeEventMarkType>::pair<char const(&)[21],data::ChallengeEventMarkType,true>(
      (std::pair<const std::string,data::ChallengeEventMarkType> *const)(v1 + 176),
      (const char (*)[21])"CHALLENGE_EVENT_NONE",
      (data::ChallengeEventMarkType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "CHALLENGE_EVENT_NONE");
    *(_DWORD *)(v1 + 112) = 1;
    std::pair<std::string const,data::ChallengeEventMarkType>::pair<char const(&)[12],data::ChallengeEventMarkType,true>(
      (std::pair<const std::string,data::ChallengeEventMarkType> *const)(v1 + 216),
      (const char (*)[12])"FLIGHT_TIME",
      (data::ChallengeEventMarkType *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, "FLIGHT_TIME");
    *(_DWORD *)(v1 + 128) = 2;
    std::pair<std::string const,data::ChallengeEventMarkType>::pair<char const(&)[20],data::ChallengeEventMarkType,true>(
      (std::pair<const std::string,data::ChallengeEventMarkType> *const)(v1 + 256),
      (const char (*)[20])"FLIGHT_GATHER_POINT",
      (data::ChallengeEventMarkType *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, "FLIGHT_GATHER_POINT");
    *(_DWORD *)(v1 + 144) = 3;
    std::pair<std::string const,data::ChallengeEventMarkType>::pair<char const(&)[29],data::ChallengeEventMarkType,true>(
      (std::pair<const std::string,data::ChallengeEventMarkType> *const)(v1 + 296),
      (const char (*)[29])"SUMMER_TIME_SPRINT_BOAT_TIME",
      (data::ChallengeEventMarkType *)(v1 + 144));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, "SUMMER_TIME_SPRINT_BOAT_TIME");
    *(_DWORD *)(v1 + 160) = 4;
    std::pair<std::string const,data::ChallengeEventMarkType>::pair<char const(&)[37],data::ChallengeEventMarkType,true>(
      (std::pair<const std::string,data::ChallengeEventMarkType> *const)(v1 + 336),
      (const char (*)[37])"SUMMER_TIME_SPRINT_BOAT_GATHER_POINT",
      (data::ChallengeEventMarkType *)(v1 + 160));
    std::allocator<std::pair<std::string const,data::ChallengeEventMarkType>>::allocator((std::allocator<std::pair<const std::string,data::ChallengeEventMarkType> > *const)(v1 + 80));
    std::unordered_map<std::string,data::ChallengeEventMarkType>::unordered_map(
      &data::getChallengeEventMarkTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::ChallengeEventMarkType> >)__PAIR128__(5LL, v1 + 176),
      0LL,
      (const std::unordered_map<std::string,data::ChallengeEventMarkType>::hasher *)(v1 + 48),
      (const std::unordered_map<std::string,data::ChallengeEventMarkType>::key_equal *)(v1 + 64),
      (const std::unordered_map<std::string,data::ChallengeEventMarkType>::allocator_type *)(v1 + 80));
    __cxa_guard_release(&`guard variable for'data::getChallengeEventMarkTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::ChallengeEventMarkType>::~unordered_map,
      &data::getChallengeEventMarkTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::ChallengeEventMarkType>>::~allocator((std::allocator<std::pair<const std::string,data::ChallengeEventMarkType> > *const)(v1 + 80));
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::ChallengeEventMarkType> *)(v1 + 376);
          i != (std::pair<const std::string,data::ChallengeEventMarkType> *)(v1 + 176);
          std::pair<std::string const,data::ChallengeEventMarkType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getChallengeEventMarkTypeNameMap[abi:cxx11](void)::m;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0LL;
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
  }
  return result;
};

// Line 1033: range 000000000CC9D10C-000000000CC9D9D1
const std::map<data::ChallengeEventMarkType,std::pair<std::string,std::string >> *__cdecl data::getChallengeEventMarkTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::ChallengeEventMarkType,std::pair<std::string,std::string > > *i; // r14
  _DWORD *v5; // rax
  _DWORD *v6; // rax
  _DWORD *v7; // rax
  _DWORD *v8; // rax
  char v10[1104]; // [rsp+10h] [rbp-450h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_5(1056LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "13 32 1 9 <unknown> 48 1 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 "
                        "<unknown> 128 4 9 <unknown> 144 64 9 <unknown> 240 64 9 <unknown> 336 64 9 <unknown> 432 64 9 <u"
                        "nknown> 528 64 9 <unknown> 624 360 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::getChallengeEventMarkTypeEnumMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556924;
  v3[536862723] = -234556924;
  v3[536862724] = 61956;
  v3[536862726] = -219021312;
  v3[536862727] = 62194;
  v3[536862729] = -219021312;
  v3[536862730] = 62194;
  v3[536862732] = -219021312;
  v3[536862733] = 62194;
  v3[536862735] = -219021312;
  v3[536862736] = 62194;
  v3[536862738] = -219021312;
  v3[536862739] = 62194;
  v3[536862750] = -218103808;
  v3[536862751] = -202116109;
  v3[536862752] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getChallengeEventMarkTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getChallengeEventMarkTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 64, v0);
    *(_DWORD *)(v1 + 64) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 144),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[21])"CHALLENGE_EVENT_NONE");
    std::pair<data::ChallengeEventMarkType const,std::pair<std::string,std::string>>::pair<data::ChallengeEventMarkType,true>(
      (std::pair<const data::ChallengeEventMarkType,std::pair<std::string,std::string > > *const)(v1 + 624),
      (data::ChallengeEventMarkType *)(v1 + 64),
      (const std::pair<std::string,std::string > *)(v1 + 144));
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v1 + 64);
    *(_DWORD *)(v1 + 80) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[12],true>(
      (std::pair<std::string,std::string > *const)(v1 + 240),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[12])"FLIGHT_TIME");
    std::pair<data::ChallengeEventMarkType const,std::pair<std::string,std::string>>::pair<data::ChallengeEventMarkType,true>(
      (std::pair<const data::ChallengeEventMarkType,std::pair<std::string,std::string > > *const)(v1 + 696),
      (data::ChallengeEventMarkType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 240));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[20],true>(
      (std::pair<std::string,std::string > *const)(v1 + 336),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[20])"FLIGHT_GATHER_POINT");
    std::pair<data::ChallengeEventMarkType const,std::pair<std::string,std::string>>::pair<data::ChallengeEventMarkType,true>(
      (std::pair<const data::ChallengeEventMarkType,std::pair<std::string,std::string > > *const)(v1 + 768),
      (data::ChallengeEventMarkType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 336));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 3;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[29],true>(
      (std::pair<std::string,std::string > *const)(v1 + 432),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[29])"SUMMER_TIME_SPRINT_BOAT_TIME");
    std::pair<data::ChallengeEventMarkType const,std::pair<std::string,std::string>>::pair<data::ChallengeEventMarkType,true>(
      (std::pair<const data::ChallengeEventMarkType,std::pair<std::string,std::string > > *const)(v1 + 840),
      (data::ChallengeEventMarkType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 432));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, v1 + 112);
    *(_DWORD *)(v1 + 128) = 4;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[37],true>(
      (std::pair<std::string,std::string > *const)(v1 + 528),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[37])"SUMMER_TIME_SPRINT_BOAT_GATHER_POINT");
    std::pair<data::ChallengeEventMarkType const,std::pair<std::string,std::string>>::pair<data::ChallengeEventMarkType,true>(
      (std::pair<const data::ChallengeEventMarkType,std::pair<std::string,std::string > > *const)(v1 + 912),
      (data::ChallengeEventMarkType *)(v1 + 128),
      (const std::pair<std::string,std::string > *)(v1 + 528));
    std::allocator<std::pair<data::ChallengeEventMarkType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::ChallengeEventMarkType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    std::map<data::ChallengeEventMarkType,std::pair<std::string,std::string>>::map(
      &data::getChallengeEventMarkTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::ChallengeEventMarkType,std::pair<std::string,std::string > > >)__PAIR128__(5LL, v1 + 624),
      (const std::less<data::ChallengeEventMarkType> *)(v1 + 32),
      (const std::map<data::ChallengeEventMarkType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 48));
    __cxa_guard_release(&`guard variable for'data::getChallengeEventMarkTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::ChallengeEventMarkType,std::pair<std::string,std::string>>::~map,
      &data::getChallengeEventMarkTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::ChallengeEventMarkType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::ChallengeEventMarkType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::ChallengeEventMarkType,std::pair<std::string,std::string > > *)(v1 + 984);
          i != (std::pair<const data::ChallengeEventMarkType,std::pair<std::string,std::string > > *)(v1 + 624);
          std::pair<data::ChallengeEventMarkType const,std::pair<std::string,std::string>>::~pair(i) )
    {
      --i;
    }
    __asan_poison_stack_memory(v1 + 624, 360LL);
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 528));
    v5 = (_DWORD *)(((v1 + 528) >> 3) + 2147450880);
    *v5 = -117901064;
    v5[1] = -117901064;
    *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 432));
    v6 = (_DWORD *)(((v1 + 432) >> 3) + 2147450880);
    *v6 = -117901064;
    v6[1] = -117901064;
    *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 336));
    v7 = (_DWORD *)(((v1 + 336) >> 3) + 2147450880);
    *v7 = -117901064;
    v7[1] = -117901064;
    *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 240));
    v8 = (_DWORD *)(((v1 + 240) >> 3) + 2147450880);
    *v8 = -117901064;
    v8[1] = -117901064;
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 144));
  }
  if ( v10 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF807C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v3 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v3 + 2147450880 - (((_DWORD)v3 + 2147450888) & 0xFFFFFFF8) + 132) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    __asan_stack_free_5(v1, 1056LL, v10);
  }
  return &data::getChallengeEventMarkTypeEnumMap[abi:cxx11](void)::m;
};

// Line 1046: range 000000000CC9D9D2-000000000CC9DD45
const char *__fastcall data::enumValToStr(data::MultistageStageType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::MultistageStageType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::MultistageStageType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 6 e:1045 64 8 9 iter:1048 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getMultistageStageTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::MultistageStageType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::MultistageStageType,std::pair<std::string,std::string>>::find(map, (const std::map<data::MultistageStageType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::MultistageStageType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::MultistageStageType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::MultistageStageType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::MultistageStageType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
      "enumValToStr",
      1051);
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
    result = "INVALID_MultistageStageType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::MultistageStageType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::MultistageStageType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 1058: range 000000000CC9DD46-000000000CC9E2FE
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::MultistageStageType>,false,true>::pointer v10; // rax
  data::MultistageStageType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::MultistageStageType> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 7 it:1067 96 8 9 <unknown> 128 8 6 s:1057 160 32 9 <unknown> 224 32 9 <u"
                        "nknown> 288 32 9 <unknown>";
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
    m = data::getMultistageStageTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::MultistageStageType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::MultistageStageType>::find(
                                                                                                m,
                                                                                                (const std::unordered_map<std::string,data::MultistageStageType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::MultistageStageType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::MultistageStageType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::MultistageStageType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::MultistageStageType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::MultistageStageType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
        "enumNameToVal",
        1070);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::MultistageStageType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::MultistageStageType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
      "enumNameToVal",
      1061);
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

// Line 1079: range 000000000CC9E2FF-000000000CC9E954
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  const char *v6; // rsi
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::MultistageStageType>,false,true>::pointer v10; // rax
  data::MultistageStageType second; // ecx
  char v12; // dl
  char v14[384]; // [rsp+10h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 7 it:1090 96 8 9 <unknown> 128 8 6 s:1078 160 32 9 <unknown> 224 32 9 <u"
                        "nknown> 288 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::MultistageStageType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::MultistageStageType &)::m) )
    {
      data::enumStrToVal(char const*,data::MultistageStageType &)::m._M_h._M_buckets = 0LL;
      data::enumStrToVal(char const*,data::MultistageStageType &)::m._M_h._M_bucket_count = 0LL;
      data::enumStrToVal(char const*,data::MultistageStageType &)::m._M_h._M_before_begin._M_nxt = 0LL;
      data::enumStrToVal(char const*,data::MultistageStageType &)::m._M_h._M_element_count = 0LL;
      *(_QWORD *)&data::enumStrToVal(char const*,data::MultistageStageType &)::m._M_h._M_rehash_policy._M_max_load_factor = 0LL;
      data::enumStrToVal(char const*,data::MultistageStageType &)::m._M_h._M_rehash_policy._M_next_resize = 0LL;
      data::enumStrToVal(char const*,data::MultistageStageType &)::m._M_h._M_single_bucket = 0LL;
      std::unordered_map<std::string,data::MultistageStageType>::unordered_map(&data::enumStrToVal(char const*,data::MultistageStageType &)::m);
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::MultistageStageType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::MultistageStageType>::~unordered_map,
        &data::enumStrToVal(char const*,data::MultistageStageType &)::m,
        &_dso_handle);
    }
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::MultistageStageType>::iterator *)(v2 + 64) = std::unordered_map<std::string,data::MultistageStageType>::find(
                                                                                          &data::enumStrToVal(char const*,data::MultistageStageType &)::m,
                                                                                          (const std::unordered_map<std::string,data::MultistageStageType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::MultistageStageType>::iterator *)(v2 + 96) = std::unordered_map<std::string,data::MultistageStageType>::end(&data::enumStrToVal(char const*,data::MultistageStageType &)::m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::MultistageStageType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::MultistageStageType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::MultistageStageType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
        "enumStrToVal",
        1093);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_iterator<std::pair<std::string const,data::MultistageStageType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::MultistageStageType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
      "enumStrToVal",
      1082);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[14])"s is nullptr!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    result = 0xFFFFFFFFLL;
  }
  if ( v14 == (char *)v2 )
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

// Line 1102: range 000000000CC9E955-000000000CC9E96B
const char *__cdecl data::getDescription(data::MultistageStageType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 1107: range 000000000CC9E96C-000000000CC9EB21
bool __cdecl data::isValidMultistageStageType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::MultistageStageType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::MultistageStageType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 6 e:1108 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidMultistageStageType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getMultistageStageTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::MultistageStageType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::MultistageStageType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getMultistageStageTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::MultistageStageType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::MultistageStageType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::MultistageStageType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::MultistageStageType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::MultistageStageType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 1113: range 000000000CC9EB22-000000000CC9EC83
bool __cdecl data::isValidMultistageStageTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::MultistageStageType> *v5; // rcx
  const std::unordered_map<std::string,data::MultistageStageType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidMultistageStageTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getMultistageStageTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::MultistageStageType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::MultistageStageType>::end(v5);
  v6 = data::getMultistageStageTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::MultistageStageType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::MultistageStageType>::find(
                                                                                              v6,
                                                                                              name);
  result = std::__detail::operator!=<std::pair<std::string const,data::MultistageStageType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::MultistageStageType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::MultistageStageType>,true> *)(v2 + 64));
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

// Line 1118: range 000000000CC9EC84-000000000CC9F935
const std::unordered_map<std::string,data::MultistageStageType> *__cdecl data::getMultistageStageTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::MultistageStageType> *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getMultistageStageTypeNameMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getMultistageStageTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getMultistageStageTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string const,data::MultistageStageType>::pair<char const(&)[34],data::MultistageStageType,true>(
      (std::pair<const std::string,data::MultistageStageType> *const)(v1 + 384),
      (const char (*)[34])"MULTISTAGE_STAGE_MECHANICUS_BUILD",
      (data::MultistageStageType *)(v1 + 80));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, "MULTISTAGE_STAGE_MECHANICUS_BUILD");
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string const,data::MultistageStageType>::pair<char const(&)[33],data::MultistageStageType,true>(
      (std::pair<const std::string,data::MultistageStageType> *const)(v1 + 424),
      (const char (*)[33])"MULTISTAGE_STAGE_MECHANICUS_KILL",
      (data::MultistageStageType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "MULTISTAGE_STAGE_MECHANICUS_KILL");
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string const,data::MultistageStageType>::pair<char const(&)[38],data::MultistageStageType,true>(
      (std::pair<const std::string,data::MultistageStageType> *const)(v1 + 464),
      (const char (*)[38])"MULTISTAGE_STAGE_MECHANICUS_FLIP_CARD",
      (data::MultistageStageType *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, "MULTISTAGE_STAGE_MECHANICUS_FLIP_CARD");
    *(_DWORD *)(v1 + 128) = 3;
    std::pair<std::string const,data::MultistageStageType>::pair<char const(&)[22],data::MultistageStageType,true>(
      (std::pair<const std::string,data::MultistageStageType> *const)(v1 + 504),
      (const char (*)[22])"MULTISTAGE_STAGE_IDLE",
      (data::MultistageStageType *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, "MULTISTAGE_STAGE_IDLE");
    *(_DWORD *)(v1 + 144) = 4;
    std::pair<std::string const,data::MultistageStageType>::pair<char const(&)[36],data::MultistageStageType,true>(
      (std::pair<const std::string,data::MultistageStageType> *const)(v1 + 544),
      (const char (*)[36])"MULTISTAGE_STAGE_FLEUR_FAIR_GALLERY",
      (data::MultistageStageType *)(v1 + 144));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, "MULTISTAGE_STAGE_FLEUR_FAIR_GALLERY");
    *(_DWORD *)(v1 + 160) = 5;
    std::pair<std::string const,data::MultistageStageType>::pair<char const(&)[33],data::MultistageStageType,true>(
      (std::pair<const std::string,data::MultistageStageType> *const)(v1 + 584),
      (const char (*)[33])"MULTISTAGE_STAGE_FLEUR_FAIR_BOSS",
      (data::MultistageStageType *)(v1 + 160));
    if ( *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 176, "MULTISTAGE_STAGE_FLEUR_FAIR_BOSS");
    *(_DWORD *)(v1 + 176) = 6;
    std::pair<std::string const,data::MultistageStageType>::pair<char const(&)[36],data::MultistageStageType,true>(
      (std::pair<const std::string,data::MultistageStageType> *const)(v1 + 624),
      (const char (*)[36])"MULTISTAGE_STAGE_FLEUR_FAIR_PREVIEW",
      (data::MultistageStageType *)(v1 + 176));
    if ( *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 192, "MULTISTAGE_STAGE_FLEUR_FAIR_PREVIEW");
    *(_DWORD *)(v1 + 192) = 7;
    std::pair<std::string const,data::MultistageStageType>::pair<char const(&)[29],data::MultistageStageType,true>(
      (std::pair<const std::string,data::MultistageStageType> *const)(v1 + 664),
      (const char (*)[29])"MULTISTAGE_STAGE_CHESS_BUILD",
      (data::MultistageStageType *)(v1 + 192));
    if ( *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 208, "MULTISTAGE_STAGE_CHESS_BUILD");
    *(_DWORD *)(v1 + 208) = 8;
    std::pair<std::string const,data::MultistageStageType>::pair<char const(&)[28],data::MultistageStageType,true>(
      (std::pair<const std::string,data::MultistageStageType> *const)(v1 + 704),
      (const char (*)[28])"MULTISTAGE_STAGE_CHESS_KILL",
      (data::MultistageStageType *)(v1 + 208));
    if ( *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 224, "MULTISTAGE_STAGE_CHESS_KILL");
    *(_DWORD *)(v1 + 224) = 9;
    std::pair<std::string const,data::MultistageStageType>::pair<char const(&)[37],data::MultistageStageType,true>(
      (std::pair<const std::string,data::MultistageStageType> *const)(v1 + 744),
      (const char (*)[37])"MULTISTAGE_STAGE_IRODORI_CHESS_BUILD",
      (data::MultistageStageType *)(v1 + 224));
    if ( *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 240, "MULTISTAGE_STAGE_IRODORI_CHESS_BUILD");
    *(_DWORD *)(v1 + 240) = 10;
    std::pair<std::string const,data::MultistageStageType>::pair<char const(&)[36],data::MultistageStageType,true>(
      (std::pair<const std::string,data::MultistageStageType> *const)(v1 + 784),
      (const char (*)[36])"MULTISTAGE_STAGE_IRODORI_CHESS_KILL",
      (data::MultistageStageType *)(v1 + 240));
    if ( *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 256, "MULTISTAGE_STAGE_IRODORI_CHESS_KILL");
    *(_DWORD *)(v1 + 256) = 11;
    std::pair<std::string const,data::MultistageStageType>::pair<char const(&)[40],data::MultistageStageType,true>(
      (std::pair<const std::string,data::MultistageStageType> *const)(v1 + 824),
      (const char (*)[40])"MULTISTAGE_STAGE_CHAR_AMUSEMENT_GALLERY",
      (data::MultistageStageType *)(v1 + 256));
    if ( *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 272, "MULTISTAGE_STAGE_CHAR_AMUSEMENT_GALLERY");
    *(_DWORD *)(v1 + 272) = 12;
    std::pair<std::string const,data::MultistageStageType>::pair<char const(&)[40],data::MultistageStageType,true>(
      (std::pair<const std::string,data::MultistageStageType> *const)(v1 + 864),
      (const char (*)[40])"MULTISTAGE_STAGE_CHAR_AMUSEMENT_PREVIEW",
      (data::MultistageStageType *)(v1 + 272));
    if ( *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 288, "MULTISTAGE_STAGE_CHAR_AMUSEMENT_PREVIEW");
    *(_DWORD *)(v1 + 288) = 13;
    std::pair<std::string const,data::MultistageStageType>::pair<char const(&)[39],data::MultistageStageType,true>(
      (std::pair<const std::string,data::MultistageStageType> *const)(v1 + 904),
      (const char (*)[39])"MULTISTAGE_STAGE_COIN_COLLECT_CUTSCENE",
      (data::MultistageStageType *)(v1 + 288));
    if ( *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 304, "MULTISTAGE_STAGE_COIN_COLLECT_CUTSCENE");
    *(_DWORD *)(v1 + 304) = 14;
    std::pair<std::string const,data::MultistageStageType>::pair<char const(&)[38],data::MultistageStageType,true>(
      (std::pair<const std::string,data::MultistageStageType> *const)(v1 + 944),
      (const char (*)[38])"MULTISTAGE_STAGE_COIN_COLLECT_GALLERY",
      (data::MultistageStageType *)(v1 + 304));
    if ( *(_BYTE *)(((v1 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 320) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 320, "MULTISTAGE_STAGE_COIN_COLLECT_GALLERY");
    *(_DWORD *)(v1 + 320) = 15;
    std::pair<std::string const,data::MultistageStageType>::pair<char const(&)[38],data::MultistageStageType,true>(
      (std::pair<const std::string,data::MultistageStageType> *const)(v1 + 984),
      (const char (*)[38])"MULTISTAGE_STAGE_COIN_COLLECT_PREPARE",
      (data::MultistageStageType *)(v1 + 320));
    if ( *(_BYTE *)(((v1 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 336) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 336, "MULTISTAGE_STAGE_COIN_COLLECT_PREPARE");
    *(_DWORD *)(v1 + 336) = 16;
    std::pair<std::string const,data::MultistageStageType>::pair<char const(&)[37],data::MultistageStageType,true>(
      (std::pair<const std::string,data::MultistageStageType> *const)(v1 + 1024),
      (const char (*)[37])"MULTISTAGE_STAGE_LAN_V3_BOAT_PREPARE",
      (data::MultistageStageType *)(v1 + 336));
    if ( *(_BYTE *)(((v1 + 352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 352) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 352, "MULTISTAGE_STAGE_LAN_V3_BOAT_PREPARE");
    *(_DWORD *)(v1 + 352) = 17;
    std::pair<std::string const,data::MultistageStageType>::pair<char const(&)[34],data::MultistageStageType,true>(
      (std::pair<const std::string,data::MultistageStageType> *const)(v1 + 1064),
      (const char (*)[34])"MULTISTAGE_STAGE_LAN_V3_BOAT_PLAY",
      (data::MultistageStageType *)(v1 + 352));
    if ( *(_BYTE *)(((v1 + 368) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 368) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 368, "MULTISTAGE_STAGE_LAN_V3_BOAT_PLAY");
    *(_DWORD *)(v1 + 368) = 18;
    std::pair<std::string const,data::MultistageStageType>::pair<char const(&)[36],data::MultistageStageType,true>(
      (std::pair<const std::string,data::MultistageStageType> *const)(v1 + 1104),
      (const char (*)[36])"MULTISTAGE_STAGE_LAN_V3_BOAT_SETTLE",
      (data::MultistageStageType *)(v1 + 368));
    std::allocator<std::pair<std::string const,data::MultistageStageType>>::allocator((std::allocator<std::pair<const std::string,data::MultistageStageType> > *const)(v1 + 64));
    std::unordered_map<std::string,data::MultistageStageType>::unordered_map(
      &data::getMultistageStageTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::MultistageStageType> >)__PAIR128__(19LL, v1 + 384),
      0LL,
      (const std::unordered_map<std::string,data::MultistageStageType>::hasher *)(v1 + 32),
      (const std::unordered_map<std::string,data::MultistageStageType>::key_equal *)(v1 + 48),
      (const std::unordered_map<std::string,data::MultistageStageType>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getMultistageStageTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::MultistageStageType>::~unordered_map,
      &data::getMultistageStageTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::MultistageStageType>>::~allocator((std::allocator<std::pair<const std::string,data::MultistageStageType> > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::MultistageStageType> *)(v1 + 1144);
          i != (std::pair<const std::string,data::MultistageStageType> *)(v1 + 384);
          std::pair<std::string const,data::MultistageStageType>::~pair(i) )
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
  return &data::getMultistageStageTypeNameMap[abi:cxx11](void)::m;
};

// Line 1145: range 000000000CC9F936-000000000CCA11DD
const std::map<data::MultistageStageType,std::pair<std::string,std::string >> *__cdecl data::getMultistageStageTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::MultistageStageType,std::pair<std::string,std::string > > *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getMultistageStageTypeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getMultistageStageTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getMultistageStageTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[34],true>(
      (std::pair<std::string,std::string > *const)(v1 + 384),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[34])"MULTISTAGE_STAGE_MECHANICUS_BUILD");
    std::pair<data::MultistageStageType const,std::pair<std::string,std::string>>::pair<data::MultistageStageType,true>(
      (std::pair<const data::MultistageStageType,std::pair<std::string,std::string > > *const)(v1 + 2208),
      (data::MultistageStageType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 384));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[33],true>(
      (std::pair<std::string,std::string > *const)(v1 + 480),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[33])"MULTISTAGE_STAGE_MECHANICUS_KILL");
    std::pair<data::MultistageStageType const,std::pair<std::string,std::string>>::pair<data::MultistageStageType,true>(
      (std::pair<const data::MultistageStageType,std::pair<std::string,std::string > > *const)(v1 + 2280),
      (data::MultistageStageType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 480));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[38],true>(
      (std::pair<std::string,std::string > *const)(v1 + 576),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[38])"MULTISTAGE_STAGE_MECHANICUS_FLIP_CARD");
    std::pair<data::MultistageStageType const,std::pair<std::string,std::string>>::pair<data::MultistageStageType,true>(
      (std::pair<const data::MultistageStageType,std::pair<std::string,std::string > > *const)(v1 + 2352),
      (data::MultistageStageType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 576));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, v1 + 112);
    *(_DWORD *)(v1 + 128) = 3;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[22],true>(
      (std::pair<std::string,std::string > *const)(v1 + 672),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[22])"MULTISTAGE_STAGE_IDLE");
    std::pair<data::MultistageStageType const,std::pair<std::string,std::string>>::pair<data::MultistageStageType,true>(
      (std::pair<const data::MultistageStageType,std::pair<std::string,std::string > > *const)(v1 + 2424),
      (data::MultistageStageType *)(v1 + 128),
      (const std::pair<std::string,std::string > *)(v1 + 672));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, v1 + 128);
    *(_DWORD *)(v1 + 144) = 4;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[36],true>(
      (std::pair<std::string,std::string > *const)(v1 + 768),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[36])"MULTISTAGE_STAGE_FLEUR_FAIR_GALLERY");
    std::pair<data::MultistageStageType const,std::pair<std::string,std::string>>::pair<data::MultistageStageType,true>(
      (std::pair<const data::MultistageStageType,std::pair<std::string,std::string > > *const)(v1 + 2496),
      (data::MultistageStageType *)(v1 + 144),
      (const std::pair<std::string,std::string > *)(v1 + 768));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, v1 + 144);
    *(_DWORD *)(v1 + 160) = 5;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[33],true>(
      (std::pair<std::string,std::string > *const)(v1 + 864),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[33])"MULTISTAGE_STAGE_FLEUR_FAIR_BOSS");
    std::pair<data::MultistageStageType const,std::pair<std::string,std::string>>::pair<data::MultistageStageType,true>(
      (std::pair<const data::MultistageStageType,std::pair<std::string,std::string > > *const)(v1 + 2568),
      (data::MultistageStageType *)(v1 + 160),
      (const std::pair<std::string,std::string > *)(v1 + 864));
    if ( *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 176, v1 + 160);
    *(_DWORD *)(v1 + 176) = 6;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[36],true>(
      (std::pair<std::string,std::string > *const)(v1 + 960),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[36])"MULTISTAGE_STAGE_FLEUR_FAIR_PREVIEW");
    std::pair<data::MultistageStageType const,std::pair<std::string,std::string>>::pair<data::MultistageStageType,true>(
      (std::pair<const data::MultistageStageType,std::pair<std::string,std::string > > *const)(v1 + 2640),
      (data::MultistageStageType *)(v1 + 176),
      (const std::pair<std::string,std::string > *)(v1 + 960));
    if ( *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 192, v1 + 176);
    *(_DWORD *)(v1 + 192) = 7;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[29],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1056),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[29])"MULTISTAGE_STAGE_CHESS_BUILD");
    std::pair<data::MultistageStageType const,std::pair<std::string,std::string>>::pair<data::MultistageStageType,true>(
      (std::pair<const data::MultistageStageType,std::pair<std::string,std::string > > *const)(v1 + 2712),
      (data::MultistageStageType *)(v1 + 192),
      (const std::pair<std::string,std::string > *)(v1 + 1056));
    if ( *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 208, v1 + 192);
    *(_DWORD *)(v1 + 208) = 8;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[28],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1152),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[28])"MULTISTAGE_STAGE_CHESS_KILL");
    std::pair<data::MultistageStageType const,std::pair<std::string,std::string>>::pair<data::MultistageStageType,true>(
      (std::pair<const data::MultistageStageType,std::pair<std::string,std::string > > *const)(v1 + 2784),
      (data::MultistageStageType *)(v1 + 208),
      (const std::pair<std::string,std::string > *)(v1 + 1152));
    if ( *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 224, v1 + 208);
    *(_DWORD *)(v1 + 224) = 9;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[37],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1248),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[37])"MULTISTAGE_STAGE_IRODORI_CHESS_BUILD");
    std::pair<data::MultistageStageType const,std::pair<std::string,std::string>>::pair<data::MultistageStageType,true>(
      (std::pair<const data::MultistageStageType,std::pair<std::string,std::string > > *const)(v1 + 2856),
      (data::MultistageStageType *)(v1 + 224),
      (const std::pair<std::string,std::string > *)(v1 + 1248));
    if ( *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 240) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 240, v1 + 224);
    *(_DWORD *)(v1 + 240) = 10;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[36],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1344),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[36])"MULTISTAGE_STAGE_IRODORI_CHESS_KILL");
    std::pair<data::MultistageStageType const,std::pair<std::string,std::string>>::pair<data::MultistageStageType,true>(
      (std::pair<const data::MultistageStageType,std::pair<std::string,std::string > > *const)(v1 + 2928),
      (data::MultistageStageType *)(v1 + 240),
      (const std::pair<std::string,std::string > *)(v1 + 1344));
    if ( *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 256) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 256, v1 + 240);
    *(_DWORD *)(v1 + 256) = 11;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[40],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1440),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[40])"MULTISTAGE_STAGE_CHAR_AMUSEMENT_GALLERY");
    std::pair<data::MultistageStageType const,std::pair<std::string,std::string>>::pair<data::MultistageStageType,true>(
      (std::pair<const data::MultistageStageType,std::pair<std::string,std::string > > *const)(v1 + 3000),
      (data::MultistageStageType *)(v1 + 256),
      (const std::pair<std::string,std::string > *)(v1 + 1440));
    if ( *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 272) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 272, v1 + 256);
    *(_DWORD *)(v1 + 272) = 12;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[40],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1536),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[40])"MULTISTAGE_STAGE_CHAR_AMUSEMENT_PREVIEW");
    std::pair<data::MultistageStageType const,std::pair<std::string,std::string>>::pair<data::MultistageStageType,true>(
      (std::pair<const data::MultistageStageType,std::pair<std::string,std::string > > *const)(v1 + 3072),
      (data::MultistageStageType *)(v1 + 272),
      (const std::pair<std::string,std::string > *)(v1 + 1536));
    if ( *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 288, v1 + 272);
    *(_DWORD *)(v1 + 288) = 13;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[39],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1632),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[39])"MULTISTAGE_STAGE_COIN_COLLECT_CUTSCENE");
    std::pair<data::MultistageStageType const,std::pair<std::string,std::string>>::pair<data::MultistageStageType,true>(
      (std::pair<const data::MultistageStageType,std::pair<std::string,std::string > > *const)(v1 + 3144),
      (data::MultistageStageType *)(v1 + 288),
      (const std::pair<std::string,std::string > *)(v1 + 1632));
    if ( *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 304) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 304, v1 + 288);
    *(_DWORD *)(v1 + 304) = 14;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[38],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1728),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[38])"MULTISTAGE_STAGE_COIN_COLLECT_GALLERY");
    std::pair<data::MultistageStageType const,std::pair<std::string,std::string>>::pair<data::MultistageStageType,true>(
      (std::pair<const data::MultistageStageType,std::pair<std::string,std::string > > *const)(v1 + 3216),
      (data::MultistageStageType *)(v1 + 304),
      (const std::pair<std::string,std::string > *)(v1 + 1728));
    if ( *(_BYTE *)(((v1 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 320) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 320, v1 + 304);
    *(_DWORD *)(v1 + 320) = 15;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[38],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1824),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[38])"MULTISTAGE_STAGE_COIN_COLLECT_PREPARE");
    std::pair<data::MultistageStageType const,std::pair<std::string,std::string>>::pair<data::MultistageStageType,true>(
      (std::pair<const data::MultistageStageType,std::pair<std::string,std::string > > *const)(v1 + 3288),
      (data::MultistageStageType *)(v1 + 320),
      (const std::pair<std::string,std::string > *)(v1 + 1824));
    if ( *(_BYTE *)(((v1 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 336) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 336, v1 + 320);
    *(_DWORD *)(v1 + 336) = 16;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[37],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1920),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[37])"MULTISTAGE_STAGE_LAN_V3_BOAT_PREPARE");
    std::pair<data::MultistageStageType const,std::pair<std::string,std::string>>::pair<data::MultistageStageType,true>(
      (std::pair<const data::MultistageStageType,std::pair<std::string,std::string > > *const)(v1 + 3360),
      (data::MultistageStageType *)(v1 + 336),
      (const std::pair<std::string,std::string > *)(v1 + 1920));
    if ( *(_BYTE *)(((v1 + 352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 352) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 352, v1 + 336);
    *(_DWORD *)(v1 + 352) = 17;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[34],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2016),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[34])"MULTISTAGE_STAGE_LAN_V3_BOAT_PLAY");
    std::pair<data::MultistageStageType const,std::pair<std::string,std::string>>::pair<data::MultistageStageType,true>(
      (std::pair<const data::MultistageStageType,std::pair<std::string,std::string > > *const)(v1 + 3432),
      (data::MultistageStageType *)(v1 + 352),
      (const std::pair<std::string,std::string > *)(v1 + 2016));
    if ( *(_BYTE *)(((v1 + 368) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 368) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 368, v1 + 352);
    *(_DWORD *)(v1 + 368) = 18;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[36],true>(
      (std::pair<std::string,std::string > *const)(v1 + 2112),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[36])"MULTISTAGE_STAGE_LAN_V3_BOAT_SETTLE");
    std::pair<data::MultistageStageType const,std::pair<std::string,std::string>>::pair<data::MultistageStageType,true>(
      (std::pair<const data::MultistageStageType,std::pair<std::string,std::string > > *const)(v1 + 3504),
      (data::MultistageStageType *)(v1 + 368),
      (const std::pair<std::string,std::string > *)(v1 + 2112));
    std::allocator<std::pair<data::MultistageStageType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::MultistageStageType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    std::map<data::MultistageStageType,std::pair<std::string,std::string>>::map(
      &data::getMultistageStageTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::MultistageStageType,std::pair<std::string,std::string > > >)__PAIR128__(19LL, v1 + 2208),
      (const std::less<data::MultistageStageType> *)(v1 + 48),
      (const std::map<data::MultistageStageType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getMultistageStageTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::MultistageStageType,std::pair<std::string,std::string>>::~map,
      &data::getMultistageStageTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::MultistageStageType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::MultistageStageType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::MultistageStageType,std::pair<std::string,std::string > > *)(v1 + 3576);
          i != (std::pair<const data::MultistageStageType,std::pair<std::string,std::string > > *)(v1 + 2208);
          std::pair<data::MultistageStageType const,std::pair<std::string,std::string>>::~pair(i) )
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
  return &data::getMultistageStageTypeEnumMap[abi:cxx11](void)::m;
};

// Line 1172: range 000000000CCA11DE-000000000CCA1551
const char *__fastcall data::enumValToStr(data::GroupIOType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::GroupIOType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::GroupIOType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 6 e:1171 64 8 9 iter:1174 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getGroupIOTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::GroupIOType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::GroupIOType,std::pair<std::string,std::string>>::find(
                                                                                                    map,
                                                                                                    (const std::map<data::GroupIOType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::GroupIOType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::GroupIOType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::GroupIOType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::GroupIOType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
      "enumValToStr",
      1177);
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
    result = "INVALID_GroupIOType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::GroupIOType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::GroupIOType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 1184: range 000000000CCA1552-000000000CCA1B0A
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::GroupIOType>,false,true>::pointer v10; // rax
  data::GroupIOType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::GroupIOType> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 7 it:1193 96 8 9 <unknown> 128 8 6 s:1183 160 32 9 <unknown> 224 32 9 <u"
                        "nknown> 288 32 9 <unknown>";
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
    m = data::getGroupIOTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::GroupIOType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::GroupIOType>::find(
                                                                                        m,
                                                                                        (const std::unordered_map<std::string,data::GroupIOType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::GroupIOType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::GroupIOType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::GroupIOType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GroupIOType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GroupIOType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
        "enumNameToVal",
        1196);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::GroupIOType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::GroupIOType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
      "enumNameToVal",
      1187);
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

// Line 1205: range 000000000CCA1B0B-000000000CCA2160
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  const char *v6; // rsi
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::GroupIOType>,false,true>::pointer v10; // rax
  data::GroupIOType second; // ecx
  char v12; // dl
  char v14[384]; // [rsp+10h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 7 it:1216 96 8 9 <unknown> 128 8 6 s:1204 160 32 9 <unknown> 224 32 9 <u"
                        "nknown> 288 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::GroupIOType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::GroupIOType &)::m) )
    {
      data::enumStrToVal(char const*,data::GroupIOType &)::m._M_h._M_buckets = 0LL;
      data::enumStrToVal(char const*,data::GroupIOType &)::m._M_h._M_bucket_count = 0LL;
      data::enumStrToVal(char const*,data::GroupIOType &)::m._M_h._M_before_begin._M_nxt = 0LL;
      data::enumStrToVal(char const*,data::GroupIOType &)::m._M_h._M_element_count = 0LL;
      *(_QWORD *)&data::enumStrToVal(char const*,data::GroupIOType &)::m._M_h._M_rehash_policy._M_max_load_factor = 0LL;
      data::enumStrToVal(char const*,data::GroupIOType &)::m._M_h._M_rehash_policy._M_next_resize = 0LL;
      data::enumStrToVal(char const*,data::GroupIOType &)::m._M_h._M_single_bucket = 0LL;
      std::unordered_map<std::string,data::GroupIOType>::unordered_map(&data::enumStrToVal(char const*,data::GroupIOType &)::m);
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::GroupIOType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::GroupIOType>::~unordered_map,
        &data::enumStrToVal(char const*,data::GroupIOType &)::m,
        &_dso_handle);
    }
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::GroupIOType>::iterator *)(v2 + 64) = std::unordered_map<std::string,data::GroupIOType>::find(
                                                                                  &data::enumStrToVal(char const*,data::GroupIOType &)::m,
                                                                                  (const std::unordered_map<std::string,data::GroupIOType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::GroupIOType>::iterator *)(v2 + 96) = std::unordered_map<std::string,data::GroupIOType>::end(&data::enumStrToVal(char const*,data::GroupIOType &)::m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::GroupIOType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GroupIOType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GroupIOType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
        "enumStrToVal",
        1219);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_iterator<std::pair<std::string const,data::GroupIOType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::GroupIOType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
      "enumStrToVal",
      1208);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[14])"s is nullptr!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    result = 0xFFFFFFFFLL;
  }
  if ( v14 == (char *)v2 )
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

// Line 1228: range 000000000CCA2161-000000000CCA2177
const char *__cdecl data::getDescription(data::GroupIOType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 1233: range 000000000CCA2178-000000000CCA232D
bool __cdecl data::isValidGroupIOType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::GroupIOType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::GroupIOType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 6 e:1234 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidGroupIOType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getGroupIOTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::GroupIOType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::GroupIOType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getGroupIOTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::GroupIOType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::GroupIOType,std::pair<std::string,std::string>>::find(
                                                                                                    v6,
                                                                                                    (const std::map<data::GroupIOType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::GroupIOType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::GroupIOType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 1239: range 000000000CCA232E-000000000CCA248F
bool __cdecl data::isValidGroupIOTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::GroupIOType> *v5; // rcx
  const std::unordered_map<std::string,data::GroupIOType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidGroupIOTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getGroupIOTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::GroupIOType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::GroupIOType>::end(v5);
  v6 = data::getGroupIOTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::GroupIOType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::GroupIOType>::find(
                                                                                      v6,
                                                                                      name);
  result = std::__detail::operator!=<std::pair<std::string const,data::GroupIOType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GroupIOType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GroupIOType>,true> *)(v2 + 64));
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

// Line 1244: range 000000000CCA2490-000000000CCA2896
const std::unordered_map<std::string,data::GroupIOType> *__cdecl data::getGroupIOTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::GroupIOType> *i; // r14
  const std::unordered_map<std::string,data::GroupIOType> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getGroupIOTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556927;
  v3[536862723] = 61956;
  v3[536862726] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getGroupIOTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getGroupIOTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string const,data::GroupIOType>::pair<char const(&)[22],data::GroupIOType,true>(
      (std::pair<const std::string,data::GroupIOType> *const)(v1 + 112),
      (const char (*)[22])"GROUP_IO_TYPE_DEFAULT",
      (data::GroupIOType *)(v1 + 80));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, "GROUP_IO_TYPE_DEFAULT");
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string const,data::GroupIOType>::pair<char const(&)[19],data::GroupIOType,true>(
      (std::pair<const std::string,data::GroupIOType> *const)(v1 + 152),
      (const char (*)[19])"GROUP_IO_TYPE_FLOW",
      (data::GroupIOType *)(v1 + 96));
    std::allocator<std::pair<std::string const,data::GroupIOType>>::allocator((std::allocator<std::pair<const std::string,data::GroupIOType> > *const)(v1 + 64));
    std::unordered_map<std::string,data::GroupIOType>::unordered_map(
      &data::getGroupIOTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::GroupIOType> >)__PAIR128__(2LL, v1 + 112),
      0LL,
      (const std::unordered_map<std::string,data::GroupIOType>::hasher *)(v1 + 32),
      (const std::unordered_map<std::string,data::GroupIOType>::key_equal *)(v1 + 48),
      (const std::unordered_map<std::string,data::GroupIOType>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getGroupIOTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::GroupIOType>::~unordered_map,
      &data::getGroupIOTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::GroupIOType>>::~allocator((std::allocator<std::pair<const std::string,data::GroupIOType> > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::GroupIOType> *)(v1 + 192);
          i != (std::pair<const std::string,data::GroupIOType> *)(v1 + 112);
          std::pair<std::string const,data::GroupIOType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getGroupIOTypeNameMap[abi:cxx11](void)::m;
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

// Line 1254: range 000000000CCA2897-000000000CCA2E54
const std::map<data::GroupIOType,std::pair<std::string,std::string >> *__cdecl data::getGroupIOTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::GroupIOType,std::pair<std::string,std::string > > *i; // r14
  unsigned __int64 v5; // rax
  _DWORD *v6; // rax
  const std::map<data::GroupIOType,std::pair<std::string,std::string >> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getGroupIOTypeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getGroupIOTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getGroupIOTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[22],true>(
      (std::pair<std::string,std::string > *const)(v1 + 112),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[22])"GROUP_IO_TYPE_DEFAULT");
    std::pair<data::GroupIOType const,std::pair<std::string,std::string>>::pair<data::GroupIOType,true>(
      (std::pair<const data::GroupIOType,std::pair<std::string,std::string > > *const)(v1 + 304),
      (data::GroupIOType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[19],true>(
      (std::pair<std::string,std::string > *const)(v1 + 208),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[19])"GROUP_IO_TYPE_FLOW");
    std::pair<data::GroupIOType const,std::pair<std::string,std::string>>::pair<data::GroupIOType,true>(
      (std::pair<const data::GroupIOType,std::pair<std::string,std::string > > *const)(v1 + 376),
      (data::GroupIOType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 208));
    std::allocator<std::pair<data::GroupIOType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::GroupIOType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    std::map<data::GroupIOType,std::pair<std::string,std::string>>::map(
      &data::getGroupIOTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::GroupIOType,std::pair<std::string,std::string > > >)__PAIR128__(2LL, v1 + 304),
      (const std::less<data::GroupIOType> *)(v1 + 48),
      (const std::map<data::GroupIOType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getGroupIOTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::GroupIOType,std::pair<std::string,std::string>>::~map,
      &data::getGroupIOTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::GroupIOType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::GroupIOType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::GroupIOType,std::pair<std::string,std::string > > *)(v1 + 448);
          i != (std::pair<const data::GroupIOType,std::pair<std::string,std::string > > *)(v1 + 304);
          std::pair<data::GroupIOType const,std::pair<std::string,std::string>>::~pair(i) )
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
  result = &data::getGroupIOTypeEnumMap[abi:cxx11](void)::m;
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

// Line 1264: range 000000000CCA2E55-000000000CCA31C8
const char *__fastcall data::enumValToStr(data::FlowGroupSubType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::FlowGroupSubType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::FlowGroupSubType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 6 e:1263 64 8 9 iter:1266 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getFlowGroupSubTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::FlowGroupSubType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::FlowGroupSubType,std::pair<std::string,std::string>>::find(map, (const std::map<data::FlowGroupSubType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::FlowGroupSubType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::FlowGroupSubType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::FlowGroupSubType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::FlowGroupSubType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
      "enumValToStr",
      1269);
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
    result = "INVALID_FlowGroupSubType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::FlowGroupSubType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::FlowGroupSubType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 1276: range 000000000CCA31C9-000000000CCA3781
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::FlowGroupSubType>,false,true>::pointer v10; // rax
  data::FlowGroupSubType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::FlowGroupSubType> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 7 it:1285 96 8 9 <unknown> 128 8 6 s:1275 160 32 9 <unknown> 224 32 9 <u"
                        "nknown> 288 32 9 <unknown>";
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
    m = data::getFlowGroupSubTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::FlowGroupSubType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::FlowGroupSubType>::find(
                                                                                             m,
                                                                                             (const std::unordered_map<std::string,data::FlowGroupSubType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::FlowGroupSubType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::FlowGroupSubType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::FlowGroupSubType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::FlowGroupSubType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::FlowGroupSubType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
        "enumNameToVal",
        1288);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::FlowGroupSubType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::FlowGroupSubType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
      "enumNameToVal",
      1279);
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

// Line 1297: range 000000000CCA3782-000000000CCA3DD7
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  const char *v6; // rsi
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::FlowGroupSubType>,false,true>::pointer v10; // rax
  data::FlowGroupSubType second; // ecx
  char v12; // dl
  char v14[384]; // [rsp+10h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 7 it:1308 96 8 9 <unknown> 128 8 6 s:1296 160 32 9 <unknown> 224 32 9 <u"
                        "nknown> 288 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::FlowGroupSubType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::FlowGroupSubType &)::m) )
    {
      data::enumStrToVal(char const*,data::FlowGroupSubType &)::m._M_h._M_buckets = 0LL;
      data::enumStrToVal(char const*,data::FlowGroupSubType &)::m._M_h._M_bucket_count = 0LL;
      data::enumStrToVal(char const*,data::FlowGroupSubType &)::m._M_h._M_before_begin._M_nxt = 0LL;
      data::enumStrToVal(char const*,data::FlowGroupSubType &)::m._M_h._M_element_count = 0LL;
      *(_QWORD *)&data::enumStrToVal(char const*,data::FlowGroupSubType &)::m._M_h._M_rehash_policy._M_max_load_factor = 0LL;
      data::enumStrToVal(char const*,data::FlowGroupSubType &)::m._M_h._M_rehash_policy._M_next_resize = 0LL;
      data::enumStrToVal(char const*,data::FlowGroupSubType &)::m._M_h._M_single_bucket = 0LL;
      std::unordered_map<std::string,data::FlowGroupSubType>::unordered_map(&data::enumStrToVal(char const*,data::FlowGroupSubType &)::m);
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::FlowGroupSubType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::FlowGroupSubType>::~unordered_map,
        &data::enumStrToVal(char const*,data::FlowGroupSubType &)::m,
        &_dso_handle);
    }
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::FlowGroupSubType>::iterator *)(v2 + 64) = std::unordered_map<std::string,data::FlowGroupSubType>::find(
                                                                                       &data::enumStrToVal(char const*,data::FlowGroupSubType &)::m,
                                                                                       (const std::unordered_map<std::string,data::FlowGroupSubType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::FlowGroupSubType>::iterator *)(v2 + 96) = std::unordered_map<std::string,data::FlowGroupSubType>::end(&data::enumStrToVal(char const*,data::FlowGroupSubType &)::m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::FlowGroupSubType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::FlowGroupSubType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::FlowGroupSubType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
        "enumStrToVal",
        1311);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_iterator<std::pair<std::string const,data::FlowGroupSubType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::FlowGroupSubType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
      "enumStrToVal",
      1300);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[14])"s is nullptr!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    result = 0xFFFFFFFFLL;
  }
  if ( v14 == (char *)v2 )
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

// Line 1320: range 000000000CCA3DD8-000000000CCA3DEE
const char *__cdecl data::getDescription(data::FlowGroupSubType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 1325: range 000000000CCA3DEF-000000000CCA3FA4
bool __cdecl data::isValidFlowGroupSubType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::FlowGroupSubType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::FlowGroupSubType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 6 e:1326 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidFlowGroupSubType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getFlowGroupSubTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::FlowGroupSubType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::FlowGroupSubType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getFlowGroupSubTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::FlowGroupSubType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::FlowGroupSubType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::FlowGroupSubType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::FlowGroupSubType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::FlowGroupSubType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 1331: range 000000000CCA3FA5-000000000CCA4106
bool __cdecl data::isValidFlowGroupSubTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::FlowGroupSubType> *v5; // rcx
  const std::unordered_map<std::string,data::FlowGroupSubType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidFlowGroupSubTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getFlowGroupSubTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::FlowGroupSubType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::FlowGroupSubType>::end(v5);
  v6 = data::getFlowGroupSubTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::FlowGroupSubType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::FlowGroupSubType>::find(
                                                                                           v6,
                                                                                           name);
  result = std::__detail::operator!=<std::pair<std::string const,data::FlowGroupSubType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::FlowGroupSubType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::FlowGroupSubType>,true> *)(v2 + 64));
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

// Line 1336: range 000000000CCA4107-000000000CCA450D
const std::unordered_map<std::string,data::FlowGroupSubType> *__cdecl data::getFlowGroupSubTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::FlowGroupSubType> *i; // r14
  const std::unordered_map<std::string,data::FlowGroupSubType> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getFlowGroupSubTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556927;
  v3[536862723] = 61956;
  v3[536862726] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getFlowGroupSubTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getFlowGroupSubTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string const,data::FlowGroupSubType>::pair<char const(&)[28],data::FlowGroupSubType,true>(
      (std::pair<const std::string,data::FlowGroupSubType> *const)(v1 + 112),
      (const char (*)[28])"GROUP_SUB_FLOW_TYPE_DEFAULT",
      (data::FlowGroupSubType *)(v1 + 80));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, "GROUP_SUB_FLOW_TYPE_DEFAULT");
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string const,data::FlowGroupSubType>::pair<char const(&)[32],data::FlowGroupSubType,true>(
      (std::pair<const std::string,data::FlowGroupSubType> *const)(v1 + 152),
      (const char (*)[32])"GROUP_SUB_FLOW_TYPE_WORLD_QUEST",
      (data::FlowGroupSubType *)(v1 + 96));
    std::allocator<std::pair<std::string const,data::FlowGroupSubType>>::allocator((std::allocator<std::pair<const std::string,data::FlowGroupSubType> > *const)(v1 + 64));
    std::unordered_map<std::string,data::FlowGroupSubType>::unordered_map(
      &data::getFlowGroupSubTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::FlowGroupSubType> >)__PAIR128__(2LL, v1 + 112),
      0LL,
      (const std::unordered_map<std::string,data::FlowGroupSubType>::hasher *)(v1 + 32),
      (const std::unordered_map<std::string,data::FlowGroupSubType>::key_equal *)(v1 + 48),
      (const std::unordered_map<std::string,data::FlowGroupSubType>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getFlowGroupSubTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::FlowGroupSubType>::~unordered_map,
      &data::getFlowGroupSubTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::FlowGroupSubType>>::~allocator((std::allocator<std::pair<const std::string,data::FlowGroupSubType> > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::FlowGroupSubType> *)(v1 + 192);
          i != (std::pair<const std::string,data::FlowGroupSubType> *)(v1 + 112);
          std::pair<std::string const,data::FlowGroupSubType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getFlowGroupSubTypeNameMap[abi:cxx11](void)::m;
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

// Line 1346: range 000000000CCA450E-000000000CCA4ACB
const std::map<data::FlowGroupSubType,std::pair<std::string,std::string >> *__cdecl data::getFlowGroupSubTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::FlowGroupSubType,std::pair<std::string,std::string > > *i; // r14
  unsigned __int64 v5; // rax
  _DWORD *v6; // rax
  const std::map<data::FlowGroupSubType,std::pair<std::string,std::string >> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getFlowGroupSubTypeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getFlowGroupSubTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getFlowGroupSubTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[28],true>(
      (std::pair<std::string,std::string > *const)(v1 + 112),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[28])"GROUP_SUB_FLOW_TYPE_DEFAULT");
    std::pair<data::FlowGroupSubType const,std::pair<std::string,std::string>>::pair<data::FlowGroupSubType,true>(
      (std::pair<const data::FlowGroupSubType,std::pair<std::string,std::string > > *const)(v1 + 304),
      (data::FlowGroupSubType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[32],true>(
      (std::pair<std::string,std::string > *const)(v1 + 208),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[32])"GROUP_SUB_FLOW_TYPE_WORLD_QUEST");
    std::pair<data::FlowGroupSubType const,std::pair<std::string,std::string>>::pair<data::FlowGroupSubType,true>(
      (std::pair<const data::FlowGroupSubType,std::pair<std::string,std::string > > *const)(v1 + 376),
      (data::FlowGroupSubType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 208));
    std::allocator<std::pair<data::FlowGroupSubType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::FlowGroupSubType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    std::map<data::FlowGroupSubType,std::pair<std::string,std::string>>::map(
      &data::getFlowGroupSubTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::FlowGroupSubType,std::pair<std::string,std::string > > >)__PAIR128__(2LL, v1 + 304),
      (const std::less<data::FlowGroupSubType> *)(v1 + 48),
      (const std::map<data::FlowGroupSubType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getFlowGroupSubTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::FlowGroupSubType,std::pair<std::string,std::string>>::~map,
      &data::getFlowGroupSubTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::FlowGroupSubType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::FlowGroupSubType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::FlowGroupSubType,std::pair<std::string,std::string > > *)(v1 + 448);
          i != (std::pair<const data::FlowGroupSubType,std::pair<std::string,std::string > > *)(v1 + 304);
          std::pair<data::FlowGroupSubType const,std::pair<std::string,std::string>>::~pair(i) )
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
  result = &data::getFlowGroupSubTypeEnumMap[abi:cxx11](void)::m;
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

// Line 1356: range 000000000CCA4ACC-000000000CCA4E3F
const char *__fastcall data::enumValToStr(data::CommonPlayerTipsType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::CommonPlayerTipsType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::CommonPlayerTipsType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 6 e:1355 64 8 9 iter:1358 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getCommonPlayerTipsTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::CommonPlayerTipsType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::CommonPlayerTipsType,std::pair<std::string,std::string>>::find(map, (const std::map<data::CommonPlayerTipsType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::CommonPlayerTipsType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::CommonPlayerTipsType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::CommonPlayerTipsType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::CommonPlayerTipsType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
      "enumValToStr",
      1361);
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
    result = "INVALID_CommonPlayerTipsType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::CommonPlayerTipsType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::CommonPlayerTipsType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 1368: range 000000000CCA4E40-000000000CCA53F8
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::CommonPlayerTipsType>,false,true>::pointer v10; // rax
  data::CommonPlayerTipsType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::CommonPlayerTipsType> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 7 it:1377 96 8 9 <unknown> 128 8 6 s:1367 160 32 9 <unknown> 224 32 9 <u"
                        "nknown> 288 32 9 <unknown>";
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
    m = data::getCommonPlayerTipsTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::CommonPlayerTipsType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::CommonPlayerTipsType>::find(
                                                                                                 m,
                                                                                                 (const std::unordered_map<std::string,data::CommonPlayerTipsType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::CommonPlayerTipsType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::CommonPlayerTipsType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::CommonPlayerTipsType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::CommonPlayerTipsType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::CommonPlayerTipsType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
        "enumNameToVal",
        1380);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::CommonPlayerTipsType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::CommonPlayerTipsType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
      "enumNameToVal",
      1371);
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

// Line 1389: range 000000000CCA53F9-000000000CCA5A4E
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  const char *v6; // rsi
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::CommonPlayerTipsType>,false,true>::pointer v10; // rax
  data::CommonPlayerTipsType second; // ecx
  char v12; // dl
  char v14[384]; // [rsp+10h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 7 it:1400 96 8 9 <unknown> 128 8 6 s:1388 160 32 9 <unknown> 224 32 9 <u"
                        "nknown> 288 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::CommonPlayerTipsType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::CommonPlayerTipsType &)::m) )
    {
      data::enumStrToVal(char const*,data::CommonPlayerTipsType &)::m._M_h._M_buckets = 0LL;
      data::enumStrToVal(char const*,data::CommonPlayerTipsType &)::m._M_h._M_bucket_count = 0LL;
      data::enumStrToVal(char const*,data::CommonPlayerTipsType &)::m._M_h._M_before_begin._M_nxt = 0LL;
      data::enumStrToVal(char const*,data::CommonPlayerTipsType &)::m._M_h._M_element_count = 0LL;
      *(_QWORD *)&data::enumStrToVal(char const*,data::CommonPlayerTipsType &)::m._M_h._M_rehash_policy._M_max_load_factor = 0LL;
      data::enumStrToVal(char const*,data::CommonPlayerTipsType &)::m._M_h._M_rehash_policy._M_next_resize = 0LL;
      data::enumStrToVal(char const*,data::CommonPlayerTipsType &)::m._M_h._M_single_bucket = 0LL;
      std::unordered_map<std::string,data::CommonPlayerTipsType>::unordered_map(&data::enumStrToVal(char const*,data::CommonPlayerTipsType &)::m);
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::CommonPlayerTipsType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::CommonPlayerTipsType>::~unordered_map,
        &data::enumStrToVal(char const*,data::CommonPlayerTipsType &)::m,
        &_dso_handle);
    }
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::CommonPlayerTipsType>::iterator *)(v2 + 64) = std::unordered_map<std::string,data::CommonPlayerTipsType>::find(
                                                                                           &data::enumStrToVal(char const*,data::CommonPlayerTipsType &)::m,
                                                                                           (const std::unordered_map<std::string,data::CommonPlayerTipsType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::CommonPlayerTipsType>::iterator *)(v2 + 96) = std::unordered_map<std::string,data::CommonPlayerTipsType>::end(&data::enumStrToVal(char const*,data::CommonPlayerTipsType &)::m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::CommonPlayerTipsType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::CommonPlayerTipsType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::CommonPlayerTipsType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
        "enumStrToVal",
        1403);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_iterator<std::pair<std::string const,data::CommonPlayerTipsType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::CommonPlayerTipsType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
      "enumStrToVal",
      1392);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[14])"s is nullptr!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    result = 0xFFFFFFFFLL;
  }
  if ( v14 == (char *)v2 )
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

// Line 1412: range 000000000CCA5A4F-000000000CCA5A65
const char *__cdecl data::getDescription(data::CommonPlayerTipsType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 1417: range 000000000CCA5A66-000000000CCA5C1B
bool __cdecl data::isValidCommonPlayerTipsType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::CommonPlayerTipsType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::CommonPlayerTipsType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 6 e:1418 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidCommonPlayerTipsType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getCommonPlayerTipsTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::CommonPlayerTipsType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::CommonPlayerTipsType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getCommonPlayerTipsTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::CommonPlayerTipsType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::CommonPlayerTipsType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::CommonPlayerTipsType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::CommonPlayerTipsType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::CommonPlayerTipsType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 1423: range 000000000CCA5C1C-000000000CCA5D7D
bool __cdecl data::isValidCommonPlayerTipsTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::CommonPlayerTipsType> *v5; // rcx
  const std::unordered_map<std::string,data::CommonPlayerTipsType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidCommonPlayerTipsTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getCommonPlayerTipsTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::CommonPlayerTipsType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::CommonPlayerTipsType>::end(v5);
  v6 = data::getCommonPlayerTipsTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::CommonPlayerTipsType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::CommonPlayerTipsType>::find(
                                                                                               v6,
                                                                                               name);
  result = std::__detail::operator!=<std::pair<std::string const,data::CommonPlayerTipsType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::CommonPlayerTipsType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::CommonPlayerTipsType>,true> *)(v2 + 64));
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

// Line 1428: range 000000000CCA5D7E-000000000CCA6240
const std::unordered_map<std::string,data::CommonPlayerTipsType> *__cdecl data::getCommonPlayerTipsTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::CommonPlayerTipsType> *i; // r14
  const std::unordered_map<std::string,data::CommonPlayerTipsType> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getCommonPlayerTipsTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556927;
  v3[536862723] = -234556924;
  v3[536862727] = -218103808;
  v3[536862728] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getCommonPlayerTipsTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getCommonPlayerTipsTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string const,data::CommonPlayerTipsType>::pair<char const(&)[31],data::CommonPlayerTipsType,true>(
      (std::pair<const std::string,data::CommonPlayerTipsType> *const)(v1 + 128),
      (const char (*)[31])"COMMON_PLAYER_TIPS_TYPE_FINISH",
      (data::CommonPlayerTipsType *)(v1 + 80));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, "COMMON_PLAYER_TIPS_TYPE_FINISH");
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string const,data::CommonPlayerTipsType>::pair<char const(&)[30],data::CommonPlayerTipsType,true>(
      (std::pair<const std::string,data::CommonPlayerTipsType> *const)(v1 + 168),
      (const char (*)[30])"COMMON_PLAYER_TIPS_TYPE_START",
      (data::CommonPlayerTipsType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "COMMON_PLAYER_TIPS_TYPE_START");
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string const,data::CommonPlayerTipsType>::pair<char const(&)[29],data::CommonPlayerTipsType,true>(
      (std::pair<const std::string,data::CommonPlayerTipsType> *const)(v1 + 208),
      (const char (*)[29])"COMMON_PLAYER_TIPS_TYPE_FAIL",
      (data::CommonPlayerTipsType *)(v1 + 112));
    std::allocator<std::pair<std::string const,data::CommonPlayerTipsType>>::allocator((std::allocator<std::pair<const std::string,data::CommonPlayerTipsType> > *const)(v1 + 64));
    std::unordered_map<std::string,data::CommonPlayerTipsType>::unordered_map(
      &data::getCommonPlayerTipsTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::CommonPlayerTipsType> >)__PAIR128__(3LL, v1 + 128),
      0LL,
      (const std::unordered_map<std::string,data::CommonPlayerTipsType>::hasher *)(v1 + 32),
      (const std::unordered_map<std::string,data::CommonPlayerTipsType>::key_equal *)(v1 + 48),
      (const std::unordered_map<std::string,data::CommonPlayerTipsType>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getCommonPlayerTipsTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::CommonPlayerTipsType>::~unordered_map,
      &data::getCommonPlayerTipsTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::CommonPlayerTipsType>>::~allocator((std::allocator<std::pair<const std::string,data::CommonPlayerTipsType> > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::CommonPlayerTipsType> *)(v1 + 248);
          i != (std::pair<const std::string,data::CommonPlayerTipsType> *)(v1 + 128);
          std::pair<std::string const,data::CommonPlayerTipsType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getCommonPlayerTipsTypeNameMap[abi:cxx11](void)::m;
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

// Line 1439: range 000000000CCA6241-000000000CCA693F
const std::map<data::CommonPlayerTipsType,std::pair<std::string,std::string >> *__cdecl data::getCommonPlayerTipsTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::CommonPlayerTipsType,std::pair<std::string,std::string > > *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getCommonPlayerTipsTypeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getCommonPlayerTipsTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getCommonPlayerTipsTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[31],true>(
      (std::pair<std::string,std::string > *const)(v1 + 128),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[31])"COMMON_PLAYER_TIPS_TYPE_FINISH");
    std::pair<data::CommonPlayerTipsType const,std::pair<std::string,std::string>>::pair<data::CommonPlayerTipsType,true>(
      (std::pair<const data::CommonPlayerTipsType,std::pair<std::string,std::string > > *const)(v1 + 416),
      (data::CommonPlayerTipsType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[30],true>(
      (std::pair<std::string,std::string > *const)(v1 + 224),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[30])"COMMON_PLAYER_TIPS_TYPE_START");
    std::pair<data::CommonPlayerTipsType const,std::pair<std::string,std::string>>::pair<data::CommonPlayerTipsType,true>(
      (std::pair<const data::CommonPlayerTipsType,std::pair<std::string,std::string > > *const)(v1 + 488),
      (data::CommonPlayerTipsType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 224));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[29],true>(
      (std::pair<std::string,std::string > *const)(v1 + 320),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[29])"COMMON_PLAYER_TIPS_TYPE_FAIL");
    std::pair<data::CommonPlayerTipsType const,std::pair<std::string,std::string>>::pair<data::CommonPlayerTipsType,true>(
      (std::pair<const data::CommonPlayerTipsType,std::pair<std::string,std::string > > *const)(v1 + 560),
      (data::CommonPlayerTipsType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 320));
    std::allocator<std::pair<data::CommonPlayerTipsType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::CommonPlayerTipsType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    std::map<data::CommonPlayerTipsType,std::pair<std::string,std::string>>::map(
      &data::getCommonPlayerTipsTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::CommonPlayerTipsType,std::pair<std::string,std::string > > >)__PAIR128__(3LL, v1 + 416),
      (const std::less<data::CommonPlayerTipsType> *)(v1 + 48),
      (const std::map<data::CommonPlayerTipsType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getCommonPlayerTipsTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::CommonPlayerTipsType,std::pair<std::string,std::string>>::~map,
      &data::getCommonPlayerTipsTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::CommonPlayerTipsType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::CommonPlayerTipsType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::CommonPlayerTipsType,std::pair<std::string,std::string > > *)(v1 + 632);
          i != (std::pair<const data::CommonPlayerTipsType,std::pair<std::string,std::string > > *)(v1 + 416);
          std::pair<data::CommonPlayerTipsType const,std::pair<std::string,std::string>>::~pair(i) )
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
  return &data::getCommonPlayerTipsTypeEnumMap[abi:cxx11](void)::m;
};

// Line 1450: range 000000000CCA6940-000000000CCA6CB3
const char *__fastcall data::enumValToStr(data::FlowSuiteOperatePolicy e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::FlowSuiteOperatePolicy,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::FlowSuiteOperatePolicy,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 6 e:1449 64 8 9 iter:1452 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getFlowSuiteOperatePolicyEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::FlowSuiteOperatePolicy,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::FlowSuiteOperatePolicy,std::pair<std::string,std::string>>::find(map, (const std::map<data::FlowSuiteOperatePolicy,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::FlowSuiteOperatePolicy,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::FlowSuiteOperatePolicy,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::FlowSuiteOperatePolicy,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::FlowSuiteOperatePolicy,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
      "enumValToStr",
      1455);
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
    result = "INVALID_FlowSuiteOperatePolicy";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::FlowSuiteOperatePolicy const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::FlowSuiteOperatePolicy,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 1462: range 000000000CCA6CB4-000000000CCA726C
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::FlowSuiteOperatePolicy>,false,true>::pointer v10; // rax
  data::FlowSuiteOperatePolicy second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::FlowSuiteOperatePolicy> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 7 it:1471 96 8 9 <unknown> 128 8 6 s:1461 160 32 9 <unknown> 224 32 9 <u"
                        "nknown> 288 32 9 <unknown>";
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
    m = data::getFlowSuiteOperatePolicyNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::FlowSuiteOperatePolicy>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::FlowSuiteOperatePolicy>::find(
                                                                                                   m,
                                                                                                   (const std::unordered_map<std::string,data::FlowSuiteOperatePolicy>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::FlowSuiteOperatePolicy>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::FlowSuiteOperatePolicy>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::FlowSuiteOperatePolicy>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::FlowSuiteOperatePolicy>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::FlowSuiteOperatePolicy>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
        "enumNameToVal",
        1474);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::FlowSuiteOperatePolicy>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::FlowSuiteOperatePolicy>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
      "enumNameToVal",
      1465);
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

// Line 1483: range 000000000CCA726D-000000000CCA78C2
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  const char *v6; // rsi
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::FlowSuiteOperatePolicy>,false,true>::pointer v10; // rax
  data::FlowSuiteOperatePolicy second; // ecx
  char v12; // dl
  char v14[384]; // [rsp+10h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 7 it:1494 96 8 9 <unknown> 128 8 6 s:1482 160 32 9 <unknown> 224 32 9 <u"
                        "nknown> 288 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::FlowSuiteOperatePolicy &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::FlowSuiteOperatePolicy &)::m) )
    {
      data::enumStrToVal(char const*,data::FlowSuiteOperatePolicy &)::m._M_h._M_buckets = 0LL;
      data::enumStrToVal(char const*,data::FlowSuiteOperatePolicy &)::m._M_h._M_bucket_count = 0LL;
      data::enumStrToVal(char const*,data::FlowSuiteOperatePolicy &)::m._M_h._M_before_begin._M_nxt = 0LL;
      data::enumStrToVal(char const*,data::FlowSuiteOperatePolicy &)::m._M_h._M_element_count = 0LL;
      *(_QWORD *)&data::enumStrToVal(char const*,data::FlowSuiteOperatePolicy &)::m._M_h._M_rehash_policy._M_max_load_factor = 0LL;
      data::enumStrToVal(char const*,data::FlowSuiteOperatePolicy &)::m._M_h._M_rehash_policy._M_next_resize = 0LL;
      data::enumStrToVal(char const*,data::FlowSuiteOperatePolicy &)::m._M_h._M_single_bucket = 0LL;
      std::unordered_map<std::string,data::FlowSuiteOperatePolicy>::unordered_map(&data::enumStrToVal(char const*,data::FlowSuiteOperatePolicy &)::m);
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::FlowSuiteOperatePolicy &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::FlowSuiteOperatePolicy>::~unordered_map,
        &data::enumStrToVal(char const*,data::FlowSuiteOperatePolicy &)::m,
        &_dso_handle);
    }
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::FlowSuiteOperatePolicy>::iterator *)(v2 + 64) = std::unordered_map<std::string,data::FlowSuiteOperatePolicy>::find(
                                                                                             &data::enumStrToVal(char const*,data::FlowSuiteOperatePolicy &)::m,
                                                                                             (const std::unordered_map<std::string,data::FlowSuiteOperatePolicy>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::FlowSuiteOperatePolicy>::iterator *)(v2 + 96) = std::unordered_map<std::string,data::FlowSuiteOperatePolicy>::end(&data::enumStrToVal(char const*,data::FlowSuiteOperatePolicy &)::m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::FlowSuiteOperatePolicy>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::FlowSuiteOperatePolicy>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::FlowSuiteOperatePolicy>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
        "enumStrToVal",
        1497);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_iterator<std::pair<std::string const,data::FlowSuiteOperatePolicy>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::FlowSuiteOperatePolicy>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
      "enumStrToVal",
      1486);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[14])"s is nullptr!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    result = 0xFFFFFFFFLL;
  }
  if ( v14 == (char *)v2 )
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

// Line 1506: range 000000000CCA78C3-000000000CCA78D9
const char *__cdecl data::getDescription(data::FlowSuiteOperatePolicy e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 1511: range 000000000CCA78DA-000000000CCA7A8F
bool __cdecl data::isValidFlowSuiteOperatePolicy(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::FlowSuiteOperatePolicy,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::FlowSuiteOperatePolicy,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 6 e:1512 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidFlowSuiteOperatePolicy;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getFlowSuiteOperatePolicyEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::FlowSuiteOperatePolicy,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::FlowSuiteOperatePolicy,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getFlowSuiteOperatePolicyEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::FlowSuiteOperatePolicy,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::FlowSuiteOperatePolicy,std::pair<std::string,std::string>>::find(v6, (const std::map<data::FlowSuiteOperatePolicy,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::FlowSuiteOperatePolicy,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::FlowSuiteOperatePolicy,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 1517: range 000000000CCA7A90-000000000CCA7BF1
bool __cdecl data::isValidFlowSuiteOperatePolicyName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::FlowSuiteOperatePolicy> *v5; // rcx
  const std::unordered_map<std::string,data::FlowSuiteOperatePolicy> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidFlowSuiteOperatePolicyName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getFlowSuiteOperatePolicyNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::FlowSuiteOperatePolicy>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::FlowSuiteOperatePolicy>::end(v5);
  v6 = data::getFlowSuiteOperatePolicyNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::FlowSuiteOperatePolicy>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::FlowSuiteOperatePolicy>::find(
                                                                                                 v6,
                                                                                                 name);
  result = std::__detail::operator!=<std::pair<std::string const,data::FlowSuiteOperatePolicy>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::FlowSuiteOperatePolicy>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::FlowSuiteOperatePolicy>,true> *)(v2 + 64));
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

// Line 1522: range 000000000CCA7BF2-000000000CCA7FF8
const std::unordered_map<std::string,data::FlowSuiteOperatePolicy> *__cdecl data::getFlowSuiteOperatePolicyNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::FlowSuiteOperatePolicy> *i; // r14
  const std::unordered_map<std::string,data::FlowSuiteOperatePolicy> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getFlowSuiteOperatePolicyNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556927;
  v3[536862723] = 61956;
  v3[536862726] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getFlowSuiteOperatePolicyNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getFlowSuiteOperatePolicyNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string const,data::FlowSuiteOperatePolicy>::pair<char const(&)[22],data::FlowSuiteOperatePolicy,true>(
      (std::pair<const std::string,data::FlowSuiteOperatePolicy> *const)(v1 + 112),
      (const char (*)[22])"FLOW_SUITE_OP_DEFAULT",
      (data::FlowSuiteOperatePolicy *)(v1 + 80));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, "FLOW_SUITE_OP_DEFAULT");
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string const,data::FlowSuiteOperatePolicy>::pair<char const(&)[23],data::FlowSuiteOperatePolicy,true>(
      (std::pair<const std::string,data::FlowSuiteOperatePolicy> *const)(v1 + 152),
      (const char (*)[23])"FLOW_SUITE_OP_COMPLETE",
      (data::FlowSuiteOperatePolicy *)(v1 + 96));
    std::allocator<std::pair<std::string const,data::FlowSuiteOperatePolicy>>::allocator((std::allocator<std::pair<const std::string,data::FlowSuiteOperatePolicy> > *const)(v1 + 64));
    std::unordered_map<std::string,data::FlowSuiteOperatePolicy>::unordered_map(
      &data::getFlowSuiteOperatePolicyNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::FlowSuiteOperatePolicy> >)__PAIR128__(2LL, v1 + 112),
      0LL,
      (const std::unordered_map<std::string,data::FlowSuiteOperatePolicy>::hasher *)(v1 + 32),
      (const std::unordered_map<std::string,data::FlowSuiteOperatePolicy>::key_equal *)(v1 + 48),
      (const std::unordered_map<std::string,data::FlowSuiteOperatePolicy>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getFlowSuiteOperatePolicyNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::FlowSuiteOperatePolicy>::~unordered_map,
      &data::getFlowSuiteOperatePolicyNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::FlowSuiteOperatePolicy>>::~allocator((std::allocator<std::pair<const std::string,data::FlowSuiteOperatePolicy> > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::FlowSuiteOperatePolicy> *)(v1 + 192);
          i != (std::pair<const std::string,data::FlowSuiteOperatePolicy> *)(v1 + 112);
          std::pair<std::string const,data::FlowSuiteOperatePolicy>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getFlowSuiteOperatePolicyNameMap[abi:cxx11](void)::m;
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

// Line 1532: range 000000000CCA7FF9-000000000CCA85B6
const std::map<data::FlowSuiteOperatePolicy,std::pair<std::string,std::string >> *__cdecl data::getFlowSuiteOperatePolicyEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::FlowSuiteOperatePolicy,std::pair<std::string,std::string > > *i; // r14
  unsigned __int64 v5; // rax
  _DWORD *v6; // rax
  const std::map<data::FlowSuiteOperatePolicy,std::pair<std::string,std::string >> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getFlowSuiteOperatePolicyEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getFlowSuiteOperatePolicyEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getFlowSuiteOperatePolicyEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[22],true>(
      (std::pair<std::string,std::string > *const)(v1 + 112),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[22])"FLOW_SUITE_OP_DEFAULT");
    std::pair<data::FlowSuiteOperatePolicy const,std::pair<std::string,std::string>>::pair<data::FlowSuiteOperatePolicy,true>(
      (std::pair<const data::FlowSuiteOperatePolicy,std::pair<std::string,std::string > > *const)(v1 + 304),
      (data::FlowSuiteOperatePolicy *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[23],true>(
      (std::pair<std::string,std::string > *const)(v1 + 208),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[23])"FLOW_SUITE_OP_COMPLETE");
    std::pair<data::FlowSuiteOperatePolicy const,std::pair<std::string,std::string>>::pair<data::FlowSuiteOperatePolicy,true>(
      (std::pair<const data::FlowSuiteOperatePolicy,std::pair<std::string,std::string > > *const)(v1 + 376),
      (data::FlowSuiteOperatePolicy *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 208));
    std::allocator<std::pair<data::FlowSuiteOperatePolicy const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::FlowSuiteOperatePolicy,std::pair<std::string,std::string > > > *const)(v1 + 64));
    std::map<data::FlowSuiteOperatePolicy,std::pair<std::string,std::string>>::map(
      &data::getFlowSuiteOperatePolicyEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::FlowSuiteOperatePolicy,std::pair<std::string,std::string > > >)__PAIR128__(2LL, v1 + 304),
      (const std::less<data::FlowSuiteOperatePolicy> *)(v1 + 48),
      (const std::map<data::FlowSuiteOperatePolicy,std::pair<std::string,std::string >>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getFlowSuiteOperatePolicyEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::FlowSuiteOperatePolicy,std::pair<std::string,std::string>>::~map,
      &data::getFlowSuiteOperatePolicyEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::FlowSuiteOperatePolicy const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::FlowSuiteOperatePolicy,std::pair<std::string,std::string > > > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::FlowSuiteOperatePolicy,std::pair<std::string,std::string > > *)(v1 + 448);
          i != (std::pair<const data::FlowSuiteOperatePolicy,std::pair<std::string,std::string > > *)(v1 + 304);
          std::pair<data::FlowSuiteOperatePolicy const,std::pair<std::string,std::string>>::~pair(i) )
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
  result = &data::getFlowSuiteOperatePolicyEnumMap[abi:cxx11](void)::m;
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

// Line 1542: range 000000000CCA85B7-000000000CCA892A
const char *__fastcall data::enumValToStr(data::GalleryProgressScoreUIType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::GalleryProgressScoreUIType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::GalleryProgressScoreUIType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 6 e:1541 64 8 9 iter:1544 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getGalleryProgressScoreUITypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::GalleryProgressScoreUIType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::GalleryProgressScoreUIType,std::pair<std::string,std::string>>::find(map, (const std::map<data::GalleryProgressScoreUIType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::GalleryProgressScoreUIType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::GalleryProgressScoreUIType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::GalleryProgressScoreUIType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::GalleryProgressScoreUIType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
      "enumValToStr",
      1547);
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
    result = "INVALID_GalleryProgressScoreUIType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::GalleryProgressScoreUIType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::GalleryProgressScoreUIType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 1554: range 000000000CCA892B-000000000CCA8EE3
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::GalleryProgressScoreUIType>,false,true>::pointer v10; // rax
  data::GalleryProgressScoreUIType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::GalleryProgressScoreUIType> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 7 it:1563 96 8 9 <unknown> 128 8 6 s:1553 160 32 9 <unknown> 224 32 9 <u"
                        "nknown> 288 32 9 <unknown>";
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
    m = data::getGalleryProgressScoreUITypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::GalleryProgressScoreUIType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::GalleryProgressScoreUIType>::find(m, (const std::unordered_map<std::string,data::GalleryProgressScoreUIType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::GalleryProgressScoreUIType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::GalleryProgressScoreUIType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::GalleryProgressScoreUIType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GalleryProgressScoreUIType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GalleryProgressScoreUIType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
        "enumNameToVal",
        1566);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::GalleryProgressScoreUIType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::GalleryProgressScoreUIType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
      "enumNameToVal",
      1557);
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

// Line 1575: range 000000000CCA8EE4-000000000CCA9539
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  const char *v6; // rsi
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::GalleryProgressScoreUIType>,false,true>::pointer v10; // rax
  data::GalleryProgressScoreUIType second; // ecx
  char v12; // dl
  char v14[384]; // [rsp+10h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 7 it:1586 96 8 9 <unknown> 128 8 6 s:1574 160 32 9 <unknown> 224 32 9 <u"
                        "nknown> 288 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::GalleryProgressScoreUIType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::GalleryProgressScoreUIType &)::m) )
    {
      data::enumStrToVal(char const*,data::GalleryProgressScoreUIType &)::m._M_h._M_buckets = 0LL;
      data::enumStrToVal(char const*,data::GalleryProgressScoreUIType &)::m._M_h._M_bucket_count = 0LL;
      data::enumStrToVal(char const*,data::GalleryProgressScoreUIType &)::m._M_h._M_before_begin._M_nxt = 0LL;
      data::enumStrToVal(char const*,data::GalleryProgressScoreUIType &)::m._M_h._M_element_count = 0LL;
      *(_QWORD *)&data::enumStrToVal(char const*,data::GalleryProgressScoreUIType &)::m._M_h._M_rehash_policy._M_max_load_factor = 0LL;
      data::enumStrToVal(char const*,data::GalleryProgressScoreUIType &)::m._M_h._M_rehash_policy._M_next_resize = 0LL;
      data::enumStrToVal(char const*,data::GalleryProgressScoreUIType &)::m._M_h._M_single_bucket = 0LL;
      std::unordered_map<std::string,data::GalleryProgressScoreUIType>::unordered_map(&data::enumStrToVal(char const*,data::GalleryProgressScoreUIType &)::m);
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::GalleryProgressScoreUIType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::GalleryProgressScoreUIType>::~unordered_map,
        &data::enumStrToVal(char const*,data::GalleryProgressScoreUIType &)::m,
        &_dso_handle);
    }
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::GalleryProgressScoreUIType>::iterator *)(v2 + 64) = std::unordered_map<std::string,data::GalleryProgressScoreUIType>::find(
                                                                                                 &data::enumStrToVal(char const*,data::GalleryProgressScoreUIType &)::m,
                                                                                                 (const std::unordered_map<std::string,data::GalleryProgressScoreUIType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::GalleryProgressScoreUIType>::iterator *)(v2 + 96) = std::unordered_map<std::string,data::GalleryProgressScoreUIType>::end(&data::enumStrToVal(char const*,data::GalleryProgressScoreUIType &)::m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::GalleryProgressScoreUIType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GalleryProgressScoreUIType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GalleryProgressScoreUIType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
        "enumStrToVal",
        1589);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_iterator<std::pair<std::string const,data::GalleryProgressScoreUIType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::GalleryProgressScoreUIType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
      "enumStrToVal",
      1578);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[14])"s is nullptr!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    result = 0xFFFFFFFFLL;
  }
  if ( v14 == (char *)v2 )
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

// Line 1598: range 000000000CCA953A-000000000CCA9550
const char *__cdecl data::getDescription(data::GalleryProgressScoreUIType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 1603: range 000000000CCA9551-000000000CCA9706
bool __cdecl data::isValidGalleryProgressScoreUIType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::GalleryProgressScoreUIType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::GalleryProgressScoreUIType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 6 e:1604 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidGalleryProgressScoreUIType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getGalleryProgressScoreUITypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::GalleryProgressScoreUIType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::GalleryProgressScoreUIType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getGalleryProgressScoreUITypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::GalleryProgressScoreUIType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::GalleryProgressScoreUIType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::GalleryProgressScoreUIType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::GalleryProgressScoreUIType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::GalleryProgressScoreUIType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 1609: range 000000000CCA9707-000000000CCA9868
bool __cdecl data::isValidGalleryProgressScoreUITypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::GalleryProgressScoreUIType> *v5; // rcx
  const std::unordered_map<std::string,data::GalleryProgressScoreUIType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidGalleryProgressScoreUITypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getGalleryProgressScoreUITypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::GalleryProgressScoreUIType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::GalleryProgressScoreUIType>::end(v5);
  v6 = data::getGalleryProgressScoreUITypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::GalleryProgressScoreUIType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::GalleryProgressScoreUIType>::find(
                                                                                                     v6,
                                                                                                     name);
  result = std::__detail::operator!=<std::pair<std::string const,data::GalleryProgressScoreUIType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GalleryProgressScoreUIType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GalleryProgressScoreUIType>,true> *)(v2 + 64));
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

// Line 1614: range 000000000CCA9869-000000000CCA9F12
const std::unordered_map<std::string,data::GalleryProgressScoreUIType> *__cdecl data::getGalleryProgressScoreUITypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::GalleryProgressScoreUIType> *i; // r14
  const std::unordered_map<std::string,data::GalleryProgressScoreUIType> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getGalleryProgressScoreUITypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556927;
  v3[536862723] = -234556924;
  v3[536862724] = -234556924;
  v3[536862725] = 61956;
  v3[536862733] = -202116109;
  v3[536862734] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getGalleryProgressScoreUITypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getGalleryProgressScoreUITypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string const,data::GalleryProgressScoreUIType>::pair<char const(&)[36],data::GalleryProgressScoreUIType,true>(
      (std::pair<const std::string,data::GalleryProgressScoreUIType> *const)(v1 + 176),
      (const char (*)[36])"GALLERY_PROGRESS_SCORE_UI_TYPE_NONE",
      (data::GalleryProgressScoreUIType *)(v1 + 80));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, "GALLERY_PROGRESS_SCORE_UI_TYPE_NONE");
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string const,data::GalleryProgressScoreUIType>::pair<char const(&)[46],data::GalleryProgressScoreUIType,true>(
      (std::pair<const std::string,data::GalleryProgressScoreUIType> *const)(v1 + 216),
      (const char (*)[46])"GALLERY_PROGRESS_SCORE_UI_TYPE_BUOYANT_COMBAT",
      (data::GalleryProgressScoreUIType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "GALLERY_PROGRESS_SCORE_UI_TYPE_BUOYANT_COMBAT");
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string const,data::GalleryProgressScoreUIType>::pair<char const(&)[42],data::GalleryProgressScoreUIType,true>(
      (std::pair<const std::string,data::GalleryProgressScoreUIType> *const)(v1 + 256),
      (const char (*)[42])"GALLERY_PROGRESS_SCORE_UI_TYPE_SUMO_STAGE",
      (data::GalleryProgressScoreUIType *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, "GALLERY_PROGRESS_SCORE_UI_TYPE_SUMO_STAGE");
    *(_DWORD *)(v1 + 128) = 3;
    std::pair<std::string const,data::GalleryProgressScoreUIType>::pair<char const(&)[35],data::GalleryProgressScoreUIType,true>(
      (std::pair<const std::string,data::GalleryProgressScoreUIType> *const)(v1 + 296),
      (const char (*)[35])"GALLERY_PROGRESS_SCORE_UI_TYPE_DIG",
      (data::GalleryProgressScoreUIType *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, "GALLERY_PROGRESS_SCORE_UI_TYPE_DIG");
    *(_DWORD *)(v1 + 144) = 4;
    std::pair<std::string const,data::GalleryProgressScoreUIType>::pair<char const(&)[44],data::GalleryProgressScoreUIType,true>(
      (std::pair<const std::string,data::GalleryProgressScoreUIType> *const)(v1 + 336),
      (const char (*)[44])"GALLERY_PROGRESS_SCORE_UI_TYPE_CRYSTAL_LINK",
      (data::GalleryProgressScoreUIType *)(v1 + 144));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, "GALLERY_PROGRESS_SCORE_UI_TYPE_CRYSTAL_LINK");
    *(_DWORD *)(v1 + 160) = 5;
    std::pair<std::string const,data::GalleryProgressScoreUIType>::pair<char const(&)[40],data::GalleryProgressScoreUIType,true>(
      (std::pair<const std::string,data::GalleryProgressScoreUIType> *const)(v1 + 376),
      (const char (*)[40])"GALLERY_PROGRESS_SCORE_UI_TYPE_TREASURE",
      (data::GalleryProgressScoreUIType *)(v1 + 160));
    std::allocator<std::pair<std::string const,data::GalleryProgressScoreUIType>>::allocator((std::allocator<std::pair<const std::string,data::GalleryProgressScoreUIType> > *const)(v1 + 64));
    std::unordered_map<std::string,data::GalleryProgressScoreUIType>::unordered_map(
      &data::getGalleryProgressScoreUITypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::GalleryProgressScoreUIType> >)__PAIR128__(6LL, v1 + 176),
      0LL,
      (const std::unordered_map<std::string,data::GalleryProgressScoreUIType>::hasher *)(v1 + 32),
      (const std::unordered_map<std::string,data::GalleryProgressScoreUIType>::key_equal *)(v1 + 48),
      (const std::unordered_map<std::string,data::GalleryProgressScoreUIType>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getGalleryProgressScoreUITypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::GalleryProgressScoreUIType>::~unordered_map,
      &data::getGalleryProgressScoreUITypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::GalleryProgressScoreUIType>>::~allocator((std::allocator<std::pair<const std::string,data::GalleryProgressScoreUIType> > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::GalleryProgressScoreUIType> *)(v1 + 416);
          i != (std::pair<const std::string,data::GalleryProgressScoreUIType> *)(v1 + 176);
          std::pair<std::string const,data::GalleryProgressScoreUIType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getGalleryProgressScoreUITypeNameMap[abi:cxx11](void)::m;
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

// Line 1628: range 000000000CCA9F13-000000000CCAA903
const std::map<data::GalleryProgressScoreUIType,std::pair<std::string,std::string >> *__cdecl data::getGalleryProgressScoreUITypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::GalleryProgressScoreUIType,std::pair<std::string,std::string > > *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getGalleryProgressScoreUITypeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getGalleryProgressScoreUITypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getGalleryProgressScoreUITypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[36],true>(
      (std::pair<std::string,std::string > *const)(v1 + 176),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[36])"GALLERY_PROGRESS_SCORE_UI_TYPE_NONE");
    std::pair<data::GalleryProgressScoreUIType const,std::pair<std::string,std::string>>::pair<data::GalleryProgressScoreUIType,true>(
      (std::pair<const data::GalleryProgressScoreUIType,std::pair<std::string,std::string > > *const)(v1 + 752),
      (data::GalleryProgressScoreUIType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 176));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[46],true>(
      (std::pair<std::string,std::string > *const)(v1 + 272),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[46])"GALLERY_PROGRESS_SCORE_UI_TYPE_BUOYANT_COMBAT");
    std::pair<data::GalleryProgressScoreUIType const,std::pair<std::string,std::string>>::pair<data::GalleryProgressScoreUIType,true>(
      (std::pair<const data::GalleryProgressScoreUIType,std::pair<std::string,std::string > > *const)(v1 + 824),
      (data::GalleryProgressScoreUIType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 272));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[42],true>(
      (std::pair<std::string,std::string > *const)(v1 + 368),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[42])"GALLERY_PROGRESS_SCORE_UI_TYPE_SUMO_STAGE");
    std::pair<data::GalleryProgressScoreUIType const,std::pair<std::string,std::string>>::pair<data::GalleryProgressScoreUIType,true>(
      (std::pair<const data::GalleryProgressScoreUIType,std::pair<std::string,std::string > > *const)(v1 + 896),
      (data::GalleryProgressScoreUIType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 368));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, v1 + 112);
    *(_DWORD *)(v1 + 128) = 3;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[35],true>(
      (std::pair<std::string,std::string > *const)(v1 + 464),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[35])"GALLERY_PROGRESS_SCORE_UI_TYPE_DIG");
    std::pair<data::GalleryProgressScoreUIType const,std::pair<std::string,std::string>>::pair<data::GalleryProgressScoreUIType,true>(
      (std::pair<const data::GalleryProgressScoreUIType,std::pair<std::string,std::string > > *const)(v1 + 968),
      (data::GalleryProgressScoreUIType *)(v1 + 128),
      (const std::pair<std::string,std::string > *)(v1 + 464));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, v1 + 128);
    *(_DWORD *)(v1 + 144) = 4;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[44],true>(
      (std::pair<std::string,std::string > *const)(v1 + 560),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[44])"GALLERY_PROGRESS_SCORE_UI_TYPE_CRYSTAL_LINK");
    std::pair<data::GalleryProgressScoreUIType const,std::pair<std::string,std::string>>::pair<data::GalleryProgressScoreUIType,true>(
      (std::pair<const data::GalleryProgressScoreUIType,std::pair<std::string,std::string > > *const)(v1 + 1040),
      (data::GalleryProgressScoreUIType *)(v1 + 144),
      (const std::pair<std::string,std::string > *)(v1 + 560));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, v1 + 144);
    *(_DWORD *)(v1 + 160) = 5;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[40],true>(
      (std::pair<std::string,std::string > *const)(v1 + 656),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[40])"GALLERY_PROGRESS_SCORE_UI_TYPE_TREASURE");
    std::pair<data::GalleryProgressScoreUIType const,std::pair<std::string,std::string>>::pair<data::GalleryProgressScoreUIType,true>(
      (std::pair<const data::GalleryProgressScoreUIType,std::pair<std::string,std::string > > *const)(v1 + 1112),
      (data::GalleryProgressScoreUIType *)(v1 + 160),
      (const std::pair<std::string,std::string > *)(v1 + 656));
    std::allocator<std::pair<data::GalleryProgressScoreUIType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::GalleryProgressScoreUIType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    std::map<data::GalleryProgressScoreUIType,std::pair<std::string,std::string>>::map(
      &data::getGalleryProgressScoreUITypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::GalleryProgressScoreUIType,std::pair<std::string,std::string > > >)__PAIR128__(6LL, v1 + 752),
      (const std::less<data::GalleryProgressScoreUIType> *)(v1 + 48),
      (const std::map<data::GalleryProgressScoreUIType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getGalleryProgressScoreUITypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::GalleryProgressScoreUIType,std::pair<std::string,std::string>>::~map,
      &data::getGalleryProgressScoreUITypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::GalleryProgressScoreUIType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::GalleryProgressScoreUIType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::GalleryProgressScoreUIType,std::pair<std::string,std::string > > *)(v1 + 1184);
          i != (std::pair<const data::GalleryProgressScoreUIType,std::pair<std::string,std::string > > *)(v1 + 752);
          std::pair<data::GalleryProgressScoreUIType const,std::pair<std::string,std::string>>::~pair(i) )
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
  return &data::getGalleryProgressScoreUITypeEnumMap[abi:cxx11](void)::m;
};

// Line 1642: range 000000000CCAA904-000000000CCAAC77
const char *__fastcall data::enumValToStr(data::GalleryProgressScoreType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::GalleryProgressScoreType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::GalleryProgressScoreType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 6 e:1641 64 8 9 iter:1644 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getGalleryProgressScoreTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::GalleryProgressScoreType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::GalleryProgressScoreType,std::pair<std::string,std::string>>::find(map, (const std::map<data::GalleryProgressScoreType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::GalleryProgressScoreType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::GalleryProgressScoreType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::GalleryProgressScoreType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::GalleryProgressScoreType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
      "enumValToStr",
      1647);
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
    result = "INVALID_GalleryProgressScoreType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::GalleryProgressScoreType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::GalleryProgressScoreType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 1654: range 000000000CCAAC78-000000000CCAB230
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::GalleryProgressScoreType>,false,true>::pointer v10; // rax
  data::GalleryProgressScoreType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::GalleryProgressScoreType> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 7 it:1663 96 8 9 <unknown> 128 8 6 s:1653 160 32 9 <unknown> 224 32 9 <u"
                        "nknown> 288 32 9 <unknown>";
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
    m = data::getGalleryProgressScoreTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::GalleryProgressScoreType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::GalleryProgressScoreType>::find(
                                                                                                     m,
                                                                                                     (const std::unordered_map<std::string,data::GalleryProgressScoreType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::GalleryProgressScoreType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::GalleryProgressScoreType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::GalleryProgressScoreType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GalleryProgressScoreType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GalleryProgressScoreType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
        "enumNameToVal",
        1666);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::GalleryProgressScoreType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::GalleryProgressScoreType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
      "enumNameToVal",
      1657);
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

// Line 1675: range 000000000CCAB231-000000000CCAB886
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  const char *v6; // rsi
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::GalleryProgressScoreType>,false,true>::pointer v10; // rax
  data::GalleryProgressScoreType second; // ecx
  char v12; // dl
  char v14[384]; // [rsp+10h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 7 it:1686 96 8 9 <unknown> 128 8 6 s:1674 160 32 9 <unknown> 224 32 9 <u"
                        "nknown> 288 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::GalleryProgressScoreType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::GalleryProgressScoreType &)::m) )
    {
      data::enumStrToVal(char const*,data::GalleryProgressScoreType &)::m._M_h._M_buckets = 0LL;
      data::enumStrToVal(char const*,data::GalleryProgressScoreType &)::m._M_h._M_bucket_count = 0LL;
      data::enumStrToVal(char const*,data::GalleryProgressScoreType &)::m._M_h._M_before_begin._M_nxt = 0LL;
      data::enumStrToVal(char const*,data::GalleryProgressScoreType &)::m._M_h._M_element_count = 0LL;
      *(_QWORD *)&data::enumStrToVal(char const*,data::GalleryProgressScoreType &)::m._M_h._M_rehash_policy._M_max_load_factor = 0LL;
      data::enumStrToVal(char const*,data::GalleryProgressScoreType &)::m._M_h._M_rehash_policy._M_next_resize = 0LL;
      data::enumStrToVal(char const*,data::GalleryProgressScoreType &)::m._M_h._M_single_bucket = 0LL;
      std::unordered_map<std::string,data::GalleryProgressScoreType>::unordered_map(&data::enumStrToVal(char const*,data::GalleryProgressScoreType &)::m);
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::GalleryProgressScoreType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::GalleryProgressScoreType>::~unordered_map,
        &data::enumStrToVal(char const*,data::GalleryProgressScoreType &)::m,
        &_dso_handle);
    }
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::GalleryProgressScoreType>::iterator *)(v2 + 64) = std::unordered_map<std::string,data::GalleryProgressScoreType>::find(
                                                                                               &data::enumStrToVal(char const*,data::GalleryProgressScoreType &)::m,
                                                                                               (const std::unordered_map<std::string,data::GalleryProgressScoreType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::GalleryProgressScoreType>::iterator *)(v2 + 96) = std::unordered_map<std::string,data::GalleryProgressScoreType>::end(&data::enumStrToVal(char const*,data::GalleryProgressScoreType &)::m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::GalleryProgressScoreType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GalleryProgressScoreType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GalleryProgressScoreType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
        "enumStrToVal",
        1689);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_iterator<std::pair<std::string const,data::GalleryProgressScoreType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::GalleryProgressScoreType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/ComponentDefines/CommonScriptConfig.gen.cpp",
      "enumStrToVal",
      1678);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[14])"s is nullptr!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    result = 0xFFFFFFFFLL;
  }
  if ( v14 == (char *)v2 )
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

// Line 1698: range 000000000CCAB887-000000000CCAB89D
const char *__cdecl data::getDescription(data::GalleryProgressScoreType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 1703: range 000000000CCAB89E-000000000CCABA53
bool __cdecl data::isValidGalleryProgressScoreType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::GalleryProgressScoreType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::GalleryProgressScoreType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 6 e:1704 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidGalleryProgressScoreType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getGalleryProgressScoreTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::GalleryProgressScoreType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::GalleryProgressScoreType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getGalleryProgressScoreTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::GalleryProgressScoreType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::GalleryProgressScoreType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::GalleryProgressScoreType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::GalleryProgressScoreType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::GalleryProgressScoreType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 1709: range 000000000CCABA54-000000000CCABBB5
bool __cdecl data::isValidGalleryProgressScoreTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::GalleryProgressScoreType> *v5; // rcx
  const std::unordered_map<std::string,data::GalleryProgressScoreType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidGalleryProgressScoreTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getGalleryProgressScoreTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::GalleryProgressScoreType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::GalleryProgressScoreType>::end(v5);
  v6 = data::getGalleryProgressScoreTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::GalleryProgressScoreType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::GalleryProgressScoreType>::find(
                                                                                                   v6,
                                                                                                   name);
  result = std::__detail::operator!=<std::pair<std::string const,data::GalleryProgressScoreType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GalleryProgressScoreType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GalleryProgressScoreType>,true> *)(v2 + 64));
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

// Line 1714: range 000000000CCABBB6-000000000CCABFBC
const std::unordered_map<std::string,data::GalleryProgressScoreType> *__cdecl data::getGalleryProgressScoreTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::GalleryProgressScoreType> *i; // r14
  const std::unordered_map<std::string,data::GalleryProgressScoreType> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getGalleryProgressScoreTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556927;
  v3[536862723] = 61956;
  v3[536862726] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getGalleryProgressScoreTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getGalleryProgressScoreTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string const,data::GalleryProgressScoreType>::pair<char const(&)[28],data::GalleryProgressScoreType,true>(
      (std::pair<const std::string,data::GalleryProgressScoreType> *const)(v1 + 112),
      (const char (*)[28])"GALLERY_PROGRESS_SCORE_NONE",
      (data::GalleryProgressScoreType *)(v1 + 80));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, "GALLERY_PROGRESS_SCORE_NONE");
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string const,data::GalleryProgressScoreType>::pair<char const(&)[34],data::GalleryProgressScoreType,true>(
      (std::pair<const std::string,data::GalleryProgressScoreType> *const)(v1 + 152),
      (const char (*)[34])"GALLERY_PROGRESS_SCORE_NO_DEGRADE",
      (data::GalleryProgressScoreType *)(v1 + 96));
    std::allocator<std::pair<std::string const,data::GalleryProgressScoreType>>::allocator((std::allocator<std::pair<const std::string,data::GalleryProgressScoreType> > *const)(v1 + 64));
    std::unordered_map<std::string,data::GalleryProgressScoreType>::unordered_map(
      &data::getGalleryProgressScoreTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::GalleryProgressScoreType> >)__PAIR128__(2LL, v1 + 112),
      0LL,
      (const std::unordered_map<std::string,data::GalleryProgressScoreType>::hasher *)(v1 + 32),
      (const std::unordered_map<std::string,data::GalleryProgressScoreType>::key_equal *)(v1 + 48),
      (const std::unordered_map<std::string,data::GalleryProgressScoreType>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getGalleryProgressScoreTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::GalleryProgressScoreType>::~unordered_map,
      &data::getGalleryProgressScoreTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::GalleryProgressScoreType>>::~allocator((std::allocator<std::pair<const std::string,data::GalleryProgressScoreType> > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::GalleryProgressScoreType> *)(v1 + 192);
          i != (std::pair<const std::string,data::GalleryProgressScoreType> *)(v1 + 112);
          std::pair<std::string const,data::GalleryProgressScoreType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getGalleryProgressScoreTypeNameMap[abi:cxx11](void)::m;
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

// Line 1724: range 000000000CCABFBD-000000000CCAC57A
const std::map<data::GalleryProgressScoreType,std::pair<std::string,std::string >> *__cdecl data::getGalleryProgressScoreTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::GalleryProgressScoreType,std::pair<std::string,std::string > > *i; // r14
  unsigned __int64 v5; // rax
  _DWORD *v6; // rax
  const std::map<data::GalleryProgressScoreType,std::pair<std::string,std::string >> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getGalleryProgressScoreTypeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getGalleryProgressScoreTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getGalleryProgressScoreTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[28],true>(
      (std::pair<std::string,std::string > *const)(v1 + 112),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[28])"GALLERY_PROGRESS_SCORE_NONE");
    std::pair<data::GalleryProgressScoreType const,std::pair<std::string,std::string>>::pair<data::GalleryProgressScoreType,true>(
      (std::pair<const data::GalleryProgressScoreType,std::pair<std::string,std::string > > *const)(v1 + 304),
      (data::GalleryProgressScoreType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[34],true>(
      (std::pair<std::string,std::string > *const)(v1 + 208),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[34])"GALLERY_PROGRESS_SCORE_NO_DEGRADE");
    std::pair<data::GalleryProgressScoreType const,std::pair<std::string,std::string>>::pair<data::GalleryProgressScoreType,true>(
      (std::pair<const data::GalleryProgressScoreType,std::pair<std::string,std::string > > *const)(v1 + 376),
      (data::GalleryProgressScoreType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 208));
    std::allocator<std::pair<data::GalleryProgressScoreType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::GalleryProgressScoreType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    std::map<data::GalleryProgressScoreType,std::pair<std::string,std::string>>::map(
      &data::getGalleryProgressScoreTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::GalleryProgressScoreType,std::pair<std::string,std::string > > >)__PAIR128__(2LL, v1 + 304),
      (const std::less<data::GalleryProgressScoreType> *)(v1 + 48),
      (const std::map<data::GalleryProgressScoreType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getGalleryProgressScoreTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::GalleryProgressScoreType,std::pair<std::string,std::string>>::~map,
      &data::getGalleryProgressScoreTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::GalleryProgressScoreType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::GalleryProgressScoreType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::GalleryProgressScoreType,std::pair<std::string,std::string > > *)(v1 + 448);
          i != (std::pair<const data::GalleryProgressScoreType,std::pair<std::string,std::string > > *)(v1 + 304);
          std::pair<data::GalleryProgressScoreType const,std::pair<std::string,std::string>>::~pair(i) )
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
  result = &data::getGalleryProgressScoreTypeEnumMap[abi:cxx11](void)::m;
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

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/WeaponExcelConfig.gen.cpp

// Line 12: range 000000000CC31F16-000000000CC32289
const char *__fastcall data::enumValToStr(data::WeaponMaterialType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::WeaponMaterialType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::WeaponMaterialType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
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
  map = data::getWeaponMaterialTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::WeaponMaterialType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::WeaponMaterialType,std::pair<std::string,std::string>>::find(map, (const std::map<data::WeaponMaterialType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::WeaponMaterialType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::WeaponMaterialType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::WeaponMaterialType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::WeaponMaterialType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
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
    result = "INVALID_WeaponMaterialType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::WeaponMaterialType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::WeaponMaterialType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 24: range 000000000CC3228A-000000000CC32842
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::WeaponMaterialType>,false,true>::pointer v10; // rax
  data::WeaponMaterialType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::WeaponMaterialType> *m; // [rsp+18h] [rbp-188h]
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
    m = data::getWeaponMaterialTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::WeaponMaterialType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::WeaponMaterialType>::find(
                                                                                               m,
                                                                                               (const std::unordered_map<std::string,data::WeaponMaterialType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::WeaponMaterialType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::WeaponMaterialType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::WeaponMaterialType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::WeaponMaterialType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::WeaponMaterialType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
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
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::WeaponMaterialType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::WeaponMaterialType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
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

// Line 45: range 000000000CC32843-000000000CC32E98
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
  std::__detail::_Node_iterator<std::pair<const std::string,data::WeaponMaterialType>,false,true>::pointer v10; // rax
  data::WeaponMaterialType second; // ecx
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::WeaponMaterialType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::WeaponMaterialType &)::m) )
    {
      data::enumStrToVal(char const*,data::WeaponMaterialType &)::m._M_h._M_buckets = 0LL;
      data::enumStrToVal(char const*,data::WeaponMaterialType &)::m._M_h._M_bucket_count = 0LL;
      data::enumStrToVal(char const*,data::WeaponMaterialType &)::m._M_h._M_before_begin._M_nxt = 0LL;
      data::enumStrToVal(char const*,data::WeaponMaterialType &)::m._M_h._M_element_count = 0LL;
      *(_QWORD *)&data::enumStrToVal(char const*,data::WeaponMaterialType &)::m._M_h._M_rehash_policy._M_max_load_factor = 0LL;
      data::enumStrToVal(char const*,data::WeaponMaterialType &)::m._M_h._M_rehash_policy._M_next_resize = 0LL;
      data::enumStrToVal(char const*,data::WeaponMaterialType &)::m._M_h._M_single_bucket = 0LL;
      std::unordered_map<std::string,data::WeaponMaterialType>::unordered_map(&data::enumStrToVal(char const*,data::WeaponMaterialType &)::m);
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::WeaponMaterialType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::WeaponMaterialType>::~unordered_map,
        &data::enumStrToVal(char const*,data::WeaponMaterialType &)::m,
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
    *(std::unordered_map<std::string,data::WeaponMaterialType>::iterator *)(v2 + 64) = std::unordered_map<std::string,data::WeaponMaterialType>::find(
                                                                                         &data::enumStrToVal(char const*,data::WeaponMaterialType &)::m,
                                                                                         (const std::unordered_map<std::string,data::WeaponMaterialType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::WeaponMaterialType>::iterator *)(v2 + 96) = std::unordered_map<std::string,data::WeaponMaterialType>::end(&data::enumStrToVal(char const*,data::WeaponMaterialType &)::m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::WeaponMaterialType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::WeaponMaterialType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::WeaponMaterialType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
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
      v10 = std::__detail::_Node_iterator<std::pair<std::string const,data::WeaponMaterialType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::WeaponMaterialType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
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

// Line 68: range 000000000CC32E99-000000000CC32EAF
const char *__cdecl data::getDescription(data::WeaponMaterialType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 73: range 000000000CC32EB0-000000000CC33065
bool __cdecl data::isValidWeaponMaterialType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::WeaponMaterialType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::WeaponMaterialType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidWeaponMaterialType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getWeaponMaterialTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::WeaponMaterialType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::WeaponMaterialType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getWeaponMaterialTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::WeaponMaterialType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::WeaponMaterialType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::WeaponMaterialType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::WeaponMaterialType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::WeaponMaterialType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 79: range 000000000CC33066-000000000CC331C7
bool __cdecl data::isValidWeaponMaterialTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::WeaponMaterialType> *v5; // rcx
  const std::unordered_map<std::string,data::WeaponMaterialType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidWeaponMaterialTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getWeaponMaterialTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::WeaponMaterialType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::WeaponMaterialType>::end(v5);
  v6 = data::getWeaponMaterialTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::WeaponMaterialType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::WeaponMaterialType>::find(
                                                                                             v6,
                                                                                             name);
  result = std::__detail::operator!=<std::pair<std::string const,data::WeaponMaterialType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::WeaponMaterialType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::WeaponMaterialType>,true> *)(v2 + 64));
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

// Line 84: range 000000000CC331C8-000000000CC3352A
const std::unordered_map<std::string,data::WeaponMaterialType> *__cdecl data::getWeaponMaterialTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::WeaponMaterialType> *i; // r14
  const std::unordered_map<std::string,data::WeaponMaterialType> *result; // rax
  char v6[240]; // [rsp+10h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 4 9 <unknown> 112 40 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::getWeaponMaterialTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -234753535;
  v3[536862723] = 61956;
  v3[536862724] = -218103808;
  v3[536862725] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getWeaponMaterialTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getWeaponMaterialTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v0);
    *(_DWORD *)(v1 + 96) = 0;
    std::pair<std::string const,data::WeaponMaterialType>::pair<char const(&)[21],data::WeaponMaterialType,true>(
      (std::pair<const std::string,data::WeaponMaterialType> *const)(v1 + 112),
      (const char (*)[21])"WEAPON_MATERIAL_NONE",
      (data::WeaponMaterialType *)(v1 + 96));
    std::allocator<std::pair<std::string const,data::WeaponMaterialType>>::allocator((std::allocator<std::pair<const std::string,data::WeaponMaterialType> > *const)(v1 + 80));
    std::unordered_map<std::string,data::WeaponMaterialType>::unordered_map(
      &data::getWeaponMaterialTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::WeaponMaterialType> >)__PAIR128__(1LL, v1 + 112),
      0LL,
      (const std::unordered_map<std::string,data::WeaponMaterialType>::hasher *)(v1 + 48),
      (const std::unordered_map<std::string,data::WeaponMaterialType>::key_equal *)(v1 + 64),
      (const std::unordered_map<std::string,data::WeaponMaterialType>::allocator_type *)(v1 + 80));
    __cxa_guard_release(&`guard variable for'data::getWeaponMaterialTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::WeaponMaterialType>::~unordered_map,
      &data::getWeaponMaterialTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::WeaponMaterialType>>::~allocator((std::allocator<std::pair<const std::string,data::WeaponMaterialType> > *const)(v1 + 80));
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::WeaponMaterialType> *)(v1 + 152);
          i != (std::pair<const std::string,data::WeaponMaterialType> *)(v1 + 112);
          std::pair<std::string const,data::WeaponMaterialType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getWeaponMaterialTypeNameMap[abi:cxx11](void)::m;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 93: range 000000000CC3352B-000000000CC3393E
const std::map<data::WeaponMaterialType,std::pair<std::string,std::string >> *__cdecl data::getWeaponMaterialTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::WeaponMaterialType,std::pair<std::string,std::string > > *i; // r14
  unsigned __int64 v5; // rax
  const std::map<data::WeaponMaterialType,std::pair<std::string,std::string >> *result; // rax
  char v7[336]; // [rsp+10h] [rbp-150h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(288LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 32 1 9 <unknown> 48 1 9 <unknown> 64 4 9 <unknown> 80 64 9 <unknown> 176 72 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::getWeaponMaterialTypeEnumMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = 61956;
  v3[536862724] = -219021312;
  v3[536862725] = 62194;
  v3[536862727] = -218103808;
  v3[536862728] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getWeaponMaterialTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getWeaponMaterialTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 64, v0);
    *(_DWORD *)(v1 + 64) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 80),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[21])"WEAPON_MATERIAL_NONE");
    std::pair<data::WeaponMaterialType const,std::pair<std::string,std::string>>::pair<data::WeaponMaterialType,true>(
      (std::pair<const data::WeaponMaterialType,std::pair<std::string,std::string > > *const)(v1 + 176),
      (data::WeaponMaterialType *)(v1 + 64),
      (const std::pair<std::string,std::string > *)(v1 + 80));
    std::allocator<std::pair<data::WeaponMaterialType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::WeaponMaterialType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    std::map<data::WeaponMaterialType,std::pair<std::string,std::string>>::map(
      &data::getWeaponMaterialTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::WeaponMaterialType,std::pair<std::string,std::string > > >)__PAIR128__(1LL, v1 + 176),
      (const std::less<data::WeaponMaterialType> *)(v1 + 32),
      (const std::map<data::WeaponMaterialType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 48));
    __cxa_guard_release(&`guard variable for'data::getWeaponMaterialTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::WeaponMaterialType,std::pair<std::string,std::string>>::~map,
      &data::getWeaponMaterialTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::WeaponMaterialType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::WeaponMaterialType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::WeaponMaterialType,std::pair<std::string,std::string > > *)(v1 + 248);
          i != (std::pair<const data::WeaponMaterialType,std::pair<std::string,std::string > > *)(v1 + 176);
          std::pair<data::WeaponMaterialType const,std::pair<std::string,std::string>>::~pair(i) )
    {
      --i;
    }
    v5 = ((v1 + 176) >> 3) + 2147450880;
    *(_DWORD *)v5 = -117901064;
    *(_DWORD *)(v5 + 4) = -117901064;
    *(_BYTE *)(v5 + 8) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 80));
  }
  result = &data::getWeaponMaterialTypeEnumMap[abi:cxx11](void)::m;
  if ( v7 == (char *)v1 )
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

// Line 102: range 000000000CC3393F-000000000CC33CB2
const char *__fastcall data::enumValToStr(data::WeaponEnhanceRuleType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::WeaponEnhanceRuleType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::WeaponEnhanceRuleType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 5 e:101 64 8 8 iter:104 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getWeaponEnhanceRuleTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::WeaponEnhanceRuleType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::WeaponEnhanceRuleType,std::pair<std::string,std::string>>::find(map, (const std::map<data::WeaponEnhanceRuleType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::WeaponEnhanceRuleType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::WeaponEnhanceRuleType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::WeaponEnhanceRuleType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::WeaponEnhanceRuleType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
      "enumValToStr",
      107);
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
    result = "INVALID_WeaponEnhanceRuleType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::WeaponEnhanceRuleType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::WeaponEnhanceRuleType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 114: range 000000000CC33CB3-000000000CC3426B
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::WeaponEnhanceRuleType>,false,true>::pointer v10; // rax
  data::WeaponEnhanceRuleType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::WeaponEnhanceRuleType> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:123 96 8 9 <unknown> 128 8 5 s:113 160 32 9 <unknown> 224 32 9 <unk"
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
    m = data::getWeaponEnhanceRuleTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::WeaponEnhanceRuleType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::WeaponEnhanceRuleType>::find(
                                                                                                  m,
                                                                                                  (const std::unordered_map<std::string,data::WeaponEnhanceRuleType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::WeaponEnhanceRuleType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::WeaponEnhanceRuleType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::WeaponEnhanceRuleType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::WeaponEnhanceRuleType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::WeaponEnhanceRuleType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
        "enumNameToVal",
        126);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::WeaponEnhanceRuleType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::WeaponEnhanceRuleType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
      "enumNameToVal",
      117);
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

// Line 135: range 000000000CC3426C-000000000CC348C1
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
  std::__detail::_Node_iterator<std::pair<const std::string,data::WeaponEnhanceRuleType>,false,true>::pointer v10; // rax
  data::WeaponEnhanceRuleType second; // ecx
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
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:146 96 8 9 <unknown> 128 8 5 s:134 160 32 9 <unknown> 224 32 9 <unk"
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::WeaponEnhanceRuleType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::WeaponEnhanceRuleType &)::m) )
    {
      data::enumStrToVal(char const*,data::WeaponEnhanceRuleType &)::m._M_h._M_buckets = 0LL;
      data::enumStrToVal(char const*,data::WeaponEnhanceRuleType &)::m._M_h._M_bucket_count = 0LL;
      data::enumStrToVal(char const*,data::WeaponEnhanceRuleType &)::m._M_h._M_before_begin._M_nxt = 0LL;
      data::enumStrToVal(char const*,data::WeaponEnhanceRuleType &)::m._M_h._M_element_count = 0LL;
      *(_QWORD *)&data::enumStrToVal(char const*,data::WeaponEnhanceRuleType &)::m._M_h._M_rehash_policy._M_max_load_factor = 0LL;
      data::enumStrToVal(char const*,data::WeaponEnhanceRuleType &)::m._M_h._M_rehash_policy._M_next_resize = 0LL;
      data::enumStrToVal(char const*,data::WeaponEnhanceRuleType &)::m._M_h._M_single_bucket = 0LL;
      std::unordered_map<std::string,data::WeaponEnhanceRuleType>::unordered_map(&data::enumStrToVal(char const*,data::WeaponEnhanceRuleType &)::m);
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::WeaponEnhanceRuleType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::WeaponEnhanceRuleType>::~unordered_map,
        &data::enumStrToVal(char const*,data::WeaponEnhanceRuleType &)::m,
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
    *(std::unordered_map<std::string,data::WeaponEnhanceRuleType>::iterator *)(v2 + 64) = std::unordered_map<std::string,data::WeaponEnhanceRuleType>::find(
                                                                                            &data::enumStrToVal(char const*,data::WeaponEnhanceRuleType &)::m,
                                                                                            (const std::unordered_map<std::string,data::WeaponEnhanceRuleType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::WeaponEnhanceRuleType>::iterator *)(v2 + 96) = std::unordered_map<std::string,data::WeaponEnhanceRuleType>::end(&data::enumStrToVal(char const*,data::WeaponEnhanceRuleType &)::m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::WeaponEnhanceRuleType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::WeaponEnhanceRuleType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::WeaponEnhanceRuleType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
        "enumStrToVal",
        149);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_iterator<std::pair<std::string const,data::WeaponEnhanceRuleType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::WeaponEnhanceRuleType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
      "enumStrToVal",
      138);
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

// Line 158: range 000000000CC348C2-000000000CC348D8
const char *__cdecl data::getDescription(data::WeaponEnhanceRuleType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 163: range 000000000CC348D9-000000000CC34A8E
bool __cdecl data::isValidWeaponEnhanceRuleType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::WeaponEnhanceRuleType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::WeaponEnhanceRuleType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:164 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidWeaponEnhanceRuleType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getWeaponEnhanceRuleTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::WeaponEnhanceRuleType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::WeaponEnhanceRuleType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getWeaponEnhanceRuleTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::WeaponEnhanceRuleType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::WeaponEnhanceRuleType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::WeaponEnhanceRuleType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::WeaponEnhanceRuleType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::WeaponEnhanceRuleType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 169: range 000000000CC34A8F-000000000CC34BF0
bool __cdecl data::isValidWeaponEnhanceRuleTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::WeaponEnhanceRuleType> *v5; // rcx
  const std::unordered_map<std::string,data::WeaponEnhanceRuleType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidWeaponEnhanceRuleTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getWeaponEnhanceRuleTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::WeaponEnhanceRuleType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::WeaponEnhanceRuleType>::end(v5);
  v6 = data::getWeaponEnhanceRuleTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::WeaponEnhanceRuleType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::WeaponEnhanceRuleType>::find(
                                                                                                v6,
                                                                                                name);
  result = std::__detail::operator!=<std::pair<std::string const,data::WeaponEnhanceRuleType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::WeaponEnhanceRuleType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::WeaponEnhanceRuleType>,true> *)(v2 + 64));
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

// Line 174: range 000000000CC34BF1-000000000CC34FF7
const std::unordered_map<std::string,data::WeaponEnhanceRuleType> *__cdecl data::getWeaponEnhanceRuleTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::WeaponEnhanceRuleType> *i; // r14
  const std::unordered_map<std::string,data::WeaponEnhanceRuleType> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getWeaponEnhanceRuleTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556927;
  v3[536862723] = 61956;
  v3[536862726] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getWeaponEnhanceRuleTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getWeaponEnhanceRuleTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string const,data::WeaponEnhanceRuleType>::pair<char const(&)[27],data::WeaponEnhanceRuleType,true>(
      (std::pair<const std::string,data::WeaponEnhanceRuleType> *const)(v1 + 112),
      (const char (*)[27])"WEAPON_ENHANCE_TYPE_ENABLE",
      (data::WeaponEnhanceRuleType *)(v1 + 80));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, "WEAPON_ENHANCE_TYPE_ENABLE");
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string const,data::WeaponEnhanceRuleType>::pair<char const(&)[29],data::WeaponEnhanceRuleType,true>(
      (std::pair<const std::string,data::WeaponEnhanceRuleType> *const)(v1 + 152),
      (const char (*)[29])"WEAPON_ENHANCE_TYPE_DISABLED",
      (data::WeaponEnhanceRuleType *)(v1 + 96));
    std::allocator<std::pair<std::string const,data::WeaponEnhanceRuleType>>::allocator((std::allocator<std::pair<const std::string,data::WeaponEnhanceRuleType> > *const)(v1 + 64));
    std::unordered_map<std::string,data::WeaponEnhanceRuleType>::unordered_map(
      &data::getWeaponEnhanceRuleTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::WeaponEnhanceRuleType> >)__PAIR128__(2LL, v1 + 112),
      0LL,
      (const std::unordered_map<std::string,data::WeaponEnhanceRuleType>::hasher *)(v1 + 32),
      (const std::unordered_map<std::string,data::WeaponEnhanceRuleType>::key_equal *)(v1 + 48),
      (const std::unordered_map<std::string,data::WeaponEnhanceRuleType>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getWeaponEnhanceRuleTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::WeaponEnhanceRuleType>::~unordered_map,
      &data::getWeaponEnhanceRuleTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::WeaponEnhanceRuleType>>::~allocator((std::allocator<std::pair<const std::string,data::WeaponEnhanceRuleType> > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::WeaponEnhanceRuleType> *)(v1 + 192);
          i != (std::pair<const std::string,data::WeaponEnhanceRuleType> *)(v1 + 112);
          std::pair<std::string const,data::WeaponEnhanceRuleType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getWeaponEnhanceRuleTypeNameMap[abi:cxx11](void)::m;
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

// Line 184: range 000000000CC34FF8-000000000CC355B5
const std::map<data::WeaponEnhanceRuleType,std::pair<std::string,std::string >> *__cdecl data::getWeaponEnhanceRuleTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::WeaponEnhanceRuleType,std::pair<std::string,std::string > > *i; // r14
  unsigned __int64 v5; // rax
  _DWORD *v6; // rax
  const std::map<data::WeaponEnhanceRuleType,std::pair<std::string,std::string >> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getWeaponEnhanceRuleTypeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getWeaponEnhanceRuleTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getWeaponEnhanceRuleTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[27],true>(
      (std::pair<std::string,std::string > *const)(v1 + 112),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[27])"WEAPON_ENHANCE_TYPE_ENABLE");
    std::pair<data::WeaponEnhanceRuleType const,std::pair<std::string,std::string>>::pair<data::WeaponEnhanceRuleType,true>(
      (std::pair<const data::WeaponEnhanceRuleType,std::pair<std::string,std::string > > *const)(v1 + 304),
      (data::WeaponEnhanceRuleType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[29],true>(
      (std::pair<std::string,std::string > *const)(v1 + 208),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[29])"WEAPON_ENHANCE_TYPE_DISABLED");
    std::pair<data::WeaponEnhanceRuleType const,std::pair<std::string,std::string>>::pair<data::WeaponEnhanceRuleType,true>(
      (std::pair<const data::WeaponEnhanceRuleType,std::pair<std::string,std::string > > *const)(v1 + 376),
      (data::WeaponEnhanceRuleType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 208));
    std::allocator<std::pair<data::WeaponEnhanceRuleType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::WeaponEnhanceRuleType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    std::map<data::WeaponEnhanceRuleType,std::pair<std::string,std::string>>::map(
      &data::getWeaponEnhanceRuleTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::WeaponEnhanceRuleType,std::pair<std::string,std::string > > >)__PAIR128__(2LL, v1 + 304),
      (const std::less<data::WeaponEnhanceRuleType> *)(v1 + 48),
      (const std::map<data::WeaponEnhanceRuleType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getWeaponEnhanceRuleTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::WeaponEnhanceRuleType,std::pair<std::string,std::string>>::~map,
      &data::getWeaponEnhanceRuleTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::WeaponEnhanceRuleType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::WeaponEnhanceRuleType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::WeaponEnhanceRuleType,std::pair<std::string,std::string > > *)(v1 + 448);
          i != (std::pair<const data::WeaponEnhanceRuleType,std::pair<std::string,std::string > > *)(v1 + 304);
          std::pair<data::WeaponEnhanceRuleType const,std::pair<std::string,std::string>>::~pair(i) )
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
  result = &data::getWeaponEnhanceRuleTypeEnumMap[abi:cxx11](void)::m;
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

// Line 195: range 000000000CC355B6-000000000CC35DD8
int32_t __cdecl data::WeaponProperty::init(data::WeaponProperty *const this, const common::tools::TxtFile::Row *row)
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
  *(_QWORD *)(v2 + 16) = data::WeaponProperty::init;
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
  v5 = common::tools::TxtFile::Row::assignToEnum<data::FightPropType>(
         row,
         (const std::string *)(v2 + 96),
         &this->prop_type) != 0;
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
      "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
      "init",
      198);
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
      &byte_1A15C480,
      (const std::allocator<char> *)(v2 + 64));
    v8 = common::tools::TxtFile::Row::assignToNum<float>(row, (const std::string *)(v2 + 224), &this->init_value) != 0;
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
        "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
        "init",
        203);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v9, (const char (*)[30])byte_1A15C4C0);
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
        &byte_1A15C500,
        (const std::allocator<char> *)(v2 + 80));
      v10 = common::tools::TxtFile::Row::assignToEnum<data::GrowCurveType>(
              row,
              (const std::string *)(v2 + 352),
              &this->type) != 0;
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
          "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
          "init",
          208);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 416),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v11, (const char (*)[33])byte_1A15C540);
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

// Line 216: range 000000000CC35DDA-000000000CC3BA27
int32_t __cdecl data::WeaponExcelConfig::init(
        data::WeaponExcelConfig *const this,
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
  unsigned int *v37; // r13
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  bool v41; // r13
  common::milog::MiLogStream *v42; // rax
  bool v43; // r13
  data::FightPropType *p_prop_type; // r13
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  bool v48; // r13
  float *p_init_value; // r13
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  bool v53; // r13
  data::GrowCurveType *p_type; // r13
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  bool v58; // r13
  common::milog::MiLogStream *v59; // rax
  bool v60; // r13
  common::milog::MiLogStream *v61; // rax
  unsigned __int64 v62; // rax
  _DWORD *v63; // rax
  bool v64; // r15
  unsigned __int64 v65; // rax
  char *j; // r13
  _DWORD *v67; // rax
  common::milog::MiLogStream *v68; // rax
  bool v69; // r13
  common::milog::MiLogStream *v70; // rax
  bool v71; // r13
  common::milog::MiLogStream *v72; // rax
  bool v73; // r13
  common::milog::MiLogStream *v74; // rax
  unsigned __int64 v75; // rax
  _DWORD *v76; // rax
  bool v77; // r15
  unsigned __int64 v78; // rax
  char *k; // r13
  _DWORD *v80; // rax
  common::milog::MiLogStream *v81; // rax
  bool v82; // r13
  common::milog::MiLogStream *v83; // rax
  unsigned __int64 v84; // rax
  _DWORD *v85; // rax
  bool v86; // r15
  unsigned __int64 v87; // rax
  char *m; // r13
  _DWORD *v89; // rax
  common::milog::MiLogStream *v90; // rax
  bool v91; // r13
  common::milog::MiLogStream *v92; // rax
  std::initializer_list<std::string > __l; // [rsp+10h] [rbp-15C0h]
  std::initializer_list<std::string > v95; // [rsp+20h] [rbp-15B0h]
  std::initializer_list<std::string > v96; // [rsp+30h] [rbp-15A0h]
  uint32_t array_count; // [rsp+54h] [rbp-157Ch]
  uint32_t array_counta; // [rsp+54h] [rbp-157Ch]
  uint32_t i; // [rsp+58h] [rbp-1578h]
  uint32_t i_0; // [rsp+5Ch] [rbp-1574h]
  char v101[5488]; // [rsp+60h] [rbp-1570h] BYREF

  v2 = (unsigned __int64)v101;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_7(5440LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "109 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9"
                        " <unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unkn"
                        "own> 208 1 9 <unknown> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 2"
                        "88 1 9 <unknown> 304 1 9 <unknown> 320 1 9 <unknown> 336 1 9 <unknown> 352 1 9 <unknown> 368 1 9"
                        " <unknown> 384 1 9 <unknown> 400 1 9 <unknown> 416 1 9 <unknown> 432 1 9 <unknown> 448 1 9 <unkn"
                        "own> 464 1 9 <unknown> 480 1 9 <unknown> 496 1 9 <unknown> 512 1 9 <unknown> 528 1 9 <unknown> 5"
                        "44 1 9 <unknown> 560 1 9 <unknown> 576 1 9 <unknown> 592 1 9 <unknown> 608 1 9 <unknown> 624 1 9"
                        " <unknown> 640 1 9 <unknown> 656 1 9 <unknown> 672 24 9 <unknown> 736 24 9 <unknown> 800 24 9 <u"
                        "nknown> 864 32 11 val_str:219 928 32 9 <unknown> 992 32 9 <unknown> 1056 32 9 <unknown> 1120 32 "
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
                        "4832 64 9 <unknown> 4928 64 9 <unknown> 5024 64 9 <unknown> 5120 256 12 col_name:217";
  *(_QWORD *)(v2 + 16) = data::WeaponExcelConfig::init;
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
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 928),
    "ID",
    (const std::allocator<char> *)(v2 + 32));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 928), &this->id) != 0;
  std::string::~string((void *)(v2 + 928));
  *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
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
      "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
      "init",
      222);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 992),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v6, (const char (*)[23])byte_1A144180);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 992));
    *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 1056),
      &byte_1A142700,
      (const std::allocator<char> *)(v2 + 48));
    v8 = common::tools::TxtFile::Row::assignToEnum<data::ItemType>(
           row,
           (const std::string *)(v2 + 1056),
           &this->item_type) != 0;
    std::string::~string((void *)(v2 + 1056));
    *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
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
        "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
        "init",
        227);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 1120),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v9, (const char (*)[27])byte_1A142740);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1120));
      *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -117901064;
      v7 = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 1184),
        &byte_1A15CDE0,
        (const std::allocator<char> *)(v2 + 64));
      v10 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 1184), &this->weight) != 0;
      std::string::~string((void *)(v2 + 1184));
      *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
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
          "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
          "init",
          232);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 1248),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v11, (const char (*)[27])byte_1A15CE20);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1248));
        *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = -117901064;
        v7 = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 1312),
          &byte_1A148EE0,
          (const std::allocator<char> *)(v2 + 80));
        v12 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 1312), &this->rank) != 0;
        std::string::~string((void *)(v2 + 1312));
        *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
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
            "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
            "init",
            237);
          v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 1376),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v13, (const char (*)[33])byte_1A148F20);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1376));
          *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = -117901064;
          v7 = -1;
        }
        else
        {
          *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 96);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1440),
            &byte_1A151580,
            (const std::allocator<char> *)(v2 + 96));
          v14 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                  row,
                  (const std::string *)(v2 + 1440),
                  &this->gadget_id) != 0;
          std::string::~string((void *)(v2 + 1440));
          *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 96);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
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
              "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
              "init",
              242);
            v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 1504),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v15, (const char (*)[29])byte_1A1515C0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1504));
            *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = -117901064;
            v7 = -1;
          }
          else
          {
            *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 112);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1568),
              &byte_1A15CE60,
              (const std::allocator<char> *)(v2 + 112));
            v16 = common::tools::TxtFile::Row::assignToNum<bool>(row, (const std::string *)(v2 + 1568), &this->dropable) != 0;
            std::string::~string((void *)(v2 + 1568));
            *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 112);
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
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
                "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
                "init",
                247);
              v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1632),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v17, (const char (*)[30])byte_1A15CEA0);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1632));
              *(_DWORD *)(((v2 + 1632) >> 3) + 0x7FFF8000) = -117901064;
              v7 = -1;
            }
            else
            {
              *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 128);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1696),
                &byte_1A15CEE0,
                (const std::allocator<char> *)(v2 + 128));
              v18 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                      row,
                      (const std::string *)(v2 + 1696),
                      &this->use_level) != 0;
              std::string::~string((void *)(v2 + 1696));
              *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 128);
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
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
                  "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
                  "init",
                  252);
                v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1760),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v19, (const char (*)[33])byte_1A15CF20);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1760));
                *(_DWORD *)(((v2 + 1760) >> 3) + 0x7FFF8000) = -117901064;
                v7 = -1;
              }
              else
              {
                *(_DWORD *)(((v2 + 1824) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 144);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1824),
                  &byte_1A15CF80,
                  (const std::allocator<char> *)(v2 + 144));
                v20 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                        row,
                        (const std::string *)(v2 + 1824),
                        &this->global_item_limit) != 0;
                std::string::~string((void *)(v2 + 1824));
                *(_DWORD *)(((v2 + 1824) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 144);
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
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
                    "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
                    "init",
                    257);
                  v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 1888),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                    v21,
                    (const char (*)[39])byte_1A15CFC0);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1888));
                  *(_DWORD *)(((v2 + 1888) >> 3) + 0x7FFF8000) = -117901064;
                  v7 = -1;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1952) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 160);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1952),
                    &byte_1A15D020,
                    (const std::allocator<char> *)(v2 + 160));
                  v22 = common::tools::TxtFile::Row::assignToStr(
                          row,
                          (const std::string *)(v2 + 1952),
                          &this->control_type) != 0;
                  std::string::~string((void *)(v2 + 1952));
                  *(_DWORD *)(((v2 + 1952) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 160);
                  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
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
                      "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
                      "init",
                      262);
                    v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 2016),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                      v23,
                      (const char (*)[36])byte_1A15D060);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2016));
                    *(_DWORD *)(((v2 + 2016) >> 3) + 0x7FFF8000) = -117901064;
                    v7 = -1;
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 2080) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 176);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 2080),
                      &byte_1A15D0C0,
                      (const std::allocator<char> *)(v2 + 176));
                    v24 = common::tools::TxtFile::Row::assignToEnum<data::WeaponType>(
                            row,
                            (const std::string *)(v2 + 2080),
                            &this->weapon_type) != 0;
                    std::string::~string((void *)(v2 + 2080));
                    *(_DWORD *)(((v2 + 2080) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 176);
                    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
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
                        "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
                        "init",
                        267);
                      v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 2144),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                        v25,
                        (const char (*)[33])byte_1A15D100);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2144));
                      *(_DWORD *)(((v2 + 2144) >> 3) + 0x7FFF8000) = -117901064;
                      v7 = -1;
                    }
                    else
                    {
                      *(_DWORD *)(((v2 + 2208) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 192);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 2208),
                        &byte_1A15D160,
                        (const std::allocator<char> *)(v2 + 192));
                      v26 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                              row,
                              (const std::string *)(v2 + 2208),
                              &this->rank_level) != 0;
                      std::string::~string((void *)(v2 + 2208));
                      *(_DWORD *)(((v2 + 2208) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 192);
                      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
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
                          "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
                          "init",
                          272);
                        v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                (common::milog::MiLogStream *const)(v2 + 2272),
                                (const char (*)[16])"[CONFIG_ERROR] ");
                        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                          v27,
                          (const char (*)[33])byte_1A15D1A0);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2272));
                        *(_DWORD *)(((v2 + 2272) >> 3) + 0x7FFF8000) = -117901064;
                        v7 = -1;
                      }
                      else
                      {
                        *(_DWORD *)(((v2 + 2336) >> 3) + 0x7FFF8000) = 0;
                        *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 208);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 2336),
                          &byte_1A15D200,
                          (const std::allocator<char> *)(v2 + 208));
                        v28 = common::tools::TxtFile::Row::assignToEnum<data::WeaponMaterialType>(
                                row,
                                (const std::string *)(v2 + 2336),
                                &this->material_type) != 0;
                        std::string::~string((void *)(v2 + 2336));
                        *(_DWORD *)(((v2 + 2336) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 208);
                        *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
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
                            "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
                            "init",
                            277);
                          v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                  (common::milog::MiLogStream *const)(v2 + 2400),
                                  (const char (*)[16])"[CONFIG_ERROR] ");
                          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                            v29,
                            (const char (*)[33])byte_1A15D240);
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2400));
                          *(_DWORD *)(((v2 + 2400) >> 3) + 0x7FFF8000) = -117901064;
                          v7 = -1;
                        }
                        else
                        {
                          *(_DWORD *)(((v2 + 2464) >> 3) + 0x7FFF8000) = 0;
                          *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
                          std::allocator<char>::allocator(v2 + 224);
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)(v2 + 2464),
                            byte_1A148DE0,
                            (const std::allocator<char> *)(v2 + 224));
                          v30 = common::tools::TxtFile::Row::assignToEnum<data::ElementType>(
                                  row,
                                  (const std::string *)(v2 + 2464),
                                  &this->elem_type) != 0;
                          std::string::~string((void *)(v2 + 2464));
                          *(_DWORD *)(((v2 + 2464) >> 3) + 0x7FFF8000) = -117901064;
                          std::allocator<char>::~allocator(v2 + 224);
                          *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
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
                              "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
                              "init",
                              282);
                            v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                    (common::milog::MiLogStream *const)(v2 + 2528),
                                    (const char (*)[16])"[CONFIG_ERROR] ");
                            common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                              v31,
                              (const char (*)[33])byte_1A148E80);
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2528));
                            *(_DWORD *)(((v2 + 2528) >> 3) + 0x7FFF8000) = -117901064;
                            v7 = -1;
                          }
                          else
                          {
                            *(_DWORD *)(((v2 + 2592) >> 3) + 0x7FFF8000) = 0;
                            *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
                            std::allocator<char>::allocator(v2 + 240);
                            std::string::basic_string<std::allocator<char>>(
                              (std::string *const)(v2 + 2592),
                              &byte_1A15D2A0,
                              (const std::allocator<char> *)(v2 + 240));
                            v32 = common::tools::TxtFile::Row::assignToNum<bool>(
                                    row,
                                    (const std::string *)(v2 + 2592),
                                    &this->is_gold) != 0;
                            std::string::~string((void *)(v2 + 2592));
                            *(_DWORD *)(((v2 + 2592) >> 3) + 0x7FFF8000) = -117901064;
                            std::allocator<char>::~allocator(v2 + 240);
                            *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
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
                                "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
                                "init",
                                287);
                              v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                      (common::milog::MiLogStream *const)(v2 + 2656),
                                      (const char (*)[16])"[CONFIG_ERROR] ");
                              common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                                v33,
                                (const char (*)[30])byte_1A15D2E0);
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2656));
                              *(_DWORD *)(((v2 + 2656) >> 3) + 0x7FFF8000) = -117901064;
                              v7 = -1;
                            }
                            else
                            {
                              *(_DWORD *)(((v2 + 2720) >> 3) + 0x7FFF8000) = 0;
                              *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
                              std::allocator<char>::allocator(v2 + 256);
                              std::string::basic_string<std::allocator<char>>(
                                (std::string *const)(v2 + 2720),
                                &byte_1A15D320,
                                (const std::allocator<char> *)(v2 + 256));
                              v34 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                      row,
                                      (const std::string *)(v2 + 2720),
                                      &this->weapon_base_exp) != 0;
                              std::string::~string((void *)(v2 + 2720));
                              *(_DWORD *)(((v2 + 2720) >> 3) + 0x7FFF8000) = -117901064;
                              std::allocator<char>::~allocator(v2 + 256);
                              *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
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
                                  "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
                                  "init",
                                  292);
                                v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                        (common::milog::MiLogStream *const)(v2 + 2784),
                                        (const char (*)[16])"[CONFIG_ERROR] ");
                                common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                  v35,
                                  (const char (*)[39])byte_1A15D360);
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2784));
                                *(_DWORD *)(((v2 + 2784) >> 3) + 0x7FFF8000) = -117901064;
                                v7 = -1;
                              }
                              else
                              {
                                std::vector<unsigned int>::resize(&this->skill_affix, 2uLL);
                                array_count = 0;
                                for ( i = 0; i <= 1; ++i )
                                {
                                  snprintf((char *)(v2 + 5120), 0x100uLL, &byte_1A15D3C0, i + 1);
                                  *(_DWORD *)(((v2 + 2848) >> 3) + 0x7FFF8000) = 0;
                                  *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
                                  std::allocator<char>::allocator(v2 + 272);
                                  std::string::basic_string<std::allocator<char>>(
                                    (std::string *const)(v2 + 2848),
                                    (const char *)(v2 + 5120),
                                    (const std::allocator<char> *)(v2 + 272));
                                  v36 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 2848));
                                  std::string::~string((void *)(v2 + 2848));
                                  *(_DWORD *)(((v2 + 2848) >> 3) + 0x7FFF8000) = -117901064;
                                  std::allocator<char>::~allocator(v2 + 272);
                                  *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                                  if ( !v36 )
                                  {
                                    v37 = std::vector<unsigned int>::operator[](&this->skill_affix, i);
                                    *(_DWORD *)(((v2 + 2912) >> 3) + 0x7FFF8000) = 0;
                                    *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 1;
                                    std::allocator<char>::allocator(v2 + 288);
                                    std::string::basic_string<std::allocator<char>>(
                                      (std::string *const)(v2 + 2912),
                                      (const char *)(v2 + 5120),
                                      (const std::allocator<char> *)(v2 + 288));
                                    LOBYTE(v37) = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                                    row,
                                                    (const std::string *)(v2 + 2912),
                                                    v37) != 0;
                                    std::string::~string((void *)(v2 + 2912));
                                    *(_DWORD *)(((v2 + 2912) >> 3) + 0x7FFF8000) = -117901064;
                                    std::allocator<char>::~allocator(v2 + 288);
                                    *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
                                    if ( (_BYTE)v37 )
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
                                        "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
                                        "init",
                                        304);
                                      v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                              (common::milog::MiLogStream *const)(v2 + 2976),
                                              (const char (*)[16])"[CONFIG_ERROR] ");
                                      v39 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                              v38,
                                              (const char (*)[14])byte_1A143560);
                                      v40 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                                              v39,
                                              (const char (*)[256])(v2 + 5120));
                                      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                                        v40,
                                        (const char (*)[7])byte_1A1435A0);
                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2976));
                                      *(_DWORD *)(((v2 + 2976) >> 3) + 0x7FFF8000) = -117901064;
                                      v7 = -1;
                                      goto LABEL_146;
                                    }
                                    array_count = i + 1;
                                  }
                                }
                                std::vector<unsigned int>::resize(&this->skill_affix, array_count);
                                *(_DWORD *)(((v2 + 3040) >> 3) + 0x7FFF8000) = 0;
                                *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 1;
                                std::allocator<char>::allocator(v2 + 304);
                                std::string::basic_string<std::allocator<char>>(
                                  (std::string *const)(v2 + 3040),
                                  &byte_1A15D400,
                                  (const std::allocator<char> *)(v2 + 304));
                                v41 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                        row,
                                        (const std::string *)(v2 + 3040),
                                        &this->awaken_material) != 0;
                                std::string::~string((void *)(v2 + 3040));
                                *(_DWORD *)(((v2 + 3040) >> 3) + 0x7FFF8000) = -117901064;
                                std::allocator<char>::~allocator(v2 + 304);
                                *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
                                if ( v41 )
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
                                    "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
                                    "init",
                                    313);
                                  v42 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                          (common::milog::MiLogStream *const)(v2 + 3104),
                                          (const char (*)[16])"[CONFIG_ERROR] ");
                                  common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                    v42,
                                    (const char (*)[33])byte_1A15D440);
                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3104));
                                  *(_DWORD *)(((v2 + 3104) >> 3) + 0x7FFF8000) = -117901064;
                                  v7 = -1;
                                }
                                else
                                {
                                  std::vector<data::WeaponProperty>::resize(&this->weapon_prop, 5uLL);
                                  array_counta = 0;
                                  for ( i_0 = 0; i_0 <= 4; ++i_0 )
                                  {
                                    snprintf((char *)(v2 + 5120), 0x100uLL, asc_1A15D4A0, i_0 + 1);
                                    *(_DWORD *)(((v2 + 3168) >> 3) + 0x7FFF8000) = 0;
                                    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 1;
                                    std::allocator<char>::allocator(v2 + 320);
                                    std::string::basic_string<std::allocator<char>>(
                                      (std::string *const)(v2 + 3168),
                                      (const char *)(v2 + 5120),
                                      (const std::allocator<char> *)(v2 + 320));
                                    v43 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 3168));
                                    std::string::~string((void *)(v2 + 3168));
                                    *(_DWORD *)(((v2 + 3168) >> 3) + 0x7FFF8000) = -117901064;
                                    std::allocator<char>::~allocator(v2 + 320);
                                    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
                                    if ( !v43 )
                                    {
                                      p_prop_type = &std::vector<data::WeaponProperty>::operator[](
                                                       &this->weapon_prop,
                                                       i_0)->prop_type;
                                      *(_DWORD *)(((v2 + 3232) >> 3) + 0x7FFF8000) = 0;
                                      *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 1;
                                      std::allocator<char>::allocator(v2 + 336);
                                      std::string::basic_string<std::allocator<char>>(
                                        (std::string *const)(v2 + 3232),
                                        (const char *)(v2 + 5120),
                                        (const std::allocator<char> *)(v2 + 336));
                                      LOBYTE(p_prop_type) = common::tools::TxtFile::Row::assignToEnum<data::FightPropType>(
                                                              row,
                                                              (const std::string *)(v2 + 3232),
                                                              p_prop_type) != 0;
                                      std::string::~string((void *)(v2 + 3232));
                                      *(_DWORD *)(((v2 + 3232) >> 3) + 0x7FFF8000) = -117901064;
                                      std::allocator<char>::~allocator(v2 + 336);
                                      *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
                                      if ( (_BYTE)p_prop_type )
                                      {
                                        *(_DWORD *)(((v2 + 3296) >> 3) + 0x7FFF8000) = 0;
                                        if ( *(char *)(((v2 + 3296) >> 3) + 0x7FFF8000) < 0
                                          || *(_BYTE *)(((v2 + 3327) >> 3) + 0x7FFF8000) != 0
                                          && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 3327) >> 3) + 0x7FFF8000) )
                                        {
                                          __asan_report_store_n(v2 + 3296, 32LL);
                                        }
                                        common::milog::MiLogStream::create(
                                          (common::milog::MiLogStream *)(v2 + 3296),
                                          &common::milog::MiLogDefault::default_log_obj_,
                                          4u,
                                          "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
                                          "init",
                                          325);
                                        v45 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                (common::milog::MiLogStream *const)(v2 + 3296),
                                                (const char (*)[16])"[CONFIG_ERROR] ");
                                        v46 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                                v45,
                                                (const char (*)[14])byte_1A143560);
                                        v47 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                                                v46,
                                                (const char (*)[256])(v2 + 5120));
                                        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                                          v47,
                                          (const char (*)[7])byte_1A1435A0);
                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3296));
                                        *(_DWORD *)(((v2 + 3296) >> 3) + 0x7FFF8000) = -117901064;
                                        v7 = -1;
                                        goto LABEL_146;
                                      }
                                      snprintf((char *)(v2 + 5120), 0x100uLL, asc_1A15D4E0, i_0 + 1);
                                      *(_DWORD *)(((v2 + 3360) >> 3) + 0x7FFF8000) = 0;
                                      *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 1;
                                      std::allocator<char>::allocator(v2 + 352);
                                      std::string::basic_string<std::allocator<char>>(
                                        (std::string *const)(v2 + 3360),
                                        (const char *)(v2 + 5120),
                                        (const std::allocator<char> *)(v2 + 352));
                                      v48 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 3360));
                                      std::string::~string((void *)(v2 + 3360));
                                      *(_DWORD *)(((v2 + 3360) >> 3) + 0x7FFF8000) = -117901064;
                                      std::allocator<char>::~allocator(v2 + 352);
                                      *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
                                      if ( !v48 )
                                      {
                                        p_init_value = &std::vector<data::WeaponProperty>::operator[](
                                                          &this->weapon_prop,
                                                          i_0)->init_value;
                                        *(_DWORD *)(((v2 + 3424) >> 3) + 0x7FFF8000) = 0;
                                        *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = 1;
                                        std::allocator<char>::allocator(v2 + 368);
                                        std::string::basic_string<std::allocator<char>>(
                                          (std::string *const)(v2 + 3424),
                                          (const char *)(v2 + 5120),
                                          (const std::allocator<char> *)(v2 + 368));
                                        LOBYTE(p_init_value) = common::tools::TxtFile::Row::assignToNum<float>(
                                                                 row,
                                                                 (const std::string *)(v2 + 3424),
                                                                 p_init_value) != 0;
                                        std::string::~string((void *)(v2 + 3424));
                                        *(_DWORD *)(((v2 + 3424) >> 3) + 0x7FFF8000) = -117901064;
                                        std::allocator<char>::~allocator(v2 + 368);
                                        *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
                                        if ( (_BYTE)p_init_value )
                                        {
                                          *(_DWORD *)(((v2 + 3488) >> 3) + 0x7FFF8000) = 0;
                                          if ( *(char *)(((v2 + 3488) >> 3) + 0x7FFF8000) < 0
                                            || *(_BYTE *)(((v2 + 3519) >> 3) + 0x7FFF8000) != 0
                                            && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 3519) >> 3) + 0x7FFF8000) )
                                          {
                                            __asan_report_store_n(v2 + 3488, 32LL);
                                          }
                                          common::milog::MiLogStream::create(
                                            (common::milog::MiLogStream *)(v2 + 3488),
                                            &common::milog::MiLogDefault::default_log_obj_,
                                            4u,
                                            "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
                                            "init",
                                            333);
                                          v50 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                  (common::milog::MiLogStream *const)(v2 + 3488),
                                                  (const char (*)[16])"[CONFIG_ERROR] ");
                                          v51 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                                  v50,
                                                  (const char (*)[14])byte_1A143560);
                                          v52 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                                                  v51,
                                                  (const char (*)[256])(v2 + 5120));
                                          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                                            v52,
                                            (const char (*)[7])byte_1A1435A0);
                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3488));
                                          *(_DWORD *)(((v2 + 3488) >> 3) + 0x7FFF8000) = -117901064;
                                          v7 = -1;
                                          goto LABEL_146;
                                        }
                                        snprintf((char *)(v2 + 5120), 0x100uLL, asc_1A15D520, i_0 + 1);
                                        *(_DWORD *)(((v2 + 3552) >> 3) + 0x7FFF8000) = 0;
                                        *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 1;
                                        std::allocator<char>::allocator(v2 + 384);
                                        std::string::basic_string<std::allocator<char>>(
                                          (std::string *const)(v2 + 3552),
                                          (const char *)(v2 + 5120),
                                          (const std::allocator<char> *)(v2 + 384));
                                        v53 = !common::tools::TxtFile::Row::hasKey(
                                                 row,
                                                 (const std::string *)(v2 + 3552));
                                        std::string::~string((void *)(v2 + 3552));
                                        *(_DWORD *)(((v2 + 3552) >> 3) + 0x7FFF8000) = -117901064;
                                        std::allocator<char>::~allocator(v2 + 384);
                                        *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
                                        if ( !v53 )
                                        {
                                          p_type = &std::vector<data::WeaponProperty>::operator[](
                                                      &this->weapon_prop,
                                                      i_0)->type;
                                          *(_DWORD *)(((v2 + 3616) >> 3) + 0x7FFF8000) = 0;
                                          *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = 1;
                                          std::allocator<char>::allocator(v2 + 400);
                                          std::string::basic_string<std::allocator<char>>(
                                            (std::string *const)(v2 + 3616),
                                            (const char *)(v2 + 5120),
                                            (const std::allocator<char> *)(v2 + 400));
                                          LOBYTE(p_type) = common::tools::TxtFile::Row::assignToEnum<data::GrowCurveType>(
                                                             row,
                                                             (const std::string *)(v2 + 3616),
                                                             p_type) != 0;
                                          std::string::~string((void *)(v2 + 3616));
                                          *(_DWORD *)(((v2 + 3616) >> 3) + 0x7FFF8000) = -117901064;
                                          std::allocator<char>::~allocator(v2 + 400);
                                          *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
                                          if ( (_BYTE)p_type )
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
                                              "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
                                              "init",
                                              341);
                                            v55 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                    (common::milog::MiLogStream *const)(v2 + 3680),
                                                    (const char (*)[16])"[CONFIG_ERROR] ");
                                            v56 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                                    v55,
                                                    (const char (*)[14])byte_1A143560);
                                            v57 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                                                    v56,
                                                    (const char (*)[256])(v2 + 5120));
                                            common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                                              v57,
                                              (const char (*)[7])byte_1A1435A0);
                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3680));
                                            *(_DWORD *)(((v2 + 3680) >> 3) + 0x7FFF8000) = -117901064;
                                            v7 = -1;
                                            goto LABEL_146;
                                          }
                                          array_counta = i_0 + 1;
                                        }
                                      }
                                    }
                                  }
                                  std::vector<data::WeaponProperty>::resize(&this->weapon_prop, array_counta);
                                  *(_DWORD *)(((v2 + 3744) >> 3) + 0x7FFF8000) = 0;
                                  *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = 1;
                                  std::allocator<char>::allocator(v2 + 416);
                                  std::string::basic_string<std::allocator<char>>(
                                    (std::string *const)(v2 + 3744),
                                    &byte_1A15D560,
                                    (const std::allocator<char> *)(v2 + 416));
                                  v58 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                          row,
                                          (const std::string *)(v2 + 3744),
                                          &this->weapon_promote_id) != 0;
                                  std::string::~string((void *)(v2 + 3744));
                                  *(_DWORD *)(((v2 + 3744) >> 3) + 0x7FFF8000) = -117901064;
                                  std::allocator<char>::~allocator(v2 + 416);
                                  *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
                                  if ( v58 )
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
                                      "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
                                      "init",
                                      350);
                                    v59 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                            (common::milog::MiLogStream *const)(v2 + 3808),
                                            (const char (*)[16])"[CONFIG_ERROR] ");
                                    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                                      v59,
                                      (const char (*)[35])byte_1A15D5A0);
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
                                      &byte_1A15D600,
                                      (const std::allocator<char> *)(v2 + 432));
                                    v60 = common::tools::TxtFile::Row::assignToStr(
                                            row,
                                            (const std::string *)(v2 + 3872),
                                            (std::string *)(v2 + 864)) != 0;
                                    std::string::~string((void *)(v2 + 3872));
                                    *(_DWORD *)(((v2 + 3872) >> 3) + 0x7FFF8000) = -117901064;
                                    std::allocator<char>::~allocator(v2 + 432);
                                    *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = -8;
                                    if ( v60 )
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
                                        "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
                                        "init",
                                        355);
                                      v61 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                              (common::milog::MiLogStream *const)(v2 + 3936),
                                              (const char (*)[16])"[CONFIG_ERROR] ");
                                      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                        v61,
                                        (const char (*)[39])byte_1A15D640);
                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3936));
                                      *(_DWORD *)(((v2 + 3936) >> 3) + 0x7FFF8000) = -117901064;
                                      v7 = -1;
                                    }
                                    else
                                    {
                                      v62 = ((v2 + 672) >> 3) + 2147450880;
                                      *(_WORD *)v62 = 0;
                                      *(_BYTE *)(v62 + 2) = 0;
                                      v63 = (_DWORD *)(((v2 + 4832) >> 3) + 2147450880);
                                      *v63 = 0;
                                      v63[1] = 0;
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
                                      v64 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                                              (const std::string *)(v2 + 864),
                                              (const std::vector<std::string> *)(v2 + 672),
                                              &this->awaken_costs,
                                              1) != 0;
                                      std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 672));
                                      v65 = ((v2 + 672) >> 3) + 2147450880;
                                      *(_WORD *)v65 = -1800;
                                      *(_BYTE *)(v65 + 2) = -8;
                                      std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 480));
                                      *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = -8;
                                      for ( j = (char *)(v2 + 4896); j != (char *)(v2 + 4832); std::string::~string(j) )
                                        j -= 32;
                                      v67 = (_DWORD *)(((v2 + 4832) >> 3) + 2147450880);
                                      *v67 = -117901064;
                                      v67[1] = -117901064;
                                      std::allocator<char>::~allocator(v2 + 464);
                                      *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = -8;
                                      std::allocator<char>::~allocator(v2 + 448);
                                      *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = -8;
                                      if ( v64 )
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
                                          "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
                                          "init",
                                          360);
                                        v68 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                (common::milog::MiLogStream *const)(v2 + 4000),
                                                (const char (*)[16])"[CONFIG_ERROR] ");
                                        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                          v68,
                                          (const char (*)[39])byte_1A15D640);
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
                                          &byte_1A15D6A0,
                                          (const std::allocator<char> *)(v2 + 496));
                                        v69 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                                row,
                                                (const std::string *)(v2 + 4064),
                                                &this->enhance_rule) != 0;
                                        std::string::~string((void *)(v2 + 4064));
                                        *(_DWORD *)(((v2 + 4064) >> 3) + 0x7FFF8000) = -117901064;
                                        std::allocator<char>::~allocator(v2 + 496);
                                        *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = -8;
                                        if ( v69 )
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
                                            "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
                                            "init",
                                            365);
                                          v70 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                  (common::milog::MiLogStream *const)(v2 + 4128),
                                                  (const char (*)[16])"[CONFIG_ERROR] ");
                                          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                            v70,
                                            (const char (*)[33])byte_1A15D6E0);
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
                                            &byte_1A15D740,
                                            (const std::allocator<char> *)(v2 + 512));
                                          v71 = common::tools::TxtFile::Row::assignToEnum<data::MaterialDestroyType>(
                                                  row,
                                                  (const std::string *)(v2 + 4192),
                                                  &this->destroy_rule) != 0;
                                          std::string::~string((void *)(v2 + 4192));
                                          *(_DWORD *)(((v2 + 4192) >> 3) + 0x7FFF8000) = -117901064;
                                          std::allocator<char>::~allocator(v2 + 512);
                                          *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = -8;
                                          if ( v71 )
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
                                              "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
                                              "init",
                                              370);
                                            v72 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                    (common::milog::MiLogStream *const)(v2 + 4256),
                                                    (const char (*)[16])"[CONFIG_ERROR] ");
                                            common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                              v72,
                                              (const char (*)[33])byte_1A15D780);
                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4256));
                                            *(_DWORD *)(((v2 + 4256) >> 3) + 0x7FFF8000) = -117901064;
                                            v7 = -1;
                                          }
                                          else
                                          {
                                            *(_DWORD *)(((v2 + 4320) >> 3) + 0x7FFF8000) = 0;
                                            *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = 1;
                                            std::allocator<char>::allocator(v2 + 528);
                                            std::string::basic_string<std::allocator<char>>(
                                              (std::string *const)(v2 + 4320),
                                              &byte_1A15D7E0,
                                              (const std::allocator<char> *)(v2 + 528));
                                            v73 = common::tools::TxtFile::Row::assignToStr(
                                                    row,
                                                    (const std::string *)(v2 + 4320),
                                                    (std::string *)(v2 + 864)) != 0;
                                            std::string::~string((void *)(v2 + 4320));
                                            *(_DWORD *)(((v2 + 4320) >> 3) + 0x7FFF8000) = -117901064;
                                            std::allocator<char>::~allocator(v2 + 528);
                                            *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = -8;
                                            if ( v73 )
                                            {
                                              *(_DWORD *)(((v2 + 4384) >> 3) + 0x7FFF8000) = 0;
                                              if ( *(char *)(((v2 + 4384) >> 3) + 0x7FFF8000) < 0
                                                || *(_BYTE *)(((v2 + 4415) >> 3) + 0x7FFF8000) != 0
                                                && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 4415) >> 3) + 0x7FFF8000) )
                                              {
                                                __asan_report_store_n(v2 + 4384, 32LL);
                                              }
                                              common::milog::MiLogStream::create(
                                                (common::milog::MiLogStream *)(v2 + 4384),
                                                &common::milog::MiLogDefault::default_log_obj_,
                                                4u,
                                                "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
                                                "init",
                                                375);
                                              v74 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                      (common::milog::MiLogStream *const)(v2 + 4384),
                                                      (const char (*)[16])"[CONFIG_ERROR] ");
                                              common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                                v74,
                                                (const char (*)[39])byte_1A15D820);
                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4384));
                                              *(_DWORD *)(((v2 + 4384) >> 3) + 0x7FFF8000) = -117901064;
                                              v7 = -1;
                                            }
                                            else
                                            {
                                              v75 = ((v2 + 736) >> 3) + 2147450880;
                                              *(_WORD *)v75 = 0;
                                              *(_BYTE *)(v75 + 2) = 0;
                                              v76 = (_DWORD *)(((v2 + 4928) >> 3) + 2147450880);
                                              *v76 = 0;
                                              v76[1] = 0;
                                              *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = 1;
                                              std::allocator<char>::allocator(v2 + 544);
                                              std::string::basic_string<std::allocator<char>>(
                                                (std::string *const)(v2 + 4928),
                                                ";",
                                                (const std::allocator<char> *)(v2 + 544));
                                              *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = 1;
                                              std::allocator<char>::allocator(v2 + 560);
                                              std::string::basic_string<std::allocator<char>>(
                                                (std::string *const)(v2 + 4960),
                                                ",",
                                                (const std::allocator<char> *)(v2 + 560));
                                              v95._M_array = (std::initializer_list<std::string >::iterator)(v2 + 4928);
                                              v95._M_len = 2LL;
                                              *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) = 1;
                                              std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 576));
                                              std::vector<std::string>::vector(
                                                (std::vector<std::string> *const)(v2 + 736),
                                                v95,
                                                (const std::vector<std::string>::allocator_type *)(v2 + 576));
                                              v77 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                                                      (const std::string *)(v2 + 864),
                                                      (const std::vector<std::string> *)(v2 + 736),
                                                      &this->destroy_return_material,
                                                      1) != 0;
                                              std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 736));
                                              v78 = ((v2 + 736) >> 3) + 2147450880;
                                              *(_WORD *)v78 = -1800;
                                              *(_BYTE *)(v78 + 2) = -8;
                                              std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 576));
                                              *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) = -8;
                                              for ( k = (char *)(v2 + 4992);
                                                    k != (char *)(v2 + 4928);
                                                    std::string::~string(k) )
                                              {
                                                k -= 32;
                                              }
                                              v80 = (_DWORD *)(((v2 + 4928) >> 3) + 2147450880);
                                              *v80 = -117901064;
                                              v80[1] = -117901064;
                                              std::allocator<char>::~allocator(v2 + 560);
                                              *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = -8;
                                              std::allocator<char>::~allocator(v2 + 544);
                                              *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = -8;
                                              if ( v77 )
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
                                                  "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
                                                  "init",
                                                  380);
                                                v81 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                        (common::milog::MiLogStream *const)(v2 + 4448),
                                                        (const char (*)[16])"[CONFIG_ERROR] ");
                                                common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                                  v81,
                                                  (const char (*)[39])byte_1A15D820);
                                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4448));
                                                *(_DWORD *)(((v2 + 4448) >> 3) + 0x7FFF8000) = -117901064;
                                                v7 = -1;
                                              }
                                              else
                                              {
                                                *(_DWORD *)(((v2 + 4512) >> 3) + 0x7FFF8000) = 0;
                                                *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) = 1;
                                                std::allocator<char>::allocator(v2 + 592);
                                                std::string::basic_string<std::allocator<char>>(
                                                  (std::string *const)(v2 + 4512),
                                                  &byte_1A15D880,
                                                  (const std::allocator<char> *)(v2 + 592));
                                                v82 = common::tools::TxtFile::Row::assignToStr(
                                                        row,
                                                        (const std::string *)(v2 + 4512),
                                                        (std::string *)(v2 + 864)) != 0;
                                                std::string::~string((void *)(v2 + 4512));
                                                *(_DWORD *)(((v2 + 4512) >> 3) + 0x7FFF8000) = -117901064;
                                                std::allocator<char>::~allocator(v2 + 592);
                                                *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) = -8;
                                                if ( v82 )
                                                {
                                                  *(_DWORD *)(((v2 + 4576) >> 3) + 0x7FFF8000) = 0;
                                                  if ( *(char *)(((v2 + 4576) >> 3) + 0x7FFF8000) < 0
                                                    || *(_BYTE *)(((v2 + 4607) >> 3) + 0x7FFF8000) != 0
                                                    && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 4607) >> 3)
                                                                                              + 0x7FFF8000) )
                                                  {
                                                    __asan_report_store_n(v2 + 4576, 32LL);
                                                  }
                                                  common::milog::MiLogStream::create(
                                                    (common::milog::MiLogStream *)(v2 + 4576),
                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                    4u,
                                                    "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
                                                    "init",
                                                    385);
                                                  v83 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                          (common::milog::MiLogStream *const)(v2 + 4576),
                                                          (const char (*)[16])"[CONFIG_ERROR] ");
                                                  common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                                    v83,
                                                    (const char (*)[39])byte_1A15D8C0);
                                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4576));
                                                  *(_DWORD *)(((v2 + 4576) >> 3) + 0x7FFF8000) = -117901064;
                                                  v7 = -1;
                                                }
                                                else
                                                {
                                                  v84 = ((v2 + 800) >> 3) + 2147450880;
                                                  *(_WORD *)v84 = 0;
                                                  *(_BYTE *)(v84 + 2) = 0;
                                                  v85 = (_DWORD *)(((v2 + 5024) >> 3) + 2147450880);
                                                  *v85 = 0;
                                                  v85[1] = 0;
                                                  *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) = 1;
                                                  std::allocator<char>::allocator(v2 + 608);
                                                  std::string::basic_string<std::allocator<char>>(
                                                    (std::string *const)(v2 + 5024),
                                                    ";",
                                                    (const std::allocator<char> *)(v2 + 608));
                                                  *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) = 1;
                                                  std::allocator<char>::allocator(v2 + 624);
                                                  std::string::basic_string<std::allocator<char>>(
                                                    (std::string *const)(v2 + 5056),
                                                    ",",
                                                    (const std::allocator<char> *)(v2 + 624));
                                                  v96._M_array = (std::initializer_list<std::string >::iterator)(v2 + 5024);
                                                  v96._M_len = 2LL;
                                                  *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) = 1;
                                                  std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 640));
                                                  std::vector<std::string>::vector(
                                                    (std::vector<std::string> *const)(v2 + 800),
                                                    v96,
                                                    (const std::vector<std::string>::allocator_type *)(v2 + 640));
                                                  v86 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                                                          (const std::string *)(v2 + 864),
                                                          (const std::vector<std::string> *)(v2 + 800),
                                                          &this->destroy_return_material_count,
                                                          1) != 0;
                                                  std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 800));
                                                  v87 = ((v2 + 800) >> 3) + 2147450880;
                                                  *(_WORD *)v87 = -1800;
                                                  *(_BYTE *)(v87 + 2) = -8;
                                                  std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 640));
                                                  *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) = -8;
                                                  for ( m = (char *)(v2 + 5088);
                                                        m != (char *)(v2 + 5024);
                                                        std::string::~string(m) )
                                                  {
                                                    m -= 32;
                                                  }
                                                  v89 = (_DWORD *)(((v2 + 5024) >> 3) + 2147450880);
                                                  *v89 = -117901064;
                                                  v89[1] = -117901064;
                                                  std::allocator<char>::~allocator(v2 + 624);
                                                  *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) = -8;
                                                  std::allocator<char>::~allocator(v2 + 608);
                                                  *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) = -8;
                                                  if ( v86 )
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
                                                      "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
                                                      "init",
                                                      390);
                                                    v90 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                            (common::milog::MiLogStream *const)(v2 + 4640),
                                                            (const char (*)[16])"[CONFIG_ERROR] ");
                                                    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                                      v90,
                                                      (const char (*)[39])byte_1A15D8C0);
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
                                                      &byte_1A15D920,
                                                      (const std::allocator<char> *)(v2 + 656));
                                                    v91 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                                            row,
                                                            (const std::string *)(v2 + 4704),
                                                            &this->initial_lock_state) != 0;
                                                    std::string::~string((void *)(v2 + 4704));
                                                    *(_DWORD *)(((v2 + 4704) >> 3) + 0x7FFF8000) = -117901064;
                                                    std::allocator<char>::~allocator(v2 + 656);
                                                    *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) = -8;
                                                    if ( v91 )
                                                    {
                                                      *(_DWORD *)(((v2 + 4768) >> 3) + 0x7FFF8000) = 0;
                                                      if ( *(char *)(((v2 + 4768) >> 3) + 0x7FFF8000) < 0
                                                        || *(_BYTE *)(((v2 + 4799) >> 3) + 0x7FFF8000) != 0
                                                        && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 4799) >> 3)
                                                                                             + 0x7FFF8000) )
                                                      {
                                                        __asan_report_store_n(v2 + 4768, 32LL);
                                                      }
                                                      common::milog::MiLogStream::create(
                                                        (common::milog::MiLogStream *)(v2 + 4768),
                                                        &common::milog::MiLogDefault::default_log_obj_,
                                                        4u,
                                                        "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
                                                        "init",
                                                        395);
                                                      v92 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                              (common::milog::MiLogStream *const)(v2 + 4768),
                                                              (const char (*)[16])"[CONFIG_ERROR] ");
                                                      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                                        v92,
                                                        (const char (*)[39])byte_1A15D960);
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
LABEL_146:
  std::string::~string((void *)(v2 + 864));
  if ( v101 == (char *)v2 )
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
    __asan_stack_free_7(v2, 5440LL, v101);
  }
  return v7;
};

// Line 403: range 000000000CC3BA28-000000000CC3C268
int32_t __cdecl data::WeaponLevelExcelConfig::init(
        data::WeaponLevelExcelConfig *const this,
        const common::tools::TxtFile::Row *row)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r14
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  bool v8; // r14
  unsigned int *v9; // r14
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
                        " 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 256 12 col_name:404";
  *(_QWORD *)(v2 + 16) = data::WeaponLevelExcelConfig::init;
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
    byte_1A127B60,
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
      "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
      "init",
      408);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 160),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v6, (const char (*)[27])byte_1A14A300);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    result = -1;
    goto LABEL_18;
  }
  std::vector<unsigned int>::resize(&this->required_exps, 5uLL);
  array_count = 0;
  for ( i = 0; ; ++i )
  {
    if ( i > 4 )
    {
      std::vector<unsigned int>::resize(&this->required_exps, array_count);
      result = 0;
      goto LABEL_18;
    }
    snprintf((char *)(v2 + 416), 0x100uLL, &byte_1A15DA80, i + 1);
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
  v9 = std::vector<unsigned int>::operator[](&this->required_exps, i);
  *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 80);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 288),
    (const char *)(v2 + 416),
    (const std::allocator<char> *)(v2 + 80));
  LOBYTE(v9) = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 288), v9) != 0;
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
    "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
    "init",
    420);
  v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v2 + 352),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v10, (const char (*)[14])byte_1A143560);
  v12 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(v11, (const char (*)[256])(v2 + 416));
  common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])byte_1A1435A0);
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

// Line 432: range 000000000CC3C26A-000000000CC3E0AE
int32_t __cdecl data::WeaponPromoteExcelConfig::init(
        data::WeaponPromoteExcelConfig *const this,
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
  unsigned int *p_id; // r15
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  bool v15; // r15
  unsigned int *p_count; // r15
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  bool v20; // r15
  common::milog::MiLogStream *v21; // rax
  bool v22; // r15
  data::FightPropType *p_prop_type; // r15
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  bool v27; // r15
  float *p_value; // r15
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  bool v32; // r15
  common::milog::MiLogStream *v33; // rax
  bool v34; // r15
  common::milog::MiLogStream *v35; // rax
  int32_t v36; // ebx
  uint32_t array_count; // [rsp+14h] [rbp-7FCh]
  uint32_t array_counta; // [rsp+14h] [rbp-7FCh]
  uint32_t i; // [rsp+18h] [rbp-7F8h]
  uint32_t i_0; // [rsp+1Ch] [rbp-7F4h]
  char v42[2032]; // [rsp+20h] [rbp-7F0h] BYREF

  v2 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1984LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "36 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 <unkn"
                        "own> 224 1 9 <unknown> 240 1 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown"
                        "> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown>"
                        " 768 32 9 <unknown> 832 32 9 <unknown> 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown>"
                        " 1088 32 9 <unknown> 1152 32 9 <unknown> 1216 32 9 <unknown> 1280 32 9 <unknown> 1344 32 9 <unkn"
                        "own> 1408 32 9 <unknown> 1472 32 9 <unknown> 1536 32 9 <unknown> 1600 32 9 <unknown> 1664 256 12 col_name:433";
  *(_QWORD *)(v2 + 16) = data::WeaponPromoteExcelConfig::init;
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
  v4[536862780] = -202116109;
  v4[536862781] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 256),
    &byte_1A15D560,
    (const std::allocator<char> *)(v2 + 48));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
         row,
         (const std::string *)(v2 + 256),
         &this->weapon_promote_id) != 0;
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
      "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
      "init",
      437);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 320),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v6, (const char (*)[35])byte_1A15D5A0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
    v7 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 384),
      &byte_1A15DD80,
      (const std::allocator<char> *)(v2 + 64));
    v8 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
           row,
           (const std::string *)(v2 + 384),
           &this->promote_level) != 0;
    std::string::~string((void *)(v2 + 384));
    *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
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
        "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
        "init",
        442);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 448),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v9, (const char (*)[33])byte_1A15DDC0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
      v7 = -1;
    }
    else
    {
      std::vector<data::IdCountConfig>::resize(&this->cost_items, 5uLL);
      array_count = 0;
      for ( i = 0; i <= 4; ++i )
      {
        snprintf((char *)(v2 + 1664), 0x100uLL, asc_1A143520, i + 1);
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 512),
          (const char *)(v2 + 1664),
          (const std::allocator<char> *)(v2 + 80));
        v10 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 512));
        std::string::~string((void *)(v2 + 512));
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( !v10 )
        {
          p_id = &std::vector<data::IdCountConfig>::operator[](&this->cost_items, i)->id;
          *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 96);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 576),
            (const char *)(v2 + 1664),
            (const std::allocator<char> *)(v2 + 96));
          LOBYTE(p_id) = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                           row,
                           (const std::string *)(v2 + 576),
                           p_id) != 0;
          std::string::~string((void *)(v2 + 576));
          *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 96);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( (_BYTE)p_id )
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
              "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
              "init",
              454);
            v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 640),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v12,
                    (const char (*)[14])byte_1A143560);
            v14 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                    v13,
                    (const char (*)[256])(v2 + 1664));
            common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])byte_1A1435A0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 640));
            v7 = -1;
            goto LABEL_53;
          }
          snprintf((char *)(v2 + 1664), 0x100uLL, asc_1A1435E0, i + 1);
          *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 112);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 704),
            (const char *)(v2 + 1664),
            (const std::allocator<char> *)(v2 + 112));
          v15 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 704));
          std::string::~string((void *)(v2 + 704));
          *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( !v15 )
          {
            p_count = &std::vector<data::IdCountConfig>::operator[](&this->cost_items, i)->count;
            *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 128);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 768),
              (const char *)(v2 + 1664),
              (const std::allocator<char> *)(v2 + 128));
            LOBYTE(p_count) = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                row,
                                (const std::string *)(v2 + 768),
                                p_count) != 0;
            std::string::~string((void *)(v2 + 768));
            *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 128);
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
            if ( (_BYTE)p_count )
            {
              *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 832) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 863) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 863) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 832, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 832),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
                "init",
                462);
              v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 832),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v18 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v17,
                      (const char (*)[14])byte_1A143560);
              v19 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                      v18,
                      (const char (*)[256])(v2 + 1664));
              common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v19, (const char (*)[7])byte_1A1435A0);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 832));
              v7 = -1;
              goto LABEL_53;
            }
            array_count = i + 1;
          }
        }
      }
      std::vector<data::IdCountConfig>::resize(&this->cost_items, array_count);
      *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 144);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 896),
        &byte_1A15DE20,
        (const std::allocator<char> *)(v2 + 144));
      v20 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
              row,
              (const std::string *)(v2 + 896),
              &this->coin_cost) != 0;
      std::string::~string((void *)(v2 + 896));
      *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 144);
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
      if ( v20 )
      {
        *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 960) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 991) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 991) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 960, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 960),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
          "init",
          471);
        v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 960),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v21, (const char (*)[39])byte_1A15DE60);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 960));
        v7 = -1;
      }
      else
      {
        std::vector<data::PropValConfig>::resize(&this->add_props, 5uLL);
        array_counta = 0;
        for ( i_0 = 0; i_0 <= 4; ++i_0 )
        {
          snprintf((char *)(v2 + 1664), 0x100uLL, asc_1A14B2A0, i_0 + 1);
          *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 160);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1024),
            (const char *)(v2 + 1664),
            (const std::allocator<char> *)(v2 + 160));
          v22 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 1024));
          std::string::~string((void *)(v2 + 1024));
          *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 160);
          *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
          if ( !v22 )
          {
            p_prop_type = &std::vector<data::PropValConfig>::operator[](&this->add_props, i_0)->prop_type;
            *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 176);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1088),
              (const char *)(v2 + 1664),
              (const std::allocator<char> *)(v2 + 176));
            LOBYTE(p_prop_type) = common::tools::TxtFile::Row::assignToEnum<data::FightPropType>(
                                    row,
                                    (const std::string *)(v2 + 1088),
                                    p_prop_type) != 0;
            std::string::~string((void *)(v2 + 1088));
            *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 176);
            *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
            if ( (_BYTE)p_prop_type )
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
                "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
                "init",
                483);
              v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1152),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v25 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v24,
                      (const char (*)[14])byte_1A143560);
              v26 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                      v25,
                      (const char (*)[256])(v2 + 1664));
              common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v26, (const char (*)[7])byte_1A1435A0);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1152));
              v7 = -1;
              goto LABEL_53;
            }
            snprintf((char *)(v2 + 1664), 0x100uLL, asc_1A14B2E0, i_0 + 1);
            *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 192);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1216),
              (const char *)(v2 + 1664),
              (const std::allocator<char> *)(v2 + 192));
            v27 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 1216));
            std::string::~string((void *)(v2 + 1216));
            *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 192);
            *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
            if ( !v27 )
            {
              p_value = &std::vector<data::PropValConfig>::operator[](&this->add_props, i_0)->value;
              *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 208);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1280),
                (const char *)(v2 + 1664),
                (const std::allocator<char> *)(v2 + 208));
              LOBYTE(p_value) = common::tools::TxtFile::Row::assignToNum<float>(
                                  row,
                                  (const std::string *)(v2 + 1280),
                                  p_value) != 0;
              std::string::~string((void *)(v2 + 1280));
              *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 208);
              *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
              if ( (_BYTE)p_value )
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
                  "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
                  "init",
                  491);
                v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1344),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v30 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                        v29,
                        (const char (*)[14])byte_1A143560);
                v31 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                        v30,
                        (const char (*)[256])(v2 + 1664));
                common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v31, (const char (*)[7])byte_1A1435A0);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1344));
                v7 = -1;
                goto LABEL_53;
              }
              array_counta = i_0 + 1;
            }
          }
        }
        std::vector<data::PropValConfig>::resize(&this->add_props, array_counta);
        *(_DWORD *)(((v2 + 1408) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 224);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 1408),
          &byte_1A15DEC0,
          (const std::allocator<char> *)(v2 + 224));
        v32 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                row,
                (const std::string *)(v2 + 1408),
                &this->unlock_max_level) != 0;
        std::string::~string((void *)(v2 + 1408));
        *(_DWORD *)(((v2 + 1408) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 224);
        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
        if ( v32 )
        {
          *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 1472) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 1503) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 1503) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 1472, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 1472),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
            "init",
            500);
          v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 1472),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v33, (const char (*)[48])byte_1A15DF00);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1472));
          v7 = -1;
        }
        else
        {
          *(_DWORD *)(((v2 + 1536) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 240);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1536),
            &byte_1A15DF60,
            (const std::allocator<char> *)(v2 + 240));
          v34 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                  row,
                  (const std::string *)(v2 + 1536),
                  &this->required_player_level) != 0;
          std::string::~string((void *)(v2 + 1536));
          *(_DWORD *)(((v2 + 1536) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 240);
          *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
          if ( v34 )
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
              "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
              "init",
              505);
            v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 1600),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v35, (const char (*)[39])byte_1A15DFA0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1600));
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
LABEL_53:
  v36 = v7;
  if ( v42 == (char *)v2 )
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF804C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8054) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF805C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8064) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF806C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8074) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF807C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8084) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF808C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8094) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF809C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80A4) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80AC) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80B4) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80BC) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80C4) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80CC) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80F0) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1984LL, v42);
  }
  return v36;
};

// Line 514: range 000000000CC3E0B0-000000000CC3F154
int32_t __cdecl data::WeaponExcelConfigMgrBase::loadWeaponExcelConfig(
        data::WeaponExcelConfigMgrBase *const this,
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
  data::WeaponExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::WeaponExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::WeaponExcelConfig>,false,false>,bool> v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  _DWORD *v30; // rax
  int v31; // edx
  char *i; // r14
  std::string *__for_begin; // [rsp+28h] [rbp-86D8h]
  const common::tools::TxtFile::Row *row_ptr; // [rsp+48h] [rbp-86B8h]
  char v37[34480]; // [rsp+50h] [rbp-86B0h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_10(34432LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 5 r:529 64 4 9 <unknown> 80 32 9 paths:515 144 32 9 <unknown> 208 32 9 "
                        "<unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 256 8 "
                        "data:532 848 376 24 debug_message_stream:540 1296 32880 12 txt_file:523";
  *(_QWORD *)(v3 + 16) = data::WeaponExcelConfigMgrBase::loadWeaponExcelConfig;
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
  v5[536862744] = -219021312;
  v5[536862745] = -218959118;
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
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 80),
    "/txt/WeaponData.txt",
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
    __asan_unpoison_stack_memory(v3 + 1296, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v3 + 1296));
    v7 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v3 + 1296), v7) )
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
        "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
        "loadWeaponExcelConfig",
        526);
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v3 + 208),
             (const char (*)[8])byte_1A1445A0);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1A1445E0);
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
        v12 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v3 + 1296));
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
        if ( v12 <= *(_DWORD *)(v3 + 48) )
          break;
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v3 + 1296), *(_DWORD *)(v3 + 48));
        v13 = (_DWORD *)(((v3 + 528) >> 3) + 2147450880);
        *v13 = 0;
        v13[1] = 0;
        v13[2] = 0;
        v13[3] = 0;
        v13[4] = 0;
        v13[5] = 0;
        v13[6] = 0;
        v13[7] = 0;
        data::WeaponExcelConfig::WeaponExcelConfig((data::WeaponExcelConfig *const)(v3 + 528));
        if ( row_ptr )
        {
          if ( data::WeaponExcelConfig::init((data::WeaponExcelConfig *const)(v3 + 528), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 848, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 848);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 848, &unk_1A144CE0);
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
              "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
              "loadWeaponExcelConfig",
              542);
            v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 336),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v18 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v17, (const char (*)[2])"<");
            v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, __for_begin);
            v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v19,
                    (const char (*)[11])byte_1A1446E0);
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
                    (const char (*)[13])byte_1A144720);
            *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 400) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 81) & 7) >= *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 400, 32LL);
            }
            std::ostringstream::str(v3 + 400, v3 + 848);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, (const std::string *)(v3 + 400));
            std::string::~string((void *)(v3 + 400));
            *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
            *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            std::ostringstream::~ostringstream(v3 + 848);
            __asan_poison_stack_memory(v3 + 848, 376LL);
            v15 = 0;
          }
          else
          {
            v24 = std::move<data::WeaponExcelConfig &>((data::WeaponExcelConfig *)(v3 + 528));
            v27 = std::unordered_map<unsigned int,data::WeaponExcelConfig>::emplace<unsigned int &,data::WeaponExcelConfig>(
                    &this->weapon_excel_config_map,
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
                "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
                "loadWeaponExcelConfig",
                547);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 464),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v28, (const char (*)[9])byte_1A144D20);
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
            "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
            "loadWeaponExcelConfig",
            535);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 272),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
          *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::WeaponExcelConfig::~WeaponExcelConfig((data::WeaponExcelConfig *const)(v3 + 528));
        v30 = (_DWORD *)(((v3 + 528) >> 3) + 2147450880);
        *v30 = -117901064;
        v30[1] = -117901064;
        v30[2] = -117901064;
        v30[3] = -117901064;
        v30[4] = -117901064;
        v30[5] = -117901064;
        v30[6] = -117901064;
        v30[7] = -117901064;
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
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v3 + 1296));
    __asan_poison_stack_memory(v3 + 1296, 32880LL);
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF90C8) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 4304) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_10(v3, 34432LL, v37);
  }
  return v2;
};

// Line 556: range 000000000CC3F156-000000000CC40126
int32_t __cdecl data::WeaponExcelConfigMgrBase::loadWeaponLevelExcelConfig(
        data::WeaponExcelConfigMgrBase *const this,
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
  data::WeaponLevelExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::WeaponLevelExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::WeaponLevelExcelConfig>,false,false>,bool> v27; // rax
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
  *(_QWORD *)(v3 + 8) = "13 48 1 9 <unknown> 64 4 5 r:571 80 4 9 <unknown> 96 32 9 paths:557 160 32 9 <unknown> 224 32 9 "
                        "<unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 40 8 d"
                        "ata:574 624 376 24 debug_message_stream:582 1072 32880 12 txt_file:565";
  *(_QWORD *)(v3 + 16) = data::WeaponExcelConfigMgrBase::loadWeaponLevelExcelConfig;
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
    "/txt/WeaponLevelData.txt",
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
        "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
        "loadWeaponLevelExcelConfig",
        568);
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v3 + 224),
             (const char (*)[8])byte_1A1445A0);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1A1445E0);
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
        data::WeaponLevelExcelConfig::WeaponLevelExcelConfig((data::WeaponLevelExcelConfig *const)(v3 + 544));
        if ( row_ptr )
        {
          if ( data::WeaponLevelExcelConfig::init((data::WeaponLevelExcelConfig *const)(v3 + 544), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 624, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 624);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 624, &unk_1A1551A0);
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
              "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
              "loadWeaponLevelExcelConfig",
              584);
            v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 352),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v18 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v17, (const char (*)[2])"<");
            v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, __for_begin);
            v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v19,
                    (const char (*)[11])byte_1A1446E0);
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
                    (const char (*)[13])byte_1A144720);
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
            v24 = std::move<data::WeaponLevelExcelConfig &>((data::WeaponLevelExcelConfig *)(v3 + 544));
            v27 = std::unordered_map<unsigned int,data::WeaponLevelExcelConfig>::emplace<unsigned int &,data::WeaponLevelExcelConfig>(
                    &this->weapon_level_excel_config_map,
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
                "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
                "loadWeaponLevelExcelConfig",
                589);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 480),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v28,
                      (const char (*)[12])byte_1A1551E0);
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
            "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
            "loadWeaponLevelExcelConfig",
            577);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 288),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::WeaponLevelExcelConfig::~WeaponLevelExcelConfig((data::WeaponLevelExcelConfig *const)(v3 + 544));
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

// Line 598: range 000000000CC40128-000000000CC41552
int32_t __cdecl data::WeaponExcelConfigMgrBase::loadWeaponPromoteExcelConfig(
        data::WeaponExcelConfigMgrBase *const this,
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
  data::WeaponPromoteExcelConfig *v40; // rax
  data::WeaponPromoteExcelConfig *v41; // rdx
  unsigned __int64 v42; // rax
  int v43; // edx
  char *j; // r14
  std::string *__for_begin; // [rsp+20h] [rbp-86C0h]
  size_t i; // [rsp+28h] [rbp-86B8h]
  const common::tools::TxtFile::Row *row_ptr; // [rsp+48h] [rbp-8698h]
  std::map<std::string,short unsigned int> *__for_range_0; // [rsp+50h] [rbp-8690h]
  std::_Rb_tree_iterator<std::pair<const std::string,short unsigned int> >::reference v51; // [rsp+58h] [rbp-8688h]
  std::tuple_element<0,std::pair<const std::string,short unsigned int> >::type *col_name; // [rsp+60h] [rbp-8680h]
  std::tuple_element<1,const std::pair<const std::string,short unsigned int> >::type *col_id; // [rsp+68h] [rbp-8678h]
  char v54[34416]; // [rsp+70h] [rbp-8670h] BYREF

  v3 = (unsigned __int64)v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_10(34368LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "17 32 1 9 <unknown> 48 4 5 r:613 64 4 9 <unknown> 80 8 15 __for_begin:628 112 8 13 __for_end:628"
                        " 144 8 9 <unknown> 176 8 5 i:632 208 32 9 paths:599 272 32 9 <unknown> 336 32 9 <unknown> 400 32"
                        " 9 <unknown> 464 32 9 <unknown> 528 32 9 <unknown> 592 48 19 col_id_name_map:627 672 80 8 data:6"
                        "16 784 376 24 debug_message_stream:624 1232 32880 12 txt_file:607";
  *(_QWORD *)(v3 + 16) = data::WeaponExcelConfigMgrBase::loadWeaponPromoteExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = 61956;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862724] = -234881024;
  v5[536862725] = 62194;
  v5[536862725] = -234881024;
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
  v5[536862740] = -218959118;
  v5[536862743] = -219021312;
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
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 208),
    "/txt/WeaponPromoteData.txt",
    (const std::allocator<char> *)(v3 + 32));
  std::allocator<char>::~allocator(v3 + 32);
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  for ( __for_begin = (std::string *)(v3 + 208); __for_begin != (std::string *)(v3 + 240); ++__for_begin )
  {
    *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
    p_real_data_base_dir = &config->real_data_base_dir;
    if ( *(char *)(((v3 + 272) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) )
    {
      p_real_data_base_dir = (std::string *)32;
      __asan_report_store_n(v3 + 272, 32LL);
    }
    std::operator+<char>((std::string *)(v3 + 272), p_real_data_base_dir, __for_begin);
    std::string::operator=(__for_begin, v3 + 272);
    std::string::~string((void *)(v3 + 272));
    *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
    __asan_unpoison_stack_memory(v3 + 1232, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v3 + 1232));
    v7 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v3 + 1232), v7) )
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
        "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
        "loadWeaponPromoteExcelConfig",
        610);
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v3 + 336),
             (const char (*)[8])byte_1A1445A0);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1A1445E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
      *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
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
        v12 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v3 + 1232));
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
        if ( v12 <= *(_DWORD *)(v3 + 48) )
          break;
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v3 + 1232), *(_DWORD *)(v3 + 48));
        v13 = ((v3 + 672) >> 3) + 2147450880;
        *(_DWORD *)v13 = 0;
        *(_DWORD *)(v13 + 4) = 0;
        *(_WORD *)(v13 + 8) = 0;
        data::WeaponPromoteExcelConfig::WeaponPromoteExcelConfig((data::WeaponPromoteExcelConfig *const)(v3 + 672));
        if ( row_ptr )
        {
          if ( data::WeaponPromoteExcelConfig::init((data::WeaponPromoteExcelConfig *const)(v3 + 672), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 784, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 784);
            if ( *(_BYTE *)(((unsigned __int64)&row_ptr->col_name_map_ptr >> 3) + 0x7FFF8000) )
              __asan_report_load8(&row_ptr->col_name_map_ptr);
            if ( row_ptr->col_name_map_ptr )
            {
              v16 = ((v3 + 592) >> 3) + 2147450880;
              *(_DWORD *)v16 = 0;
              *(_WORD *)(v16 + 4) = 0;
              std::map<unsigned long,std::string>::map((std::map<long unsigned int,std::string> *const)(v3 + 592));
              if ( *(_BYTE *)(((unsigned __int64)&row_ptr->col_name_map_ptr >> 3) + 0x7FFF8000) )
                __asan_report_load8(&row_ptr->col_name_map_ptr);
              __for_range_0 = row_ptr->col_name_map_ptr;
              *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v3 + 80, 376LL);
              *(std::map<std::string,short unsigned int>::iterator *)(v3 + 80) = std::map<std::string,unsigned short>::begin(__for_range_0);
              *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v3 + 112, 376LL);
              *(std::map<std::string,short unsigned int>::iterator *)(v3 + 112) = std::map<std::string,unsigned short>::end(__for_range_0);
              while ( std::operator!=(
                        (const std::_Rb_tree_iterator<std::pair<const std::string,short unsigned int> >::_Self *)(v3 + 80),
                        (const std::_Rb_tree_iterator<std::pair<const std::string,short unsigned int> >::_Self *)(v3 + 112)) )
              {
                v51 = std::_Rb_tree_iterator<std::pair<std::string const,unsigned short>>::operator*((const std::_Rb_tree_iterator<std::pair<const std::string,short unsigned int> > *const)(v3 + 80));
                col_name = std::get<0ul,std::string const,unsigned short>(v51);
                v17 = (std::tuple_element<1,const std::pair<const std::string,short unsigned int> >::type *)std::get<1ul,std::string const,unsigned short>(v51);
                col_id = v17;
                *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
                v18 = ((unsigned __int8)v17 & 7u) + 1;
                if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v17 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load2(v17);
                }
                v19 = *col_id;
                if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
                  __asan_report_store8(v3 + 144, v18);
                *(_QWORD *)(v3 + 144) = v19;
                v20 = std::map<unsigned long,std::string>::operator[](
                        (std::map<long unsigned int,std::string> *const)(v3 + 592),
                        (std::map<long unsigned int,std::string>::key_type *)(v3 + 144));
                std::string::operator=(v20, col_name);
                *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
                std::_Rb_tree_iterator<std::pair<std::string const,unsigned short>>::operator++((std::_Rb_tree_iterator<std::pair<const std::string,short unsigned int> > *const)(v3 + 80));
              }
              *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v3 + 176, v3 + 112);
              for ( *(_QWORD *)(v3 + 176) = 0LL; ; ++*(_QWORD *)(v3 + 176) )
              {
                v21 = std::vector<std::string>::size(&row_ptr->data_vec);
                if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v3 + 176);
                if ( v21 <= *(_QWORD *)(v3 + 176) )
                  break;
                if ( *(_QWORD *)(v3 + 176) )
                  v22 = " ";
                else
                  v22 = byte_1A0D8BA0;
                v23 = std::operator<<<std::char_traits<char>>(v3 + 784, v22);
                v24 = std::map<unsigned long,std::string>::operator[](
                        (std::map<long unsigned int,std::string> *const)(v3 + 592),
                        (const std::map<long unsigned int,std::string>::key_type *)(v3 + 176));
                v25 = std::operator<<<char>(v23, v24);
                v26 = std::operator<<<std::char_traits<char>>(v25, &off_1A147560);
                p_data_vec = &row_ptr->data_vec;
                if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v3 + 176);
                v28 = std::vector<std::string>::operator[](p_data_vec, *(_QWORD *)(v3 + 176));
                std::operator<<<char>(v26, v28);
                if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v3 + 176);
              }
              *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
              std::map<unsigned long,std::string>::~map((std::map<long unsigned int,std::string> *const)(v3 + 592));
              v29 = ((v3 + 592) >> 3) + 2147450880;
              *(_DWORD *)v29 = -117901064;
              *(_WORD *)(v29 + 4) = -1800;
            }
            else
            {
              for ( i = 0LL; i < std::vector<std::string>::size(&row_ptr->data_vec); ++i )
              {
                if ( i )
                  v30 = (const char *)&unk_1A1475A0;
                else
                  v30 = byte_1A0D8BA0;
                v31 = std::operator<<<std::char_traits<char>>(v3 + 784, v30);
                v32 = std::vector<std::string>::operator[](&row_ptr->data_vec, i);
                std::operator<<<char>(v31, v32);
              }
            }
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
              "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
              "loadWeaponPromoteExcelConfig",
              644);
            v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 464),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v34 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v33, (const char (*)[2])"<");
            v35 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v34, __for_begin);
            v36 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v35,
                    (const char (*)[11])byte_1A1446E0);
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 48);
            v37 = (unsigned int)(*(_DWORD *)(v3 + 48) + 1);
            if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v3 + 64, v37);
            *(_DWORD *)(v3 + 64) = v37;
            v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v36,
                    (const unsigned int *)(v3 + 64));
            v39 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v38,
                    (const char (*)[13])byte_1A144720);
            *(_DWORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 528) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 559) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 559) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 528, 32LL);
            }
            std::ostringstream::str(v3 + 528, v3 + 784);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v39, (const std::string *)(v3 + 528));
            std::string::~string((void *)(v3 + 528));
            *(_DWORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 464));
            *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            std::ostringstream::~ostringstream(v3 + 784);
            __asan_poison_stack_memory(v3 + 784, 376LL);
            v15 = 0;
          }
          else
          {
            v40 = std::move<data::WeaponPromoteExcelConfig &>((data::WeaponPromoteExcelConfig *)(v3 + 672));
            std::vector<data::WeaponPromoteExcelConfig>::emplace_back<data::WeaponPromoteExcelConfig>(
              &this->weapon_promote_excel_config_vec,
              v40,
              v41);
            v15 = 1;
          }
        }
        else
        {
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
            "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
            "loadWeaponPromoteExcelConfig",
            619);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 400),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 400));
          *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::WeaponPromoteExcelConfig::~WeaponPromoteExcelConfig((data::WeaponPromoteExcelConfig *const)(v3 + 672));
        v42 = ((v3 + 672) >> 3) + 2147450880;
        *(_DWORD *)v42 = -117901064;
        *(_DWORD *)(v42 + 4) = -117901064;
        *(_WORD *)(v42 + 8) = -1800;
        if ( v15 != 1 )
        {
          v43 = 0;
          goto LABEL_76;
        }
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
      }
      v43 = 1;
LABEL_76:
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      v10 = v43 == 1;
    }
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v3 + 1232));
    __asan_poison_stack_memory(v3 + 1232, 32880LL);
    if ( !v10 )
      goto LABEL_80;
  }
  v2 = 0;
LABEL_80:
  for ( j = (char *)(v3 + 240); j != (char *)(v3 + 208); std::string::~string(j) )
    j -= 32;
  if ( v54 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF90C0) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 4296) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_10(v3, 34368LL, v54);
  }
  return v2;
};

// Line 654: range 000000000CC41554-000000000CC419C9
int32_t __cdecl data::WeaponExcelConfigMgrBase::loadConfig(
        data::WeaponExcelConfigMgrBase *const this,
        HK4EDesignConfig *config)
{
  common::milog::MiLogStream *v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  char v9[256]; // [rsp+10h] [rbp-100h] BYREF

  v2 = (common::milog::MiLogStream *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = (common::milog::MiLogStream *)v3;
  }
  v2->log_ = (common::milog::MiLog *)1102416563;
  v2->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"3 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown>";
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)data::WeaponExcelConfigMgrBase::loadConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  if ( data::WeaponExcelConfigMgrBase::loadWeaponExcelConfig(this, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[1] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[1].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[1].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[1], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 1,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
      "loadConfig",
      657);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      v5,
      (const char (*)[29])"loadWeaponExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( data::WeaponExcelConfigMgrBase::loadWeaponLevelExcelConfig(this, config) )
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
      "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
      "loadConfig",
      662);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      v7,
      (const char (*)[34])"loadWeaponLevelExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( data::WeaponExcelConfigMgrBase::loadWeaponPromoteExcelConfig(this, config) )
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
      "./src/txt_data_auto/WeaponExcelConfig.gen.cpp",
      "loadConfig",
      667);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      v8,
      (const char (*)[36])"loadWeaponPromoteExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v9 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    v2->log_ = (common::milog::MiLog *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 674: range 000000000CC419CA-000000000CC419DC
int32_t __cdecl data::WeaponExcelConfigMgrBase::rewriteConfig(
        data::WeaponExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 679: range 000000000CC419DE-000000000CC419F0
int32_t __cdecl data::WeaponExcelConfigMgrBase::finalConfig(
        data::WeaponExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 684: range 000000000CC419F2-000000000CC41BAD
data::WeaponExcelConfig *__fastcall data::WeaponExcelConfigMgrBase::findWeaponExcelConfig(
        data::WeaponExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::WeaponExcelConfigMap *p_weapon_excel_config_map; // rdx
  data::WeaponExcelConfigMap *v6; // rdx
  bool v7; // al
  data::WeaponExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:683 64 8 8 iter:685 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::WeaponExcelConfigMgrBase::findWeaponExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_weapon_excel_config_map = &this->weapon_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::WeaponExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::WeaponExcelConfig>::find(
                                                                                       p_weapon_excel_config_map,
                                                                                       (const std::unordered_map<unsigned int,data::WeaponExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->weapon_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::WeaponExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::WeaponExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::WeaponExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WeaponExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WeaponExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::WeaponExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::WeaponExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 697: range 000000000CC41BAE-000000000CC41D69
const data::WeaponExcelConfig *__fastcall data::WeaponExcelConfigMgrBase::findWeaponExcelConfig(
        const data::WeaponExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::WeaponExcelConfigMap *p_weapon_excel_config_map; // rdx
  data::WeaponExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::WeaponExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:696 64 8 8 iter:698 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::WeaponExcelConfigMgrBase::findWeaponExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_weapon_excel_config_map = &this->weapon_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::WeaponExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::WeaponExcelConfig>::find(
                                                                                             p_weapon_excel_config_map,
                                                                                             (const std::unordered_map<unsigned int,data::WeaponExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->weapon_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::WeaponExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::WeaponExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::WeaponExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WeaponExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WeaponExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WeaponExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WeaponExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 710: range 000000000CC41D6A-000000000CC41F25
data::WeaponLevelExcelConfig *__fastcall data::WeaponExcelConfigMgrBase::findWeaponLevelExcelConfig(
        data::WeaponExcelConfigMgrBase *const this,
        __int64 level)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::WeaponLevelExcelConfigMap *p_weapon_level_excel_config_map; // rdx
  data::WeaponLevelExcelConfigMap *v6; // rdx
  bool v7; // al
  data::WeaponLevelExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 9 level:709 64 8 8 iter:711 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::WeaponExcelConfigMgrBase::findWeaponLevelExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = level;
  p_weapon_level_excel_config_map = &this->weapon_level_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, level);
  *(std::unordered_map<unsigned int,data::WeaponLevelExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::WeaponLevelExcelConfig>::find(
                                                                                            p_weapon_level_excel_config_map,
                                                                                            (const std::unordered_map<unsigned int,data::WeaponLevelExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->weapon_level_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::WeaponLevelExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::WeaponLevelExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::WeaponLevelExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WeaponLevelExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WeaponLevelExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::WeaponLevelExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::WeaponLevelExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 723: range 000000000CC41F26-000000000CC420E1
const data::WeaponLevelExcelConfig *__fastcall data::WeaponExcelConfigMgrBase::findWeaponLevelExcelConfig(
        const data::WeaponExcelConfigMgrBase *const this,
        __int64 level)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::WeaponLevelExcelConfigMap *p_weapon_level_excel_config_map; // rdx
  data::WeaponLevelExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::WeaponLevelExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 9 level:722 64 8 8 iter:724 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::WeaponExcelConfigMgrBase::findWeaponLevelExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = level;
  p_weapon_level_excel_config_map = &this->weapon_level_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, level);
  *(std::unordered_map<unsigned int,data::WeaponLevelExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::WeaponLevelExcelConfig>::find(
                                                                                                  p_weapon_level_excel_config_map,
                                                                                                  (const std::unordered_map<unsigned int,data::WeaponLevelExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->weapon_level_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::WeaponLevelExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::WeaponLevelExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::WeaponLevelExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WeaponLevelExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WeaponLevelExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WeaponLevelExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WeaponLevelExcelConfig>,false,false> *const)(v2 + 64))->second;
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

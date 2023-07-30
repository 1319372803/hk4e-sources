// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ForgeExcelConfig.gen.cpp

// Line 12: range 000000001435D4C4-000000001435D837
const char *__fastcall data::enumValToStr(data::ForgeUnlockMethod e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::ForgeUnlockMethod,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::ForgeUnlockMethod,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
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
  map = data::getForgeUnlockMethodEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::ForgeUnlockMethod,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::ForgeUnlockMethod,std::pair<std::string,std::string>>::find(map, (const std::map<data::ForgeUnlockMethod,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::ForgeUnlockMethod,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::ForgeUnlockMethod,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::ForgeUnlockMethod,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::ForgeUnlockMethod,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/ForgeExcelConfig.gen.cpp",
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
    result = "INVALID_ForgeUnlockMethod";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::ForgeUnlockMethod const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::ForgeUnlockMethod,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 24: range 000000001435D838-000000001435DDF0
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::ForgeUnlockMethod>,false,true>::pointer v10; // rax
  data::ForgeUnlockMethod second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::ForgeUnlockMethod> *m; // [rsp+18h] [rbp-188h]
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
    m = data::getForgeUnlockMethodNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::ForgeUnlockMethod>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ForgeUnlockMethod>::find(
                                                                                              m,
                                                                                              (const std::unordered_map<std::string,data::ForgeUnlockMethod>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::ForgeUnlockMethod>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::ForgeUnlockMethod>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::ForgeUnlockMethod>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ForgeUnlockMethod>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ForgeUnlockMethod>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/ForgeExcelConfig.gen.cpp",
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
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::ForgeUnlockMethod>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::ForgeUnlockMethod>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/ForgeExcelConfig.gen.cpp",
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

// Line 45: range 000000001435DDF1-000000001435E7BA
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::ForgeUnlockMethod> *i; // r14
  unsigned __int64 v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::ForgeUnlockMethod>,false,true>::pointer v12; // rax
  data::ForgeUnlockMethod second; // ecx
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::ForgeUnlockMethod &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::ForgeUnlockMethod &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, e);
      *(_DWORD *)(v2 + 112) = 1;
      std::pair<std::string const,data::ForgeUnlockMethod>::pair<char const(&)[13],data::ForgeUnlockMethod,true>(
        (std::pair<const std::string,data::ForgeUnlockMethod> *const)(v2 + 432),
        (const char (*)[13])byte_1AD4DE60,
        (data::ForgeUnlockMethod *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1AD4DE60);
      *(_DWORD *)(v2 + 128) = 2;
      std::pair<std::string const,data::ForgeUnlockMethod>::pair<char const(&)[13],data::ForgeUnlockMethod,true>(
        (std::pair<const std::string,data::ForgeUnlockMethod> *const)(v2 + 472),
        (const char (*)[13])byte_1AD4DEA0,
        (data::ForgeUnlockMethod *)(v2 + 128));
      std::allocator<std::pair<std::string const,data::ForgeUnlockMethod>>::allocator((std::allocator<std::pair<const std::string,data::ForgeUnlockMethod> > *const)(v2 + 80));
      std::unordered_map<std::string,data::ForgeUnlockMethod>::unordered_map(
        &data::enumStrToVal(char const*,data::ForgeUnlockMethod &)::m,
        (std::initializer_list<std::pair<const std::string,data::ForgeUnlockMethod> >)__PAIR128__(2LL, v2 + 432),
        0LL,
        (const std::unordered_map<std::string,data::ForgeUnlockMethod>::hasher *)(v2 + 48),
        (const std::unordered_map<std::string,data::ForgeUnlockMethod>::key_equal *)(v2 + 64),
        (const std::unordered_map<std::string,data::ForgeUnlockMethod>::allocator_type *)(v2 + 80));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::ForgeUnlockMethod &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::ForgeUnlockMethod>::~unordered_map,
        &data::enumStrToVal(char const*,data::ForgeUnlockMethod &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::ForgeUnlockMethod>>::~allocator((std::allocator<std::pair<const std::string,data::ForgeUnlockMethod> > *const)(v2 + 80));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::ForgeUnlockMethod> *)(v2 + 512);
            i != (std::pair<const std::string,data::ForgeUnlockMethod> *)(v2 + 432);
            std::pair<std::string const,data::ForgeUnlockMethod>::~pair(i) )
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
    *(std::unordered_map<std::string,data::ForgeUnlockMethod>::iterator *)(v2 + 144) = std::unordered_map<std::string,data::ForgeUnlockMethod>::find(
                                                                                         &data::enumStrToVal(char const*,data::ForgeUnlockMethod &)::m,
                                                                                         (const std::unordered_map<std::string,data::ForgeUnlockMethod>::key_type *)(v2 + 304));
    std::string::~string((void *)(v2 + 304));
    *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 96);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, v2 + 304);
    *(std::unordered_map<std::string,data::ForgeUnlockMethod>::iterator *)(v2 + 176) = std::unordered_map<std::string,data::ForgeUnlockMethod>::end(&data::enumStrToVal(char const*,data::ForgeUnlockMethod &)::m);
    v9 = (char *)(v2 + 176);
    v10 = std::__detail::operator==<std::pair<std::string const,data::ForgeUnlockMethod>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ForgeUnlockMethod>,true> *)(v2 + 144),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ForgeUnlockMethod>,true> *)(v2 + 176));
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
        "./src/txt_data_auto/ForgeExcelConfig.gen.cpp",
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
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::ForgeUnlockMethod>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::ForgeUnlockMethod>,false,true> *const)(v2 + 144));
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
      "./src/txt_data_auto/ForgeExcelConfig.gen.cpp",
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

// Line 70: range 000000001435E7BB-000000001435E7D1
const char *__cdecl data::getDescription(data::ForgeUnlockMethod e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 75: range 000000001435E7D2-000000001435E987
bool __cdecl data::isValidForgeUnlockMethod(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::ForgeUnlockMethod,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::ForgeUnlockMethod,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidForgeUnlockMethod;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getForgeUnlockMethodEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::ForgeUnlockMethod,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::ForgeUnlockMethod,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getForgeUnlockMethodEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::ForgeUnlockMethod,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::ForgeUnlockMethod,std::pair<std::string,std::string>>::find(v6, (const std::map<data::ForgeUnlockMethod,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::ForgeUnlockMethod,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::ForgeUnlockMethod,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 81: range 000000001435E988-000000001435EAE9
bool __cdecl data::isValidForgeUnlockMethodName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::ForgeUnlockMethod> *v5; // rcx
  const std::unordered_map<std::string,data::ForgeUnlockMethod> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidForgeUnlockMethodName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getForgeUnlockMethodNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::ForgeUnlockMethod>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ForgeUnlockMethod>::end(v5);
  v6 = data::getForgeUnlockMethodNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::ForgeUnlockMethod>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::ForgeUnlockMethod>::find(
                                                                                            v6,
                                                                                            name);
  result = std::__detail::operator!=<std::pair<std::string const,data::ForgeUnlockMethod>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ForgeUnlockMethod>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ForgeUnlockMethod>,true> *)(v2 + 64));
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

// Line 86: range 000000001435EAEA-000000001435EFAC
const std::unordered_map<std::string,data::ForgeUnlockMethod> *__cdecl data::getForgeUnlockMethodNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::ForgeUnlockMethod> *i; // r14
  const std::unordered_map<std::string,data::ForgeUnlockMethod> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getForgeUnlockMethodNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556927;
  v3[536862723] = -234556924;
  v3[536862727] = -218103808;
  v3[536862728] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getForgeUnlockMethodNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getForgeUnlockMethodNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string const,data::ForgeUnlockMethod>::pair<char const(&)[18],data::ForgeUnlockMethod,true>(
      (std::pair<const std::string,data::ForgeUnlockMethod> *const)(v1 + 128),
      (const char (*)[18])"FORGE_UNLOCK_NONE",
      (data::ForgeUnlockMethod *)(v1 + 80));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, "FORGE_UNLOCK_NONE");
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string const,data::ForgeUnlockMethod>::pair<char const(&)[19],data::ForgeUnlockMethod,true>(
      (std::pair<const std::string,data::ForgeUnlockMethod> *const)(v1 + 168),
      (const char (*)[19])"FORGE_UNLOCK_QUEST",
      (data::ForgeUnlockMethod *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "FORGE_UNLOCK_QUEST");
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string const,data::ForgeUnlockMethod>::pair<char const(&)[21],data::ForgeUnlockMethod,true>(
      (std::pair<const std::string,data::ForgeUnlockMethod> *const)(v1 + 208),
      (const char (*)[21])"FORGE_UNLOCK_FORMULA",
      (data::ForgeUnlockMethod *)(v1 + 112));
    std::allocator<std::pair<std::string const,data::ForgeUnlockMethod>>::allocator((std::allocator<std::pair<const std::string,data::ForgeUnlockMethod> > *const)(v1 + 64));
    std::unordered_map<std::string,data::ForgeUnlockMethod>::unordered_map(
      &data::getForgeUnlockMethodNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::ForgeUnlockMethod> >)__PAIR128__(3LL, v1 + 128),
      0LL,
      (const std::unordered_map<std::string,data::ForgeUnlockMethod>::hasher *)(v1 + 32),
      (const std::unordered_map<std::string,data::ForgeUnlockMethod>::key_equal *)(v1 + 48),
      (const std::unordered_map<std::string,data::ForgeUnlockMethod>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getForgeUnlockMethodNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::ForgeUnlockMethod>::~unordered_map,
      &data::getForgeUnlockMethodNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::ForgeUnlockMethod>>::~allocator((std::allocator<std::pair<const std::string,data::ForgeUnlockMethod> > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::ForgeUnlockMethod> *)(v1 + 248);
          i != (std::pair<const std::string,data::ForgeUnlockMethod> *)(v1 + 128);
          std::pair<std::string const,data::ForgeUnlockMethod>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getForgeUnlockMethodNameMap[abi:cxx11](void)::m;
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

// Line 97: range 000000001435EFAD-000000001435F6AB
const std::map<data::ForgeUnlockMethod,std::pair<std::string,std::string >> *__cdecl data::getForgeUnlockMethodEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::ForgeUnlockMethod,std::pair<std::string,std::string > > *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getForgeUnlockMethodEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getForgeUnlockMethodEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getForgeUnlockMethodEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[18],true>(
      (std::pair<std::string,std::string > *const)(v1 + 128),
      (const char (*)[1])byte_1ACFAB80,
      (const char (*)[18])"FORGE_UNLOCK_NONE");
    std::pair<data::ForgeUnlockMethod const,std::pair<std::string,std::string>>::pair<data::ForgeUnlockMethod,true>(
      (std::pair<const data::ForgeUnlockMethod,std::pair<std::string,std::string > > *const)(v1 + 416),
      (data::ForgeUnlockMethod *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[19],true>(
      (std::pair<std::string,std::string > *const)(v1 + 224),
      (const char (*)[13])byte_1AD4DE60,
      (const char (*)[19])"FORGE_UNLOCK_QUEST");
    std::pair<data::ForgeUnlockMethod const,std::pair<std::string,std::string>>::pair<data::ForgeUnlockMethod,true>(
      (std::pair<const data::ForgeUnlockMethod,std::pair<std::string,std::string > > *const)(v1 + 488),
      (data::ForgeUnlockMethod *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 224));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[21],true>(
      (std::pair<std::string,std::string > *const)(v1 + 320),
      (const char (*)[13])byte_1AD4DEA0,
      (const char (*)[21])"FORGE_UNLOCK_FORMULA");
    std::pair<data::ForgeUnlockMethod const,std::pair<std::string,std::string>>::pair<data::ForgeUnlockMethod,true>(
      (std::pair<const data::ForgeUnlockMethod,std::pair<std::string,std::string > > *const)(v1 + 560),
      (data::ForgeUnlockMethod *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 320));
    std::allocator<std::pair<data::ForgeUnlockMethod const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::ForgeUnlockMethod,std::pair<std::string,std::string > > > *const)(v1 + 64));
    std::map<data::ForgeUnlockMethod,std::pair<std::string,std::string>>::map(
      &data::getForgeUnlockMethodEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::ForgeUnlockMethod,std::pair<std::string,std::string > > >)__PAIR128__(3LL, v1 + 416),
      (const std::less<data::ForgeUnlockMethod> *)(v1 + 48),
      (const std::map<data::ForgeUnlockMethod,std::pair<std::string,std::string >>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getForgeUnlockMethodEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::ForgeUnlockMethod,std::pair<std::string,std::string>>::~map,
      &data::getForgeUnlockMethodEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::ForgeUnlockMethod const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::ForgeUnlockMethod,std::pair<std::string,std::string > > > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::ForgeUnlockMethod,std::pair<std::string,std::string > > *)(v1 + 632);
          i != (std::pair<const data::ForgeUnlockMethod,std::pair<std::string,std::string > > *)(v1 + 416);
          std::pair<data::ForgeUnlockMethod const,std::pair<std::string,std::string>>::~pair(i) )
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
  return &data::getForgeUnlockMethodEnumMap[abi:cxx11](void)::m;
};

// Line 109: range 000000001435F6AC-000000001435FEEC
int32_t __cdecl data::ForgeUnlockConfig::init(
        data::ForgeUnlockConfig *const this,
        const common::tools::TxtFile::Row *row)
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
                        " 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 256 12 col_name:110";
  *(_QWORD *)(v2 + 16) = data::ForgeUnlockConfig::init;
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
    &byte_1AD4E060,
    (const std::allocator<char> *)(v2 + 48));
  v5 = common::tools::TxtFile::Row::assignToEnum<data::ForgeUnlockMethod>(
         row,
         (const std::string *)(v2 + 96),
         &this->unlock_method) != 0;
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
      "./src/txt_data_auto/ForgeExcelConfig.gen.cpp",
      "init",
      114);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 160),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v6, (const char (*)[27])byte_1AD4E0A0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    result = -1;
    goto LABEL_18;
  }
  std::vector<std::string>::resize(&this->unlock_param, 2uLL);
  array_count = 0;
  for ( i = 0; ; ++i )
  {
    if ( i > 1 )
    {
      std::vector<std::string>::resize(&this->unlock_param, array_count);
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
  v9 = std::vector<std::string>::operator[](&this->unlock_param, i);
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
    "./src/txt_data_auto/ForgeExcelConfig.gen.cpp",
    "init",
    126);
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

// Line 138: range 000000001435FEEE-0000000014364B4D
int32_t __cdecl data::ForgeExcelConfig::init(
        data::ForgeExcelConfig *const this,
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
  unsigned __int64 v14; // rax
  _DWORD *v15; // rax
  bool v16; // r15
  unsigned __int64 v17; // rax
  char *j; // r14
  _DWORD *v19; // rax
  common::milog::MiLogStream *v20; // rax
  bool v21; // r14
  common::milog::MiLogStream *v22; // rax
  bool v23; // r14
  common::milog::MiLogStream *v24; // rax
  bool v25; // r14
  common::milog::MiLogStream *v26; // rax
  bool v27; // r14
  common::milog::MiLogStream *v28; // rax
  bool v29; // r14
  common::milog::MiLogStream *v30; // rax
  bool v31; // r14
  common::milog::MiLogStream *v32; // rax
  bool v33; // r14
  common::milog::MiLogStream *v34; // rax
  bool v35; // r14
  unsigned int *p_item_id; // r14
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  bool v40; // r14
  unsigned int *p_count; // r14
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  bool v45; // r14
  unsigned int *p_weight; // r14
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  bool v50; // r14
  unsigned int *p_id; // r14
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  bool v55; // r14
  unsigned int *v56; // r14
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  bool v60; // r14
  common::milog::MiLogStream *v61; // rax
  bool v62; // r14
  common::milog::MiLogStream *v63; // rax
  bool v64; // r14
  common::milog::MiLogStream *v65; // rax
  unsigned __int64 v66; // rax
  _DWORD *v67; // rax
  bool v68; // r15
  unsigned __int64 v69; // rax
  char *k; // r14
  _DWORD *v71; // rax
  common::milog::MiLogStream *v72; // rax
  bool t; // [rsp+0h] [rbp-11F0h]
  bool ta; // [rsp+0h] [rbp-11F0h]
  bool tb; // [rsp+0h] [rbp-11F0h]
  bool tc; // [rsp+0h] [rbp-11F0h]
  bool td; // [rsp+0h] [rbp-11F0h]
  std::string *te; // [rsp+0h] [rbp-11F0h]
  bool tf; // [rsp+0h] [rbp-11F0h]
  std::initializer_list<std::string > __l; // [rsp+10h] [rbp-11E0h]
  uint32_t array_count; // [rsp+30h] [rbp-11C0h]
  uint32_t array_counta; // [rsp+30h] [rbp-11C0h]
  uint32_t array_countb; // [rsp+30h] [rbp-11C0h]
  uint32_t i; // [rsp+34h] [rbp-11BCh]
  uint32_t i_0; // [rsp+38h] [rbp-11B8h]
  uint32_t i_1; // [rsp+3Ch] [rbp-11B4h]
  char v88[4528]; // [rsp+40h] [rbp-11B0h] BYREF

  v2 = (unsigned __int64)v88;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_7(4480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "89 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 <unkn"
                        "own> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 288 1 9 <unknown> 3"
                        "04 1 9 <unknown> 320 1 9 <unknown> 336 1 9 <unknown> 352 1 9 <unknown> 368 1 9 <unknown> 384 1 9"
                        " <unknown> 400 1 9 <unknown> 416 1 9 <unknown> 432 1 9 <unknown> 448 1 9 <unknown> 464 1 9 <unkn"
                        "own> 480 1 9 <unknown> 496 1 9 <unknown> 512 1 9 <unknown> 528 1 9 <unknown> 544 1 9 <unknown> 5"
                        "60 1 9 <unknown> 576 24 9 <unknown> 640 24 9 <unknown> 704 32 11 val_str:141 768 32 9 <unknown> "
                        "832 32 9 <unknown> 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 <unknown>"
                        " 1152 32 9 <unknown> 1216 32 9 <unknown> 1280 32 9 <unknown> 1344 32 9 <unknown> 1408 32 9 <unkn"
                        "own> 1472 32 9 <unknown> 1536 32 9 <unknown> 1600 32 9 <unknown> 1664 32 9 <unknown> 1728 32 9 <"
                        "unknown> 1792 32 9 <unknown> 1856 32 9 <unknown> 1920 32 9 <unknown> 1984 32 9 <unknown> 2048 32"
                        " 9 <unknown> 2112 32 9 <unknown> 2176 32 9 <unknown> 2240 32 9 <unknown> 2304 32 9 <unknown> 236"
                        "8 32 9 <unknown> 2432 32 9 <unknown> 2496 32 9 <unknown> 2560 32 9 <unknown> 2624 32 9 <unknown>"
                        " 2688 32 9 <unknown> 2752 32 9 <unknown> 2816 32 9 <unknown> 2880 32 9 <unknown> 2944 32 9 <unkn"
                        "own> 3008 32 9 <unknown> 3072 32 9 <unknown> 3136 32 9 <unknown> 3200 32 9 <unknown> 3264 32 9 <"
                        "unknown> 3328 32 9 <unknown> 3392 32 9 <unknown> 3456 32 9 <unknown> 3520 32 9 <unknown> 3584 32"
                        " 9 <unknown> 3648 32 9 <unknown> 3712 32 9 <unknown> 3776 32 9 <unknown> 3840 32 9 <unknown> 390"
                        "4 32 9 <unknown> 3968 64 9 <unknown> 4064 64 9 <unknown> 4160 256 12 col_name:139";
  *(_QWORD *)(v2 + 16) = data::ForgeExcelConfig::init;
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
  v4[536862738] = -234881024;
  v4[536862739] = -218959118;
  v4[536862740] = -234881024;
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
  v4[536862801] = -218959118;
  v4[536862803] = -218959118;
  v4[536862805] = -218959118;
  v4[536862807] = -218959118;
  v4[536862809] = -218959118;
  v4[536862811] = -218959118;
  v4[536862813] = -218959118;
  v4[536862815] = -218959118;
  v4[536862817] = -218959118;
  v4[536862819] = -218959118;
  v4[536862821] = -218959118;
  v4[536862823] = -218959118;
  v4[536862825] = -218959118;
  v4[536862827] = -218959118;
  v4[536862829] = -218959118;
  v4[536862831] = -218959118;
  v4[536862833] = -218959118;
  v4[536862835] = -218959118;
  v4[536862837] = -218959118;
  v4[536862839] = -218959118;
  v4[536862841] = -218959118;
  v4[536862843] = -218959118;
  v4[536862846] = -218959118;
  v4[536862849] = -218959118;
  v4[536862858] = -202116109;
  v4[536862859] = -202116109;
  std::string::basic_string(v2 + 704);
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 768),
    &byte_1AD4E7A0,
    (const std::allocator<char> *)(v2 + 48));
  t = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 768), &this->id) != 0;
  std::string::~string((void *)(v2 + 768));
  *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( t )
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
      "./src/txt_data_auto/ForgeExcelConfig.gen.cpp",
      "init",
      144);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 832),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v5, (const char (*)[29])byte_1AD4E7E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 832));
    *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 896),
      &byte_1AD4E820,
      (const std::allocator<char> *)(v2 + 64));
    ta = common::tools::TxtFile::Row::assignToNum<unsigned int>(
           row,
           (const std::string *)(v2 + 896),
           &this->player_level) != 0;
    std::string::~string((void *)(v2 + 896));
    *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( ta )
    {
      *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 960) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 991) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 991) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 960, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 960),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_auto/ForgeExcelConfig.gen.cpp",
        "init",
        149);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 960),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v7, (const char (*)[33])byte_1AD4E860);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 960));
      *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 1024),
        &byte_1AD41240,
        (const std::allocator<char> *)(v2 + 80));
      tb = common::tools::TxtFile::Row::assignToNum<bool>(row, (const std::string *)(v2 + 1024), &this->is_default_show) != 0;
      std::string::~string((void *)(v2 + 1024));
      *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( tb )
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
          "./src/txt_data_auto/ForgeExcelConfig.gen.cpp",
          "init",
          154);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 1088),
               (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v8, (const char (*)[33])byte_1AD41280);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1088));
        *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 1152),
          &byte_1AD4E8C0,
          (const std::allocator<char> *)(v2 + 96));
        tc = common::tools::TxtFile::Row::assignToEnum<data::ForgeUnlockMethod>(
               row,
               (const std::string *)(v2 + 1152),
               &this->unlock_config.unlock_method) != 0;
        std::string::~string((void *)(v2 + 1152));
        *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( tc )
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
            "./src/txt_data_auto/ForgeExcelConfig.gen.cpp",
            "init",
            159);
          v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v2 + 1216),
                 (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v9, (const char (*)[33])byte_1AD4E900);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1216));
          *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = -117901064;
          v6 = -1;
        }
        else
        {
          std::vector<std::string>::resize(&this->unlock_config.unlock_param, 2uLL);
          array_count = 0;
          for ( i = 0; i <= 1; ++i )
          {
            snprintf((char *)(v2 + 4160), 0x100uLL, &byte_1AD4E960, i + 1);
            *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 112);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1280),
              (const char *)(v2 + 4160),
              (const std::allocator<char> *)(v2 + 112));
            td = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 1280));
            std::string::~string((void *)(v2 + 1280));
            *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 112);
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
            if ( !td )
            {
              te = std::vector<std::string>::operator[](&this->unlock_config.unlock_param, i);
              *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 128);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1344),
                (const char *)(v2 + 4160),
                (const std::allocator<char> *)(v2 + 128));
              LOBYTE(te) = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 1344), te) != 0;
              std::string::~string((void *)(v2 + 1344));
              *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 128);
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
              if ( (_BYTE)te )
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
                  "./src/txt_data_auto/ForgeExcelConfig.gen.cpp",
                  "init",
                  171);
                v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1408),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                        v10,
                        (const char (*)[14])byte_1AD38B80);
                v12 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                        v11,
                        (const char (*)[256])(v2 + 4160));
                common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])byte_1AD38BC0);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1408));
                *(_DWORD *)(((v2 + 1408) >> 3) + 0x7FFF8000) = -117901064;
                v6 = -1;
                goto LABEL_121;
              }
              array_count = i + 1;
            }
          }
          std::vector<std::string>::resize(&this->unlock_config.unlock_param, array_count);
          *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 144);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1472),
            &byte_1AD4E9A0,
            (const std::allocator<char> *)(v2 + 144));
          tf = common::tools::TxtFile::Row::assignToStr(
                 row,
                 (const std::string *)(v2 + 1472),
                 (std::string *)(v2 + 704)) != 0;
          std::string::~string((void *)(v2 + 1472));
          *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 144);
          *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
          if ( tf )
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
              "./src/txt_data_auto/ForgeExcelConfig.gen.cpp",
              "init",
              180);
            v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 1536),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v13, (const char (*)[42])byte_1AD4E9E0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1536));
            *(_DWORD *)(((v2 + 1536) >> 3) + 0x7FFF8000) = -117901064;
            v6 = -1;
          }
          else
          {
            v14 = ((v2 + 576) >> 3) + 2147450880;
            *(_WORD *)v14 = 0;
            *(_BYTE *)(v14 + 2) = 0;
            v15 = (_DWORD *)(((v2 + 3968) >> 3) + 2147450880);
            *v15 = 0;
            v15[1] = 0;
            *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 160);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 3968),
              ";",
              (const std::allocator<char> *)(v2 + 160));
            *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 176);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 4000),
              ",",
              (const std::allocator<char> *)(v2 + 176));
            *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
            std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 192));
            std::vector<std::string>::vector(
              (std::vector<std::string> *const)(v2 + 576),
              (std::initializer_list<std::string >)__PAIR128__(2LL, v2 + 3968),
              (const std::vector<std::string>::allocator_type *)(v2 + 192));
            v16 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                    (const std::string *)(v2 + 704),
                    (const std::vector<std::string> *)(v2 + 576),
                    &this->effective_world_levels,
                    1) != 0;
            std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 576));
            v17 = ((v2 + 576) >> 3) + 2147450880;
            *(_WORD *)v17 = -1800;
            *(_BYTE *)(v17 + 2) = -8;
            std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 192));
            *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
            for ( j = (char *)(v2 + 4032); j != (char *)(v2 + 3968); std::string::~string(j) )
              j -= 32;
            v19 = (_DWORD *)(((v2 + 3968) >> 3) + 2147450880);
            *v19 = -117901064;
            v19[1] = -117901064;
            std::allocator<char>::~allocator(v2 + 176);
            *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
            std::allocator<char>::~allocator(v2 + 160);
            *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
            if ( v16 )
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
                "./src/txt_data_auto/ForgeExcelConfig.gen.cpp",
                "init",
                185);
              v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1600),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v20, (const char (*)[42])byte_1AD4E9E0);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1600));
              *(_DWORD *)(((v2 + 1600) >> 3) + 0x7FFF8000) = -117901064;
              v6 = -1;
            }
            else
            {
              *(_DWORD *)(((v2 + 1664) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 208);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1664),
                &byte_1AD4EA40,
                (const std::allocator<char> *)(v2 + 208));
              v21 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                      row,
                      (const std::string *)(v2 + 1664),
                      &this->forge_type) != 0;
              std::string::~string((void *)(v2 + 1664));
              *(_DWORD *)(((v2 + 1664) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 208);
              *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
              if ( v21 )
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
                  "./src/txt_data_auto/ForgeExcelConfig.gen.cpp",
                  "init",
                  190);
                v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1728),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v22, (const char (*)[33])byte_1AD4EA80);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1728));
                *(_DWORD *)(((v2 + 1728) >> 3) + 0x7FFF8000) = -117901064;
                v6 = -1;
              }
              else
              {
                *(_DWORD *)(((v2 + 1792) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 224);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1792),
                  &byte_1AD4EAE0,
                  (const std::allocator<char> *)(v2 + 224));
                v23 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                        row,
                        (const std::string *)(v2 + 1792),
                        &this->result_item_id) != 0;
                std::string::~string((void *)(v2 + 1792));
                *(_DWORD *)(((v2 + 1792) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 224);
                *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                if ( v23 )
                {
                  *(_DWORD *)(((v2 + 1856) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 1856) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 1887) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 1887) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 1856, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 1856),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_auto/ForgeExcelConfig.gen.cpp",
                    "init",
                    195);
                  v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 1856),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    v24,
                    (const char (*)[33])byte_1AD4EB20);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1856));
                  *(_DWORD *)(((v2 + 1856) >> 3) + 0x7FFF8000) = -117901064;
                  v6 = -1;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1920) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 240);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1920),
                    &byte_1AD4EB80,
                    (const std::allocator<char> *)(v2 + 240));
                  v25 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                          row,
                          (const std::string *)(v2 + 1920),
                          &this->result_item_count) != 0;
                  std::string::~string((void *)(v2 + 1920));
                  *(_DWORD *)(((v2 + 1920) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 240);
                  *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                  if ( v25 )
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
                      "./src/txt_data_auto/ForgeExcelConfig.gen.cpp",
                      "init",
                      200);
                    v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 1984),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                      v26,
                      (const char (*)[33])byte_1AD4EBC0);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1984));
                    *(_DWORD *)(((v2 + 1984) >> 3) + 0x7FFF8000) = -117901064;
                    v6 = -1;
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 2048) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 256);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 2048),
                      &byte_1AD4EC20,
                      (const std::allocator<char> *)(v2 + 256));
                    v27 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                            row,
                            (const std::string *)(v2 + 2048),
                            &this->main_random_drop_id) != 0;
                    std::string::~string((void *)(v2 + 2048));
                    *(_DWORD *)(((v2 + 2048) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 256);
                    *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                    if ( v27 )
                    {
                      *(_DWORD *)(((v2 + 2112) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 2112) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 2143) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 2143) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 2112, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 2112),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/txt_data_auto/ForgeExcelConfig.gen.cpp",
                        "init",
                        205);
                      v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 2112),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                        v28,
                        (const char (*)[42])byte_1AD4EC60);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2112));
                      *(_DWORD *)(((v2 + 2112) >> 3) + 0x7FFF8000) = -117901064;
                      v6 = -1;
                    }
                    else
                    {
                      *(_DWORD *)(((v2 + 2176) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 272);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 2176),
                        &byte_1AD4ECC0,
                        (const std::allocator<char> *)(v2 + 272));
                      v29 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                              row,
                              (const std::string *)(v2 + 2176),
                              &this->forge_time) != 0;
                      std::string::~string((void *)(v2 + 2176));
                      *(_DWORD *)(((v2 + 2176) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 272);
                      *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                      if ( v29 )
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
                          "./src/txt_data_auto/ForgeExcelConfig.gen.cpp",
                          "init",
                          210);
                        v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                (common::milog::MiLogStream *const)(v2 + 2240),
                                (const char (*)[16])"[CONFIG_ERROR] ");
                        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                          v30,
                          (const char (*)[33])byte_1AD4ED00);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2240));
                        *(_DWORD *)(((v2 + 2240) >> 3) + 0x7FFF8000) = -117901064;
                        v6 = -1;
                      }
                      else
                      {
                        *(_DWORD *)(((v2 + 2304) >> 3) + 0x7FFF8000) = 0;
                        *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 288);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 2304),
                          &byte_1AD4ED60,
                          (const std::allocator<char> *)(v2 + 288));
                        v31 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                row,
                                (const std::string *)(v2 + 2304),
                                &this->queue_num) != 0;
                        std::string::~string((void *)(v2 + 2304));
                        *(_DWORD *)(((v2 + 2304) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 288);
                        *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
                        if ( v31 )
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
                            "./src/txt_data_auto/ForgeExcelConfig.gen.cpp",
                            "init",
                            215);
                          v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                  (common::milog::MiLogStream *const)(v2 + 2368),
                                  (const char (*)[16])"[CONFIG_ERROR] ");
                          common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                            v32,
                            (const char (*)[39])byte_1AD4EDA0);
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2368));
                          *(_DWORD *)(((v2 + 2368) >> 3) + 0x7FFF8000) = -117901064;
                          v6 = -1;
                        }
                        else
                        {
                          *(_DWORD *)(((v2 + 2432) >> 3) + 0x7FFF8000) = 0;
                          *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 1;
                          std::allocator<char>::allocator(v2 + 304);
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)(v2 + 2432),
                            &byte_1AD4EE00,
                            (const std::allocator<char> *)(v2 + 304));
                          v33 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                  row,
                                  (const std::string *)(v2 + 2432),
                                  &this->scoin_cost) != 0;
                          std::string::~string((void *)(v2 + 2432));
                          *(_DWORD *)(((v2 + 2432) >> 3) + 0x7FFF8000) = -117901064;
                          std::allocator<char>::~allocator(v2 + 304);
                          *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
                          if ( v33 )
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
                              "./src/txt_data_auto/ForgeExcelConfig.gen.cpp",
                              "init",
                              220);
                            v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                    (common::milog::MiLogStream *const)(v2 + 2496),
                                    (const char (*)[16])"[CONFIG_ERROR] ");
                            common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                              v34,
                              (const char (*)[33])byte_1AD4EE40);
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2496));
                            *(_DWORD *)(((v2 + 2496) >> 3) + 0x7FFF8000) = -117901064;
                            v6 = -1;
                          }
                          else
                          {
                            std::vector<data::RandomItemConfig>::resize(&this->random_items, 2uLL);
                            array_counta = 0;
                            for ( i_0 = 0; i_0 <= 1; ++i_0 )
                            {
                              snprintf((char *)(v2 + 4160), 0x100uLL, &byte_1AD4EEA0, i_0 + 1);
                              *(_DWORD *)(((v2 + 2560) >> 3) + 0x7FFF8000) = 0;
                              *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 1;
                              std::allocator<char>::allocator(v2 + 320);
                              std::string::basic_string<std::allocator<char>>(
                                (std::string *const)(v2 + 2560),
                                (const char *)(v2 + 4160),
                                (const std::allocator<char> *)(v2 + 320));
                              v35 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 2560));
                              std::string::~string((void *)(v2 + 2560));
                              *(_DWORD *)(((v2 + 2560) >> 3) + 0x7FFF8000) = -117901064;
                              std::allocator<char>::~allocator(v2 + 320);
                              *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
                              if ( !v35 )
                              {
                                p_item_id = &std::vector<data::RandomItemConfig>::operator[](&this->random_items, i_0)->item_id;
                                *(_DWORD *)(((v2 + 2624) >> 3) + 0x7FFF8000) = 0;
                                *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 1;
                                std::allocator<char>::allocator(v2 + 336);
                                std::string::basic_string<std::allocator<char>>(
                                  (std::string *const)(v2 + 2624),
                                  (const char *)(v2 + 4160),
                                  (const std::allocator<char> *)(v2 + 336));
                                LOBYTE(p_item_id) = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                                      row,
                                                      (const std::string *)(v2 + 2624),
                                                      p_item_id) != 0;
                                std::string::~string((void *)(v2 + 2624));
                                *(_DWORD *)(((v2 + 2624) >> 3) + 0x7FFF8000) = -117901064;
                                std::allocator<char>::~allocator(v2 + 336);
                                *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
                                if ( (_BYTE)p_item_id )
                                {
                                  *(_DWORD *)(((v2 + 2688) >> 3) + 0x7FFF8000) = 0;
                                  if ( *(char *)(((v2 + 2688) >> 3) + 0x7FFF8000) < 0
                                    || *(_BYTE *)(((v2 + 2719) >> 3) + 0x7FFF8000) != 0
                                    && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 2719) >> 3) + 0x7FFF8000) )
                                  {
                                    __asan_report_store_n(v2 + 2688, 32LL);
                                  }
                                  common::milog::MiLogStream::create(
                                    (common::milog::MiLogStream *)(v2 + 2688),
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    4u,
                                    "./src/txt_data_auto/ForgeExcelConfig.gen.cpp",
                                    "init",
                                    232);
                                  v37 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                          (common::milog::MiLogStream *const)(v2 + 2688),
                                          (const char (*)[16])"[CONFIG_ERROR] ");
                                  v38 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                          v37,
                                          (const char (*)[14])byte_1AD38B80);
                                  v39 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                                          v38,
                                          (const char (*)[256])(v2 + 4160));
                                  common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                                    v39,
                                    (const char (*)[7])byte_1AD38BC0);
                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2688));
                                  *(_DWORD *)(((v2 + 2688) >> 3) + 0x7FFF8000) = -117901064;
                                  v6 = -1;
                                  goto LABEL_121;
                                }
                                snprintf((char *)(v2 + 4160), 0x100uLL, &byte_1AD4EEE0, i_0 + 1);
                                *(_DWORD *)(((v2 + 2752) >> 3) + 0x7FFF8000) = 0;
                                *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 1;
                                std::allocator<char>::allocator(v2 + 352);
                                std::string::basic_string<std::allocator<char>>(
                                  (std::string *const)(v2 + 2752),
                                  (const char *)(v2 + 4160),
                                  (const std::allocator<char> *)(v2 + 352));
                                v40 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 2752));
                                std::string::~string((void *)(v2 + 2752));
                                *(_DWORD *)(((v2 + 2752) >> 3) + 0x7FFF8000) = -117901064;
                                std::allocator<char>::~allocator(v2 + 352);
                                *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
                                if ( !v40 )
                                {
                                  p_count = &std::vector<data::RandomItemConfig>::operator[](&this->random_items, i_0)->count;
                                  *(_DWORD *)(((v2 + 2816) >> 3) + 0x7FFF8000) = 0;
                                  *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = 1;
                                  std::allocator<char>::allocator(v2 + 368);
                                  std::string::basic_string<std::allocator<char>>(
                                    (std::string *const)(v2 + 2816),
                                    (const char *)(v2 + 4160),
                                    (const std::allocator<char> *)(v2 + 368));
                                  LOBYTE(p_count) = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                                      row,
                                                      (const std::string *)(v2 + 2816),
                                                      p_count) != 0;
                                  std::string::~string((void *)(v2 + 2816));
                                  *(_DWORD *)(((v2 + 2816) >> 3) + 0x7FFF8000) = -117901064;
                                  std::allocator<char>::~allocator(v2 + 368);
                                  *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
                                  if ( (_BYTE)p_count )
                                  {
                                    *(_DWORD *)(((v2 + 2880) >> 3) + 0x7FFF8000) = 0;
                                    if ( *(char *)(((v2 + 2880) >> 3) + 0x7FFF8000) < 0
                                      || *(_BYTE *)(((v2 + 2911) >> 3) + 0x7FFF8000) != 0
                                      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 2911) >> 3) + 0x7FFF8000) )
                                    {
                                      __asan_report_store_n(v2 + 2880, 32LL);
                                    }
                                    common::milog::MiLogStream::create(
                                      (common::milog::MiLogStream *)(v2 + 2880),
                                      &common::milog::MiLogDefault::default_log_obj_,
                                      4u,
                                      "./src/txt_data_auto/ForgeExcelConfig.gen.cpp",
                                      "init",
                                      240);
                                    v42 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                            (common::milog::MiLogStream *const)(v2 + 2880),
                                            (const char (*)[16])"[CONFIG_ERROR] ");
                                    v43 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                            v42,
                                            (const char (*)[14])byte_1AD38B80);
                                    v44 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                                            v43,
                                            (const char (*)[256])(v2 + 4160));
                                    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                                      v44,
                                      (const char (*)[7])byte_1AD38BC0);
                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2880));
                                    *(_DWORD *)(((v2 + 2880) >> 3) + 0x7FFF8000) = -117901064;
                                    v6 = -1;
                                    goto LABEL_121;
                                  }
                                  snprintf((char *)(v2 + 4160), 0x100uLL, &byte_1AD4EF20, i_0 + 1);
                                  *(_DWORD *)(((v2 + 2944) >> 3) + 0x7FFF8000) = 0;
                                  *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 1;
                                  std::allocator<char>::allocator(v2 + 384);
                                  std::string::basic_string<std::allocator<char>>(
                                    (std::string *const)(v2 + 2944),
                                    (const char *)(v2 + 4160),
                                    (const std::allocator<char> *)(v2 + 384));
                                  v45 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 2944));
                                  std::string::~string((void *)(v2 + 2944));
                                  *(_DWORD *)(((v2 + 2944) >> 3) + 0x7FFF8000) = -117901064;
                                  std::allocator<char>::~allocator(v2 + 384);
                                  *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
                                  if ( !v45 )
                                  {
                                    p_weight = &std::vector<data::RandomItemConfig>::operator[](
                                                  &this->random_items,
                                                  i_0)->weight;
                                    *(_DWORD *)(((v2 + 3008) >> 3) + 0x7FFF8000) = 0;
                                    *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = 1;
                                    std::allocator<char>::allocator(v2 + 400);
                                    std::string::basic_string<std::allocator<char>>(
                                      (std::string *const)(v2 + 3008),
                                      (const char *)(v2 + 4160),
                                      (const std::allocator<char> *)(v2 + 400));
                                    LOBYTE(p_weight) = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                                         row,
                                                         (const std::string *)(v2 + 3008),
                                                         p_weight) != 0;
                                    std::string::~string((void *)(v2 + 3008));
                                    *(_DWORD *)(((v2 + 3008) >> 3) + 0x7FFF8000) = -117901064;
                                    std::allocator<char>::~allocator(v2 + 400);
                                    *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
                                    if ( (_BYTE)p_weight )
                                    {
                                      *(_DWORD *)(((v2 + 3072) >> 3) + 0x7FFF8000) = 0;
                                      if ( *(char *)(((v2 + 3072) >> 3) + 0x7FFF8000) < 0
                                        || *(_BYTE *)(((v2 + 3103) >> 3) + 0x7FFF8000) != 0
                                        && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 3103) >> 3) + 0x7FFF8000) )
                                      {
                                        __asan_report_store_n(v2 + 3072, 32LL);
                                      }
                                      common::milog::MiLogStream::create(
                                        (common::milog::MiLogStream *)(v2 + 3072),
                                        &common::milog::MiLogDefault::default_log_obj_,
                                        4u,
                                        "./src/txt_data_auto/ForgeExcelConfig.gen.cpp",
                                        "init",
                                        248);
                                      v47 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                              (common::milog::MiLogStream *const)(v2 + 3072),
                                              (const char (*)[16])"[CONFIG_ERROR] ");
                                      v48 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                              v47,
                                              (const char (*)[14])byte_1AD38B80);
                                      v49 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                                              v48,
                                              (const char (*)[256])(v2 + 4160));
                                      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                                        v49,
                                        (const char (*)[7])byte_1AD38BC0);
                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3072));
                                      *(_DWORD *)(((v2 + 3072) >> 3) + 0x7FFF8000) = -117901064;
                                      v6 = -1;
                                      goto LABEL_121;
                                    }
                                    array_counta = i_0 + 1;
                                  }
                                }
                              }
                            }
                            std::vector<data::RandomItemConfig>::resize(&this->random_items, array_counta);
                            std::vector<data::IdCountConfig>::resize(&this->material_items, 5uLL);
                            array_countb = 0;
                            for ( i_1 = 0; i_1 <= 4; ++i_1 )
                            {
                              snprintf((char *)(v2 + 4160), 0x100uLL, &byte_1AD4EF60, i_1 + 1);
                              *(_DWORD *)(((v2 + 3136) >> 3) + 0x7FFF8000) = 0;
                              *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = 1;
                              std::allocator<char>::allocator(v2 + 416);
                              std::string::basic_string<std::allocator<char>>(
                                (std::string *const)(v2 + 3136),
                                (const char *)(v2 + 4160),
                                (const std::allocator<char> *)(v2 + 416));
                              v50 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 3136));
                              std::string::~string((void *)(v2 + 3136));
                              *(_DWORD *)(((v2 + 3136) >> 3) + 0x7FFF8000) = -117901064;
                              std::allocator<char>::~allocator(v2 + 416);
                              *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
                              if ( !v50 )
                              {
                                p_id = &std::vector<data::IdCountConfig>::operator[](&this->material_items, i_1)->id;
                                *(_DWORD *)(((v2 + 3200) >> 3) + 0x7FFF8000) = 0;
                                *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = 1;
                                std::allocator<char>::allocator(v2 + 432);
                                std::string::basic_string<std::allocator<char>>(
                                  (std::string *const)(v2 + 3200),
                                  (const char *)(v2 + 4160),
                                  (const std::allocator<char> *)(v2 + 432));
                                LOBYTE(p_id) = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                                 row,
                                                 (const std::string *)(v2 + 3200),
                                                 p_id) != 0;
                                std::string::~string((void *)(v2 + 3200));
                                *(_DWORD *)(((v2 + 3200) >> 3) + 0x7FFF8000) = -117901064;
                                std::allocator<char>::~allocator(v2 + 432);
                                *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = -8;
                                if ( (_BYTE)p_id )
                                {
                                  *(_DWORD *)(((v2 + 3264) >> 3) + 0x7FFF8000) = 0;
                                  if ( *(char *)(((v2 + 3264) >> 3) + 0x7FFF8000) < 0
                                    || *(_BYTE *)(((v2 + 3295) >> 3) + 0x7FFF8000) != 0
                                    && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 3295) >> 3) + 0x7FFF8000) )
                                  {
                                    __asan_report_store_n(v2 + 3264, 32LL);
                                  }
                                  common::milog::MiLogStream::create(
                                    (common::milog::MiLogStream *)(v2 + 3264),
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    4u,
                                    "./src/txt_data_auto/ForgeExcelConfig.gen.cpp",
                                    "init",
                                    264);
                                  v52 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                          (common::milog::MiLogStream *const)(v2 + 3264),
                                          (const char (*)[16])"[CONFIG_ERROR] ");
                                  v53 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                          v52,
                                          (const char (*)[14])byte_1AD38B80);
                                  v54 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                                          v53,
                                          (const char (*)[256])(v2 + 4160));
                                  common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                                    v54,
                                    (const char (*)[7])byte_1AD38BC0);
                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3264));
                                  *(_DWORD *)(((v2 + 3264) >> 3) + 0x7FFF8000) = -117901064;
                                  v6 = -1;
                                  goto LABEL_121;
                                }
                                snprintf((char *)(v2 + 4160), 0x100uLL, &byte_1AD4EFA0, i_1 + 1);
                                *(_DWORD *)(((v2 + 3328) >> 3) + 0x7FFF8000) = 0;
                                *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = 1;
                                std::allocator<char>::allocator(v2 + 448);
                                std::string::basic_string<std::allocator<char>>(
                                  (std::string *const)(v2 + 3328),
                                  (const char *)(v2 + 4160),
                                  (const std::allocator<char> *)(v2 + 448));
                                v55 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 3328));
                                std::string::~string((void *)(v2 + 3328));
                                *(_DWORD *)(((v2 + 3328) >> 3) + 0x7FFF8000) = -117901064;
                                std::allocator<char>::~allocator(v2 + 448);
                                *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = -8;
                                if ( !v55 )
                                {
                                  v56 = &std::vector<data::IdCountConfig>::operator[](&this->material_items, i_1)->count;
                                  *(_DWORD *)(((v2 + 3392) >> 3) + 0x7FFF8000) = 0;
                                  *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = 1;
                                  std::allocator<char>::allocator(v2 + 464);
                                  std::string::basic_string<std::allocator<char>>(
                                    (std::string *const)(v2 + 3392),
                                    (const char *)(v2 + 4160),
                                    (const std::allocator<char> *)(v2 + 464));
                                  LOBYTE(v56) = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                                  row,
                                                  (const std::string *)(v2 + 3392),
                                                  v56) != 0;
                                  std::string::~string((void *)(v2 + 3392));
                                  *(_DWORD *)(((v2 + 3392) >> 3) + 0x7FFF8000) = -117901064;
                                  std::allocator<char>::~allocator(v2 + 464);
                                  *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = -8;
                                  if ( (_BYTE)v56 )
                                  {
                                    *(_DWORD *)(((v2 + 3456) >> 3) + 0x7FFF8000) = 0;
                                    if ( *(char *)(((v2 + 3456) >> 3) + 0x7FFF8000) < 0
                                      || *(_BYTE *)(((v2 + 3487) >> 3) + 0x7FFF8000) != 0
                                      && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 3487) >> 3) + 0x7FFF8000) )
                                    {
                                      __asan_report_store_n(v2 + 3456, 32LL);
                                    }
                                    common::milog::MiLogStream::create(
                                      (common::milog::MiLogStream *)(v2 + 3456),
                                      &common::milog::MiLogDefault::default_log_obj_,
                                      4u,
                                      "./src/txt_data_auto/ForgeExcelConfig.gen.cpp",
                                      "init",
                                      272);
                                    v57 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                            (common::milog::MiLogStream *const)(v2 + 3456),
                                            (const char (*)[16])"[CONFIG_ERROR] ");
                                    v58 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                            v57,
                                            (const char (*)[14])byte_1AD38B80);
                                    v59 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                                            v58,
                                            (const char (*)[256])(v2 + 4160));
                                    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                                      v59,
                                      (const char (*)[7])byte_1AD38BC0);
                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3456));
                                    *(_DWORD *)(((v2 + 3456) >> 3) + 0x7FFF8000) = -117901064;
                                    v6 = -1;
                                    goto LABEL_121;
                                  }
                                  array_countb = i_1 + 1;
                                }
                              }
                            }
                            std::vector<data::IdCountConfig>::resize(&this->material_items, array_countb);
                            *(_DWORD *)(((v2 + 3520) >> 3) + 0x7FFF8000) = 0;
                            *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = 1;
                            std::allocator<char>::allocator(v2 + 480);
                            std::string::basic_string<std::allocator<char>>(
                              (std::string *const)(v2 + 3520),
                              &byte_1AD4EFE0,
                              (const std::allocator<char> *)(v2 + 480));
                            v60 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                    row,
                                    (const std::string *)(v2 + 3520),
                                    &this->priority) != 0;
                            std::string::~string((void *)(v2 + 3520));
                            *(_DWORD *)(((v2 + 3520) >> 3) + 0x7FFF8000) = -117901064;
                            std::allocator<char>::~allocator(v2 + 480);
                            *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = -8;
                            if ( v60 )
                            {
                              *(_DWORD *)(((v2 + 3584) >> 3) + 0x7FFF8000) = 0;
                              if ( *(char *)(((v2 + 3584) >> 3) + 0x7FFF8000) < 0
                                || *(_BYTE *)(((v2 + 3615) >> 3) + 0x7FFF8000) != 0
                                && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 3615) >> 3) + 0x7FFF8000) )
                              {
                                __asan_report_store_n(v2 + 3584, 32LL);
                              }
                              common::milog::MiLogStream::create(
                                (common::milog::MiLogStream *)(v2 + 3584),
                                &common::milog::MiLogDefault::default_log_obj_,
                                4u,
                                "./src/txt_data_auto/ForgeExcelConfig.gen.cpp",
                                "init",
                                281);
                              v61 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                      (common::milog::MiLogStream *const)(v2 + 3584),
                                      (const char (*)[16])"[CONFIG_ERROR] ");
                              common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                                v61,
                                (const char (*)[36])byte_1AD4F020);
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3584));
                              *(_DWORD *)(((v2 + 3584) >> 3) + 0x7FFF8000) = -117901064;
                              v6 = -1;
                            }
                            else
                            {
                              *(_DWORD *)(((v2 + 3648) >> 3) + 0x7FFF8000) = 0;
                              *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = 1;
                              std::allocator<char>::allocator(v2 + 496);
                              std::string::basic_string<std::allocator<char>>(
                                (std::string *const)(v2 + 3648),
                                &byte_1AD4F080,
                                (const std::allocator<char> *)(v2 + 496));
                              v62 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                      row,
                                      (const std::string *)(v2 + 3648),
                                      &this->forge_point) != 0;
                              std::string::~string((void *)(v2 + 3648));
                              *(_DWORD *)(((v2 + 3648) >> 3) + 0x7FFF8000) = -117901064;
                              std::allocator<char>::~allocator(v2 + 496);
                              *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = -8;
                              if ( v62 )
                              {
                                *(_DWORD *)(((v2 + 3712) >> 3) + 0x7FFF8000) = 0;
                                if ( *(char *)(((v2 + 3712) >> 3) + 0x7FFF8000) < 0
                                  || *(_BYTE *)(((v2 + 3743) >> 3) + 0x7FFF8000) != 0
                                  && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 3743) >> 3) + 0x7FFF8000) )
                                {
                                  __asan_report_store_n(v2 + 3712, 32LL);
                                }
                                common::milog::MiLogStream::create(
                                  (common::milog::MiLogStream *)(v2 + 3712),
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  4u,
                                  "./src/txt_data_auto/ForgeExcelConfig.gen.cpp",
                                  "init",
                                  286);
                                v63 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                        (common::milog::MiLogStream *const)(v2 + 3712),
                                        (const char (*)[16])"[CONFIG_ERROR] ");
                                common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                  v63,
                                  (const char (*)[33])byte_1AD4F0C0);
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3712));
                                *(_DWORD *)(((v2 + 3712) >> 3) + 0x7FFF8000) = -117901064;
                                v6 = -1;
                              }
                              else
                              {
                                *(_DWORD *)(((v2 + 3776) >> 3) + 0x7FFF8000) = 0;
                                *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = 1;
                                std::allocator<char>::allocator(v2 + 512);
                                std::string::basic_string<std::allocator<char>>(
                                  (std::string *const)(v2 + 3776),
                                  &byte_1AD4F120,
                                  (const std::allocator<char> *)(v2 + 512));
                                v64 = common::tools::TxtFile::Row::assignToStr(
                                        row,
                                        (const std::string *)(v2 + 3776),
                                        (std::string *)(v2 + 704)) != 0;
                                std::string::~string((void *)(v2 + 3776));
                                *(_DWORD *)(((v2 + 3776) >> 3) + 0x7FFF8000) = -117901064;
                                std::allocator<char>::~allocator(v2 + 512);
                                *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = -8;
                                if ( v64 )
                                {
                                  *(_DWORD *)(((v2 + 3840) >> 3) + 0x7FFF8000) = 0;
                                  if ( *(char *)(((v2 + 3840) >> 3) + 0x7FFF8000) < 0
                                    || *(_BYTE *)(((v2 + 3871) >> 3) + 0x7FFF8000) != 0
                                    && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 3871) >> 3) + 0x7FFF8000) )
                                  {
                                    __asan_report_store_n(v2 + 3840, 32LL);
                                  }
                                  common::milog::MiLogStream::create(
                                    (common::milog::MiLogStream *)(v2 + 3840),
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    4u,
                                    "./src/txt_data_auto/ForgeExcelConfig.gen.cpp",
                                    "init",
                                    291);
                                  v65 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                          (common::milog::MiLogStream *const)(v2 + 3840),
                                          (const char (*)[16])"[CONFIG_ERROR] ");
                                  common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                                    v65,
                                    (const char (*)[35])byte_1AD4F160);
                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3840));
                                  *(_DWORD *)(((v2 + 3840) >> 3) + 0x7FFF8000) = -117901064;
                                  v6 = -1;
                                }
                                else
                                {
                                  v66 = ((v2 + 640) >> 3) + 2147450880;
                                  *(_WORD *)v66 = 0;
                                  *(_BYTE *)(v66 + 2) = 0;
                                  v67 = (_DWORD *)(((v2 + 4064) >> 3) + 2147450880);
                                  *v67 = 0;
                                  v67[1] = 0;
                                  *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = 1;
                                  std::allocator<char>::allocator(v2 + 528);
                                  std::string::basic_string<std::allocator<char>>(
                                    (std::string *const)(v2 + 4064),
                                    ";",
                                    (const std::allocator<char> *)(v2 + 528));
                                  *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = 1;
                                  std::allocator<char>::allocator(v2 + 544);
                                  std::string::basic_string<std::allocator<char>>(
                                    (std::string *const)(v2 + 4096),
                                    ",",
                                    (const std::allocator<char> *)(v2 + 544));
                                  __l._M_array = (std::initializer_list<std::string >::iterator)(v2 + 4064);
                                  __l._M_len = 2LL;
                                  *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = 1;
                                  std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 560));
                                  std::vector<std::string>::vector(
                                    (std::vector<std::string> *const)(v2 + 640),
                                    __l,
                                    (const std::vector<std::string>::allocator_type *)(v2 + 560));
                                  v68 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                                          (const std::string *)(v2 + 704),
                                          (const std::vector<std::string> *)(v2 + 640),
                                          &this->talent_return_able_index_list,
                                          1) != 0;
                                  std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 640));
                                  v69 = ((v2 + 640) >> 3) + 2147450880;
                                  *(_WORD *)v69 = -1800;
                                  *(_BYTE *)(v69 + 2) = -8;
                                  std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 560));
                                  *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = -8;
                                  for ( k = (char *)(v2 + 4128); k != (char *)(v2 + 4064); std::string::~string(k) )
                                    k -= 32;
                                  v71 = (_DWORD *)(((v2 + 4064) >> 3) + 2147450880);
                                  *v71 = -117901064;
                                  v71[1] = -117901064;
                                  std::allocator<char>::~allocator(v2 + 544);
                                  *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = -8;
                                  std::allocator<char>::~allocator(v2 + 528);
                                  *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = -8;
                                  if ( v68 )
                                  {
                                    *(_DWORD *)(((v2 + 3904) >> 3) + 0x7FFF8000) = 0;
                                    if ( *(char *)(((v2 + 3904) >> 3) + 0x7FFF8000) < 0
                                      || *(_BYTE *)(((v2 + 3935) >> 3) + 0x7FFF8000) != 0
                                      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 3935) >> 3) + 0x7FFF8000) )
                                    {
                                      __asan_report_store_n(v2 + 3904, 32LL);
                                    }
                                    common::milog::MiLogStream::create(
                                      (common::milog::MiLogStream *)(v2 + 3904),
                                      &common::milog::MiLogDefault::default_log_obj_,
                                      4u,
                                      "./src/txt_data_auto/ForgeExcelConfig.gen.cpp",
                                      "init",
                                      296);
                                    v72 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                            (common::milog::MiLogStream *const)(v2 + 3904),
                                            (const char (*)[16])"[CONFIG_ERROR] ");
                                    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                                      v72,
                                      (const char (*)[35])byte_1AD4F160);
                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3904));
                                    *(_DWORD *)(((v2 + 3904) >> 3) + 0x7FFF8000) = -117901064;
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
LABEL_121:
  std::string::~string((void *)(v2 + 704));
  if ( v88 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 88) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF805C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8200) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862745) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450972 - (((_DWORD)v4 + 2147450980) & 0xFFFFFFF8) + 428) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF8228) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_7(v2, 4480LL, v88);
  }
  return v6;
};

// Line 304: range 0000000014364B4E-00000000143650D6
int32_t __cdecl data::ForgeUpdateExcelConfig::init(
        data::ForgeUpdateExcelConfig *const this,
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
  *(_QWORD *)(v2 + 16) = data::ForgeUpdateExcelConfig::init;
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
    &byte_1AD4E820,
    (const std::allocator<char> *)(v2 + 32));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 64), &this->player_level) != 0;
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
      "./src/txt_data_auto/ForgeExcelConfig.gen.cpp",
      "init",
      307);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v6, (const char (*)[33])byte_1AD4E860);
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
      &byte_1AD4F1C0,
      (const std::allocator<char> *)(v2 + 48));
    v8 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
           row,
           (const std::string *)(v2 + 192),
           &this->forge_queue_num) != 0;
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
        "./src/txt_data_auto/ForgeExcelConfig.gen.cpp",
        "init",
        312);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 256),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v9, (const char (*)[36])byte_1AD4F200);
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

// Line 321: range 00000000143650D8-0000000014366122
int32_t __cdecl data::ForgeExcelConfigMgrBase::loadForgeExcelConfig(
        data::ForgeExcelConfigMgrBase *const this,
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
  data::ForgeExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::ForgeExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ForgeExcelConfig>,false,false>,bool> v27; // rax
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
  *(_QWORD *)(v3 + 8) = "13 48 1 9 <unknown> 64 4 5 r:336 80 4 9 <unknown> 96 32 9 paths:322 160 32 9 <unknown> 224 32 9 "
                        "<unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 200 8 "
                        "data:339 816 376 24 debug_message_stream:347 1264 32880 12 txt_file:330";
  *(_QWORD *)(v3 + 16) = data::ForgeExcelConfigMgrBase::loadForgeExcelConfig;
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
    "/txt/ForgeData.txt",
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
        "./src/txt_data_auto/ForgeExcelConfig.gen.cpp",
        "loadForgeExcelConfig",
        333);
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
        data::ForgeExcelConfig::ForgeExcelConfig((data::ForgeExcelConfig *const)(v3 + 544));
        if ( row_ptr )
        {
          if ( data::ForgeExcelConfig::init((data::ForgeExcelConfig *const)(v3 + 544), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 816, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 816);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 816, &unk_1AD3B5A0);
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
              "./src/txt_data_auto/ForgeExcelConfig.gen.cpp",
              "loadForgeExcelConfig",
              349);
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
            v24 = std::move<data::ForgeExcelConfig &>((data::ForgeExcelConfig *)(v3 + 544));
            v27 = std::unordered_map<unsigned int,data::ForgeExcelConfig>::emplace<unsigned int &,data::ForgeExcelConfig>(
                    &this->forge_excel_config_map,
                    (unsigned int *)(v3 + 552),
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
                "./src/txt_data_auto/ForgeExcelConfig.gen.cpp",
                "loadForgeExcelConfig",
                354);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 480),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v28, (const char (*)[9])byte_1AD3B5E0);
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
            "./src/txt_data_auto/ForgeExcelConfig.gen.cpp",
            "loadForgeExcelConfig",
            342);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 288),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::ForgeExcelConfig::~ForgeExcelConfig((data::ForgeExcelConfig *const)(v3 + 544));
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

// Line 363: range 0000000014366124-00000000143671C4
int32_t __cdecl data::ForgeExcelConfigMgrBase::loadForgeUpdateExcelConfig(
        data::ForgeExcelConfigMgrBase *const this,
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
  data::ForgeUpdateExcelConfig *updated; // rax
  unsigned int *v26; // rcx
  data::ForgeUpdateExcelConfig *v27; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ForgeUpdateExcelConfig>,false,false>,bool> v28; // rax
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
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 5 r:378 64 4 9 <unknown> 80 16 8 data:381 112 32 9 paths:364 176 32 9 <"
                        "unknown> 240 32 9 <unknown> 304 32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496 32 9 <u"
                        "nknown> 560 376 24 debug_message_stream:389 1008 32880 12 txt_file:372";
  *(_QWORD *)(v3 + 16) = data::ForgeExcelConfigMgrBase::loadForgeUpdateExcelConfig;
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
    "/txt/ForgeUpdateData.txt",
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
        "./src/txt_data_auto/ForgeExcelConfig.gen.cpp",
        "loadForgeUpdateExcelConfig",
        375);
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
        v14 = &`vtable for'data::ForgeUpdateExcelConfig + 2;
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
          if ( data::ForgeUpdateExcelConfig::init((data::ForgeUpdateExcelConfig *const)(v3 + 80), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 560, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 560);
            v17 = std::operator<<<std::char_traits<char>>(v3 + 560, &unk_1AD4F5A0);
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
              "./src/txt_data_auto/ForgeExcelConfig.gen.cpp",
              "loadForgeUpdateExcelConfig",
              391);
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
            updated = std::move<data::ForgeUpdateExcelConfig &>((data::ForgeUpdateExcelConfig *)(v3 + 80));
            v28 = std::unordered_map<unsigned int,data::ForgeUpdateExcelConfig>::emplace<unsigned int &,data::ForgeUpdateExcelConfig>(
                    &this->forge_update_excel_config_map,
                    (unsigned int *)(v3 + 88),
                    updated,
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
                "./src/txt_data_auto/ForgeExcelConfig.gen.cpp",
                "loadForgeUpdateExcelConfig",
                396);
              v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 496),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v30 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                      v29,
                      (const char (*)[18])byte_1AD4F5E0);
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
            "./src/txt_data_auto/ForgeExcelConfig.gen.cpp",
            "loadForgeUpdateExcelConfig",
            384);
          v15 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 304),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 304));
          *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v16 = 0;
        }
        data::ForgeUpdateExcelConfig::~ForgeUpdateExcelConfig((data::ForgeUpdateExcelConfig *const)(v3 + 80));
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

// Line 405: range 00000000143671C6-00000000143674EA
int32_t __cdecl data::ForgeExcelConfigMgrBase::loadConfig(
        data::ForgeExcelConfigMgrBase *const this,
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
  *(_QWORD *)(v2 + 16) = data::ForgeExcelConfigMgrBase::loadConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  if ( data::ForgeExcelConfigMgrBase::loadForgeExcelConfig(this, config) )
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
      "./src/txt_data_auto/ForgeExcelConfig.gen.cpp",
      "loadConfig",
      408);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      v5,
      (const char (*)[28])"loadForgeExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else if ( data::ForgeExcelConfigMgrBase::loadForgeUpdateExcelConfig(this, config) )
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
      "./src/txt_data_auto/ForgeExcelConfig.gen.cpp",
      "loadConfig",
      413);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      v7,
      (const char (*)[34])"loadForgeUpdateExcelConfig failed");
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

// Line 420: range 00000000143674EC-00000000143674FE
int32_t __cdecl data::ForgeExcelConfigMgrBase::rewriteConfig(
        data::ForgeExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 425: range 0000000014367500-0000000014367512
int32_t __cdecl data::ForgeExcelConfigMgrBase::finalConfig(
        data::ForgeExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 430: range 0000000014367514-00000000143676CF
data::ForgeExcelConfig *__fastcall data::ForgeExcelConfigMgrBase::findForgeExcelConfig(
        data::ForgeExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ForgeExcelConfigMap *p_forge_excel_config_map; // rdx
  data::ForgeExcelConfigMap *v6; // rdx
  bool v7; // al
  data::ForgeExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:429 64 8 8 iter:431 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ForgeExcelConfigMgrBase::findForgeExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_forge_excel_config_map = &this->forge_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::ForgeExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ForgeExcelConfig>::find(
                                                                                      p_forge_excel_config_map,
                                                                                      (const std::unordered_map<unsigned int,data::ForgeExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->forge_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ForgeExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ForgeExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ForgeExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ForgeExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ForgeExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::ForgeExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ForgeExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 443: range 00000000143676D0-000000001436788B
const data::ForgeExcelConfig *__fastcall data::ForgeExcelConfigMgrBase::findForgeExcelConfig(
        const data::ForgeExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ForgeExcelConfigMap *p_forge_excel_config_map; // rdx
  data::ForgeExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::ForgeExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:442 64 8 8 iter:444 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ForgeExcelConfigMgrBase::findForgeExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_forge_excel_config_map = &this->forge_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::ForgeExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ForgeExcelConfig>::find(
                                                                                            p_forge_excel_config_map,
                                                                                            (const std::unordered_map<unsigned int,data::ForgeExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->forge_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ForgeExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ForgeExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ForgeExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ForgeExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ForgeExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ForgeExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ForgeExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 456: range 000000001436788C-0000000014367A47
data::ForgeUpdateExcelConfig *__fastcall data::ForgeExcelConfigMgrBase::findForgeUpdateExcelConfig(
        data::ForgeExcelConfigMgrBase *const this,
        __int64 player_level)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ForgeUpdateExcelConfigMap *p_forge_update_excel_config_map; // rdx
  data::ForgeUpdateExcelConfigMap *v6; // rdx
  bool updated; // al
  data::ForgeUpdateExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 16 player_level:455 64 8 8 iter:457 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ForgeExcelConfigMgrBase::findForgeUpdateExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = player_level;
  p_forge_update_excel_config_map = &this->forge_update_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, player_level);
  *(std::unordered_map<unsigned int,data::ForgeUpdateExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ForgeUpdateExcelConfig>::find(
                                                                                            p_forge_update_excel_config_map,
                                                                                            (const std::unordered_map<unsigned int,data::ForgeUpdateExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->forge_update_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ForgeUpdateExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ForgeUpdateExcelConfig>::end(v6);
  updated = std::__detail::operator==<std::pair<unsigned int const,data::ForgeUpdateExcelConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ForgeUpdateExcelConfig>,false> *)(v2 + 64),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ForgeUpdateExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( updated )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::ForgeUpdateExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ForgeUpdateExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 469: range 0000000014367A48-0000000014367C03
const data::ForgeUpdateExcelConfig *__fastcall data::ForgeExcelConfigMgrBase::findForgeUpdateExcelConfig(
        const data::ForgeExcelConfigMgrBase *const this,
        __int64 player_level)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ForgeUpdateExcelConfigMap *p_forge_update_excel_config_map; // rdx
  data::ForgeUpdateExcelConfigMap *v6; // rdx
  bool updated; // al
  const data::ForgeUpdateExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 16 player_level:468 64 8 8 iter:470 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ForgeExcelConfigMgrBase::findForgeUpdateExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = player_level;
  p_forge_update_excel_config_map = &this->forge_update_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, player_level);
  *(std::unordered_map<unsigned int,data::ForgeUpdateExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ForgeUpdateExcelConfig>::find(
                                                                                                  p_forge_update_excel_config_map,
                                                                                                  (const std::unordered_map<unsigned int,data::ForgeUpdateExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->forge_update_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ForgeUpdateExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ForgeUpdateExcelConfig>::end(v6);
  updated = std::__detail::operator==<std::pair<unsigned int const,data::ForgeUpdateExcelConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ForgeUpdateExcelConfig>,false> *)(v2 + 64),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ForgeUpdateExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( updated )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ForgeUpdateExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ForgeUpdateExcelConfig>,false,false> *const)(v2 + 64))->second;
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

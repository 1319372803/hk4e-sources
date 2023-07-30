// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/GivingExcelConfig.gen.cpp

// Line 12: range 00000000143EB266-00000000143EB5D9
const char *__fastcall data::enumValToStr(data::GivingMethod e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::GivingMethod,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::GivingMethod,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
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
  map = data::getGivingMethodEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::GivingMethod,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::GivingMethod,std::pair<std::string,std::string>>::find(
                                                                                                     map,
                                                                                                     (const std::map<data::GivingMethod,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::GivingMethod,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::GivingMethod,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::GivingMethod,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::GivingMethod,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/GivingExcelConfig.gen.cpp",
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
    result = "INVALID_GivingMethod";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::GivingMethod const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::GivingMethod,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 24: range 00000000143EB5DA-00000000143EBB92
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::GivingMethod>,false,true>::pointer v10; // rax
  data::GivingMethod second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::GivingMethod> *m; // [rsp+18h] [rbp-188h]
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
    m = data::getGivingMethodNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::GivingMethod>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::GivingMethod>::find(
                                                                                         m,
                                                                                         (const std::unordered_map<std::string,data::GivingMethod>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::GivingMethod>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::GivingMethod>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::GivingMethod>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GivingMethod>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GivingMethod>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/GivingExcelConfig.gen.cpp",
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
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::GivingMethod>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::GivingMethod>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/GivingExcelConfig.gen.cpp",
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

// Line 45: range 00000000143EBB93-00000000143EC691
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::GivingMethod> *i; // r14
  _DWORD *v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::GivingMethod>,false,true>::pointer v12; // rax
  data::GivingMethod second; // ecx
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::GivingMethod &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::GivingMethod &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, e);
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::GivingMethod>::pair<char const(&)[7],data::GivingMethod,true>(
        (std::pair<const std::string,data::GivingMethod> *const)(v2 + 448),
        (const char (*)[7])byte_1AD65FE0,
        (data::GivingMethod *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, byte_1AD65FE0);
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::GivingMethod>::pair<char const(&)[4],data::GivingMethod,true>(
        (std::pair<const std::string,data::GivingMethod> *const)(v2 + 488),
        (const char (*)[4])off_1AD66020,
        (data::GivingMethod *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, off_1AD66020);
      *(_DWORD *)(v2 + 128) = 3;
      std::pair<std::string const,data::GivingMethod>::pair<char const(&)[10],data::GivingMethod,true>(
        (std::pair<const std::string,data::GivingMethod> *const)(v2 + 528),
        (const char (*)[10])byte_1AD66060,
        (data::GivingMethod *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, byte_1AD66060);
      *(_DWORD *)(v2 + 144) = 4;
      std::pair<std::string const,data::GivingMethod>::pair<char const(&)[25],data::GivingMethod,true>(
        (std::pair<const std::string,data::GivingMethod> *const)(v2 + 568),
        (const char (*)[25])byte_1AD660A0,
        (data::GivingMethod *)(v2 + 144));
      std::allocator<std::pair<std::string const,data::GivingMethod>>::allocator((std::allocator<std::pair<const std::string,data::GivingMethod> > *const)(v2 + 64));
      std::unordered_map<std::string,data::GivingMethod>::unordered_map(
        &data::enumStrToVal(char const*,data::GivingMethod &)::m,
        (std::initializer_list<std::pair<const std::string,data::GivingMethod> >)__PAIR128__(4LL, v2 + 448),
        0LL,
        (const std::unordered_map<std::string,data::GivingMethod>::hasher *)(v2 + 32),
        (const std::unordered_map<std::string,data::GivingMethod>::key_equal *)(v2 + 48),
        (const std::unordered_map<std::string,data::GivingMethod>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::GivingMethod &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::GivingMethod>::~unordered_map,
        &data::enumStrToVal(char const*,data::GivingMethod &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::GivingMethod>>::~allocator((std::allocator<std::pair<const std::string,data::GivingMethod> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::GivingMethod> *)(v2 + 608);
            i != (std::pair<const std::string,data::GivingMethod> *)(v2 + 448);
            std::pair<std::string const,data::GivingMethod>::~pair(i) )
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
    *(std::unordered_map<std::string,data::GivingMethod>::iterator *)(v2 + 160) = std::unordered_map<std::string,data::GivingMethod>::find(
                                                                                    &data::enumStrToVal(char const*,data::GivingMethod &)::m,
                                                                                    (const std::unordered_map<std::string,data::GivingMethod>::key_type *)(v2 + 320));
    std::string::~string((void *)(v2 + 320));
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 80);
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, v2 + 320);
    *(std::unordered_map<std::string,data::GivingMethod>::iterator *)(v2 + 192) = std::unordered_map<std::string,data::GivingMethod>::end(&data::enumStrToVal(char const*,data::GivingMethod &)::m);
    v9 = (char *)(v2 + 192);
    v10 = std::__detail::operator==<std::pair<std::string const,data::GivingMethod>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GivingMethod>,true> *)(v2 + 160),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GivingMethod>,true> *)(v2 + 192));
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
        "./src/txt_data_auto/GivingExcelConfig.gen.cpp",
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
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::GivingMethod>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::GivingMethod>,false,true> *const)(v2 + 160));
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
      "./src/txt_data_auto/GivingExcelConfig.gen.cpp",
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

// Line 72: range 00000000143EC692-00000000143EC6A8
const char *__cdecl data::getDescription(data::GivingMethod e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 77: range 00000000143EC6A9-00000000143EC85E
bool __cdecl data::isValidGivingMethod(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::GivingMethod,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::GivingMethod,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidGivingMethod;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getGivingMethodEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::GivingMethod,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::GivingMethod,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getGivingMethodEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::GivingMethod,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::GivingMethod,std::pair<std::string,std::string>>::find(
                                                                                                     v6,
                                                                                                     (const std::map<data::GivingMethod,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::GivingMethod,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::GivingMethod,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 83: range 00000000143EC85F-00000000143EC9C0
bool __cdecl data::isValidGivingMethodName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::GivingMethod> *v5; // rcx
  const std::unordered_map<std::string,data::GivingMethod> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidGivingMethodName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getGivingMethodNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::GivingMethod>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::GivingMethod>::end(v5);
  v6 = data::getGivingMethodNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::GivingMethod>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::GivingMethod>::find(
                                                                                       v6,
                                                                                       name);
  result = std::__detail::operator!=<std::pair<std::string const,data::GivingMethod>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GivingMethod>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GivingMethod>,true> *)(v2 + 64));
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

// Line 88: range 00000000143EC9C1-00000000143ECFDB
const std::unordered_map<std::string,data::GivingMethod> *__cdecl data::getGivingMethodNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::GivingMethod> *i; // r14
  const std::unordered_map<std::string,data::GivingMethod> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getGivingMethodNameMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getGivingMethodNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getGivingMethodNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v0);
    *(_DWORD *)(v1 + 96) = 0;
    std::pair<std::string const,data::GivingMethod>::pair<char const(&)[19],data::GivingMethod,true>(
      (std::pair<const std::string,data::GivingMethod> *const)(v1 + 176),
      (const char (*)[19])"GIVING_METHOD_NONE",
      (data::GivingMethod *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "GIVING_METHOD_NONE");
    *(_DWORD *)(v1 + 112) = 1;
    std::pair<std::string const,data::GivingMethod>::pair<char const(&)[20],data::GivingMethod,true>(
      (std::pair<const std::string,data::GivingMethod> *const)(v1 + 216),
      (const char (*)[20])"GIVING_METHOD_EXACT",
      (data::GivingMethod *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, "GIVING_METHOD_EXACT");
    *(_DWORD *)(v1 + 128) = 2;
    std::pair<std::string const,data::GivingMethod>::pair<char const(&)[20],data::GivingMethod,true>(
      (std::pair<const std::string,data::GivingMethod> *const)(v1 + 256),
      (const char (*)[20])"GIVING_METHOD_GROUP",
      (data::GivingMethod *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, "GIVING_METHOD_GROUP");
    *(_DWORD *)(v1 + 144) = 3;
    std::pair<std::string const,data::GivingMethod>::pair<char const(&)[26],data::GivingMethod,true>(
      (std::pair<const std::string,data::GivingMethod> *const)(v1 + 296),
      (const char (*)[26])"GIVING_METHOD_VAGUE_GROUP",
      (data::GivingMethod *)(v1 + 144));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, "GIVING_METHOD_VAGUE_GROUP");
    *(_DWORD *)(v1 + 160) = 4;
    std::pair<std::string const,data::GivingMethod>::pair<char const(&)[28],data::GivingMethod,true>(
      (std::pair<const std::string,data::GivingMethod> *const)(v1 + 336),
      (const char (*)[28])"GIVING_METHOD_ANY_NO_FINISH",
      (data::GivingMethod *)(v1 + 160));
    std::allocator<std::pair<std::string const,data::GivingMethod>>::allocator((std::allocator<std::pair<const std::string,data::GivingMethod> > *const)(v1 + 80));
    std::unordered_map<std::string,data::GivingMethod>::unordered_map(
      &data::getGivingMethodNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::GivingMethod> >)__PAIR128__(5LL, v1 + 176),
      0LL,
      (const std::unordered_map<std::string,data::GivingMethod>::hasher *)(v1 + 48),
      (const std::unordered_map<std::string,data::GivingMethod>::key_equal *)(v1 + 64),
      (const std::unordered_map<std::string,data::GivingMethod>::allocator_type *)(v1 + 80));
    __cxa_guard_release(&`guard variable for'data::getGivingMethodNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::GivingMethod>::~unordered_map,
      &data::getGivingMethodNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::GivingMethod>>::~allocator((std::allocator<std::pair<const std::string,data::GivingMethod> > *const)(v1 + 80));
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::GivingMethod> *)(v1 + 376);
          i != (std::pair<const std::string,data::GivingMethod> *)(v1 + 176);
          std::pair<std::string const,data::GivingMethod>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getGivingMethodNameMap[abi:cxx11](void)::m;
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

// Line 101: range 00000000143ECFDC-00000000143ED8A1
const std::map<data::GivingMethod,std::pair<std::string,std::string >> *__cdecl data::getGivingMethodEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::GivingMethod,std::pair<std::string,std::string > > *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getGivingMethodEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getGivingMethodEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getGivingMethodEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 64, v0);
    *(_DWORD *)(v1 + 64) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[19],true>(
      (std::pair<std::string,std::string > *const)(v1 + 144),
      (const char (*)[1])byte_1ACFAB80,
      (const char (*)[19])"GIVING_METHOD_NONE");
    std::pair<data::GivingMethod const,std::pair<std::string,std::string>>::pair<data::GivingMethod,true>(
      (std::pair<const data::GivingMethod,std::pair<std::string,std::string > > *const)(v1 + 624),
      (data::GivingMethod *)(v1 + 64),
      (const std::pair<std::string,std::string > *)(v1 + 144));
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v1 + 64);
    *(_DWORD *)(v1 + 80) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[20],true>(
      (std::pair<std::string,std::string > *const)(v1 + 240),
      (const char (*)[7])byte_1AD65FE0,
      (const char (*)[20])"GIVING_METHOD_EXACT");
    std::pair<data::GivingMethod const,std::pair<std::string,std::string>>::pair<data::GivingMethod,true>(
      (std::pair<const data::GivingMethod,std::pair<std::string,std::string > > *const)(v1 + 696),
      (data::GivingMethod *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 240));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[4],char const(&)[20],true>(
      (std::pair<std::string,std::string > *const)(v1 + 336),
      (const char (*)[4])off_1AD66020,
      (const char (*)[20])"GIVING_METHOD_GROUP");
    std::pair<data::GivingMethod const,std::pair<std::string,std::string>>::pair<data::GivingMethod,true>(
      (std::pair<const data::GivingMethod,std::pair<std::string,std::string > > *const)(v1 + 768),
      (data::GivingMethod *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 336));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 3;
    std::pair<std::string,std::string>::pair<char const(&)[10],char const(&)[26],true>(
      (std::pair<std::string,std::string > *const)(v1 + 432),
      (const char (*)[10])byte_1AD66060,
      (const char (*)[26])"GIVING_METHOD_VAGUE_GROUP");
    std::pair<data::GivingMethod const,std::pair<std::string,std::string>>::pair<data::GivingMethod,true>(
      (std::pair<const data::GivingMethod,std::pair<std::string,std::string > > *const)(v1 + 840),
      (data::GivingMethod *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 432));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, v1 + 112);
    *(_DWORD *)(v1 + 128) = 4;
    std::pair<std::string,std::string>::pair<char const(&)[25],char const(&)[28],true>(
      (std::pair<std::string,std::string > *const)(v1 + 528),
      (const char (*)[25])byte_1AD660A0,
      (const char (*)[28])"GIVING_METHOD_ANY_NO_FINISH");
    std::pair<data::GivingMethod const,std::pair<std::string,std::string>>::pair<data::GivingMethod,true>(
      (std::pair<const data::GivingMethod,std::pair<std::string,std::string > > *const)(v1 + 912),
      (data::GivingMethod *)(v1 + 128),
      (const std::pair<std::string,std::string > *)(v1 + 528));
    std::allocator<std::pair<data::GivingMethod const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::GivingMethod,std::pair<std::string,std::string > > > *const)(v1 + 48));
    std::map<data::GivingMethod,std::pair<std::string,std::string>>::map(
      &data::getGivingMethodEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::GivingMethod,std::pair<std::string,std::string > > >)__PAIR128__(5LL, v1 + 624),
      (const std::less<data::GivingMethod> *)(v1 + 32),
      (const std::map<data::GivingMethod,std::pair<std::string,std::string >>::allocator_type *)(v1 + 48));
    __cxa_guard_release(&`guard variable for'data::getGivingMethodEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::GivingMethod,std::pair<std::string,std::string>>::~map,
      &data::getGivingMethodEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::GivingMethod const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::GivingMethod,std::pair<std::string,std::string > > > *const)(v1 + 48));
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::GivingMethod,std::pair<std::string,std::string > > *)(v1 + 984);
          i != (std::pair<const data::GivingMethod,std::pair<std::string,std::string > > *)(v1 + 624);
          std::pair<data::GivingMethod const,std::pair<std::string,std::string>>::~pair(i) )
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
  return &data::getGivingMethodEnumMap[abi:cxx11](void)::m;
};

// Line 114: range 00000000143ED8A2-00000000143EDC15
const char *__fastcall data::enumValToStr(data::BagTab e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::BagTab,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::BagTab,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 5 e:113 64 8 8 iter:116 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getBagTabEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::BagTab,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::BagTab,std::pair<std::string,std::string>>::find(
                                                                                               map,
                                                                                               (const std::map<data::BagTab,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::BagTab,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::BagTab,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::BagTab,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::BagTab,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/GivingExcelConfig.gen.cpp",
      "enumValToStr",
      119);
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
    result = "INVALID_BagTab";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::BagTab const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::BagTab,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 126: range 00000000143EDC16-00000000143EE1CE
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::BagTab>,false,true>::pointer v10; // rax
  data::BagTab second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::BagTab> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:135 96 8 9 <unknown> 128 8 5 s:125 160 32 9 <unknown> 224 32 9 <unk"
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
    m = data::getBagTabNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::BagTab>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::BagTab>::find(
                                                                                   m,
                                                                                   (const std::unordered_map<std::string,data::BagTab>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::BagTab>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::BagTab>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::BagTab>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::BagTab>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::BagTab>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/GivingExcelConfig.gen.cpp",
        "enumNameToVal",
        138);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::BagTab>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::BagTab>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/GivingExcelConfig.gen.cpp",
      "enumNameToVal",
      129);
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

// Line 147: range 00000000143EE1CF-00000000143EEFC9
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::BagTab> *i; // r14
  const char *v7; // rsi
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::BagTab>,false,true>::pointer v11; // rax
  data::BagTab second; // ecx
  char v13; // dl
  char v15[1008]; // [rsp+20h] [rbp-3F0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(960LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "20 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 4 9 <unknown> 112 4 9 "
                        "<unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unkno"
                        "wn> 208 4 9 <unknown> 224 4 9 <unknown> 240 8 6 it:167 272 8 9 <unknown> 304 8 5 s:146 336 32 9 "
                        "<unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 360 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234753535;
  v4[536862723] = -234556924;
  v4[536862724] = -234556924;
  v4[536862725] = -234556924;
  v4[536862726] = -234556924;
  v4[536862727] = 61956;
  v4[536862727] = -234881024;
  v4[536862728] = 62194;
  v4[536862728] = -234881024;
  v4[536862729] = 62194;
  v4[536862729] = -234881024;
  v4[536862730] = 62194;
  v4[536862731] = -219021312;
  v4[536862732] = 62194;
  v4[536862733] = -219021312;
  v4[536862734] = 62194;
  v4[536862735] = -219021312;
  v4[536862736] = 62194;
  v4[536862747] = -218103808;
  v4[536862748] = -202116109;
  v4[536862749] = -202116109;
  *(_QWORD *)(v2 + 304) = s;
  if ( *(_QWORD *)(v2 + 304) )
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::BagTab &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::BagTab &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, e);
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::BagTab>::pair<char const(&)[7],data::BagTab,true>(
        (std::pair<const std::string,data::BagTab> *const)(v2 + 528),
        (const char (*)[7])byte_1AD663E0,
        (data::BagTab *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, byte_1AD663E0);
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::BagTab>::pair<char const(&)[10],data::BagTab,true>(
        (std::pair<const std::string,data::BagTab> *const)(v2 + 568),
        (const char (*)[10])byte_1AD66420,
        (data::BagTab *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1AD66420);
      *(_DWORD *)(v2 + 128) = 3;
      std::pair<std::string const,data::BagTab>::pair<char const(&)[7],data::BagTab,true>(
        (std::pair<const std::string,data::BagTab> *const)(v2 + 608),
        (const char (*)[7])byte_1AD66460,
        (data::BagTab *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, byte_1AD66460);
      *(_DWORD *)(v2 + 144) = 4;
      std::pair<std::string const,data::BagTab>::pair<char const(&)[7],data::BagTab,true>(
        (std::pair<const std::string,data::BagTab> *const)(v2 + 648),
        (const char (*)[7])byte_1AD664A0,
        (data::BagTab *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, byte_1AD664A0);
      *(_DWORD *)(v2 + 160) = 5;
      std::pair<std::string const,data::BagTab>::pair<char const(&)[7],data::BagTab,true>(
        (std::pair<const std::string,data::BagTab> *const)(v2 + 688),
        (const char (*)[7])byte_1AD664E0,
        (data::BagTab *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, byte_1AD664E0);
      *(_DWORD *)(v2 + 176) = 6;
      std::pair<std::string const,data::BagTab>::pair<char const(&)[7],data::BagTab,true>(
        (std::pair<const std::string,data::BagTab> *const)(v2 + 728),
        (const char (*)[7])byte_1AD66520,
        (data::BagTab *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, byte_1AD66520);
      *(_DWORD *)(v2 + 192) = 7;
      std::pair<std::string const,data::BagTab>::pair<char const(&)[10],data::BagTab,true>(
        (std::pair<const std::string,data::BagTab> *const)(v2 + 768),
        (const char (*)[10])byte_1AD66560,
        (data::BagTab *)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 208, byte_1AD66560);
      *(_DWORD *)(v2 + 208) = 8;
      std::pair<std::string const,data::BagTab>::pair<char const(&)[10],data::BagTab,true>(
        (std::pair<const std::string,data::BagTab> *const)(v2 + 808),
        (const char (*)[10])byte_1AD665A0,
        (data::BagTab *)(v2 + 208));
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 224, byte_1AD665A0);
      *(_DWORD *)(v2 + 224) = 9;
      std::pair<std::string const,data::BagTab>::pair<char const(&)[7],data::BagTab,true>(
        (std::pair<const std::string,data::BagTab> *const)(v2 + 848),
        (const char (*)[7])byte_1AD665E0,
        (data::BagTab *)(v2 + 224));
      std::allocator<std::pair<std::string const,data::BagTab>>::allocator((std::allocator<std::pair<const std::string,data::BagTab> > *const)(v2 + 64));
      std::unordered_map<std::string,data::BagTab>::unordered_map(
        &data::enumStrToVal(char const*,data::BagTab &)::m,
        (std::initializer_list<std::pair<const std::string,data::BagTab> >)__PAIR128__(9LL, v2 + 528),
        0LL,
        (const std::unordered_map<std::string,data::BagTab>::hasher *)(v2 + 32),
        (const std::unordered_map<std::string,data::BagTab>::key_equal *)(v2 + 48),
        (const std::unordered_map<std::string,data::BagTab>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::BagTab &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::BagTab>::~unordered_map,
        &data::enumStrToVal(char const*,data::BagTab &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::BagTab>>::~allocator((std::allocator<std::pair<const std::string,data::BagTab> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::BagTab> *)(v2 + 888);
            i != (std::pair<const std::string,data::BagTab> *)(v2 + 528);
            std::pair<std::string const,data::BagTab>::~pair(i) )
      {
        --i;
      }
      __asan_poison_stack_memory(v2 + 528, 360LL);
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
    *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((v2 + 400) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 80);
    v7 = *(const char **)(v2 + 304);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 400),
      v7,
      (const std::allocator<char> *)(v2 + 80));
    if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 240, v7);
    *(std::unordered_map<std::string,data::BagTab>::iterator *)(v2 + 240) = std::unordered_map<std::string,data::BagTab>::find(
                                                                              &data::enumStrToVal(char const*,data::BagTab &)::m,
                                                                              (const std::unordered_map<std::string,data::BagTab>::key_type *)(v2 + 400));
    std::string::~string((void *)(v2 + 400));
    *(_DWORD *)(((v2 + 400) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 80);
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 272, v2 + 400);
    *(std::unordered_map<std::string,data::BagTab>::iterator *)(v2 + 272) = std::unordered_map<std::string,data::BagTab>::end(&data::enumStrToVal(char const*,data::BagTab &)::m);
    v8 = (char *)(v2 + 272);
    v9 = std::__detail::operator==<std::pair<std::string const,data::BagTab>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::BagTab>,true> *)(v2 + 240),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::BagTab>,true> *)(v2 + 272));
    *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
    {
      *(_DWORD *)(((v2 + 464) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 464) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 495) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 64 + 47) & 7) >= *(_BYTE *)(((v2 + 495) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 464, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 464),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/txt_data_auto/GivingExcelConfig.gen.cpp",
        "enumStrToVal",
        170);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 464),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v10, (const char *const *)(v2 + 304));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 464));
      LODWORD(result) = -1;
    }
    else
    {
      v11 = std::__detail::_Node_iterator<std::pair<std::string const,data::BagTab>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::BagTab>,false,true> *const)(v2 + 240));
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
    if ( *(char *)(((v2 + 336) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 367) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 111) & 7) >= *(_BYTE *)(((v2 + 367) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 336, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 336),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_auto/GivingExcelConfig.gen.cpp",
      "enumStrToVal",
      150);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
      (common::milog::MiLogStream *const)(v2 + 336),
      (const char (*)[14])"s is nullptr!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 336));
    LODWORD(result) = -1;
  }
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 120) & 0xFFFFFFF8) >> 3));
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
  }
  return (unsigned int)result;
};

// Line 179: range 00000000143EEFCA-00000000143EEFE0
const char *__cdecl data::getDescription(data::BagTab e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 184: range 00000000143EEFE1-00000000143EF196
bool __cdecl data::isValidBagTab(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::BagTab,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::BagTab,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:185 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidBagTab;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getBagTabEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::BagTab,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::BagTab,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getBagTabEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::BagTab,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::BagTab,std::pair<std::string,std::string>>::find(
                                                                                               v6,
                                                                                               (const std::map<data::BagTab,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::BagTab,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::BagTab,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 190: range 00000000143EF197-00000000143EF2F8
bool __cdecl data::isValidBagTabName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::BagTab> *v5; // rcx
  const std::unordered_map<std::string,data::BagTab> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidBagTabName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getBagTabNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::BagTab>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::BagTab>::end(v5);
  v6 = data::getBagTabNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::BagTab>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::BagTab>::find(
                                                                                 v6,
                                                                                 name);
  result = std::__detail::operator!=<std::pair<std::string const,data::BagTab>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::BagTab>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::BagTab>,true> *)(v2 + 64));
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

// Line 195: range 00000000143EF2F9-00000000143EFB6E
const std::unordered_map<std::string,data::BagTab> *__cdecl data::getBagTabNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::BagTab> *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getBagTabNameMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getBagTabNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getBagTabNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string const,data::BagTab>::pair<char const(&)[9],data::BagTab,true>(
      (std::pair<const std::string,data::BagTab> *const)(v1 + 240),
      (const char (*)[9])"TAB_NONE",
      (data::BagTab *)(v1 + 80));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, "TAB_NONE");
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string const,data::BagTab>::pair<char const(&)[11],data::BagTab,true>(
      (std::pair<const std::string,data::BagTab> *const)(v1 + 280),
      (const char (*)[11])"TAB_WEAPON",
      (data::BagTab *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "TAB_WEAPON");
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string const,data::BagTab>::pair<char const(&)[10],data::BagTab,true>(
      (std::pair<const std::string,data::BagTab> *const)(v1 + 320),
      (const char (*)[10])"TAB_EQUIP",
      (data::BagTab *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, "TAB_EQUIP");
    *(_DWORD *)(v1 + 128) = 3;
    std::pair<std::string const,data::BagTab>::pair<char const(&)[11],data::BagTab,true>(
      (std::pair<const std::string,data::BagTab> *const)(v1 + 360),
      (const char (*)[11])"TAB_AVATAR",
      (data::BagTab *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, "TAB_AVATAR");
    *(_DWORD *)(v1 + 144) = 4;
    std::pair<std::string const,data::BagTab>::pair<char const(&)[9],data::BagTab,true>(
      (std::pair<const std::string,data::BagTab> *const)(v1 + 400),
      (const char (*)[9])"TAB_FOOD",
      (data::BagTab *)(v1 + 144));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, "TAB_FOOD");
    *(_DWORD *)(v1 + 160) = 5;
    std::pair<std::string const,data::BagTab>::pair<char const(&)[13],data::BagTab,true>(
      (std::pair<const std::string,data::BagTab> *const)(v1 + 440),
      (const char (*)[13])"TAB_MATERIAL",
      (data::BagTab *)(v1 + 160));
    if ( *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 176, "TAB_MATERIAL");
    *(_DWORD *)(v1 + 176) = 6;
    std::pair<std::string const,data::BagTab>::pair<char const(&)[10],data::BagTab,true>(
      (std::pair<const std::string,data::BagTab> *const)(v1 + 480),
      (const char (*)[10])"TAB_QUEST",
      (data::BagTab *)(v1 + 176));
    if ( *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 192, "TAB_QUEST");
    *(_DWORD *)(v1 + 192) = 7;
    std::pair<std::string const,data::BagTab>::pair<char const(&)[12],data::BagTab,true>(
      (std::pair<const std::string,data::BagTab> *const)(v1 + 520),
      (const char (*)[12])"TAB_CONSUME",
      (data::BagTab *)(v1 + 192));
    if ( *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 208, "TAB_CONSUME");
    *(_DWORD *)(v1 + 208) = 8;
    std::pair<std::string const,data::BagTab>::pair<char const(&)[11],data::BagTab,true>(
      (std::pair<const std::string,data::BagTab> *const)(v1 + 560),
      (const char (*)[11])"TAB_WIDGET",
      (data::BagTab *)(v1 + 208));
    if ( *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 224, "TAB_WIDGET");
    *(_DWORD *)(v1 + 224) = 9;
    std::pair<std::string const,data::BagTab>::pair<char const(&)[14],data::BagTab,true>(
      (std::pair<const std::string,data::BagTab> *const)(v1 + 600),
      (const char (*)[14])"TAB_HOMEWORLD",
      (data::BagTab *)(v1 + 224));
    std::allocator<std::pair<std::string const,data::BagTab>>::allocator((std::allocator<std::pair<const std::string,data::BagTab> > *const)(v1 + 64));
    std::unordered_map<std::string,data::BagTab>::unordered_map(
      &data::getBagTabNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::BagTab> >)__PAIR128__(10LL, v1 + 240),
      0LL,
      (const std::unordered_map<std::string,data::BagTab>::hasher *)(v1 + 32),
      (const std::unordered_map<std::string,data::BagTab>::key_equal *)(v1 + 48),
      (const std::unordered_map<std::string,data::BagTab>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getBagTabNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::BagTab>::~unordered_map,
      &data::getBagTabNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::BagTab>>::~allocator((std::allocator<std::pair<const std::string,data::BagTab> > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::BagTab> *)(v1 + 640);
          i != (std::pair<const std::string,data::BagTab> *)(v1 + 240);
          std::pair<std::string const,data::BagTab>::~pair(i) )
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
  return &data::getBagTabNameMap[abi:cxx11](void)::m;
};

// Line 213: range 00000000143EFB6F-00000000143F0A3B
const std::map<data::BagTab,std::pair<std::string,std::string >> *__cdecl data::getBagTabEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::BagTab,std::pair<std::string,std::string > > *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getBagTabEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getBagTabEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getBagTabEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[9],true>(
      (std::pair<std::string,std::string > *const)(v1 + 240),
      (const char (*)[1])byte_1ACFAB80,
      (const char (*)[9])"TAB_NONE");
    std::pair<data::BagTab const,std::pair<std::string,std::string>>::pair<data::BagTab,true>(
      (std::pair<const data::BagTab,std::pair<std::string,std::string > > *const)(v1 + 1200),
      (data::BagTab *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 240));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[11],true>(
      (std::pair<std::string,std::string > *const)(v1 + 336),
      (const char (*)[7])byte_1AD663E0,
      (const char (*)[11])"TAB_WEAPON");
    std::pair<data::BagTab const,std::pair<std::string,std::string>>::pair<data::BagTab,true>(
      (std::pair<const data::BagTab,std::pair<std::string,std::string > > *const)(v1 + 1272),
      (data::BagTab *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 336));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[10],char const(&)[10],true>(
      (std::pair<std::string,std::string > *const)(v1 + 432),
      (const char (*)[10])byte_1AD66420,
      (const char (*)[10])"TAB_EQUIP");
    std::pair<data::BagTab const,std::pair<std::string,std::string>>::pair<data::BagTab,true>(
      (std::pair<const data::BagTab,std::pair<std::string,std::string > > *const)(v1 + 1344),
      (data::BagTab *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 432));
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 128, v1 + 112);
    *(_DWORD *)(v1 + 128) = 3;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[11],true>(
      (std::pair<std::string,std::string > *const)(v1 + 528),
      (const char (*)[7])byte_1AD66460,
      (const char (*)[11])"TAB_AVATAR");
    std::pair<data::BagTab const,std::pair<std::string,std::string>>::pair<data::BagTab,true>(
      (std::pair<const data::BagTab,std::pair<std::string,std::string > > *const)(v1 + 1416),
      (data::BagTab *)(v1 + 128),
      (const std::pair<std::string,std::string > *)(v1 + 528));
    if ( *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 144, v1 + 128);
    *(_DWORD *)(v1 + 144) = 4;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[9],true>(
      (std::pair<std::string,std::string > *const)(v1 + 624),
      (const char (*)[7])byte_1AD664A0,
      (const char (*)[9])"TAB_FOOD");
    std::pair<data::BagTab const,std::pair<std::string,std::string>>::pair<data::BagTab,true>(
      (std::pair<const data::BagTab,std::pair<std::string,std::string > > *const)(v1 + 1488),
      (data::BagTab *)(v1 + 144),
      (const std::pair<std::string,std::string > *)(v1 + 624));
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 160, v1 + 144);
    *(_DWORD *)(v1 + 160) = 5;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[13],true>(
      (std::pair<std::string,std::string > *const)(v1 + 720),
      (const char (*)[7])byte_1AD664E0,
      (const char (*)[13])"TAB_MATERIAL");
    std::pair<data::BagTab const,std::pair<std::string,std::string>>::pair<data::BagTab,true>(
      (std::pair<const data::BagTab,std::pair<std::string,std::string > > *const)(v1 + 1560),
      (data::BagTab *)(v1 + 160),
      (const std::pair<std::string,std::string > *)(v1 + 720));
    if ( *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 176) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 176, v1 + 160);
    *(_DWORD *)(v1 + 176) = 6;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[10],true>(
      (std::pair<std::string,std::string > *const)(v1 + 816),
      (const char (*)[7])byte_1AD66520,
      (const char (*)[10])"TAB_QUEST");
    std::pair<data::BagTab const,std::pair<std::string,std::string>>::pair<data::BagTab,true>(
      (std::pair<const data::BagTab,std::pair<std::string,std::string > > *const)(v1 + 1632),
      (data::BagTab *)(v1 + 176),
      (const std::pair<std::string,std::string > *)(v1 + 816));
    if ( *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 192, v1 + 176);
    *(_DWORD *)(v1 + 192) = 7;
    std::pair<std::string,std::string>::pair<char const(&)[10],char const(&)[12],true>(
      (std::pair<std::string,std::string > *const)(v1 + 912),
      (const char (*)[10])byte_1AD66560,
      (const char (*)[12])"TAB_CONSUME");
    std::pair<data::BagTab const,std::pair<std::string,std::string>>::pair<data::BagTab,true>(
      (std::pair<const data::BagTab,std::pair<std::string,std::string > > *const)(v1 + 1704),
      (data::BagTab *)(v1 + 192),
      (const std::pair<std::string,std::string > *)(v1 + 912));
    if ( *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 208) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 208, v1 + 192);
    *(_DWORD *)(v1 + 208) = 8;
    std::pair<std::string,std::string>::pair<char const(&)[10],char const(&)[11],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1008),
      (const char (*)[10])byte_1AD665A0,
      (const char (*)[11])"TAB_WIDGET");
    std::pair<data::BagTab const,std::pair<std::string,std::string>>::pair<data::BagTab,true>(
      (std::pair<const data::BagTab,std::pair<std::string,std::string > > *const)(v1 + 1776),
      (data::BagTab *)(v1 + 208),
      (const std::pair<std::string,std::string > *)(v1 + 1008));
    if ( *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 224, v1 + 208);
    *(_DWORD *)(v1 + 224) = 9;
    std::pair<std::string,std::string>::pair<char const(&)[7],char const(&)[14],true>(
      (std::pair<std::string,std::string > *const)(v1 + 1104),
      (const char (*)[7])byte_1AD665E0,
      (const char (*)[14])"TAB_HOMEWORLD");
    std::pair<data::BagTab const,std::pair<std::string,std::string>>::pair<data::BagTab,true>(
      (std::pair<const data::BagTab,std::pair<std::string,std::string > > *const)(v1 + 1848),
      (data::BagTab *)(v1 + 224),
      (const std::pair<std::string,std::string > *)(v1 + 1104));
    std::allocator<std::pair<data::BagTab const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::BagTab,std::pair<std::string,std::string > > > *const)(v1 + 64));
    std::map<data::BagTab,std::pair<std::string,std::string>>::map(
      &data::getBagTabEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::BagTab,std::pair<std::string,std::string > > >)__PAIR128__(
                                                                                                    10LL,
                                                                                                    v1 + 1200),
      (const std::less<data::BagTab> *)(v1 + 48),
      (const std::map<data::BagTab,std::pair<std::string,std::string >>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getBagTabEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::BagTab,std::pair<std::string,std::string>>::~map,
      &data::getBagTabEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::BagTab const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::BagTab,std::pair<std::string,std::string > > > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::BagTab,std::pair<std::string,std::string > > *)(v1 + 1920);
          i != (std::pair<const data::BagTab,std::pair<std::string,std::string > > *)(v1 + 1200);
          std::pair<data::BagTab const,std::pair<std::string,std::string>>::~pair(i) )
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
  return &data::getBagTabEnumMap[abi:cxx11](void)::m;
};

// Line 231: range 00000000143F0A3C-00000000143F0DAF
const char *__fastcall data::enumValToStr(data::GivingType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::GivingType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::GivingType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 9 <unknown> 48 4 5 e:230 64 8 8 iter:233 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumValToStr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = e;
  map = data::getGivingTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::GivingType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::GivingType,std::pair<std::string,std::string>>::find(
                                                                                                   map,
                                                                                                   (const std::map<data::GivingType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::GivingType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::GivingType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::GivingType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::GivingType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/GivingExcelConfig.gen.cpp",
      "enumValToStr",
      236);
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
    result = "INVALID_GivingType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::GivingType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::GivingType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 243: range 00000000143F0DB0-00000000143F1368
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::GivingType>,false,true>::pointer v10; // rax
  data::GivingType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::GivingType> *m; // [rsp+18h] [rbp-188h]
  char v15[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 6 it:252 96 8 9 <unknown> 128 8 5 s:242 160 32 9 <unknown> 224 32 9 <unk"
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
    m = data::getGivingTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::GivingType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::GivingType>::find(
                                                                                       m,
                                                                                       (const std::unordered_map<std::string,data::GivingType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::GivingType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::GivingType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::GivingType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GivingType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GivingType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/GivingExcelConfig.gen.cpp",
        "enumNameToVal",
        255);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::GivingType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::GivingType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/GivingExcelConfig.gen.cpp",
      "enumNameToVal",
      246);
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

// Line 264: range 00000000143F1369-00000000143F1D32
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::GivingType> *i; // r14
  unsigned __int64 v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::GivingType>,false,true>::pointer v12; // rax
  data::GivingType second; // ecx
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
                        " <unknown> 144 8 6 it:277 176 8 9 <unknown> 208 8 5 s:263 240 32 9 <unknown> 304 32 9 <unknown> "
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::GivingType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::GivingType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, e);
      *(_DWORD *)(v2 + 112) = 1;
      std::pair<std::string const,data::GivingType>::pair<char const(&)[13],data::GivingType,true>(
        (std::pair<const std::string,data::GivingType> *const)(v2 + 432),
        (const char (*)[13])byte_1AD66B00,
        (data::GivingType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, byte_1AD66B00);
      *(_DWORD *)(v2 + 128) = 2;
      std::pair<std::string const,data::GivingType>::pair<char const(&)[13],data::GivingType,true>(
        (std::pair<const std::string,data::GivingType> *const)(v2 + 472),
        (const char (*)[13])byte_1AD66B40,
        (data::GivingType *)(v2 + 128));
      std::allocator<std::pair<std::string const,data::GivingType>>::allocator((std::allocator<std::pair<const std::string,data::GivingType> > *const)(v2 + 80));
      std::unordered_map<std::string,data::GivingType>::unordered_map(
        &data::enumStrToVal(char const*,data::GivingType &)::m,
        (std::initializer_list<std::pair<const std::string,data::GivingType> >)__PAIR128__(2LL, v2 + 432),
        0LL,
        (const std::unordered_map<std::string,data::GivingType>::hasher *)(v2 + 48),
        (const std::unordered_map<std::string,data::GivingType>::key_equal *)(v2 + 64),
        (const std::unordered_map<std::string,data::GivingType>::allocator_type *)(v2 + 80));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::GivingType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::GivingType>::~unordered_map,
        &data::enumStrToVal(char const*,data::GivingType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::GivingType>>::~allocator((std::allocator<std::pair<const std::string,data::GivingType> > *const)(v2 + 80));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::GivingType> *)(v2 + 512);
            i != (std::pair<const std::string,data::GivingType> *)(v2 + 432);
            std::pair<std::string const,data::GivingType>::~pair(i) )
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
    *(std::unordered_map<std::string,data::GivingType>::iterator *)(v2 + 144) = std::unordered_map<std::string,data::GivingType>::find(
                                                                                  &data::enumStrToVal(char const*,data::GivingType &)::m,
                                                                                  (const std::unordered_map<std::string,data::GivingType>::key_type *)(v2 + 304));
    std::string::~string((void *)(v2 + 304));
    *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 96);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, v2 + 304);
    *(std::unordered_map<std::string,data::GivingType>::iterator *)(v2 + 176) = std::unordered_map<std::string,data::GivingType>::end(&data::enumStrToVal(char const*,data::GivingType &)::m);
    v9 = (char *)(v2 + 176);
    v10 = std::__detail::operator==<std::pair<std::string const,data::GivingType>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GivingType>,true> *)(v2 + 144),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GivingType>,true> *)(v2 + 176));
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
        "./src/txt_data_auto/GivingExcelConfig.gen.cpp",
        "enumStrToVal",
        280);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 368),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)(v2 + 208));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 368));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::GivingType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::GivingType>,false,true> *const)(v2 + 144));
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
      "./src/txt_data_auto/GivingExcelConfig.gen.cpp",
      "enumStrToVal",
      267);
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

// Line 289: range 00000000143F1D33-00000000143F1D49
const char *__cdecl data::getDescription(data::GivingType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 294: range 00000000143F1D4A-00000000143F1EFF
bool __cdecl data::isValidGivingType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::GivingType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::GivingType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 5 e:295 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidGivingType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getGivingTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::GivingType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::GivingType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getGivingTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::GivingType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::GivingType,std::pair<std::string,std::string>>::find(
                                                                                                   v6,
                                                                                                   (const std::map<data::GivingType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::GivingType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::GivingType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 300: range 00000000143F1F00-00000000143F2061
bool __cdecl data::isValidGivingTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::GivingType> *v5; // rcx
  const std::unordered_map<std::string,data::GivingType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidGivingTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getGivingTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::GivingType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::GivingType>::end(v5);
  v6 = data::getGivingTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::GivingType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::GivingType>::find(
                                                                                     v6,
                                                                                     name);
  result = std::__detail::operator!=<std::pair<std::string const,data::GivingType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GivingType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::GivingType>,true> *)(v2 + 64));
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

// Line 305: range 00000000143F2062-00000000143F2524
const std::unordered_map<std::string,data::GivingType> *__cdecl data::getGivingTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::GivingType> *i; // r14
  const std::unordered_map<std::string,data::GivingType> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getGivingTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556927;
  v3[536862723] = -234556924;
  v3[536862727] = -218103808;
  v3[536862728] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getGivingTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getGivingTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string const,data::GivingType>::pair<char const(&)[17],data::GivingType,true>(
      (std::pair<const std::string,data::GivingType> *const)(v1 + 128),
      (const char (*)[17])"GIVING_TYPE_NONE",
      (data::GivingType *)(v1 + 80));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, "GIVING_TYPE_NONE");
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string const,data::GivingType>::pair<char const(&)[18],data::GivingType,true>(
      (std::pair<const std::string,data::GivingType> *const)(v1 + 168),
      (const char (*)[18])"GIVING_TYPE_QUEST",
      (data::GivingType *)(v1 + 96));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, "GIVING_TYPE_QUEST");
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string const,data::GivingType>::pair<char const(&)[19],data::GivingType,true>(
      (std::pair<const std::string,data::GivingType> *const)(v1 + 208),
      (const char (*)[19])"GIVING_TYPE_GADGET",
      (data::GivingType *)(v1 + 112));
    std::allocator<std::pair<std::string const,data::GivingType>>::allocator((std::allocator<std::pair<const std::string,data::GivingType> > *const)(v1 + 64));
    std::unordered_map<std::string,data::GivingType>::unordered_map(
      &data::getGivingTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::GivingType> >)__PAIR128__(3LL, v1 + 128),
      0LL,
      (const std::unordered_map<std::string,data::GivingType>::hasher *)(v1 + 32),
      (const std::unordered_map<std::string,data::GivingType>::key_equal *)(v1 + 48),
      (const std::unordered_map<std::string,data::GivingType>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getGivingTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::GivingType>::~unordered_map,
      &data::getGivingTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::GivingType>>::~allocator((std::allocator<std::pair<const std::string,data::GivingType> > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::GivingType> *)(v1 + 248);
          i != (std::pair<const std::string,data::GivingType> *)(v1 + 128);
          std::pair<std::string const,data::GivingType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getGivingTypeNameMap[abi:cxx11](void)::m;
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

// Line 316: range 00000000143F2525-00000000143F2C23
const std::map<data::GivingType,std::pair<std::string,std::string >> *__cdecl data::getGivingTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::GivingType,std::pair<std::string,std::string > > *i; // r14
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
  *(_QWORD *)(v1 + 16) = data::getGivingTypeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getGivingTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getGivingTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[17],true>(
      (std::pair<std::string,std::string > *const)(v1 + 128),
      (const char (*)[1])byte_1ACFAB80,
      (const char (*)[17])"GIVING_TYPE_NONE");
    std::pair<data::GivingType const,std::pair<std::string,std::string>>::pair<data::GivingType,true>(
      (std::pair<const data::GivingType,std::pair<std::string,std::string > > *const)(v1 + 416),
      (data::GivingType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 128));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[18],true>(
      (std::pair<std::string,std::string > *const)(v1 + 224),
      (const char (*)[13])byte_1AD66B00,
      (const char (*)[18])"GIVING_TYPE_QUEST");
    std::pair<data::GivingType const,std::pair<std::string,std::string>>::pair<data::GivingType,true>(
      (std::pair<const data::GivingType,std::pair<std::string,std::string > > *const)(v1 + 488),
      (data::GivingType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 224));
    if ( *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 112, v1 + 96);
    *(_DWORD *)(v1 + 112) = 2;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[19],true>(
      (std::pair<std::string,std::string > *const)(v1 + 320),
      (const char (*)[13])byte_1AD66B40,
      (const char (*)[19])"GIVING_TYPE_GADGET");
    std::pair<data::GivingType const,std::pair<std::string,std::string>>::pair<data::GivingType,true>(
      (std::pair<const data::GivingType,std::pair<std::string,std::string > > *const)(v1 + 560),
      (data::GivingType *)(v1 + 112),
      (const std::pair<std::string,std::string > *)(v1 + 320));
    std::allocator<std::pair<data::GivingType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::GivingType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    std::map<data::GivingType,std::pair<std::string,std::string>>::map(
      &data::getGivingTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::GivingType,std::pair<std::string,std::string > > >)__PAIR128__(3LL, v1 + 416),
      (const std::less<data::GivingType> *)(v1 + 48),
      (const std::map<data::GivingType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getGivingTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::GivingType,std::pair<std::string,std::string>>::~map,
      &data::getGivingTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::GivingType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::GivingType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::GivingType,std::pair<std::string,std::string > > *)(v1 + 632);
          i != (std::pair<const data::GivingType,std::pair<std::string,std::string > > *)(v1 + 416);
          std::pair<data::GivingType const,std::pair<std::string,std::string>>::~pair(i) )
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
  return &data::getGivingTypeEnumMap[abi:cxx11](void)::m;
};

// Line 328: range 00000000143F2C24-00000000143F5D33
int32_t __cdecl data::GivingExcelConfig::init(
        data::GivingExcelConfig *const this,
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
  unsigned __int64 v19; // rax
  _DWORD *v20; // rax
  bool v21; // r15
  unsigned __int64 v22; // rax
  char *j; // r14
  _DWORD *v24; // rax
  common::milog::MiLogStream *v25; // rax
  bool v26; // r14
  common::milog::MiLogStream *v27; // rax
  bool v28; // r14
  common::milog::MiLogStream *v29; // rax
  bool v30; // r14
  common::milog::MiLogStream *v31; // rax
  bool v32; // r14
  common::milog::MiLogStream *v33; // rax
  bool v34; // r14
  common::milog::MiLogStream *v35; // rax
  bool v36; // r14
  common::milog::MiLogStream *v37; // rax
  bool t; // [rsp+0h] [rbp-C20h]
  bool ta; // [rsp+0h] [rbp-C20h]
  bool tb; // [rsp+0h] [rbp-C20h]
  bool tc; // [rsp+0h] [rbp-C20h]
  bool td; // [rsp+0h] [rbp-C20h]
  bool te; // [rsp+0h] [rbp-C20h]
  uint32_t *tf; // [rsp+0h] [rbp-C20h]
  bool tg; // [rsp+0h] [rbp-C20h]
  uint32_t *th; // [rsp+0h] [rbp-C20h]
  bool ti; // [rsp+0h] [rbp-C20h]
  bool tj; // [rsp+0h] [rbp-C20h]
  uint32_t array_count; // [rsp+28h] [rbp-BF8h]
  uint32_t i; // [rsp+2Ch] [rbp-BF4h]
  char v52[3056]; // [rsp+30h] [rbp-BF0h] BYREF

  v2 = (unsigned __int64)v52;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(3008LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "57 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unkno"
                        "wn> 208 1 9 <unknown> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 28"
                        "8 1 9 <unknown> 304 1 9 <unknown> 320 1 9 <unknown> 336 1 9 <unknown> 352 24 9 <unknown> 416 32 "
                        "11 val_str:331 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 3"
                        "2 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown> 1056 3"
                        "2 9 <unknown> 1120 32 9 <unknown> 1184 32 9 <unknown> 1248 32 9 <unknown> 1312 32 9 <unknown> 13"
                        "76 32 9 <unknown> 1440 32 9 <unknown> 1504 32 9 <unknown> 1568 32 9 <unknown> 1632 32 9 <unknown"
                        "> 1696 32 9 <unknown> 1760 32 9 <unknown> 1824 32 9 <unknown> 1888 32 9 <unknown> 1952 32 9 <unk"
                        "nown> 2016 32 9 <unknown> 2080 32 9 <unknown> 2144 32 9 <unknown> 2208 32 9 <unknown> 2272 32 9 "
                        "<unknown> 2336 32 9 <unknown> 2400 32 9 <unknown> 2464 32 9 <unknown> 2528 32 9 <unknown> 2592 6"
                        "4 9 <unknown> 2688 256 12 col_name:329";
  *(_QWORD *)(v2 + 16) = data::GivingExcelConfig::init;
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
  v4[536862731] = -234881024;
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
  v4[536862803] = -218959118;
  v4[536862812] = -202116109;
  v4[536862813] = -202116109;
  std::string::basic_string(v2 + 416);
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 480),
    "ID",
    (const std::allocator<char> *)(v2 + 32));
  t = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 480), &this->id) != 0;
  std::string::~string((void *)(v2 + 480));
  *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( t )
  {
    *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 544) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 64 + 127) & 7) >= *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 544, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 544),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/GivingExcelConfig.gen.cpp",
      "init",
      334);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 544),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v5, (const char (*)[23])byte_1AD3A120);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
    *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 608),
      &byte_1AD670E0,
      (const std::allocator<char> *)(v2 + 48));
    ta = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 608), &this->talk_id) != 0;
    std::string::~string((void *)(v2 + 608));
    *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( ta )
    {
      *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 672) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 672, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 672),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_auto/GivingExcelConfig.gen.cpp",
        "init",
        339);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 672),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v7, (const char (*)[29])byte_1AD67120);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
      *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 736),
        &byte_1AD67160,
        (const std::allocator<char> *)(v2 + 64));
      tb = common::tools::TxtFile::Row::assignToNum<unsigned int>(
             row,
             (const std::string *)(v2 + 736),
             &this->mistake_talk_id) != 0;
      std::string::~string((void *)(v2 + 736));
      *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( tb )
      {
        *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 800) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 64 + 127) & 7) >= *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 800, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 800),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_auto/GivingExcelConfig.gen.cpp",
          "init",
          344);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 800),
               (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v8, (const char (*)[33])byte_1AD671A0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 800));
        *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 864),
          &byte_1AD67200,
          (const std::allocator<char> *)(v2 + 80));
        tc = common::tools::TxtFile::Row::assignToNum<bool>(row, (const std::string *)(v2 + 864), &this->is_repeatable) != 0;
        std::string::~string((void *)(v2 + 864));
        *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( tc )
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
            "./src/txt_data_auto/GivingExcelConfig.gen.cpp",
            "init",
            349);
          v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v2 + 928),
                 (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v9, (const char (*)[33])byte_1AD67240);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 928));
          *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
          v6 = -1;
        }
        else
        {
          *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 96);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 992),
            &byte_1AD672A0,
            (const std::allocator<char> *)(v2 + 96));
          td = common::tools::TxtFile::Row::assignToEnum<data::GivingMethod>(
                 row,
                 (const std::string *)(v2 + 992),
                 &this->giving_method) != 0;
          std::string::~string((void *)(v2 + 992));
          *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 96);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( td )
          {
            *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 1056) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 1087) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 64 + 127) & 7) >= *(_BYTE *)(((v2 + 1087) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 1056, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 1056),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_auto/GivingExcelConfig.gen.cpp",
              "init",
              354);
            v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 1056),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v10, (const char (*)[33])byte_1AD672E0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1056));
            *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -117901064;
            v6 = -1;
          }
          else
          {
            std::vector<data::IdCountConfig>::resize(&this->exact_items, 5uLL);
            array_count = 0;
            for ( i = 0; i <= 4; ++i )
            {
              snprintf((char *)(v2 + 2688), 0x100uLL, asc_1AD67340, i + 1);
              *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 112);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1120),
                (const char *)(v2 + 2688),
                (const std::allocator<char> *)(v2 + 112));
              te = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 1120));
              std::string::~string((void *)(v2 + 1120));
              *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 112);
              *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
              if ( !te )
              {
                tf = &std::vector<data::IdCountConfig>::operator[](&this->exact_items, i)->id;
                *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 128);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1184),
                  (const char *)(v2 + 2688),
                  (const std::allocator<char> *)(v2 + 128));
                LOBYTE(tf) = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                               row,
                               (const std::string *)(v2 + 1184),
                               tf) != 0;
                std::string::~string((void *)(v2 + 1184));
                *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 128);
                *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
                if ( (_BYTE)tf )
                {
                  *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 1248) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 1279) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 - 64 + 63) & 7) >= *(_BYTE *)(((v2 + 1279) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 1248, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 1248),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_auto/GivingExcelConfig.gen.cpp",
                    "init",
                    366);
                  v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 1248),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                          v11,
                          (const char (*)[14])byte_1AD38B80);
                  v13 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                          v12,
                          (const char (*)[256])(v2 + 2688));
                  common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])byte_1AD38BC0);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1248));
                  *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = -117901064;
                  v6 = -1;
                  goto LABEL_78;
                }
                snprintf((char *)(v2 + 2688), 0x100uLL, asc_1AD67380, i + 1);
                *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 144);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1312),
                  (const char *)(v2 + 2688),
                  (const std::allocator<char> *)(v2 + 144));
                tg = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 1312));
                std::string::~string((void *)(v2 + 1312));
                *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 144);
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
                if ( !tg )
                {
                  th = &std::vector<data::IdCountConfig>::operator[](&this->exact_items, i)->count;
                  *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 160);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1376),
                    (const char *)(v2 + 2688),
                    (const std::allocator<char> *)(v2 + 160));
                  LOBYTE(th) = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                 row,
                                 (const std::string *)(v2 + 1376),
                                 th) != 0;
                  std::string::~string((void *)(v2 + 1376));
                  *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 160);
                  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                  if ( (_BYTE)th )
                  {
                    *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 1440) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 1471) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 1471) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 1440, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 1440),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_auto/GivingExcelConfig.gen.cpp",
                      "init",
                      374);
                    v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 1440),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v15 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                            v14,
                            (const char (*)[14])byte_1AD38B80);
                    v16 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                            v15,
                            (const char (*)[256])(v2 + 2688));
                    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v16, (const char (*)[7])byte_1AD38BC0);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1440));
                    *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = -117901064;
                    v6 = -1;
                    goto LABEL_78;
                  }
                  array_count = i + 1;
                }
              }
            }
            std::vector<data::IdCountConfig>::resize(&this->exact_items, array_count);
            *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 176);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1504),
              &byte_1AD673C0,
              (const std::allocator<char> *)(v2 + 176));
            ti = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                   row,
                   (const std::string *)(v2 + 1504),
                   &this->exact_finish_talk_id) != 0;
            std::string::~string((void *)(v2 + 1504));
            *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 176);
            *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
            if ( ti )
            {
              *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 1568) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 1599) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 64 + 127) & 7) >= *(_BYTE *)(((v2 + 1599) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 1568, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 1568),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_auto/GivingExcelConfig.gen.cpp",
                "init",
                383);
              v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1568),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v17, (const char (*)[42])byte_1AD67400);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1568));
              *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = -117901064;
              v6 = -1;
            }
            else
            {
              *(_DWORD *)(((v2 + 1632) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 192);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1632),
                &byte_1AD67460,
                (const std::allocator<char> *)(v2 + 192));
              tj = common::tools::TxtFile::Row::assignToStr(
                     row,
                     (const std::string *)(v2 + 1632),
                     (std::string *)(v2 + 416)) != 0;
              std::string::~string((void *)(v2 + 1632));
              *(_DWORD *)(((v2 + 1632) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 192);
              *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
              if ( tj )
              {
                *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 1696) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1727) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 1727) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 1696, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 1696),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_auto/GivingExcelConfig.gen.cpp",
                  "init",
                  388);
                v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1696),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v18, (const char (*)[32])byte_1AD674A0);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1696));
                *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = -117901064;
                v6 = -1;
              }
              else
              {
                v19 = ((v2 + 352) >> 3) + 2147450880;
                *(_WORD *)v19 = 0;
                *(_BYTE *)(v19 + 2) = 0;
                v20 = (_DWORD *)(((v2 + 2592) >> 3) + 2147450880);
                *v20 = 0;
                v20[1] = 0;
                *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 208);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 2592),
                  ";",
                  (const std::allocator<char> *)(v2 + 208));
                *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 224);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 2624),
                  ",",
                  (const std::allocator<char> *)(v2 + 224));
                *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
                std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 240));
                std::vector<std::string>::vector(
                  (std::vector<std::string> *const)(v2 + 352),
                  (std::initializer_list<std::string >)__PAIR128__(2LL, v2 + 2592),
                  (const std::vector<std::string>::allocator_type *)(v2 + 240));
                v21 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                        (const std::string *)(v2 + 416),
                        (const std::vector<std::string> *)(v2 + 352),
                        &this->giving_group_ids,
                        1) != 0;
                std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 352));
                v22 = ((v2 + 352) >> 3) + 2147450880;
                *(_WORD *)v22 = -1800;
                *(_BYTE *)(v22 + 2) = -8;
                std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 240));
                *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                for ( j = (char *)(v2 + 2656); j != (char *)(v2 + 2592); std::string::~string(j) )
                  j -= 32;
                v24 = (_DWORD *)(((v2 + 2592) >> 3) + 2147450880);
                *v24 = -117901064;
                v24[1] = -117901064;
                std::allocator<char>::~allocator(v2 + 224);
                *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                std::allocator<char>::~allocator(v2 + 208);
                *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                if ( v21 )
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
                    "./src/txt_data_auto/GivingExcelConfig.gen.cpp",
                    "init",
                    393);
                  v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 1760),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                    v25,
                    (const char (*)[32])byte_1AD674A0);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1760));
                  *(_DWORD *)(((v2 + 1760) >> 3) + 0x7FFF8000) = -117901064;
                  v6 = -1;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1824) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 256);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1824),
                    &byte_1AD674E0,
                    (const std::allocator<char> *)(v2 + 256));
                  v26 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                          row,
                          (const std::string *)(v2 + 1824),
                          &this->giving_group_count) != 0;
                  std::string::~string((void *)(v2 + 1824));
                  *(_DWORD *)(((v2 + 1824) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 256);
                  *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                  if ( v26 )
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
                      "./src/txt_data_auto/GivingExcelConfig.gen.cpp",
                      "init",
                      398);
                    v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 1888),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                      v27,
                      (const char (*)[36])byte_1AD67520);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1888));
                    *(_DWORD *)(((v2 + 1888) >> 3) + 0x7FFF8000) = -117901064;
                    v6 = -1;
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 1952) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 272);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 1952),
                      &byte_1AD67580,
                      (const std::allocator<char> *)(v2 + 272));
                    v28 = common::tools::TxtFile::Row::assignToNum<bool>(
                            row,
                            (const std::string *)(v2 + 1952),
                            &this->is_remove_item) != 0;
                    std::string::~string((void *)(v2 + 1952));
                    *(_DWORD *)(((v2 + 1952) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 272);
                    *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                    if ( v28 )
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
                        "./src/txt_data_auto/GivingExcelConfig.gen.cpp",
                        "init",
                        403);
                      v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 2016),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                        v29,
                        (const char (*)[39])byte_1AD675C0);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2016));
                      *(_DWORD *)(((v2 + 2016) >> 3) + 0x7FFF8000) = -117901064;
                      v6 = -1;
                    }
                    else
                    {
                      *(_DWORD *)(((v2 + 2080) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 288);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 2080),
                        &byte_1AD67620,
                        (const std::allocator<char> *)(v2 + 288));
                      v30 = common::tools::TxtFile::Row::assignToNum<bool>(
                              row,
                              (const std::string *)(v2 + 2080),
                              &this->is_reset) != 0;
                      std::string::~string((void *)(v2 + 2080));
                      *(_DWORD *)(((v2 + 2080) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 288);
                      *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
                      if ( v30 )
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
                          "./src/txt_data_auto/GivingExcelConfig.gen.cpp",
                          "init",
                          408);
                        v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                (common::milog::MiLogStream *const)(v2 + 2144),
                                (const char (*)[16])"[CONFIG_ERROR] ");
                        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                          v31,
                          (const char (*)[33])byte_1AD67660);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2144));
                        *(_DWORD *)(((v2 + 2144) >> 3) + 0x7FFF8000) = -117901064;
                        v6 = -1;
                      }
                      else
                      {
                        *(_DWORD *)(((v2 + 2208) >> 3) + 0x7FFF8000) = 0;
                        *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 304);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 2208),
                          &byte_1AD676C0,
                          (const std::allocator<char> *)(v2 + 304));
                        v32 = common::tools::TxtFile::Row::assignToNum<bool>(
                                row,
                                (const std::string *)(v2 + 2208),
                                &this->is_mp_enable) != 0;
                        std::string::~string((void *)(v2 + 2208));
                        *(_DWORD *)(((v2 + 2208) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 304);
                        *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
                        if ( v32 )
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
                            "./src/txt_data_auto/GivingExcelConfig.gen.cpp",
                            "init",
                            413);
                          v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                  (common::milog::MiLogStream *const)(v2 + 2272),
                                  (const char (*)[16])"[CONFIG_ERROR] ");
                          common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                            v33,
                            (const char (*)[45])byte_1AD67700);
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2272));
                          *(_DWORD *)(((v2 + 2272) >> 3) + 0x7FFF8000) = -117901064;
                          v6 = -1;
                        }
                        else
                        {
                          *(_DWORD *)(((v2 + 2336) >> 3) + 0x7FFF8000) = 0;
                          *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 1;
                          std::allocator<char>::allocator(v2 + 320);
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)(v2 + 2336),
                            &byte_1AD67760,
                            (const std::allocator<char> *)(v2 + 320));
                          v34 = common::tools::TxtFile::Row::assignToEnum<data::GivingType>(
                                  row,
                                  (const std::string *)(v2 + 2336),
                                  &this->giving_type) != 0;
                          std::string::~string((void *)(v2 + 2336));
                          *(_DWORD *)(((v2 + 2336) >> 3) + 0x7FFF8000) = -117901064;
                          std::allocator<char>::~allocator(v2 + 320);
                          *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
                          if ( v34 )
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
                              "./src/txt_data_auto/GivingExcelConfig.gen.cpp",
                              "init",
                              418);
                            v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                    (common::milog::MiLogStream *const)(v2 + 2400),
                                    (const char (*)[16])"[CONFIG_ERROR] ");
                            common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                              v35,
                              (const char (*)[33])byte_1AD677A0);
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2400));
                            *(_DWORD *)(((v2 + 2400) >> 3) + 0x7FFF8000) = -117901064;
                            v6 = -1;
                          }
                          else
                          {
                            *(_DWORD *)(((v2 + 2464) >> 3) + 0x7FFF8000) = 0;
                            *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 1;
                            std::allocator<char>::allocator(v2 + 336);
                            std::string::basic_string<std::allocator<char>>(
                              (std::string *const)(v2 + 2464),
                              &byte_1AD67800,
                              (const std::allocator<char> *)(v2 + 336));
                            v36 = common::tools::TxtFile::Row::assignToNum<bool>(
                                    row,
                                    (const std::string *)(v2 + 2464),
                                    &this->is_take_back) != 0;
                            std::string::~string((void *)(v2 + 2464));
                            *(_DWORD *)(((v2 + 2464) >> 3) + 0x7FFF8000) = -117901064;
                            std::allocator<char>::~allocator(v2 + 336);
                            *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
                            if ( v36 )
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
                                "./src/txt_data_auto/GivingExcelConfig.gen.cpp",
                                "init",
                                423);
                              v37 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                      (common::milog::MiLogStream *const)(v2 + 2528),
                                      (const char (*)[16])"[CONFIG_ERROR] ");
                              common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                                v37,
                                (const char (*)[36])byte_1AD67840);
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2528));
                              *(_DWORD *)(((v2 + 2528) >> 3) + 0x7FFF8000) = -117901064;
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
LABEL_78:
  std::string::~string((void *)(v2 + 416));
  if ( v52 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8148) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862736) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450936 - (((_DWORD)v4 + 2147450944) & 0xFFFFFFF8) + 280) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF8170) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 3008LL, v52);
  }
  return v6;
};

// Line 431: range 00000000143F5D34-00000000143F7000
int32_t __cdecl data::GivingGroupExcelConfig::init(
        data::GivingGroupExcelConfig *const this,
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
  bool v15; // r14
  common::milog::MiLogStream *v16; // rax
  bool v17; // r14
  common::milog::MiLogStream *v18; // rax
  bool v19; // r14
  common::milog::MiLogStream *v20; // rax
  bool t; // [rsp+0h] [rbp-490h]
  bool ta; // [rsp+0h] [rbp-490h]
  char v24[1136]; // [rsp+20h] [rbp-470h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1088LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "22 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 24 9 <unknown> 224 32 11 val_str:432 288 32 9 "
                        "<unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <"
                        "unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <u"
                        "nknown> 992 64 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::GivingGroupExcelConfig::init;
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
  v4[536862748] = -218959118;
  v4[536862750] = -218959118;
  v4[536862753] = -202116109;
  std::string::basic_string(v2 + 224);
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 288),
    "ID",
    (const std::allocator<char> *)(v2 + 32));
  t = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 288), &this->id) != 0;
  std::string::~string((void *)(v2 + 288));
  *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( t )
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
      "./src/txt_data_auto/GivingExcelConfig.gen.cpp",
      "init",
      435);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 352),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v5, (const char (*)[23])byte_1AD3A120);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
    *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 416),
      &byte_1AD4B3E0,
      (const std::allocator<char> *)(v2 + 48));
    ta = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 416), (std::string *)(v2 + 224)) != 0;
    std::string::~string((void *)(v2 + 416));
    *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( ta )
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
        "./src/txt_data_auto/GivingExcelConfig.gen.cpp",
        "init",
        440);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 480),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v7, (const char (*)[29])byte_1AD4B420);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
      *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v8 = ((v2 + 160) >> 3) + 2147450880;
      *(_WORD *)v8 = 0;
      *(_BYTE *)(v8 + 2) = 0;
      v9 = (_DWORD *)(((v2 + 992) >> 3) + 2147450880);
      *v9 = 0;
      v9[1] = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 992),
        ";",
        (const std::allocator<char> *)(v2 + 64));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 1024),
        ",",
        (const std::allocator<char> *)(v2 + 80));
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 96));
      std::vector<std::string>::vector(
        (std::vector<std::string> *const)(v2 + 160),
        (std::initializer_list<std::string >)__PAIR128__(2LL, v2 + 992),
        (const std::vector<std::string>::allocator_type *)(v2 + 96));
      v10 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
              (const std::string *)(v2 + 224),
              (const std::vector<std::string> *)(v2 + 160),
              &this->item_ids,
              1) != 0;
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 160));
      v11 = ((v2 + 160) >> 3) + 2147450880;
      *(_WORD *)v11 = -1800;
      *(_BYTE *)(v11 + 2) = -8;
      std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 96));
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      for ( i = (char *)(v2 + 1056); i != (char *)(v2 + 992); std::string::~string(i) )
        i -= 32;
      v13 = (_DWORD *)(((v2 + 992) >> 3) + 2147450880);
      *v13 = -117901064;
      v13[1] = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( v10 )
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
          "./src/txt_data_auto/GivingExcelConfig.gen.cpp",
          "init",
          445);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 544),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v14, (const char (*)[29])byte_1AD4B420);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
        *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 112);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 608),
          &byte_1AD67A40,
          (const std::allocator<char> *)(v2 + 112));
        v15 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                row,
                (const std::string *)(v2 + 608),
                &this->finish_talk_id) != 0;
        std::string::~string((void *)(v2 + 608));
        *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 112);
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
        if ( v15 )
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
            "./src/txt_data_auto/GivingExcelConfig.gen.cpp",
            "init",
            450);
          v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 672),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v16, (const char (*)[36])byte_1AD67A80);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
          *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
          v6 = -1;
        }
        else
        {
          *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 128);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 736),
            &byte_1AD67AE0,
            (const std::allocator<char> *)(v2 + 128));
          v17 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                  row,
                  (const std::string *)(v2 + 736),
                  &this->mistake_talk_id) != 0;
          std::string::~string((void *)(v2 + 736));
          *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 128);
          *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
          if ( v17 )
          {
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
              "./src/txt_data_auto/GivingExcelConfig.gen.cpp",
              "init",
              455);
            v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 800),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v18, (const char (*)[39])byte_1AD67B20);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 800));
            *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
            v6 = -1;
          }
          else
          {
            *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 144);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 864),
              &byte_1AD67B80,
              (const std::allocator<char> *)(v2 + 144));
            v19 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                    row,
                    (const std::string *)(v2 + 864),
                    &this->finish_dialog_id) != 0;
            std::string::~string((void *)(v2 + 864));
            *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 144);
            *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
            if ( v19 )
            {
              *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 928) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 959) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 959) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 928, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 928),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_auto/GivingExcelConfig.gen.cpp",
                "init",
                460);
              v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 928),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v20, (const char (*)[36])byte_1AD67BC0);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 928));
              *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
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
  std::string::~string((void *)(v2 + 224));
  if ( v24 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8080) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862730) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450912 - (((_DWORD)v4 + 2147450920) & 0xFFFFFFF8) + 104) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1088LL, v24);
  }
  return v6;
};

// Line 469: range 00000000143F7002-00000000143F81AA
int32_t __cdecl data::GivingExcelConfigMgrBase::loadGivingExcelConfig(
        data::GivingExcelConfigMgrBase *const this,
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
  unsigned __int64 v12; // rax
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
  data::GivingExcelConfig *v23; // rax
  unsigned int *v24; // rcx
  data::GivingExcelConfig *v25; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::GivingExcelConfig>,false,false>,bool> v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  unsigned __int64 v29; // rax
  int v30; // edx
  char *i; // r14
  int32_t v33; // [rsp+1Ch] [rbp-86B4h]
  std::string *__for_begin; // [rsp+38h] [rbp-8698h]
  const common::tools::TxtFile::Row *row_ptr; // [rsp+58h] [rbp-8678h]
  char v37[34416]; // [rsp+60h] [rbp-8670h] BYREF

  v2 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_10(34368LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "15 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 4 5 r:486 112 4 9 <unknown> 128 32 9 <u"
                        "nknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <un"
                        "known> 512 96 9 paths:470 640 104 8 data:489 784 376 24 debug_message_stream:497 1232 32880 12 txt_file:480";
  *(_QWORD *)(v2 + 16) = data::GivingExcelConfigMgrBase::loadGivingExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -234556924;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862739] = -218959118;
  v4[536862743] = -218959360;
  v4[536862744] = 62194;
  v4[536862756] = -218959360;
  v4[536862757] = -218959118;
  v4[536862758] = 62194;
  v4[536863786] = -202116109;
  v4[536863787] = -202116109;
  v4[536863788] = -202116109;
  v4[536863789] = -202116109;
  v4[536863790] = -202116109;
  v4[536863791] = -202116109;
  v4[536863792] = -202116109;
  v4[536863793] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 512),
    "/txt/GivingData.txt",
    (const std::allocator<char> *)(v2 + 48));
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 544),
    "/txt/GivingData_ActivitySpice.txt",
    (const std::allocator<char> *)(v2 + 64));
  std::allocator<char>::~allocator(v2 + 64);
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 80);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 576),
    "/txt/GadgetGivingData.txt",
    (const std::allocator<char> *)(v2 + 80));
  std::allocator<char>::~allocator(v2 + 80);
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
  for ( __for_begin = (std::string *)(v2 + 512); __for_begin != (std::string *)(v2 + 608); ++__for_begin )
  {
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    p_real_data_base_dir = &config->real_data_base_dir;
    if ( *(char *)(((v2 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) )
    {
      p_real_data_base_dir = (std::string *)32;
      __asan_report_store_n(v2 + 128, 32LL);
    }
    std::operator+<char>((std::string *)(v2 + 128), p_real_data_base_dir, __for_begin);
    std::string::operator=(__for_begin, v2 + 128);
    std::string::~string((void *)(v2 + 128));
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
    __asan_unpoison_stack_memory(v2 + 1232, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v2 + 1232));
    v6 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v2 + 1232), v6) )
    {
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 192, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_auto/GivingExcelConfig.gen.cpp",
        "loadGivingExcelConfig",
        483);
      v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v2 + 192),
             (const char (*)[8])byte_1AD383A0);
      v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])byte_1AD383E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
      v33 = -1;
      v9 = 0;
    }
    else
    {
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 4;
      v10 = *(unsigned __int8 *)(((v2 + 96) >> 3) + 0x7FFF8000);
      if ( (_BYTE)v10 != 0 && (char)v10 <= 3 )
        __asan_report_store4(v2 + 96, v6);
      for ( *(_DWORD *)(v2 + 96) = 0; ; ++*(_DWORD *)(v2 + 96) )
      {
        v11 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v2 + 1232));
        if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v2 + 96);
        if ( v11 <= *(_DWORD *)(v2 + 96) )
          break;
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v2 + 1232), *(_DWORD *)(v2 + 96));
        v12 = ((v2 + 640) >> 3) + 2147450880;
        *(_DWORD *)v12 = 0;
        *(_DWORD *)(v12 + 4) = 0;
        *(_DWORD *)(v12 + 8) = 0;
        *(_BYTE *)(v12 + 12) = 0;
        data::GivingExcelConfig::GivingExcelConfig((data::GivingExcelConfig *const)(v2 + 640));
        if ( row_ptr )
        {
          if ( data::GivingExcelConfig::init((data::GivingExcelConfig *const)(v2 + 640), row_ptr) )
          {
            __asan_unpoison_stack_memory(v2 + 784, 376LL);
            std::ostringstream::basic_ostringstream(v2 + 784);
            v15 = std::operator<<<std::char_traits<char>>(v2 + 784, &unk_1AD67E80);
            if ( *(_BYTE *)(((v2 + 648) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 648) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v2 + 648);
            std::ostream::operator<<(v15, *(unsigned int *)(v2 + 648));
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
              "./src/txt_data_auto/GivingExcelConfig.gen.cpp",
              "loadGivingExcelConfig",
              499);
            v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 320),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v17 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v16, (const char (*)[2])"<");
            v18 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, __for_begin);
            v19 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v18,
                    (const char (*)[11])byte_1AD384E0);
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v2 + 96);
            v20 = (unsigned int)(*(_DWORD *)(v2 + 96) + 1);
            if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v2 + 112, v20);
            *(_DWORD *)(v2 + 112) = v20;
            v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v19,
                    (const unsigned int *)(v2 + 112));
            v22 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v21,
                    (const char (*)[13])byte_1AD38520);
            *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 384) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 384, 32LL);
            }
            std::ostringstream::str(v2 + 384, v2 + 784);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, (const std::string *)(v2 + 384));
            std::string::~string((void *)(v2 + 384));
            *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
            *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
            v33 = -1;
            std::ostringstream::~ostringstream(v2 + 784);
            __asan_poison_stack_memory(v2 + 784, 376LL);
            v14 = 0;
          }
          else
          {
            v23 = std::move<data::GivingExcelConfig &>((data::GivingExcelConfig *)(v2 + 640));
            v26 = std::unordered_map<unsigned int,data::GivingExcelConfig>::emplace<unsigned int &,data::GivingExcelConfig>(
                    &this->giving_excel_config_map,
                    (unsigned int *)(v2 + 648),
                    v23,
                    v24,
                    v25);
            if ( !v26.second )
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
                "./src/txt_data_auto/GivingExcelConfig.gen.cpp",
                "loadGivingExcelConfig",
                504);
              v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 448),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v28 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v27, (const char (*)[9])byte_1AD67EC0);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v28,
                (const unsigned int *)(v2 + 648));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
              *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
              v33 = -1;
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
            "./src/txt_data_auto/GivingExcelConfig.gen.cpp",
            "loadGivingExcelConfig",
            492);
          v13 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v2 + 256),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 96));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
          *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
          v33 = -1;
          v14 = 0;
        }
        data::GivingExcelConfig::~GivingExcelConfig((data::GivingExcelConfig *const)(v2 + 640));
        v29 = ((v2 + 640) >> 3) + 2147450880;
        *(_DWORD *)v29 = -117901064;
        *(_DWORD *)(v29 + 4) = -117901064;
        *(_DWORD *)(v29 + 8) = -117901064;
        *(_BYTE *)(v29 + 12) = -8;
        if ( v14 != 1 )
        {
          v30 = 0;
          goto LABEL_45;
        }
        if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v2 + 96);
      }
      v30 = 1;
LABEL_45:
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      v9 = v30 == 1;
    }
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v2 + 1232));
    __asan_poison_stack_memory(v2 + 1232, 32880LL);
    if ( !v9 )
      goto LABEL_49;
  }
  v33 = 0;
LABEL_49:
  for ( i = (char *)(v2 + 608); i != (char *)(v2 + 512); std::string::~string(i) )
    i -= 32;
  if ( v37 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF90C0) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862741) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450956 - (((_DWORD)v4 + 2147450964) & 0xFFFFFFF8) + 4220) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_10(v2, 34368LL, v37);
  }
  return v33;
};

// Line 513: range 00000000143F81AC-00000000143F92CB
int32_t __cdecl data::GivingExcelConfigMgrBase::loadGivingGroupExcelConfig(
        data::GivingExcelConfigMgrBase *const this,
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
  unsigned __int64 v12; // rax
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
  data::GivingGroupExcelConfig *v23; // rax
  unsigned int *v24; // rcx
  data::GivingGroupExcelConfig *v25; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::GivingGroupExcelConfig>,false,false>,bool> v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  unsigned __int64 v29; // rax
  int v30; // edx
  char *i; // r14
  int32_t v33; // [rsp+1Ch] [rbp-8654h]
  std::string *__for_begin; // [rsp+38h] [rbp-8638h]
  const common::tools::TxtFile::Row *row_ptr; // [rsp+58h] [rbp-8618h]
  char v37[34320]; // [rsp+60h] [rbp-8610h] BYREF

  v2 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_10(34272LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "14 48 1 9 <unknown> 64 1 9 <unknown> 80 4 5 r:529 96 4 9 <unknown> 112 32 9 <unknown> 176 32 9 <"
                        "unknown> 240 32 9 <unknown> 304 32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496 56 8 da"
                        "ta:532 592 64 9 paths:514 688 376 24 debug_message_stream:540 1136 32880 12 txt_file:523";
  *(_QWORD *)(v2 + 16) = data::GivingExcelConfigMgrBase::loadGivingGroupExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = 61956;
  v4[536862724] = -219021312;
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
  v4[536862737] = -218959360;
  v4[536862738] = 62194;
  v4[536862740] = -219021312;
  v4[536862741] = 62194;
  v4[536862753] = -218959360;
  v4[536862754] = -218959118;
  v4[536862755] = 62194;
  v4[536863783] = -202116109;
  v4[536863784] = -202116109;
  v4[536863785] = -202116109;
  v4[536863786] = -202116109;
  v4[536863787] = -202116109;
  v4[536863788] = -202116109;
  v4[536863789] = -202116109;
  v4[536863790] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 592),
    "/txt/GivingData_Item_list.txt",
    (const std::allocator<char> *)(v2 + 48));
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 624),
    "/txt/Item_list_ActivitySpice.txt",
    (const std::allocator<char> *)(v2 + 64));
  std::allocator<char>::~allocator(v2 + 64);
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  for ( __for_begin = (std::string *)(v2 + 592); __for_begin != (std::string *)(v2 + 656); ++__for_begin )
  {
    *(_DWORD *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
    p_real_data_base_dir = &config->real_data_base_dir;
    if ( *(char *)(((v2 + 112) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 143) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 143) >> 3) + 0x7FFF8000) )
    {
      p_real_data_base_dir = (std::string *)32;
      __asan_report_store_n(v2 + 112, 32LL);
    }
    std::operator+<char>((std::string *)(v2 + 112), p_real_data_base_dir, __for_begin);
    std::string::operator=(__for_begin, v2 + 112);
    std::string::~string((void *)(v2 + 112));
    *(_DWORD *)(((v2 + 112) >> 3) + 0x7FFF8000) = -117901064;
    __asan_unpoison_stack_memory(v2 + 1136, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v2 + 1136));
    v6 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v2 + 1136), v6) )
    {
      *(_DWORD *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 176) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 80 + 31) & 7) >= *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 176, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 176),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_auto/GivingExcelConfig.gen.cpp",
        "loadGivingGroupExcelConfig",
        526);
      v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v2 + 176),
             (const char (*)[8])byte_1AD383A0);
      v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])byte_1AD383E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
      *(_DWORD *)(((v2 + 176) >> 3) + 0x7FFF8000) = -117901064;
      v33 = -1;
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
        v11 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v2 + 1136));
        if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v2 + 80);
        if ( v11 <= *(_DWORD *)(v2 + 80) )
          break;
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v2 + 1136), *(_DWORD *)(v2 + 80));
        v12 = ((v2 + 496) >> 3) + 2147450880;
        *(_DWORD *)v12 = 0;
        *(_WORD *)(v12 + 4) = 0;
        *(_BYTE *)(v12 + 6) = 0;
        data::GivingGroupExcelConfig::GivingGroupExcelConfig((data::GivingGroupExcelConfig *const)(v2 + 496));
        if ( row_ptr )
        {
          if ( data::GivingGroupExcelConfig::init((data::GivingGroupExcelConfig *const)(v2 + 496), row_ptr) )
          {
            __asan_unpoison_stack_memory(v2 + 688, 376LL);
            std::ostringstream::basic_ostringstream(v2 + 688);
            v15 = std::operator<<<std::char_traits<char>>(v2 + 688, &unk_1AD67E80);
            if ( *(_BYTE *)(((v2 + 504) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 504) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v2 + 504);
            std::ostream::operator<<(v15, *(unsigned int *)(v2 + 504));
            *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 304) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 32 + 111) & 7) >= *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 304, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 304),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_auto/GivingExcelConfig.gen.cpp",
              "loadGivingGroupExcelConfig",
              542);
            v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 304),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v17 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v16, (const char (*)[2])"<");
            v18 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, __for_begin);
            v19 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v18,
                    (const char (*)[11])byte_1AD384E0);
            *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v2 + 80);
            v20 = (unsigned int)(*(_DWORD *)(v2 + 80) + 1);
            if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v2 + 96, v20);
            *(_DWORD *)(v2 + 96) = v20;
            v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v19,
                    (const unsigned int *)(v2 + 96));
            v22 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v21,
                    (const char (*)[13])byte_1AD38520);
            *(_DWORD *)(((v2 + 368) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 368) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 399) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 399) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 368, 32LL);
            }
            std::ostringstream::str(v2 + 368, v2 + 688);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, (const std::string *)(v2 + 368));
            std::string::~string((void *)(v2 + 368));
            *(_DWORD *)(((v2 + 368) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
            *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
            v33 = -1;
            std::ostringstream::~ostringstream(v2 + 688);
            __asan_poison_stack_memory(v2 + 688, 376LL);
            v14 = 0;
          }
          else
          {
            v23 = std::move<data::GivingGroupExcelConfig &>((data::GivingGroupExcelConfig *)(v2 + 496));
            v26 = std::unordered_map<unsigned int,data::GivingGroupExcelConfig>::emplace<unsigned int &,data::GivingGroupExcelConfig>(
                    &this->giving_group_excel_config_map,
                    (unsigned int *)(v2 + 504),
                    v23,
                    v24,
                    v25);
            if ( !v26.second )
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
                4u,
                "./src/txt_data_auto/GivingExcelConfig.gen.cpp",
                "loadGivingGroupExcelConfig",
                547);
              v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 432),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v28 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v27, (const char (*)[9])byte_1AD67EC0);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v28,
                (const unsigned int *)(v2 + 504));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 432));
              *(_DWORD *)(((v2 + 432) >> 3) + 0x7FFF8000) = -117901064;
              v33 = -1;
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
          *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 240) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 32 + 47) & 7) >= *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 240, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 240),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/GivingExcelConfig.gen.cpp",
            "loadGivingGroupExcelConfig",
            535);
          v13 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v2 + 240),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 80));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
          *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = -117901064;
          v33 = -1;
          v14 = 0;
        }
        data::GivingGroupExcelConfig::~GivingGroupExcelConfig((data::GivingGroupExcelConfig *const)(v2 + 496));
        v29 = ((v2 + 496) >> 3) + 2147450880;
        *(_DWORD *)v29 = -117901064;
        *(_WORD *)(v29 + 4) = -1800;
        *(_BYTE *)(v29 + 6) = -8;
        if ( v14 != 1 )
        {
          v30 = 0;
          goto LABEL_45;
        }
        if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v2 + 80);
      }
      v30 = 1;
LABEL_45:
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      v9 = v30 == 1;
    }
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v2 + 1136));
    __asan_poison_stack_memory(v2 + 1136, 32880LL);
    if ( !v9 )
      goto LABEL_49;
  }
  v33 = 0;
LABEL_49:
  for ( i = (char *)(v2 + 656); i != (char *)(v2 + 592); std::string::~string(i) )
    i -= 32;
  if ( v37 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 76) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF90B4) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862742) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450960 - (((_DWORD)v4 + 2147450968) & 0xFFFFFFF8) + 4204) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_10(v2, 34272LL, v37);
  }
  return v33;
};

// Line 556: range 00000000143F92CC-00000000143F95F0
int32_t __cdecl data::GivingExcelConfigMgrBase::loadConfig(
        data::GivingExcelConfigMgrBase *const this,
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
  *(_QWORD *)(v2 + 16) = data::GivingExcelConfigMgrBase::loadConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  if ( data::GivingExcelConfigMgrBase::loadGivingExcelConfig(this, config) )
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
      "./src/txt_data_auto/GivingExcelConfig.gen.cpp",
      "loadConfig",
      559);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      v5,
      (const char (*)[29])"loadGivingExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else if ( data::GivingExcelConfigMgrBase::loadGivingGroupExcelConfig(this, config) )
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
      "./src/txt_data_auto/GivingExcelConfig.gen.cpp",
      "loadConfig",
      564);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      v7,
      (const char (*)[34])"loadGivingGroupExcelConfig failed");
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

// Line 571: range 00000000143F95F2-00000000143F9604
int32_t __cdecl data::GivingExcelConfigMgrBase::rewriteConfig(
        data::GivingExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 576: range 00000000143F9606-00000000143F9618
int32_t __cdecl data::GivingExcelConfigMgrBase::finalConfig(
        data::GivingExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 581: range 00000000143F961A-00000000143F97D5
data::GivingExcelConfig *__fastcall data::GivingExcelConfigMgrBase::findGivingExcelConfig(
        data::GivingExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::GivingExcelConfigMap *p_giving_excel_config_map; // rdx
  data::GivingExcelConfigMap *v6; // rdx
  bool v7; // al
  data::GivingExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:580 64 8 8 iter:582 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::GivingExcelConfigMgrBase::findGivingExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_giving_excel_config_map = &this->giving_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::GivingExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::GivingExcelConfig>::find(
                                                                                       p_giving_excel_config_map,
                                                                                       (const std::unordered_map<unsigned int,data::GivingExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->giving_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::GivingExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::GivingExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::GivingExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GivingExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GivingExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::GivingExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::GivingExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 594: range 00000000143F97D6-00000000143F9991
const data::GivingExcelConfig *__fastcall data::GivingExcelConfigMgrBase::findGivingExcelConfig(
        const data::GivingExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::GivingExcelConfigMap *p_giving_excel_config_map; // rdx
  data::GivingExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::GivingExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:593 64 8 8 iter:595 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::GivingExcelConfigMgrBase::findGivingExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_giving_excel_config_map = &this->giving_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::GivingExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::GivingExcelConfig>::find(
                                                                                             p_giving_excel_config_map,
                                                                                             (const std::unordered_map<unsigned int,data::GivingExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->giving_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::GivingExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::GivingExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::GivingExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GivingExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GivingExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GivingExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GivingExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 607: range 00000000143F9992-00000000143F9B4D
data::GivingGroupExcelConfig *__fastcall data::GivingExcelConfigMgrBase::findGivingGroupExcelConfig(
        data::GivingExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::GivingGroupExcelConfigMap *p_giving_group_excel_config_map; // rdx
  data::GivingGroupExcelConfigMap *v6; // rdx
  bool v7; // al
  data::GivingGroupExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:606 64 8 8 iter:608 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::GivingExcelConfigMgrBase::findGivingGroupExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_giving_group_excel_config_map = &this->giving_group_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::GivingGroupExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::GivingGroupExcelConfig>::find(
                                                                                            p_giving_group_excel_config_map,
                                                                                            (const std::unordered_map<unsigned int,data::GivingGroupExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->giving_group_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::GivingGroupExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::GivingGroupExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::GivingGroupExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GivingGroupExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GivingGroupExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::GivingGroupExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::GivingGroupExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 620: range 00000000143F9B4E-00000000143F9D09
const data::GivingGroupExcelConfig *__fastcall data::GivingExcelConfigMgrBase::findGivingGroupExcelConfig(
        const data::GivingExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::GivingGroupExcelConfigMap *p_giving_group_excel_config_map; // rdx
  data::GivingGroupExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::GivingGroupExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:619 64 8 8 iter:621 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::GivingExcelConfigMgrBase::findGivingGroupExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_giving_group_excel_config_map = &this->giving_group_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::GivingGroupExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::GivingGroupExcelConfig>::find(
                                                                                                  p_giving_group_excel_config_map,
                                                                                                  (const std::unordered_map<unsigned int,data::GivingGroupExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->giving_group_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::GivingGroupExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::GivingGroupExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::GivingGroupExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GivingGroupExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GivingGroupExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GivingGroupExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GivingGroupExcelConfig>,false,false> *const)(v2 + 64))->second;
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

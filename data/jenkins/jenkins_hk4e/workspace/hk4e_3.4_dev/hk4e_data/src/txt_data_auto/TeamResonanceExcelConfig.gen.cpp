// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/TeamResonanceExcelConfig.gen.cpp

// Line 12: range 000000000CBBF570-000000000CBBF8E3
const char *__fastcall data::enumValToStr(data::TeamResonanceCondType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::TeamResonanceCondType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::TeamResonanceCondType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
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
  map = data::getTeamResonanceCondTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::TeamResonanceCondType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::TeamResonanceCondType,std::pair<std::string,std::string>>::find(map, (const std::map<data::TeamResonanceCondType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::TeamResonanceCondType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::TeamResonanceCondType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::TeamResonanceCondType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::TeamResonanceCondType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/TeamResonanceExcelConfig.gen.cpp",
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
    result = "INVALID_TeamResonanceCondType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::TeamResonanceCondType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::TeamResonanceCondType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 24: range 000000000CBBF8E4-000000000CBBFE9C
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::TeamResonanceCondType>,false,true>::pointer v10; // rax
  data::TeamResonanceCondType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::TeamResonanceCondType> *m; // [rsp+18h] [rbp-188h]
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
    m = data::getTeamResonanceCondTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::TeamResonanceCondType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::TeamResonanceCondType>::find(
                                                                                                  m,
                                                                                                  (const std::unordered_map<std::string,data::TeamResonanceCondType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::TeamResonanceCondType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::TeamResonanceCondType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::TeamResonanceCondType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::TeamResonanceCondType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::TeamResonanceCondType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/TeamResonanceExcelConfig.gen.cpp",
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
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::TeamResonanceCondType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::TeamResonanceCondType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/TeamResonanceExcelConfig.gen.cpp",
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

// Line 45: range 000000000CBBFE9D-000000000CBC07C2
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::TeamResonanceCondType> *i; // r14
  unsigned __int64 v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::TeamResonanceCondType>,false,true>::pointer v12; // rax
  data::TeamResonanceCondType second; // ecx
  char v14; // dl
  char v16[528]; // [rsp+20h] [rbp-210h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "12 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 4 9 <unknown> 112 8 5 "
                        "it:57 144 8 9 <unknown> 176 8 4 s:44 208 32 9 <unknown> 272 32 9 <unknown> 336 32 9 <unknown> 40"
                        "0 40 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234753535;
  v4[536862723] = 61956;
  v4[536862723] = -234881024;
  v4[536862724] = 62194;
  v4[536862724] = -234881024;
  v4[536862725] = 62194;
  v4[536862725] = -234881024;
  v4[536862726] = 62194;
  v4[536862727] = -219021312;
  v4[536862728] = 62194;
  v4[536862729] = -219021312;
  v4[536862730] = 62194;
  v4[536862731] = -219021312;
  v4[536862732] = 62194;
  v4[536862733] = -218103808;
  v4[536862734] = -202116109;
  *(_QWORD *)(v2 + 176) = s;
  if ( *(_QWORD *)(v2 + 176) )
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::TeamResonanceCondType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::TeamResonanceCondType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, e);
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::TeamResonanceCondType>::pair<char const(&)[13],data::TeamResonanceCondType,true>(
        (std::pair<const std::string,data::TeamResonanceCondType> *const)(v2 + 400),
        (const char (*)[13])byte_1A14ABE0,
        (data::TeamResonanceCondType *)(v2 + 96));
      std::allocator<std::pair<std::string const,data::TeamResonanceCondType>>::allocator((std::allocator<std::pair<const std::string,data::TeamResonanceCondType> > *const)(v2 + 64));
      std::unordered_map<std::string,data::TeamResonanceCondType>::unordered_map(
        &data::enumStrToVal(char const*,data::TeamResonanceCondType &)::m,
        (std::initializer_list<std::pair<const std::string,data::TeamResonanceCondType> >)__PAIR128__(1LL, v2 + 400),
        0LL,
        (const std::unordered_map<std::string,data::TeamResonanceCondType>::hasher *)(v2 + 32),
        (const std::unordered_map<std::string,data::TeamResonanceCondType>::key_equal *)(v2 + 48),
        (const std::unordered_map<std::string,data::TeamResonanceCondType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::TeamResonanceCondType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::TeamResonanceCondType>::~unordered_map,
        &data::enumStrToVal(char const*,data::TeamResonanceCondType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::TeamResonanceCondType>>::~allocator((std::allocator<std::pair<const std::string,data::TeamResonanceCondType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::TeamResonanceCondType> *)(v2 + 440);
            i != (std::pair<const std::string,data::TeamResonanceCondType> *)(v2 + 400);
            std::pair<std::string const,data::TeamResonanceCondType>::~pair(i) )
      {
        --i;
      }
      v7 = ((v2 + 400) >> 3) + 2147450880;
      *(_DWORD *)v7 = -117901064;
      *(_BYTE *)(v7 + 4) = -8;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((v2 + 272) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 80);
    v8 = *(const char **)(v2 + 176);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 272),
      v8,
      (const std::allocator<char> *)(v2 + 80));
    if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 112, v8);
    *(std::unordered_map<std::string,data::TeamResonanceCondType>::iterator *)(v2 + 112) = std::unordered_map<std::string,data::TeamResonanceCondType>::find(
                                                                                             &data::enumStrToVal(char const*,data::TeamResonanceCondType &)::m,
                                                                                             (const std::unordered_map<std::string,data::TeamResonanceCondType>::key_type *)(v2 + 272));
    std::string::~string((void *)(v2 + 272));
    *(_DWORD *)(((v2 + 272) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 80);
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 144, v2 + 272);
    *(std::unordered_map<std::string,data::TeamResonanceCondType>::iterator *)(v2 + 144) = std::unordered_map<std::string,data::TeamResonanceCondType>::end(&data::enumStrToVal(char const*,data::TeamResonanceCondType &)::m);
    v9 = (char *)(v2 + 144);
    v10 = std::__detail::operator==<std::pair<std::string const,data::TeamResonanceCondType>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::TeamResonanceCondType>,true> *)(v2 + 112),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::TeamResonanceCondType>,true> *)(v2 + 144));
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
    if ( v10 )
    {
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
        3u,
        "./src/txt_data_auto/TeamResonanceExcelConfig.gen.cpp",
        "enumStrToVal",
        60);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 336),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)(v2 + 176));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 336));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::TeamResonanceCondType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::TeamResonanceCondType>,false,true> *const)(v2 + 112));
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
    if ( *(char *)(((v2 + 208) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 239) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 48 + 31) & 7) >= *(_BYTE *)(((v2 + 239) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 208, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 208),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_auto/TeamResonanceExcelConfig.gen.cpp",
      "enumStrToVal",
      48);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
      (common::milog::MiLogStream *const)(v2 + 208),
      (const char (*)[14])"s is nullptr!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 208));
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

// Line 69: range 000000000CBC07C3-000000000CBC07D9
const char *__cdecl data::getDescription(data::TeamResonanceCondType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 74: range 000000000CBC07DA-000000000CBC098F
bool __cdecl data::isValidTeamResonanceCondType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::TeamResonanceCondType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::TeamResonanceCondType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 4 e:75 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::isValidTeamResonanceCondType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getTeamResonanceCondTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::TeamResonanceCondType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::TeamResonanceCondType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getTeamResonanceCondTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::TeamResonanceCondType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::TeamResonanceCondType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::TeamResonanceCondType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::TeamResonanceCondType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::TeamResonanceCondType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 80: range 000000000CBC0990-000000000CBC0AF1
bool __cdecl data::isValidTeamResonanceCondTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::TeamResonanceCondType> *v5; // rcx
  const std::unordered_map<std::string,data::TeamResonanceCondType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidTeamResonanceCondTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getTeamResonanceCondTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::TeamResonanceCondType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::TeamResonanceCondType>::end(v5);
  v6 = data::getTeamResonanceCondTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::TeamResonanceCondType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::TeamResonanceCondType>::find(
                                                                                                v6,
                                                                                                name);
  result = std::__detail::operator!=<std::pair<std::string const,data::TeamResonanceCondType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::TeamResonanceCondType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::TeamResonanceCondType>,true> *)(v2 + 64));
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

// Line 85: range 000000000CBC0AF2-000000000CBC0EF8
const std::unordered_map<std::string,data::TeamResonanceCondType> *__cdecl data::getTeamResonanceCondTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::TeamResonanceCondType> *i; // r14
  const std::unordered_map<std::string,data::TeamResonanceCondType> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getTeamResonanceCondTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234556927;
  v3[536862723] = 61956;
  v3[536862726] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getTeamResonanceCondTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getTeamResonanceCondTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string const,data::TeamResonanceCondType>::pair<char const(&)[25],data::TeamResonanceCondType,true>(
      (std::pair<const std::string,data::TeamResonanceCondType> *const)(v1 + 112),
      (const char (*)[25])"TEAM_RESONANCE_COND_NONE",
      (data::TeamResonanceCondType *)(v1 + 80));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, "TEAM_RESONANCE_COND_NONE");
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string const,data::TeamResonanceCondType>::pair<char const(&)[34],data::TeamResonanceCondType,true>(
      (std::pair<const std::string,data::TeamResonanceCondType> *const)(v1 + 152),
      (const char (*)[34])"TEAM_RESONANCE_COND_ALL_DIFFERENT",
      (data::TeamResonanceCondType *)(v1 + 96));
    std::allocator<std::pair<std::string const,data::TeamResonanceCondType>>::allocator((std::allocator<std::pair<const std::string,data::TeamResonanceCondType> > *const)(v1 + 64));
    std::unordered_map<std::string,data::TeamResonanceCondType>::unordered_map(
      &data::getTeamResonanceCondTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::TeamResonanceCondType> >)__PAIR128__(2LL, v1 + 112),
      0LL,
      (const std::unordered_map<std::string,data::TeamResonanceCondType>::hasher *)(v1 + 32),
      (const std::unordered_map<std::string,data::TeamResonanceCondType>::key_equal *)(v1 + 48),
      (const std::unordered_map<std::string,data::TeamResonanceCondType>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getTeamResonanceCondTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::TeamResonanceCondType>::~unordered_map,
      &data::getTeamResonanceCondTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::TeamResonanceCondType>>::~allocator((std::allocator<std::pair<const std::string,data::TeamResonanceCondType> > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::TeamResonanceCondType> *)(v1 + 192);
          i != (std::pair<const std::string,data::TeamResonanceCondType> *)(v1 + 112);
          std::pair<std::string const,data::TeamResonanceCondType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getTeamResonanceCondTypeNameMap[abi:cxx11](void)::m;
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

// Line 95: range 000000000CBC0EF9-000000000CBC14B6
const std::map<data::TeamResonanceCondType,std::pair<std::string,std::string >> *__cdecl data::getTeamResonanceCondTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::TeamResonanceCondType,std::pair<std::string,std::string > > *i; // r14
  unsigned __int64 v5; // rax
  _DWORD *v6; // rax
  const std::map<data::TeamResonanceCondType,std::pair<std::string,std::string >> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getTeamResonanceCondTypeEnumMap[abi:cxx11];
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
  if ( !(_BYTE)`guard variable for'data::getTeamResonanceCondTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getTeamResonanceCondTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 80, v0);
    *(_DWORD *)(v1 + 80) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[1],char const(&)[25],true>(
      (std::pair<std::string,std::string > *const)(v1 + 112),
      (const char (*)[1])byte_1A0D8BA0,
      (const char (*)[25])"TEAM_RESONANCE_COND_NONE");
    std::pair<data::TeamResonanceCondType const,std::pair<std::string,std::string>>::pair<data::TeamResonanceCondType,true>(
      (std::pair<const data::TeamResonanceCondType,std::pair<std::string,std::string > > *const)(v1 + 304),
      (data::TeamResonanceCondType *)(v1 + 80),
      (const std::pair<std::string,std::string > *)(v1 + 112));
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v1 + 80);
    *(_DWORD *)(v1 + 96) = 1;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[34],true>(
      (std::pair<std::string,std::string > *const)(v1 + 208),
      (const char (*)[13])byte_1A14ABE0,
      (const char (*)[34])"TEAM_RESONANCE_COND_ALL_DIFFERENT");
    std::pair<data::TeamResonanceCondType const,std::pair<std::string,std::string>>::pair<data::TeamResonanceCondType,true>(
      (std::pair<const data::TeamResonanceCondType,std::pair<std::string,std::string > > *const)(v1 + 376),
      (data::TeamResonanceCondType *)(v1 + 96),
      (const std::pair<std::string,std::string > *)(v1 + 208));
    std::allocator<std::pair<data::TeamResonanceCondType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::TeamResonanceCondType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    std::map<data::TeamResonanceCondType,std::pair<std::string,std::string>>::map(
      &data::getTeamResonanceCondTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::TeamResonanceCondType,std::pair<std::string,std::string > > >)__PAIR128__(2LL, v1 + 304),
      (const std::less<data::TeamResonanceCondType> *)(v1 + 48),
      (const std::map<data::TeamResonanceCondType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 64));
    __cxa_guard_release(&`guard variable for'data::getTeamResonanceCondTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::TeamResonanceCondType,std::pair<std::string,std::string>>::~map,
      &data::getTeamResonanceCondTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::TeamResonanceCondType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::TeamResonanceCondType,std::pair<std::string,std::string > > > *const)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::TeamResonanceCondType,std::pair<std::string,std::string > > *)(v1 + 448);
          i != (std::pair<const data::TeamResonanceCondType,std::pair<std::string,std::string > > *)(v1 + 304);
          std::pair<data::TeamResonanceCondType const,std::pair<std::string,std::string>>::~pair(i) )
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
  result = &data::getTeamResonanceCondTypeEnumMap[abi:cxx11](void)::m;
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

// Line 106: range 000000000CBC14B8-000000000CBC4267
int32_t __cdecl data::TeamResonanceExcelConfig::init(
        data::TeamResonanceExcelConfig *const this,
        const common::tools::TxtFile::Row *row)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r15
  common::milog::MiLogStream *v6; // rax
  int v7; // eax
  bool v8; // r15
  data::FightPropType *p_prop_type; // r15
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  bool v13; // r15
  float *p_value; // r15
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  bool v18; // r15
  float *v19; // r15
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  bool v23; // r15
  common::milog::MiLogStream *v24; // rax
  bool v25; // r15
  common::milog::MiLogStream *v26; // rax
  bool v27; // r15
  common::milog::MiLogStream *v28; // rax
  bool v29; // r15
  common::milog::MiLogStream *v30; // rax
  bool v31; // r15
  common::milog::MiLogStream *v32; // rax
  bool v33; // r15
  common::milog::MiLogStream *v34; // rax
  bool v35; // r15
  common::milog::MiLogStream *v36; // rax
  bool v37; // r15
  common::milog::MiLogStream *v38; // rax
  bool v39; // r15
  common::milog::MiLogStream *v40; // rax
  bool v41; // r15
  common::milog::MiLogStream *v42; // rax
  bool v43; // r15
  common::milog::MiLogStream *v44; // rax
  bool v45; // r15
  common::milog::MiLogStream *v46; // rax
  int32_t v47; // ebx
  uint32_t array_count; // [rsp+14h] [rbp-B9Ch]
  uint32_t array_counta; // [rsp+14h] [rbp-B9Ch]
  uint32_t i; // [rsp+18h] [rbp-B98h]
  uint32_t i_0; // [rsp+1Ch] [rbp-B94h]
  char v53[2960]; // [rsp+20h] [rbp-B90h] BYREF

  v2 = (unsigned __int64)v53;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(2912LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "55 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 <unkn"
                        "own> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 288 1 9 <unknown> 3"
                        "04 1 9 <unknown> 320 1 9 <unknown> 336 1 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 3"
                        "2 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32"
                        " 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown> 1056 32 9 <unknown> 1120 3"
                        "2 9 <unknown> 1184 32 9 <unknown> 1248 32 9 <unknown> 1312 32 9 <unknown> 1376 32 9 <unknown> 14"
                        "40 32 9 <unknown> 1504 32 9 <unknown> 1568 32 9 <unknown> 1632 32 9 <unknown> 1696 32 9 <unknown"
                        "> 1760 32 9 <unknown> 1824 32 9 <unknown> 1888 32 9 <unknown> 1952 32 9 <unknown> 2016 32 9 <unk"
                        "nown> 2080 32 9 <unknown> 2144 32 9 <unknown> 2208 32 9 <unknown> 2272 32 9 <unknown> 2336 32 9 "
                        "<unknown> 2400 32 9 <unknown> 2464 32 9 <unknown> 2528 32 9 <unknown> 2592 256 12 col_name:107";
  *(_QWORD *)(v2 + 16) = data::TeamResonanceExcelConfig::init;
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
  v4[536862809] = -202116109;
  v4[536862810] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 352),
    &byte_1A14B200,
    (const std::allocator<char> *)(v2 + 48));
  v5 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 352), &this->open_config) != 0;
  std::string::~string((void *)(v2 + 352));
  *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
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
      "./src/txt_data_auto/TeamResonanceExcelConfig.gen.cpp",
      "init",
      111);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 416),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v6, (const char (*)[39])byte_1A14B240);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
    v7 = -1;
  }
  else
  {
    std::vector<data::PropValConfig>::resize(&this->add_props, 3uLL);
    array_count = 0;
    for ( i = 0; i <= 2; ++i )
    {
      snprintf((char *)(v2 + 2592), 0x100uLL, asc_1A14B2A0, i + 1);
      *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 480),
        (const char *)(v2 + 2592),
        (const std::allocator<char> *)(v2 + 64));
      v8 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 480));
      std::string::~string((void *)(v2 + 480));
      *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( !v8 )
      {
        p_prop_type = &std::vector<data::PropValConfig>::operator[](&this->add_props, i)->prop_type;
        *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 544),
          (const char *)(v2 + 2592),
          (const std::allocator<char> *)(v2 + 80));
        LOBYTE(p_prop_type) = common::tools::TxtFile::Row::assignToEnum<data::FightPropType>(
                                row,
                                (const std::string *)(v2 + 544),
                                p_prop_type) != 0;
        std::string::~string((void *)(v2 + 544));
        *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( (_BYTE)p_prop_type )
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
            "./src/txt_data_auto/TeamResonanceExcelConfig.gen.cpp",
            "init",
            123);
          v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 608),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v10, (const char (*)[14])byte_1A143560);
          v12 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(v11, (const char (*)[256])(v2 + 2592));
          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])byte_1A1435A0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
          v7 = -1;
          goto LABEL_80;
        }
        snprintf((char *)(v2 + 2592), 0x100uLL, asc_1A14B2E0, i + 1);
        *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 672),
          (const char *)(v2 + 2592),
          (const std::allocator<char> *)(v2 + 96));
        v13 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 672));
        std::string::~string((void *)(v2 + 672));
        *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( !v13 )
        {
          p_value = &std::vector<data::PropValConfig>::operator[](&this->add_props, i)->value;
          *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 112);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 736),
            (const char *)(v2 + 2592),
            (const std::allocator<char> *)(v2 + 112));
          LOBYTE(p_value) = common::tools::TxtFile::Row::assignToNum<float>(
                              row,
                              (const std::string *)(v2 + 736),
                              p_value) != 0;
          std::string::~string((void *)(v2 + 736));
          *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( (_BYTE)p_value )
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
              "./src/txt_data_auto/TeamResonanceExcelConfig.gen.cpp",
              "init",
              131);
            v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 800),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v16 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v15,
                    (const char (*)[14])byte_1A143560);
            v17 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                    v16,
                    (const char (*)[256])(v2 + 2592));
            common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v17, (const char (*)[7])byte_1A1435A0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 800));
            v7 = -1;
            goto LABEL_80;
          }
          array_count = i + 1;
        }
      }
    }
    std::vector<data::PropValConfig>::resize(&this->add_props, array_count);
    std::vector<float>::resize(&this->param_list, 0x14uLL);
    array_counta = 0;
    for ( i_0 = 0; i_0 <= 0x13; ++i_0 )
    {
      snprintf((char *)(v2 + 2592), 0x100uLL, &byte_1A1464C0, i_0 + 1);
      *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 128);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 864),
        (const char *)(v2 + 2592),
        (const std::allocator<char> *)(v2 + 128));
      v18 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 864));
      std::string::~string((void *)(v2 + 864));
      *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 128);
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      if ( !v18 )
      {
        v19 = std::vector<float>::operator[](&this->param_list, i_0);
        *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 144);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 928),
          (const char *)(v2 + 2592),
          (const std::allocator<char> *)(v2 + 144));
        LOBYTE(v19) = common::tools::TxtFile::Row::assignToNum<float>(row, (const std::string *)(v2 + 928), v19) != 0;
        std::string::~string((void *)(v2 + 928));
        *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 144);
        *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
        if ( (_BYTE)v19 )
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
            "./src/txt_data_auto/TeamResonanceExcelConfig.gen.cpp",
            "init",
            147);
          v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 992),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v21 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v20, (const char (*)[14])byte_1A143560);
          v22 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(v21, (const char (*)[256])(v2 + 2592));
          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v22, (const char (*)[7])byte_1A1435A0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 992));
          v7 = -1;
          goto LABEL_80;
        }
        array_counta = i_0 + 1;
      }
    }
    std::vector<float>::resize(&this->param_list, array_counta);
    *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 160);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 1056),
      &byte_1A14B320,
      (const std::allocator<char> *)(v2 + 160));
    v23 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
            row,
            (const std::string *)(v2 + 1056),
            &this->team_resonance_id) != 0;
    std::string::~string((void *)(v2 + 1056));
    *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 160);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v23 )
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
        "./src/txt_data_auto/TeamResonanceExcelConfig.gen.cpp",
        "init",
        156);
      v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 1120),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v24, (const char (*)[35])byte_1A14B360);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1120));
      v7 = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 176);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 1184),
        &byte_1A14B3C0,
        (const std::allocator<char> *)(v2 + 176));
      v25 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
              row,
              (const std::string *)(v2 + 1184),
              &this->team_resonance_group_id) != 0;
      std::string::~string((void *)(v2 + 1184));
      *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 176);
      *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
      if ( v25 )
      {
        *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 1248) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 1279) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 1279) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 1248, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 1248),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_auto/TeamResonanceExcelConfig.gen.cpp",
          "init",
          161);
        v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 1248),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(v26, (const char (*)[38])byte_1A14B400);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1248));
        v7 = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 192);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 1312),
          &byte_1A14B460,
          (const std::allocator<char> *)(v2 + 192));
        v27 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                row,
                (const std::string *)(v2 + 1312),
                &this->level) != 0;
        std::string::~string((void *)(v2 + 1312));
        *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 192);
        *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
        if ( v27 )
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
            "./src/txt_data_auto/TeamResonanceExcelConfig.gen.cpp",
            "init",
            166);
          v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 1376),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v28, (const char (*)[39])byte_1A14B4A0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1376));
          v7 = -1;
        }
        else
        {
          *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 208);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1440),
            &byte_1A14B500,
            (const std::allocator<char> *)(v2 + 208));
          v29 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                  row,
                  (const std::string *)(v2 + 1440),
                  &this->fire_avatar_count) != 0;
          std::string::~string((void *)(v2 + 1440));
          *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 208);
          *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
          if ( v29 )
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
              "./src/txt_data_auto/TeamResonanceExcelConfig.gen.cpp",
              "init",
              171);
            v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 1504),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v30, (const char (*)[42])byte_1A14B540);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1504));
            v7 = -1;
          }
          else
          {
            *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 224);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1568),
              &byte_1A14B5A0,
              (const std::allocator<char> *)(v2 + 224));
            v31 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                    row,
                    (const std::string *)(v2 + 1568),
                    &this->water_avatar_count) != 0;
            std::string::~string((void *)(v2 + 1568));
            *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 224);
            *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
            if ( v31 )
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
                "./src/txt_data_auto/TeamResonanceExcelConfig.gen.cpp",
                "init",
                176);
              v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1632),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v32, (const char (*)[42])byte_1A14B5E0);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1632));
              v7 = -1;
            }
            else
            {
              *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 240);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1696),
                &byte_1A14B640,
                (const std::allocator<char> *)(v2 + 240));
              v33 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                      row,
                      (const std::string *)(v2 + 1696),
                      &this->grass_avatar_count) != 0;
              std::string::~string((void *)(v2 + 1696));
              *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 240);
              *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
              if ( v33 )
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
                  "./src/txt_data_auto/TeamResonanceExcelConfig.gen.cpp",
                  "init",
                  181);
                v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1760),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v34, (const char (*)[42])byte_1A14B680);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1760));
                v7 = -1;
              }
              else
              {
                *(_DWORD *)(((v2 + 1824) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 256);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1824),
                  &byte_1A14B6E0,
                  (const std::allocator<char> *)(v2 + 256));
                v35 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                        row,
                        (const std::string *)(v2 + 1824),
                        &this->electric_avatar_count) != 0;
                std::string::~string((void *)(v2 + 1824));
                *(_DWORD *)(((v2 + 1824) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 256);
                *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                if ( v35 )
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
                    "./src/txt_data_auto/TeamResonanceExcelConfig.gen.cpp",
                    "init",
                    186);
                  v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 1888),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                    v36,
                    (const char (*)[42])byte_1A14B720);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1888));
                  v7 = -1;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1952) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 272);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1952),
                    &byte_1A14B780,
                    (const std::allocator<char> *)(v2 + 272));
                  v37 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                          row,
                          (const std::string *)(v2 + 1952),
                          &this->ice_avatar_count) != 0;
                  std::string::~string((void *)(v2 + 1952));
                  *(_DWORD *)(((v2 + 1952) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 272);
                  *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                  if ( v37 )
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
                      "./src/txt_data_auto/TeamResonanceExcelConfig.gen.cpp",
                      "init",
                      191);
                    v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 2016),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                      v38,
                      (const char (*)[42])byte_1A14B7C0);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2016));
                    v7 = -1;
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 2080) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 288);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 2080),
                      &byte_1A14B820,
                      (const std::allocator<char> *)(v2 + 288));
                    v39 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                            row,
                            (const std::string *)(v2 + 2080),
                            &this->wind_avatar_count) != 0;
                    std::string::~string((void *)(v2 + 2080));
                    *(_DWORD *)(((v2 + 2080) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 288);
                    *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
                    if ( v39 )
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
                        "./src/txt_data_auto/TeamResonanceExcelConfig.gen.cpp",
                        "init",
                        196);
                      v40 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 2144),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                        v40,
                        (const char (*)[42])byte_1A14B860);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2144));
                      v7 = -1;
                    }
                    else
                    {
                      *(_DWORD *)(((v2 + 2208) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 304);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 2208),
                        &byte_1A14B8C0,
                        (const std::allocator<char> *)(v2 + 304));
                      v41 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                              row,
                              (const std::string *)(v2 + 2208),
                              &this->rock_avatar_count) != 0;
                      std::string::~string((void *)(v2 + 2208));
                      *(_DWORD *)(((v2 + 2208) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 304);
                      *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
                      if ( v41 )
                      {
                        *(_DWORD *)(((v2 + 2272) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v2 + 2272) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v2 + 2303) >> 3) + 0x7FFF8000) != 0
                          && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 2303) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v2 + 2272, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v2 + 2272),
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/txt_data_auto/TeamResonanceExcelConfig.gen.cpp",
                          "init",
                          201);
                        v42 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                (common::milog::MiLogStream *const)(v2 + 2272),
                                (const char (*)[16])"[CONFIG_ERROR] ");
                        common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                          v42,
                          (const char (*)[42])byte_1A14B900);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2272));
                        v7 = -1;
                      }
                      else
                      {
                        *(_DWORD *)(((v2 + 2336) >> 3) + 0x7FFF8000) = 0;
                        *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 320);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 2336),
                          &byte_1A14B960,
                          (const std::allocator<char> *)(v2 + 320));
                        v43 = common::tools::TxtFile::Row::assignToEnum<data::TeamResonanceCondType>(
                                row,
                                (const std::string *)(v2 + 2336),
                                &this->cond) != 0;
                        std::string::~string((void *)(v2 + 2336));
                        *(_DWORD *)(((v2 + 2336) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 320);
                        *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
                        if ( v43 )
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
                            "./src/txt_data_auto/TeamResonanceExcelConfig.gen.cpp",
                            "init",
                            206);
                          v44 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                  (common::milog::MiLogStream *const)(v2 + 2400),
                                  (const char (*)[16])"[CONFIG_ERROR] ");
                          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                            v44,
                            (const char (*)[33])byte_1A14B9A0);
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2400));
                          v7 = -1;
                        }
                        else
                        {
                          *(_DWORD *)(((v2 + 2464) >> 3) + 0x7FFF8000) = 0;
                          *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 1;
                          std::allocator<char>::allocator(v2 + 336);
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)(v2 + 2464),
                            &byte_1A14BA00,
                            (const std::allocator<char> *)(v2 + 336));
                          v45 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                  row,
                                  (const std::string *)(v2 + 2464),
                                  &this->min_total_promote_level) != 0;
                          std::string::~string((void *)(v2 + 2464));
                          *(_DWORD *)(((v2 + 2464) >> 3) + 0x7FFF8000) = -117901064;
                          std::allocator<char>::~allocator(v2 + 336);
                          *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
                          if ( v45 )
                          {
                            *(_DWORD *)(((v2 + 2528) >> 3) + 0x7FFF8000) = 0;
                            if ( *(char *)(((v2 + 2528) >> 3) + 0x7FFF8000) < 0
                              || *(_BYTE *)(((v2 + 2559) >> 3) + 0x7FFF8000) != 0
                              && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 2559) >> 3) + 0x7FFF8000) )
                            {
                              __asan_report_store_n(v2 + 2528, 32LL);
                            }
                            common::milog::MiLogStream::create(
                              (common::milog::MiLogStream *)(v2 + 2528),
                              &common::milog::MiLogDefault::default_log_obj_,
                              4u,
                              "./src/txt_data_auto/TeamResonanceExcelConfig.gen.cpp",
                              "init",
                              211);
                            v46 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                    (common::milog::MiLogStream *const)(v2 + 2528),
                                    (const char (*)[16])"[CONFIG_ERROR] ");
                            common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                              v46,
                              (const char (*)[45])byte_1A14BA40);
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2528));
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
LABEL_80:
  v47 = v7;
  if ( v53 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8060) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8068) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8078) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8080) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8088) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8090) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8098) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80A0) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80A8) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80B0) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80B8) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80C0) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80C8) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80D0) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80D8) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80E0) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80E8) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80F0) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80F8) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8100) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8108) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8110) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8118) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8120) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8128) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8130) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8138) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8140) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8164) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 2912LL, v53);
  }
  return v47;
};

// Line 220: range 000000000CBC4268-000000000CBC5288
int32_t __cdecl data::TeamResonanceExcelConfigMgrBase::loadTeamResonanceExcelConfig(
        data::TeamResonanceExcelConfigMgrBase *const this,
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
  data::TeamResonanceExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::TeamResonanceExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::TeamResonanceExcelConfig>,false,false>,bool> v27; // rax
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
  *(_QWORD *)(v3 + 8) = "13 48 1 9 <unknown> 64 4 5 r:235 80 4 9 <unknown> 96 32 9 paths:221 160 32 9 <unknown> 224 32 9 "
                        "<unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 136 8 "
                        "data:238 752 376 24 debug_message_stream:246 1200 32880 12 txt_file:229";
  *(_QWORD *)(v3 + 16) = data::TeamResonanceExcelConfigMgrBase::loadTeamResonanceExcelConfig;
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
    "/txt/TeamResonanceData.txt",
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
        "./src/txt_data_auto/TeamResonanceExcelConfig.gen.cpp",
        "loadTeamResonanceExcelConfig",
        232);
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
        data::TeamResonanceExcelConfig::TeamResonanceExcelConfig((data::TeamResonanceExcelConfig *const)(v3 + 544));
        if ( row_ptr )
        {
          if ( data::TeamResonanceExcelConfig::init((data::TeamResonanceExcelConfig *const)(v3 + 544), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 752, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 752);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 752, &unk_1A14BC40);
            if ( *(_BYTE *)(((v3 + 632) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 632) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 632);
            std::ostream::operator<<(v16, *(unsigned int *)(v3 + 632));
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
              "./src/txt_data_auto/TeamResonanceExcelConfig.gen.cpp",
              "loadTeamResonanceExcelConfig",
              248);
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
            v24 = std::move<data::TeamResonanceExcelConfig &>((data::TeamResonanceExcelConfig *)(v3 + 544));
            v27 = std::unordered_map<unsigned int,data::TeamResonanceExcelConfig>::emplace<unsigned int &,data::TeamResonanceExcelConfig>(
                    &this->team_resonance_excel_config_map,
                    (unsigned int *)(v3 + 632),
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
                "./src/txt_data_auto/TeamResonanceExcelConfig.gen.cpp",
                "loadTeamResonanceExcelConfig",
                253);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 480),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                      v28,
                      (const char (*)[22])byte_1A14BC80);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v29,
                (const unsigned int *)(v3 + 632));
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
            "./src/txt_data_auto/TeamResonanceExcelConfig.gen.cpp",
            "loadTeamResonanceExcelConfig",
            241);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 288),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::TeamResonanceExcelConfig::~TeamResonanceExcelConfig((data::TeamResonanceExcelConfig *const)(v3 + 544));
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

// Line 262: range 000000000CBC528A-000000000CBC546D
int32_t __cdecl data::TeamResonanceExcelConfigMgrBase::loadConfig(
        data::TeamResonanceExcelConfigMgrBase *const this,
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
  *(_QWORD *)(v2 + 16) = data::TeamResonanceExcelConfigMgrBase::loadConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( data::TeamResonanceExcelConfigMgrBase::loadTeamResonanceExcelConfig(this, config) )
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
      "./src/txt_data_auto/TeamResonanceExcelConfig.gen.cpp",
      "loadConfig",
      265);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      v5,
      (const char (*)[36])"loadTeamResonanceExcelConfig failed");
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

// Line 272: range 000000000CBC546E-000000000CBC5480
int32_t __cdecl data::TeamResonanceExcelConfigMgrBase::rewriteConfig(
        data::TeamResonanceExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 277: range 000000000CBC5482-000000000CBC5494
int32_t __cdecl data::TeamResonanceExcelConfigMgrBase::finalConfig(
        data::TeamResonanceExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 282: range 000000000CBC5496-000000000CBC5651
data::TeamResonanceExcelConfig *__fastcall data::TeamResonanceExcelConfigMgrBase::findTeamResonanceExcelConfig(
        data::TeamResonanceExcelConfigMgrBase *const this,
        __int64 team_resonance_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::TeamResonanceExcelConfigMap *p_team_resonance_excel_config_map; // rdx
  data::TeamResonanceExcelConfigMap *v6; // rdx
  bool v7; // al
  data::TeamResonanceExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 21 team_resonance_id:281 64 8 8 iter:283 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::TeamResonanceExcelConfigMgrBase::findTeamResonanceExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = team_resonance_id;
  p_team_resonance_excel_config_map = &this->team_resonance_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, team_resonance_id);
  *(std::unordered_map<unsigned int,data::TeamResonanceExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::TeamResonanceExcelConfig>::find(
                                                                                              p_team_resonance_excel_config_map,
                                                                                              (const std::unordered_map<unsigned int,data::TeamResonanceExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->team_resonance_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::TeamResonanceExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::TeamResonanceExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::TeamResonanceExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TeamResonanceExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TeamResonanceExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::TeamResonanceExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::TeamResonanceExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 295: range 000000000CBC5652-000000000CBC580D
const data::TeamResonanceExcelConfig *__fastcall data::TeamResonanceExcelConfigMgrBase::findTeamResonanceExcelConfig(
        const data::TeamResonanceExcelConfigMgrBase *const this,
        __int64 team_resonance_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::TeamResonanceExcelConfigMap *p_team_resonance_excel_config_map; // rdx
  data::TeamResonanceExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::TeamResonanceExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 21 team_resonance_id:294 64 8 8 iter:296 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::TeamResonanceExcelConfigMgrBase::findTeamResonanceExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = team_resonance_id;
  p_team_resonance_excel_config_map = &this->team_resonance_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, team_resonance_id);
  *(std::unordered_map<unsigned int,data::TeamResonanceExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::TeamResonanceExcelConfig>::find(
                                                                                                    p_team_resonance_excel_config_map,
                                                                                                    (const std::unordered_map<unsigned int,data::TeamResonanceExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->team_resonance_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::TeamResonanceExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::TeamResonanceExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::TeamResonanceExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TeamResonanceExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TeamResonanceExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TeamResonanceExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TeamResonanceExcelConfig>,false,false> *const)(v2 + 64))->second;
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

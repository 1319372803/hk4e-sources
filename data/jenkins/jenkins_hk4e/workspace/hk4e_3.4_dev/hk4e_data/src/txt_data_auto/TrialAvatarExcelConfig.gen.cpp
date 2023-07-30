// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/TrialAvatarExcelConfig.gen.cpp

// Line 12: range 000000000CC1201A-000000000CC1238D
const char *__fastcall data::enumValToStr(data::TrialAvatarTemplatePlaceholderType e, __int64 a2)
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
  std::_Rb_tree_const_iterator<std::pair<const data::TrialAvatarTemplatePlaceholderType,std::pair<std::string,std::string > > >::pointer v11; // rax
  const std::map<data::TrialAvatarTemplatePlaceholderType,std::pair<std::string,std::string >> *map; // [rsp+18h] [rbp-E8h]
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
  map = data::getTrialAvatarTemplatePlaceholderTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, a2);
  *(std::map<data::TrialAvatarTemplatePlaceholderType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::TrialAvatarTemplatePlaceholderType,std::pair<std::string,std::string>>::find(map, (const std::map<data::TrialAvatarTemplatePlaceholderType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::TrialAvatarTemplatePlaceholderType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::TrialAvatarTemplatePlaceholderType,std::pair<std::string,std::string>>::end(map);
  v5 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::TrialAvatarTemplatePlaceholderType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::TrialAvatarTemplatePlaceholderType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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
      "./src/txt_data_auto/TrialAvatarExcelConfig.gen.cpp",
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
    result = "INVALID_TrialAvatarTemplatePlaceholderType";
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::TrialAvatarTemplatePlaceholderType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::TrialAvatarTemplatePlaceholderType,std::pair<std::string,std::string > > > *const)(v2 + 64));
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

// Line 24: range 000000000CC1238E-000000000CC12946
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
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::TrialAvatarTemplatePlaceholderType>,false,true>::pointer v10; // rax
  data::TrialAvatarTemplatePlaceholderType second; // ecx
  char v12; // dl
  const std::unordered_map<std::string,data::TrialAvatarTemplatePlaceholderType> *m; // [rsp+18h] [rbp-188h]
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
    m = data::getTrialAvatarTemplatePlaceholderTypeNameMap[abi:cxx11]();
    std::allocator<char>::allocator(v2 + 48);
    v6 = *(const char **)(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      v6,
      (const std::allocator<char> *)(v2 + 48));
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, v6);
    *(std::unordered_map<std::string,data::TrialAvatarTemplatePlaceholderType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::TrialAvatarTemplatePlaceholderType>::find(m, (const std::unordered_map<std::string,data::TrialAvatarTemplatePlaceholderType>::key_type *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 224);
    *(std::unordered_map<std::string,data::TrialAvatarTemplatePlaceholderType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::TrialAvatarTemplatePlaceholderType>::end(m);
    v7 = (char *)(v2 + 96);
    v8 = std::__detail::operator==<std::pair<std::string const,data::TrialAvatarTemplatePlaceholderType>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::TrialAvatarTemplatePlaceholderType>,true> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::TrialAvatarTemplatePlaceholderType>,true> *)(v2 + 96));
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
        "./src/txt_data_auto/TrialAvatarExcelConfig.gen.cpp",
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
      v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::TrialAvatarTemplatePlaceholderType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::TrialAvatarTemplatePlaceholderType>,false,true> *const)(v2 + 64));
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
      "./src/txt_data_auto/TrialAvatarExcelConfig.gen.cpp",
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

// Line 45: range 000000000CC12947-000000000CC1326C
__int64 __fastcall data::enumStrToVal(const char *s, unsigned __int64 e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::pair<const std::string,data::TrialAvatarTemplatePlaceholderType> *i; // r14
  unsigned __int64 v7; // rax
  const char *v8; // rsi
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<const std::string,data::TrialAvatarTemplatePlaceholderType>,false,true>::pointer v12; // rax
  data::TrialAvatarTemplatePlaceholderType second; // ecx
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(char const*,data::TrialAvatarTemplatePlaceholderType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(char const*,data::TrialAvatarTemplatePlaceholderType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, e);
      *(_DWORD *)(v2 + 96) = 0;
      std::pair<std::string const,data::TrialAvatarTemplatePlaceholderType>::pair<char const(&)[13],data::TrialAvatarTemplatePlaceholderType,true>(
        (std::pair<const std::string,data::TrialAvatarTemplatePlaceholderType> *const)(v2 + 400),
        (const char (*)[13])byte_1A1588C0,
        (data::TrialAvatarTemplatePlaceholderType *)(v2 + 96));
      std::allocator<std::pair<std::string const,data::TrialAvatarTemplatePlaceholderType>>::allocator((std::allocator<std::pair<const std::string,data::TrialAvatarTemplatePlaceholderType> > *const)(v2 + 64));
      std::unordered_map<std::string,data::TrialAvatarTemplatePlaceholderType>::unordered_map(
        &data::enumStrToVal(char const*,data::TrialAvatarTemplatePlaceholderType &)::m,
        (std::initializer_list<std::pair<const std::string,data::TrialAvatarTemplatePlaceholderType> >)__PAIR128__(1LL, v2 + 400),
        0LL,
        (const std::unordered_map<std::string,data::TrialAvatarTemplatePlaceholderType>::hasher *)(v2 + 32),
        (const std::unordered_map<std::string,data::TrialAvatarTemplatePlaceholderType>::key_equal *)(v2 + 48),
        (const std::unordered_map<std::string,data::TrialAvatarTemplatePlaceholderType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(char const*,data::TrialAvatarTemplatePlaceholderType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,data::TrialAvatarTemplatePlaceholderType>::~unordered_map,
        &data::enumStrToVal(char const*,data::TrialAvatarTemplatePlaceholderType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::TrialAvatarTemplatePlaceholderType>>::~allocator((std::allocator<std::pair<const std::string,data::TrialAvatarTemplatePlaceholderType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::TrialAvatarTemplatePlaceholderType> *)(v2 + 440);
            i != (std::pair<const std::string,data::TrialAvatarTemplatePlaceholderType> *)(v2 + 400);
            std::pair<std::string const,data::TrialAvatarTemplatePlaceholderType>::~pair(i) )
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
    *(std::unordered_map<std::string,data::TrialAvatarTemplatePlaceholderType>::iterator *)(v2 + 112) = std::unordered_map<std::string,data::TrialAvatarTemplatePlaceholderType>::find(&data::enumStrToVal(char const*,data::TrialAvatarTemplatePlaceholderType &)::m, (const std::unordered_map<std::string,data::TrialAvatarTemplatePlaceholderType>::key_type *)(v2 + 272));
    std::string::~string((void *)(v2 + 272));
    *(_DWORD *)(((v2 + 272) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 80);
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 144, v2 + 272);
    *(std::unordered_map<std::string,data::TrialAvatarTemplatePlaceholderType>::iterator *)(v2 + 144) = std::unordered_map<std::string,data::TrialAvatarTemplatePlaceholderType>::end(&data::enumStrToVal(char const*,data::TrialAvatarTemplatePlaceholderType &)::m);
    v9 = (char *)(v2 + 144);
    v10 = std::__detail::operator==<std::pair<std::string const,data::TrialAvatarTemplatePlaceholderType>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::TrialAvatarTemplatePlaceholderType>,true> *)(v2 + 112),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::TrialAvatarTemplatePlaceholderType>,true> *)(v2 + 144));
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
        "./src/txt_data_auto/TrialAvatarExcelConfig.gen.cpp",
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
      v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::TrialAvatarTemplatePlaceholderType>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::TrialAvatarTemplatePlaceholderType>,false,true> *const)(v2 + 112));
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
      "./src/txt_data_auto/TrialAvatarExcelConfig.gen.cpp",
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

// Line 69: range 000000000CC1326D-000000000CC13283
const char *__cdecl data::getDescription(data::TrialAvatarTemplatePlaceholderType e)
{
  __int64 v1; // rsi

  return data::enumValToStr(e, v1);
};

// Line 74: range 000000000CC13284-000000000CC13439
bool __cdecl data::isValidTrialAvatarTemplatePlaceholderType(uint32_t n)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<data::TrialAvatarTemplatePlaceholderType,std::pair<std::string,std::string >> *v5; // rcx
  const std::map<data::TrialAvatarTemplatePlaceholderType,std::pair<std::string,std::string >> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidTrialAvatarTemplatePlaceholderType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = n;
  v5 = data::getTrialAvatarTemplatePlaceholderTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::map<data::TrialAvatarTemplatePlaceholderType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 96) = std::map<data::TrialAvatarTemplatePlaceholderType,std::pair<std::string,std::string>>::end(v5);
  v6 = data::getTrialAvatarTemplatePlaceholderTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::map<data::TrialAvatarTemplatePlaceholderType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::TrialAvatarTemplatePlaceholderType,std::pair<std::string,std::string>>::find(v6, (const std::map<data::TrialAvatarTemplatePlaceholderType,std::pair<std::string,std::string >>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::TrialAvatarTemplatePlaceholderType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<const data::TrialAvatarTemplatePlaceholderType,std::pair<std::string,std::string > > >::_Self *)(v2 + 96));
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

// Line 80: range 000000000CC1343A-000000000CC1359B
bool __cdecl data::isValidTrialAvatarTemplatePlaceholderTypeName(const std::string *name)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::unordered_map<std::string,data::TrialAvatarTemplatePlaceholderType> *v5; // rcx
  const std::unordered_map<std::string,data::TrialAvatarTemplatePlaceholderType> *v6; // rcx
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
  *(_QWORD *)(v2 + 16) = data::isValidTrialAvatarTemplatePlaceholderTypeName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = data::getTrialAvatarTemplatePlaceholderTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::TrialAvatarTemplatePlaceholderType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::TrialAvatarTemplatePlaceholderType>::end(v5);
  v6 = data::getTrialAvatarTemplatePlaceholderTypeNameMap[abi:cxx11]();
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<std::string,data::TrialAvatarTemplatePlaceholderType>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::TrialAvatarTemplatePlaceholderType>::find(v6, name);
  result = std::__detail::operator!=<std::pair<std::string const,data::TrialAvatarTemplatePlaceholderType>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::TrialAvatarTemplatePlaceholderType>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::TrialAvatarTemplatePlaceholderType>,true> *)(v2 + 64));
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

// Line 85: range 000000000CC1359C-000000000CC138FE
const std::unordered_map<std::string,data::TrialAvatarTemplatePlaceholderType> *__cdecl data::getTrialAvatarTemplatePlaceholderTypeNameMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,data::TrialAvatarTemplatePlaceholderType> *i; // r14
  const std::unordered_map<std::string,data::TrialAvatarTemplatePlaceholderType> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getTrialAvatarTemplatePlaceholderTypeNameMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -234753535;
  v3[536862723] = 61956;
  v3[536862724] = -218103808;
  v3[536862725] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getTrialAvatarTemplatePlaceholderTypeNameMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getTrialAvatarTemplatePlaceholderTypeNameMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 96, v0);
    *(_DWORD *)(v1 + 96) = 0;
    std::pair<std::string const,data::TrialAvatarTemplatePlaceholderType>::pair<char const(&)[34],data::TrialAvatarTemplatePlaceholderType,true>(
      (std::pair<const std::string,data::TrialAvatarTemplatePlaceholderType> *const)(v1 + 112),
      (const char (*)[34])"TRIAL_AVATAR_TEMPLATE_PLACEHOLDER",
      (data::TrialAvatarTemplatePlaceholderType *)(v1 + 96));
    std::allocator<std::pair<std::string const,data::TrialAvatarTemplatePlaceholderType>>::allocator((std::allocator<std::pair<const std::string,data::TrialAvatarTemplatePlaceholderType> > *const)(v1 + 80));
    std::unordered_map<std::string,data::TrialAvatarTemplatePlaceholderType>::unordered_map(
      &data::getTrialAvatarTemplatePlaceholderTypeNameMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const std::string,data::TrialAvatarTemplatePlaceholderType> >)__PAIR128__(1LL, v1 + 112),
      0LL,
      (const std::unordered_map<std::string,data::TrialAvatarTemplatePlaceholderType>::hasher *)(v1 + 48),
      (const std::unordered_map<std::string,data::TrialAvatarTemplatePlaceholderType>::key_equal *)(v1 + 64),
      (const std::unordered_map<std::string,data::TrialAvatarTemplatePlaceholderType>::allocator_type *)(v1 + 80));
    __cxa_guard_release(&`guard variable for'data::getTrialAvatarTemplatePlaceholderTypeNameMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<std::string,data::TrialAvatarTemplatePlaceholderType>::~unordered_map,
      &data::getTrialAvatarTemplatePlaceholderTypeNameMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<std::string const,data::TrialAvatarTemplatePlaceholderType>>::~allocator((std::allocator<std::pair<const std::string,data::TrialAvatarTemplatePlaceholderType> > *const)(v1 + 80));
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const std::string,data::TrialAvatarTemplatePlaceholderType> *)(v1 + 152);
          i != (std::pair<const std::string,data::TrialAvatarTemplatePlaceholderType> *)(v1 + 112);
          std::pair<std::string const,data::TrialAvatarTemplatePlaceholderType>::~pair(i) )
    {
      --i;
    }
  }
  result = &data::getTrialAvatarTemplatePlaceholderTypeNameMap[abi:cxx11](void)::m;
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

// Line 94: range 000000000CC138FF-000000000CC13D12
const std::map<data::TrialAvatarTemplatePlaceholderType,std::pair<std::string,std::string >> *__cdecl data::getTrialAvatarTemplatePlaceholderTypeEnumMap[abi:cxx11]()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const data::TrialAvatarTemplatePlaceholderType,std::pair<std::string,std::string > > *i; // r14
  unsigned __int64 v5; // rax
  const std::map<data::TrialAvatarTemplatePlaceholderType,std::pair<std::string,std::string >> *result; // rax
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
  *(_QWORD *)(v1 + 16) = data::getTrialAvatarTemplatePlaceholderTypeEnumMap[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = 61956;
  v3[536862724] = -219021312;
  v3[536862725] = 62194;
  v3[536862727] = -218103808;
  v3[536862728] = -202116109;
  if ( !(_BYTE)`guard variable for'data::getTrialAvatarTemplatePlaceholderTypeEnumMap[abi:cxx11](void)::m
    && __cxa_guard_acquire(&`guard variable for'data::getTrialAvatarTemplatePlaceholderTypeEnumMap[abi:cxx11](void)::m) )
  {
    if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 64, v0);
    *(_DWORD *)(v1 + 64) = 0;
    std::pair<std::string,std::string>::pair<char const(&)[13],char const(&)[34],true>(
      (std::pair<std::string,std::string > *const)(v1 + 80),
      (const char (*)[13])byte_1A1588C0,
      (const char (*)[34])"TRIAL_AVATAR_TEMPLATE_PLACEHOLDER");
    std::pair<data::TrialAvatarTemplatePlaceholderType const,std::pair<std::string,std::string>>::pair<data::TrialAvatarTemplatePlaceholderType,true>(
      (std::pair<const data::TrialAvatarTemplatePlaceholderType,std::pair<std::string,std::string > > *const)(v1 + 176),
      (data::TrialAvatarTemplatePlaceholderType *)(v1 + 64),
      (const std::pair<std::string,std::string > *)(v1 + 80));
    std::allocator<std::pair<data::TrialAvatarTemplatePlaceholderType const,std::pair<std::string,std::string>>>::allocator((std::allocator<std::pair<const data::TrialAvatarTemplatePlaceholderType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    std::map<data::TrialAvatarTemplatePlaceholderType,std::pair<std::string,std::string>>::map(
      &data::getTrialAvatarTemplatePlaceholderTypeEnumMap[abi:cxx11](void)::m,
      (std::initializer_list<std::pair<const data::TrialAvatarTemplatePlaceholderType,std::pair<std::string,std::string > > >)__PAIR128__(1LL, v1 + 176),
      (const std::less<data::TrialAvatarTemplatePlaceholderType> *)(v1 + 32),
      (const std::map<data::TrialAvatarTemplatePlaceholderType,std::pair<std::string,std::string >>::allocator_type *)(v1 + 48));
    __cxa_guard_release(&`guard variable for'data::getTrialAvatarTemplatePlaceholderTypeEnumMap[abi:cxx11](void)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::TrialAvatarTemplatePlaceholderType,std::pair<std::string,std::string>>::~map,
      &data::getTrialAvatarTemplatePlaceholderTypeEnumMap[abi:cxx11](void)::m,
      &_dso_handle);
    std::allocator<std::pair<data::TrialAvatarTemplatePlaceholderType const,std::pair<std::string,std::string>>>::~allocator((std::allocator<std::pair<const data::TrialAvatarTemplatePlaceholderType,std::pair<std::string,std::string > > > *const)(v1 + 48));
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    for ( i = (std::pair<const data::TrialAvatarTemplatePlaceholderType,std::pair<std::string,std::string > > *)(v1 + 248);
          i != (std::pair<const data::TrialAvatarTemplatePlaceholderType,std::pair<std::string,std::string > > *)(v1 + 176);
          std::pair<data::TrialAvatarTemplatePlaceholderType const,std::pair<std::string,std::string>>::~pair(i) )
    {
      --i;
    }
    v5 = ((v1 + 176) >> 3) + 2147450880;
    *(_DWORD *)v5 = -117901064;
    *(_DWORD *)(v5 + 4) = -117901064;
    *(_BYTE *)(v5 + 8) = -8;
    std::pair<std::string,std::string>::~pair((std::pair<std::string,std::string > *const)(v1 + 80));
  }
  result = &data::getTrialAvatarTemplatePlaceholderTypeEnumMap[abi:cxx11](void)::m;
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

// Line 104: range 000000000CC13D14-000000000CC16424
int32_t __cdecl data::TrialAvatarExcelConfig::init(
        data::TrialAvatarExcelConfig *const this,
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
  unsigned __int64 v17; // rax
  _DWORD *v18; // rax
  bool v19; // r15
  unsigned __int64 v20; // rax
  char *j; // r14
  _DWORD *v22; // rax
  common::milog::MiLogStream *v23; // rax
  bool v24; // r14
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
  bool v38; // r14
  common::milog::MiLogStream *v39; // rax
  bool t; // [rsp+0h] [rbp-920h]
  bool ta; // [rsp+0h] [rbp-920h]
  std::initializer_list<std::string > __l; // [rsp+10h] [rbp-910h]
  char v44[2288]; // [rsp+30h] [rbp-8F0h] BYREF

  v2 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(2240LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "46 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 <unkn"
                        "own> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 288 1 9 <unknown> 3"
                        "04 1 9 <unknown> 320 24 9 <unknown> 384 24 9 <unknown> 448 32 11 val_str:105 512 32 9 <unknown> "
                        "576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 32 9 <unknown> 8"
                        "96 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 <unknown> 1152 32 9 <unknown>"
                        " 1216 32 9 <unknown> 1280 32 9 <unknown> 1344 32 9 <unknown> 1408 32 9 <unknown> 1472 32 9 <unkn"
                        "own> 1536 32 9 <unknown> 1600 32 9 <unknown> 1664 32 9 <unknown> 1728 32 9 <unknown> 1792 32 9 <"
                        "unknown> 1856 32 9 <unknown> 1920 32 9 <unknown> 1984 32 9 <unknown> 2048 64 9 <unknown> 2144 64 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::TrialAvatarExcelConfig::init;
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
  v4[536862730] = -234881024;
  v4[536862731] = -218959118;
  v4[536862732] = -234881024;
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
  v4[536862773] = -218959118;
  v4[536862775] = -218959118;
  v4[536862777] = -218959118;
  v4[536862779] = -218959118;
  v4[536862781] = -218959118;
  v4[536862783] = -218959118;
  v4[536862786] = -218959118;
  v4[536862789] = -202116109;
  std::string::basic_string(v2 + 448);
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 512),
    &byte_1A158040,
    (const std::allocator<char> *)(v2 + 48));
  t = common::tools::TxtFile::Row::assignToNum<unsigned int>(
        row,
        (const std::string *)(v2 + 512),
        &this->trial_avatar_id) != 0;
  std::string::~string((void *)(v2 + 512));
  *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( t )
  {
    *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 576) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 576, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 576),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/TrialAvatarExcelConfig.gen.cpp",
      "init",
      108);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 576),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v5, (const char (*)[35])byte_1A158080);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
    *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 640),
      &byte_1A158CE0,
      (const std::allocator<char> *)(v2 + 64));
    ta = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 640), (std::string *)(v2 + 448)) != 0;
    std::string::~string((void *)(v2 + 640));
    *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( ta )
    {
      *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 704) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 704, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 704),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_auto/TrialAvatarExcelConfig.gen.cpp",
        "init",
        113);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 704),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v7, (const char (*)[33])byte_1A158D20);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
      *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v8 = ((v2 + 320) >> 3) + 2147450880;
      *(_WORD *)v8 = 0;
      *(_BYTE *)(v8 + 2) = 0;
      v9 = (_DWORD *)(((v2 + 2048) >> 3) + 2147450880);
      *v9 = 0;
      v9[1] = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 2048),
        ";",
        (const std::allocator<char> *)(v2 + 80));
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 96);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 2080),
        ",",
        (const std::allocator<char> *)(v2 + 96));
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 112));
      std::vector<std::string>::vector(
        (std::vector<std::string> *const)(v2 + 320),
        (std::initializer_list<std::string >)__PAIR128__(2LL, v2 + 2048),
        (const std::vector<std::string>::allocator_type *)(v2 + 112));
      v10 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
              (const std::string *)(v2 + 448),
              (const std::vector<std::string> *)(v2 + 320),
              &this->trial_avatar_param_list,
              1) != 0;
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 320));
      v11 = ((v2 + 320) >> 3) + 2147450880;
      *(_WORD *)v11 = -1800;
      *(_BYTE *)(v11 + 2) = -8;
      std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 112));
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      for ( i = (char *)(v2 + 2112); i != (char *)(v2 + 2048); std::string::~string(i) )
        i -= 32;
      v13 = (_DWORD *)(((v2 + 2048) >> 3) + 2147450880);
      *v13 = -117901064;
      v13[1] = -117901064;
      std::allocator<char>::~allocator(v2 + 96);
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( v10 )
      {
        *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 768) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 768, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 768),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_auto/TrialAvatarExcelConfig.gen.cpp",
          "init",
          118);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 768),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v14, (const char (*)[33])byte_1A158D20);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 768));
        *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 128);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 832),
          &byte_1A158D80,
          (const std::allocator<char> *)(v2 + 128));
        v15 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 832), (std::string *)(v2 + 448)) != 0;
        std::string::~string((void *)(v2 + 832));
        *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 128);
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
        if ( v15 )
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
            "./src/txt_data_auto/TrialAvatarExcelConfig.gen.cpp",
            "init",
            123);
          v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 896),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v16, (const char (*)[27])byte_1A158DC0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 896));
          *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = -117901064;
          v6 = -1;
        }
        else
        {
          v17 = ((v2 + 384) >> 3) + 2147450880;
          *(_WORD *)v17 = 0;
          *(_BYTE *)(v17 + 2) = 0;
          v18 = (_DWORD *)(((v2 + 2144) >> 3) + 2147450880);
          *v18 = 0;
          v18[1] = 0;
          *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 144);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 2144),
            ";",
            (const std::allocator<char> *)(v2 + 144));
          *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 160);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 2176),
            ",",
            (const std::allocator<char> *)(v2 + 160));
          __l._M_array = (std::initializer_list<std::string >::iterator)(v2 + 2144);
          __l._M_len = 2LL;
          *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
          std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 176));
          std::vector<std::string>::vector(
            (std::vector<std::string> *const)(v2 + 384),
            __l,
            (const std::vector<std::string>::allocator_type *)(v2 + 176));
          v19 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                  (const std::string *)(v2 + 448),
                  (const std::vector<std::string> *)(v2 + 384),
                  &this->trial_weapon_param_list,
                  1) != 0;
          std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 384));
          v20 = ((v2 + 384) >> 3) + 2147450880;
          *(_WORD *)v20 = -1800;
          *(_BYTE *)(v20 + 2) = -8;
          std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 176));
          *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
          for ( j = (char *)(v2 + 2208); j != (char *)(v2 + 2144); std::string::~string(j) )
            j -= 32;
          v22 = (_DWORD *)(((v2 + 2144) >> 3) + 2147450880);
          *v22 = -117901064;
          v22[1] = -117901064;
          std::allocator<char>::~allocator(v2 + 160);
          *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
          std::allocator<char>::~allocator(v2 + 144);
          *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
          if ( v19 )
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
              "./src/txt_data_auto/TrialAvatarExcelConfig.gen.cpp",
              "init",
              128);
            v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 960),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v23, (const char (*)[27])byte_1A158DC0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 960));
            *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = -117901064;
            v6 = -1;
          }
          else
          {
            *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 192);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1024),
              &byte_1A158E00,
              (const std::allocator<char> *)(v2 + 192));
            v24 = common::tools::TxtFile::Row::assignToStr(
                    row,
                    (const std::string *)(v2 + 1024),
                    &this->trial_reliquary_list_str) != 0;
            std::string::~string((void *)(v2 + 1024));
            *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 192);
            *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
            if ( v24 )
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
                "./src/txt_data_auto/TrialAvatarExcelConfig.gen.cpp",
                "init",
                133);
              v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1088),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v25, (const char (*)[30])byte_1A158E40);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1088));
              *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -117901064;
              v6 = -1;
            }
            else
            {
              *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 208);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1152),
                &byte_1A158E80,
                (const std::allocator<char> *)(v2 + 208));
              v26 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                      row,
                      (const std::string *)(v2 + 1152),
                      &this->trial_skill_depot_id) != 0;
              std::string::~string((void *)(v2 + 1152));
              *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 208);
              *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
              if ( v26 )
              {
                *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 1216) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1247) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 1247) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 1216, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 1216),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_auto/TrialAvatarExcelConfig.gen.cpp",
                  "init",
                  138);
                v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1216),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v27, (const char (*)[36])byte_1A158EC0);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1216));
                *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = -117901064;
                v6 = -1;
              }
              else
              {
                *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 224);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1280),
                  &byte_1A158F20,
                  (const std::allocator<char> *)(v2 + 224));
                v28 = common::tools::TxtFile::Row::assignToStr(
                        row,
                        (const std::string *)(v2 + 1280),
                        &this->trial_talent_list_str) != 0;
                std::string::~string((void *)(v2 + 1280));
                *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 224);
                *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                if ( v28 )
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
                    "./src/txt_data_auto/TrialAvatarExcelConfig.gen.cpp",
                    "init",
                    143);
                  v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 1344),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                    v29,
                    (const char (*)[27])byte_1A158F60);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1344));
                  *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = -117901064;
                  v6 = -1;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1408) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 240);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1408),
                    &byte_1A158FA0,
                    (const std::allocator<char> *)(v2 + 240));
                  v30 = common::tools::TxtFile::Row::assignToStr(
                          row,
                          (const std::string *)(v2 + 1408),
                          &this->trial_inherent_proud_skill_list_str) != 0;
                  std::string::~string((void *)(v2 + 1408));
                  *(_DWORD *)(((v2 + 1408) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 240);
                  *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                  if ( v30 )
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
                      "./src/txt_data_auto/TrialAvatarExcelConfig.gen.cpp",
                      "init",
                      148);
                    v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 1472),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                      v31,
                      (const char (*)[36])byte_1A158FE0);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1472));
                    *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = -117901064;
                    v6 = -1;
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 1536) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 256);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 1536),
                      &byte_1A159040,
                      (const std::allocator<char> *)(v2 + 256));
                    v32 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                            row,
                            (const std::string *)(v2 + 1536),
                            &this->trial_core_proud_skill_level) != 0;
                    std::string::~string((void *)(v2 + 1536));
                    *(_DWORD *)(((v2 + 1536) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 256);
                    *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                    if ( v32 )
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
                        "./src/txt_data_auto/TrialAvatarExcelConfig.gen.cpp",
                        "init",
                        153);
                      v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 1600),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                        v33,
                        (const char (*)[42])byte_1A159080);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1600));
                      *(_DWORD *)(((v2 + 1600) >> 3) + 0x7FFF8000) = -117901064;
                      v6 = -1;
                    }
                    else
                    {
                      *(_DWORD *)(((v2 + 1664) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 272);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 1664),
                        &byte_1A1590E0,
                        (const std::allocator<char> *)(v2 + 272));
                      v34 = common::tools::TxtFile::Row::assignToStr(
                              row,
                              (const std::string *)(v2 + 1664),
                              &this->trial_avatar_skill_level_str) != 0;
                      std::string::~string((void *)(v2 + 1664));
                      *(_DWORD *)(((v2 + 1664) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 272);
                      *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                      if ( v34 )
                      {
                        *(_DWORD *)(((v2 + 1728) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v2 + 1728) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v2 + 1759) >> 3) + 0x7FFF8000) != 0
                          && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 1759) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v2 + 1728, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v2 + 1728),
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/txt_data_auto/TrialAvatarExcelConfig.gen.cpp",
                          "init",
                          158);
                        v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                (common::milog::MiLogStream *const)(v2 + 1728),
                                (const char (*)[16])"[CONFIG_ERROR] ");
                        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                          v35,
                          (const char (*)[39])byte_1A159120);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1728));
                        *(_DWORD *)(((v2 + 1728) >> 3) + 0x7FFF8000) = -117901064;
                        v6 = -1;
                      }
                      else
                      {
                        *(_DWORD *)(((v2 + 1792) >> 3) + 0x7FFF8000) = 0;
                        *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 288);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 1792),
                          &byte_1A159180,
                          (const std::allocator<char> *)(v2 + 288));
                        v36 = common::tools::TxtFile::Row::assignToNum<bool>(
                                row,
                                (const std::string *)(v2 + 1792),
                                &this->is_dynamic_level) != 0;
                        std::string::~string((void *)(v2 + 1792));
                        *(_DWORD *)(((v2 + 1792) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 288);
                        *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
                        if ( v36 )
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
                            "./src/txt_data_auto/TrialAvatarExcelConfig.gen.cpp",
                            "init",
                            163);
                          v37 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                  (common::milog::MiLogStream *const)(v2 + 1856),
                                  (const char (*)[16])"[CONFIG_ERROR] ");
                          common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                            v37,
                            (const char (*)[39])byte_1A1591C0);
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1856));
                          *(_DWORD *)(((v2 + 1856) >> 3) + 0x7FFF8000) = -117901064;
                          v6 = -1;
                        }
                        else
                        {
                          *(_DWORD *)(((v2 + 1920) >> 3) + 0x7FFF8000) = 0;
                          *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 1;
                          std::allocator<char>::allocator(v2 + 304);
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)(v2 + 1920),
                            &byte_1A159220,
                            (const std::allocator<char> *)(v2 + 304));
                          v38 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                  row,
                                  (const std::string *)(v2 + 1920),
                                  &this->specified_costume_id) != 0;
                          std::string::~string((void *)(v2 + 1920));
                          *(_DWORD *)(((v2 + 1920) >> 3) + 0x7FFF8000) = -117901064;
                          std::allocator<char>::~allocator(v2 + 304);
                          *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
                          if ( v38 )
                          {
                            *(_DWORD *)(((v2 + 1984) >> 3) + 0x7FFF8000) = 0;
                            if ( *(char *)(((v2 + 1984) >> 3) + 0x7FFF8000) < 0
                              || *(_BYTE *)(((v2 + 2015) >> 3) + 0x7FFF8000) != 0
                              && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 2015) >> 3) + 0x7FFF8000) )
                            {
                              __asan_report_store_n(v2 + 1984, 32LL);
                            }
                            common::milog::MiLogStream::create(
                              (common::milog::MiLogStream *)(v2 + 1984),
                              &common::milog::MiLogDefault::default_log_obj_,
                              4u,
                              "./src/txt_data_auto/TrialAvatarExcelConfig.gen.cpp",
                              "init",
                              168);
                            v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                    (common::milog::MiLogStream *const)(v2 + 1984),
                                    (const char (*)[16])"[CONFIG_ERROR] ");
                            common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                              v39,
                              (const char (*)[33])byte_1A159260);
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1984));
                            *(_DWORD *)(((v2 + 1984) >> 3) + 0x7FFF8000) = -117901064;
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
  std::string::~string((void *)(v2 + 448));
  if ( v44 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8110) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862737) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450940 - (((_DWORD)v4 + 2147450948) & 0xFFFFFFF8) + 220) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 2240LL, v44);
  }
  return v6;
};

// Line 176: range 000000000CC16426-000000000CC179CD
int32_t __cdecl data::TrialReliquaryExcelConfig::init(
        data::TrialReliquaryExcelConfig *const this,
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
  unsigned __int64 v12; // rax
  _DWORD *v13; // rax
  bool v14; // r15
  unsigned __int64 v15; // rax
  char *i; // r14
  _DWORD *v17; // rax
  common::milog::MiLogStream *v18; // rax
  bool t; // [rsp+0h] [rbp-530h]
  bool ta; // [rsp+0h] [rbp-530h]
  bool tb; // [rsp+0h] [rbp-530h]
  bool tc; // [rsp+0h] [rbp-530h]
  bool td; // [rsp+0h] [rbp-530h]
  bool te; // [rsp+0h] [rbp-530h]
  char v26[1296]; // [rsp+20h] [rbp-510h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1248LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "25 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 24 9 <unknown> 256 32 11 va"
                        "l_str:177 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <"
                        "unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 32 9 <unknown> 896 32 9 <u"
                        "nknown> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 <unknown> 1152 64 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::TrialReliquaryExcelConfig::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862724] = -234753535;
  v4[536862725] = -234753535;
  v4[536862726] = -234881024;
  v4[536862727] = -218959118;
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
  v4[536862758] = -202116109;
  std::string::basic_string(v2 + 256);
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 320),
    &byte_1A1594A0,
    (const std::allocator<char> *)(v2 + 48));
  t = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 320), &this->id) != 0;
  std::string::~string((void *)(v2 + 320));
  *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( t )
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
      "./src/txt_data_auto/TrialAvatarExcelConfig.gen.cpp",
      "init",
      180);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 384),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v5, (const char (*)[29])byte_1A1594E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
    *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 448),
      &byte_1A159520,
      (const std::allocator<char> *)(v2 + 64));
    ta = common::tools::TxtFile::Row::assignToNum<unsigned int>(
           row,
           (const std::string *)(v2 + 448),
           &this->reliquary_id) != 0;
    std::string::~string((void *)(v2 + 448));
    *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( ta )
    {
      *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 32 + 63) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 512, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 512),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_auto/TrialAvatarExcelConfig.gen.cpp",
        "init",
        185);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 512),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(v7, (const char (*)[38])byte_1A159560);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
      *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 576),
        &byte_1A1595C0,
        (const std::allocator<char> *)(v2 + 80));
      tb = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 576), &this->level) != 0;
      std::string::~string((void *)(v2 + 576));
      *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( tb )
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
          "./src/txt_data_auto/TrialAvatarExcelConfig.gen.cpp",
          "init",
          190);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 640),
               (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v8, (const char (*)[33])byte_1A159600);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 640));
        *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 704),
          &byte_1A159660,
          (const std::allocator<char> *)(v2 + 96));
        tc = common::tools::TxtFile::Row::assignToNum<unsigned int>(
               row,
               (const std::string *)(v2 + 704),
               &this->promote_level) != 0;
        std::string::~string((void *)(v2 + 704));
        *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( tc )
        {
          *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 768) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 32 + 63) & 7) >= *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 768, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 768),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/TrialAvatarExcelConfig.gen.cpp",
            "init",
            195);
          v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v2 + 768),
                 (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v9, (const char (*)[39])byte_1A1596A0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 768));
          *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
          v6 = -1;
        }
        else
        {
          *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 112);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 832),
            &byte_1A159700,
            (const std::allocator<char> *)(v2 + 112));
          td = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                 row,
                 (const std::string *)(v2 + 832),
                 &this->main_prop_id) != 0;
          std::string::~string((void *)(v2 + 832));
          *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( td )
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
              "./src/txt_data_auto/TrialAvatarExcelConfig.gen.cpp",
              "init",
              200);
            v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 896),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v10, (const char (*)[42])byte_1A159740);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 896));
            *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = -117901064;
            v6 = -1;
          }
          else
          {
            *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 128);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 960),
              &byte_1A1597A0,
              (const std::allocator<char> *)(v2 + 128));
            te = common::tools::TxtFile::Row::assignToStr(
                   row,
                   (const std::string *)(v2 + 960),
                   (std::string *)(v2 + 256)) != 0;
            std::string::~string((void *)(v2 + 960));
            *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 128);
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
            if ( te )
            {
              *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 1024) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 1055) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 32 + 63) & 7) >= *(_BYTE *)(((v2 + 1055) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 1024, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 1024),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_auto/TrialAvatarExcelConfig.gen.cpp",
                "init",
                205);
              v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1024),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v11, (const char (*)[41])byte_1A1597E0);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1024));
              *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -117901064;
              v6 = -1;
            }
            else
            {
              v12 = ((v2 + 192) >> 3) + 2147450880;
              *(_WORD *)v12 = 0;
              *(_BYTE *)(v12 + 2) = 0;
              v13 = (_DWORD *)(((v2 + 1152) >> 3) + 2147450880);
              *v13 = 0;
              v13[1] = 0;
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 144);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1152),
                ";",
                (const std::allocator<char> *)(v2 + 144));
              *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 160);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1184),
                ",",
                (const std::allocator<char> *)(v2 + 160));
              *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
              std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 176));
              std::vector<std::string>::vector(
                (std::vector<std::string> *const)(v2 + 192),
                (std::initializer_list<std::string >)__PAIR128__(2LL, v2 + 1152),
                (const std::vector<std::string>::allocator_type *)(v2 + 176));
              v14 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                      (const std::string *)(v2 + 256),
                      (const std::vector<std::string> *)(v2 + 192),
                      &this->append_prop_list,
                      1) != 0;
              std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 192));
              v15 = ((v2 + 192) >> 3) + 2147450880;
              *(_WORD *)v15 = -1800;
              *(_BYTE *)(v15 + 2) = -8;
              std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 176));
              *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
              for ( i = (char *)(v2 + 1216); i != (char *)(v2 + 1152); std::string::~string(i) )
                i -= 32;
              v17 = (_DWORD *)(((v2 + 1152) >> 3) + 2147450880);
              *v17 = -117901064;
              v17[1] = -117901064;
              std::allocator<char>::~allocator(v2 + 160);
              *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
              std::allocator<char>::~allocator(v2 + 144);
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
              if ( v14 )
              {
                *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 1088) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1119) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 32 + 127) & 7) >= *(_BYTE *)(((v2 + 1119) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 1088, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 1088),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_auto/TrialAvatarExcelConfig.gen.cpp",
                  "init",
                  210);
                v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1088),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v18, (const char (*)[41])byte_1A1597E0);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1088));
                *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -117901064;
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
  std::string::~string((void *)(v2 + 256));
  if ( v26 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8094) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862731) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450916 - (((_DWORD)v4 + 2147450924) & 0xFFFFFFF8) + 120) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1248LL, v26);
  }
  return v6;
};

// Line 218: range 000000000CC179CE-000000000CC1962F
int32_t __cdecl data::TrialAvatarTemplateExcelConfig::init(
        data::TrialAvatarTemplateExcelConfig *const this,
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
  unsigned __int64 v17; // rax
  _DWORD *v18; // rax
  bool v19; // r15
  unsigned __int64 v20; // rax
  char *j; // r14
  _DWORD *v22; // rax
  common::milog::MiLogStream *v23; // rax
  bool v24; // r14
  common::milog::MiLogStream *v25; // rax
  unsigned __int64 v26; // rax
  _DWORD *v27; // rax
  bool v28; // r15
  unsigned __int64 v29; // rax
  char *k; // r14
  _DWORD *v31; // rax
  common::milog::MiLogStream *v32; // rax
  bool v33; // r14
  common::milog::MiLogStream *v34; // rax
  bool t; // [rsp+0h] [rbp-6D0h]
  bool ta; // [rsp+0h] [rbp-6D0h]
  std::initializer_list<std::string > __l; // [rsp+10h] [rbp-6C0h]
  std::initializer_list<std::string > v39; // [rsp+20h] [rbp-6B0h]
  char v40[1680]; // [rsp+40h] [rbp-690h] BYREF

  v2 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1632LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "34 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unkno"
                        "wn> 208 1 9 <unknown> 224 1 9 <unknown> 240 1 9 <unknown> 256 24 9 <unknown> 320 24 9 <unknown> "
                        "384 24 9 <unknown> 448 32 11 val_str:219 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown"
                        "> 704 32 9 <unknown> 768 32 9 <unknown> 832 32 9 <unknown> 896 32 9 <unknown> 960 32 9 <unknown>"
                        " 1024 32 9 <unknown> 1088 32 9 <unknown> 1152 32 9 <unknown> 1216 32 9 <unknown> 1280 32 9 <unkn"
                        "own> 1344 64 9 <unknown> 1440 64 9 <unknown> 1536 64 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::TrialAvatarTemplateExcelConfig::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862724] = -234753535;
  v4[536862725] = -234753535;
  v4[536862726] = -234753535;
  v4[536862727] = -234753535;
  v4[536862728] = -234881024;
  v4[536862729] = -218959118;
  v4[536862730] = -234881024;
  v4[536862731] = -218959118;
  v4[536862732] = -234881024;
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
  v4[536862764] = -218959118;
  v4[536862767] = -218959118;
  v4[536862770] = -202116109;
  std::string::basic_string(v2 + 448);
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 512),
    byte_1A127B60,
    (const std::allocator<char> *)(v2 + 32));
  t = common::tools::TxtFile::Row::assignToNum<unsigned int>(
        row,
        (const std::string *)(v2 + 512),
        &this->trial_avatar_level) != 0;
  std::string::~string((void *)(v2 + 512));
  *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( t )
  {
    *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 576) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 576, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 576),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/TrialAvatarExcelConfig.gen.cpp",
      "init",
      222);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 576),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v5, (const char (*)[27])byte_1A14A300);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
    *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 640),
      &byte_1A158E00,
      (const std::allocator<char> *)(v2 + 48));
    ta = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 640), (std::string *)(v2 + 448)) != 0;
    std::string::~string((void *)(v2 + 640));
    *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( ta )
    {
      *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 704) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 704, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 704),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_auto/TrialAvatarExcelConfig.gen.cpp",
        "init",
        227);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 704),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v7, (const char (*)[30])byte_1A158E40);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
      *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v8 = ((v2 + 256) >> 3) + 2147450880;
      *(_WORD *)v8 = 0;
      *(_BYTE *)(v8 + 2) = 0;
      v9 = (_DWORD *)(((v2 + 1344) >> 3) + 2147450880);
      *v9 = 0;
      v9[1] = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 1344),
        ";",
        (const std::allocator<char> *)(v2 + 64));
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 1376),
        ",",
        (const std::allocator<char> *)(v2 + 80));
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 96));
      std::vector<std::string>::vector(
        (std::vector<std::string> *const)(v2 + 256),
        (std::initializer_list<std::string >)__PAIR128__(2LL, v2 + 1344),
        (const std::vector<std::string>::allocator_type *)(v2 + 96));
      v10 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
              (const std::string *)(v2 + 448),
              (const std::vector<std::string> *)(v2 + 256),
              &this->trial_reliquary_list,
              1) != 0;
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 256));
      v11 = ((v2 + 256) >> 3) + 2147450880;
      *(_WORD *)v11 = -1800;
      *(_BYTE *)(v11 + 2) = -8;
      std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 96));
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      for ( i = (char *)(v2 + 1408); i != (char *)(v2 + 1344); std::string::~string(i) )
        i -= 32;
      v13 = (_DWORD *)(((v2 + 1344) >> 3) + 2147450880);
      *v13 = -117901064;
      v13[1] = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( v10 )
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
          "./src/txt_data_auto/TrialAvatarExcelConfig.gen.cpp",
          "init",
          232);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 768),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v14, (const char (*)[30])byte_1A158E40);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 768));
        *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 112);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 832),
          &byte_1A158F20,
          (const std::allocator<char> *)(v2 + 112));
        v15 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 832), (std::string *)(v2 + 448)) != 0;
        std::string::~string((void *)(v2 + 832));
        *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 112);
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
        if ( v15 )
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
            "./src/txt_data_auto/TrialAvatarExcelConfig.gen.cpp",
            "init",
            237);
          v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 896),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v16, (const char (*)[27])byte_1A158F60);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 896));
          *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = -117901064;
          v6 = -1;
        }
        else
        {
          v17 = ((v2 + 320) >> 3) + 2147450880;
          *(_WORD *)v17 = 0;
          *(_BYTE *)(v17 + 2) = 0;
          v18 = (_DWORD *)(((v2 + 1440) >> 3) + 2147450880);
          *v18 = 0;
          v18[1] = 0;
          *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 128);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1440),
            ";",
            (const std::allocator<char> *)(v2 + 128));
          *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 144);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1472),
            ",",
            (const std::allocator<char> *)(v2 + 144));
          __l._M_array = (std::initializer_list<std::string >::iterator)(v2 + 1440);
          __l._M_len = 2LL;
          *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
          std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 160));
          std::vector<std::string>::vector(
            (std::vector<std::string> *const)(v2 + 320),
            __l,
            (const std::vector<std::string>::allocator_type *)(v2 + 160));
          v19 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                  (const std::string *)(v2 + 448),
                  (const std::vector<std::string> *)(v2 + 320),
                  &this->trial_talent_list,
                  1) != 0;
          std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 320));
          v20 = ((v2 + 320) >> 3) + 2147450880;
          *(_WORD *)v20 = -1800;
          *(_BYTE *)(v20 + 2) = -8;
          std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 160));
          *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
          for ( j = (char *)(v2 + 1504); j != (char *)(v2 + 1440); std::string::~string(j) )
            j -= 32;
          v22 = (_DWORD *)(((v2 + 1440) >> 3) + 2147450880);
          *v22 = -117901064;
          v22[1] = -117901064;
          std::allocator<char>::~allocator(v2 + 144);
          *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
          std::allocator<char>::~allocator(v2 + 128);
          *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
          if ( v19 )
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
              "./src/txt_data_auto/TrialAvatarExcelConfig.gen.cpp",
              "init",
              242);
            v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 960),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v23, (const char (*)[27])byte_1A158F60);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 960));
            *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = -117901064;
            v6 = -1;
          }
          else
          {
            *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 176);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1024),
              &byte_1A158FA0,
              (const std::allocator<char> *)(v2 + 176));
            v24 = common::tools::TxtFile::Row::assignToStr(
                    row,
                    (const std::string *)(v2 + 1024),
                    (std::string *)(v2 + 448)) != 0;
            std::string::~string((void *)(v2 + 1024));
            *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 176);
            *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
            if ( v24 )
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
                "./src/txt_data_auto/TrialAvatarExcelConfig.gen.cpp",
                "init",
                247);
              v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1088),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v25, (const char (*)[36])byte_1A158FE0);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1088));
              *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -117901064;
              v6 = -1;
            }
            else
            {
              v26 = ((v2 + 384) >> 3) + 2147450880;
              *(_WORD *)v26 = 0;
              *(_BYTE *)(v26 + 2) = 0;
              v27 = (_DWORD *)(((v2 + 1536) >> 3) + 2147450880);
              *v27 = 0;
              v27[1] = 0;
              *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 192);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1536),
                ";",
                (const std::allocator<char> *)(v2 + 192));
              *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 208);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1568),
                ",",
                (const std::allocator<char> *)(v2 + 208));
              v39._M_array = (std::initializer_list<std::string >::iterator)(v2 + 1536);
              v39._M_len = 2LL;
              *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
              std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 224));
              std::vector<std::string>::vector(
                (std::vector<std::string> *const)(v2 + 384),
                v39,
                (const std::vector<std::string>::allocator_type *)(v2 + 224));
              v28 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                      (const std::string *)(v2 + 448),
                      (const std::vector<std::string> *)(v2 + 384),
                      &this->trial_inherent_proud_skill_list,
                      1) != 0;
              std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 384));
              v29 = ((v2 + 384) >> 3) + 2147450880;
              *(_WORD *)v29 = -1800;
              *(_BYTE *)(v29 + 2) = -8;
              std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 224));
              *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
              for ( k = (char *)(v2 + 1600); k != (char *)(v2 + 1536); std::string::~string(k) )
                k -= 32;
              v31 = (_DWORD *)(((v2 + 1536) >> 3) + 2147450880);
              *v31 = -117901064;
              v31[1] = -117901064;
              std::allocator<char>::~allocator(v2 + 208);
              *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
              std::allocator<char>::~allocator(v2 + 192);
              *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
              if ( v28 )
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
                  "./src/txt_data_auto/TrialAvatarExcelConfig.gen.cpp",
                  "init",
                  252);
                v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1152),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v32, (const char (*)[36])byte_1A158FE0);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1152));
                *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = -117901064;
                v6 = -1;
              }
              else
              {
                *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 240);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1216),
                  &byte_1A1590E0,
                  (const std::allocator<char> *)(v2 + 240));
                v33 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                        row,
                        (const std::string *)(v2 + 1216),
                        &this->trial_avatar_skill_level) != 0;
                std::string::~string((void *)(v2 + 1216));
                *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 240);
                *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                if ( v33 )
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
                    "./src/txt_data_auto/TrialAvatarExcelConfig.gen.cpp",
                    "init",
                    257);
                  v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 1280),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                    v34,
                    (const char (*)[39])byte_1A159120);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1280));
                  *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = -117901064;
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
  std::string::~string((void *)(v2 + 448));
  if ( v40 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80C4) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862737) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450940 - (((_DWORD)v4 + 2147450948) & 0xFFFFFFF8) + 144) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1632LL, v40);
  }
  return v6;
};

// Line 266: range 000000000CC19630-000000000CC1A605
int32_t __cdecl data::TrialAvatarExcelConfigMgrBase::loadTrialAvatarExcelConfig(
        data::TrialAvatarExcelConfigMgrBase *const this,
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
  data::TrialAvatarExcelConfig *v23; // rax
  unsigned int *v24; // rcx
  data::TrialAvatarExcelConfig *v25; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::TrialAvatarExcelConfig>,false,false>,bool> v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  int v29; // edx
  char *i; // r14
  std::string *__for_begin; // [rsp+28h] [rbp-8758h]
  const common::tools::TxtFile::Row *row_ptr; // [rsp+48h] [rbp-8738h]
  char v35[34608]; // [rsp+50h] [rbp-8730h] BYREF

  v3 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_10(34560LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 48 1 9 <unknown> 64 4 5 r:281 80 4 9 <unknown> 96 32 9 paths:267 160 32 9 <unknown> 224 32 9 "
                        "<unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 360 8 "
                        "data:284 976 376 24 debug_message_stream:292 1424 32880 12 txt_file:275";
  *(_QWORD *)(v3 + 16) = data::TrialAvatarExcelConfigMgrBase::loadTrialAvatarExcelConfig;
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
  v5[536862748] = -218959360;
  v5[536862749] = -218959118;
  v5[536862750] = 62194;
  v5[536862762] = -218959360;
  v5[536862763] = -218959118;
  v5[536862764] = 62194;
  v5[536863792] = -202116109;
  v5[536863793] = -202116109;
  v5[536863794] = -202116109;
  v5[536863795] = -202116109;
  v5[536863796] = -202116109;
  v5[536863797] = -202116109;
  v5[536863798] = -202116109;
  v5[536863799] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 96),
    "/txt/TrialAvatarData.txt",
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
    __asan_unpoison_stack_memory(v3 + 1424, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v3 + 1424));
    v7 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v3 + 1424), v7) )
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
        "./src/txt_data_auto/TrialAvatarExcelConfig.gen.cpp",
        "loadTrialAvatarExcelConfig",
        278);
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
        v12 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v3 + 1424));
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 64);
        if ( v12 <= *(_DWORD *)(v3 + 64) )
          break;
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v3 + 1424), *(_DWORD *)(v3 + 64));
        __asan_unpoison_stack_memory(v3 + 544, 360LL);
        data::TrialAvatarExcelConfig::TrialAvatarExcelConfig((data::TrialAvatarExcelConfig *const)(v3 + 544));
        if ( row_ptr )
        {
          if ( data::TrialAvatarExcelConfig::init((data::TrialAvatarExcelConfig *const)(v3 + 544), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 976, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 976);
            v15 = std::operator<<<std::char_traits<char>>(v3 + 976, &unk_1A159C60);
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
              "./src/txt_data_auto/TrialAvatarExcelConfig.gen.cpp",
              "loadTrialAvatarExcelConfig",
              294);
            v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 352),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v17 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v16, (const char (*)[2])"<");
            v18 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, __for_begin);
            v19 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v18,
                    (const char (*)[11])byte_1A1446E0);
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
                    (const char (*)[13])byte_1A144720);
            *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 416, 32LL);
            }
            std::ostringstream::str(v3 + 416, v3 + 976);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, (const std::string *)(v3 + 416));
            std::string::~string((void *)(v3 + 416));
            *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
            *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            std::ostringstream::~ostringstream(v3 + 976);
            __asan_poison_stack_memory(v3 + 976, 376LL);
            v14 = 0;
          }
          else
          {
            v23 = std::move<data::TrialAvatarExcelConfig &>((data::TrialAvatarExcelConfig *)(v3 + 544));
            v26 = std::unordered_map<unsigned int,data::TrialAvatarExcelConfig>::emplace<unsigned int &,data::TrialAvatarExcelConfig>(
                    &this->trial_avatar_excel_config_map,
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
                "./src/txt_data_auto/TrialAvatarExcelConfig.gen.cpp",
                "loadTrialAvatarExcelConfig",
                299);
              v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 480),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v28 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                      v27,
                      (const char (*)[20])byte_1A159CA0);
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
            && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 288, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 288),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/TrialAvatarExcelConfig.gen.cpp",
            "loadTrialAvatarExcelConfig",
            287);
          v13 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 288),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v14 = 0;
        }
        data::TrialAvatarExcelConfig::~TrialAvatarExcelConfig((data::TrialAvatarExcelConfig *const)(v3 + 544));
        __asan_poison_stack_memory(v3 + 544, 360LL);
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
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v3 + 1424));
    __asan_poison_stack_memory(v3 + 1424, 32880LL);
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF90D8) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862726) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450896 - (((_DWORD)v5 + 2147450904) & 0xFFFFFFF8) + 4304) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_10(v3, 34560LL, v35);
  }
  return v2;
};

// Line 308: range 000000000CC1A606-000000000CC1B629
int32_t __cdecl data::TrialAvatarExcelConfigMgrBase::loadTrialReliquaryExcelConfig(
        data::TrialAvatarExcelConfigMgrBase *const this,
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
  data::TrialReliquaryExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::TrialReliquaryExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::TrialReliquaryExcelConfig>,false,false>,bool> v27; // rax
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
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 5 r:323 64 4 9 <unknown> 80 32 9 paths:309 144 32 9 <unknown> 208 32 9 "
                        "<unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 56 8 d"
                        "ata:326 624 376 24 debug_message_stream:334 1072 32880 12 txt_file:317";
  *(_QWORD *)(v3 + 16) = data::TrialAvatarExcelConfigMgrBase::loadTrialReliquaryExcelConfig;
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
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 80),
    "/txt/TrialReliquaryData.txt",
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
    __asan_unpoison_stack_memory(v3 + 1072, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v3 + 1072));
    v7 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v3 + 1072), v7) )
    {
      *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 208) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 96 + 79) & 7) >= *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 208, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 208),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_auto/TrialAvatarExcelConfig.gen.cpp",
        "loadTrialReliquaryExcelConfig",
        320);
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
        v12 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v3 + 1072));
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
        if ( v12 <= *(_DWORD *)(v3 + 48) )
          break;
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v3 + 1072), *(_DWORD *)(v3 + 48));
        v13 = ((v3 + 528) >> 3) + 2147450880;
        *(_DWORD *)v13 = 0;
        *(_WORD *)(v13 + 4) = 0;
        *(_BYTE *)(v13 + 6) = 0;
        data::TrialReliquaryExcelConfig::TrialReliquaryExcelConfig((data::TrialReliquaryExcelConfig *const)(v3 + 528));
        if ( row_ptr )
        {
          if ( data::TrialReliquaryExcelConfig::init((data::TrialReliquaryExcelConfig *const)(v3 + 528), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 624, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 624);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 624, &unk_1A144CE0);
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
              "./src/txt_data_auto/TrialAvatarExcelConfig.gen.cpp",
              "loadTrialReliquaryExcelConfig",
              336);
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
              && (char)((v3 - 112 + 31) & 7) >= *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 400, 32LL);
            }
            std::ostringstream::str(v3 + 400, v3 + 624);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, (const std::string *)(v3 + 400));
            std::string::~string((void *)(v3 + 400));
            *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
            *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            std::ostringstream::~ostringstream(v3 + 624);
            __asan_poison_stack_memory(v3 + 624, 376LL);
            v15 = 0;
          }
          else
          {
            v24 = std::move<data::TrialReliquaryExcelConfig &>((data::TrialReliquaryExcelConfig *)(v3 + 528));
            v27 = std::unordered_map<unsigned int,data::TrialReliquaryExcelConfig>::emplace<unsigned int &,data::TrialReliquaryExcelConfig>(
                    &this->trial_reliquary_excel_config_map,
                    (unsigned int *)(v3 + 536),
                    v24,
                    v25,
                    v26);
            if ( !v27.second )
            {
              *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 464) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 96 + 79) & 7) >= *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 464, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 464),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_auto/TrialAvatarExcelConfig.gen.cpp",
                "loadTrialReliquaryExcelConfig",
                341);
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
            "./src/txt_data_auto/TrialAvatarExcelConfig.gen.cpp",
            "loadTrialReliquaryExcelConfig",
            329);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 272),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
          *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::TrialReliquaryExcelConfig::~TrialReliquaryExcelConfig((data::TrialReliquaryExcelConfig *const)(v3 + 528));
        v30 = ((v3 + 528) >> 3) + 2147450880;
        *(_DWORD *)v30 = -117901064;
        *(_WORD *)(v30 + 4) = -1800;
        *(_BYTE *)(v30 + 6) = -8;
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
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v3 + 1072));
    __asan_poison_stack_memory(v3 + 1072, 32880LL);
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF90AC) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 4276) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_10(v3, 34208LL, v37);
  }
  return v2;
};

// Line 350: range 000000000CC1B62A-000000000CC1CA1B
int32_t __cdecl data::TrialAvatarExcelConfigMgrBase::loadTrialAvatarTemplateExcelConfig(
        data::TrialAvatarExcelConfigMgrBase *const this,
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
  data::TrialAvatarTemplateExcelConfig *v40; // rax
  data::TrialAvatarTemplateExcelConfig *v41; // rdx
  _DWORD *v42; // rax
  int v43; // edx
  char *j; // r14
  std::string *__for_begin; // [rsp+20h] [rbp-86E0h]
  size_t i; // [rsp+28h] [rbp-86D8h]
  const common::tools::TxtFile::Row *row_ptr; // [rsp+48h] [rbp-86B8h]
  std::map<std::string,short unsigned int> *__for_range_0; // [rsp+50h] [rbp-86B0h]
  std::_Rb_tree_iterator<std::pair<const std::string,short unsigned int> >::reference v51; // [rsp+58h] [rbp-86A8h]
  std::tuple_element<0,std::pair<const std::string,short unsigned int> >::type *col_name; // [rsp+60h] [rbp-86A0h]
  std::tuple_element<1,const std::pair<const std::string,short unsigned int> >::type *col_id; // [rsp+68h] [rbp-8698h]
  char v54[34448]; // [rsp+70h] [rbp-8690h] BYREF

  v3 = (unsigned __int64)v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_10(34400LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "17 48 1 9 <unknown> 64 4 5 r:365 80 4 9 <unknown> 96 8 15 __for_begin:380 128 8 13 __for_end:380"
                        " 160 8 9 <unknown> 192 8 5 i:384 224 32 9 paths:351 288 32 9 <unknown> 352 32 9 <unknown> 416 32"
                        " 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 48 19 col_id_name_map:379 688 96 8 data:3"
                        "68 816 376 24 debug_message_stream:376 1264 32880 12 txt_file:359";
  *(_QWORD *)(v3 + 16) = data::TrialAvatarExcelConfigMgrBase::loadTrialAvatarTemplateExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862740] = -219021312;
  v5[536862741] = 62194;
  v5[536862744] = -219021312;
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
    (std::string *const)(v3 + 224),
    "/txt/TrialTemplateData.txt",
    (const std::allocator<char> *)(v3 + 48));
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  for ( __for_begin = (std::string *)(v3 + 224); __for_begin != (std::string *)(v3 + 256); ++__for_begin )
  {
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    p_real_data_base_dir = &config->real_data_base_dir;
    if ( *(char *)(((v3 + 288) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) )
    {
      p_real_data_base_dir = (std::string *)32;
      __asan_report_store_n(v3 + 288, 32LL);
    }
    std::operator+<char>((std::string *)(v3 + 288), p_real_data_base_dir, __for_begin);
    std::string::operator=(__for_begin, v3 + 288);
    std::string::~string((void *)(v3 + 288));
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
    __asan_unpoison_stack_memory(v3 + 1264, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v3 + 1264));
    v7 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v3 + 1264), v7) )
    {
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
        "./src/txt_data_auto/TrialAvatarExcelConfig.gen.cpp",
        "loadTrialAvatarTemplateExcelConfig",
        362);
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v3 + 352),
             (const char (*)[8])byte_1A1445A0);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1A1445E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
      *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
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
        v13 = (_DWORD *)(((v3 + 688) >> 3) + 2147450880);
        *v13 = 0;
        v13[1] = 0;
        v13[2] = 0;
        data::TrialAvatarTemplateExcelConfig::TrialAvatarTemplateExcelConfig((data::TrialAvatarTemplateExcelConfig *const)(v3 + 688));
        if ( row_ptr )
        {
          if ( data::TrialAvatarTemplateExcelConfig::init(
                 (data::TrialAvatarTemplateExcelConfig *const)(v3 + 688),
                 row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 816, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 816);
            if ( *(_BYTE *)(((unsigned __int64)&row_ptr->col_name_map_ptr >> 3) + 0x7FFF8000) )
              __asan_report_load8(&row_ptr->col_name_map_ptr);
            if ( row_ptr->col_name_map_ptr )
            {
              v16 = ((v3 + 608) >> 3) + 2147450880;
              *(_DWORD *)v16 = 0;
              *(_WORD *)(v16 + 4) = 0;
              std::map<unsigned long,std::string>::map((std::map<long unsigned int,std::string> *const)(v3 + 608));
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
                v51 = std::_Rb_tree_iterator<std::pair<std::string const,unsigned short>>::operator*((const std::_Rb_tree_iterator<std::pair<const std::string,short unsigned int> > *const)(v3 + 96));
                col_name = std::get<0ul,std::string const,unsigned short>(v51);
                v17 = (std::tuple_element<1,const std::pair<const std::string,short unsigned int> >::type *)std::get<1ul,std::string const,unsigned short>(v51);
                col_id = v17;
                *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
                v18 = ((unsigned __int8)v17 & 7u) + 1;
                if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v17 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load2(v17);
                }
                v19 = *col_id;
                if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
                  __asan_report_store8(v3 + 160, v18);
                *(_QWORD *)(v3 + 160) = v19;
                v20 = std::map<unsigned long,std::string>::operator[](
                        (std::map<long unsigned int,std::string> *const)(v3 + 608),
                        (std::map<long unsigned int,std::string>::key_type *)(v3 + 160));
                std::string::operator=(v20, col_name);
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
                v21 = std::vector<std::string>::size(&row_ptr->data_vec);
                if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v3 + 192);
                if ( v21 <= *(_QWORD *)(v3 + 192) )
                  break;
                if ( *(_QWORD *)(v3 + 192) )
                  v22 = " ";
                else
                  v22 = byte_1A0D8BA0;
                v23 = std::operator<<<std::char_traits<char>>(v3 + 816, v22);
                v24 = std::map<unsigned long,std::string>::operator[](
                        (std::map<long unsigned int,std::string> *const)(v3 + 608),
                        (const std::map<long unsigned int,std::string>::key_type *)(v3 + 192));
                v25 = std::operator<<<char>(v23, v24);
                v26 = std::operator<<<std::char_traits<char>>(v25, &off_1A147560);
                p_data_vec = &row_ptr->data_vec;
                if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v3 + 192);
                v28 = std::vector<std::string>::operator[](p_data_vec, *(_QWORD *)(v3 + 192));
                std::operator<<<char>(v26, v28);
                if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v3 + 192);
              }
              *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
              std::map<unsigned long,std::string>::~map((std::map<long unsigned int,std::string> *const)(v3 + 608));
              v29 = ((v3 + 608) >> 3) + 2147450880;
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
                v31 = std::operator<<<std::char_traits<char>>(v3 + 816, v30);
                v32 = std::vector<std::string>::operator[](&row_ptr->data_vec, i);
                std::operator<<<char>(v31, v32);
              }
            }
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
              "./src/txt_data_auto/TrialAvatarExcelConfig.gen.cpp",
              "loadTrialAvatarTemplateExcelConfig",
              396);
            v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 480),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v34 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v33, (const char (*)[2])"<");
            v35 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v34, __for_begin);
            v36 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v35,
                    (const char (*)[11])byte_1A1446E0);
            *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 64);
            v37 = (unsigned int)(*(_DWORD *)(v3 + 64) + 1);
            if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v3 + 80, v37);
            *(_DWORD *)(v3 + 80) = v37;
            v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v36,
                    (const unsigned int *)(v3 + 80));
            v39 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v38,
                    (const char (*)[13])byte_1A144720);
            *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 544) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 544, 32LL);
            }
            std::ostringstream::str(v3 + 544, v3 + 816);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v39, (const std::string *)(v3 + 544));
            std::string::~string((void *)(v3 + 544));
            *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
            *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            std::ostringstream::~ostringstream(v3 + 816);
            __asan_poison_stack_memory(v3 + 816, 376LL);
            v15 = 0;
          }
          else
          {
            v40 = std::move<data::TrialAvatarTemplateExcelConfig &>((data::TrialAvatarTemplateExcelConfig *)(v3 + 688));
            std::vector<data::TrialAvatarTemplateExcelConfig>::emplace_back<data::TrialAvatarTemplateExcelConfig>(
              &this->trial_avatar_template_excel_config_vec,
              v40,
              v41);
            v15 = 1;
          }
        }
        else
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
            "./src/txt_data_auto/TrialAvatarExcelConfig.gen.cpp",
            "loadTrialAvatarTemplateExcelConfig",
            371);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 416),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
          *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::TrialAvatarTemplateExcelConfig::~TrialAvatarTemplateExcelConfig((data::TrialAvatarTemplateExcelConfig *const)(v3 + 688));
        v42 = (_DWORD *)(((v3 + 688) >> 3) + 2147450880);
        *v42 = -117901064;
        v42[1] = -117901064;
        v42[2] = -117901064;
        if ( v15 != 1 )
        {
          v43 = 0;
          goto LABEL_76;
        }
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 64);
      }
      v43 = 1;
LABEL_76:
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      v10 = v43 == 1;
    }
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v3 + 1264));
    __asan_poison_stack_memory(v3 + 1264, 32880LL);
    if ( !v10 )
      goto LABEL_80;
  }
  v2 = 0;
LABEL_80:
  for ( j = (char *)(v3 + 256); j != (char *)(v3 + 224); std::string::~string(j) )
    j -= 32;
  if ( v54 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF90C4) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862730) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450912 - (((_DWORD)v5 + 2147450920) & 0xFFFFFFF8) + 4268) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_10(v3, 34400LL, v54);
  }
  return v2;
};

// Line 406: range 000000000CC1CA1C-000000000CC1CE91
int32_t __cdecl data::TrialAvatarExcelConfigMgrBase::loadConfig(
        data::TrialAvatarExcelConfigMgrBase *const this,
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
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)data::TrialAvatarExcelConfigMgrBase::loadConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  if ( data::TrialAvatarExcelConfigMgrBase::loadTrialAvatarExcelConfig(this, config) )
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
      "./src/txt_data_auto/TrialAvatarExcelConfig.gen.cpp",
      "loadConfig",
      409);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      v5,
      (const char (*)[34])"loadTrialAvatarExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( data::TrialAvatarExcelConfigMgrBase::loadTrialReliquaryExcelConfig(this, config) )
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
      "./src/txt_data_auto/TrialAvatarExcelConfig.gen.cpp",
      "loadConfig",
      414);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      v7,
      (const char (*)[37])"loadTrialReliquaryExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( data::TrialAvatarExcelConfigMgrBase::loadTrialAvatarTemplateExcelConfig(this, config) )
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
      "./src/txt_data_auto/TrialAvatarExcelConfig.gen.cpp",
      "loadConfig",
      419);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
      v8,
      (const char (*)[42])"loadTrialAvatarTemplateExcelConfig failed");
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

// Line 426: range 000000000CC1CE92-000000000CC1CEA4
int32_t __cdecl data::TrialAvatarExcelConfigMgrBase::rewriteConfig(
        data::TrialAvatarExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 431: range 000000000CC1CEA6-000000000CC1CEB8
int32_t __cdecl data::TrialAvatarExcelConfigMgrBase::finalConfig(
        data::TrialAvatarExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 436: range 000000000CC1CEBA-000000000CC1D075
data::TrialAvatarExcelConfig *__fastcall data::TrialAvatarExcelConfigMgrBase::findTrialAvatarExcelConfig(
        data::TrialAvatarExcelConfigMgrBase *const this,
        __int64 trial_avatar_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::TrialAvatarExcelConfigMap *p_trial_avatar_excel_config_map; // rdx
  data::TrialAvatarExcelConfigMap *v6; // rdx
  bool v7; // al
  data::TrialAvatarExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 19 trial_avatar_id:435 64 8 8 iter:437 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::TrialAvatarExcelConfigMgrBase::findTrialAvatarExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = trial_avatar_id;
  p_trial_avatar_excel_config_map = &this->trial_avatar_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, trial_avatar_id);
  *(std::unordered_map<unsigned int,data::TrialAvatarExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::TrialAvatarExcelConfig>::find(
                                                                                            p_trial_avatar_excel_config_map,
                                                                                            (const std::unordered_map<unsigned int,data::TrialAvatarExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->trial_avatar_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::TrialAvatarExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::TrialAvatarExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::TrialAvatarExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TrialAvatarExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TrialAvatarExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::TrialAvatarExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::TrialAvatarExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 449: range 000000000CC1D076-000000000CC1D231
const data::TrialAvatarExcelConfig *__fastcall data::TrialAvatarExcelConfigMgrBase::findTrialAvatarExcelConfig(
        const data::TrialAvatarExcelConfigMgrBase *const this,
        __int64 trial_avatar_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::TrialAvatarExcelConfigMap *p_trial_avatar_excel_config_map; // rdx
  data::TrialAvatarExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::TrialAvatarExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 19 trial_avatar_id:448 64 8 8 iter:450 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::TrialAvatarExcelConfigMgrBase::findTrialAvatarExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = trial_avatar_id;
  p_trial_avatar_excel_config_map = &this->trial_avatar_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, trial_avatar_id);
  *(std::unordered_map<unsigned int,data::TrialAvatarExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::TrialAvatarExcelConfig>::find(
                                                                                                  p_trial_avatar_excel_config_map,
                                                                                                  (const std::unordered_map<unsigned int,data::TrialAvatarExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->trial_avatar_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::TrialAvatarExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::TrialAvatarExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::TrialAvatarExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TrialAvatarExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TrialAvatarExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TrialAvatarExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TrialAvatarExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 462: range 000000000CC1D232-000000000CC1D3ED
data::TrialReliquaryExcelConfig *__fastcall data::TrialAvatarExcelConfigMgrBase::findTrialReliquaryExcelConfig(
        data::TrialAvatarExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::TrialReliquaryExcelConfigMap *p_trial_reliquary_excel_config_map; // rdx
  data::TrialReliquaryExcelConfigMap *v6; // rdx
  bool v7; // al
  data::TrialReliquaryExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:461 64 8 8 iter:463 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::TrialAvatarExcelConfigMgrBase::findTrialReliquaryExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_trial_reliquary_excel_config_map = &this->trial_reliquary_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::TrialReliquaryExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::TrialReliquaryExcelConfig>::find(
                                                                                               p_trial_reliquary_excel_config_map,
                                                                                               (const std::unordered_map<unsigned int,data::TrialReliquaryExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->trial_reliquary_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::TrialReliquaryExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::TrialReliquaryExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::TrialReliquaryExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TrialReliquaryExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TrialReliquaryExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::TrialReliquaryExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::TrialReliquaryExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 475: range 000000000CC1D3EE-000000000CC1D5A9
const data::TrialReliquaryExcelConfig *__fastcall data::TrialAvatarExcelConfigMgrBase::findTrialReliquaryExcelConfig(
        const data::TrialAvatarExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::TrialReliquaryExcelConfigMap *p_trial_reliquary_excel_config_map; // rdx
  data::TrialReliquaryExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::TrialReliquaryExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:474 64 8 8 iter:476 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::TrialAvatarExcelConfigMgrBase::findTrialReliquaryExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_trial_reliquary_excel_config_map = &this->trial_reliquary_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::TrialReliquaryExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::TrialReliquaryExcelConfig>::find(
                                                                                                     p_trial_reliquary_excel_config_map,
                                                                                                     (const std::unordered_map<unsigned int,data::TrialReliquaryExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->trial_reliquary_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::TrialReliquaryExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::TrialReliquaryExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::TrialReliquaryExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TrialReliquaryExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TrialReliquaryExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TrialReliquaryExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TrialReliquaryExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp

// Line 19: range 0000000011FE24ED-0000000011FE274C
const char *__cdecl data::enumValToStr(data::ModifierTimeScale e)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  const char *result; // rax
  const char *v5; // rsi
  common::milog::MiLogStream *v6; // rcx
  char v7; // al
  char v8[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::enumValToStr;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862723] = -202116109;
  if ( e )
  {
    if ( e == Level_3 )
    {
      result = "Level";
    }
    else
    {
      if ( *(char *)(((v1 + 64) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 95) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 + 95) & 7) >= *(_BYTE *)(((v1 + 95) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 64, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 64),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp",
        "enumValToStr",
        27);
      v5 = "invalid e:";
      v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
             (common::milog::MiLogStream *const)(v1 + 64),
             (const char (*)[11])"invalid e:");
      v7 = *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000);
      if ( v7 != 0 && v7 <= 3 )
      {
        LOBYTE(v5) = v7 != 0;
        __asan_report_store4(v1 + 48, v5);
      }
      *(_DWORD *)(v1 + 48) = e;
      common::milog::MiLogStream::operator<<<int,(int *)0>(v6, (const int *)(v1 + 48));
      *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 64));
      result = (const char *)&unk_1A891C40;
    }
  }
  else
  {
    result = "Owner";
  }
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 33: range 0000000011FE274D-0000000011FE2F84
bool __cdecl data::enumStrToVal(const std::string *s, data::ModifierTimeScale *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::ModifierTimeScale> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::ModifierTimeScale> >::pointer v11; // rax
  data::ModifierTimeScale second; // ecx
  char v13; // dl
  data::ModifierTimeScale *ea; // [rsp+10h] [rbp-1E0h]
  char v15[464]; // [rsp+20h] [rbp-1D0h] BYREF

  ea = e;
  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(416LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 8 5 it:44 144 8 9 <unk"
                        "nown> 176 32 9 <unknown> 240 32 9 <unknown> 304 80 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = 61956;
  v4[536862723] = -234881024;
  v4[536862724] = 62194;
  v4[536862724] = -234881024;
  v4[536862725] = 62194;
  v4[536862726] = -219021312;
  v4[536862727] = 62194;
  v4[536862728] = -219021312;
  v4[536862729] = 62194;
  v4[536862732] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
  {
    if ( *(char *)(((v2 + 176) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 96 + 47) & 7) >= *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 176, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 176),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp",
      "enumStrToVal",
      36);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 176),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::ModifierTimeScale &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::ModifierTimeScale &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::ModifierTimeScale>::pair<char const(&)[6],data::ModifierTimeScale,true>(
        (std::pair<const std::string,data::ModifierTimeScale> *const)(v2 + 304),
        (const char (*)[6])"Owner",
        (data::ModifierTimeScale *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "Owner");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::ModifierTimeScale>::pair<char const(&)[6],data::ModifierTimeScale,true>(
        (std::pair<const std::string,data::ModifierTimeScale> *const)(v2 + 344),
        (const char (*)[6])"Level",
        (data::ModifierTimeScale *)(v2 + 96));
      std::allocator<std::pair<std::string const,data::ModifierTimeScale>>::allocator((std::allocator<std::pair<const std::string,data::ModifierTimeScale> > *const)(v2 + 64));
      std::map<std::string,data::ModifierTimeScale>::map(
        &data::enumStrToVal(std::string const&,data::ModifierTimeScale &)::m,
        (std::initializer_list<std::pair<const std::string,data::ModifierTimeScale> >)__PAIR128__(2LL, v2 + 304),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::ModifierTimeScale>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::ModifierTimeScale &)::m);
      e = (data::ModifierTimeScale *)&data::enumStrToVal(std::string const&,data::ModifierTimeScale &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::ModifierTimeScale>::~map,
        &data::enumStrToVal(std::string const&,data::ModifierTimeScale &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::ModifierTimeScale>>::~allocator((std::allocator<std::pair<const std::string,data::ModifierTimeScale> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::ModifierTimeScale> *)(v2 + 384);
            i != (std::pair<const std::string,data::ModifierTimeScale> *)(v2 + 304);
            std::pair<std::string const,data::ModifierTimeScale>::~pair(i) )
      {
        --i;
      }
      v7 = ((v2 + 304) >> 3) + 2147450880;
      *(_DWORD *)v7 = -117901064;
      *(_DWORD *)(v7 + 4) = -117901064;
      *(_WORD *)(v7 + 8) = -1800;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 112, e);
    *(std::map<std::string,data::ModifierTimeScale>::iterator *)(v2 + 112) = std::map<std::string,data::ModifierTimeScale>::find(
                                                                               &data::enumStrToVal(std::string const&,data::ModifierTimeScale &)::m,
                                                                               s);
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 144, s);
    *(std::map<std::string,data::ModifierTimeScale>::iterator *)(v2 + 144) = std::map<std::string,data::ModifierTimeScale>::end(&data::enumStrToVal(std::string const&,data::ModifierTimeScale &)::m);
    v8 = (char *)(v2 + 144);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ModifierTimeScale> >::_Self *)(v2 + 112),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ModifierTimeScale> >::_Self *)(v2 + 144));
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
    {
      *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 240) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 96 + 111) & 7) >= *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 240, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 240),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp",
        "enumStrToVal",
        47);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 240),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::ModifierTimeScale>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::ModifierTimeScale> > *const)(v2 + 112));
      if ( *(_BYTE *)(((unsigned __int64)&v11->second >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v11->second >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v11->second);
      }
      second = v11->second;
      v13 = *(_BYTE *)(((unsigned __int64)ea >> 3) + 0x7FFF8000);
      if ( v13 != 0 && (char)(((unsigned __int8)ea & 7) + 3) >= v13 )
      {
        LOBYTE(v8) = v13 != 0;
        __asan_report_store4(ea, v8);
      }
      *ea = second;
      result = 1;
    }
  }
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 55: range 0000000011FE2F85-0000000011FE2FB4
const char *__cdecl data::getDescription(data::ModifierTimeScale e)
{
  if ( e == Owner_2 )
    return "Use owner's timescale, meaning if owner get slowed done the modifier will last longer";
  if ( e == Level_3 )
    return "Use level's timescale, meaning constant timescale";
  return "unknown enum value!";
};

// Line 68: range 0000000011FE2FB5-0000000011FE32AB
const char *__cdecl data::enumValToStr(data::ModifierStacking e)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  const char *result; // rax
  const char *v5; // rsi
  common::milog::MiLogStream *v6; // rcx
  char v7; // al
  char v8[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::enumValToStr;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862723] = -202116109;
  switch ( e )
  {
    case Refresh:
      result = "Refresh";
      break;
    case Unique:
      result = "Unique";
      break;
    case Prolong:
      result = "Prolong";
      break;
    case RefreshAndAddDurability:
      result = "RefreshAndAddDurability";
      break;
    case Multiple:
      result = "Multiple";
      break;
    case MultipleRefresh:
      result = "MultipleRefresh";
      break;
    case MultipleRefreshNoRemove:
      result = "MultipleRefreshNoRemove";
      break;
    case MultipleAllRefresh:
      result = "MultipleAllRefresh";
      break;
    case GlobalUnique:
      result = "GlobalUnique";
      break;
    case Overlap:
      result = "Overlap";
      break;
    case RefreshUniqueDurability:
      result = "RefreshUniqueDurability";
      break;
    case OverlapRefreshDuration:
      result = "OverlapRefreshDuration";
      break;
    default:
      if ( *(char *)(((v1 + 64) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 95) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 + 95) & 7) >= *(_BYTE *)(((v1 + 95) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 64, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 64),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp",
        "enumValToStr",
        96);
      v5 = "invalid e:";
      v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
             (common::milog::MiLogStream *const)(v1 + 64),
             (const char (*)[11])"invalid e:");
      v7 = *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000);
      if ( v7 != 0 && v7 <= 3 )
      {
        LOBYTE(v5) = v7 != 0;
        __asan_report_store4(v1 + 48, v5);
      }
      *(_DWORD *)(v1 + 48) = e;
      common::milog::MiLogStream::operator<<<int,(int *)0>(v6, (const int *)(v1 + 48));
      *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 64));
      result = (const char *)&unk_1A891C40;
      break;
  }
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 102: range 0000000011FE32AC-0000000011FE4131
bool __cdecl data::enumStrToVal(const std::string *s, data::ModifierStacking *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::ModifierStacking> *i; // r14
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::ModifierStacking> >::pointer v10; // rax
  data::ModifierStacking second; // ecx
  char v12; // dl
  data::ModifierStacking *ea; // [rsp+10h] [rbp-420h]
  char v14[1040]; // [rsp+20h] [rbp-410h] BYREF

  ea = e;
  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(992LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "19 32 1 9 <unknown> 48 1 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 "
                        "<unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unkno"
                        "wn> 208 4 9 <unknown> 224 4 9 <unknown> 240 4 9 <unknown> 256 8 6 it:123 288 8 9 <unknown> 320 3"
                        "2 9 <unknown> 384 32 9 <unknown> 448 480 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862724] = -234556924;
  v4[536862725] = -234556924;
  v4[536862726] = -234556924;
  v4[536862727] = -234556924;
  v4[536862728] = -218959360;
  v4[536862729] = -218959360;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862749] = -202116109;
  v4[536862750] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
  {
    if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 32 + 127) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 320, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 320),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp",
      "enumStrToVal",
      105);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 320),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::ModifierStacking &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::ModifierStacking &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::ModifierStacking>::pair<char const(&)[8],data::ModifierStacking,true>(
        (std::pair<const std::string,data::ModifierStacking> *const)(v2 + 448),
        (const char (*)[8])"Refresh",
        (data::ModifierStacking *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "Refresh");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::ModifierStacking>::pair<char const(&)[7],data::ModifierStacking,true>(
        (std::pair<const std::string,data::ModifierStacking> *const)(v2 + 488),
        (const char (*)[7])"Unique",
        (data::ModifierStacking *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "Unique");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::ModifierStacking>::pair<char const(&)[8],data::ModifierStacking,true>(
        (std::pair<const std::string,data::ModifierStacking> *const)(v2 + 528),
        (const char (*)[8])"Prolong",
        (data::ModifierStacking *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "Prolong");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::ModifierStacking>::pair<char const(&)[24],data::ModifierStacking,true>(
        (std::pair<const std::string,data::ModifierStacking> *const)(v2 + 568),
        (const char (*)[24])"RefreshAndAddDurability",
        (data::ModifierStacking *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "RefreshAndAddDurability");
      *(_DWORD *)(v2 + 128) = 4;
      std::pair<std::string const,data::ModifierStacking>::pair<char const(&)[9],data::ModifierStacking,true>(
        (std::pair<const std::string,data::ModifierStacking> *const)(v2 + 608),
        (const char (*)[9])"Multiple",
        (data::ModifierStacking *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "Multiple");
      *(_DWORD *)(v2 + 144) = 5;
      std::pair<std::string const,data::ModifierStacking>::pair<char const(&)[16],data::ModifierStacking,true>(
        (std::pair<const std::string,data::ModifierStacking> *const)(v2 + 648),
        (const char (*)[16])"MultipleRefresh",
        (data::ModifierStacking *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "MultipleRefresh");
      *(_DWORD *)(v2 + 160) = 6;
      std::pair<std::string const,data::ModifierStacking>::pair<char const(&)[24],data::ModifierStacking,true>(
        (std::pair<const std::string,data::ModifierStacking> *const)(v2 + 688),
        (const char (*)[24])"MultipleRefreshNoRemove",
        (data::ModifierStacking *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, "MultipleRefreshNoRemove");
      *(_DWORD *)(v2 + 176) = 7;
      std::pair<std::string const,data::ModifierStacking>::pair<char const(&)[19],data::ModifierStacking,true>(
        (std::pair<const std::string,data::ModifierStacking> *const)(v2 + 728),
        (const char (*)[19])"MultipleAllRefresh",
        (data::ModifierStacking *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, "MultipleAllRefresh");
      *(_DWORD *)(v2 + 192) = 8;
      std::pair<std::string const,data::ModifierStacking>::pair<char const(&)[13],data::ModifierStacking,true>(
        (std::pair<const std::string,data::ModifierStacking> *const)(v2 + 768),
        (const char (*)[13])"GlobalUnique",
        (data::ModifierStacking *)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 208, "GlobalUnique");
      *(_DWORD *)(v2 + 208) = 9;
      std::pair<std::string const,data::ModifierStacking>::pair<char const(&)[8],data::ModifierStacking,true>(
        (std::pair<const std::string,data::ModifierStacking> *const)(v2 + 808),
        (const char (*)[8])"Overlap",
        (data::ModifierStacking *)(v2 + 208));
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 224, "Overlap");
      *(_DWORD *)(v2 + 224) = 10;
      std::pair<std::string const,data::ModifierStacking>::pair<char const(&)[24],data::ModifierStacking,true>(
        (std::pair<const std::string,data::ModifierStacking> *const)(v2 + 848),
        (const char (*)[24])"RefreshUniqueDurability",
        (data::ModifierStacking *)(v2 + 224));
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 240, "RefreshUniqueDurability");
      *(_DWORD *)(v2 + 240) = 11;
      std::pair<std::string const,data::ModifierStacking>::pair<char const(&)[23],data::ModifierStacking,true>(
        (std::pair<const std::string,data::ModifierStacking> *const)(v2 + 888),
        (const char (*)[23])"OverlapRefreshDuration",
        (data::ModifierStacking *)(v2 + 240));
      std::allocator<std::pair<std::string const,data::ModifierStacking>>::allocator((std::allocator<std::pair<const std::string,data::ModifierStacking> > *const)(v2 + 48));
      std::map<std::string,data::ModifierStacking>::map(
        &data::enumStrToVal(std::string const&,data::ModifierStacking &)::m,
        (std::initializer_list<std::pair<const std::string,data::ModifierStacking> >)__PAIR128__(12LL, v2 + 448),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::ModifierStacking>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::ModifierStacking &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::ModifierStacking>::~map,
        &data::enumStrToVal(std::string const&,data::ModifierStacking &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::ModifierStacking>>::~allocator((std::allocator<std::pair<const std::string,data::ModifierStacking> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::ModifierStacking> *)(v2 + 928);
            i != (std::pair<const std::string,data::ModifierStacking> *)(v2 + 448);
            std::pair<std::string const,data::ModifierStacking>::~pair(i) )
      {
        --i;
      }
      e = (data::ModifierStacking *)480;
      __asan_poison_stack_memory(v2 + 448, 480LL);
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
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 256, e);
    *(std::map<std::string,data::ModifierStacking>::iterator *)(v2 + 256) = std::map<std::string,data::ModifierStacking>::find(
                                                                              &data::enumStrToVal(std::string const&,data::ModifierStacking &)::m,
                                                                              s);
    *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 288, s);
    *(std::map<std::string,data::ModifierStacking>::iterator *)(v2 + 288) = std::map<std::string,data::ModifierStacking>::end(&data::enumStrToVal(std::string const&,data::ModifierStacking &)::m);
    v7 = (char *)(v2 + 288);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ModifierStacking> >::_Self *)(v2 + 256),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ModifierStacking> >::_Self *)(v2 + 288));
    *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
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
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp",
        "enumStrToVal",
        126);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 384),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      result = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::ModifierStacking>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::ModifierStacking> > *const)(v2 + 256));
      if ( *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v10->second);
      }
      second = v10->second;
      v12 = *(_BYTE *)(((unsigned __int64)ea >> 3) + 0x7FFF8000);
      if ( v12 != 0 && (char)(((unsigned __int8)ea & 7) + 3) >= v12 )
      {
        LOBYTE(v7) = v12 != 0;
        __asan_report_store4(ea, v7);
      }
      *ea = second;
      result = 1;
    }
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF802C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8054) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF805C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8064) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF806C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8074) = 0LL;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8078) = -168430091;
  }
  return result;
};

// Line 134: range 0000000011FE4132-0000000011FE41DA
const char *__cdecl data::getDescription(data::ModifierStacking e)
{
  const char *result; // rax

  switch ( e )
  {
    case Refresh:
      result = "When applied again within its duration, the duration will be refreshed.";
      break;
    case Unique:
      result = "When applied again within its duration, nothing will happen.";
      break;
    case Prolong:
      result = "When applied again within its duration, it's element durability will be prolonged.";
      break;
    case RefreshAndAddDurability:
      result = "When applied again within its duration, it's element durability will be prolonged.";
      break;
    case Multiple:
      result = "When applied again, multiple instanced of this modifier will be added.";
      break;
    case MultipleRefresh:
      result = "When applied again, multiple instanced of this modifier will be added and replace the smallest element durability one.";
      break;
    case MultipleRefreshNoRemove:
      result = "When applied again, multiple instanced of this modifier will be added and refresh the smallest element du"
               "rability one to origin, then return.";
      break;
    case MultipleAllRefresh:
      result = "When applied again, all the multiplied modifiers element durability will be refreshed";
      break;
    case GlobalUnique:
      result = "When applied by others again, select the one match the stacking option condition";
      break;
    case Overlap:
      result = "When applied again within its duration, the small duration will be refreshed to the bigger duration.";
      break;
    case RefreshUniqueDurability:
      result = "When applied again within its duration, select the one match the stacking option condition, the duration "
               "will be refreshed.";
      break;
    case OverlapRefreshDuration:
      result = "Same as the Overlap option, in addition, will refresh duration as well";
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 167: range 0000000011FE41DB-0000000011FE443A
const char *__cdecl data::enumValToStr(data::UniqueModifierCond e)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  const char *result; // rax
  const char *v5; // rsi
  common::milog::MiLogStream *v6; // rcx
  char v7; // al
  char v8[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::enumValToStr;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862723] = -202116109;
  if ( e )
  {
    if ( e == Smaller )
    {
      result = "Smaller";
    }
    else
    {
      if ( *(char *)(((v1 + 64) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 95) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 + 95) & 7) >= *(_BYTE *)(((v1 + 95) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 64, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 64),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp",
        "enumValToStr",
        175);
      v5 = "invalid e:";
      v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
             (common::milog::MiLogStream *const)(v1 + 64),
             (const char (*)[11])"invalid e:");
      v7 = *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000);
      if ( v7 != 0 && v7 <= 3 )
      {
        LOBYTE(v5) = v7 != 0;
        __asan_report_store4(v1 + 48, v5);
      }
      *(_DWORD *)(v1 + 48) = e;
      common::milog::MiLogStream::operator<<<int,(int *)0>(v6, (const int *)(v1 + 48));
      *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 64));
      result = (const char *)&unk_1A891C40;
    }
  }
  else
  {
    result = "Greater";
  }
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 181: range 0000000011FE443B-0000000011FE4C72
bool __cdecl data::enumStrToVal(const std::string *s, data::UniqueModifierCond *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::UniqueModifierCond> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::UniqueModifierCond> >::pointer v11; // rax
  data::UniqueModifierCond second; // ecx
  char v13; // dl
  data::UniqueModifierCond *ea; // [rsp+10h] [rbp-1E0h]
  char v15[464]; // [rsp+20h] [rbp-1D0h] BYREF

  ea = e;
  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(416LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 8 6 it:192 144 8 9 <un"
                        "known> 176 32 9 <unknown> 240 32 9 <unknown> 304 80 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = 61956;
  v4[536862723] = -234881024;
  v4[536862724] = 62194;
  v4[536862724] = -234881024;
  v4[536862725] = 62194;
  v4[536862726] = -219021312;
  v4[536862727] = 62194;
  v4[536862728] = -219021312;
  v4[536862729] = 62194;
  v4[536862732] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
  {
    if ( *(char *)(((v2 + 176) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 96 + 47) & 7) >= *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 176, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 176),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp",
      "enumStrToVal",
      184);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 176),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::UniqueModifierCond &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::UniqueModifierCond &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::UniqueModifierCond>::pair<char const(&)[8],data::UniqueModifierCond,true>(
        (std::pair<const std::string,data::UniqueModifierCond> *const)(v2 + 304),
        (const char (*)[8])"Greater",
        (data::UniqueModifierCond *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "Greater");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::UniqueModifierCond>::pair<char const(&)[8],data::UniqueModifierCond,true>(
        (std::pair<const std::string,data::UniqueModifierCond> *const)(v2 + 344),
        (const char (*)[8])"Smaller",
        (data::UniqueModifierCond *)(v2 + 96));
      std::allocator<std::pair<std::string const,data::UniqueModifierCond>>::allocator((std::allocator<std::pair<const std::string,data::UniqueModifierCond> > *const)(v2 + 64));
      std::map<std::string,data::UniqueModifierCond>::map(
        &data::enumStrToVal(std::string const&,data::UniqueModifierCond &)::m,
        (std::initializer_list<std::pair<const std::string,data::UniqueModifierCond> >)__PAIR128__(2LL, v2 + 304),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::UniqueModifierCond>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::UniqueModifierCond &)::m);
      e = (data::UniqueModifierCond *)&data::enumStrToVal(std::string const&,data::UniqueModifierCond &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::UniqueModifierCond>::~map,
        &data::enumStrToVal(std::string const&,data::UniqueModifierCond &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::UniqueModifierCond>>::~allocator((std::allocator<std::pair<const std::string,data::UniqueModifierCond> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::UniqueModifierCond> *)(v2 + 384);
            i != (std::pair<const std::string,data::UniqueModifierCond> *)(v2 + 304);
            std::pair<std::string const,data::UniqueModifierCond>::~pair(i) )
      {
        --i;
      }
      v7 = ((v2 + 304) >> 3) + 2147450880;
      *(_DWORD *)v7 = -117901064;
      *(_DWORD *)(v7 + 4) = -117901064;
      *(_WORD *)(v7 + 8) = -1800;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 112, e);
    *(std::map<std::string,data::UniqueModifierCond>::iterator *)(v2 + 112) = std::map<std::string,data::UniqueModifierCond>::find(
                                                                                &data::enumStrToVal(std::string const&,data::UniqueModifierCond &)::m,
                                                                                s);
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 144, s);
    *(std::map<std::string,data::UniqueModifierCond>::iterator *)(v2 + 144) = std::map<std::string,data::UniqueModifierCond>::end(&data::enumStrToVal(std::string const&,data::UniqueModifierCond &)::m);
    v8 = (char *)(v2 + 144);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::UniqueModifierCond> >::_Self *)(v2 + 112),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::UniqueModifierCond> >::_Self *)(v2 + 144));
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
    {
      *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 240) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 96 + 111) & 7) >= *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 240, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 240),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp",
        "enumStrToVal",
        195);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 240),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::UniqueModifierCond>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::UniqueModifierCond> > *const)(v2 + 112));
      if ( *(_BYTE *)(((unsigned __int64)&v11->second >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v11->second >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v11->second);
      }
      second = v11->second;
      v13 = *(_BYTE *)(((unsigned __int64)ea >> 3) + 0x7FFF8000);
      if ( v13 != 0 && (char)(((unsigned __int8)ea & 7) + 3) >= v13 )
      {
        LOBYTE(v8) = v13 != 0;
        __asan_report_store4(ea, v8);
      }
      *ea = second;
      result = 1;
    }
  }
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 203: range 0000000011FE4C73-0000000011FE4CA2
const char *__cdecl data::getDescription(data::UniqueModifierCond e)
{
  if ( e == Greater_2 )
    return "Greater";
  if ( e == Smaller )
    return "Smaller";
  return "unknown enum value!";
};

// Line 217: range 0000000011FE4CA4-0000000011FE58BE
bool __cdecl data::ConfigModifierStackingOption::fromJson(
        data::ConfigModifierStackingOption *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  bool v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rdx
  const Json::Value *ability_special_name_ptr; // [rsp+10h] [rbp-2F0h]
  Json::Value *unique_modifier_condition_ptr; // [rsp+18h] [rbp-2E8h]
  const Json::Value *max_modifier_num_for_multiple_type_ptr; // [rsp+20h] [rbp-2E0h]
  const Json::Value *enable_mixed_unique_ptr; // [rsp+28h] [rbp-2D8h]
  char v13[720]; // [rsp+30h] [rbp-2D0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(672LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "13 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 32 9 <unknown> 160 32 "
                        "9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9"
                        " <unknown> 544 32 9 <unknown> 608 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigModifierStackingOption::fromJson;
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
  v4[536862738] = -218959118;
  v4[536862740] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    "abilitySpecialName",
    (const std::allocator<char> *)(v2 + 32));
  ability_special_name_ptr = jsonValueFind(jval, (const std::string *)(v2 + 96));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( ability_special_name_ptr && !fromJson<std::string>(ability_special_name_ptr, &this->ability_special_name) )
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
      3u,
      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp",
      "fromJson",
      227);
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[40])"fromJson for: abilitySpecialName fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    result = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      "uniqueModifierCondition",
      (const std::allocator<char> *)(v2 + 48));
    unique_modifier_condition_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( !unique_modifier_condition_ptr )
      goto LABEL_16;
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 288, 32LL);
    }
    Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 288), (Json::Value_0 *)unique_modifier_condition_ptr);
    v6 = !data::enumStrToVal((const std::string *)(v2 + 288), &this->unique_modifier_condition);
    std::string::~string((void *)(v2 + 288));
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
    if ( v6 )
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
        3u,
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp",
        "fromJson",
        239);
      common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
        (common::milog::MiLogStream *const)(v2 + 352),
        (const char (*)[45])"fromJson for: uniqueModifierCondition fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
      result = 0;
    }
    else
    {
LABEL_16:
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 416),
        "maxModifierNumForMultipleType",
        (const std::allocator<char> *)(v2 + 64));
      max_modifier_num_for_multiple_type_ptr = jsonValueFind(jval, (const std::string *)(v2 + 416));
      std::string::~string((void *)(v2 + 416));
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( max_modifier_num_for_multiple_type_ptr
        && !data::DynamicFloat::fromJson(
              &this->max_modifier_num_for_multiple_type,
              max_modifier_num_for_multiple_type_ptr) )
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
          3u,
          "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp",
          "fromJson",
          251);
        common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
          (common::milog::MiLogStream *const)(v2 + 480),
          (const char (*)[51])"fromJson for: maxModifierNumForMultipleType fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
        result = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 544),
          "enableMixedUnique",
          (const std::allocator<char> *)(v2 + 80));
        enable_mixed_unique_ptr = jsonValueFind(jval, (const std::string *)(v2 + 544));
        std::string::~string((void *)(v2 + 544));
        *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( enable_mixed_unique_ptr && !fromJson<bool>(enable_mixed_unique_ptr, &this->enable_mixed_unique) )
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
            3u,
            "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp",
            "fromJson",
            263);
          common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            (common::milog::MiLogStream *const)(v2 + 608),
            (const char (*)[39])"fromJson for: enableMixedUnique fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
          result = 0;
        }
        else
        {
          v7 = ((_BYTE)this + 73) & 7;
          v8 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
          if ( (_BYTE)v8 )
            __asan_report_store1(&this->is_json_loaded, v7, v8);
          this->is_json_loaded = 1;
          result = 1;
        }
      }
    }
  }
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8050) = 0;
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

// Line 271: range 0000000011FE58C0-0000000011FE5AA8
int32_t __cdecl data::ConfigModifierStackingOption::getHashValue(const data::ConfigModifierStackingOption *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:272";
  *(_QWORD *)(v2 + 16) = data::ConfigModifierStackingOption::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  common::tools::HashUtils::appendHash(&this->ability_special_name, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->unique_modifier_condition >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->unique_modifier_condition >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->unique_modifier_condition);
  }
  common::tools::HashUtils::appendHash(this->unique_modifier_condition, (int32_t *)(v2 + 32));
  HashValue = data::DynamicFloat::getHashValue(&this->max_modifier_num_for_multiple_type);
  common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->enable_mixed_unique >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->enable_mixed_unique, v2 + 32, &this->enable_mixed_unique);
  common::tools::HashUtils::appendHash(this->enable_mixed_unique, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 282: range 0000000011FE5AAA-0000000011FE5E04
bool __cdecl data::ConfigDummyAbilityOption::fromJson(
        data::ConfigDummyAbilityOption *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *disable_apply_modifier_error_ptr; // [rsp+18h] [rbp-E8h]
  char v9[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigDummyAbilityOption::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 64),
    "disableApplyModifierError",
    (const std::allocator<char> *)(v2 + 48));
  disable_apply_modifier_error_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( disable_apply_modifier_error_ptr
    && !fromJson<bool>(disable_apply_modifier_error_ptr, &this->disable_apply_modifier_error) )
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
      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp",
      "fromJson",
      292);
    common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[47])"fromJson for: disableApplyModifierError fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    result = 0;
  }
  else
  {
    v6 = ((_BYTE)this + 1) & 7;
    v7 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
    if ( (_BYTE)v7 )
      __asan_report_store1(&this->is_json_loaded, v6, v7);
    this->is_json_loaded = 1;
    result = 1;
  }
  if ( v9 == (char *)v2 )
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

// Line 300: range 0000000011FE5E06-0000000011FE5F70
int32_t __cdecl data::ConfigDummyAbilityOption::getHashValue(const data::ConfigDummyAbilityOption *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  __int64 v5; // rsi
  __int64 v6; // rdx
  int32_t result; // eax
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:301";
  *(_QWORD *)(v2 + 16) = data::ConfigDummyAbilityOption::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  v5 = (unsigned __int8)this & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(this, v5, v6);
  common::tools::HashUtils::appendHash(this->disable_apply_modifier_error, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 307: range 0000000011FE5F72-0000000011FE7693
void __cdecl data::ConfigAbilityModifier::foreachMember(
        data::ConfigAbilityModifier *const this,
        std::function<void(std::any&)> *p_func)
{
  std::any *v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5[1824]; // [rsp+10h] [rbp-720h] BYREF

  v2 = (std::any *)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1792LL);
    if ( v3 )
      v2 = (std::any *)v3;
  }
  v2->_M_manager = (void (*)(std::any::_Op, const std::any *, std::any::_Arg *))1102416563;
  v2->_M_storage._M_ptr = "55 32 16 18 time_scale_any:308 64 16 16 stacking_any:310 96 16 23 stacking_option_any:312 128 "
                          "16 15 is_buff_any:314 160 16 17 is_debuff_any:316 192 16 21 modifier_name_any:318 224 16 17 is"
                          "_unique_any:320 256 16 16 duration_any:322 288 16 20 element_type_any:324 320 16 26 element_du"
                          "rability_any:326 352 16 30 max_element_durability_any:328 384 16 23 purge_increment_any:330 41"
                          "6 16 37 is_element_durability_mutable_any:332 448 16 29 force_trigger_burning_any:334 480 16 3"
                          "1 override_weapon_element_any:336 512 16 22 think_interval_any:338 544 16 23 modifier_mixins_a"
                          "ny:340 576 16 27 trim_think_interval_any:342 608 16 18 properties_any:344 640 16 13 state_any:"
                          "346 672 16 20 state_option_any:348 704 16 33 mute_state_display_effect_any:350 736 16 39 apply"
                          "_attacker_witch_time_ratio_any:352 768 16 16 on_added_any:354 800 16 18 on_removed_any:356 832"
                          " 16 20 on_being_hit_any:358 864 16 24 on_attack_landed_any:360 896 16 24 on_hitting_other_any:"
                          "362 928 16 15 on_heal_any:364 960 16 23 on_being_healed_any:366 992 16 25 on_think_interval_an"
                          "y:368 1024 16 41 on_think_interval_is_fixed_update_any:370 1056 16 15 on_kill_any:372 1088 16 "
                          "16 on_crash_any:374 1120 16 20 on_avatar_in_any:376 1152 16 21 on_avatar_out_any:378 1184 16 2"
                          "1 on_vehicle_in_any:380 1216 16 22 on_vehicle_out_any:382 1248 16 21 on_zone_enter_any:384 128"
                          "0 16 20 on_zone_exit_any:386 1312 16 20 on_reconnect_any:388 1344 16 27 on_change_authority_an"
                          "y:390 1376 16 26 forbidden_entities_any:392 1408 16 29 fire_event_when_apply_any:394 1440 16 2"
                          "8 is_durability_global_any:396 1472 16 37 tick_think_interval_after_die_any:398 1504 16 40 thi"
                          "nk_interval_ignore_time_scale_any:400 1536 16 42 reduce_durablity_ignore_time_scale_any:402 15"
                          "68 16 29 is_limited_properties_any:404 1600 16 28 force_sync_to_remote_any:406 1632 16 15 buff"
                          "_id_any:408 1664 16 38 retain_when_durability_is_zero_any:410 1696 16 21 modifier_tags_any:412"
                          " 1728 16 25 use_dummy_ability_any:414 1760 16 28 dummy_ability_option_any:416";
  v2[1]._M_manager = (void (*)(std::any::_Op, const std::any *, std::any::_Arg *))data::ConfigAbilityModifier::foreachMember;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -219021312;
  v4[536862727] = -219021312;
  v4[536862728] = -219021312;
  v4[536862729] = -219021312;
  v4[536862730] = -219021312;
  v4[536862731] = -219021312;
  v4[536862732] = -219021312;
  v4[536862733] = -219021312;
  v4[536862734] = -219021312;
  v4[536862735] = -219021312;
  v4[536862736] = -219021312;
  v4[536862737] = -219021312;
  v4[536862738] = -219021312;
  v4[536862739] = -219021312;
  v4[536862740] = -219021312;
  v4[536862741] = -219021312;
  v4[536862742] = -219021312;
  v4[536862743] = -219021312;
  v4[536862744] = -219021312;
  v4[536862745] = -219021312;
  v4[536862746] = -219021312;
  v4[536862747] = -219021312;
  v4[536862748] = -219021312;
  v4[536862749] = -219021312;
  v4[536862750] = -219021312;
  v4[536862751] = -219021312;
  v4[536862752] = -219021312;
  v4[536862753] = -219021312;
  v4[536862754] = -219021312;
  v4[536862755] = -219021312;
  v4[536862756] = -219021312;
  v4[536862757] = -219021312;
  v4[536862758] = -219021312;
  v4[536862759] = -219021312;
  v4[536862760] = -219021312;
  v4[536862761] = -219021312;
  v4[536862762] = -219021312;
  v4[536862763] = -219021312;
  v4[536862764] = -219021312;
  v4[536862765] = -219021312;
  v4[536862766] = -219021312;
  v4[536862767] = -219021312;
  v4[536862768] = -219021312;
  v4[536862769] = -219021312;
  v4[536862770] = -219021312;
  v4[536862771] = -219021312;
  v4[536862772] = -219021312;
  v4[536862773] = -219021312;
  v4[536862774] = -219021312;
  v4[536862775] = -202178560;
  std::any::any<data::ModifierTimeScale &,data::ModifierTimeScale,std::any::_Manager_internal<data::ModifierTimeScale>,true,true>(
    v2 + 2,
    &this->time_scale);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 2);
  std::any::any<data::ModifierStacking &,data::ModifierStacking,std::any::_Manager_internal<data::ModifierStacking>,true,true>(
    v2 + 4,
    &this->stacking);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 4);
  std::any::any<data::ConfigModifierStackingOption &,data::ConfigModifierStackingOption,std::any::_Manager_external<data::ConfigModifierStackingOption>,true,true>(
    v2 + 6,
    &this->stacking_option);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 6);
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(v2 + 8, &this->is_buff);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 8);
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(v2 + 10, &this->is_debuff);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 10);
  std::any::any<std::string &,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 12,
    &this->modifier_name);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 12);
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(v2 + 14, &this->is_unique);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 14);
  std::any::any<data::DynamicFloat &,data::DynamicFloat,std::any::_Manager_external<data::DynamicFloat>,true,true>(
    v2 + 16,
    &this->duration);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 16);
  std::any::any<data::ElementType &,data::ElementType,std::any::_Manager_internal<data::ElementType>,true,true>(
    v2 + 18,
    &this->element_type);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 18);
  std::any::any<data::DynamicFloat &,data::DynamicFloat,std::any::_Manager_external<data::DynamicFloat>,true,true>(
    v2 + 20,
    &this->element_durability);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 20);
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>(v2 + 22, &this->max_element_durability);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 22);
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>(v2 + 24, &this->purge_increment);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 24);
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(v2 + 26, &this->is_element_durability_mutable);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 26);
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(v2 + 28, &this->force_trigger_burning);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 28);
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(v2 + 30, &this->override_weapon_element);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 30);
  std::any::any<data::DynamicFloat &,data::DynamicFloat,std::any::_Manager_external<data::DynamicFloat>,true,true>(
    v2 + 32,
    &this->think_interval);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 32);
  std::any::any<std::vector<std::shared_ptr<data::ConfigAbilityMixin>> &,std::vector<std::shared_ptr<data::ConfigAbilityMixin>>,std::any::_Manager_external<std::vector<std::shared_ptr<data::ConfigAbilityMixin>>>,true,true>(
    v2 + 34,
    &this->modifier_mixins);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 34);
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(v2 + 36, &this->trim_think_interval);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 36);
  std::any::any<std::unordered_map<std::string,data::DynamicFloat> &,std::unordered_map<std::string,data::DynamicFloat>,std::any::_Manager_external<std::unordered_map<std::string,data::DynamicFloat>>,true,true>(
    v2 + 38,
    &this->properties);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 38);
  std::any::any<data::AbilityState &,data::AbilityState,std::any::_Manager_internal<data::AbilityState>,true,true>(
    v2 + 40,
    &this->state);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 40);
  std::any::any<data::ConfigAbilityStateOption &,data::ConfigAbilityStateOption,std::any::_Manager_internal<data::ConfigAbilityStateOption>,true,true>(
    v2 + 42,
    &this->state_option);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 42);
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(v2 + 44, &this->mute_state_display_effect);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 44);
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(
    v2 + 46,
    &this->apply_attacker_witch_time_ratio);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 46);
  std::any::any<std::vector<std::shared_ptr<data::ConfigAbilityAction>> &,std::vector<std::shared_ptr<data::ConfigAbilityAction>>,std::any::_Manager_external<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>,true,true>(
    v2 + 48,
    &this->on_added);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 48);
  std::any::any<std::vector<std::shared_ptr<data::ConfigAbilityAction>> &,std::vector<std::shared_ptr<data::ConfigAbilityAction>>,std::any::_Manager_external<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>,true,true>(
    v2 + 50,
    &this->on_removed);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 50);
  std::any::any<std::vector<std::shared_ptr<data::ConfigAbilityAction>> &,std::vector<std::shared_ptr<data::ConfigAbilityAction>>,std::any::_Manager_external<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>,true,true>(
    v2 + 52,
    &this->on_being_hit);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 52);
  std::any::any<std::vector<std::shared_ptr<data::ConfigAbilityAction>> &,std::vector<std::shared_ptr<data::ConfigAbilityAction>>,std::any::_Manager_external<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>,true,true>(
    v2 + 54,
    &this->on_attack_landed);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 54);
  std::any::any<std::vector<std::shared_ptr<data::ConfigAbilityAction>> &,std::vector<std::shared_ptr<data::ConfigAbilityAction>>,std::any::_Manager_external<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>,true,true>(
    v2 + 56,
    &this->on_hitting_other);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 56);
  std::any::any<std::vector<std::shared_ptr<data::ConfigAbilityAction>> &,std::vector<std::shared_ptr<data::ConfigAbilityAction>>,std::any::_Manager_external<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>,true,true>(
    v2 + 58,
    &this->on_heal);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 58);
  std::any::any<std::vector<std::shared_ptr<data::ConfigAbilityAction>> &,std::vector<std::shared_ptr<data::ConfigAbilityAction>>,std::any::_Manager_external<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>,true,true>(
    v2 + 60,
    &this->on_being_healed);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 60);
  std::any::any<std::vector<std::shared_ptr<data::ConfigAbilityAction>> &,std::vector<std::shared_ptr<data::ConfigAbilityAction>>,std::any::_Manager_external<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>,true,true>(
    v2 + 62,
    &this->on_think_interval);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 62);
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(
    v2 + 64,
    &this->on_think_interval_is_fixed_update);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 64);
  std::any::any<std::vector<std::shared_ptr<data::ConfigAbilityAction>> &,std::vector<std::shared_ptr<data::ConfigAbilityAction>>,std::any::_Manager_external<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>,true,true>(
    v2 + 66,
    &this->on_kill);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 66);
  std::any::any<std::vector<std::shared_ptr<data::ConfigAbilityAction>> &,std::vector<std::shared_ptr<data::ConfigAbilityAction>>,std::any::_Manager_external<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>,true,true>(
    v2 + 68,
    &this->on_crash);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 68);
  std::any::any<std::vector<std::shared_ptr<data::ConfigAbilityAction>> &,std::vector<std::shared_ptr<data::ConfigAbilityAction>>,std::any::_Manager_external<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>,true,true>(
    v2 + 70,
    &this->on_avatar_in);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 70);
  std::any::any<std::vector<std::shared_ptr<data::ConfigAbilityAction>> &,std::vector<std::shared_ptr<data::ConfigAbilityAction>>,std::any::_Manager_external<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>,true,true>(
    v2 + 72,
    &this->on_avatar_out);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 72);
  std::any::any<std::vector<std::shared_ptr<data::ConfigAbilityAction>> &,std::vector<std::shared_ptr<data::ConfigAbilityAction>>,std::any::_Manager_external<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>,true,true>(
    v2 + 74,
    &this->on_vehicle_in);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 74);
  std::any::any<std::vector<std::shared_ptr<data::ConfigAbilityAction>> &,std::vector<std::shared_ptr<data::ConfigAbilityAction>>,std::any::_Manager_external<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>,true,true>(
    v2 + 76,
    &this->on_vehicle_out);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 76);
  std::any::any<std::vector<std::shared_ptr<data::ConfigAbilityAction>> &,std::vector<std::shared_ptr<data::ConfigAbilityAction>>,std::any::_Manager_external<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>,true,true>(
    v2 + 78,
    &this->on_zone_enter);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 78);
  std::any::any<std::vector<std::shared_ptr<data::ConfigAbilityAction>> &,std::vector<std::shared_ptr<data::ConfigAbilityAction>>,std::any::_Manager_external<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>,true,true>(
    v2 + 80,
    &this->on_zone_exit);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 80);
  std::any::any<std::vector<std::shared_ptr<data::ConfigAbilityAction>> &,std::vector<std::shared_ptr<data::ConfigAbilityAction>>,std::any::_Manager_external<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>,true,true>(
    v2 + 82,
    &this->on_reconnect);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 82);
  std::any::any<std::vector<std::shared_ptr<data::ConfigAbilityAction>> &,std::vector<std::shared_ptr<data::ConfigAbilityAction>>,std::any::_Manager_external<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>,true,true>(
    v2 + 84,
    &this->on_change_authority);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 84);
  std::any::any<std::vector<data::EntityType> &,std::vector<data::EntityType>,std::any::_Manager_external<std::vector<data::EntityType>>,true,true>(
    v2 + 86,
    &this->forbidden_entities);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 86);
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(v2 + 88, &this->fire_event_when_apply);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 88);
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(v2 + 90, &this->is_durability_global);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 90);
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(v2 + 92, &this->tick_think_interval_after_die);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 92);
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(
    v2 + 94,
    &this->think_interval_ignore_time_scale);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 94);
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(
    v2 + 96,
    &this->reduce_durablity_ignore_time_scale);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 96);
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(v2 + 98, &this->is_limited_properties);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 98);
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(v2 + 100, &this->force_sync_to_remote);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 100);
  std::any::any<int &,int,std::any::_Manager_internal<int>,true,true>(v2 + 102, &this->buff_id);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 102);
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(
    v2 + 104,
    &this->retain_when_durability_is_zero);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 104);
  std::any::any<std::vector<data::ModifierTag> &,std::vector<data::ModifierTag>,std::any::_Manager_external<std::vector<data::ModifierTag>>,true,true>(
    v2 + 106,
    &this->modifier_tags);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 106);
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(v2 + 108, &this->use_dummy_ability);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 108);
  std::any::any<data::ConfigDummyAbilityOption &,data::ConfigDummyAbilityOption,std::any::_Manager_internal<data::ConfigDummyAbilityOption>,true,true>(
    v2 + 110,
    &this->dummy_ability_option);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 110);
  std::any::~any(v2 + 110);
  std::any::~any(v2 + 108);
  std::any::~any(v2 + 106);
  std::any::~any(v2 + 104);
  std::any::~any(v2 + 102);
  std::any::~any(v2 + 100);
  std::any::~any(v2 + 98);
  std::any::~any(v2 + 96);
  std::any::~any(v2 + 94);
  std::any::~any(v2 + 92);
  std::any::~any(v2 + 90);
  std::any::~any(v2 + 88);
  std::any::~any(v2 + 86);
  std::any::~any(v2 + 84);
  std::any::~any(v2 + 82);
  std::any::~any(v2 + 80);
  std::any::~any(v2 + 78);
  std::any::~any(v2 + 76);
  std::any::~any(v2 + 74);
  std::any::~any(v2 + 72);
  std::any::~any(v2 + 70);
  std::any::~any(v2 + 68);
  std::any::~any(v2 + 66);
  std::any::~any(v2 + 64);
  std::any::~any(v2 + 62);
  std::any::~any(v2 + 60);
  std::any::~any(v2 + 58);
  std::any::~any(v2 + 56);
  std::any::~any(v2 + 54);
  std::any::~any(v2 + 52);
  std::any::~any(v2 + 50);
  std::any::~any(v2 + 48);
  std::any::~any(v2 + 46);
  std::any::~any(v2 + 44);
  std::any::~any(v2 + 42);
  std::any::~any(v2 + 40);
  std::any::~any(v2 + 38);
  std::any::~any(v2 + 36);
  std::any::~any(v2 + 34);
  std::any::~any(v2 + 32);
  std::any::~any(v2 + 30);
  std::any::~any(v2 + 28);
  std::any::~any(v2 + 26);
  std::any::~any(v2 + 24);
  std::any::~any(v2 + 22);
  std::any::~any(v2 + 20);
  std::any::~any(v2 + 18);
  std::any::~any(v2 + 16);
  std::any::~any(v2 + 14);
  std::any::~any(v2 + 12);
  std::any::~any(v2 + 10);
  std::any::~any(v2 + 8);
  std::any::~any(v2 + 6);
  std::any::~any(v2 + 4);
  std::any::~any(v2 + 2);
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF80D8) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 224) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    v2->_M_manager = (void (*)(std::any::_Op, const std::any *, std::any::_Arg *))1172321806;
    __asan_stack_free_5(v2, 1792LL, v5);
  }
};

// Line 421: range 0000000011FE7694-0000000011FE76D7
data::ConfigAbilityModifierPtr __cdecl data::ConfigAbilityModifierFactory::create(
        data::ConfigAbilityModifierFactory *const this)
{
  data::ConfigAbilityModifierPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigAbilityModifier>();
  result._M_ptr = (std::__shared_ptr<data::ConfigAbilityModifier,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 423: range 0000000011FE76D8-0000000011FF0522
bool __cdecl data::ConfigAbilityModifier::fromJson(data::ConfigAbilityModifier *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r15
  char v6; // al
  bool v7; // r15
  bool v8; // r15
  bool v9; // r15
  __int64 v10; // rsi
  __int64 v11; // rdx
  bool v12; // bl
  Json::Value *time_scale_ptr; // [rsp+18h] [rbp-2208h]
  Json::Value *stacking_ptr; // [rsp+20h] [rbp-2200h]
  const Json::Value *stacking_option_ptr; // [rsp+28h] [rbp-21F8h]
  const Json::Value *is_buff_ptr; // [rsp+30h] [rbp-21F0h]
  const Json::Value *is_debuff_ptr; // [rsp+38h] [rbp-21E8h]
  const Json::Value *modifier_name_ptr; // [rsp+40h] [rbp-21E0h]
  const Json::Value *is_unique_ptr; // [rsp+48h] [rbp-21D8h]
  const Json::Value *duration_ptr; // [rsp+50h] [rbp-21D0h]
  Json::Value *element_type_ptr; // [rsp+58h] [rbp-21C8h]
  const Json::Value *element_durability_ptr; // [rsp+60h] [rbp-21C0h]
  const Json::Value *max_element_durability_ptr; // [rsp+68h] [rbp-21B8h]
  const Json::Value *purge_increment_ptr; // [rsp+70h] [rbp-21B0h]
  const Json::Value *is_element_durability_mutable_ptr; // [rsp+78h] [rbp-21A8h]
  const Json::Value *force_trigger_burning_ptr; // [rsp+80h] [rbp-21A0h]
  const Json::Value *override_weapon_element_ptr; // [rsp+88h] [rbp-2198h]
  const Json::Value *think_interval_ptr; // [rsp+90h] [rbp-2190h]
  const Json::Value *modifier_mixins_ptr; // [rsp+98h] [rbp-2188h]
  const Json::Value *trim_think_interval_ptr; // [rsp+A0h] [rbp-2180h]
  const Json::Value *properties_ptr; // [rsp+A8h] [rbp-2178h]
  Json::Value *state_ptr; // [rsp+B0h] [rbp-2170h]
  const Json::Value *state_option_ptr; // [rsp+B8h] [rbp-2168h]
  const Json::Value *mute_state_display_effect_ptr; // [rsp+C0h] [rbp-2160h]
  const Json::Value *apply_attacker_witch_time_ratio_ptr; // [rsp+C8h] [rbp-2158h]
  const Json::Value *on_added_ptr; // [rsp+D0h] [rbp-2150h]
  const Json::Value *on_removed_ptr; // [rsp+D8h] [rbp-2148h]
  const Json::Value *on_being_hit_ptr; // [rsp+E0h] [rbp-2140h]
  const Json::Value *on_attack_landed_ptr; // [rsp+E8h] [rbp-2138h]
  const Json::Value *on_hitting_other_ptr; // [rsp+F0h] [rbp-2130h]
  const Json::Value *on_heal_ptr; // [rsp+F8h] [rbp-2128h]
  const Json::Value *on_being_healed_ptr; // [rsp+100h] [rbp-2120h]
  const Json::Value *on_think_interval_ptr; // [rsp+108h] [rbp-2118h]
  const Json::Value *on_think_interval_is_fixed_update_ptr; // [rsp+110h] [rbp-2110h]
  const Json::Value *on_kill_ptr; // [rsp+118h] [rbp-2108h]
  const Json::Value *on_crash_ptr; // [rsp+120h] [rbp-2100h]
  const Json::Value *on_avatar_in_ptr; // [rsp+128h] [rbp-20F8h]
  const Json::Value *on_avatar_out_ptr; // [rsp+130h] [rbp-20F0h]
  const Json::Value *on_vehicle_in_ptr; // [rsp+138h] [rbp-20E8h]
  const Json::Value *on_vehicle_out_ptr; // [rsp+140h] [rbp-20E0h]
  const Json::Value *on_zone_enter_ptr; // [rsp+148h] [rbp-20D8h]
  const Json::Value *on_zone_exit_ptr; // [rsp+150h] [rbp-20D0h]
  const Json::Value *on_reconnect_ptr; // [rsp+158h] [rbp-20C8h]
  const Json::Value *on_change_authority_ptr; // [rsp+160h] [rbp-20C0h]
  const Json::Value *forbidden_entities_ptr; // [rsp+168h] [rbp-20B8h]
  const Json::Value *fire_event_when_apply_ptr; // [rsp+170h] [rbp-20B0h]
  const Json::Value *is_durability_global_ptr; // [rsp+178h] [rbp-20A8h]
  const Json::Value *tick_think_interval_after_die_ptr; // [rsp+180h] [rbp-20A0h]
  const Json::Value *think_interval_ignore_time_scale_ptr; // [rsp+188h] [rbp-2098h]
  const Json::Value *reduce_durablity_ignore_time_scale_ptr; // [rsp+190h] [rbp-2090h]
  const Json::Value *is_limited_properties_ptr; // [rsp+198h] [rbp-2088h]
  const Json::Value *force_sync_to_remote_ptr; // [rsp+1A0h] [rbp-2080h]
  const Json::Value *buff_id_ptr; // [rsp+1A8h] [rbp-2078h]
  const Json::Value *retain_when_durability_is_zero_ptr; // [rsp+1B0h] [rbp-2070h]
  const Json::Value *modifier_tags_ptr; // [rsp+1B8h] [rbp-2068h]
  const Json::Value *use_dummy_ability_ptr; // [rsp+1C0h] [rbp-2060h]
  const Json::Value *dummy_ability_option_ptr; // [rsp+1C8h] [rbp-2058h]
  char v69[8272]; // [rsp+1D0h] [rbp-2050h] BYREF

  v2 = (unsigned __int64)v69;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_8(8224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "169 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 "
                        "9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 <unk"
                        "nown> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 288 1 9 <unknown> "
                        "304 1 9 <unknown> 320 1 9 <unknown> 336 1 9 <unknown> 352 1 9 <unknown> 368 1 9 <unknown> 384 1 "
                        "9 <unknown> 400 1 9 <unknown> 416 1 9 <unknown> 432 1 9 <unknown> 448 1 9 <unknown> 464 1 9 <unk"
                        "nown> 480 1 9 <unknown> 496 1 9 <unknown> 512 1 9 <unknown> 528 1 9 <unknown> 544 1 9 <unknown> "
                        "560 1 9 <unknown> 576 1 9 <unknown> 592 1 9 <unknown> 608 1 9 <unknown> 624 1 9 <unknown> 640 1 "
                        "9 <unknown> 656 1 9 <unknown> 672 1 9 <unknown> 688 1 9 <unknown> 704 1 9 <unknown> 720 1 9 <unk"
                        "nown> 736 1 9 <unknown> 752 1 9 <unknown> 768 1 9 <unknown> 784 1 9 <unknown> 800 1 9 <unknown> "
                        "816 1 9 <unknown> 832 1 9 <unknown> 848 1 9 <unknown> 864 1 9 <unknown> 880 1 9 <unknown> 896 1 "
                        "9 <unknown> 912 1 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown> 1056 32 9 <unknown> 1120 32 "
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
                        "wn> 5152 32 9 <unknown> 5216 32 9 <unknown> 5280 32 9 <unknown> 5344 32 9 <unknown> 5408 32 9 <u"
                        "nknown> 5472 32 9 <unknown> 5536 32 9 <unknown> 5600 32 9 <unknown> 5664 32 9 <unknown> 5728 32 "
                        "9 <unknown> 5792 32 9 <unknown> 5856 32 9 <unknown> 5920 32 9 <unknown> 5984 32 9 <unknown> 6048"
                        " 32 9 <unknown> 6112 32 9 <unknown> 6176 32 9 <unknown> 6240 32 9 <unknown> 6304 32 9 <unknown> "
                        "6368 32 9 <unknown> 6432 32 9 <unknown> 6496 32 9 <unknown> 6560 32 9 <unknown> 6624 32 9 <unkno"
                        "wn> 6688 32 9 <unknown> 6752 32 9 <unknown> 6816 32 9 <unknown> 6880 32 9 <unknown> 6944 32 9 <u"
                        "nknown> 7008 32 9 <unknown> 7072 32 9 <unknown> 7136 32 9 <unknown> 7200 32 9 <unknown> 7264 32 "
                        "9 <unknown> 7328 32 9 <unknown> 7392 32 9 <unknown> 7456 32 9 <unknown> 7520 32 9 <unknown> 7584"
                        " 32 9 <unknown> 7648 32 9 <unknown> 7712 32 9 <unknown> 7776 32 9 <unknown> 7840 32 9 <unknown> "
                        "7904 32 9 <unknown> 7968 32 9 <unknown> 8032 32 9 <unknown> 8096 32 9 <unknown> 8160 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigAbilityModifier::fromJson;
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
  v4[536862741] = -234753535;
  v4[536862742] = -234753535;
  v4[536862743] = -234753535;
  v4[536862744] = -234753535;
  v4[536862745] = -234753535;
  v4[536862746] = -234753535;
  v4[536862747] = -234753535;
  v4[536862748] = -234753535;
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
  v4[536862884] = -218959118;
  v4[536862886] = -218959118;
  v4[536862888] = -218959118;
  v4[536862890] = -218959118;
  v4[536862892] = -218959118;
  v4[536862894] = -218959118;
  v4[536862896] = -218959118;
  v4[536862898] = -218959118;
  v4[536862900] = -218959118;
  v4[536862902] = -218959118;
  v4[536862904] = -218959118;
  v4[536862906] = -218959118;
  v4[536862908] = -218959118;
  v4[536862910] = -218959118;
  v4[536862912] = -218959118;
  v4[536862914] = -218959118;
  v4[536862916] = -218959118;
  v4[536862918] = -218959118;
  v4[536862920] = -218959118;
  v4[536862922] = -218959118;
  v4[536862924] = -218959118;
  v4[536862926] = -218959118;
  v4[536862928] = -218959118;
  v4[536862930] = -218959118;
  v4[536862932] = -218959118;
  v4[536862934] = -218959118;
  v4[536862936] = -218959118;
  v4[536862938] = -218959118;
  v4[536862940] = -218959118;
  v4[536862942] = -218959118;
  v4[536862944] = -218959118;
  v4[536862946] = -218959118;
  v4[536862948] = -218959118;
  v4[536862950] = -218959118;
  v4[536862952] = -218959118;
  v4[536862954] = -218959118;
  v4[536862956] = -218959118;
  v4[536862958] = -218959118;
  v4[536862960] = -218959118;
  v4[536862962] = -218959118;
  v4[536862964] = -218959118;
  v4[536862966] = -218959118;
  v4[536862968] = -218959118;
  v4[536862970] = -218959118;
  v4[536862972] = -218959118;
  v4[536862974] = -218959118;
  v4[536862976] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 928),
    "timeScale",
    (const std::allocator<char> *)(v2 + 48));
  time_scale_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 928));
  std::string::~string((void *)(v2 + 928));
  *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( !time_scale_ptr )
    goto LABEL_11;
  *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v2 + 992) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 992, 32LL);
  }
  Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 992), (Json::Value_0 *)time_scale_ptr);
  v5 = !data::enumStrToVal((const std::string *)(v2 + 992), &this->time_scale);
  std::string::~string((void *)(v2 + 992));
  *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
  if ( v5 )
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
      3u,
      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp",
      "fromJson",
      433);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      (common::milog::MiLogStream *const)(v2 + 1056),
      (const char (*)[31])"fromJson for: timeScale fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1056));
    v6 = 0;
  }
  else
  {
LABEL_11:
    *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 1120),
      "stacking",
      (const std::allocator<char> *)(v2 + 64));
    stacking_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 1120));
    std::string::~string((void *)(v2 + 1120));
    *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( !stacking_ptr )
      goto LABEL_18;
    *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 1184) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 1215) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 1215) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 1184, 32LL);
    }
    Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 1184), (Json::Value_0 *)stacking_ptr);
    v7 = !data::enumStrToVal((const std::string *)(v2 + 1184), &this->stacking);
    std::string::~string((void *)(v2 + 1184));
    *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = -117901064;
    if ( v7 )
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
        3u,
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp",
        "fromJson",
        445);
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        (common::milog::MiLogStream *const)(v2 + 1248),
        (const char (*)[30])"fromJson for: stacking fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1248));
      v6 = 0;
    }
    else
    {
LABEL_18:
      *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 1312),
        "stackingOption",
        (const std::allocator<char> *)(v2 + 80));
      stacking_option_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1312));
      std::string::~string((void *)(v2 + 1312));
      *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( stacking_option_ptr
        && !data::ConfigModifierStackingOption::fromJson(&this->stacking_option, stacking_option_ptr) )
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
          3u,
          "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp",
          "fromJson",
          457);
        common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
          (common::milog::MiLogStream *const)(v2 + 1376),
          (const char (*)[36])"fromJson for: stackingOption fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1376));
        v6 = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 1440),
          "isBuff",
          (const std::allocator<char> *)(v2 + 96));
        is_buff_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1440));
        std::string::~string((void *)(v2 + 1440));
        *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( is_buff_ptr && !fromJson<bool>(is_buff_ptr, &this->is_buff) )
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
            3u,
            "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp",
            "fromJson",
            469);
          common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
            (common::milog::MiLogStream *const)(v2 + 1504),
            (const char (*)[28])"fromJson for: isBuff fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1504));
          v6 = 0;
        }
        else
        {
          *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 112);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1568),
            "isDebuff",
            (const std::allocator<char> *)(v2 + 112));
          is_debuff_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1568));
          std::string::~string((void *)(v2 + 1568));
          *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( is_debuff_ptr && !fromJson<bool>(is_debuff_ptr, &this->is_debuff) )
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
              3u,
              "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp",
              "fromJson",
              481);
            common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              (common::milog::MiLogStream *const)(v2 + 1632),
              (const char (*)[30])"fromJson for: isDebuff fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1632));
            v6 = 0;
          }
          else
          {
            *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 128);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1696),
              "modifierName",
              (const std::allocator<char> *)(v2 + 128));
            modifier_name_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1696));
            std::string::~string((void *)(v2 + 1696));
            *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 128);
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
            if ( modifier_name_ptr && !fromJson<std::string>(modifier_name_ptr, &this->modifier_name) )
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
                3u,
                "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp",
                "fromJson",
                493);
              common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                (common::milog::MiLogStream *const)(v2 + 1760),
                (const char (*)[34])"fromJson for: modifierName fails!");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1760));
              v6 = 0;
            }
            else
            {
              *(_DWORD *)(((v2 + 1824) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 144);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1824),
                "isUnique",
                (const std::allocator<char> *)(v2 + 144));
              is_unique_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1824));
              std::string::~string((void *)(v2 + 1824));
              *(_DWORD *)(((v2 + 1824) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 144);
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
              if ( is_unique_ptr && !fromJson<bool>(is_unique_ptr, &this->is_unique) )
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
                  3u,
                  "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp",
                  "fromJson",
                  505);
                common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  (common::milog::MiLogStream *const)(v2 + 1888),
                  (const char (*)[30])"fromJson for: isUnique fails!");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1888));
                v6 = 0;
              }
              else
              {
                *(_DWORD *)(((v2 + 1952) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 160);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1952),
                  "duration",
                  (const std::allocator<char> *)(v2 + 160));
                duration_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1952));
                std::string::~string((void *)(v2 + 1952));
                *(_DWORD *)(((v2 + 1952) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 160);
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                if ( duration_ptr && !data::DynamicFloat::fromJson(&this->duration, duration_ptr) )
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
                    3u,
                    "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp",
                    "fromJson",
                    517);
                  common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                    (common::milog::MiLogStream *const)(v2 + 2016),
                    (const char (*)[30])"fromJson for: duration fails!");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2016));
                  v6 = 0;
                }
                else
                {
                  *(_DWORD *)(((v2 + 2080) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 176);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 2080),
                    "elementType",
                    (const std::allocator<char> *)(v2 + 176));
                  element_type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 2080));
                  std::string::~string((void *)(v2 + 2080));
                  *(_DWORD *)(((v2 + 2080) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 176);
                  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                  if ( !element_type_ptr )
                    goto LABEL_55;
                  *(_DWORD *)(((v2 + 2144) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 2144) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 2175) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 2175) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 2144, 32LL);
                  }
                  Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 2144), (Json::Value_0 *)element_type_ptr);
                  v8 = !data::enumStrToVal((const std::string *)(v2 + 2144), &this->element_type);
                  std::string::~string((void *)(v2 + 2144));
                  *(_DWORD *)(((v2 + 2144) >> 3) + 0x7FFF8000) = -117901064;
                  if ( v8 )
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
                      3u,
                      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp",
                      "fromJson",
                      529);
                    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                      (common::milog::MiLogStream *const)(v2 + 2208),
                      (const char (*)[33])"fromJson for: elementType fails!");
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2208));
                    v6 = 0;
                  }
                  else
                  {
LABEL_55:
                    *(_DWORD *)(((v2 + 2272) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 192);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 2272),
                      "elementDurability",
                      (const std::allocator<char> *)(v2 + 192));
                    element_durability_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2272));
                    std::string::~string((void *)(v2 + 2272));
                    *(_DWORD *)(((v2 + 2272) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 192);
                    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                    if ( element_durability_ptr
                      && !data::DynamicFloat::fromJson(&this->element_durability, element_durability_ptr) )
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
                        3u,
                        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp",
                        "fromJson",
                        541);
                      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                        (common::milog::MiLogStream *const)(v2 + 2336),
                        (const char (*)[39])"fromJson for: elementDurability fails!");
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2336));
                      v6 = 0;
                    }
                    else
                    {
                      *(_DWORD *)(((v2 + 2400) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 208);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 2400),
                        "maxElementDurability",
                        (const std::allocator<char> *)(v2 + 208));
                      max_element_durability_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2400));
                      std::string::~string((void *)(v2 + 2400));
                      *(_DWORD *)(((v2 + 2400) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 208);
                      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                      if ( max_element_durability_ptr
                        && !fromJson<float>(max_element_durability_ptr, &this->max_element_durability) )
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
                          3u,
                          "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp",
                          "fromJson",
                          553);
                        common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                          (common::milog::MiLogStream *const)(v2 + 2464),
                          (const char (*)[42])"fromJson for: maxElementDurability fails!");
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2464));
                        v6 = 0;
                      }
                      else
                      {
                        *(_DWORD *)(((v2 + 2528) >> 3) + 0x7FFF8000) = 0;
                        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 224);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 2528),
                          "purgeIncrement",
                          (const std::allocator<char> *)(v2 + 224));
                        purge_increment_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2528));
                        std::string::~string((void *)(v2 + 2528));
                        *(_DWORD *)(((v2 + 2528) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 224);
                        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                        if ( purge_increment_ptr && !fromJson<float>(purge_increment_ptr, &this->purge_increment) )
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
                            3u,
                            "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp",
                            "fromJson",
                            565);
                          common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                            (common::milog::MiLogStream *const)(v2 + 2592),
                            (const char (*)[36])"fromJson for: purgeIncrement fails!");
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2592));
                          v6 = 0;
                        }
                        else
                        {
                          *(_DWORD *)(((v2 + 2656) >> 3) + 0x7FFF8000) = 0;
                          *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
                          std::allocator<char>::allocator(v2 + 240);
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)(v2 + 2656),
                            "isElementDurabilityMutable",
                            (const std::allocator<char> *)(v2 + 240));
                          is_element_durability_mutable_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2656));
                          std::string::~string((void *)(v2 + 2656));
                          *(_DWORD *)(((v2 + 2656) >> 3) + 0x7FFF8000) = -117901064;
                          std::allocator<char>::~allocator(v2 + 240);
                          *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                          if ( is_element_durability_mutable_ptr
                            && !fromJson<bool>(is_element_durability_mutable_ptr, &this->is_element_durability_mutable) )
                          {
                            *(_DWORD *)(((v2 + 2720) >> 3) + 0x7FFF8000) = 0;
                            if ( *(char *)(((v2 + 2720) >> 3) + 0x7FFF8000) < 0
                              || *(_BYTE *)(((v2 + 2751) >> 3) + 0x7FFF8000) != 0
                              && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 2751) >> 3) + 0x7FFF8000) )
                            {
                              __asan_report_store_n(v2 + 2720, 32LL);
                            }
                            common::milog::MiLogStream::create(
                              (common::milog::MiLogStream *)(v2 + 2720),
                              &common::milog::MiLogDefault::default_log_obj_,
                              3u,
                              "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp",
                              "fromJson",
                              577);
                            common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                              (common::milog::MiLogStream *const)(v2 + 2720),
                              (const char (*)[48])"fromJson for: isElementDurabilityMutable fails!");
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2720));
                            v6 = 0;
                          }
                          else
                          {
                            *(_DWORD *)(((v2 + 2784) >> 3) + 0x7FFF8000) = 0;
                            *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
                            std::allocator<char>::allocator(v2 + 256);
                            std::string::basic_string<std::allocator<char>>(
                              (std::string *const)(v2 + 2784),
                              "forceTriggerBurning",
                              (const std::allocator<char> *)(v2 + 256));
                            force_trigger_burning_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2784));
                            std::string::~string((void *)(v2 + 2784));
                            *(_DWORD *)(((v2 + 2784) >> 3) + 0x7FFF8000) = -117901064;
                            std::allocator<char>::~allocator(v2 + 256);
                            *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                            if ( force_trigger_burning_ptr
                              && !fromJson<bool>(force_trigger_burning_ptr, &this->force_trigger_burning) )
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
                                3u,
                                "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp",
                                "fromJson",
                                589);
                              common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                                (common::milog::MiLogStream *const)(v2 + 2848),
                                (const char (*)[41])"fromJson for: forceTriggerBurning fails!");
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2848));
                              v6 = 0;
                            }
                            else
                            {
                              *(_DWORD *)(((v2 + 2912) >> 3) + 0x7FFF8000) = 0;
                              *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
                              std::allocator<char>::allocator(v2 + 272);
                              std::string::basic_string<std::allocator<char>>(
                                (std::string *const)(v2 + 2912),
                                "overrideWeaponElement",
                                (const std::allocator<char> *)(v2 + 272));
                              override_weapon_element_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2912));
                              std::string::~string((void *)(v2 + 2912));
                              *(_DWORD *)(((v2 + 2912) >> 3) + 0x7FFF8000) = -117901064;
                              std::allocator<char>::~allocator(v2 + 272);
                              *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                              if ( override_weapon_element_ptr
                                && !fromJson<bool>(override_weapon_element_ptr, &this->override_weapon_element) )
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
                                  3u,
                                  "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp",
                                  "fromJson",
                                  601);
                                common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                                  (common::milog::MiLogStream *const)(v2 + 2976),
                                  (const char (*)[43])"fromJson for: overrideWeaponElement fails!");
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2976));
                                v6 = 0;
                              }
                              else
                              {
                                *(_DWORD *)(((v2 + 3040) >> 3) + 0x7FFF8000) = 0;
                                *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 1;
                                std::allocator<char>::allocator(v2 + 288);
                                std::string::basic_string<std::allocator<char>>(
                                  (std::string *const)(v2 + 3040),
                                  "thinkInterval",
                                  (const std::allocator<char> *)(v2 + 288));
                                think_interval_ptr = jsonValueFind(jval, (const std::string *)(v2 + 3040));
                                std::string::~string((void *)(v2 + 3040));
                                *(_DWORD *)(((v2 + 3040) >> 3) + 0x7FFF8000) = -117901064;
                                std::allocator<char>::~allocator(v2 + 288);
                                *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
                                if ( think_interval_ptr
                                  && !data::DynamicFloat::fromJson(&this->think_interval, think_interval_ptr) )
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
                                    3u,
                                    "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp",
                                    "fromJson",
                                    613);
                                  common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                                    (common::milog::MiLogStream *const)(v2 + 3104),
                                    (const char (*)[35])"fromJson for: thinkInterval fails!");
                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3104));
                                  v6 = 0;
                                }
                                else
                                {
                                  *(_DWORD *)(((v2 + 3168) >> 3) + 0x7FFF8000) = 0;
                                  *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 1;
                                  std::allocator<char>::allocator(v2 + 304);
                                  std::string::basic_string<std::allocator<char>>(
                                    (std::string *const)(v2 + 3168),
                                    "modifierMixins",
                                    (const std::allocator<char> *)(v2 + 304));
                                  modifier_mixins_ptr = jsonValueFind(jval, (const std::string *)(v2 + 3168));
                                  std::string::~string((void *)(v2 + 3168));
                                  *(_DWORD *)(((v2 + 3168) >> 3) + 0x7FFF8000) = -117901064;
                                  std::allocator<char>::~allocator(v2 + 304);
                                  *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
                                  if ( modifier_mixins_ptr
                                    && !data::arrFromJson(modifier_mixins_ptr, &this->modifier_mixins) )
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
                                      3u,
                                      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp",
                                      "fromJson",
                                      625);
                                    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                                      (common::milog::MiLogStream *const)(v2 + 3232),
                                      (const char (*)[36])"fromJson for: modifierMixins fails!");
                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3232));
                                    v6 = 0;
                                  }
                                  else
                                  {
                                    *(_DWORD *)(((v2 + 3296) >> 3) + 0x7FFF8000) = 0;
                                    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 1;
                                    std::allocator<char>::allocator(v2 + 320);
                                    std::string::basic_string<std::allocator<char>>(
                                      (std::string *const)(v2 + 3296),
                                      "trimThinkInterval",
                                      (const std::allocator<char> *)(v2 + 320));
                                    trim_think_interval_ptr = jsonValueFind(jval, (const std::string *)(v2 + 3296));
                                    std::string::~string((void *)(v2 + 3296));
                                    *(_DWORD *)(((v2 + 3296) >> 3) + 0x7FFF8000) = -117901064;
                                    std::allocator<char>::~allocator(v2 + 320);
                                    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
                                    if ( trim_think_interval_ptr
                                      && !fromJson<bool>(trim_think_interval_ptr, &this->trim_think_interval) )
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
                                        3u,
                                        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp",
                                        "fromJson",
                                        637);
                                      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                        (common::milog::MiLogStream *const)(v2 + 3360),
                                        (const char (*)[39])"fromJson for: trimThinkInterval fails!");
                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3360));
                                      v6 = 0;
                                    }
                                    else
                                    {
                                      *(_DWORD *)(((v2 + 3424) >> 3) + 0x7FFF8000) = 0;
                                      *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 1;
                                      std::allocator<char>::allocator(v2 + 336);
                                      std::string::basic_string<std::allocator<char>>(
                                        (std::string *const)(v2 + 3424),
                                        "properties",
                                        (const std::allocator<char> *)(v2 + 336));
                                      properties_ptr = jsonValueFind(jval, (const std::string *)(v2 + 3424));
                                      std::string::~string((void *)(v2 + 3424));
                                      *(_DWORD *)(((v2 + 3424) >> 3) + 0x7FFF8000) = -117901064;
                                      std::allocator<char>::~allocator(v2 + 336);
                                      *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
                                      if ( properties_ptr && !data::mapFromJson(properties_ptr, &this->properties) )
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
                                          3u,
                                          "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp",
                                          "fromJson",
                                          649);
                                        common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                                          (common::milog::MiLogStream *const)(v2 + 3488),
                                          (const char (*)[32])"fromJson for: properties fails!");
                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3488));
                                        v6 = 0;
                                      }
                                      else
                                      {
                                        *(_DWORD *)(((v2 + 3552) >> 3) + 0x7FFF8000) = 0;
                                        *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 1;
                                        std::allocator<char>::allocator(v2 + 352);
                                        std::string::basic_string<std::allocator<char>>(
                                          (std::string *const)(v2 + 3552),
                                          "state",
                                          (const std::allocator<char> *)(v2 + 352));
                                        state_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 3552));
                                        std::string::~string((void *)(v2 + 3552));
                                        *(_DWORD *)(((v2 + 3552) >> 3) + 0x7FFF8000) = -117901064;
                                        std::allocator<char>::~allocator(v2 + 352);
                                        *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
                                        if ( !state_ptr )
                                          goto LABEL_112;
                                        *(_DWORD *)(((v2 + 3616) >> 3) + 0x7FFF8000) = 0;
                                        if ( *(char *)(((v2 + 3616) >> 3) + 0x7FFF8000) < 0
                                          || *(_BYTE *)(((v2 + 3647) >> 3) + 0x7FFF8000) != 0
                                          && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 3647) >> 3) + 0x7FFF8000) )
                                        {
                                          __asan_report_store_n(v2 + 3616, 32LL);
                                        }
                                        Json::Value::asString[abi:cxx11](
                                          (Json::String *)(v2 + 3616),
                                          (Json::Value_0 *)state_ptr);
                                        v9 = !data::enumStrToVal((const std::string *)(v2 + 3616), &this->state);
                                        std::string::~string((void *)(v2 + 3616));
                                        *(_DWORD *)(((v2 + 3616) >> 3) + 0x7FFF8000) = -117901064;
                                        if ( v9 )
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
                                            3u,
                                            "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp",
                                            "fromJson",
                                            661);
                                          common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                                            (common::milog::MiLogStream *const)(v2 + 3680),
                                            (const char (*)[27])"fromJson for: state fails!");
                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3680));
                                          v6 = 0;
                                        }
                                        else
                                        {
LABEL_112:
                                          *(_DWORD *)(((v2 + 3744) >> 3) + 0x7FFF8000) = 0;
                                          *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = 1;
                                          std::allocator<char>::allocator(v2 + 368);
                                          std::string::basic_string<std::allocator<char>>(
                                            (std::string *const)(v2 + 3744),
                                            "stateOption",
                                            (const std::allocator<char> *)(v2 + 368));
                                          state_option_ptr = jsonValueFind(jval, (const std::string *)(v2 + 3744));
                                          std::string::~string((void *)(v2 + 3744));
                                          *(_DWORD *)(((v2 + 3744) >> 3) + 0x7FFF8000) = -117901064;
                                          std::allocator<char>::~allocator(v2 + 368);
                                          *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
                                          if ( state_option_ptr
                                            && !data::ConfigAbilityStateOption::fromJson(
                                                  &this->state_option,
                                                  state_option_ptr) )
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
                                              3u,
                                              "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp",
                                              "fromJson",
                                              673);
                                            common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                              (common::milog::MiLogStream *const)(v2 + 3808),
                                              (const char (*)[33])"fromJson for: stateOption fails!");
                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3808));
                                            v6 = 0;
                                          }
                                          else
                                          {
                                            *(_DWORD *)(((v2 + 3872) >> 3) + 0x7FFF8000) = 0;
                                            *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 1;
                                            std::allocator<char>::allocator(v2 + 384);
                                            std::string::basic_string<std::allocator<char>>(
                                              (std::string *const)(v2 + 3872),
                                              "muteStateDisplayEffect",
                                              (const std::allocator<char> *)(v2 + 384));
                                            mute_state_display_effect_ptr = jsonValueFind(
                                                                              jval,
                                                                              (const std::string *)(v2 + 3872));
                                            std::string::~string((void *)(v2 + 3872));
                                            *(_DWORD *)(((v2 + 3872) >> 3) + 0x7FFF8000) = -117901064;
                                            std::allocator<char>::~allocator(v2 + 384);
                                            *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
                                            if ( mute_state_display_effect_ptr
                                              && !fromJson<bool>(
                                                    mute_state_display_effect_ptr,
                                                    &this->mute_state_display_effect) )
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
                                                3u,
                                                "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp",
                                                "fromJson",
                                                685);
                                              common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                                                (common::milog::MiLogStream *const)(v2 + 3936),
                                                (const char (*)[44])"fromJson for: muteStateDisplayEffect fails!");
                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3936));
                                              v6 = 0;
                                            }
                                            else
                                            {
                                              *(_DWORD *)(((v2 + 4000) >> 3) + 0x7FFF8000) = 0;
                                              *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = 1;
                                              std::allocator<char>::allocator(v2 + 400);
                                              std::string::basic_string<std::allocator<char>>(
                                                (std::string *const)(v2 + 4000),
                                                "applyAttackerWitchTimeRatio",
                                                (const std::allocator<char> *)(v2 + 400));
                                              apply_attacker_witch_time_ratio_ptr = jsonValueFind(
                                                                                      jval,
                                                                                      (const std::string *)(v2 + 4000));
                                              std::string::~string((void *)(v2 + 4000));
                                              *(_DWORD *)(((v2 + 4000) >> 3) + 0x7FFF8000) = -117901064;
                                              std::allocator<char>::~allocator(v2 + 400);
                                              *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
                                              if ( apply_attacker_witch_time_ratio_ptr
                                                && !fromJson<bool>(
                                                      apply_attacker_witch_time_ratio_ptr,
                                                      &this->apply_attacker_witch_time_ratio) )
                                              {
                                                *(_DWORD *)(((v2 + 4064) >> 3) + 0x7FFF8000) = 0;
                                                if ( *(char *)(((v2 + 4064) >> 3) + 0x7FFF8000) < 0
                                                  || *(_BYTE *)(((v2 + 4095) >> 3) + 0x7FFF8000) != 0
                                                  && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 4095) >> 3)
                                                                                            + 0x7FFF8000) )
                                                {
                                                  __asan_report_store_n(v2 + 4064, 32LL);
                                                }
                                                common::milog::MiLogStream::create(
                                                  (common::milog::MiLogStream *)(v2 + 4064),
                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                  3u,
                                                  "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp",
                                                  "fromJson",
                                                  697);
                                                common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                                                  (common::milog::MiLogStream *const)(v2 + 4064),
                                                  (const char (*)[49])"fromJson for: applyAttackerWitchTimeRatio fails!");
                                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4064));
                                                v6 = 0;
                                              }
                                              else
                                              {
                                                *(_DWORD *)(((v2 + 4128) >> 3) + 0x7FFF8000) = 0;
                                                *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = 1;
                                                std::allocator<char>::allocator(v2 + 416);
                                                std::string::basic_string<std::allocator<char>>(
                                                  (std::string *const)(v2 + 4128),
                                                  "onAdded",
                                                  (const std::allocator<char> *)(v2 + 416));
                                                on_added_ptr = jsonValueFind(jval, (const std::string *)(v2 + 4128));
                                                std::string::~string((void *)(v2 + 4128));
                                                *(_DWORD *)(((v2 + 4128) >> 3) + 0x7FFF8000) = -117901064;
                                                std::allocator<char>::~allocator(v2 + 416);
                                                *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
                                                if ( on_added_ptr && !data::arrFromJson(on_added_ptr, &this->on_added) )
                                                {
                                                  *(_DWORD *)(((v2 + 4192) >> 3) + 0x7FFF8000) = 0;
                                                  if ( *(char *)(((v2 + 4192) >> 3) + 0x7FFF8000) < 0
                                                    || *(_BYTE *)(((v2 + 4223) >> 3) + 0x7FFF8000) != 0
                                                    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 4223) >> 3)
                                                                                          + 0x7FFF8000) )
                                                  {
                                                    __asan_report_store_n(v2 + 4192, 32LL);
                                                  }
                                                  common::milog::MiLogStream::create(
                                                    (common::milog::MiLogStream *)(v2 + 4192),
                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                    3u,
                                                    "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp",
                                                    "fromJson",
                                                    709);
                                                  common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                                                    (common::milog::MiLogStream *const)(v2 + 4192),
                                                    (const char (*)[29])"fromJson for: onAdded fails!");
                                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4192));
                                                  v6 = 0;
                                                }
                                                else
                                                {
                                                  *(_DWORD *)(((v2 + 4256) >> 3) + 0x7FFF8000) = 0;
                                                  *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = 1;
                                                  std::allocator<char>::allocator(v2 + 432);
                                                  std::string::basic_string<std::allocator<char>>(
                                                    (std::string *const)(v2 + 4256),
                                                    "onRemoved",
                                                    (const std::allocator<char> *)(v2 + 432));
                                                  on_removed_ptr = jsonValueFind(jval, (const std::string *)(v2 + 4256));
                                                  std::string::~string((void *)(v2 + 4256));
                                                  *(_DWORD *)(((v2 + 4256) >> 3) + 0x7FFF8000) = -117901064;
                                                  std::allocator<char>::~allocator(v2 + 432);
                                                  *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = -8;
                                                  if ( on_removed_ptr
                                                    && !data::arrFromJson(on_removed_ptr, &this->on_removed) )
                                                  {
                                                    *(_DWORD *)(((v2 + 4320) >> 3) + 0x7FFF8000) = 0;
                                                    if ( *(char *)(((v2 + 4320) >> 3) + 0x7FFF8000) < 0
                                                      || *(_BYTE *)(((v2 + 4351) >> 3) + 0x7FFF8000) != 0
                                                      && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 4351) >> 3)
                                                                                                + 0x7FFF8000) )
                                                    {
                                                      __asan_report_store_n(v2 + 4320, 32LL);
                                                    }
                                                    common::milog::MiLogStream::create(
                                                      (common::milog::MiLogStream *)(v2 + 4320),
                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                      3u,
                                                      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp",
                                                      "fromJson",
                                                      721);
                                                    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                                                      (common::milog::MiLogStream *const)(v2 + 4320),
                                                      (const char (*)[31])"fromJson for: onRemoved fails!");
                                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4320));
                                                    v6 = 0;
                                                  }
                                                  else
                                                  {
                                                    *(_DWORD *)(((v2 + 4384) >> 3) + 0x7FFF8000) = 0;
                                                    *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = 1;
                                                    std::allocator<char>::allocator(v2 + 448);
                                                    std::string::basic_string<std::allocator<char>>(
                                                      (std::string *const)(v2 + 4384),
                                                      "onBeingHit",
                                                      (const std::allocator<char> *)(v2 + 448));
                                                    on_being_hit_ptr = jsonValueFind(
                                                                         jval,
                                                                         (const std::string *)(v2 + 4384));
                                                    std::string::~string((void *)(v2 + 4384));
                                                    *(_DWORD *)(((v2 + 4384) >> 3) + 0x7FFF8000) = -117901064;
                                                    std::allocator<char>::~allocator(v2 + 448);
                                                    *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = -8;
                                                    if ( on_being_hit_ptr
                                                      && !data::arrFromJson(on_being_hit_ptr, &this->on_being_hit) )
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
                                                        3u,
                                                        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp",
                                                        "fromJson",
                                                        733);
                                                      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                                                        (common::milog::MiLogStream *const)(v2 + 4448),
                                                        (const char (*)[32])"fromJson for: onBeingHit fails!");
                                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4448));
                                                      v6 = 0;
                                                    }
                                                    else
                                                    {
                                                      *(_DWORD *)(((v2 + 4512) >> 3) + 0x7FFF8000) = 0;
                                                      *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = 1;
                                                      std::allocator<char>::allocator(v2 + 464);
                                                      std::string::basic_string<std::allocator<char>>(
                                                        (std::string *const)(v2 + 4512),
                                                        "onAttackLanded",
                                                        (const std::allocator<char> *)(v2 + 464));
                                                      on_attack_landed_ptr = jsonValueFind(
                                                                               jval,
                                                                               (const std::string *)(v2 + 4512));
                                                      std::string::~string((void *)(v2 + 4512));
                                                      *(_DWORD *)(((v2 + 4512) >> 3) + 0x7FFF8000) = -117901064;
                                                      std::allocator<char>::~allocator(v2 + 464);
                                                      *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = -8;
                                                      if ( on_attack_landed_ptr
                                                        && !data::arrFromJson(
                                                              on_attack_landed_ptr,
                                                              &this->on_attack_landed) )
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
                                                          3u,
                                                          "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp",
                                                          "fromJson",
                                                          745);
                                                        common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                                                          (common::milog::MiLogStream *const)(v2 + 4576),
                                                          (const char (*)[36])"fromJson for: onAttackLanded fails!");
                                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4576));
                                                        v6 = 0;
                                                      }
                                                      else
                                                      {
                                                        *(_DWORD *)(((v2 + 4640) >> 3) + 0x7FFF8000) = 0;
                                                        *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = 1;
                                                        std::allocator<char>::allocator(v2 + 480);
                                                        std::string::basic_string<std::allocator<char>>(
                                                          (std::string *const)(v2 + 4640),
                                                          "onHittingOther",
                                                          (const std::allocator<char> *)(v2 + 480));
                                                        on_hitting_other_ptr = jsonValueFind(
                                                                                 jval,
                                                                                 (const std::string *)(v2 + 4640));
                                                        std::string::~string((void *)(v2 + 4640));
                                                        *(_DWORD *)(((v2 + 4640) >> 3) + 0x7FFF8000) = -117901064;
                                                        std::allocator<char>::~allocator(v2 + 480);
                                                        *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = -8;
                                                        if ( on_hitting_other_ptr
                                                          && !data::arrFromJson(
                                                                on_hitting_other_ptr,
                                                                &this->on_hitting_other) )
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
                                                            3u,
                                                            "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp",
                                                            "fromJson",
                                                            757);
                                                          common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                                                            (common::milog::MiLogStream *const)(v2 + 4704),
                                                            (const char (*)[36])"fromJson for: onHittingOther fails!");
                                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4704));
                                                          v6 = 0;
                                                        }
                                                        else
                                                        {
                                                          *(_DWORD *)(((v2 + 4768) >> 3) + 0x7FFF8000) = 0;
                                                          *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = 1;
                                                          std::allocator<char>::allocator(v2 + 496);
                                                          std::string::basic_string<std::allocator<char>>(
                                                            (std::string *const)(v2 + 4768),
                                                            "onHeal",
                                                            (const std::allocator<char> *)(v2 + 496));
                                                          on_heal_ptr = jsonValueFind(
                                                                          jval,
                                                                          (const std::string *)(v2 + 4768));
                                                          std::string::~string((void *)(v2 + 4768));
                                                          *(_DWORD *)(((v2 + 4768) >> 3) + 0x7FFF8000) = -117901064;
                                                          std::allocator<char>::~allocator(v2 + 496);
                                                          *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = -8;
                                                          if ( on_heal_ptr
                                                            && !data::arrFromJson(on_heal_ptr, &this->on_heal) )
                                                          {
                                                            *(_DWORD *)(((v2 + 4832) >> 3) + 0x7FFF8000) = 0;
                                                            if ( *(char *)(((v2 + 4832) >> 3) + 0x7FFF8000) < 0
                                                              || *(_BYTE *)(((v2 + 4863) >> 3) + 0x7FFF8000) != 0
                                                              && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 4863) >> 3) + 0x7FFF8000) )
                                                            {
                                                              __asan_report_store_n(v2 + 4832, 32LL);
                                                            }
                                                            common::milog::MiLogStream::create(
                                                              (common::milog::MiLogStream *)(v2 + 4832),
                                                              &common::milog::MiLogDefault::default_log_obj_,
                                                              3u,
                                                              "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp",
                                                              "fromJson",
                                                              769);
                                                            common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                                                              (common::milog::MiLogStream *const)(v2 + 4832),
                                                              (const char (*)[28])"fromJson for: onHeal fails!");
                                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4832));
                                                            v6 = 0;
                                                          }
                                                          else
                                                          {
                                                            *(_DWORD *)(((v2 + 4896) >> 3) + 0x7FFF8000) = 0;
                                                            *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = 1;
                                                            std::allocator<char>::allocator(v2 + 512);
                                                            std::string::basic_string<std::allocator<char>>(
                                                              (std::string *const)(v2 + 4896),
                                                              "onBeingHealed",
                                                              (const std::allocator<char> *)(v2 + 512));
                                                            on_being_healed_ptr = jsonValueFind(
                                                                                    jval,
                                                                                    (const std::string *)(v2 + 4896));
                                                            std::string::~string((void *)(v2 + 4896));
                                                            *(_DWORD *)(((v2 + 4896) >> 3) + 0x7FFF8000) = -117901064;
                                                            std::allocator<char>::~allocator(v2 + 512);
                                                            *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = -8;
                                                            if ( on_being_healed_ptr
                                                              && !data::arrFromJson(
                                                                    on_being_healed_ptr,
                                                                    &this->on_being_healed) )
                                                            {
                                                              *(_DWORD *)(((v2 + 4960) >> 3) + 0x7FFF8000) = 0;
                                                              if ( *(char *)(((v2 + 4960) >> 3) + 0x7FFF8000) < 0
                                                                || *(_BYTE *)(((v2 + 4991) >> 3) + 0x7FFF8000) != 0
                                                                && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 4991) >> 3) + 0x7FFF8000) )
                                                              {
                                                                __asan_report_store_n(v2 + 4960, 32LL);
                                                              }
                                                              common::milog::MiLogStream::create(
                                                                (common::milog::MiLogStream *)(v2 + 4960),
                                                                &common::milog::MiLogDefault::default_log_obj_,
                                                                3u,
                                                                "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp",
                                                                "fromJson",
                                                                781);
                                                              common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                                                                (common::milog::MiLogStream *const)(v2 + 4960),
                                                                (const char (*)[35])"fromJson for: onBeingHealed fails!");
                                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4960));
                                                              v6 = 0;
                                                            }
                                                            else
                                                            {
                                                              *(_DWORD *)(((v2 + 5024) >> 3) + 0x7FFF8000) = 0;
                                                              *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = 1;
                                                              std::allocator<char>::allocator(v2 + 528);
                                                              std::string::basic_string<std::allocator<char>>(
                                                                (std::string *const)(v2 + 5024),
                                                                "onThinkInterval",
                                                                (const std::allocator<char> *)(v2 + 528));
                                                              on_think_interval_ptr = jsonValueFind(
                                                                                        jval,
                                                                                        (const std::string *)(v2 + 5024));
                                                              std::string::~string((void *)(v2 + 5024));
                                                              *(_DWORD *)(((v2 + 5024) >> 3) + 0x7FFF8000) = -117901064;
                                                              std::allocator<char>::~allocator(v2 + 528);
                                                              *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = -8;
                                                              if ( on_think_interval_ptr
                                                                && !data::arrFromJson(
                                                                      on_think_interval_ptr,
                                                                      &this->on_think_interval) )
                                                              {
                                                                *(_DWORD *)(((v2 + 5088) >> 3) + 0x7FFF8000) = 0;
                                                                if ( *(char *)(((v2 + 5088) >> 3) + 0x7FFF8000) < 0
                                                                  || *(_BYTE *)(((v2 + 5119) >> 3) + 0x7FFF8000) != 0
                                                                  && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 5119) >> 3) + 0x7FFF8000) )
                                                                {
                                                                  __asan_report_store_n(v2 + 5088, 32LL);
                                                                }
                                                                common::milog::MiLogStream::create(
                                                                  (common::milog::MiLogStream *)(v2 + 5088),
                                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                                  3u,
                                                                  "./src/json_data_auto/ComponentDefines/Ability/ConfigAb"
                                                                  "ilityModifier.cpp",
                                                                  "fromJson",
                                                                  793);
                                                                common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                                                                  (common::milog::MiLogStream *const)(v2 + 5088),
                                                                  (const char (*)[37])"fromJson for: onThinkInterval fails!");
                                                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5088));
                                                                v6 = 0;
                                                              }
                                                              else
                                                              {
                                                                *(_DWORD *)(((v2 + 5152) >> 3) + 0x7FFF8000) = 0;
                                                                *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = 1;
                                                                std::allocator<char>::allocator(v2 + 544);
                                                                std::string::basic_string<std::allocator<char>>(
                                                                  (std::string *const)(v2 + 5152),
                                                                  "onThinkIntervalIsFixedUpdate",
                                                                  (const std::allocator<char> *)(v2 + 544));
                                                                on_think_interval_is_fixed_update_ptr = jsonValueFind(jval, (const std::string *)(v2 + 5152));
                                                                std::string::~string((void *)(v2 + 5152));
                                                                *(_DWORD *)(((v2 + 5152) >> 3) + 0x7FFF8000) = -117901064;
                                                                std::allocator<char>::~allocator(v2 + 544);
                                                                *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = -8;
                                                                if ( on_think_interval_is_fixed_update_ptr
                                                                  && !fromJson<bool>(
                                                                        on_think_interval_is_fixed_update_ptr,
                                                                        &this->on_think_interval_is_fixed_update) )
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
                                                                    3u,
                                                                    "./src/json_data_auto/ComponentDefines/Ability/Config"
                                                                    "AbilityModifier.cpp",
                                                                    "fromJson",
                                                                    805);
                                                                  common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                                                                    (common::milog::MiLogStream *const)(v2 + 5216),
                                                                    (const char (*)[50])"fromJson for: onThinkIntervalIsF"
                                                                                        "ixedUpdate fails!");
                                                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5216));
                                                                  v6 = 0;
                                                                }
                                                                else
                                                                {
                                                                  *(_DWORD *)(((v2 + 5280) >> 3) + 0x7FFF8000) = 0;
                                                                  *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = 1;
                                                                  std::allocator<char>::allocator(v2 + 560);
                                                                  std::string::basic_string<std::allocator<char>>(
                                                                    (std::string *const)(v2 + 5280),
                                                                    "onKill",
                                                                    (const std::allocator<char> *)(v2 + 560));
                                                                  on_kill_ptr = jsonValueFind(
                                                                                  jval,
                                                                                  (const std::string *)(v2 + 5280));
                                                                  std::string::~string((void *)(v2 + 5280));
                                                                  *(_DWORD *)(((v2 + 5280) >> 3) + 0x7FFF8000) = -117901064;
                                                                  std::allocator<char>::~allocator(v2 + 560);
                                                                  *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = -8;
                                                                  if ( on_kill_ptr
                                                                    && !data::arrFromJson(on_kill_ptr, &this->on_kill) )
                                                                  {
                                                                    *(_DWORD *)(((v2 + 5344) >> 3) + 0x7FFF8000) = 0;
                                                                    if ( *(char *)(((v2 + 5344) >> 3) + 0x7FFF8000) < 0
                                                                      || *(_BYTE *)(((v2 + 5375) >> 3) + 0x7FFF8000) != 0
                                                                      && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 5375) >> 3) + 0x7FFF8000) )
                                                                    {
                                                                      __asan_report_store_n(v2 + 5344, 32LL);
                                                                    }
                                                                    common::milog::MiLogStream::create(
                                                                      (common::milog::MiLogStream *)(v2 + 5344),
                                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                                      3u,
                                                                      "./src/json_data_auto/ComponentDefines/Ability/Conf"
                                                                      "igAbilityModifier.cpp",
                                                                      "fromJson",
                                                                      817);
                                                                    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                                                                      (common::milog::MiLogStream *const)(v2 + 5344),
                                                                      (const char (*)[28])"fromJson for: onKill fails!");
                                                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5344));
                                                                    v6 = 0;
                                                                  }
                                                                  else
                                                                  {
                                                                    *(_DWORD *)(((v2 + 5408) >> 3) + 0x7FFF8000) = 0;
                                                                    *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) = 1;
                                                                    std::allocator<char>::allocator(v2 + 576);
                                                                    std::string::basic_string<std::allocator<char>>(
                                                                      (std::string *const)(v2 + 5408),
                                                                      "onCrash",
                                                                      (const std::allocator<char> *)(v2 + 576));
                                                                    on_crash_ptr = jsonValueFind(
                                                                                     jval,
                                                                                     (const std::string *)(v2 + 5408));
                                                                    std::string::~string((void *)(v2 + 5408));
                                                                    *(_DWORD *)(((v2 + 5408) >> 3) + 0x7FFF8000) = -117901064;
                                                                    std::allocator<char>::~allocator(v2 + 576);
                                                                    *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) = -8;
                                                                    if ( on_crash_ptr
                                                                      && !data::arrFromJson(
                                                                            on_crash_ptr,
                                                                            &this->on_crash) )
                                                                    {
                                                                      *(_DWORD *)(((v2 + 5472) >> 3) + 0x7FFF8000) = 0;
                                                                      if ( *(char *)(((v2 + 5472) >> 3) + 0x7FFF8000) < 0
                                                                        || *(_BYTE *)(((v2 + 5503) >> 3) + 0x7FFF8000) != 0
                                                                        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 5503) >> 3) + 0x7FFF8000) )
                                                                      {
                                                                        __asan_report_store_n(v2 + 5472, 32LL);
                                                                      }
                                                                      common::milog::MiLogStream::create(
                                                                        (common::milog::MiLogStream *)(v2 + 5472),
                                                                        &common::milog::MiLogDefault::default_log_obj_,
                                                                        3u,
                                                                        "./src/json_data_auto/ComponentDefines/Ability/Co"
                                                                        "nfigAbilityModifier.cpp",
                                                                        "fromJson",
                                                                        829);
                                                                      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                                                                        (common::milog::MiLogStream *const)(v2 + 5472),
                                                                        (const char (*)[29])"fromJson for: onCrash fails!");
                                                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5472));
                                                                      v6 = 0;
                                                                    }
                                                                    else
                                                                    {
                                                                      *(_DWORD *)(((v2 + 5536) >> 3) + 0x7FFF8000) = 0;
                                                                      *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) = 1;
                                                                      std::allocator<char>::allocator(v2 + 592);
                                                                      std::string::basic_string<std::allocator<char>>(
                                                                        (std::string *const)(v2 + 5536),
                                                                        "onAvatarIn",
                                                                        (const std::allocator<char> *)(v2 + 592));
                                                                      on_avatar_in_ptr = jsonValueFind(
                                                                                           jval,
                                                                                           (const std::string *)(v2 + 5536));
                                                                      std::string::~string((void *)(v2 + 5536));
                                                                      *(_DWORD *)(((v2 + 5536) >> 3) + 0x7FFF8000) = -117901064;
                                                                      std::allocator<char>::~allocator(v2 + 592);
                                                                      *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) = -8;
                                                                      if ( on_avatar_in_ptr
                                                                        && !data::arrFromJson(
                                                                              on_avatar_in_ptr,
                                                                              &this->on_avatar_in) )
                                                                      {
                                                                        *(_DWORD *)(((v2 + 5600) >> 3) + 0x7FFF8000) = 0;
                                                                        if ( *(char *)(((v2 + 5600) >> 3) + 0x7FFF8000) < 0
                                                                          || *(_BYTE *)(((v2 + 5631) >> 3) + 0x7FFF8000) != 0
                                                                          && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 5631) >> 3) + 0x7FFF8000) )
                                                                        {
                                                                          __asan_report_store_n(v2 + 5600, 32LL);
                                                                        }
                                                                        common::milog::MiLogStream::create(
                                                                          (common::milog::MiLogStream *)(v2 + 5600),
                                                                          &common::milog::MiLogDefault::default_log_obj_,
                                                                          3u,
                                                                          "./src/json_data_auto/ComponentDefines/Ability/"
                                                                          "ConfigAbilityModifier.cpp",
                                                                          "fromJson",
                                                                          841);
                                                                        common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                                                                          (common::milog::MiLogStream *const)(v2 + 5600),
                                                                          (const char (*)[32])"fromJson for: onAvatarIn fails!");
                                                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5600));
                                                                        v6 = 0;
                                                                      }
                                                                      else
                                                                      {
                                                                        *(_DWORD *)(((v2 + 5664) >> 3) + 0x7FFF8000) = 0;
                                                                        *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) = 1;
                                                                        std::allocator<char>::allocator(v2 + 608);
                                                                        std::string::basic_string<std::allocator<char>>(
                                                                          (std::string *const)(v2 + 5664),
                                                                          "onAvatarOut",
                                                                          (const std::allocator<char> *)(v2 + 608));
                                                                        on_avatar_out_ptr = jsonValueFind(
                                                                                              jval,
                                                                                              (const std::string *)(v2 + 5664));
                                                                        std::string::~string((void *)(v2 + 5664));
                                                                        *(_DWORD *)(((v2 + 5664) >> 3) + 0x7FFF8000) = -117901064;
                                                                        std::allocator<char>::~allocator(v2 + 608);
                                                                        *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) = -8;
                                                                        if ( on_avatar_out_ptr
                                                                          && !data::arrFromJson(
                                                                                on_avatar_out_ptr,
                                                                                &this->on_avatar_out) )
                                                                        {
                                                                          *(_DWORD *)(((v2 + 5728) >> 3) + 0x7FFF8000) = 0;
                                                                          if ( *(char *)(((v2 + 5728) >> 3) + 0x7FFF8000) < 0
                                                                            || *(_BYTE *)(((v2 + 5759) >> 3) + 0x7FFF8000) != 0
                                                                            && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 5759) >> 3) + 0x7FFF8000) )
                                                                          {
                                                                            __asan_report_store_n(v2 + 5728, 32LL);
                                                                          }
                                                                          common::milog::MiLogStream::create(
                                                                            (common::milog::MiLogStream *)(v2 + 5728),
                                                                            &common::milog::MiLogDefault::default_log_obj_,
                                                                            3u,
                                                                            "./src/json_data_auto/ComponentDefines/Abilit"
                                                                            "y/ConfigAbilityModifier.cpp",
                                                                            "fromJson",
                                                                            853);
                                                                          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                                                            (common::milog::MiLogStream *const)(v2 + 5728),
                                                                            (const char (*)[33])"fromJson for: onAvatarOut fails!");
                                                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5728));
                                                                          v6 = 0;
                                                                        }
                                                                        else
                                                                        {
                                                                          *(_DWORD *)(((v2 + 5792) >> 3) + 0x7FFF8000) = 0;
                                                                          *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) = 1;
                                                                          std::allocator<char>::allocator(v2 + 624);
                                                                          std::string::basic_string<std::allocator<char>>(
                                                                            (std::string *const)(v2 + 5792),
                                                                            "onVehicleIn",
                                                                            (const std::allocator<char> *)(v2 + 624));
                                                                          on_vehicle_in_ptr = jsonValueFind(
                                                                                                jval,
                                                                                                (const std::string *)(v2 + 5792));
                                                                          std::string::~string((void *)(v2 + 5792));
                                                                          *(_DWORD *)(((v2 + 5792) >> 3) + 0x7FFF8000) = -117901064;
                                                                          std::allocator<char>::~allocator(v2 + 624);
                                                                          *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) = -8;
                                                                          if ( on_vehicle_in_ptr
                                                                            && !data::arrFromJson(
                                                                                  on_vehicle_in_ptr,
                                                                                  &this->on_vehicle_in) )
                                                                          {
                                                                            *(_DWORD *)(((v2 + 5856) >> 3) + 0x7FFF8000) = 0;
                                                                            if ( *(char *)(((v2 + 5856) >> 3)
                                                                                         + 0x7FFF8000) < 0
                                                                              || *(_BYTE *)(((v2 + 5887) >> 3)
                                                                                          + 0x7FFF8000) != 0
                                                                              && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 5887) >> 3) + 0x7FFF8000) )
                                                                            {
                                                                              __asan_report_store_n(v2 + 5856, 32LL);
                                                                            }
                                                                            common::milog::MiLogStream::create(
                                                                              (common::milog::MiLogStream *)(v2 + 5856),
                                                                              &common::milog::MiLogDefault::default_log_obj_,
                                                                              3u,
                                                                              "./src/json_data_auto/ComponentDefines/Abil"
                                                                              "ity/ConfigAbilityModifier.cpp",
                                                                              "fromJson",
                                                                              865);
                                                                            common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                                                              (common::milog::MiLogStream *const)(v2 + 5856),
                                                                              (const char (*)[33])"fromJson for: onVehicleIn fails!");
                                                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5856));
                                                                            v6 = 0;
                                                                          }
                                                                          else
                                                                          {
                                                                            *(_DWORD *)(((v2 + 5920) >> 3) + 0x7FFF8000) = 0;
                                                                            *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) = 1;
                                                                            std::allocator<char>::allocator(v2 + 640);
                                                                            std::string::basic_string<std::allocator<char>>(
                                                                              (std::string *const)(v2 + 5920),
                                                                              "onVehicleOut",
                                                                              (const std::allocator<char> *)(v2 + 640));
                                                                            on_vehicle_out_ptr = jsonValueFind(
                                                                                                   jval,
                                                                                                   (const std::string *)(v2 + 5920));
                                                                            std::string::~string((void *)(v2 + 5920));
                                                                            *(_DWORD *)(((v2 + 5920) >> 3) + 0x7FFF8000) = -117901064;
                                                                            std::allocator<char>::~allocator(v2 + 640);
                                                                            *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) = -8;
                                                                            if ( on_vehicle_out_ptr
                                                                              && !data::arrFromJson(
                                                                                    on_vehicle_out_ptr,
                                                                                    &this->on_vehicle_out) )
                                                                            {
                                                                              *(_DWORD *)(((v2 + 5984) >> 3) + 0x7FFF8000) = 0;
                                                                              if ( *(char *)(((v2 + 5984) >> 3)
                                                                                           + 0x7FFF8000) < 0
                                                                                || *(_BYTE *)(((v2 + 6015) >> 3)
                                                                                            + 0x7FFF8000) != 0
                                                                                && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 6015) >> 3) + 0x7FFF8000) )
                                                                              {
                                                                                __asan_report_store_n(v2 + 5984, 32LL);
                                                                              }
                                                                              common::milog::MiLogStream::create(
                                                                                (common::milog::MiLogStream *)(v2 + 5984),
                                                                                &common::milog::MiLogDefault::default_log_obj_,
                                                                                3u,
                                                                                "./src/json_data_auto/ComponentDefines/Ab"
                                                                                "ility/ConfigAbilityModifier.cpp",
                                                                                "fromJson",
                                                                                877);
                                                                              common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                                                                                (common::milog::MiLogStream *const)(v2 + 5984),
                                                                                (const char (*)[34])"fromJson for: onVehicleOut fails!");
                                                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5984));
                                                                              v6 = 0;
                                                                            }
                                                                            else
                                                                            {
                                                                              *(_DWORD *)(((v2 + 6048) >> 3) + 0x7FFF8000) = 0;
                                                                              *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) = 1;
                                                                              std::allocator<char>::allocator(v2 + 656);
                                                                              std::string::basic_string<std::allocator<char>>(
                                                                                (std::string *const)(v2 + 6048),
                                                                                "onZoneEnter",
                                                                                (const std::allocator<char> *)(v2 + 656));
                                                                              on_zone_enter_ptr = jsonValueFind(
                                                                                                    jval,
                                                                                                    (const std::string *)(v2 + 6048));
                                                                              std::string::~string((void *)(v2 + 6048));
                                                                              *(_DWORD *)(((v2 + 6048) >> 3) + 0x7FFF8000) = -117901064;
                                                                              std::allocator<char>::~allocator(v2 + 656);
                                                                              *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) = -8;
                                                                              if ( on_zone_enter_ptr
                                                                                && !data::arrFromJson(
                                                                                      on_zone_enter_ptr,
                                                                                      &this->on_zone_enter) )
                                                                              {
                                                                                *(_DWORD *)(((v2 + 6112) >> 3)
                                                                                          + 0x7FFF8000) = 0;
                                                                                if ( *(char *)(((v2 + 6112) >> 3)
                                                                                             + 0x7FFF8000) < 0
                                                                                  || *(_BYTE *)(((v2 + 6143) >> 3)
                                                                                              + 0x7FFF8000) != 0
                                                                                  && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 6143) >> 3) + 0x7FFF8000) )
                                                                                {
                                                                                  __asan_report_store_n(v2 + 6112, 32LL);
                                                                                }
                                                                                common::milog::MiLogStream::create(
                                                                                  (common::milog::MiLogStream *)(v2 + 6112),
                                                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                                                  3u,
                                                                                  "./src/json_data_auto/ComponentDefines/"
                                                                                  "Ability/ConfigAbilityModifier.cpp",
                                                                                  "fromJson",
                                                                                  889);
                                                                                common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                                                                  (common::milog::MiLogStream *const)(v2 + 6112),
                                                                                  (const char (*)[33])"fromJson for: onZoneEnter fails!");
                                                                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 6112));
                                                                                v6 = 0;
                                                                              }
                                                                              else
                                                                              {
                                                                                *(_DWORD *)(((v2 + 6176) >> 3)
                                                                                          + 0x7FFF8000) = 0;
                                                                                *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) = 1;
                                                                                std::allocator<char>::allocator(v2 + 672);
                                                                                std::string::basic_string<std::allocator<char>>(
                                                                                  (std::string *const)(v2 + 6176),
                                                                                  "onZoneExit",
                                                                                  (const std::allocator<char> *)(v2 + 672));
                                                                                on_zone_exit_ptr = jsonValueFind(
                                                                                                     jval,
                                                                                                     (const std::string *)(v2 + 6176));
                                                                                std::string::~string((void *)(v2 + 6176));
                                                                                *(_DWORD *)(((v2 + 6176) >> 3)
                                                                                          + 0x7FFF8000) = -117901064;
                                                                                std::allocator<char>::~allocator(v2 + 672);
                                                                                *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) = -8;
                                                                                if ( on_zone_exit_ptr
                                                                                  && !data::arrFromJson(
                                                                                        on_zone_exit_ptr,
                                                                                        &this->on_zone_exit) )
                                                                                {
                                                                                  *(_DWORD *)(((v2 + 6240) >> 3)
                                                                                            + 0x7FFF8000) = 0;
                                                                                  if ( *(char *)(((v2 + 6240) >> 3)
                                                                                               + 0x7FFF8000) < 0
                                                                                    || *(_BYTE *)(((v2 + 6271) >> 3)
                                                                                                + 0x7FFF8000) != 0
                                                                                    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 6271) >> 3) + 0x7FFF8000) )
                                                                                  {
                                                                                    __asan_report_store_n(
                                                                                      v2 + 6240,
                                                                                      32LL);
                                                                                  }
                                                                                  common::milog::MiLogStream::create(
                                                                                    (common::milog::MiLogStream *)(v2 + 6240),
                                                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                                                    3u,
                                                                                    "./src/json_data_auto/ComponentDefine"
                                                                                    "s/Ability/ConfigAbilityModifier.cpp",
                                                                                    "fromJson",
                                                                                    901);
                                                                                  common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                                                                                    (common::milog::MiLogStream *const)(v2 + 6240),
                                                                                    (const char (*)[32])"fromJson for: onZoneExit fails!");
                                                                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 6240));
                                                                                  v6 = 0;
                                                                                }
                                                                                else
                                                                                {
                                                                                  *(_DWORD *)(((v2 + 6304) >> 3)
                                                                                            + 0x7FFF8000) = 0;
                                                                                  *(_BYTE *)(((v2 + 688) >> 3)
                                                                                           + 0x7FFF8000) = 1;
                                                                                  std::allocator<char>::allocator(v2 + 688);
                                                                                  std::string::basic_string<std::allocator<char>>(
                                                                                    (std::string *const)(v2 + 6304),
                                                                                    "onReconnect",
                                                                                    (const std::allocator<char> *)(v2 + 688));
                                                                                  on_reconnect_ptr = jsonValueFind(jval, (const std::string *)(v2 + 6304));
                                                                                  std::string::~string((void *)(v2 + 6304));
                                                                                  *(_DWORD *)(((v2 + 6304) >> 3)
                                                                                            + 0x7FFF8000) = -117901064;
                                                                                  std::allocator<char>::~allocator(v2 + 688);
                                                                                  *(_BYTE *)(((v2 + 688) >> 3)
                                                                                           + 0x7FFF8000) = -8;
                                                                                  if ( on_reconnect_ptr
                                                                                    && !data::arrFromJson(
                                                                                          on_reconnect_ptr,
                                                                                          &this->on_reconnect) )
                                                                                  {
                                                                                    *(_DWORD *)(((v2 + 6368) >> 3)
                                                                                              + 0x7FFF8000) = 0;
                                                                                    if ( *(char *)(((v2 + 6368) >> 3)
                                                                                                 + 0x7FFF8000) < 0
                                                                                      || *(_BYTE *)(((v2 + 6399) >> 3)
                                                                                                  + 0x7FFF8000) != 0
                                                                                      && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 6399) >> 3) + 0x7FFF8000) )
                                                                                    {
                                                                                      __asan_report_store_n(
                                                                                        v2 + 6368,
                                                                                        32LL);
                                                                                    }
                                                                                    common::milog::MiLogStream::create(
                                                                                      (common::milog::MiLogStream *)(v2 + 6368),
                                                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                                                      3u,
                                                                                      "./src/json_data_auto/ComponentDefi"
                                                                                      "nes/Ability/ConfigAbilityModifier.cpp",
                                                                                      "fromJson",
                                                                                      913);
                                                                                    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                                                                      (common::milog::MiLogStream *const)(v2 + 6368),
                                                                                      (const char (*)[33])"fromJson for: onReconnect fails!");
                                                                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 6368));
                                                                                    v6 = 0;
                                                                                  }
                                                                                  else
                                                                                  {
                                                                                    *(_DWORD *)(((v2 + 6432) >> 3)
                                                                                              + 0x7FFF8000) = 0;
                                                                                    *(_BYTE *)(((v2 + 704) >> 3)
                                                                                             + 0x7FFF8000) = 1;
                                                                                    std::allocator<char>::allocator(v2 + 704);
                                                                                    std::string::basic_string<std::allocator<char>>(
                                                                                      (std::string *const)(v2 + 6432),
                                                                                      "onChangeAuthority",
                                                                                      (const std::allocator<char> *)(v2 + 704));
                                                                                    on_change_authority_ptr = jsonValueFind(jval, (const std::string *)(v2 + 6432));
                                                                                    std::string::~string((void *)(v2 + 6432));
                                                                                    *(_DWORD *)(((v2 + 6432) >> 3)
                                                                                              + 0x7FFF8000) = -117901064;
                                                                                    std::allocator<char>::~allocator(v2 + 704);
                                                                                    *(_BYTE *)(((v2 + 704) >> 3)
                                                                                             + 0x7FFF8000) = -8;
                                                                                    if ( on_change_authority_ptr
                                                                                      && !data::arrFromJson(
                                                                                            on_change_authority_ptr,
                                                                                            &this->on_change_authority) )
                                                                                    {
                                                                                      *(_DWORD *)(((v2 + 6496) >> 3)
                                                                                                + 0x7FFF8000) = 0;
                                                                                      if ( *(char *)(((v2 + 6496) >> 3) + 0x7FFF8000) < 0
                                                                                        || *(_BYTE *)(((v2 + 6527) >> 3) + 0x7FFF8000) != 0
                                                                                        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 6527) >> 3) + 0x7FFF8000) )
                                                                                      {
                                                                                        __asan_report_store_n(
                                                                                          v2 + 6496,
                                                                                          32LL);
                                                                                      }
                                                                                      common::milog::MiLogStream::create(
                                                                                        (common::milog::MiLogStream *)(v2 + 6496),
                                                                                        &common::milog::MiLogDefault::default_log_obj_,
                                                                                        3u,
                                                                                        "./src/json_data_auto/ComponentDe"
                                                                                        "fines/Ability/ConfigAbilityModifier.cpp",
                                                                                        "fromJson",
                                                                                        925);
                                                                                      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                                                                        (common::milog::MiLogStream *const)(v2 + 6496),
                                                                                        (const char (*)[39])"fromJson for: onChangeAuthority fails!");
                                                                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 6496));
                                                                                      v6 = 0;
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                      *(_DWORD *)(((v2 + 6560) >> 3)
                                                                                                + 0x7FFF8000) = 0;
                                                                                      *(_BYTE *)(((v2 + 720) >> 3)
                                                                                               + 0x7FFF8000) = 1;
                                                                                      std::allocator<char>::allocator(v2 + 720);
                                                                                      std::string::basic_string<std::allocator<char>>(
                                                                                        (std::string *const)(v2 + 6560),
                                                                                        "forbiddenEntities",
                                                                                        (const std::allocator<char> *)(v2 + 720));
                                                                                      forbidden_entities_ptr = jsonValueFind(jval, (const std::string *)(v2 + 6560));
                                                                                      std::string::~string((void *)(v2 + 6560));
                                                                                      *(_DWORD *)(((v2 + 6560) >> 3)
                                                                                                + 0x7FFF8000) = -117901064;
                                                                                      std::allocator<char>::~allocator(v2 + 720);
                                                                                      *(_BYTE *)(((v2 + 720) >> 3)
                                                                                               + 0x7FFF8000) = -8;
                                                                                      if ( forbidden_entities_ptr
                                                                                        && !data::arrFromJson(
                                                                                              forbidden_entities_ptr,
                                                                                              &this->forbidden_entities) )
                                                                                      {
                                                                                        *(_DWORD *)(((v2 + 6624) >> 3)
                                                                                                  + 0x7FFF8000) = 0;
                                                                                        if ( *(char *)(((v2 + 6624) >> 3) + 0x7FFF8000) < 0
                                                                                          || *(_BYTE *)(((v2 + 6655) >> 3) + 0x7FFF8000) != 0
                                                                                          && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 6655) >> 3) + 0x7FFF8000) )
                                                                                        {
                                                                                          __asan_report_store_n(
                                                                                            v2 + 6624,
                                                                                            32LL);
                                                                                        }
                                                                                        common::milog::MiLogStream::create(
                                                                                          (common::milog::MiLogStream *)(v2 + 6624),
                                                                                          &common::milog::MiLogDefault::default_log_obj_,
                                                                                          3u,
                                                                                          "./src/json_data_auto/Component"
                                                                                          "Defines/Ability/ConfigAbilityModifier.cpp",
                                                                                          "fromJson",
                                                                                          937);
                                                                                        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                                                                          (common::milog::MiLogStream *const)(v2 + 6624),
                                                                                          (const char (*)[39])"fromJson for: forbiddenEntities fails!");
                                                                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 6624));
                                                                                        v6 = 0;
                                                                                      }
                                                                                      else
                                                                                      {
                                                                                        *(_DWORD *)(((v2 + 6688) >> 3)
                                                                                                  + 0x7FFF8000) = 0;
                                                                                        *(_BYTE *)(((v2 + 736) >> 3)
                                                                                                 + 0x7FFF8000) = 1;
                                                                                        std::allocator<char>::allocator(v2 + 736);
                                                                                        std::string::basic_string<std::allocator<char>>(
                                                                                          (std::string *const)(v2 + 6688),
                                                                                          "fireEventWhenApply",
                                                                                          (const std::allocator<char> *)(v2 + 736));
                                                                                        fire_event_when_apply_ptr = jsonValueFind(jval, (const std::string *)(v2 + 6688));
                                                                                        std::string::~string((void *)(v2 + 6688));
                                                                                        *(_DWORD *)(((v2 + 6688) >> 3)
                                                                                                  + 0x7FFF8000) = -117901064;
                                                                                        std::allocator<char>::~allocator(v2 + 736);
                                                                                        *(_BYTE *)(((v2 + 736) >> 3)
                                                                                                 + 0x7FFF8000) = -8;
                                                                                        if ( fire_event_when_apply_ptr
                                                                                          && !fromJson<bool>(
                                                                                                fire_event_when_apply_ptr,
                                                                                                &this->fire_event_when_apply) )
                                                                                        {
                                                                                          *(_DWORD *)(((v2 + 6752) >> 3) + 0x7FFF8000) = 0;
                                                                                          if ( *(char *)(((v2 + 6752) >> 3) + 0x7FFF8000) < 0
                                                                                            || *(_BYTE *)(((v2 + 6783) >> 3) + 0x7FFF8000) != 0
                                                                                            && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 6783) >> 3) + 0x7FFF8000) )
                                                                                          {
                                                                                            __asan_report_store_n(
                                                                                              v2 + 6752,
                                                                                              32LL);
                                                                                          }
                                                                                          common::milog::MiLogStream::create(
                                                                                            (common::milog::MiLogStream *)(v2 + 6752),
                                                                                            &common::milog::MiLogDefault::default_log_obj_,
                                                                                            3u,
                                                                                            "./src/json_data_auto/Compone"
                                                                                            "ntDefines/Ability/ConfigAbilityModifier.cpp",
                                                                                            "fromJson",
                                                                                            949);
                                                                                          common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                                                                                            (common::milog::MiLogStream *const)(v2 + 6752),
                                                                                            (const char (*)[40])"fromJson for: fireEventWhenApply fails!");
                                                                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 6752));
                                                                                          v6 = 0;
                                                                                        }
                                                                                        else
                                                                                        {
                                                                                          *(_DWORD *)(((v2 + 6816) >> 3) + 0x7FFF8000) = 0;
                                                                                          *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) = 1;
                                                                                          std::allocator<char>::allocator(v2 + 752);
                                                                                          std::string::basic_string<std::allocator<char>>(
                                                                                            (std::string *const)(v2 + 6816),
                                                                                            "isDurabilityGlobal",
                                                                                            (const std::allocator<char> *)(v2 + 752));
                                                                                          is_durability_global_ptr = jsonValueFind(jval, (const std::string *)(v2 + 6816));
                                                                                          std::string::~string((void *)(v2 + 6816));
                                                                                          *(_DWORD *)(((v2 + 6816) >> 3) + 0x7FFF8000) = -117901064;
                                                                                          std::allocator<char>::~allocator(v2 + 752);
                                                                                          *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) = -8;
                                                                                          if ( is_durability_global_ptr
                                                                                            && !fromJson<bool>(
                                                                                                  is_durability_global_ptr,
                                                                                                  &this->is_durability_global) )
                                                                                          {
                                                                                            *(_DWORD *)(((v2 + 6880) >> 3) + 0x7FFF8000) = 0;
                                                                                            if ( *(char *)(((v2 + 6880) >> 3) + 0x7FFF8000) < 0
                                                                                              || *(_BYTE *)(((v2 + 6911) >> 3) + 0x7FFF8000) != 0
                                                                                              && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 6911) >> 3) + 0x7FFF8000) )
                                                                                            {
                                                                                              __asan_report_store_n(
                                                                                                v2 + 6880,
                                                                                                32LL);
                                                                                            }
                                                                                            common::milog::MiLogStream::create(
                                                                                              (common::milog::MiLogStream *)(v2 + 6880),
                                                                                              &common::milog::MiLogDefault::default_log_obj_,
                                                                                              3u,
                                                                                              "./src/json_data_auto/Compo"
                                                                                              "nentDefines/Ability/Config"
                                                                                              "AbilityModifier.cpp",
                                                                                              "fromJson",
                                                                                              961);
                                                                                            common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                                                                                              (common::milog::MiLogStream *const)(v2 + 6880),
                                                                                              (const char (*)[40])"fromJson for: isDurabilityGlobal fails!");
                                                                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 6880));
                                                                                            v6 = 0;
                                                                                          }
                                                                                          else
                                                                                          {
                                                                                            *(_DWORD *)(((v2 + 6944) >> 3) + 0x7FFF8000) = 0;
                                                                                            *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) = 1;
                                                                                            std::allocator<char>::allocator(v2 + 768);
                                                                                            std::string::basic_string<std::allocator<char>>(
                                                                                              (std::string *const)(v2 + 6944),
                                                                                              "tickThinkIntervalAfterDie",
                                                                                              (const std::allocator<char> *)(v2 + 768));
                                                                                            tick_think_interval_after_die_ptr = jsonValueFind(jval, (const std::string *)(v2 + 6944));
                                                                                            std::string::~string((void *)(v2 + 6944));
                                                                                            *(_DWORD *)(((v2 + 6944) >> 3) + 0x7FFF8000) = -117901064;
                                                                                            std::allocator<char>::~allocator(v2 + 768);
                                                                                            *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) = -8;
                                                                                            if ( tick_think_interval_after_die_ptr
                                                                                              && !fromJson<bool>(
                                                                                                    tick_think_interval_after_die_ptr,
                                                                                                    &this->tick_think_interval_after_die) )
                                                                                            {
                                                                                              *(_DWORD *)(((v2 + 7008) >> 3) + 0x7FFF8000) = 0;
                                                                                              if ( *(char *)(((v2 + 7008) >> 3) + 0x7FFF8000) < 0
                                                                                                || *(_BYTE *)(((v2 + 7039) >> 3) + 0x7FFF8000) != 0
                                                                                                && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 7039) >> 3) + 0x7FFF8000) )
                                                                                              {
                                                                                                __asan_report_store_n(
                                                                                                  v2 + 7008,
                                                                                                  32LL);
                                                                                              }
                                                                                              common::milog::MiLogStream::create(
                                                                                                (common::milog::MiLogStream *)(v2 + 7008),
                                                                                                &common::milog::MiLogDefault::default_log_obj_,
                                                                                                3u,
                                                                                                "./src/json_data_auto/Com"
                                                                                                "ponentDefines/Ability/Co"
                                                                                                "nfigAbilityModifier.cpp",
                                                                                                "fromJson",
                                                                                                973);
                                                                                              common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                                                                                                (common::milog::MiLogStream *const)(v2 + 7008),
                                                                                                (const char (*)[47])"fromJson for: tickThinkIntervalAfterDie fails!");
                                                                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 7008));
                                                                                              v6 = 0;
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                              *(_DWORD *)(((v2 + 7072) >> 3) + 0x7FFF8000) = 0;
                                                                                              *(_BYTE *)(((v2 + 784) >> 3) + 0x7FFF8000) = 1;
                                                                                              std::allocator<char>::allocator(v2 + 784);
                                                                                              std::string::basic_string<std::allocator<char>>(
                                                                                                (std::string *const)(v2 + 7072),
                                                                                                "thinkIntervalIgnoreTimeScale",
                                                                                                (const std::allocator<char> *)(v2 + 784));
                                                                                              think_interval_ignore_time_scale_ptr = jsonValueFind(jval, (const std::string *)(v2 + 7072));
                                                                                              std::string::~string((void *)(v2 + 7072));
                                                                                              *(_DWORD *)(((v2 + 7072) >> 3) + 0x7FFF8000) = -117901064;
                                                                                              std::allocator<char>::~allocator(v2 + 784);
                                                                                              *(_BYTE *)(((v2 + 784) >> 3) + 0x7FFF8000) = -8;
                                                                                              if ( think_interval_ignore_time_scale_ptr
                                                                                                && !fromJson<bool>(think_interval_ignore_time_scale_ptr, &this->think_interval_ignore_time_scale) )
                                                                                              {
                                                                                                *(_DWORD *)(((v2 + 7136) >> 3) + 0x7FFF8000) = 0;
                                                                                                if ( *(char *)(((v2 + 7136) >> 3) + 0x7FFF8000) < 0 || *(_BYTE *)(((v2 + 7167) >> 3) + 0x7FFF8000) != 0 && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 7167) >> 3) + 0x7FFF8000) )
                                                                                                  __asan_report_store_n(
                                                                                                    v2 + 7136,
                                                                                                    32LL);
                                                                                                common::milog::MiLogStream::create(
                                                                                                  (common::milog::MiLogStream *)(v2 + 7136),
                                                                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                                                                  3u,
                                                                                                  "./src/json_data_auto/C"
                                                                                                  "omponentDefines/Abilit"
                                                                                                  "y/ConfigAbilityModifier.cpp",
                                                                                                  "fromJson",
                                                                                                  985);
                                                                                                common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                                                                                                  (common::milog::MiLogStream *const)(v2 + 7136),
                                                                                                  (const char (*)[50])"fromJson for: thinkIntervalIgnoreTimeScale fails!");
                                                                                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 7136));
                                                                                                v6 = 0;
                                                                                              }
                                                                                              else
                                                                                              {
                                                                                                *(_DWORD *)(((v2 + 7200) >> 3) + 0x7FFF8000) = 0;
                                                                                                *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) = 1;
                                                                                                std::allocator<char>::allocator(v2 + 800);
                                                                                                std::string::basic_string<std::allocator<char>>(
                                                                                                  (std::string *const)(v2 + 7200),
                                                                                                  "reduceDurablityIgnoreTimeScale",
                                                                                                  (const std::allocator<char> *)(v2 + 800));
                                                                                                reduce_durablity_ignore_time_scale_ptr = jsonValueFind(jval, (const std::string *)(v2 + 7200));
                                                                                                std::string::~string((void *)(v2 + 7200));
                                                                                                *(_DWORD *)(((v2 + 7200) >> 3) + 0x7FFF8000) = -117901064;
                                                                                                std::allocator<char>::~allocator(v2 + 800);
                                                                                                *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) = -8;
                                                                                                if ( reduce_durablity_ignore_time_scale_ptr && !fromJson<bool>(reduce_durablity_ignore_time_scale_ptr, &this->reduce_durablity_ignore_time_scale) )
                                                                                                {
                                                                                                  *(_DWORD *)(((v2 + 7264) >> 3) + 0x7FFF8000) = 0;
                                                                                                  if ( *(char *)(((v2 + 7264) >> 3) + 0x7FFF8000) < 0 || *(_BYTE *)(((v2 + 7295) >> 3) + 0x7FFF8000) != 0 && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 7295) >> 3) + 0x7FFF8000) )
                                                                                                    __asan_report_store_n(v2 + 7264, 32LL);
                                                                                                  common::milog::MiLogStream::create(
                                                                                                    (common::milog::MiLogStream *)(v2 + 7264),
                                                                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                                                                    3u,
                                                                                                    "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp",
                                                                                                    "fromJson",
                                                                                                    997);
                                                                                                  common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                                                                                                    (common::milog::MiLogStream *const)(v2 + 7264),
                                                                                                    (const char (*)[52])"fromJson for: reduceDurablityIgnoreTimeScale fails!");
                                                                                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 7264));
                                                                                                  v6 = 0;
                                                                                                }
                                                                                                else
                                                                                                {
                                                                                                  *(_DWORD *)(((v2 + 7328) >> 3) + 0x7FFF8000) = 0;
                                                                                                  *(_BYTE *)(((v2 + 816) >> 3) + 0x7FFF8000) = 1;
                                                                                                  std::allocator<char>::allocator(v2 + 816);
                                                                                                  std::string::basic_string<std::allocator<char>>(
                                                                                                    (std::string *const)(v2 + 7328),
                                                                                                    "isLimitedProperties",
                                                                                                    (const std::allocator<char> *)(v2 + 816));
                                                                                                  is_limited_properties_ptr = jsonValueFind(jval, (const std::string *)(v2 + 7328));
                                                                                                  std::string::~string((void *)(v2 + 7328));
                                                                                                  *(_DWORD *)(((v2 + 7328) >> 3) + 0x7FFF8000) = -117901064;
                                                                                                  std::allocator<char>::~allocator(v2 + 816);
                                                                                                  *(_BYTE *)(((v2 + 816) >> 3) + 0x7FFF8000) = -8;
                                                                                                  if ( is_limited_properties_ptr && !fromJson<bool>(is_limited_properties_ptr, &this->is_limited_properties) )
                                                                                                  {
                                                                                                    *(_DWORD *)(((v2 + 7392) >> 3) + 0x7FFF8000) = 0;
                                                                                                    if ( *(char *)(((v2 + 7392) >> 3) + 0x7FFF8000) < 0 || *(_BYTE *)(((v2 + 7423) >> 3) + 0x7FFF8000) != 0 && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 7423) >> 3) + 0x7FFF8000) )
                                                                                                      __asan_report_store_n(v2 + 7392, 32LL);
                                                                                                    common::milog::MiLogStream::create((common::milog::MiLogStream *)(v2 + 7392), &common::milog::MiLogDefault::default_log_obj_, 3u, "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp", "fromJson", 1009);
                                                                                                    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>((common::milog::MiLogStream *const)(v2 + 7392), (const char (*)[41])"fromJson for: isLimitedProperties fails!");
                                                                                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 7392));
                                                                                                    v6 = 0;
                                                                                                  }
                                                                                                  else
                                                                                                  {
                                                                                                    *(_DWORD *)(((v2 + 7456) >> 3) + 0x7FFF8000) = 0;
                                                                                                    *(_BYTE *)(((v2 + 832) >> 3) + 0x7FFF8000) = 1;
                                                                                                    std::allocator<char>::allocator(v2 + 832);
                                                                                                    std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 7456), "forceSyncToRemote", (const std::allocator<char> *)(v2 + 832));
                                                                                                    force_sync_to_remote_ptr = jsonValueFind(jval, (const std::string *)(v2 + 7456));
                                                                                                    std::string::~string((void *)(v2 + 7456));
                                                                                                    *(_DWORD *)(((v2 + 7456) >> 3) + 0x7FFF8000) = -117901064;
                                                                                                    std::allocator<char>::~allocator(v2 + 832);
                                                                                                    *(_BYTE *)(((v2 + 832) >> 3) + 0x7FFF8000) = -8;
                                                                                                    if ( force_sync_to_remote_ptr && !fromJson<bool>(force_sync_to_remote_ptr, &this->force_sync_to_remote) )
                                                                                                    {
                                                                                                      *(_DWORD *)(((v2 + 7520) >> 3) + 0x7FFF8000) = 0;
                                                                                                      if ( *(char *)(((v2 + 7520) >> 3) + 0x7FFF8000) < 0 || *(_BYTE *)(((v2 + 7551) >> 3) + 0x7FFF8000) != 0 && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 7551) >> 3) + 0x7FFF8000) )
                                                                                                        __asan_report_store_n(v2 + 7520, 32LL);
                                                                                                      common::milog::MiLogStream::create((common::milog::MiLogStream *)(v2 + 7520), &common::milog::MiLogDefault::default_log_obj_, 3u, "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp", "fromJson", 1021);
                                                                                                      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>((common::milog::MiLogStream *const)(v2 + 7520), (const char (*)[39])"fromJson for: forceSyncToRemote fails!");
                                                                                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 7520));
                                                                                                      v6 = 0;
                                                                                                    }
                                                                                                    else
                                                                                                    {
                                                                                                      *(_DWORD *)(((v2 + 7584) >> 3) + 0x7FFF8000) = 0;
                                                                                                      *(_BYTE *)(((v2 + 848) >> 3) + 0x7FFF8000) = 1;
                                                                                                      std::allocator<char>::allocator(v2 + 848);
                                                                                                      std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 7584), "buffID", (const std::allocator<char> *)(v2 + 848));
                                                                                                      buff_id_ptr = jsonValueFind(jval, (const std::string *)(v2 + 7584));
                                                                                                      std::string::~string((void *)(v2 + 7584));
                                                                                                      *(_DWORD *)(((v2 + 7584) >> 3) + 0x7FFF8000) = -117901064;
                                                                                                      std::allocator<char>::~allocator(v2 + 848);
                                                                                                      *(_BYTE *)(((v2 + 848) >> 3) + 0x7FFF8000) = -8;
                                                                                                      if ( buff_id_ptr && !fromJson<int>(buff_id_ptr, &this->buff_id) )
                                                                                                      {
                                                                                                        *(_DWORD *)(((v2 + 7648) >> 3) + 0x7FFF8000) = 0;
                                                                                                        if ( *(char *)(((v2 + 7648) >> 3) + 0x7FFF8000) < 0 || *(_BYTE *)(((v2 + 7679) >> 3) + 0x7FFF8000) != 0 && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 7679) >> 3) + 0x7FFF8000) )
                                                                                                          __asan_report_store_n(v2 + 7648, 32LL);
                                                                                                        common::milog::MiLogStream::create((common::milog::MiLogStream *)(v2 + 7648), &common::milog::MiLogDefault::default_log_obj_, 3u, "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp", "fromJson", 1033);
                                                                                                        common::milog::MiLogStream::operator<<<char [28],(char *[28])0>((common::milog::MiLogStream *const)(v2 + 7648), (const char (*)[28])"fromJson for: buffID fails!");
                                                                                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 7648));
                                                                                                        v6 = 0;
                                                                                                      }
                                                                                                      else
                                                                                                      {
                                                                                                        *(_DWORD *)(((v2 + 7712) >> 3) + 0x7FFF8000) = 0;
                                                                                                        *(_BYTE *)(((v2 + 864) >> 3) + 0x7FFF8000) = 1;
                                                                                                        std::allocator<char>::allocator(v2 + 864);
                                                                                                        std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 7712), "retainWhenDurabilityIsZero", (const std::allocator<char> *)(v2 + 864));
                                                                                                        retain_when_durability_is_zero_ptr = jsonValueFind(jval, (const std::string *)(v2 + 7712));
                                                                                                        std::string::~string((void *)(v2 + 7712));
                                                                                                        *(_DWORD *)(((v2 + 7712) >> 3) + 0x7FFF8000) = -117901064;
                                                                                                        std::allocator<char>::~allocator(v2 + 864);
                                                                                                        *(_BYTE *)(((v2 + 864) >> 3) + 0x7FFF8000) = -8;
                                                                                                        if ( retain_when_durability_is_zero_ptr && !fromJson<bool>(retain_when_durability_is_zero_ptr, &this->retain_when_durability_is_zero) )
                                                                                                        {
                                                                                                          *(_DWORD *)(((v2 + 7776) >> 3) + 0x7FFF8000) = 0;
                                                                                                          if ( *(char *)(((v2 + 7776) >> 3) + 0x7FFF8000) < 0 || *(_BYTE *)(((v2 + 7807) >> 3) + 0x7FFF8000) != 0 && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 7807) >> 3) + 0x7FFF8000) )
                                                                                                            __asan_report_store_n(v2 + 7776, 32LL);
                                                                                                          common::milog::MiLogStream::create((common::milog::MiLogStream *)(v2 + 7776), &common::milog::MiLogDefault::default_log_obj_, 3u, "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp", "fromJson", 1045);
                                                                                                          common::milog::MiLogStream::operator<<<char [48],(char *[48])0>((common::milog::MiLogStream *const)(v2 + 7776), (const char (*)[48])"fromJson for: retainWhenDurabilityIsZero fails!");
                                                                                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 7776));
                                                                                                          v6 = 0;
                                                                                                        }
                                                                                                        else
                                                                                                        {
                                                                                                          *(_DWORD *)(((v2 + 7840) >> 3) + 0x7FFF8000) = 0;
                                                                                                          *(_BYTE *)(((v2 + 880) >> 3) + 0x7FFF8000) = 1;
                                                                                                          std::allocator<char>::allocator(v2 + 880);
                                                                                                          std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 7840), "modifierTags", (const std::allocator<char> *)(v2 + 880));
                                                                                                          modifier_tags_ptr = jsonValueFind(jval, (const std::string *)(v2 + 7840));
                                                                                                          std::string::~string((void *)(v2 + 7840));
                                                                                                          *(_DWORD *)(((v2 + 7840) >> 3) + 0x7FFF8000) = -117901064;
                                                                                                          std::allocator<char>::~allocator(v2 + 880);
                                                                                                          *(_BYTE *)(((v2 + 880) >> 3) + 0x7FFF8000) = -8;
                                                                                                          if ( modifier_tags_ptr && !data::arrFromJson(modifier_tags_ptr, &this->modifier_tags) )
                                                                                                          {
                                                                                                            *(_DWORD *)(((v2 + 7904) >> 3) + 0x7FFF8000) = 0;
                                                                                                            if ( *(char *)(((v2 + 7904) >> 3) + 0x7FFF8000) < 0 || *(_BYTE *)(((v2 + 7935) >> 3) + 0x7FFF8000) != 0 && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 7935) >> 3) + 0x7FFF8000) )
                                                                                                              __asan_report_store_n(v2 + 7904, 32LL);
                                                                                                            common::milog::MiLogStream::create((common::milog::MiLogStream *)(v2 + 7904), &common::milog::MiLogDefault::default_log_obj_, 3u, "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp", "fromJson", 1057);
                                                                                                            common::milog::MiLogStream::operator<<<char [34],(char *[34])0>((common::milog::MiLogStream *const)(v2 + 7904), (const char (*)[34])"fromJson for: modifierTags fails!");
                                                                                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 7904));
                                                                                                            v6 = 0;
                                                                                                          }
                                                                                                          else
                                                                                                          {
                                                                                                            *(_DWORD *)(((v2 + 7968) >> 3) + 0x7FFF8000) = 0;
                                                                                                            *(_BYTE *)(((v2 + 896) >> 3) + 0x7FFF8000) = 1;
                                                                                                            std::allocator<char>::allocator(v2 + 896);
                                                                                                            std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 7968), "useDummyAbility", (const std::allocator<char> *)(v2 + 896));
                                                                                                            use_dummy_ability_ptr = jsonValueFind(jval, (const std::string *)(v2 + 7968));
                                                                                                            std::string::~string((void *)(v2 + 7968));
                                                                                                            *(_DWORD *)(((v2 + 7968) >> 3) + 0x7FFF8000) = -117901064;
                                                                                                            std::allocator<char>::~allocator(v2 + 896);
                                                                                                            *(_BYTE *)(((v2 + 896) >> 3) + 0x7FFF8000) = -8;
                                                                                                            if ( use_dummy_ability_ptr && !fromJson<bool>(use_dummy_ability_ptr, &this->use_dummy_ability) )
                                                                                                            {
                                                                                                              *(_DWORD *)(((v2 + 8032) >> 3) + 0x7FFF8000) = 0;
                                                                                                              if ( *(char *)(((v2 + 8032) >> 3) + 0x7FFF8000) < 0 || *(_BYTE *)(((v2 + 8063) >> 3) + 0x7FFF8000) != 0 && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 8063) >> 3) + 0x7FFF8000) )
                                                                                                                __asan_report_store_n(v2 + 8032, 32LL);
                                                                                                              common::milog::MiLogStream::create((common::milog::MiLogStream *)(v2 + 8032), &common::milog::MiLogDefault::default_log_obj_, 3u, "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp", "fromJson", 1069);
                                                                                                              common::milog::MiLogStream::operator<<<char [37],(char *[37])0>((common::milog::MiLogStream *const)(v2 + 8032), (const char (*)[37])"fromJson for: useDummyAbility fails!");
                                                                                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 8032));
                                                                                                              v6 = 0;
                                                                                                            }
                                                                                                            else
                                                                                                            {
                                                                                                              *(_DWORD *)(((v2 + 8096) >> 3) + 0x7FFF8000) = 0;
                                                                                                              *(_BYTE *)(((v2 + 912) >> 3) + 0x7FFF8000) = 1;
                                                                                                              std::allocator<char>::allocator(v2 + 912);
                                                                                                              std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 8096), "dummyAbilityOption", (const std::allocator<char> *)(v2 + 912));
                                                                                                              dummy_ability_option_ptr = jsonValueFind(jval, (const std::string *)(v2 + 8096));
                                                                                                              std::string::~string((void *)(v2 + 8096));
                                                                                                              *(_DWORD *)(((v2 + 8096) >> 3) + 0x7FFF8000) = -117901064;
                                                                                                              std::allocator<char>::~allocator(v2 + 912);
                                                                                                              *(_BYTE *)(((v2 + 912) >> 3) + 0x7FFF8000) = -8;
                                                                                                              if ( dummy_ability_option_ptr && !data::ConfigDummyAbilityOption::fromJson(&this->dummy_ability_option, dummy_ability_option_ptr) )
                                                                                                              {
                                                                                                                *(_DWORD *)(((v2 + 8160) >> 3) + 0x7FFF8000) = 0;
                                                                                                                if ( *(char *)(((v2 + 8160) >> 3) + 0x7FFF8000) < 0 || *(_BYTE *)(((v2 + 0x1FFF) >> 3) + 0x7FFF8000) != 0 && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 0x1FFF) >> 3) + 0x7FFF8000) )
                                                                                                                  __asan_report_store_n(v2 + 8160, 32LL);
                                                                                                                common::milog::MiLogStream::create((common::milog::MiLogStream *)(v2 + 8160), &common::milog::MiLogDefault::default_log_obj_, 3u, "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp", "fromJson", 1081);
                                                                                                                common::milog::MiLogStream::operator<<<char [40],(char *[40])0>((common::milog::MiLogStream *const)(v2 + 8160), (const char (*)[40])"fromJson for: dummyAbilityOption fails!");
                                                                                                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 8160));
                                                                                                                v6 = 0;
                                                                                                              }
                                                                                                              else
                                                                                                              {
                                                                                                                v10 = ((_BYTE)this + 123) & 7;
                                                                                                                v11 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
                                                                                                                if ( (_BYTE)v11 )
                                                                                                                  __asan_report_store1(&this->is_json_loaded, v10, v11);
                                                                                                                this->is_json_loaded = 1;
                                                                                                                v6 = 1;
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
  v12 = v6;
  if ( v69 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF807C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 132) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF8088) = 0LL;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8108) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8110) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8118) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8120) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8128) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8130) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8138) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8140) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8148) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8150) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8158) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8160) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8168) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8170) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8178) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8180) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8188) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8190) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8198) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF81A0) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81A8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF81B0) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81B8) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81C0) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF81C8) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81D0) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF81D8) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81E0) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF81E8) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81F0) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF81F8) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8200) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8208) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8210) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8218) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8220) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8228) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8230) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8238) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8240) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8248) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8250) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8258) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8260) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8268) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8270) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8278) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8280) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8288) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8290) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8298) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF82A0) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF82A8) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF82B0) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF82B8) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF82C0) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF82C8) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF82D0) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF82D8) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF82E0) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF82E8) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF82F0) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF82F8) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8300) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8308) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8310) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8318) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8320) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8328) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8330) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8338) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8340) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8348) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8350) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8358) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8360) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8368) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8370) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8378) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8380) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8388) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8390) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8398) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF83A0) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF83A8) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF83B0) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF83B8) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF83C0) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF83C8) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF83D0) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF83D8) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF83E0) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF83E8) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF83F0) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF83F8) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8400) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_8(v2, 8224LL, v69);
  }
  return v12;
};

// Line 1089: range 0000000011FF0524-0000000011FF1114
int32_t __cdecl data::ConfigAbilityModifier::getHashValue(const data::ConfigAbilityModifier *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // eax
  int32_t v6; // eax
  int32_t v7; // eax
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  int32_t v12; // eax
  int32_t ArrHashValue; // eax
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rdx
  int32_t v18; // eax
  int32_t v19; // eax
  int32_t v20; // eax
  int32_t v21; // eax
  int32_t v22; // eax
  int32_t v23; // eax
  int32_t v24; // eax
  int32_t v25; // eax
  int32_t v26; // eax
  int32_t v27; // eax
  int32_t v28; // eax
  int32_t v29; // eax
  int32_t v30; // eax
  int32_t v31; // eax
  int32_t v32; // eax
  int32_t v33; // eax
  int32_t v34; // eax
  int32_t v35; // eax
  int32_t v36; // eax
  __int64 v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // rsi
  __int64 v46; // rdx
  __int64 v47; // rsi
  __int64 v48; // rdx
  __int64 v49; // rsi
  __int64 v50; // rdx
  int32_t v51; // eax
  int32_t v52; // eax
  int32_t result; // eax
  char v54[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1090";
  *(_QWORD *)(v2 + 16) = data::ConfigAbilityModifier::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_scale >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_scale >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->time_scale);
  }
  common::tools::HashUtils::appendHash(this->time_scale, (int32_t *)(v2 + 32));
  HashValue = data::ConfigModifierStackingOption::getHashValue(&this->stacking_option);
  common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->is_unique >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_unique, v2 + 32, &this->is_unique);
  common::tools::HashUtils::appendHash(this->is_unique, (int32_t *)(v2 + 32));
  v6 = data::DynamicFloat::getHashValue(&this->duration);
  common::tools::HashUtils::appendHash(v6, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->element_type);
  }
  common::tools::HashUtils::appendHash(this->element_type, (int32_t *)(v2 + 32));
  v7 = data::DynamicFloat::getHashValue(&this->element_durability);
  common::tools::HashUtils::appendHash(v7, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->max_element_durability >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_element_durability >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->max_element_durability);
  }
  common::tools::HashUtils::appendHash(this->max_element_durability, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->purge_increment >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->purge_increment >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->purge_increment);
  }
  common::tools::HashUtils::appendHash(this->purge_increment, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->is_element_durability_mutable >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(
      &this->is_element_durability_mutable,
      (((_BYTE)this - 20) & 7u) + 3,
      &this->is_element_durability_mutable);
  common::tools::HashUtils::appendHash(this->is_element_durability_mutable, (int32_t *)(v2 + 32));
  v8 = ((_BYTE)this - 15) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->force_trigger_burning >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->force_trigger_burning >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_load1(&this->force_trigger_burning, v8, v9);
  common::tools::HashUtils::appendHash(this->force_trigger_burning, (int32_t *)(v2 + 32));
  v10 = ((_BYTE)this - 14) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&this->override_weapon_element >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&this->override_weapon_element >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_load1(&this->override_weapon_element, v10, v11);
  common::tools::HashUtils::appendHash(this->override_weapon_element, (int32_t *)(v2 + 32));
  v12 = data::DynamicFloat::getHashValue(&this->think_interval);
  common::tools::HashUtils::appendHash(v12, (int32_t *)(v2 + 32));
  ArrHashValue = data::getArrHashValue(&this->modifier_mixins);
  common::tools::HashUtils::appendHash(ArrHashValue, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->trim_think_interval >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->trim_think_interval, v2 + 32, &this->trim_think_interval);
  common::tools::HashUtils::appendHash(this->trim_think_interval, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->state);
  common::tools::HashUtils::appendHash(this->state, (int32_t *)(v2 + 32));
  v14 = ((_BYTE)this + 121) & 7;
  v15 = (*(_BYTE *)(((unsigned __int64)&this->mute_state_display_effect >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v14 >= *(_BYTE *)(((unsigned __int64)&this->mute_state_display_effect >> 3) + 0x7FFF8000));
  if ( (_BYTE)v15 )
    __asan_report_load1(&this->mute_state_display_effect, v14, v15);
  common::tools::HashUtils::appendHash(this->mute_state_display_effect, (int32_t *)(v2 + 32));
  v16 = ((_BYTE)this + 122) & 7;
  v17 = (*(_BYTE *)(((unsigned __int64)&this->apply_attacker_witch_time_ratio >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v16 >= *(_BYTE *)(((unsigned __int64)&this->apply_attacker_witch_time_ratio >> 3) + 0x7FFF8000));
  if ( (_BYTE)v17 )
    __asan_report_load1(&this->apply_attacker_witch_time_ratio, v16, v17);
  common::tools::HashUtils::appendHash(this->apply_attacker_witch_time_ratio, (int32_t *)(v2 + 32));
  v18 = data::getArrHashValue(&this->on_added);
  common::tools::HashUtils::appendHash(v18, (int32_t *)(v2 + 32));
  v19 = data::getArrHashValue(&this->on_removed);
  common::tools::HashUtils::appendHash(v19, (int32_t *)(v2 + 32));
  v20 = data::getArrHashValue(&this->on_being_hit);
  common::tools::HashUtils::appendHash(v20, (int32_t *)(v2 + 32));
  v21 = data::getArrHashValue(&this->on_attack_landed);
  common::tools::HashUtils::appendHash(v21, (int32_t *)(v2 + 32));
  v22 = data::getArrHashValue(&this->on_hitting_other);
  common::tools::HashUtils::appendHash(v22, (int32_t *)(v2 + 32));
  v23 = data::getArrHashValue(&this->on_heal);
  common::tools::HashUtils::appendHash(v23, (int32_t *)(v2 + 32));
  v24 = data::getArrHashValue(&this->on_being_healed);
  common::tools::HashUtils::appendHash(v24, (int32_t *)(v2 + 32));
  v25 = data::getArrHashValue(&this->on_think_interval);
  common::tools::HashUtils::appendHash(v25, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->on_think_interval_is_fixed_update >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->on_think_interval_is_fixed_update, v2 + 32, &this->on_think_interval_is_fixed_update);
  common::tools::HashUtils::appendHash(this->on_think_interval_is_fixed_update, (int32_t *)(v2 + 32));
  v26 = data::getArrHashValue(&this->on_kill);
  common::tools::HashUtils::appendHash(v26, (int32_t *)(v2 + 32));
  v27 = data::getArrHashValue(&this->on_crash);
  common::tools::HashUtils::appendHash(v27, (int32_t *)(v2 + 32));
  v28 = data::getArrHashValue(&this->on_avatar_in);
  common::tools::HashUtils::appendHash(v28, (int32_t *)(v2 + 32));
  v29 = data::getArrHashValue(&this->on_avatar_out);
  common::tools::HashUtils::appendHash(v29, (int32_t *)(v2 + 32));
  v30 = data::getArrHashValue(&this->on_vehicle_in);
  common::tools::HashUtils::appendHash(v30, (int32_t *)(v2 + 32));
  v31 = data::getArrHashValue(&this->on_vehicle_out);
  common::tools::HashUtils::appendHash(v31, (int32_t *)(v2 + 32));
  v32 = data::getArrHashValue(&this->on_zone_enter);
  common::tools::HashUtils::appendHash(v32, (int32_t *)(v2 + 32));
  v33 = data::getArrHashValue(&this->on_zone_exit);
  common::tools::HashUtils::appendHash(v33, (int32_t *)(v2 + 32));
  v34 = data::getArrHashValue(&this->on_reconnect);
  common::tools::HashUtils::appendHash(v34, (int32_t *)(v2 + 32));
  v35 = data::getArrHashValue(&this->on_change_authority);
  common::tools::HashUtils::appendHash(v35, (int32_t *)(v2 + 32));
  v36 = data::getArrHashValue(&this->forbidden_entities);
  common::tools::HashUtils::appendHash(v36, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->fire_event_when_apply >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->fire_event_when_apply, v2 + 32, &this->fire_event_when_apply);
  common::tools::HashUtils::appendHash(this->fire_event_when_apply, (int32_t *)(v2 + 32));
  v37 = ((_BYTE)this + 81) & 7;
  v38 = (*(_BYTE *)(((unsigned __int64)&this->is_durability_global >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v37 >= *(_BYTE *)(((unsigned __int64)&this->is_durability_global >> 3) + 0x7FFF8000));
  if ( (_BYTE)v38 )
    __asan_report_load1(&this->is_durability_global, v37, v38);
  common::tools::HashUtils::appendHash(this->is_durability_global, (int32_t *)(v2 + 32));
  v39 = ((_BYTE)this + 82) & 7;
  v40 = (*(_BYTE *)(((unsigned __int64)&this->tick_think_interval_after_die >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v39 >= *(_BYTE *)(((unsigned __int64)&this->tick_think_interval_after_die >> 3) + 0x7FFF8000));
  if ( (_BYTE)v40 )
    __asan_report_load1(&this->tick_think_interval_after_die, v39, v40);
  common::tools::HashUtils::appendHash(this->tick_think_interval_after_die, (int32_t *)(v2 + 32));
  v41 = ((_BYTE)this + 83) & 7;
  v42 = (*(_BYTE *)(((unsigned __int64)&this->think_interval_ignore_time_scale >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v41 >= *(_BYTE *)(((unsigned __int64)&this->think_interval_ignore_time_scale >> 3) + 0x7FFF8000));
  if ( (_BYTE)v42 )
    __asan_report_load1(&this->think_interval_ignore_time_scale, v41, v42);
  common::tools::HashUtils::appendHash(this->think_interval_ignore_time_scale, (int32_t *)(v2 + 32));
  v43 = ((_BYTE)this + 84) & 7;
  v44 = (*(_BYTE *)(((unsigned __int64)&this->reduce_durablity_ignore_time_scale >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v43 >= *(_BYTE *)(((unsigned __int64)&this->reduce_durablity_ignore_time_scale >> 3) + 0x7FFF8000));
  if ( (_BYTE)v44 )
    __asan_report_load1(&this->reduce_durablity_ignore_time_scale, v43, v44);
  common::tools::HashUtils::appendHash(this->reduce_durablity_ignore_time_scale, (int32_t *)(v2 + 32));
  v45 = ((_BYTE)this + 85) & 7;
  v46 = (*(_BYTE *)(((unsigned __int64)&this->is_limited_properties >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v45 >= *(_BYTE *)(((unsigned __int64)&this->is_limited_properties >> 3) + 0x7FFF8000));
  if ( (_BYTE)v46 )
    __asan_report_load1(&this->is_limited_properties, v45, v46);
  common::tools::HashUtils::appendHash(this->is_limited_properties, (int32_t *)(v2 + 32));
  v47 = ((_BYTE)this + 86) & 7;
  v48 = (*(_BYTE *)(((unsigned __int64)&this->force_sync_to_remote >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v47 >= *(_BYTE *)(((unsigned __int64)&this->force_sync_to_remote >> 3) + 0x7FFF8000));
  if ( (_BYTE)v48 )
    __asan_report_load1(&this->force_sync_to_remote, v47, v48);
  common::tools::HashUtils::appendHash(this->force_sync_to_remote, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->buff_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->buff_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->buff_id);
  }
  common::tools::HashUtils::appendHash(this->buff_id, (int32_t *)(v2 + 32));
  v49 = ((_BYTE)this + 92) & 7;
  v50 = (*(_BYTE *)(((unsigned __int64)&this->retain_when_durability_is_zero >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v49 >= *(_BYTE *)(((unsigned __int64)&this->retain_when_durability_is_zero >> 3) + 0x7FFF8000));
  if ( (_BYTE)v50 )
    __asan_report_load1(&this->retain_when_durability_is_zero, v49, v50);
  common::tools::HashUtils::appendHash(this->retain_when_durability_is_zero, (int32_t *)(v2 + 32));
  v51 = data::getArrHashValue(&this->modifier_tags);
  common::tools::HashUtils::appendHash(v51, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->use_dummy_ability >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->use_dummy_ability, v2 + 32, &this->use_dummy_ability);
  common::tools::HashUtils::appendHash(this->use_dummy_ability, (int32_t *)(v2 + 32));
  v52 = data::ConfigDummyAbilityOption::getHashValue(&this->dummy_ability_option);
  common::tools::HashUtils::appendHash(v52, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v54 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1144: range 0000000011FF1115-0000000011FF1EDA
bool __cdecl data::mapFromJson(const Json::Value *jval, data::ConfigAbilityModifierMap *m)
{
  bool v2; // r15
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  bool v6; // al
  unsigned __int64 v7; // rax
  common::milog::MiLogStream *v8; // r14
  _BOOL4 v9; // r14d
  unsigned __int64 v10; // rax
  const Json::Value *v11; // rax
  unsigned __int64 v12; // rax
  void (__fastcall **v13)(unsigned __int64, unsigned __int64); // rdx
  void (__fastcall *v14)(unsigned __int64, unsigned __int64); // rcx
  int v15; // r14d
  data::ConfigAbilityModifier *v16; // rax
  std::shared_ptr<data::ConfigAbilityModifier> *v17; // r8
  common::milog::MiLogStream *v18; // rax
  std::pair<std::__detail::_Node_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigAbilityModifier> >,false,true>,bool> v19; // rax
  common::milog::MiLogStream *v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  int v23; // edx
  char v25[816]; // [rsp+20h] [rbp-330h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(768LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "12 48 16 8 cit:1147 80 16 9 <unknown> 112 16 10 value:1157 144 32 8 key:1150 208 32 9 <unknown> "
                        "272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 40 13 tmp_jval:1"
                        "145 608 40 13 key_jval:1149 688 40 15 value_jval:1156";
  *(_QWORD *)(v3 + 16) = data::mapFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = 62194;
  v5[536862723] = 62194;
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
  v5[536862737] = -234881024;
  v5[536862738] = -218959118;
  v5[536862740] = -218959360;
  v5[536862741] = 62194;
  v5[536862742] = -218103808;
  v5[536862743] = -202116109;
  Json::Value::Value((Json::Value *)(v3 + 528), jval);
  overrideDefault((Json::Value *)(v3 + 528));
  if ( *(_WORD *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  Json::Value::begin((Json::Value_0 *const)(v3 + 528));
  while ( 1 )
  {
    *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) = 0;
    if ( *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    Json::Value::end((Json::Value_0 *const)(v3 + 528));
    v6 = Json::ValueIteratorBase::operator!=(
           (const Json::ValueIteratorBase *const)(v3 + 48),
           (const Json::ValueIteratorBase::SelfType *)(v3 + 80));
    *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) = -1800;
    if ( !v6 )
      break;
    v7 = ((v3 + 608) >> 3) + 2147450880;
    *(_DWORD *)v7 = 0;
    *(_BYTE *)(v7 + 4) = 0;
    if ( *(char *)(((v3 + 608) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 647) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 121) & 7) >= *(_BYTE *)(((v3 + 647) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 608, 40LL);
    }
    Json::ValueIteratorBase::key((Json::ValueIteratorBase *)(v3 + 608));
    *(_DWORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 144);
    if ( !fromJson<std::string>((const Json::Value *)(v3 + 608), (std::string *)(v3 + 144)) )
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
        3u,
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp",
        "mapFromJson",
        1153);
      v8 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             (common::milog::MiLogStream *const)(v3 + 208),
             (const char (*)[21])"key fromJson fails: ");
      *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 272) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 272, 32LL);
      }
      Json::Value::asString[abi:cxx11]((Json::String *)(v3 + 272), (Json::Value_0 *)(v3 + 608));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v3 + 272));
      std::string::~string((void *)(v3 + 272));
      *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 208));
      *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
      v9 = 0;
    }
    else
    {
      v10 = ((v3 + 688) >> 3) + 2147450880;
      *(_DWORD *)v10 = 0;
      *(_BYTE *)(v10 + 4) = 0;
      v11 = Json::ValueIterator::operator*((Json::ValueIterator *const)(v3 + 48));
      Json::Value::Value((Json::Value *)(v3 + 688), v11);
      *(_WORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
      v12 = (unsigned __int64)std::__shared_ptr_access<data::ConfigAbilityModifierFactory,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigAbilityModifierFactory,(__gnu_cxx::_Lock_policy)2,false,false> *const)&data::ConfigAbilityModifierFactory::instance_ptr);
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        v12 = __asan_report_load8(v12);
      v13 = *(void (__fastcall ***)(unsigned __int64, unsigned __int64))v12;
      if ( *(_BYTE *)((*(_QWORD *)v12 >> 3) + 0x7FFF8000LL) )
        v12 = __asan_report_load8(*(_QWORD *)v12);
      v14 = *v13;
      if ( *(_WORD *)(((v3 + 112) >> 3) + 0x7FFF8000) )
        v12 = __asan_report_store16();
      v14(v3 + 112, v12);
      if ( std::operator==<data::ConfigAbilityModifier>(
             (const std::shared_ptr<data::ConfigAbilityModifier> *)(v3 + 112),
             0LL) )
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
          3u,
          "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp",
          "mapFromJson",
          1160);
        common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
          (common::milog::MiLogStream *const)(v3 + 336),
          (const char (*)[14])"value is null");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
        *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v15 = 0;
      }
      else
      {
        v16 = std::__shared_ptr_access<data::ConfigAbilityModifier,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigAbilityModifier,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
        if ( !data::ConfigAbilityModifier::fromJson(v16, (const Json::Value *)(v3 + 688)) )
        {
          *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 400) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 112 + 31) & 7) >= *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 400, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 400),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp",
            "mapFromJson",
            1165);
          v18 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                  (common::milog::MiLogStream *const)(v3 + 400),
                  (const char (*)[28])"value fromJson fails, key: ");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, (const std::string *)(v3 + 144));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 400));
          *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
          v2 = 0;
          v15 = 0;
        }
        else
        {
          v19 = std::unordered_map<std::string,std::shared_ptr<data::ConfigAbilityModifier>>::emplace<std::string&,std::shared_ptr<data::ConfigAbilityModifier>&>(
                  m,
                  (std::string *)(v3 + 144),
                  (std::shared_ptr<data::ConfigAbilityModifier> *)(v3 + 112),
                  (std::string *)(v3 + 144),
                  v17);
          if ( !v19.second )
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
              3u,
              "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityModifier.cpp",
              "mapFromJson",
              1170);
            v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 464),
                    (const char (*)[16])"key duplicate: ");
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, (const std::string *)(v3 + 144));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 464));
            *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = -117901064;
            v2 = 0;
            v15 = 0;
          }
          else
          {
            v15 = 1;
          }
        }
      }
      std::shared_ptr<data::ConfigAbilityModifier>::~shared_ptr((std::shared_ptr<data::ConfigAbilityModifier> *const)(v3 + 112));
      Json::Value::~Value((Json::Value_0 *const)(v3 + 688));
      v9 = v15 == 1;
    }
    std::string::~string((void *)(v3 + 144));
    Json::Value::~Value((Json::Value_0 *const)(v3 + 608));
    v21 = ((v3 + 608) >> 3) + 2147450880;
    *(_DWORD *)v21 = -117901064;
    *(_BYTE *)(v21 + 4) = -8;
    *(_DWORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = -117901064;
    v22 = ((v3 + 688) >> 3) + 2147450880;
    *(_DWORD *)v22 = -117901064;
    *(_BYTE *)(v22 + 4) = -8;
    *(_WORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = -1800;
    if ( !v9 )
    {
      v23 = 0;
      goto LABEL_42;
    }
    Json::ValueIterator::operator++((Json::ValueIterator *const)(v3 + 48));
  }
  v23 = 1;
LABEL_42:
  *(_WORD *)(((v3 + 48) >> 3) + 0x7FFF8000) = -1800;
  if ( v23 == 1 )
    v2 = 1;
  Json::Value::~Value((Json::Value_0 *const)(v3 + 528));
  if ( v25 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 96) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v2;
};

// Line 1179: range 0000000011FF1EDB-0000000011FF21EA
int32_t __cdecl data::getMapHashValue(const data::ConfigAbilityModifierMap *map)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  int32_t v7; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigAbilityModifier> >,false,true>::reference v9; // [rsp+18h] [rbp-B8h]
  std::tuple_element<0,std::pair<const std::string,std::shared_ptr<data::ConfigAbilityModifier> > >::type *key; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<const std::string,std::shared_ptr<data::ConfigAbilityModifier> > >::type *val; // [rsp+28h] [rbp-A8h]
  char v12[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 hash_code:1180 64 8 16 __for_begin:1181 96 8 14 __for_end:1181";
  *(_QWORD *)(v2 + 16) = data::getMapHashValue;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = 0;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,std::shared_ptr<data::ConfigAbilityModifier>>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,std::shared_ptr<data::ConfigAbilityModifier>>::begin(map);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<std::string,std::shared_ptr<data::ConfigAbilityModifier>>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,std::shared_ptr<data::ConfigAbilityModifier>>::end(map);
  while ( std::__detail::operator!=<std::pair<std::string const,std::shared_ptr<data::ConfigAbilityModifier>>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::shared_ptr<data::ConfigAbilityModifier> >,true> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::shared_ptr<data::ConfigAbilityModifier> >,true> *)(v2 + 96)) )
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<std::string const,std::shared_ptr<data::ConfigAbilityModifier>>,false,true>::operator*((const std::__detail::_Node_const_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigAbilityModifier> >,false,true> *const)(v2 + 64));
    key = std::get<0ul,std::string const,std::shared_ptr<data::ConfigAbilityModifier>>(v9);
    val = (std::tuple_element<1,const std::pair<const std::string,std::shared_ptr<data::ConfigAbilityModifier> > >::type *)std::get<1ul,std::string const,std::shared_ptr<data::ConfigAbilityModifier>>(v9);
    common::tools::HashUtils::appendHash(key, (int32_t *)(v2 + 48));
    if ( std::operator!=<data::ConfigAbilityModifier>(0LL, val) )
    {
      v5 = (unsigned __int64)std::__shared_ptr_access<data::ConfigAbilityModifier,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigAbilityModifier,(__gnu_cxx::_Lock_policy)2,false,false> *const)val);
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8(v5);
      v6 = *(_QWORD *)v5 + 24LL;
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8(*(_QWORD *)v5 + 24LL);
      v7 = (*(__int64 (__fastcall **)(unsigned __int64))v6)(v5);
      common::tools::HashUtils::appendHash(v7, (int32_t *)(v2 + 48));
    }
    std::__detail::_Node_const_iterator<std::pair<std::string const,std::shared_ptr<data::ConfigAbilityModifier>>,false,true>::operator++((std::__detail::_Node_const_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigAbilityModifier> >,false,true> *const)(v2 + 64));
  }
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 48);
  result = *(_DWORD *)(v2 + 48);
  if ( v12 == (char *)v2 )
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

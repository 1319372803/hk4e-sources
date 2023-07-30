// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/ConfigTrigger.cpp

// Line 19: range 0000000011FBA63E-0000000011FBA910
const char *__cdecl data::enumValToStr(data::ConcernType e)
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
    case AllExcludeGWGO:
      result = "AllExcludeGWGO";
      break;
    case CombatExcludeGWGO:
      result = "CombatExcludeGWGO";
      break;
    case AllAvatars:
      result = "AllAvatars";
      break;
    case LocalAvatar:
      result = "LocalAvatar";
      break;
    case LocalTeam:
      result = "LocalTeam";
      break;
    case AllTeams:
      result = "AllTeams";
      break;
    case AllVehicle:
      result = "AllVehicle";
      break;
    case AllAvatarsOnVehicle:
      result = "AllAvatarsOnVehicle";
      break;
    case LocalVehicle:
      result = "LocalVehicle";
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
        "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
        "enumValToStr",
        41);
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

// Line 47: range 0000000011FBA911-0000000011FBB591
bool __cdecl data::enumStrToVal(const std::string *s, data::ConcernType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::ConcernType> *i; // r14
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::ConcernType> >::pointer v10; // rax
  data::ConcernType second; // ecx
  char v12; // dl
  data::ConcernType *ea; // [rsp+10h] [rbp-380h]
  char v14[880]; // [rsp+20h] [rbp-370h] BYREF

  ea = e;
  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(832LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "16 32 1 9 <unknown> 48 1 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 "
                        "<unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unkno"
                        "wn> 208 8 5 it:65 240 8 9 <unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 360 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862724] = -234556924;
  v4[536862725] = -234556924;
  v4[536862726] = 61956;
  v4[536862726] = -234881024;
  v4[536862727] = 62194;
  v4[536862727] = -234881024;
  v4[536862728] = 62194;
  v4[536862729] = -219021312;
  v4[536862730] = 62194;
  v4[536862731] = -219021312;
  v4[536862732] = 62194;
  v4[536862743] = -218103808;
  v4[536862744] = -202116109;
  v4[536862745] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
  {
    if ( *(char *)(((v2 + 272) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 303) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 47) & 7) >= *(_BYTE *)(((v2 + 303) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 272, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 272),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
      "enumStrToVal",
      50);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 272),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 272));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::ConcernType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::ConcernType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::ConcernType>::pair<char const(&)[15],data::ConcernType,true>(
        (std::pair<const std::string,data::ConcernType> *const)(v2 + 400),
        (const char (*)[15])"AllExcludeGWGO",
        (data::ConcernType *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "AllExcludeGWGO");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::ConcernType>::pair<char const(&)[18],data::ConcernType,true>(
        (std::pair<const std::string,data::ConcernType> *const)(v2 + 440),
        (const char (*)[18])"CombatExcludeGWGO",
        (data::ConcernType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "CombatExcludeGWGO");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::ConcernType>::pair<char const(&)[11],data::ConcernType,true>(
        (std::pair<const std::string,data::ConcernType> *const)(v2 + 480),
        (const char (*)[11])"AllAvatars",
        (data::ConcernType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "AllAvatars");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::ConcernType>::pair<char const(&)[12],data::ConcernType,true>(
        (std::pair<const std::string,data::ConcernType> *const)(v2 + 520),
        (const char (*)[12])"LocalAvatar",
        (data::ConcernType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "LocalAvatar");
      *(_DWORD *)(v2 + 128) = 4;
      std::pair<std::string const,data::ConcernType>::pair<char const(&)[10],data::ConcernType,true>(
        (std::pair<const std::string,data::ConcernType> *const)(v2 + 560),
        (const char (*)[10])"LocalTeam",
        (data::ConcernType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "LocalTeam");
      *(_DWORD *)(v2 + 144) = 5;
      std::pair<std::string const,data::ConcernType>::pair<char const(&)[9],data::ConcernType,true>(
        (std::pair<const std::string,data::ConcernType> *const)(v2 + 600),
        (const char (*)[9])"AllTeams",
        (data::ConcernType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "AllTeams");
      *(_DWORD *)(v2 + 160) = 6;
      std::pair<std::string const,data::ConcernType>::pair<char const(&)[11],data::ConcernType,true>(
        (std::pair<const std::string,data::ConcernType> *const)(v2 + 640),
        (const char (*)[11])"AllVehicle",
        (data::ConcernType *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, "AllVehicle");
      *(_DWORD *)(v2 + 176) = 7;
      std::pair<std::string const,data::ConcernType>::pair<char const(&)[20],data::ConcernType,true>(
        (std::pair<const std::string,data::ConcernType> *const)(v2 + 680),
        (const char (*)[20])"AllAvatarsOnVehicle",
        (data::ConcernType *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, "AllAvatarsOnVehicle");
      *(_DWORD *)(v2 + 192) = 8;
      std::pair<std::string const,data::ConcernType>::pair<char const(&)[13],data::ConcernType,true>(
        (std::pair<const std::string,data::ConcernType> *const)(v2 + 720),
        (const char (*)[13])"LocalVehicle",
        (data::ConcernType *)(v2 + 192));
      std::allocator<std::pair<std::string const,data::ConcernType>>::allocator((std::allocator<std::pair<const std::string,data::ConcernType> > *const)(v2 + 48));
      std::map<std::string,data::ConcernType>::map(
        &data::enumStrToVal(std::string const&,data::ConcernType &)::m,
        (std::initializer_list<std::pair<const std::string,data::ConcernType> >)__PAIR128__(9LL, v2 + 400),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::ConcernType>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::ConcernType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::ConcernType>::~map,
        &data::enumStrToVal(std::string const&,data::ConcernType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::ConcernType>>::~allocator((std::allocator<std::pair<const std::string,data::ConcernType> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::ConcernType> *)(v2 + 760);
            i != (std::pair<const std::string,data::ConcernType> *)(v2 + 400);
            std::pair<std::string const,data::ConcernType>::~pair(i) )
      {
        --i;
      }
      e = (data::ConcernType *)360;
      __asan_poison_stack_memory(v2 + 400, 360LL);
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
    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 208, e);
    *(std::map<std::string,data::ConcernType>::iterator *)(v2 + 208) = std::map<std::string,data::ConcernType>::find(
                                                                         &data::enumStrToVal(std::string const&,data::ConcernType &)::m,
                                                                         s);
    *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 240, s);
    *(std::map<std::string,data::ConcernType>::iterator *)(v2 + 240) = std::map<std::string,data::ConcernType>::end(&data::enumStrToVal(std::string const&,data::ConcernType &)::m);
    v7 = (char *)(v2 + 240);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ConcernType> >::_Self *)(v2 + 208),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ConcernType> >::_Self *)(v2 + 240));
    *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
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
        "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
        "enumStrToVal",
        68);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 336),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 336));
      result = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::ConcernType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::ConcernType> > *const)(v2 + 208));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 104) & 0xFFFFFFF8) >> 3));
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
  }
  return result;
};

// Line 76: range 0000000011FBB592-0000000011FBB61B
const char *__cdecl data::getDescription(data::ConcernType e)
{
  const char *result; // rax

  switch ( e )
  {
    case AllExcludeGWGO:
      result = (const char *)&unk_1A8D15E0;
      break;
    case CombatExcludeGWGO:
      result = (const char *)&unk_1A8D1620;
      break;
    case AllAvatars:
      result = (const char *)&unk_1A8D1660;
      break;
    case LocalAvatar:
      result = (const char *)&unk_1A8D16A0;
      break;
    case LocalTeam:
      result = (const char *)&unk_1A8D16E0;
      break;
    case AllTeams:
      result = (const char *)&unk_1A8D17A0;
      break;
    case AllVehicle:
      result = (const char *)&unk_1A8D1800;
      break;
    case AllAvatarsOnVehicle:
      result = (const char *)&unk_1A8D1840;
      break;
    case LocalVehicle:
      result = (const char *)&unk_1A8D18A0;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 103: range 0000000011FBB61C-0000000011FBB906
const char *__cdecl data::enumValToStr(data::TriggerFlag e)
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
    case None_25:
      result = "None";
      break;
    case NoReviveRegion:
      result = "NoReviveRegion";
      break;
    case DeadRegion:
      result = "DeadRegion";
      break;
    case ReturnRegion:
      result = "ReturnRegion";
      break;
    case CameraSceneLook:
      result = "CameraSceneLook";
      break;
    case LevelAbility:
      result = "LevelAbility";
      break;
    case AudioEvent:
      result = "AudioEvent";
      break;
    case GlobalValue:
      result = "GlobalValue";
      break;
    case Teleport:
      result = "Teleport";
      break;
    case TeleportWithoutPaimonReminder:
      result = "TeleportWithoutPaimonReminder";
      break;
    case TeleportV2:
      result = "TeleportV2";
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
        "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
        "enumValToStr",
        129);
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

// Line 135: range 0000000011FBB907-0000000011FBC6FE
bool __cdecl data::enumStrToVal(const std::string *s, data::TriggerFlag *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::TriggerFlag> *i; // r14
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::TriggerFlag> >::pointer v10; // rax
  data::TriggerFlag second; // ecx
  char v12; // dl
  data::TriggerFlag *ea; // [rsp+10h] [rbp-400h]
  char v14[1008]; // [rsp+20h] [rbp-3F0h] BYREF

  ea = e;
  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(960LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "18 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 4 9"
                        " <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unknown> 208 4 9 <unkn"
                        "own> 224 4 9 <unknown> 240 4 9 <unknown> 256 8 6 it:155 288 8 9 <unknown> 320 32 9 <unknown> 384"
                        " 32 9 <unknown> 448 440 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = -234556924;
  v4[536862724] = -234556924;
  v4[536862725] = -234556924;
  v4[536862726] = -234556924;
  v4[536862727] = -234556924;
  v4[536862728] = -218959360;
  v4[536862729] = -218959360;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862747] = -218103808;
  v4[536862748] = -202116109;
  v4[536862749] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
  {
    if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 320, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 320),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
      "enumStrToVal",
      138);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 320),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::TriggerFlag &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::TriggerFlag &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::TriggerFlag>::pair<char const(&)[5],data::TriggerFlag,true>(
        (std::pair<const std::string,data::TriggerFlag> *const)(v2 + 448),
        (const char (*)[5])"None",
        (data::TriggerFlag *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "None");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::TriggerFlag>::pair<char const(&)[15],data::TriggerFlag,true>(
        (std::pair<const std::string,data::TriggerFlag> *const)(v2 + 488),
        (const char (*)[15])"NoReviveRegion",
        (data::TriggerFlag *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "NoReviveRegion");
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::TriggerFlag>::pair<char const(&)[11],data::TriggerFlag,true>(
        (std::pair<const std::string,data::TriggerFlag> *const)(v2 + 528),
        (const char (*)[11])"DeadRegion",
        (data::TriggerFlag *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "DeadRegion");
      *(_DWORD *)(v2 + 128) = 3;
      std::pair<std::string const,data::TriggerFlag>::pair<char const(&)[13],data::TriggerFlag,true>(
        (std::pair<const std::string,data::TriggerFlag> *const)(v2 + 568),
        (const char (*)[13])"ReturnRegion",
        (data::TriggerFlag *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "ReturnRegion");
      *(_DWORD *)(v2 + 144) = 4;
      std::pair<std::string const,data::TriggerFlag>::pair<char const(&)[16],data::TriggerFlag,true>(
        (std::pair<const std::string,data::TriggerFlag> *const)(v2 + 608),
        (const char (*)[16])"CameraSceneLook",
        (data::TriggerFlag *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "CameraSceneLook");
      *(_DWORD *)(v2 + 160) = 5;
      std::pair<std::string const,data::TriggerFlag>::pair<char const(&)[13],data::TriggerFlag,true>(
        (std::pair<const std::string,data::TriggerFlag> *const)(v2 + 648),
        (const char (*)[13])"LevelAbility",
        (data::TriggerFlag *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, "LevelAbility");
      *(_DWORD *)(v2 + 176) = 6;
      std::pair<std::string const,data::TriggerFlag>::pair<char const(&)[11],data::TriggerFlag,true>(
        (std::pair<const std::string,data::TriggerFlag> *const)(v2 + 688),
        (const char (*)[11])"AudioEvent",
        (data::TriggerFlag *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, "AudioEvent");
      *(_DWORD *)(v2 + 192) = 7;
      std::pair<std::string const,data::TriggerFlag>::pair<char const(&)[12],data::TriggerFlag,true>(
        (std::pair<const std::string,data::TriggerFlag> *const)(v2 + 728),
        (const char (*)[12])"GlobalValue",
        (data::TriggerFlag *)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 208, "GlobalValue");
      *(_DWORD *)(v2 + 208) = 8;
      std::pair<std::string const,data::TriggerFlag>::pair<char const(&)[9],data::TriggerFlag,true>(
        (std::pair<const std::string,data::TriggerFlag> *const)(v2 + 768),
        (const char (*)[9])"Teleport",
        (data::TriggerFlag *)(v2 + 208));
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 224, "Teleport");
      *(_DWORD *)(v2 + 224) = 9;
      std::pair<std::string const,data::TriggerFlag>::pair<char const(&)[30],data::TriggerFlag,true>(
        (std::pair<const std::string,data::TriggerFlag> *const)(v2 + 808),
        (const char (*)[30])"TeleportWithoutPaimonReminder",
        (data::TriggerFlag *)(v2 + 224));
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 240, "TeleportWithoutPaimonReminder");
      *(_DWORD *)(v2 + 240) = 10;
      std::pair<std::string const,data::TriggerFlag>::pair<char const(&)[11],data::TriggerFlag,true>(
        (std::pair<const std::string,data::TriggerFlag> *const)(v2 + 848),
        (const char (*)[11])"TeleportV2",
        (data::TriggerFlag *)(v2 + 240));
      std::allocator<std::pair<std::string const,data::TriggerFlag>>::allocator((std::allocator<std::pair<const std::string,data::TriggerFlag> > *const)(v2 + 64));
      std::map<std::string,data::TriggerFlag>::map(
        &data::enumStrToVal(std::string const&,data::TriggerFlag &)::m,
        (std::initializer_list<std::pair<const std::string,data::TriggerFlag> >)__PAIR128__(11LL, v2 + 448),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::TriggerFlag>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::TriggerFlag &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::TriggerFlag>::~map,
        &data::enumStrToVal(std::string const&,data::TriggerFlag &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::TriggerFlag>>::~allocator((std::allocator<std::pair<const std::string,data::TriggerFlag> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::TriggerFlag> *)(v2 + 888);
            i != (std::pair<const std::string,data::TriggerFlag> *)(v2 + 448);
            std::pair<std::string const,data::TriggerFlag>::~pair(i) )
      {
        --i;
      }
      e = (data::TriggerFlag *)440;
      __asan_poison_stack_memory(v2 + 448, 440LL);
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
    }
    *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 256, e);
    *(std::map<std::string,data::TriggerFlag>::iterator *)(v2 + 256) = std::map<std::string,data::TriggerFlag>::find(
                                                                         &data::enumStrToVal(std::string const&,data::TriggerFlag &)::m,
                                                                         s);
    *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 288, s);
    *(std::map<std::string,data::TriggerFlag>::iterator *)(v2 + 288) = std::map<std::string,data::TriggerFlag>::end(&data::enumStrToVal(std::string const&,data::TriggerFlag &)::m);
    v7 = (char *)(v2 + 288);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::TriggerFlag> >::_Self *)(v2 + 256),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::TriggerFlag> >::_Self *)(v2 + 288));
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
        "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
        "enumStrToVal",
        158);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 384),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      result = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::TriggerFlag>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::TriggerFlag> > *const)(v2 + 256));
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8074) = 0;
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
  return result;
};

// Line 166: range 0000000011FBC6FF-0000000011FBC79E
const char *__cdecl data::getDescription(data::TriggerFlag e)
{
  const char *result; // rax

  switch ( e )
  {
    case None_25:
      result = (const char *)&unk_1A8D1D20;
      break;
    case NoReviveRegion:
      result = (const char *)&unk_1A8D1D60;
      break;
    case DeadRegion:
      result = (const char *)&unk_1A8D1DA0;
      break;
    case ReturnRegion:
      result = (const char *)&unk_1A8D1DE0;
      break;
    case CameraSceneLook:
      result = (const char *)&unk_1A8D1E20;
      break;
    case LevelAbility:
      result = (const char *)&unk_1A8D1E60;
      break;
    case AudioEvent:
      result = (const char *)&unk_1A8D1EA0;
      break;
    case GlobalValue:
      result = (const char *)&unk_1A8D1EE0;
      break;
    case Teleport:
      result = (const char *)&unk_1A8D1F20;
      break;
    case TeleportWithoutPaimonReminder:
      result = (const char *)&unk_1A8D1FA0;
      break;
    case TeleportV2:
      result = (const char *)&unk_1A8D2000;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 197: range 0000000011FBC79F-0000000011FBC9FE
const char *__cdecl data::enumValToStr(data::EntityTriggerType e)
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
    if ( e == OneWay_0 )
    {
      result = "OneWay";
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
        "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
        "enumValToStr",
        205);
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
    result = "Common";
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

// Line 211: range 0000000011FBC9FF-0000000011FBD236
bool __cdecl data::enumStrToVal(const std::string *s, data::EntityTriggerType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::EntityTriggerType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::EntityTriggerType> >::pointer v11; // rax
  data::EntityTriggerType second; // ecx
  char v13; // dl
  data::EntityTriggerType *ea; // [rsp+10h] [rbp-1E0h]
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
  *(_QWORD *)(v2 + 8) = "9 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 8 6 it:222 144 8 9 <un"
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
      "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
      "enumStrToVal",
      214);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 176),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::EntityTriggerType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::EntityTriggerType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::EntityTriggerType>::pair<char const(&)[7],data::EntityTriggerType,true>(
        (std::pair<const std::string,data::EntityTriggerType> *const)(v2 + 304),
        (const char (*)[7])"Common",
        (data::EntityTriggerType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "Common");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::EntityTriggerType>::pair<char const(&)[7],data::EntityTriggerType,true>(
        (std::pair<const std::string,data::EntityTriggerType> *const)(v2 + 344),
        (const char (*)[7])"OneWay",
        (data::EntityTriggerType *)(v2 + 96));
      std::allocator<std::pair<std::string const,data::EntityTriggerType>>::allocator((std::allocator<std::pair<const std::string,data::EntityTriggerType> > *const)(v2 + 64));
      std::map<std::string,data::EntityTriggerType>::map(
        &data::enumStrToVal(std::string const&,data::EntityTriggerType &)::m,
        (std::initializer_list<std::pair<const std::string,data::EntityTriggerType> >)__PAIR128__(2LL, v2 + 304),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::EntityTriggerType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::EntityTriggerType &)::m);
      e = (data::EntityTriggerType *)&data::enumStrToVal(std::string const&,data::EntityTriggerType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::EntityTriggerType>::~map,
        &data::enumStrToVal(std::string const&,data::EntityTriggerType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::EntityTriggerType>>::~allocator((std::allocator<std::pair<const std::string,data::EntityTriggerType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::EntityTriggerType> *)(v2 + 384);
            i != (std::pair<const std::string,data::EntityTriggerType> *)(v2 + 304);
            std::pair<std::string const,data::EntityTriggerType>::~pair(i) )
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
    *(std::map<std::string,data::EntityTriggerType>::iterator *)(v2 + 112) = std::map<std::string,data::EntityTriggerType>::find(
                                                                               &data::enumStrToVal(std::string const&,data::EntityTriggerType &)::m,
                                                                               s);
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 144, s);
    *(std::map<std::string,data::EntityTriggerType>::iterator *)(v2 + 144) = std::map<std::string,data::EntityTriggerType>::end(&data::enumStrToVal(std::string const&,data::EntityTriggerType &)::m);
    v8 = (char *)(v2 + 144);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::EntityTriggerType> >::_Self *)(v2 + 112),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::EntityTriggerType> >::_Self *)(v2 + 144));
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
        "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
        "enumStrToVal",
        225);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 240),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::EntityTriggerType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::EntityTriggerType> > *const)(v2 + 112));
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

// Line 233: range 0000000011FBD237-0000000011FBD266
const char *__cdecl data::getDescription(data::EntityTriggerType e)
{
  if ( e == Common_0 )
    return (const char *)&unk_1A8D21E0;
  if ( e == OneWay_0 )
    return (const char *)&unk_1A8D2220;
  return "unknown enum value!";
};

// Line 247: range 0000000011FBD267-0000000011FBD49C
data::ConfigLocalTriggerMetaPtr __cdecl data::createConfigLocalTriggerMeta(const std::string *name)
{
  const std::map<std::string,std::shared_ptr<data::ConfigLocalTriggerMeta>>::key_type *v1; // rsi
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigLocalTriggerMeta> > > *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool v5; // al
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigLocalTriggerMeta> > >::pointer v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  void (__fastcall *v9)(const std::string *, unsigned __int64); // rcx
  data::ConfigLocalTriggerMetaPtr result; // rax
  char v11[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigLocalTriggerMeta> > > *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigLocalTriggerMeta> > > *)v3;
  }
  v2->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigLocalTriggerMeta> > >::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigLocalTriggerMeta> > >::_Base_ptr)"2 32 8 6 it:248 64 8 9 <unknown>";
  v2[2]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigLocalTriggerMeta> > >::_Base_ptr)data::createConfigLocalTriggerMeta;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], v1);
  v2[4]._M_node = std::map<std::string,std::shared_ptr<data::ConfigLocalTriggerMeta>>::find(
                    &data::g_ConfigLocalTriggerMetaMap[abi:cxx11],
                    v1)._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], v1);
  v2[8]._M_node = std::map<std::string,std::shared_ptr<data::ConfigLocalTriggerMeta>>::end(&data::g_ConfigLocalTriggerMetaMap[abi:cxx11])._M_node;
  v5 = std::operator!=(v2 + 4, v2 + 8);
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
  {
    v6 = std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<data::ConfigLocalTriggerMeta>>>::operator->(v2 + 4);
    v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigLocalTriggerMeta,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigLocalTriggerMeta,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v6->second);
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8(v7);
    v8 = *(_QWORD *)v7 + 24LL;
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8(*(_QWORD *)v7 + 24LL);
    v9 = *(void (__fastcall **)(const std::string *, unsigned __int64))v8;
    if ( *(_WORD *)(((unsigned __int64)name >> 3) + 0x7FFF8000) )
      v7 = __asan_report_store16();
    v9(name, v7);
  }
  else
  {
    std::shared_ptr<data::ConfigLocalTriggerMeta>::shared_ptr(
      (std::shared_ptr<data::ConfigLocalTriggerMeta> *const)name,
      0LL);
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigLocalTriggerMeta> > >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigLocalTriggerMeta,(__gnu_cxx::_Lock_policy)2>::element_type *)name;
  return result;
};

// Line 254: range 0000000011FBD49E-0000000011FBD692
void __cdecl data::ConfigLocalTriggerMeta::foreachMember(
        data::ConfigLocalTriggerMeta *const this,
        std::function<void(std::any&)> *p_func)
{
  std::any *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  char v5[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (std::any *)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::any *)v3;
  }
  v2->_M_manager = (void (*)(std::any::_Op, const std::any *, std::any::_Arg *))1102416563;
  v2->_M_storage._M_ptr = "3 32 16 20 vector_param_any:255 64 16 19 float_param_any:257 96 16 20 string_param_any:259";
  v2[1]._M_manager = (void (*)(std::any::_Op, const std::any *, std::any::_Arg *))data::ConfigLocalTriggerMeta::foreachMember;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  std::any::any<data::Vector &,data::Vector,std::any::_Manager_external<data::Vector>,true,true>(
    v2 + 2,
    &this->vector_param);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 2);
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>(v2 + 4, &this->float_param);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 4);
  std::any::any<std::string &,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 6,
    &this->string_param);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 6);
  std::any::~any(v2 + 6);
  std::any::~any(v2 + 4);
  std::any::~any(v2 + 2);
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    v2->_M_manager = (void (*)(std::any::_Op, const std::any *, std::any::_Arg *))1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 264: range 0000000011FBD694-0000000011FBD6DE
std::shared_ptr<data::ConfigLocalTriggerMeta> __cdecl data::ConfigLocalTriggerMeta::clone(
        data::ConfigLocalTriggerMeta *const this)
{
  data::ConfigLocalTriggerMeta *v1; // rsi
  std::shared_ptr<data::ConfigLocalTriggerMeta> result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigLocalTriggerMeta,data::ConfigLocalTriggerMeta&>(
    (common::tools::perf::allocator<data::ConfigLocalTriggerMeta,data::ConfigLocalTriggerMeta> *)this,
    v1);
  result._M_ptr = this;
  return result;
};

// Line 268: range 0000000011FBD6E0-0000000011FBDF72
bool __cdecl data::ConfigLocalTriggerMeta::fromJson(data::ConfigLocalTriggerMeta *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::string *p_string_param; // rsi
  const Json::Value *vector_param_ptr; // [rsp+18h] [rbp-218h]
  const Json::Value *float_param_ptr; // [rsp+20h] [rbp-210h]
  const Json::Value *string_param_ptr; // [rsp+28h] [rbp-208h]
  char v11[512]; // [rsp+30h] [rbp-200h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32"
                        " 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigLocalTriggerMeta::fromJson;
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
    "vectorParam",
    (const std::allocator<char> *)(v2 + 48));
  vector_param_ptr = jsonValueFind(jval, (const std::string *)(v2 + 96));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( vector_param_ptr && !data::Vector::fromJson(&this->vector_param, vector_param_ptr) )
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
      "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
      "fromJson",
      278);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[33])"fromJson for: vectorParam fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    result = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      "floatParam",
      (const std::allocator<char> *)(v2 + 64));
    float_param_ptr = jsonValueFind(jval, (const std::string *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( float_param_ptr && !fromJson<float>(float_param_ptr, &this->float_param) )
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
        3u,
        "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
        "fromJson",
        290);
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[32])"fromJson for: floatParam fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 352),
        "stringParam",
        (const std::allocator<char> *)(v2 + 80));
      p_string_param = (std::string *)(v2 + 352);
      string_param_ptr = jsonValueFind(jval, (const std::string *)(v2 + 352));
      std::string::~string((void *)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( string_param_ptr
        && (p_string_param = &this->string_param, !fromJson<std::string>(string_param_ptr, &this->string_param)) )
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
          3u,
          "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
          "fromJson",
          302);
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
          (common::milog::MiLogStream *const)(v2 + 416),
          (const char (*)[33])"fromJson for: stringParam fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
        result = 0;
      }
      else
      {
        if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(&this->is_json_loaded, p_string_param, &this->is_json_loaded);
        this->is_json_loaded = 1;
        result = 1;
      }
    }
  }
  if ( v11 == (char *)v2 )
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

// Line 309: range 0000000011FBDF74-0000000011FBE8C9
data::ConfigLocalTriggerMetaPtr __cdecl data::ConfigLocalTriggerMeta::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigLocalTriggerMetaPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  __int64 v10; // rax
  char v11; // dl
  _BOOL8 v12; // rdx
  const Json::Value *jval_ptr; // [rsp+18h] [rbp-208h]
  char v14[512]; // [rsp+20h] [rbp-200h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 48 1 9 <unknown> 64 16 7 ptr:322 96 32 9 <unknown> 160 32 9 <unknown> 224 32 13 type_name:316 "
                        "288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigLocalTriggerMeta::parseFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    "$type",
    (const std::allocator<char> *)(v2 + 48));
  jval_ptr = jsonValueFind(v1, (const std::string *)(v2 + 96));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( jval_ptr )
  {
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 224);
    if ( !fromJson<std::string>(jval_ptr, (std::string *)(v2 + 224)) )
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
        3u,
        "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
        "parseFromJson",
        319);
      common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[50])"fromJson for: ConfigLocalTriggerMeta $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigLocalTriggerMeta>::shared_ptr(
        (std::shared_ptr<data::ConfigLocalTriggerMeta> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigLocalTriggerMeta((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigLocalTriggerMeta>(
             (const std::shared_ptr<data::ConfigLocalTriggerMeta> *)(v2 + 64),
             0LL) )
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
          "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
          "parseFromJson",
          325);
        v6 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
               (common::milog::MiLogStream *const)(v2 + 352),
               (const char (*)[48])"create ConfigLocalTriggerMeta fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 224));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
        *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigLocalTriggerMeta>::shared_ptr(
          (std::shared_ptr<data::ConfigLocalTriggerMeta> *const)jval,
          0LL);
      }
      else
      {
        v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigLocalTriggerMeta,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigLocalTriggerMeta,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load8(v7);
        v8 = *(_QWORD *)v7 + 48LL;
        if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load8(*(_QWORD *)v7 + 48LL);
        if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v8)(v7) != 1 )
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
            3u,
            "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
            "parseFromJson",
            330);
          v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                 (common::milog::MiLogStream *const)(v2 + 416),
                 (const std::string *)(v2 + 224));
          common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
          *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigLocalTriggerMeta>::shared_ptr(
            (std::shared_ptr<data::ConfigLocalTriggerMeta> *const)jval,
            0LL);
        }
        else
        {
          v10 = (__int64)std::__shared_ptr_access<data::ConfigLocalTriggerMeta,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigLocalTriggerMeta,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          v11 = *(_BYTE *)(((unsigned __int64)(v10 + 80) >> 3) + 0x7FFF8000);
          LOBYTE(v1) = v11 != 0;
          v12 = v11 < 0;
          if ( v12 )
            v10 = __asan_report_store1(v10 + 80, v1, v12);
          *(_BYTE *)(v10 + 80) = 1;
          std::shared_ptr<data::ConfigLocalTriggerMeta>::shared_ptr(
            (std::shared_ptr<data::ConfigLocalTriggerMeta> *const)jval,
            (std::shared_ptr<data::ConfigLocalTriggerMeta> *)(v2 + 64));
        }
      }
      std::shared_ptr<data::ConfigLocalTriggerMeta>::~shared_ptr((std::shared_ptr<data::ConfigLocalTriggerMeta> *const)(v2 + 64));
    }
    std::string::~string((void *)(v2 + 224));
  }
  else
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
      "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
      "parseFromJson",
      313);
    common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[55])"jsonValueFind for: ConfigLocalTriggerMeta $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigLocalTriggerMeta>::shared_ptr(
      (std::shared_ptr<data::ConfigLocalTriggerMeta> *const)jval,
      0LL);
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigLocalTriggerMeta,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 338: range 0000000011FBE8CA-0000000011FBEA6B
int32_t __cdecl data::ConfigLocalTriggerMeta::getHashValue(const data::ConfigLocalTriggerMeta *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:339";
  *(_QWORD *)(v2 + 16) = data::ConfigLocalTriggerMeta::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  HashValue = data::Vector::getHashValue(&this->vector_param);
  common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->float_param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->float_param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->float_param);
  }
  common::tools::HashUtils::appendHash(this->float_param, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->string_param, (int32_t *)(v2 + 32));
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

// Line 347: range 0000000011FBEA6C-0000000011FBED07
const char *__cdecl data::enumValToStr(data::CurtainType e)
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
  if ( e == NahidaDungeon )
  {
    result = "NahidaDungeon";
  }
  else
  {
    if ( e <= NahidaDungeon )
    {
      switch ( e )
      {
        case SummerTime:
          result = "SummerTime";
          goto LABEL_19;
        case None_71:
          result = "None";
          goto LABEL_19;
        case BlackScreen:
          result = "BlackScreen";
          goto LABEL_19;
      }
    }
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
      "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
      "enumValToStr",
      359);
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
LABEL_19:
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

// Line 365: range 0000000011FBED08-0000000011FBF68C
bool __cdecl data::enumStrToVal(const std::string *s, data::CurtainType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::CurtainType> *i; // r14
  _DWORD *v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::CurtainType> >::pointer v11; // rax
  data::CurtainType second; // ecx
  char v13; // dl
  data::CurtainType *ea; // [rsp+10h] [rbp-260h]
  char v15[592]; // [rsp+20h] [rbp-250h] BYREF

  ea = e;
  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(544LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "11 32 1 9 <unknown> 48 1 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 "
                        "<unknown> 128 8 6 it:378 160 8 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 160 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862735] = -202116109;
  v4[536862736] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
  {
    if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
      "enumStrToVal",
      368);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::CurtainType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::CurtainType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::CurtainType>::pair<char const(&)[5],data::CurtainType,true>(
        (std::pair<const std::string,data::CurtainType> *const)(v2 + 320),
        (const char (*)[5])"None",
        (data::CurtainType *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "None");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::CurtainType>::pair<char const(&)[12],data::CurtainType,true>(
        (std::pair<const std::string,data::CurtainType> *const)(v2 + 360),
        (const char (*)[12])"BlackScreen",
        (data::CurtainType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "BlackScreen");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::CurtainType>::pair<char const(&)[11],data::CurtainType,true>(
        (std::pair<const std::string,data::CurtainType> *const)(v2 + 400),
        (const char (*)[11])"SummerTime",
        (data::CurtainType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "SummerTime");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::CurtainType>::pair<char const(&)[14],data::CurtainType,true>(
        (std::pair<const std::string,data::CurtainType> *const)(v2 + 440),
        (const char (*)[14])"NahidaDungeon",
        (data::CurtainType *)(v2 + 112));
      std::allocator<std::pair<std::string const,data::CurtainType>>::allocator((std::allocator<std::pair<const std::string,data::CurtainType> > *const)(v2 + 48));
      std::map<std::string,data::CurtainType>::map(
        &data::enumStrToVal(std::string const&,data::CurtainType &)::m,
        (std::initializer_list<std::pair<const std::string,data::CurtainType> >)__PAIR128__(4LL, v2 + 320),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::CurtainType>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::CurtainType &)::m);
      e = (data::CurtainType *)&data::enumStrToVal(std::string const&,data::CurtainType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::CurtainType>::~map,
        &data::enumStrToVal(std::string const&,data::CurtainType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::CurtainType>>::~allocator((std::allocator<std::pair<const std::string,data::CurtainType> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::CurtainType> *)(v2 + 480);
            i != (std::pair<const std::string,data::CurtainType> *)(v2 + 320);
            std::pair<std::string const,data::CurtainType>::~pair(i) )
      {
        --i;
      }
      v7 = (_DWORD *)(((v2 + 320) >> 3) + 2147450880);
      *v7 = -117901064;
      v7[1] = -117901064;
      v7[2] = -117901064;
      v7[3] = -117901064;
      v7[4] = -117901064;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, e);
    *(std::map<std::string,data::CurtainType>::iterator *)(v2 + 128) = std::map<std::string,data::CurtainType>::find(
                                                                         &data::enumStrToVal(std::string const&,data::CurtainType &)::m,
                                                                         s);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, s);
    *(std::map<std::string,data::CurtainType>::iterator *)(v2 + 160) = std::map<std::string,data::CurtainType>::end(&data::enumStrToVal(std::string const&,data::CurtainType &)::m);
    v8 = (char *)(v2 + 160);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::CurtainType> >::_Self *)(v2 + 128),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::CurtainType> >::_Self *)(v2 + 160));
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
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
        3u,
        "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
        "enumStrToVal",
        381);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 256),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::CurtainType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::CurtainType> > *const)(v2 + 128));
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
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

// Line 389: range 0000000011FBF68D-0000000011FBF6E6
const char *__cdecl data::getDescription(data::CurtainType e)
{
  if ( e == NahidaDungeon )
    return (const char *)&unk_1A8D2920;
  if ( e <= NahidaDungeon )
  {
    switch ( e )
    {
      case SummerTime:
        return (const char *)&unk_1A8D28E0;
      case None_71:
        return (const char *)&unk_1A8D2840;
      case BlackScreen:
        return (const char *)&unk_1A8D2880;
    }
  }
  return "unknown enum value!";
};

// Line 409: range 000000001215AB4C-000000001215AD8D
void __cdecl data::ConfigLocalTriggerMetaTeleportV2Register::ConfigLocalTriggerMetaTeleportV2Register(
        data::ConfigLocalTriggerMetaTeleportV2Register *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigLocalTriggerMeta> *v4; // rax
  char v5[192]; // [rsp+10h] [rbp-C0h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 1 9 <unknown> 64 16 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigLocalTriggerMetaTeleportV2Register::ConfigLocalTriggerMetaTeleportV2Register;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigLocalTriggerMetaTeleportV2>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigLocalTriggerMetaTeleportV2",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigLocalTriggerMeta>>::operator[](
         &data::g_ConfigLocalTriggerMetaMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigLocalTriggerMeta>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigLocalTriggerMeta>::operator=<data::ConfigLocalTriggerMetaTeleportV2>(
    v4,
    (std::shared_ptr<data::ConfigLocalTriggerMetaTeleportV2> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigLocalTriggerMetaTeleportV2>::~shared_ptr((std::shared_ptr<data::ConfigLocalTriggerMetaTeleportV2> *const)(v1 + 64));
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 412: range 0000000011FBF6E8-0000000011FBF8B8
void __cdecl data::ConfigLocalTriggerMetaTeleportV2::foreachMember(
        data::ConfigLocalTriggerMetaTeleportV2 *const this,
        std::function<void(std::any&)> *p_func)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  char v5[176]; // [rsp+10h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 20 curtain_type_any:414 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigLocalTriggerMetaTeleportV2::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 64), p_func);
  data::ConfigLocalTriggerMeta::foreachMember(
    (data::ConfigLocalTriggerMeta *const)this,
    (std::function<void(std::any&)> *)(v2 + 64));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<data::CurtainType &,data::CurtainType,std::any::_Manager_internal<data::CurtainType>,true,true>(
    (std::any *const)(v2 + 32),
    &this->curtain_type);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 32));
  std::any::~any((std::any *const)(v2 + 32));
  if ( v5 == (char *)v2 )
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
};

// Line 419: range 0000000011FBF8BA-0000000011FBF9CA
std::shared_ptr<data::ConfigLocalTriggerMeta> __cdecl data::ConfigLocalTriggerMetaTeleportV2::clone(
        data::ConfigLocalTriggerMetaTeleportV2 *const this)
{
  data::ConfigLocalTriggerMetaTeleportV2 *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigLocalTriggerMeta> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigLocalTriggerMetaTeleportV2::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigLocalTriggerMetaTeleportV2,data::ConfigLocalTriggerMetaTeleportV2&>(
    (common::tools::perf::allocator<data::ConfigLocalTriggerMetaTeleportV2,data::ConfigLocalTriggerMetaTeleportV2> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigLocalTriggerMeta>::shared_ptr<data::ConfigLocalTriggerMetaTeleportV2,void>(
    (std::shared_ptr<data::ConfigLocalTriggerMeta> *const)this,
    (std::shared_ptr<data::ConfigLocalTriggerMetaTeleportV2> *)(v2 + 32));
  std::shared_ptr<data::ConfigLocalTriggerMetaTeleportV2>::~shared_ptr((std::shared_ptr<data::ConfigLocalTriggerMetaTeleportV2> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigLocalTriggerMeta,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 423: range 0000000011FBF9CC-0000000011FBFA0F
data::ConfigLocalTriggerMetaTeleportV2Ptr __cdecl data::ConfigLocalTriggerMetaTeleportV2Factory::create(
        data::ConfigLocalTriggerMetaTeleportV2Factory *const this)
{
  data::ConfigLocalTriggerMetaTeleportV2Ptr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigLocalTriggerMetaTeleportV2>();
  result._M_ptr = (std::__shared_ptr<data::ConfigLocalTriggerMetaTeleportV2,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 425: range 0000000011FBFA10-0000000011FBFFA2
bool __cdecl data::ConfigLocalTriggerMetaTeleportV2::fromJson(
        data::ConfigLocalTriggerMetaTeleportV2 *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  data::CurtainType *p_curtain_type; // rsi
  bool v7; // r14
  Json::Value *curtain_type_ptr; // [rsp+18h] [rbp-178h]
  char v10[368]; // [rsp+20h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigLocalTriggerMetaTeleportV2::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -202116109;
  if ( !data::ConfigLocalTriggerMeta::fromJson((data::ConfigLocalTriggerMeta *const)this, jval) )
  {
    if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
      "fromJson",
      428);
    common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
      (common::milog::MiLogStream *const)(v2 + 64),
      (const char (*)[44])"fromJson for: ConfigLocalTriggerMeta fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 128),
      "curtainType",
      (const std::allocator<char> *)(v2 + 48));
    p_curtain_type = (data::CurtainType *)(v2 + 128);
    curtain_type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 128));
    std::string::~string((void *)(v2 + 128));
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( !curtain_type_ptr )
      goto LABEL_15;
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 192, 32LL);
    }
    Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 192), (Json::Value_0 *)curtain_type_ptr);
    p_curtain_type = &this->curtain_type;
    v7 = !data::enumStrToVal((const std::string *)(v2 + 192), &this->curtain_type);
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    if ( v7 )
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
        3u,
        "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
        "fromJson",
        440);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        (common::milog::MiLogStream *const)(v2 + 256),
        (const char (*)[33])"fromJson for: curtainType fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
LABEL_15:
      if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_json_loaded, p_curtain_type, &this->is_json_loaded);
      this->is_json_loaded = 1;
      result = 1;
    }
  }
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
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

// Line 447: range 0000000011FBFFA4-0000000011FC0AEA
data::ConfigLocalTriggerMetaTeleportV2Ptr __cdecl data::ConfigLocalTriggerMetaTeleportV2::parseFromJson(
        const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigLocalTriggerMetaTeleportV2Ptr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  __int64 v10; // rax
  char v11; // dl
  _BOOL8 v12; // rdx
  const Json::Value *jval_ptr; // [rsp+18h] [rbp-268h]
  char v14[608]; // [rsp+20h] [rbp-260h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 12 base_ptr:460 96 16 7 ptr:466 128 32 9 <unknown> 192 32 9 <unknown> "
                        "256 32 13 type_name:454 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigLocalTriggerMetaTeleportV2::parseFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 128),
    "$type",
    (const std::allocator<char> *)(v2 + 48));
  jval_ptr = jsonValueFind(v1, (const std::string *)(v2 + 128));
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( jval_ptr )
  {
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 256);
    if ( !fromJson<std::string>(jval_ptr, (std::string *)(v2 + 256)) )
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
        3u,
        "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
        "parseFromJson",
        457);
      common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[60])"fromJson for: ConfigLocalTriggerMetaTeleportV2 $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigLocalTriggerMetaTeleportV2>::shared_ptr(
        (std::shared_ptr<data::ConfigLocalTriggerMetaTeleportV2> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigLocalTriggerMeta((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigLocalTriggerMeta>(
             (const std::shared_ptr<data::ConfigLocalTriggerMeta> *)(v2 + 64),
             0LL) )
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
          "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
          "parseFromJson",
          463);
        v6 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[48])"create ConfigLocalTriggerMeta fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigLocalTriggerMetaTeleportV2>::shared_ptr(
          (std::shared_ptr<data::ConfigLocalTriggerMetaTeleportV2> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigLocalTriggerMetaTeleportV2,data::ConfigLocalTriggerMeta>((const std::shared_ptr<data::ConfigLocalTriggerMeta> *)(v2 + 96));
        if ( std::operator==<data::ConfigLocalTriggerMetaTeleportV2>(
               (const std::shared_ptr<data::ConfigLocalTriggerMetaTeleportV2> *)(v2 + 96),
               0LL) )
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
            3u,
            "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
            "parseFromJson",
            469);
          common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[51])"cast to ConfigLocalTriggerMetaTeleportV2Ptr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigLocalTriggerMetaTeleportV2>::shared_ptr(
            (std::shared_ptr<data::ConfigLocalTriggerMetaTeleportV2> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigLocalTriggerMetaTeleportV2,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigLocalTriggerMetaTeleportV2,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(v7);
          v8 = *(_QWORD *)v7 + 48LL;
          if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(*(_QWORD *)v7 + 48LL);
          if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v8)(v7) != 1 )
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
              "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
              "parseFromJson",
              474);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigLocalTriggerMetaTeleportV2>::shared_ptr(
              (std::shared_ptr<data::ConfigLocalTriggerMetaTeleportV2> *const)jval,
              0LL);
          }
          else
          {
            v10 = (__int64)std::__shared_ptr_access<data::ConfigLocalTriggerMetaTeleportV2,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigLocalTriggerMetaTeleportV2,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)(v10 + 80) >> 3) + 0x7FFF8000);
            LOBYTE(v1) = v11 != 0;
            v12 = v11 < 0;
            if ( v12 )
              v10 = __asan_report_store1(v10 + 80, v1, v12);
            *(_BYTE *)(v10 + 80) = 1;
            std::shared_ptr<data::ConfigLocalTriggerMetaTeleportV2>::shared_ptr(
              (std::shared_ptr<data::ConfigLocalTriggerMetaTeleportV2> *const)jval,
              (std::shared_ptr<data::ConfigLocalTriggerMetaTeleportV2> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigLocalTriggerMetaTeleportV2>::~shared_ptr((std::shared_ptr<data::ConfigLocalTriggerMetaTeleportV2> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigLocalTriggerMeta>::~shared_ptr((std::shared_ptr<data::ConfigLocalTriggerMeta> *const)(v2 + 64));
    }
    std::string::~string((void *)(v2 + 256));
  }
  else
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
      3u,
      "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
      "parseFromJson",
      451);
    common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[65])"jsonValueFind for: ConfigLocalTriggerMetaTeleportV2 $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigLocalTriggerMetaTeleportV2>::shared_ptr(
      (std::shared_ptr<data::ConfigLocalTriggerMetaTeleportV2> *const)jval,
      0LL);
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigLocalTriggerMetaTeleportV2,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 482: range 0000000011FC0AEC-0000000011FC0C65
int32_t __cdecl data::ConfigLocalTriggerMetaTeleportV2::getHashValue(
        const data::ConfigLocalTriggerMetaTeleportV2 *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // edx
  char v6; // al
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:483";
  *(_QWORD *)(v2 + 16) = data::ConfigLocalTriggerMetaTeleportV2::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigLocalTriggerMeta::getHashValue((const data::ConfigLocalTriggerMeta *const)this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  if ( *(_BYTE *)(((unsigned __int64)&this->curtain_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->curtain_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->curtain_type);
  }
  common::tools::HashUtils::appendHash(this->curtain_type, (int32_t *)(v2 + 32));
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

// Line 490: range 0000000011FC0C66-0000000011FC701B
bool __cdecl data::ConfigTrigger::fromJson(data::ConfigTrigger *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r15
  char v6; // al
  bool v7; // r15
  bool v8; // r15
  bool v9; // r15
  std::shared_ptr<data::ConfigBaseShape> *v10; // rax
  bool v11; // r15
  const char *v12; // rsi
  std::shared_ptr<data::ConfigLocalTriggerMeta> *v13; // rax
  bool v14; // r15
  bool v15; // bl
  Json::Value *trigger_type_ptr; // [rsp+18h] [rbp-17D8h]
  Json::Value *trigger_flag_ptr; // [rsp+20h] [rbp-17D0h]
  Json::Value *concern_type_ptr; // [rsp+28h] [rbp-17C8h]
  const Json::Value *shape_ptr; // [rsp+30h] [rbp-17C0h]
  const Json::Value *ignore_scale_ptr; // [rsp+38h] [rbp-17B8h]
  const Json::Value *offset_ptr; // [rsp+40h] [rbp-17B0h]
  const Json::Value *eular_offset_ptr; // [rsp+48h] [rbp-17A8h]
  const Json::Value *height_ptr; // [rsp+50h] [rbp-17A0h]
  const Json::Value *from_shape_ptr; // [rsp+58h] [rbp-1798h]
  const Json::Value *from_offset_ptr; // [rsp+60h] [rbp-1790h]
  const Json::Value *from_eular_offset_ptr; // [rsp+68h] [rbp-1788h]
  const Json::Value *from_height_ptr; // [rsp+70h] [rbp-1780h]
  const Json::Value *check_infinite_ptr; // [rsp+78h] [rbp-1778h]
  const Json::Value *trigger_infinite_ptr; // [rsp+80h] [rbp-1770h]
  const Json::Value *life_infinite_ptr; // [rsp+88h] [rbp-1768h]
  const Json::Value *start_check_time_ptr; // [rsp+90h] [rbp-1760h]
  const Json::Value *check_interval_ptr; // [rsp+98h] [rbp-1758h]
  const Json::Value *check_count_ptr; // [rsp+A0h] [rbp-1750h]
  const Json::Value *trigger_interval_ptr; // [rsp+A8h] [rbp-1748h]
  const Json::Value *trigger_count_ptr; // [rsp+B0h] [rbp-1740h]
  const Json::Value *life_time_ptr; // [rsp+B8h] [rbp-1738h]
  const Json::Value *overwrite_camp_type_ptr; // [rsp+C0h] [rbp-1730h]
  Json::Value *camp_type_ptr; // [rsp+C8h] [rbp-1728h]
  const Json::Value *check_point_ptr; // [rsp+D0h] [rbp-1720h]
  const Json::Value *use_surface_height_ptr; // [rsp+D8h] [rbp-1718h]
  const Json::Value *use_collider_ptr; // [rsp+E0h] [rbp-1710h]
  const Json::Value *collider_name_ptr; // [rsp+E8h] [rbp-1708h]
  const Json::Value *from_collider_name_ptr; // [rsp+F0h] [rbp-1700h]
  const Json::Value *check_ghost_ptr; // [rsp+F8h] [rbp-16F8h]
  const Json::Value *collider_check_on_init_ptr; // [rsp+100h] [rbp-16F0h]
  const Json::Value *check_on_reconnect_ptr; // [rsp+108h] [rbp-16E8h]
  const Json::Value *collider_white_list_ptr; // [rsp+110h] [rbp-16E0h]
  const Json::Value *collider_black_list_ptr; // [rsp+118h] [rbp-16D8h]
  const Json::Value *use_level_override_ptr; // [rsp+120h] [rbp-16D0h]
  const Json::Value *raw_shape_ptr; // [rsp+128h] [rbp-16C8h]
  const Json::Value *use_local_trigger_logic_ptr; // [rsp+130h] [rbp-16C0h]
  const Json::Value *local_trigger_meta_ptr; // [rsp+138h] [rbp-16B8h]
  char v54[5808]; // [rsp+140h] [rbp-16B0h] BYREF

  v2 = (unsigned __int64)v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_7(5760LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "119 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 "
                        "9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 <unk"
                        "nown> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 288 1 9 <unknown> "
                        "304 1 9 <unknown> 320 1 9 <unknown> 336 1 9 <unknown> 352 1 9 <unknown> 368 1 9 <unknown> 384 1 "
                        "9 <unknown> 400 1 9 <unknown> 416 1 9 <unknown> 432 1 9 <unknown> 448 1 9 <unknown> 464 1 9 <unk"
                        "nown> 480 1 9 <unknown> 496 1 9 <unknown> 512 1 9 <unknown> 528 1 9 <unknown> 544 1 9 <unknown> "
                        "560 1 9 <unknown> 576 1 9 <unknown> 592 1 9 <unknown> 608 1 9 <unknown> 624 1 9 <unknown> 640 16"
                        " 9 <unknown> 672 16 9 <unknown> 704 16 9 <unknown> 736 16 9 <unknown> 768 32 9 <unknown> 832 32 "
                        "9 <unknown> 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 <unknown> 1152 3"
                        "2 9 <unknown> 1216 32 9 <unknown> 1280 32 9 <unknown> 1344 32 9 <unknown> 1408 32 9 <unknown> 14"
                        "72 32 9 <unknown> 1536 32 9 <unknown> 1600 32 9 <unknown> 1664 32 9 <unknown> 1728 32 9 <unknown"
                        "> 1792 32 9 <unknown> 1856 32 9 <unknown> 1920 32 9 <unknown> 1984 32 9 <unknown> 2048 32 9 <unk"
                        "nown> 2112 32 9 <unknown> 2176 32 9 <unknown> 2240 32 9 <unknown> 2304 32 9 <unknown> 2368 32 9 "
                        "<unknown> 2432 32 9 <unknown> 2496 32 9 <unknown> 2560 32 9 <unknown> 2624 32 9 <unknown> 2688 3"
                        "2 9 <unknown> 2752 32 9 <unknown> 2816 32 9 <unknown> 2880 32 9 <unknown> 2944 32 9 <unknown> 30"
                        "08 32 9 <unknown> 3072 32 9 <unknown> 3136 32 9 <unknown> 3200 32 9 <unknown> 3264 32 9 <unknown"
                        "> 3328 32 9 <unknown> 3392 32 9 <unknown> 3456 32 9 <unknown> 3520 32 9 <unknown> 3584 32 9 <unk"
                        "nown> 3648 32 9 <unknown> 3712 32 9 <unknown> 3776 32 9 <unknown> 3840 32 9 <unknown> 3904 32 9 "
                        "<unknown> 3968 32 9 <unknown> 4032 32 9 <unknown> 4096 32 9 <unknown> 4160 32 9 <unknown> 4224 3"
                        "2 9 <unknown> 4288 32 9 <unknown> 4352 32 9 <unknown> 4416 32 9 <unknown> 4480 32 9 <unknown> 45"
                        "44 32 9 <unknown> 4608 32 9 <unknown> 4672 32 9 <unknown> 4736 32 9 <unknown> 4800 32 9 <unknown"
                        "> 4864 32 9 <unknown> 4928 32 9 <unknown> 4992 32 9 <unknown> 5056 32 9 <unknown> 5120 32 9 <unk"
                        "nown> 5184 32 9 <unknown> 5248 32 9 <unknown> 5312 32 9 <unknown> 5376 32 9 <unknown> 5440 32 9 "
                        "<unknown> 5504 32 9 <unknown> 5568 32 9 <unknown> 5632 32 9 <unknown> 5696 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigTrigger::fromJson;
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
  v4[536862740] = -219021312;
  v4[536862741] = -219021312;
  v4[536862742] = -219021312;
  v4[536862743] = -219021312;
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
  v4[536862845] = -218959118;
  v4[536862847] = -218959118;
  v4[536862849] = -218959118;
  v4[536862851] = -218959118;
  v4[536862853] = -218959118;
  v4[536862855] = -218959118;
  v4[536862857] = -218959118;
  v4[536862859] = -218959118;
  v4[536862861] = -218959118;
  v4[536862863] = -218959118;
  v4[536862865] = -218959118;
  v4[536862867] = -218959118;
  v4[536862869] = -218959118;
  v4[536862871] = -218959118;
  v4[536862873] = -218959118;
  v4[536862875] = -218959118;
  v4[536862877] = -218959118;
  v4[536862879] = -218959118;
  v4[536862881] = -218959118;
  v4[536862883] = -218959118;
  v4[536862885] = -218959118;
  v4[536862887] = -218959118;
  v4[536862889] = -218959118;
  v4[536862891] = -218959118;
  v4[536862893] = -218959118;
  v4[536862895] = -218959118;
  v4[536862897] = -218959118;
  v4[536862899] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 768),
    "triggerType",
    (const std::allocator<char> *)(v2 + 48));
  trigger_type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 768));
  std::string::~string((void *)(v2 + 768));
  *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( !trigger_type_ptr )
    goto LABEL_11;
  *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v2 + 832) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 863) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 863) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 832, 32LL);
  }
  Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 832), (Json::Value_0 *)trigger_type_ptr);
  v5 = !data::enumStrToVal((const std::string *)(v2 + 832), &this->trigger_type);
  std::string::~string((void *)(v2 + 832));
  *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -117901064;
  if ( v5 )
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
      3u,
      "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
      "fromJson",
      500);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      (common::milog::MiLogStream *const)(v2 + 896),
      (const char (*)[33])"fromJson for: triggerType fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 896));
    v6 = 0;
  }
  else
  {
LABEL_11:
    *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 960),
      "triggerFlag",
      (const std::allocator<char> *)(v2 + 64));
    trigger_flag_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 960));
    std::string::~string((void *)(v2 + 960));
    *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( !trigger_flag_ptr )
      goto LABEL_18;
    *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 1024) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 1055) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 1055) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 1024, 32LL);
    }
    Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 1024), (Json::Value_0 *)trigger_flag_ptr);
    v7 = !data::enumStrToVal((const std::string *)(v2 + 1024), &this->trigger_flag);
    std::string::~string((void *)(v2 + 1024));
    *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -117901064;
    if ( v7 )
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
        3u,
        "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
        "fromJson",
        512);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        (common::milog::MiLogStream *const)(v2 + 1088),
        (const char (*)[33])"fromJson for: triggerFlag fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1088));
      v6 = 0;
    }
    else
    {
LABEL_18:
      *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 1152),
        "concernType",
        (const std::allocator<char> *)(v2 + 80));
      concern_type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 1152));
      std::string::~string((void *)(v2 + 1152));
      *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( !concern_type_ptr )
        goto LABEL_25;
      *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 1216) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 1247) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 1247) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 1216, 32LL);
      }
      Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 1216), (Json::Value_0 *)concern_type_ptr);
      v8 = !data::enumStrToVal((const std::string *)(v2 + 1216), &this->concern_type);
      std::string::~string((void *)(v2 + 1216));
      *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = -117901064;
      if ( v8 )
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
          3u,
          "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
          "fromJson",
          524);
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
          (common::milog::MiLogStream *const)(v2 + 1280),
          (const char (*)[33])"fromJson for: concernType fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1280));
        v6 = 0;
      }
      else
      {
LABEL_25:
        *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 1344),
          "shape",
          (const std::allocator<char> *)(v2 + 96));
        shape_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1344));
        std::string::~string((void *)(v2 + 1344));
        *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( shape_ptr && !fromJson<std::string>(shape_ptr, &this->shape) )
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
            3u,
            "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
            "fromJson",
            536);
          common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            (common::milog::MiLogStream *const)(v2 + 1408),
            (const char (*)[27])"fromJson for: shape fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1408));
          v6 = 0;
        }
        else
        {
          *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 112);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1472),
            "ignoreScale",
            (const std::allocator<char> *)(v2 + 112));
          ignore_scale_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1472));
          std::string::~string((void *)(v2 + 1472));
          *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( ignore_scale_ptr && !fromJson<bool>(ignore_scale_ptr, &this->ignore_scale) )
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
              3u,
              "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
              "fromJson",
              548);
            common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              (common::milog::MiLogStream *const)(v2 + 1536),
              (const char (*)[33])"fromJson for: ignoreScale fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1536));
            v6 = 0;
          }
          else
          {
            *(_DWORD *)(((v2 + 1600) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 128);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1600),
              "offset",
              (const std::allocator<char> *)(v2 + 128));
            offset_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1600));
            std::string::~string((void *)(v2 + 1600));
            *(_DWORD *)(((v2 + 1600) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 128);
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
            if ( offset_ptr && !data::Vector::fromJson(&this->offset, offset_ptr) )
            {
              *(_DWORD *)(((v2 + 1664) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 1664) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 1695) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 1695) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 1664, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 1664),
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
                "fromJson",
                560);
              common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)(v2 + 1664),
                (const char (*)[28])"fromJson for: offset fails!");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1664));
              v6 = 0;
            }
            else
            {
              *(_DWORD *)(((v2 + 1728) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 144);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1728),
                "eularOffset",
                (const std::allocator<char> *)(v2 + 144));
              eular_offset_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1728));
              std::string::~string((void *)(v2 + 1728));
              *(_DWORD *)(((v2 + 1728) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 144);
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
              if ( eular_offset_ptr && !data::Vector::fromJson(&this->eular_offset, eular_offset_ptr) )
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
                  3u,
                  "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
                  "fromJson",
                  572);
                common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                  (common::milog::MiLogStream *const)(v2 + 1792),
                  (const char (*)[33])"fromJson for: eularOffset fails!");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1792));
                v6 = 0;
              }
              else
              {
                *(_DWORD *)(((v2 + 1856) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 160);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1856),
                  "height",
                  (const std::allocator<char> *)(v2 + 160));
                height_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1856));
                std::string::~string((void *)(v2 + 1856));
                *(_DWORD *)(((v2 + 1856) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 160);
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                if ( height_ptr && !fromJson<float>(height_ptr, &this->height) )
                {
                  *(_DWORD *)(((v2 + 1920) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 1920) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 1951) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 1951) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 1920, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 1920),
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
                    "fromJson",
                    584);
                  common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                    (common::milog::MiLogStream *const)(v2 + 1920),
                    (const char (*)[28])"fromJson for: height fails!");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1920));
                  v6 = 0;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1984) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 176);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1984),
                    "fromShape",
                    (const std::allocator<char> *)(v2 + 176));
                  from_shape_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1984));
                  std::string::~string((void *)(v2 + 1984));
                  *(_DWORD *)(((v2 + 1984) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 176);
                  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                  if ( from_shape_ptr && !fromJson<std::string>(from_shape_ptr, &this->from_shape) )
                  {
                    *(_DWORD *)(((v2 + 2048) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 2048) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 2079) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 2079) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 2048, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 2048),
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
                      "fromJson",
                      596);
                    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                      (common::milog::MiLogStream *const)(v2 + 2048),
                      (const char (*)[31])"fromJson for: fromShape fails!");
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2048));
                    v6 = 0;
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 2112) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 192);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 2112),
                      "fromOffset",
                      (const std::allocator<char> *)(v2 + 192));
                    from_offset_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2112));
                    std::string::~string((void *)(v2 + 2112));
                    *(_DWORD *)(((v2 + 2112) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 192);
                    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                    if ( from_offset_ptr && !data::Vector::fromJson(&this->from_offset, from_offset_ptr) )
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
                        3u,
                        "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
                        "fromJson",
                        608);
                      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                        (common::milog::MiLogStream *const)(v2 + 2176),
                        (const char (*)[32])"fromJson for: fromOffset fails!");
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2176));
                      v6 = 0;
                    }
                    else
                    {
                      *(_DWORD *)(((v2 + 2240) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 208);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 2240),
                        "fromEularOffset",
                        (const std::allocator<char> *)(v2 + 208));
                      from_eular_offset_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2240));
                      std::string::~string((void *)(v2 + 2240));
                      *(_DWORD *)(((v2 + 2240) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 208);
                      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                      if ( from_eular_offset_ptr
                        && !data::Vector::fromJson(&this->from_eular_offset, from_eular_offset_ptr) )
                      {
                        *(_DWORD *)(((v2 + 2304) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v2 + 2304) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v2 + 2335) >> 3) + 0x7FFF8000) != 0
                          && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 2335) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v2 + 2304, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v2 + 2304),
                          &common::milog::MiLogDefault::default_log_obj_,
                          3u,
                          "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
                          "fromJson",
                          620);
                        common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                          (common::milog::MiLogStream *const)(v2 + 2304),
                          (const char (*)[37])"fromJson for: fromEularOffset fails!");
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2304));
                        v6 = 0;
                      }
                      else
                      {
                        *(_DWORD *)(((v2 + 2368) >> 3) + 0x7FFF8000) = 0;
                        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 224);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 2368),
                          "fromHeight",
                          (const std::allocator<char> *)(v2 + 224));
                        from_height_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2368));
                        std::string::~string((void *)(v2 + 2368));
                        *(_DWORD *)(((v2 + 2368) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 224);
                        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                        if ( from_height_ptr && !fromJson<float>(from_height_ptr, &this->from_height) )
                        {
                          *(_DWORD *)(((v2 + 2432) >> 3) + 0x7FFF8000) = 0;
                          if ( *(char *)(((v2 + 2432) >> 3) + 0x7FFF8000) < 0
                            || *(_BYTE *)(((v2 + 2463) >> 3) + 0x7FFF8000) != 0
                            && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 2463) >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_store_n(v2 + 2432, 32LL);
                          }
                          common::milog::MiLogStream::create(
                            (common::milog::MiLogStream *)(v2 + 2432),
                            &common::milog::MiLogDefault::default_log_obj_,
                            3u,
                            "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
                            "fromJson",
                            632);
                          common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                            (common::milog::MiLogStream *const)(v2 + 2432),
                            (const char (*)[32])"fromJson for: fromHeight fails!");
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2432));
                          v6 = 0;
                        }
                        else
                        {
                          *(_DWORD *)(((v2 + 2496) >> 3) + 0x7FFF8000) = 0;
                          *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
                          std::allocator<char>::allocator(v2 + 240);
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)(v2 + 2496),
                            "checkInfinite",
                            (const std::allocator<char> *)(v2 + 240));
                          check_infinite_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2496));
                          std::string::~string((void *)(v2 + 2496));
                          *(_DWORD *)(((v2 + 2496) >> 3) + 0x7FFF8000) = -117901064;
                          std::allocator<char>::~allocator(v2 + 240);
                          *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                          if ( check_infinite_ptr && !fromJson<bool>(check_infinite_ptr, &this->check_infinite) )
                          {
                            *(_DWORD *)(((v2 + 2560) >> 3) + 0x7FFF8000) = 0;
                            if ( *(char *)(((v2 + 2560) >> 3) + 0x7FFF8000) < 0
                              || *(_BYTE *)(((v2 + 2591) >> 3) + 0x7FFF8000) != 0
                              && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 2591) >> 3) + 0x7FFF8000) )
                            {
                              __asan_report_store_n(v2 + 2560, 32LL);
                            }
                            common::milog::MiLogStream::create(
                              (common::milog::MiLogStream *)(v2 + 2560),
                              &common::milog::MiLogDefault::default_log_obj_,
                              3u,
                              "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
                              "fromJson",
                              644);
                            common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                              (common::milog::MiLogStream *const)(v2 + 2560),
                              (const char (*)[35])"fromJson for: checkInfinite fails!");
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2560));
                            v6 = 0;
                          }
                          else
                          {
                            *(_DWORD *)(((v2 + 2624) >> 3) + 0x7FFF8000) = 0;
                            *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
                            std::allocator<char>::allocator(v2 + 256);
                            std::string::basic_string<std::allocator<char>>(
                              (std::string *const)(v2 + 2624),
                              "triggerInfinite",
                              (const std::allocator<char> *)(v2 + 256));
                            trigger_infinite_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2624));
                            std::string::~string((void *)(v2 + 2624));
                            *(_DWORD *)(((v2 + 2624) >> 3) + 0x7FFF8000) = -117901064;
                            std::allocator<char>::~allocator(v2 + 256);
                            *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                            if ( trigger_infinite_ptr && !fromJson<bool>(trigger_infinite_ptr, &this->trigger_infinite) )
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
                                3u,
                                "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
                                "fromJson",
                                656);
                              common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                                (common::milog::MiLogStream *const)(v2 + 2688),
                                (const char (*)[37])"fromJson for: triggerInfinite fails!");
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2688));
                              v6 = 0;
                            }
                            else
                            {
                              *(_DWORD *)(((v2 + 2752) >> 3) + 0x7FFF8000) = 0;
                              *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
                              std::allocator<char>::allocator(v2 + 272);
                              std::string::basic_string<std::allocator<char>>(
                                (std::string *const)(v2 + 2752),
                                "lifeInfinite",
                                (const std::allocator<char> *)(v2 + 272));
                              life_infinite_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2752));
                              std::string::~string((void *)(v2 + 2752));
                              *(_DWORD *)(((v2 + 2752) >> 3) + 0x7FFF8000) = -117901064;
                              std::allocator<char>::~allocator(v2 + 272);
                              *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                              if ( life_infinite_ptr && !fromJson<bool>(life_infinite_ptr, &this->life_infinite) )
                              {
                                *(_DWORD *)(((v2 + 2816) >> 3) + 0x7FFF8000) = 0;
                                if ( *(char *)(((v2 + 2816) >> 3) + 0x7FFF8000) < 0
                                  || *(_BYTE *)(((v2 + 2847) >> 3) + 0x7FFF8000) != 0
                                  && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 2847) >> 3) + 0x7FFF8000) )
                                {
                                  __asan_report_store_n(v2 + 2816, 32LL);
                                }
                                common::milog::MiLogStream::create(
                                  (common::milog::MiLogStream *)(v2 + 2816),
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  3u,
                                  "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
                                  "fromJson",
                                  668);
                                common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                                  (common::milog::MiLogStream *const)(v2 + 2816),
                                  (const char (*)[34])"fromJson for: lifeInfinite fails!");
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2816));
                                v6 = 0;
                              }
                              else
                              {
                                *(_DWORD *)(((v2 + 2880) >> 3) + 0x7FFF8000) = 0;
                                *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 1;
                                std::allocator<char>::allocator(v2 + 288);
                                std::string::basic_string<std::allocator<char>>(
                                  (std::string *const)(v2 + 2880),
                                  "startCheckTime",
                                  (const std::allocator<char> *)(v2 + 288));
                                start_check_time_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2880));
                                std::string::~string((void *)(v2 + 2880));
                                *(_DWORD *)(((v2 + 2880) >> 3) + 0x7FFF8000) = -117901064;
                                std::allocator<char>::~allocator(v2 + 288);
                                *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
                                if ( start_check_time_ptr
                                  && !fromJson<float>(start_check_time_ptr, &this->start_check_time) )
                                {
                                  *(_DWORD *)(((v2 + 2944) >> 3) + 0x7FFF8000) = 0;
                                  if ( *(char *)(((v2 + 2944) >> 3) + 0x7FFF8000) < 0
                                    || *(_BYTE *)(((v2 + 2975) >> 3) + 0x7FFF8000) != 0
                                    && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 2975) >> 3) + 0x7FFF8000) )
                                  {
                                    __asan_report_store_n(v2 + 2944, 32LL);
                                  }
                                  common::milog::MiLogStream::create(
                                    (common::milog::MiLogStream *)(v2 + 2944),
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    3u,
                                    "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
                                    "fromJson",
                                    680);
                                  common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                                    (common::milog::MiLogStream *const)(v2 + 2944),
                                    (const char (*)[36])"fromJson for: startCheckTime fails!");
                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2944));
                                  v6 = 0;
                                }
                                else
                                {
                                  *(_DWORD *)(((v2 + 3008) >> 3) + 0x7FFF8000) = 0;
                                  *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 1;
                                  std::allocator<char>::allocator(v2 + 304);
                                  std::string::basic_string<std::allocator<char>>(
                                    (std::string *const)(v2 + 3008),
                                    "checkInterval",
                                    (const std::allocator<char> *)(v2 + 304));
                                  check_interval_ptr = jsonValueFind(jval, (const std::string *)(v2 + 3008));
                                  std::string::~string((void *)(v2 + 3008));
                                  *(_DWORD *)(((v2 + 3008) >> 3) + 0x7FFF8000) = -117901064;
                                  std::allocator<char>::~allocator(v2 + 304);
                                  *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
                                  if ( check_interval_ptr && !fromJson<float>(check_interval_ptr, &this->check_interval) )
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
                                      3u,
                                      "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
                                      "fromJson",
                                      692);
                                    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                                      (common::milog::MiLogStream *const)(v2 + 3072),
                                      (const char (*)[35])"fromJson for: checkInterval fails!");
                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3072));
                                    v6 = 0;
                                  }
                                  else
                                  {
                                    *(_DWORD *)(((v2 + 3136) >> 3) + 0x7FFF8000) = 0;
                                    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 1;
                                    std::allocator<char>::allocator(v2 + 320);
                                    std::string::basic_string<std::allocator<char>>(
                                      (std::string *const)(v2 + 3136),
                                      "checkCount",
                                      (const std::allocator<char> *)(v2 + 320));
                                    check_count_ptr = jsonValueFind(jval, (const std::string *)(v2 + 3136));
                                    std::string::~string((void *)(v2 + 3136));
                                    *(_DWORD *)(((v2 + 3136) >> 3) + 0x7FFF8000) = -117901064;
                                    std::allocator<char>::~allocator(v2 + 320);
                                    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
                                    if ( check_count_ptr && !fromJson<int>(check_count_ptr, &this->check_count) )
                                    {
                                      *(_DWORD *)(((v2 + 3200) >> 3) + 0x7FFF8000) = 0;
                                      if ( *(char *)(((v2 + 3200) >> 3) + 0x7FFF8000) < 0
                                        || *(_BYTE *)(((v2 + 3231) >> 3) + 0x7FFF8000) != 0
                                        && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 3231) >> 3) + 0x7FFF8000) )
                                      {
                                        __asan_report_store_n(v2 + 3200, 32LL);
                                      }
                                      common::milog::MiLogStream::create(
                                        (common::milog::MiLogStream *)(v2 + 3200),
                                        &common::milog::MiLogDefault::default_log_obj_,
                                        3u,
                                        "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
                                        "fromJson",
                                        704);
                                      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                                        (common::milog::MiLogStream *const)(v2 + 3200),
                                        (const char (*)[32])"fromJson for: checkCount fails!");
                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3200));
                                      v6 = 0;
                                    }
                                    else
                                    {
                                      *(_DWORD *)(((v2 + 3264) >> 3) + 0x7FFF8000) = 0;
                                      *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 1;
                                      std::allocator<char>::allocator(v2 + 336);
                                      std::string::basic_string<std::allocator<char>>(
                                        (std::string *const)(v2 + 3264),
                                        "triggerInterval",
                                        (const std::allocator<char> *)(v2 + 336));
                                      trigger_interval_ptr = jsonValueFind(jval, (const std::string *)(v2 + 3264));
                                      std::string::~string((void *)(v2 + 3264));
                                      *(_DWORD *)(((v2 + 3264) >> 3) + 0x7FFF8000) = -117901064;
                                      std::allocator<char>::~allocator(v2 + 336);
                                      *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
                                      if ( trigger_interval_ptr
                                        && !fromJson<float>(trigger_interval_ptr, &this->trigger_interval) )
                                      {
                                        *(_DWORD *)(((v2 + 3328) >> 3) + 0x7FFF8000) = 0;
                                        if ( *(char *)(((v2 + 3328) >> 3) + 0x7FFF8000) < 0
                                          || *(_BYTE *)(((v2 + 3359) >> 3) + 0x7FFF8000) != 0
                                          && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 3359) >> 3) + 0x7FFF8000) )
                                        {
                                          __asan_report_store_n(v2 + 3328, 32LL);
                                        }
                                        common::milog::MiLogStream::create(
                                          (common::milog::MiLogStream *)(v2 + 3328),
                                          &common::milog::MiLogDefault::default_log_obj_,
                                          3u,
                                          "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
                                          "fromJson",
                                          716);
                                        common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                                          (common::milog::MiLogStream *const)(v2 + 3328),
                                          (const char (*)[37])"fromJson for: triggerInterval fails!");
                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3328));
                                        v6 = 0;
                                      }
                                      else
                                      {
                                        *(_DWORD *)(((v2 + 3392) >> 3) + 0x7FFF8000) = 0;
                                        *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 1;
                                        std::allocator<char>::allocator(v2 + 352);
                                        std::string::basic_string<std::allocator<char>>(
                                          (std::string *const)(v2 + 3392),
                                          "triggerCount",
                                          (const std::allocator<char> *)(v2 + 352));
                                        trigger_count_ptr = jsonValueFind(jval, (const std::string *)(v2 + 3392));
                                        std::string::~string((void *)(v2 + 3392));
                                        *(_DWORD *)(((v2 + 3392) >> 3) + 0x7FFF8000) = -117901064;
                                        std::allocator<char>::~allocator(v2 + 352);
                                        *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
                                        if ( trigger_count_ptr
                                          && !fromJson<int>(trigger_count_ptr, &this->trigger_count) )
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
                                            3u,
                                            "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
                                            "fromJson",
                                            728);
                                          common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                                            (common::milog::MiLogStream *const)(v2 + 3456),
                                            (const char (*)[34])"fromJson for: triggerCount fails!");
                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3456));
                                          v6 = 0;
                                        }
                                        else
                                        {
                                          *(_DWORD *)(((v2 + 3520) >> 3) + 0x7FFF8000) = 0;
                                          *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = 1;
                                          std::allocator<char>::allocator(v2 + 368);
                                          std::string::basic_string<std::allocator<char>>(
                                            (std::string *const)(v2 + 3520),
                                            "lifeTime",
                                            (const std::allocator<char> *)(v2 + 368));
                                          life_time_ptr = jsonValueFind(jval, (const std::string *)(v2 + 3520));
                                          std::string::~string((void *)(v2 + 3520));
                                          *(_DWORD *)(((v2 + 3520) >> 3) + 0x7FFF8000) = -117901064;
                                          std::allocator<char>::~allocator(v2 + 368);
                                          *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
                                          if ( life_time_ptr && !fromJson<float>(life_time_ptr, &this->life_time) )
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
                                              3u,
                                              "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
                                              "fromJson",
                                              740);
                                            common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                                              (common::milog::MiLogStream *const)(v2 + 3584),
                                              (const char (*)[30])"fromJson for: lifeTime fails!");
                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3584));
                                            v6 = 0;
                                          }
                                          else
                                          {
                                            *(_DWORD *)(((v2 + 3648) >> 3) + 0x7FFF8000) = 0;
                                            *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 1;
                                            std::allocator<char>::allocator(v2 + 384);
                                            std::string::basic_string<std::allocator<char>>(
                                              (std::string *const)(v2 + 3648),
                                              "overwriteCampType",
                                              (const std::allocator<char> *)(v2 + 384));
                                            overwrite_camp_type_ptr = jsonValueFind(
                                                                        jval,
                                                                        (const std::string *)(v2 + 3648));
                                            std::string::~string((void *)(v2 + 3648));
                                            *(_DWORD *)(((v2 + 3648) >> 3) + 0x7FFF8000) = -117901064;
                                            std::allocator<char>::~allocator(v2 + 384);
                                            *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
                                            if ( overwrite_camp_type_ptr
                                              && !fromJson<bool>(overwrite_camp_type_ptr, &this->overwrite_camp_type) )
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
                                                3u,
                                                "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
                                                "fromJson",
                                                752);
                                              common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                                (common::milog::MiLogStream *const)(v2 + 3712),
                                                (const char (*)[39])"fromJson for: overwriteCampType fails!");
                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3712));
                                              v6 = 0;
                                            }
                                            else
                                            {
                                              *(_DWORD *)(((v2 + 3776) >> 3) + 0x7FFF8000) = 0;
                                              *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = 1;
                                              std::allocator<char>::allocator(v2 + 400);
                                              std::string::basic_string<std::allocator<char>>(
                                                (std::string *const)(v2 + 3776),
                                                "campType",
                                                (const std::allocator<char> *)(v2 + 400));
                                              camp_type_ptr = (Json::Value *)jsonValueFind(
                                                                               jval,
                                                                               (const std::string *)(v2 + 3776));
                                              std::string::~string((void *)(v2 + 3776));
                                              *(_DWORD *)(((v2 + 3776) >> 3) + 0x7FFF8000) = -117901064;
                                              std::allocator<char>::~allocator(v2 + 400);
                                              *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
                                              if ( !camp_type_ptr )
                                                goto LABEL_127;
                                              *(_DWORD *)(((v2 + 3840) >> 3) + 0x7FFF8000) = 0;
                                              if ( *(char *)(((v2 + 3840) >> 3) + 0x7FFF8000) < 0
                                                || *(_BYTE *)(((v2 + 3871) >> 3) + 0x7FFF8000) != 0
                                                && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 3871) >> 3) + 0x7FFF8000) )
                                              {
                                                __asan_report_store_n(v2 + 3840, 32LL);
                                              }
                                              Json::Value::asString[abi:cxx11](
                                                (Json::String *)(v2 + 3840),
                                                (Json::Value_0 *)camp_type_ptr);
                                              v9 = !data::enumStrToVal(
                                                      (const std::string *)(v2 + 3840),
                                                      &this->camp_type);
                                              std::string::~string((void *)(v2 + 3840));
                                              *(_DWORD *)(((v2 + 3840) >> 3) + 0x7FFF8000) = -117901064;
                                              if ( v9 )
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
                                                  3u,
                                                  "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
                                                  "fromJson",
                                                  764);
                                                common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                                                  (common::milog::MiLogStream *const)(v2 + 3904),
                                                  (const char (*)[30])"fromJson for: campType fails!");
                                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3904));
                                                v6 = 0;
                                              }
                                              else
                                              {
LABEL_127:
                                                *(_DWORD *)(((v2 + 3968) >> 3) + 0x7FFF8000) = 0;
                                                *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = 1;
                                                std::allocator<char>::allocator(v2 + 416);
                                                std::string::basic_string<std::allocator<char>>(
                                                  (std::string *const)(v2 + 3968),
                                                  "checkPoint",
                                                  (const std::allocator<char> *)(v2 + 416));
                                                check_point_ptr = jsonValueFind(jval, (const std::string *)(v2 + 3968));
                                                std::string::~string((void *)(v2 + 3968));
                                                *(_DWORD *)(((v2 + 3968) >> 3) + 0x7FFF8000) = -117901064;
                                                std::allocator<char>::~allocator(v2 + 416);
                                                *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
                                                if ( check_point_ptr
                                                  && !fromJson<bool>(check_point_ptr, &this->check_point) )
                                                {
                                                  *(_DWORD *)(((v2 + 4032) >> 3) + 0x7FFF8000) = 0;
                                                  if ( *(char *)(((v2 + 4032) >> 3) + 0x7FFF8000) < 0
                                                    || *(_BYTE *)(((v2 + 4063) >> 3) + 0x7FFF8000) != 0
                                                    && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 4063) >> 3)
                                                                                         + 0x7FFF8000) )
                                                  {
                                                    __asan_report_store_n(v2 + 4032, 32LL);
                                                  }
                                                  common::milog::MiLogStream::create(
                                                    (common::milog::MiLogStream *)(v2 + 4032),
                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                    3u,
                                                    "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
                                                    "fromJson",
                                                    776);
                                                  common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                                                    (common::milog::MiLogStream *const)(v2 + 4032),
                                                    (const char (*)[32])"fromJson for: checkPoint fails!");
                                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4032));
                                                  v6 = 0;
                                                }
                                                else
                                                {
                                                  *(_DWORD *)(((v2 + 4096) >> 3) + 0x7FFF8000) = 0;
                                                  *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = 1;
                                                  std::allocator<char>::allocator(v2 + 432);
                                                  std::string::basic_string<std::allocator<char>>(
                                                    (std::string *const)(v2 + 4096),
                                                    "useSurfaceHeight",
                                                    (const std::allocator<char> *)(v2 + 432));
                                                  use_surface_height_ptr = jsonValueFind(
                                                                             jval,
                                                                             (const std::string *)(v2 + 4096));
                                                  std::string::~string((void *)(v2 + 4096));
                                                  *(_DWORD *)(((v2 + 4096) >> 3) + 0x7FFF8000) = -117901064;
                                                  std::allocator<char>::~allocator(v2 + 432);
                                                  *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = -8;
                                                  if ( use_surface_height_ptr
                                                    && !fromJson<bool>(
                                                          use_surface_height_ptr,
                                                          &this->use_surface_height) )
                                                  {
                                                    *(_DWORD *)(((v2 + 4160) >> 3) + 0x7FFF8000) = 0;
                                                    if ( *(char *)(((v2 + 4160) >> 3) + 0x7FFF8000) < 0
                                                      || *(_BYTE *)(((v2 + 4191) >> 3) + 0x7FFF8000) != 0
                                                      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 4191) >> 3)
                                                                                           + 0x7FFF8000) )
                                                    {
                                                      __asan_report_store_n(v2 + 4160, 32LL);
                                                    }
                                                    common::milog::MiLogStream::create(
                                                      (common::milog::MiLogStream *)(v2 + 4160),
                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                      3u,
                                                      "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
                                                      "fromJson",
                                                      788);
                                                    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                                                      (common::milog::MiLogStream *const)(v2 + 4160),
                                                      (const char (*)[38])"fromJson for: useSurfaceHeight fails!");
                                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4160));
                                                    v6 = 0;
                                                  }
                                                  else
                                                  {
                                                    *(_DWORD *)(((v2 + 4224) >> 3) + 0x7FFF8000) = 0;
                                                    *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = 1;
                                                    std::allocator<char>::allocator(v2 + 448);
                                                    std::string::basic_string<std::allocator<char>>(
                                                      (std::string *const)(v2 + 4224),
                                                      "useCollider",
                                                      (const std::allocator<char> *)(v2 + 448));
                                                    use_collider_ptr = jsonValueFind(
                                                                         jval,
                                                                         (const std::string *)(v2 + 4224));
                                                    std::string::~string((void *)(v2 + 4224));
                                                    *(_DWORD *)(((v2 + 4224) >> 3) + 0x7FFF8000) = -117901064;
                                                    std::allocator<char>::~allocator(v2 + 448);
                                                    *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = -8;
                                                    if ( use_collider_ptr
                                                      && !fromJson<bool>(use_collider_ptr, &this->use_collider) )
                                                    {
                                                      *(_DWORD *)(((v2 + 4288) >> 3) + 0x7FFF8000) = 0;
                                                      if ( *(char *)(((v2 + 4288) >> 3) + 0x7FFF8000) < 0
                                                        || *(_BYTE *)(((v2 + 4319) >> 3) + 0x7FFF8000) != 0
                                                        && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 4319) >> 3)
                                                                                             + 0x7FFF8000) )
                                                      {
                                                        __asan_report_store_n(v2 + 4288, 32LL);
                                                      }
                                                      common::milog::MiLogStream::create(
                                                        (common::milog::MiLogStream *)(v2 + 4288),
                                                        &common::milog::MiLogDefault::default_log_obj_,
                                                        3u,
                                                        "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
                                                        "fromJson",
                                                        800);
                                                      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                                        (common::milog::MiLogStream *const)(v2 + 4288),
                                                        (const char (*)[33])"fromJson for: useCollider fails!");
                                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4288));
                                                      v6 = 0;
                                                    }
                                                    else
                                                    {
                                                      *(_DWORD *)(((v2 + 4352) >> 3) + 0x7FFF8000) = 0;
                                                      *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = 1;
                                                      std::allocator<char>::allocator(v2 + 464);
                                                      std::string::basic_string<std::allocator<char>>(
                                                        (std::string *const)(v2 + 4352),
                                                        "colliderName",
                                                        (const std::allocator<char> *)(v2 + 464));
                                                      collider_name_ptr = jsonValueFind(
                                                                            jval,
                                                                            (const std::string *)(v2 + 4352));
                                                      std::string::~string((void *)(v2 + 4352));
                                                      *(_DWORD *)(((v2 + 4352) >> 3) + 0x7FFF8000) = -117901064;
                                                      std::allocator<char>::~allocator(v2 + 464);
                                                      *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = -8;
                                                      if ( collider_name_ptr
                                                        && !fromJson<std::string>(
                                                              collider_name_ptr,
                                                              &this->collider_name) )
                                                      {
                                                        *(_DWORD *)(((v2 + 4416) >> 3) + 0x7FFF8000) = 0;
                                                        if ( *(char *)(((v2 + 4416) >> 3) + 0x7FFF8000) < 0
                                                          || *(_BYTE *)(((v2 + 4447) >> 3) + 0x7FFF8000) != 0
                                                          && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 4447) >> 3)
                                                                                               + 0x7FFF8000) )
                                                        {
                                                          __asan_report_store_n(v2 + 4416, 32LL);
                                                        }
                                                        common::milog::MiLogStream::create(
                                                          (common::milog::MiLogStream *)(v2 + 4416),
                                                          &common::milog::MiLogDefault::default_log_obj_,
                                                          3u,
                                                          "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
                                                          "fromJson",
                                                          812);
                                                        common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                                                          (common::milog::MiLogStream *const)(v2 + 4416),
                                                          (const char (*)[34])"fromJson for: colliderName fails!");
                                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4416));
                                                        v6 = 0;
                                                      }
                                                      else
                                                      {
                                                        *(_DWORD *)(((v2 + 4480) >> 3) + 0x7FFF8000) = 0;
                                                        *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = 1;
                                                        std::allocator<char>::allocator(v2 + 480);
                                                        std::string::basic_string<std::allocator<char>>(
                                                          (std::string *const)(v2 + 4480),
                                                          "fromColliderName",
                                                          (const std::allocator<char> *)(v2 + 480));
                                                        from_collider_name_ptr = jsonValueFind(
                                                                                   jval,
                                                                                   (const std::string *)(v2 + 4480));
                                                        std::string::~string((void *)(v2 + 4480));
                                                        *(_DWORD *)(((v2 + 4480) >> 3) + 0x7FFF8000) = -117901064;
                                                        std::allocator<char>::~allocator(v2 + 480);
                                                        *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = -8;
                                                        if ( from_collider_name_ptr
                                                          && !fromJson<std::string>(
                                                                from_collider_name_ptr,
                                                                &this->from_collider_name) )
                                                        {
                                                          *(_DWORD *)(((v2 + 4544) >> 3) + 0x7FFF8000) = 0;
                                                          if ( *(char *)(((v2 + 4544) >> 3) + 0x7FFF8000) < 0
                                                            || *(_BYTE *)(((v2 + 4575) >> 3) + 0x7FFF8000) != 0
                                                            && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 4575) >> 3)
                                                                                                 + 0x7FFF8000) )
                                                          {
                                                            __asan_report_store_n(v2 + 4544, 32LL);
                                                          }
                                                          common::milog::MiLogStream::create(
                                                            (common::milog::MiLogStream *)(v2 + 4544),
                                                            &common::milog::MiLogDefault::default_log_obj_,
                                                            3u,
                                                            "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
                                                            "fromJson",
                                                            824);
                                                          common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                                                            (common::milog::MiLogStream *const)(v2 + 4544),
                                                            (const char (*)[38])"fromJson for: fromColliderName fails!");
                                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4544));
                                                          v6 = 0;
                                                        }
                                                        else
                                                        {
                                                          *(_DWORD *)(((v2 + 4608) >> 3) + 0x7FFF8000) = 0;
                                                          *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = 1;
                                                          std::allocator<char>::allocator(v2 + 496);
                                                          std::string::basic_string<std::allocator<char>>(
                                                            (std::string *const)(v2 + 4608),
                                                            "checkGhost",
                                                            (const std::allocator<char> *)(v2 + 496));
                                                          check_ghost_ptr = jsonValueFind(
                                                                              jval,
                                                                              (const std::string *)(v2 + 4608));
                                                          std::string::~string((void *)(v2 + 4608));
                                                          *(_DWORD *)(((v2 + 4608) >> 3) + 0x7FFF8000) = -117901064;
                                                          std::allocator<char>::~allocator(v2 + 496);
                                                          *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = -8;
                                                          if ( check_ghost_ptr
                                                            && !fromJson<bool>(check_ghost_ptr, &this->check_ghost) )
                                                          {
                                                            *(_DWORD *)(((v2 + 4672) >> 3) + 0x7FFF8000) = 0;
                                                            if ( *(char *)(((v2 + 4672) >> 3) + 0x7FFF8000) < 0
                                                              || *(_BYTE *)(((v2 + 4703) >> 3) + 0x7FFF8000) != 0
                                                              && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 4703) >> 3) + 0x7FFF8000) )
                                                            {
                                                              __asan_report_store_n(v2 + 4672, 32LL);
                                                            }
                                                            common::milog::MiLogStream::create(
                                                              (common::milog::MiLogStream *)(v2 + 4672),
                                                              &common::milog::MiLogDefault::default_log_obj_,
                                                              3u,
                                                              "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
                                                              "fromJson",
                                                              836);
                                                            common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                                                              (common::milog::MiLogStream *const)(v2 + 4672),
                                                              (const char (*)[32])"fromJson for: checkGhost fails!");
                                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4672));
                                                            v6 = 0;
                                                          }
                                                          else
                                                          {
                                                            *(_DWORD *)(((v2 + 4736) >> 3) + 0x7FFF8000) = 0;
                                                            *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = 1;
                                                            std::allocator<char>::allocator(v2 + 512);
                                                            std::string::basic_string<std::allocator<char>>(
                                                              (std::string *const)(v2 + 4736),
                                                              "colliderCheckOnInit",
                                                              (const std::allocator<char> *)(v2 + 512));
                                                            collider_check_on_init_ptr = jsonValueFind(
                                                                                           jval,
                                                                                           (const std::string *)(v2 + 4736));
                                                            std::string::~string((void *)(v2 + 4736));
                                                            *(_DWORD *)(((v2 + 4736) >> 3) + 0x7FFF8000) = -117901064;
                                                            std::allocator<char>::~allocator(v2 + 512);
                                                            *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = -8;
                                                            if ( collider_check_on_init_ptr
                                                              && !fromJson<bool>(
                                                                    collider_check_on_init_ptr,
                                                                    &this->collider_check_on_init) )
                                                            {
                                                              *(_DWORD *)(((v2 + 4800) >> 3) + 0x7FFF8000) = 0;
                                                              if ( *(char *)(((v2 + 4800) >> 3) + 0x7FFF8000) < 0
                                                                || *(_BYTE *)(((v2 + 4831) >> 3) + 0x7FFF8000) != 0
                                                                && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 4831) >> 3) + 0x7FFF8000) )
                                                              {
                                                                __asan_report_store_n(v2 + 4800, 32LL);
                                                              }
                                                              common::milog::MiLogStream::create(
                                                                (common::milog::MiLogStream *)(v2 + 4800),
                                                                &common::milog::MiLogDefault::default_log_obj_,
                                                                3u,
                                                                "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
                                                                "fromJson",
                                                                848);
                                                              common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                                                                (common::milog::MiLogStream *const)(v2 + 4800),
                                                                (const char (*)[41])"fromJson for: colliderCheckOnInit fails!");
                                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4800));
                                                              v6 = 0;
                                                            }
                                                            else
                                                            {
                                                              *(_DWORD *)(((v2 + 4864) >> 3) + 0x7FFF8000) = 0;
                                                              *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = 1;
                                                              std::allocator<char>::allocator(v2 + 528);
                                                              std::string::basic_string<std::allocator<char>>(
                                                                (std::string *const)(v2 + 4864),
                                                                "checkOnReconnect",
                                                                (const std::allocator<char> *)(v2 + 528));
                                                              check_on_reconnect_ptr = jsonValueFind(
                                                                                         jval,
                                                                                         (const std::string *)(v2 + 4864));
                                                              std::string::~string((void *)(v2 + 4864));
                                                              *(_DWORD *)(((v2 + 4864) >> 3) + 0x7FFF8000) = -117901064;
                                                              std::allocator<char>::~allocator(v2 + 528);
                                                              *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = -8;
                                                              if ( check_on_reconnect_ptr
                                                                && !fromJson<bool>(
                                                                      check_on_reconnect_ptr,
                                                                      &this->check_on_reconnect) )
                                                              {
                                                                *(_DWORD *)(((v2 + 4928) >> 3) + 0x7FFF8000) = 0;
                                                                if ( *(char *)(((v2 + 4928) >> 3) + 0x7FFF8000) < 0
                                                                  || *(_BYTE *)(((v2 + 4959) >> 3) + 0x7FFF8000) != 0
                                                                  && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 4959) >> 3) + 0x7FFF8000) )
                                                                {
                                                                  __asan_report_store_n(v2 + 4928, 32LL);
                                                                }
                                                                common::milog::MiLogStream::create(
                                                                  (common::milog::MiLogStream *)(v2 + 4928),
                                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                                  3u,
                                                                  "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
                                                                  "fromJson",
                                                                  860);
                                                                common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                                                                  (common::milog::MiLogStream *const)(v2 + 4928),
                                                                  (const char (*)[38])"fromJson for: checkOnReconnect fails!");
                                                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4928));
                                                                v6 = 0;
                                                              }
                                                              else
                                                              {
                                                                *(_DWORD *)(((v2 + 4992) >> 3) + 0x7FFF8000) = 0;
                                                                *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = 1;
                                                                std::allocator<char>::allocator(v2 + 544);
                                                                std::string::basic_string<std::allocator<char>>(
                                                                  (std::string *const)(v2 + 4992),
                                                                  "colliderWhiteList",
                                                                  (const std::allocator<char> *)(v2 + 544));
                                                                collider_white_list_ptr = jsonValueFind(
                                                                                            jval,
                                                                                            (const std::string *)(v2 + 4992));
                                                                std::string::~string((void *)(v2 + 4992));
                                                                *(_DWORD *)(((v2 + 4992) >> 3) + 0x7FFF8000) = -117901064;
                                                                std::allocator<char>::~allocator(v2 + 544);
                                                                *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = -8;
                                                                if ( collider_white_list_ptr
                                                                  && !data::arrFromJson(
                                                                        collider_white_list_ptr,
                                                                        &this->collider_white_list) )
                                                                {
                                                                  *(_DWORD *)(((v2 + 5056) >> 3) + 0x7FFF8000) = 0;
                                                                  if ( *(char *)(((v2 + 5056) >> 3) + 0x7FFF8000) < 0
                                                                    || *(_BYTE *)(((v2 + 5087) >> 3) + 0x7FFF8000) != 0
                                                                    && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 5087) >> 3) + 0x7FFF8000) )
                                                                  {
                                                                    __asan_report_store_n(v2 + 5056, 32LL);
                                                                  }
                                                                  common::milog::MiLogStream::create(
                                                                    (common::milog::MiLogStream *)(v2 + 5056),
                                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                                    3u,
                                                                    "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
                                                                    "fromJson",
                                                                    872);
                                                                  common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                                                    (common::milog::MiLogStream *const)(v2 + 5056),
                                                                    (const char (*)[39])"fromJson for: colliderWhiteList fails!");
                                                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5056));
                                                                  v6 = 0;
                                                                }
                                                                else
                                                                {
                                                                  *(_DWORD *)(((v2 + 5120) >> 3) + 0x7FFF8000) = 0;
                                                                  *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = 1;
                                                                  std::allocator<char>::allocator(v2 + 560);
                                                                  std::string::basic_string<std::allocator<char>>(
                                                                    (std::string *const)(v2 + 5120),
                                                                    "colliderBlackList",
                                                                    (const std::allocator<char> *)(v2 + 560));
                                                                  collider_black_list_ptr = jsonValueFind(
                                                                                              jval,
                                                                                              (const std::string *)(v2 + 5120));
                                                                  std::string::~string((void *)(v2 + 5120));
                                                                  *(_DWORD *)(((v2 + 5120) >> 3) + 0x7FFF8000) = -117901064;
                                                                  std::allocator<char>::~allocator(v2 + 560);
                                                                  *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = -8;
                                                                  if ( collider_black_list_ptr
                                                                    && !data::arrFromJson(
                                                                          collider_black_list_ptr,
                                                                          &this->collider_black_list) )
                                                                  {
                                                                    *(_DWORD *)(((v2 + 5184) >> 3) + 0x7FFF8000) = 0;
                                                                    if ( *(char *)(((v2 + 5184) >> 3) + 0x7FFF8000) < 0
                                                                      || *(_BYTE *)(((v2 + 5215) >> 3) + 0x7FFF8000) != 0
                                                                      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 5215) >> 3) + 0x7FFF8000) )
                                                                    {
                                                                      __asan_report_store_n(v2 + 5184, 32LL);
                                                                    }
                                                                    common::milog::MiLogStream::create(
                                                                      (common::milog::MiLogStream *)(v2 + 5184),
                                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                                      3u,
                                                                      "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
                                                                      "fromJson",
                                                                      884);
                                                                    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                                                      (common::milog::MiLogStream *const)(v2 + 5184),
                                                                      (const char (*)[39])"fromJson for: colliderBlackList fails!");
                                                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5184));
                                                                    v6 = 0;
                                                                  }
                                                                  else
                                                                  {
                                                                    *(_DWORD *)(((v2 + 5248) >> 3) + 0x7FFF8000) = 0;
                                                                    *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) = 1;
                                                                    std::allocator<char>::allocator(v2 + 576);
                                                                    std::string::basic_string<std::allocator<char>>(
                                                                      (std::string *const)(v2 + 5248),
                                                                      "useLevelOverride",
                                                                      (const std::allocator<char> *)(v2 + 576));
                                                                    use_level_override_ptr = jsonValueFind(
                                                                                               jval,
                                                                                               (const std::string *)(v2 + 5248));
                                                                    std::string::~string((void *)(v2 + 5248));
                                                                    *(_DWORD *)(((v2 + 5248) >> 3) + 0x7FFF8000) = -117901064;
                                                                    std::allocator<char>::~allocator(v2 + 576);
                                                                    *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) = -8;
                                                                    if ( use_level_override_ptr
                                                                      && !fromJson<bool>(
                                                                            use_level_override_ptr,
                                                                            &this->use_level_override) )
                                                                    {
                                                                      *(_DWORD *)(((v2 + 5312) >> 3) + 0x7FFF8000) = 0;
                                                                      if ( *(char *)(((v2 + 5312) >> 3) + 0x7FFF8000) < 0
                                                                        || *(_BYTE *)(((v2 + 5343) >> 3) + 0x7FFF8000) != 0
                                                                        && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 5343) >> 3) + 0x7FFF8000) )
                                                                      {
                                                                        __asan_report_store_n(v2 + 5312, 32LL);
                                                                      }
                                                                      common::milog::MiLogStream::create(
                                                                        (common::milog::MiLogStream *)(v2 + 5312),
                                                                        &common::milog::MiLogDefault::default_log_obj_,
                                                                        3u,
                                                                        "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
                                                                        "fromJson",
                                                                        896);
                                                                      common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                                                                        (common::milog::MiLogStream *const)(v2 + 5312),
                                                                        (const char (*)[38])"fromJson for: useLevelOverride fails!");
                                                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5312));
                                                                      v6 = 0;
                                                                    }
                                                                    else
                                                                    {
                                                                      *(_DWORD *)(((v2 + 5376) >> 3) + 0x7FFF8000) = 0;
                                                                      *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) = 1;
                                                                      std::allocator<char>::allocator(v2 + 592);
                                                                      std::string::basic_string<std::allocator<char>>(
                                                                        (std::string *const)(v2 + 5376),
                                                                        "rawShape",
                                                                        (const std::allocator<char> *)(v2 + 592));
                                                                      raw_shape_ptr = jsonValueFind(
                                                                                        jval,
                                                                                        (const std::string *)(v2 + 5376));
                                                                      std::string::~string((void *)(v2 + 5376));
                                                                      *(_DWORD *)(((v2 + 5376) >> 3) + 0x7FFF8000) = -117901064;
                                                                      std::allocator<char>::~allocator(v2 + 592);
                                                                      *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) = -8;
                                                                      if ( raw_shape_ptr )
                                                                      {
                                                                        *(_WORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
                                                                        if ( *(_WORD *)(((v2 + 672) >> 3) + 0x7FFF8000) )
                                                                          __asan_report_store16();
                                                                        data::ConfigBaseShape::parseFromJson((const Json::Value *)(v2 + 672));
                                                                        v10 = std::shared_ptr<data::ConfigBaseShape>::operator=(
                                                                                &this->raw_shape,
                                                                                (std::shared_ptr<data::ConfigBaseShape> *)(v2 + 672));
                                                                        v11 = std::operator==<data::ConfigBaseShape>(
                                                                                v10,
                                                                                0LL);
                                                                        std::shared_ptr<data::ConfigBaseShape>::~shared_ptr((std::shared_ptr<data::ConfigBaseShape> *const)(v2 + 672));
                                                                        *(_WORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -1800;
                                                                        if ( v11 )
                                                                        {
                                                                          *(_DWORD *)(((v2 + 5440) >> 3) + 0x7FFF8000) = 0;
                                                                          if ( *(char *)(((v2 + 5440) >> 3) + 0x7FFF8000) < 0
                                                                            || *(_BYTE *)(((v2 + 5471) >> 3) + 0x7FFF8000) != 0
                                                                            && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 5471) >> 3) + 0x7FFF8000) )
                                                                          {
                                                                            __asan_report_store_n(v2 + 5440, 32LL);
                                                                          }
                                                                          common::milog::MiLogStream::create(
                                                                            (common::milog::MiLogStream *)(v2 + 5440),
                                                                            &common::milog::MiLogDefault::default_log_obj_,
                                                                            1u,
                                                                            "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
                                                                            "fromJson",
                                                                            910);
                                                                          common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                                                                            (common::milog::MiLogStream *const)(v2 + 5440),
                                                                            (const char (*)[30])"fromJson for: rawShape fails!");
                                                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5440));
                                                                          *(_DWORD *)(((v2 + 5440) >> 3) + 0x7FFF8000) = -117901064;
                                                                        }
                                                                      }
                                                                      else
                                                                      {
                                                                        *(_WORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
                                                                        if ( *(_WORD *)(((v2 + 640) >> 3) + 0x7FFF8000) )
                                                                          __asan_report_store16();
                                                                        common::tools::perf::make_shared<data::ConfigBaseShape>();
                                                                        std::shared_ptr<data::ConfigBaseShape>::operator=(
                                                                          &this->raw_shape,
                                                                          (std::shared_ptr<data::ConfigBaseShape> *)(v2 + 640));
                                                                        std::shared_ptr<data::ConfigBaseShape>::~shared_ptr((std::shared_ptr<data::ConfigBaseShape> *const)(v2 + 640));
                                                                        *(_WORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -1800;
                                                                      }
                                                                      *(_DWORD *)(((v2 + 5504) >> 3) + 0x7FFF8000) = 0;
                                                                      *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) = 1;
                                                                      std::allocator<char>::allocator(v2 + 608);
                                                                      std::string::basic_string<std::allocator<char>>(
                                                                        (std::string *const)(v2 + 5504),
                                                                        "useLocalTriggerLogic",
                                                                        (const std::allocator<char> *)(v2 + 608));
                                                                      use_local_trigger_logic_ptr = jsonValueFind(jval, (const std::string *)(v2 + 5504));
                                                                      std::string::~string((void *)(v2 + 5504));
                                                                      *(_DWORD *)(((v2 + 5504) >> 3) + 0x7FFF8000) = -117901064;
                                                                      std::allocator<char>::~allocator(v2 + 608);
                                                                      *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) = -8;
                                                                      if ( use_local_trigger_logic_ptr
                                                                        && !fromJson<bool>(
                                                                              use_local_trigger_logic_ptr,
                                                                              &this->use_local_trigger_logic) )
                                                                      {
                                                                        *(_DWORD *)(((v2 + 5568) >> 3) + 0x7FFF8000) = 0;
                                                                        if ( *(char *)(((v2 + 5568) >> 3) + 0x7FFF8000) < 0
                                                                          || *(_BYTE *)(((v2 + 5599) >> 3) + 0x7FFF8000) != 0
                                                                          && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 5599) >> 3) + 0x7FFF8000) )
                                                                        {
                                                                          __asan_report_store_n(v2 + 5568, 32LL);
                                                                        }
                                                                        common::milog::MiLogStream::create(
                                                                          (common::milog::MiLogStream *)(v2 + 5568),
                                                                          &common::milog::MiLogDefault::default_log_obj_,
                                                                          3u,
                                                                          "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
                                                                          "fromJson",
                                                                          921);
                                                                        common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                                                                          (common::milog::MiLogStream *const)(v2 + 5568),
                                                                          (const char (*)[42])"fromJson for: useLocalTriggerLogic fails!");
                                                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5568));
                                                                        v6 = 0;
                                                                      }
                                                                      else
                                                                      {
                                                                        *(_DWORD *)(((v2 + 5632) >> 3) + 0x7FFF8000) = 0;
                                                                        *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) = 1;
                                                                        std::allocator<char>::allocator(v2 + 624);
                                                                        std::string::basic_string<std::allocator<char>>(
                                                                          (std::string *const)(v2 + 5632),
                                                                          "localTriggerMeta",
                                                                          (const std::allocator<char> *)(v2 + 624));
                                                                        local_trigger_meta_ptr = jsonValueFind(
                                                                                                   jval,
                                                                                                   (const std::string *)(v2 + 5632));
                                                                        std::string::~string((void *)(v2 + 5632));
                                                                        *(_DWORD *)(((v2 + 5632) >> 3) + 0x7FFF8000) = -117901064;
                                                                        std::allocator<char>::~allocator(v2 + 624);
                                                                        *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) = -8;
                                                                        if ( local_trigger_meta_ptr )
                                                                        {
                                                                          *(_WORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
                                                                          if ( *(_WORD *)(((v2 + 736) >> 3) + 0x7FFF8000) )
                                                                            __asan_report_store16();
                                                                          data::ConfigLocalTriggerMeta::parseFromJson((const Json::Value *)(v2 + 736));
                                                                          v13 = std::shared_ptr<data::ConfigLocalTriggerMeta>::operator=(
                                                                                  &this->local_trigger_meta,
                                                                                  (std::shared_ptr<data::ConfigLocalTriggerMeta> *)(v2 + 736));
                                                                          v12 = 0LL;
                                                                          v14 = std::operator==<data::ConfigLocalTriggerMeta>(
                                                                                  v13,
                                                                                  0LL);
                                                                          std::shared_ptr<data::ConfigLocalTriggerMeta>::~shared_ptr((std::shared_ptr<data::ConfigLocalTriggerMeta> *const)(v2 + 736));
                                                                          *(_WORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -1800;
                                                                          if ( v14 )
                                                                          {
                                                                            *(_DWORD *)(((v2 + 5696) >> 3) + 0x7FFF8000) = 0;
                                                                            if ( *(char *)(((v2 + 5696) >> 3)
                                                                                         + 0x7FFF8000) < 0
                                                                              || *(_BYTE *)(((v2 + 5727) >> 3)
                                                                                          + 0x7FFF8000) != 0
                                                                              && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 5727) >> 3) + 0x7FFF8000) )
                                                                            {
                                                                              __asan_report_store_n(v2 + 5696, 32LL);
                                                                            }
                                                                            common::milog::MiLogStream::create(
                                                                              (common::milog::MiLogStream *)(v2 + 5696),
                                                                              &common::milog::MiLogDefault::default_log_obj_,
                                                                              1u,
                                                                              "./src/json_data_auto/ComponentDefines/ConfigTrigger.cpp",
                                                                              "fromJson",
                                                                              935);
                                                                            v12 = "fromJson for: localTriggerMeta fails!";
                                                                            common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                                                                              (common::milog::MiLogStream *const)(v2 + 5696),
                                                                              (const char (*)[38])"fromJson for: localTriggerMeta fails!");
                                                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5696));
                                                                            *(_DWORD *)(((v2 + 5696) >> 3) + 0x7FFF8000) = -117901064;
                                                                          }
                                                                        }
                                                                        else
                                                                        {
                                                                          *(_WORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
                                                                          if ( *(_WORD *)(((v2 + 704) >> 3) + 0x7FFF8000) )
                                                                            __asan_report_store16();
                                                                          common::tools::perf::make_shared<data::ConfigLocalTriggerMeta>();
                                                                          v12 = (const char *)(v2 + 704);
                                                                          std::shared_ptr<data::ConfigLocalTriggerMeta>::operator=(
                                                                            &this->local_trigger_meta,
                                                                            (std::shared_ptr<data::ConfigLocalTriggerMeta> *)(v2 + 704));
                                                                          std::shared_ptr<data::ConfigLocalTriggerMeta>::~shared_ptr((std::shared_ptr<data::ConfigLocalTriggerMeta> *const)(v2 + 704));
                                                                          *(_WORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -1800;
                                                                        }
                                                                        if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3)
                                                                                     + 0x7FFF8000) < 0 )
                                                                          __asan_report_store1(
                                                                            &this->is_json_loaded,
                                                                            v12,
                                                                            &this->is_json_loaded);
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
  v15 = v6;
  if ( v54 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8068) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 112) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF8074) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF807C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8084) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF808C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8094) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF809C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80A4) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80AC) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80B4) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80BC) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80C4) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80CC) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80D4) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80DC) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80E4) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80EC) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80F4) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80FC) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8104) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF810C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8114) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF811C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8124) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF812C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8134) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF813C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8144) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF814C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8154) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF815C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8164) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF816C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8174) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF817C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8184) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF818C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8194) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF819C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81A4) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF81AC) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81B4) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF81BC) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81C4) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF81CC) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81D4) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81DC) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF81E4) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81EC) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF81F4) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81FC) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8204) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF820C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8214) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF821C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8224) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF822C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8234) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF823C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8244) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF824C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8254) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF825C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8264) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF826C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8274) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF827C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8284) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF828C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8294) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF829C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF82A4) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF82AC) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF82B4) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF82BC) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF82C4) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF82CC) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_7(v2, 5760LL, v54);
  }
  return v15;
};

// Line 942: range 0000000011FC701C-0000000011FC7B74
int32_t __cdecl data::ConfigTrigger::getHashValue(const data::ConfigTrigger *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // eax
  int32_t v6; // eax
  int32_t v7; // eax
  int32_t v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx
  double v15; // xmm0_8
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rdx
  int32_t ArrHashValue; // eax
  int32_t v25; // eax
  data::ConfigBaseShapePtr *p_raw_shape; // rsi
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rdx
  int32_t v29; // eax
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdx
  int32_t v32; // eax
  int32_t result; // eax
  char v34[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:943";
  *(_QWORD *)(v2 + 16) = data::ConfigTrigger::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  common::tools::HashUtils::appendHash(this->trigger_type, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_flag >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->trigger_flag >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->trigger_flag);
  }
  common::tools::HashUtils::appendHash(this->trigger_flag, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->concern_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->concern_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->concern_type);
  }
  common::tools::HashUtils::appendHash(this->concern_type, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->shape, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->ignore_scale >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->ignore_scale, v2 + 32, &this->ignore_scale);
  common::tools::HashUtils::appendHash(this->ignore_scale, (int32_t *)(v2 + 32));
  HashValue = data::Vector::getHashValue(&this->offset);
  common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 32));
  v6 = data::Vector::getHashValue(&this->eular_offset);
  common::tools::HashUtils::appendHash(v6, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->height);
  }
  common::tools::HashUtils::appendHash(this->height, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->from_shape, (int32_t *)(v2 + 32));
  v7 = data::Vector::getHashValue(&this->from_offset);
  common::tools::HashUtils::appendHash(v7, (int32_t *)(v2 + 32));
  v8 = data::Vector::getHashValue(&this->from_eular_offset);
  common::tools::HashUtils::appendHash(v8, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->from_height >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->from_height >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->from_height);
  }
  common::tools::HashUtils::appendHash(this->from_height, (int32_t *)(v2 + 32));
  v9 = ((_BYTE)this - 100) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->check_infinite >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->check_infinite >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_load1(&this->check_infinite, v9, v10);
  common::tools::HashUtils::appendHash(this->check_infinite, (int32_t *)(v2 + 32));
  v11 = ((_BYTE)this - 99) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->trigger_infinite >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&this->trigger_infinite >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_load1(&this->trigger_infinite, v11, v12);
  common::tools::HashUtils::appendHash(this->trigger_infinite, (int32_t *)(v2 + 32));
  v13 = ((_BYTE)this - 98) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&this->life_infinite >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&this->life_infinite >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_load1(&this->life_infinite, v13, v14);
  common::tools::HashUtils::appendHash(this->life_infinite, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->start_check_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_check_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->start_check_time);
  }
  common::tools::HashUtils::appendHash(this->start_check_time, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->check_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->check_interval >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->check_interval);
  }
  common::tools::HashUtils::appendHash(this->check_interval, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->check_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->check_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->check_count);
  }
  common::tools::HashUtils::appendHash(this->check_count, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->trigger_interval >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->trigger_interval);
  }
  common::tools::HashUtils::appendHash(this->trigger_interval, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->trigger_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->trigger_count);
  }
  common::tools::HashUtils::appendHash(this->trigger_count, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->life_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->life_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->life_time);
  }
  *(_QWORD *)&v15 = _mm_cvtsi32_si128(LODWORD(this->life_time)).m128i_u64[0];
  common::tools::HashUtils::appendHash(*(float *)&v15, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->overwrite_camp_type >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->overwrite_camp_type, (((_BYTE)this - 76) & 7u) + 3, &this->overwrite_camp_type);
  common::tools::HashUtils::appendHash(this->overwrite_camp_type, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->camp_type >> 3) + 0x7FFF8000) )
  {
    v15 = __asan_report_load4(&this->camp_type);
  }
  common::tools::HashUtils::appendHash(this->camp_type, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->check_point >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->check_point, v2 + 32, &this->check_point);
  common::tools::HashUtils::appendHash(this->check_point, (int32_t *)(v2 + 32));
  v16 = ((_BYTE)this - 63) & 7;
  v17 = (*(_BYTE *)(((unsigned __int64)&this->use_surface_height >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v16 >= *(_BYTE *)(((unsigned __int64)&this->use_surface_height >> 3) + 0x7FFF8000));
  if ( (_BYTE)v17 )
    __asan_report_load1(&this->use_surface_height, v16, v17);
  common::tools::HashUtils::appendHash(this->use_surface_height, (int32_t *)(v2 + 32));
  v18 = ((_BYTE)this - 62) & 7;
  v19 = (*(_BYTE *)(((unsigned __int64)&this->use_collider >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v18 >= *(_BYTE *)(((unsigned __int64)&this->use_collider >> 3) + 0x7FFF8000));
  if ( (_BYTE)v19 )
    __asan_report_load1(&this->use_collider, v18, v19);
  common::tools::HashUtils::appendHash(this->use_collider, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->collider_name, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->from_collider_name, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->check_ghost >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->check_ghost, v2 + 32, &this->check_ghost);
  common::tools::HashUtils::appendHash(this->check_ghost, (int32_t *)(v2 + 32));
  v20 = ((_BYTE)this + 9) & 7;
  v21 = (*(_BYTE *)(((unsigned __int64)&this->collider_check_on_init >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v20 >= *(_BYTE *)(((unsigned __int64)&this->collider_check_on_init >> 3) + 0x7FFF8000));
  if ( (_BYTE)v21 )
    __asan_report_load1(&this->collider_check_on_init, v20, v21);
  common::tools::HashUtils::appendHash(this->collider_check_on_init, (int32_t *)(v2 + 32));
  v22 = ((_BYTE)this + 10) & 7;
  v23 = (*(_BYTE *)(((unsigned __int64)&this->check_on_reconnect >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v22 >= *(_BYTE *)(((unsigned __int64)&this->check_on_reconnect >> 3) + 0x7FFF8000));
  if ( (_BYTE)v23 )
    __asan_report_load1(&this->check_on_reconnect, v22, v23);
  common::tools::HashUtils::appendHash(this->check_on_reconnect, (int32_t *)(v2 + 32));
  ArrHashValue = data::getArrHashValue(&this->collider_white_list);
  common::tools::HashUtils::appendHash(ArrHashValue, (int32_t *)(v2 + 32));
  v25 = data::getArrHashValue(&this->collider_black_list);
  common::tools::HashUtils::appendHash(v25, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->use_level_override >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->use_level_override, v2 + 32, &this->use_level_override);
  common::tools::HashUtils::appendHash(this->use_level_override, (int32_t *)(v2 + 32));
  p_raw_shape = &this->raw_shape;
  if ( std::operator!=<data::ConfigBaseShape>(0LL, &this->raw_shape) )
  {
    v27 = (unsigned __int64)std::__shared_ptr_access<data::ConfigBaseShape,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBaseShape,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->raw_shape);
    if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
      v27 = __asan_report_load8(v27);
    v28 = *(_QWORD *)v27 + 56LL;
    if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
      v27 = __asan_report_load8(*(_QWORD *)v27 + 56LL);
    v29 = (*(__int64 (__fastcall **)(unsigned __int64, double))v28)(v27, v15);
    p_raw_shape = (data::ConfigBaseShapePtr *)(v2 + 32);
    common::tools::HashUtils::appendHash(v29, (int32_t *)(v2 + 32));
  }
  if ( *(char *)(((unsigned __int64)&this->use_local_trigger_logic >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->use_local_trigger_logic, p_raw_shape, &this->use_local_trigger_logic);
  common::tools::HashUtils::appendHash(this->use_local_trigger_logic, (int32_t *)(v2 + 32));
  if ( std::operator!=<data::ConfigLocalTriggerMeta>(0LL, &this->local_trigger_meta) )
  {
    v30 = (unsigned __int64)std::__shared_ptr_access<data::ConfigLocalTriggerMeta,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigLocalTriggerMeta,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->local_trigger_meta);
    if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
      v30 = __asan_report_load8(v30);
    v31 = *(_QWORD *)v30 + 56LL;
    if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
      v30 = __asan_report_load8(*(_QWORD *)v30 + 56LL);
    v32 = (*(__int64 (__fastcall **)(unsigned __int64, double))v31)(v30, v15);
    common::tools::HashUtils::appendHash(v32, (int32_t *)(v2 + 32));
  }
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v34 == (char *)v2 )
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

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigCutscene.cpp

// Line 19: range 0000000013B43AF2-0000000013B43D90
const char *__cdecl data::enumValToStr(data::CutsceneType e)
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
    case NONE_24:
      result = "NONE";
      break;
    case TIME_LINE_ASSET:
      result = "TIME_LINE_ASSET";
      break;
    case TIME_LINE_PREFAB:
      result = "TIME_LINE_PREFAB";
      break;
    case TIME_LINE_SCENE:
      result = "TIME_LINE_SCENE";
      break;
    case Other_9:
      result = "Other";
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
        "./src/json_data_auto/ConfigCutscene.cpp",
        "enumValToStr",
        33);
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
      result = byte_1ABBC960;
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

// Line 39: range 0000000013B43D91-0000000013B447FB
bool __cdecl data::enumStrToVal(const std::string *s, data::CutsceneType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::CutsceneType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::CutsceneType> >::pointer v11; // rax
  data::CutsceneType second; // ecx
  char v13; // dl
  data::CutsceneType *ea; // [rsp+10h] [rbp-2A0h]
  char v15[656]; // [rsp+20h] [rbp-290h] BYREF

  ea = e;
  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(608LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "12 32 1 9 <unknown> 48 1 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 "
                        "<unknown> 128 4 9 <unknown> 144 8 5 it:53 176 8 9 <unknown> 208 32 9 <unknown> 272 32 9 <unknown"
                        "> 336 200 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862724] = 61956;
  v4[536862724] = -234881024;
  v4[536862725] = 62194;
  v4[536862725] = -234881024;
  v4[536862726] = 62194;
  v4[536862727] = -219021312;
  v4[536862728] = 62194;
  v4[536862729] = -219021312;
  v4[536862730] = 62194;
  v4[536862736] = -218103808;
  v4[536862737] = -202116109;
  v4[536862738] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
  {
    if ( *(char *)(((v2 + 208) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 239) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 17) & 7) >= *(_BYTE *)(((v2 + 239) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 208, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 208),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ConfigCutscene.cpp",
      "enumStrToVal",
      42);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 208),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 208));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::CutsceneType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::CutsceneType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::CutsceneType>::pair<char const(&)[5],data::CutsceneType,true>(
        (std::pair<const std::string,data::CutsceneType> *const)(v2 + 336),
        (const char (*)[5])"NONE",
        (data::CutsceneType *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "NONE");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::CutsceneType>::pair<char const(&)[16],data::CutsceneType,true>(
        (std::pair<const std::string,data::CutsceneType> *const)(v2 + 376),
        (const char (*)[16])"TIME_LINE_ASSET",
        (data::CutsceneType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "TIME_LINE_ASSET");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::CutsceneType>::pair<char const(&)[17],data::CutsceneType,true>(
        (std::pair<const std::string,data::CutsceneType> *const)(v2 + 416),
        (const char (*)[17])"TIME_LINE_PREFAB",
        (data::CutsceneType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "TIME_LINE_PREFAB");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::CutsceneType>::pair<char const(&)[16],data::CutsceneType,true>(
        (std::pair<const std::string,data::CutsceneType> *const)(v2 + 456),
        (const char (*)[16])"TIME_LINE_SCENE",
        (data::CutsceneType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "TIME_LINE_SCENE");
      *(_DWORD *)(v2 + 128) = 4;
      std::pair<std::string const,data::CutsceneType>::pair<char const(&)[6],data::CutsceneType,true>(
        (std::pair<const std::string,data::CutsceneType> *const)(v2 + 496),
        (const char (*)[6])"Other",
        (data::CutsceneType *)(v2 + 128));
      std::allocator<std::pair<std::string const,data::CutsceneType>>::allocator((std::allocator<std::pair<const std::string,data::CutsceneType> > *const)(v2 + 48));
      std::map<std::string,data::CutsceneType>::map(
        &data::enumStrToVal(std::string const&,data::CutsceneType &)::m,
        (std::initializer_list<std::pair<const std::string,data::CutsceneType> >)__PAIR128__(5LL, v2 + 336),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::CutsceneType>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::CutsceneType &)::m);
      e = (data::CutsceneType *)&data::enumStrToVal(std::string const&,data::CutsceneType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::CutsceneType>::~map,
        &data::enumStrToVal(std::string const&,data::CutsceneType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::CutsceneType>>::~allocator((std::allocator<std::pair<const std::string,data::CutsceneType> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::CutsceneType> *)(v2 + 536);
            i != (std::pair<const std::string,data::CutsceneType> *)(v2 + 336);
            std::pair<std::string const,data::CutsceneType>::~pair(i) )
      {
        --i;
      }
      v7 = ((v2 + 336) >> 3) + 2147450880;
      *(_DWORD *)v7 = -117901064;
      *(_DWORD *)(v7 + 4) = -117901064;
      *(_DWORD *)(v7 + 8) = -117901064;
      *(_DWORD *)(v7 + 12) = -117901064;
      *(_DWORD *)(v7 + 16) = -117901064;
      *(_DWORD *)(v7 + 20) = -117901064;
      *(_BYTE *)(v7 + 24) = -8;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 144, e);
    *(std::map<std::string,data::CutsceneType>::iterator *)(v2 + 144) = std::map<std::string,data::CutsceneType>::find(
                                                                          &data::enumStrToVal(std::string const&,data::CutsceneType &)::m,
                                                                          s);
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, s);
    *(std::map<std::string,data::CutsceneType>::iterator *)(v2 + 176) = std::map<std::string,data::CutsceneType>::end(&data::enumStrToVal(std::string const&,data::CutsceneType &)::m);
    v8 = (char *)(v2 + 176);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::CutsceneType> >::_Self *)(v2 + 144),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::CutsceneType> >::_Self *)(v2 + 176));
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
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
        3u,
        "./src/json_data_auto/ConfigCutscene.cpp",
        "enumStrToVal",
        56);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 272),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 272));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::CutsceneType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::CutsceneType> > *const)(v2 + 144));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 76) & 0xFFFFFFF8) >> 3));
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

// Line 64: range 0000000013B447FC-0000000013B44861
const char *__cdecl data::getDescription(data::CutsceneType e)
{
  const char *result; // rax

  switch ( e )
  {
    case NONE_24:
      result = off_1AC27420;
      break;
    case TIME_LINE_ASSET:
      result = (const char *)&unk_1AC8DC20;
      break;
    case TIME_LINE_PREFAB:
      result = (const char *)&unk_1AC8DC60;
      break;
    case TIME_LINE_SCENE:
      result = (const char *)&unk_1AC8DCC0;
      break;
    case Other_9:
      result = (const char *)&unk_1AC8DD00;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 83: range 0000000013B44862-0000000013B44B0C
const char *__cdecl data::enumValToStr(data::CutsceneInitPosType e)
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
    case FREE_1:
      result = "FREE";
      break;
    case RELATIVE_TO_LOCAL_AVATAR:
      result = "RELATIVE_TO_LOCAL_AVATAR";
      break;
    case RELATIVE_TO_INTEE_1:
      result = "RELATIVE_TO_INTEE";
      break;
    case Other_10:
      result = "Other";
      break;
    case RELATIVE_TO_LOCAL_AVATAR_WITH_ROTATION:
      result = "RELATIVE_TO_LOCAL_AVATAR_WITH_ROTATION";
      break;
    case RELATIVE_TO_ENTITY_WITH_ROTATION:
      result = "RELATIVE_TO_ENTITY_WITH_ROTATION";
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
        "./src/json_data_auto/ConfigCutscene.cpp",
        "enumValToStr",
        99);
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
      result = byte_1ABBC960;
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

// Line 105: range 0000000013B44B0D-0000000013B45615
bool __cdecl data::enumStrToVal(const std::string *s, data::CutsceneInitPosType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::CutsceneInitPosType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::CutsceneInitPosType> >::pointer v11; // rax
  data::CutsceneInitPosType second; // ecx
  char v13; // dl
  data::CutsceneInitPosType *ea; // [rsp+10h] [rbp-2E0h]
  char v15[720]; // [rsp+20h] [rbp-2D0h] BYREF

  ea = e;
  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(672LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "13 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 4 9"
                        " <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 8 6 it:120 208 8 9 <unknown> 240 32 9 <unknow"
                        "n> 304 32 9 <unknown> 368 240 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = -234556924;
  v4[536862724] = -234556924;
  v4[536862725] = 61956;
  v4[536862725] = -234881024;
  v4[536862726] = 62194;
  v4[536862726] = -234881024;
  v4[536862727] = 62194;
  v4[536862728] = -219021312;
  v4[536862729] = 62194;
  v4[536862730] = -219021312;
  v4[536862731] = 62194;
  v4[536862739] = -202116109;
  v4[536862740] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
  {
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
      "./src/json_data_auto/ConfigCutscene.cpp",
      "enumStrToVal",
      108);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 240),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::CutsceneInitPosType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::CutsceneInitPosType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::CutsceneInitPosType>::pair<char const(&)[5],data::CutsceneInitPosType,true>(
        (std::pair<const std::string,data::CutsceneInitPosType> *const)(v2 + 368),
        (const char (*)[5])"FREE",
        (data::CutsceneInitPosType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "FREE");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::CutsceneInitPosType>::pair<char const(&)[25],data::CutsceneInitPosType,true>(
        (std::pair<const std::string,data::CutsceneInitPosType> *const)(v2 + 408),
        (const char (*)[25])"RELATIVE_TO_LOCAL_AVATAR",
        (data::CutsceneInitPosType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "RELATIVE_TO_LOCAL_AVATAR");
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::CutsceneInitPosType>::pair<char const(&)[18],data::CutsceneInitPosType,true>(
        (std::pair<const std::string,data::CutsceneInitPosType> *const)(v2 + 448),
        (const char (*)[18])"RELATIVE_TO_INTEE",
        (data::CutsceneInitPosType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "RELATIVE_TO_INTEE");
      *(_DWORD *)(v2 + 128) = 3;
      std::pair<std::string const,data::CutsceneInitPosType>::pair<char const(&)[6],data::CutsceneInitPosType,true>(
        (std::pair<const std::string,data::CutsceneInitPosType> *const)(v2 + 488),
        (const char (*)[6])"Other",
        (data::CutsceneInitPosType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "Other");
      *(_DWORD *)(v2 + 144) = 4;
      std::pair<std::string const,data::CutsceneInitPosType>::pair<char const(&)[39],data::CutsceneInitPosType,true>(
        (std::pair<const std::string,data::CutsceneInitPosType> *const)(v2 + 528),
        (const char (*)[39])"RELATIVE_TO_LOCAL_AVATAR_WITH_ROTATION",
        (data::CutsceneInitPosType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "RELATIVE_TO_LOCAL_AVATAR_WITH_ROTATION");
      *(_DWORD *)(v2 + 160) = 5;
      std::pair<std::string const,data::CutsceneInitPosType>::pair<char const(&)[33],data::CutsceneInitPosType,true>(
        (std::pair<const std::string,data::CutsceneInitPosType> *const)(v2 + 568),
        (const char (*)[33])"RELATIVE_TO_ENTITY_WITH_ROTATION",
        (data::CutsceneInitPosType *)(v2 + 160));
      std::allocator<std::pair<std::string const,data::CutsceneInitPosType>>::allocator((std::allocator<std::pair<const std::string,data::CutsceneInitPosType> > *const)(v2 + 64));
      std::map<std::string,data::CutsceneInitPosType>::map(
        &data::enumStrToVal(std::string const&,data::CutsceneInitPosType &)::m,
        (std::initializer_list<std::pair<const std::string,data::CutsceneInitPosType> >)__PAIR128__(6LL, v2 + 368),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::CutsceneInitPosType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::CutsceneInitPosType &)::m);
      e = (data::CutsceneInitPosType *)&data::enumStrToVal(std::string const&,data::CutsceneInitPosType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::CutsceneInitPosType>::~map,
        &data::enumStrToVal(std::string const&,data::CutsceneInitPosType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::CutsceneInitPosType>>::~allocator((std::allocator<std::pair<const std::string,data::CutsceneInitPosType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::CutsceneInitPosType> *)(v2 + 608);
            i != (std::pair<const std::string,data::CutsceneInitPosType> *)(v2 + 368);
            std::pair<std::string const,data::CutsceneInitPosType>::~pair(i) )
      {
        --i;
      }
      v7 = ((v2 + 368) >> 3) + 2147450880;
      *(_DWORD *)v7 = -117901064;
      *(_DWORD *)(v7 + 4) = -117901064;
      *(_DWORD *)(v7 + 8) = -117901064;
      *(_DWORD *)(v7 + 12) = -117901064;
      *(_DWORD *)(v7 + 16) = -117901064;
      *(_DWORD *)(v7 + 20) = -117901064;
      *(_DWORD *)(v7 + 24) = -117901064;
      *(_WORD *)(v7 + 28) = -1800;
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, e);
    *(std::map<std::string,data::CutsceneInitPosType>::iterator *)(v2 + 176) = std::map<std::string,data::CutsceneInitPosType>::find(
                                                                                 &data::enumStrToVal(std::string const&,data::CutsceneInitPosType &)::m,
                                                                                 s);
    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 208, s);
    *(std::map<std::string,data::CutsceneInitPosType>::iterator *)(v2 + 208) = std::map<std::string,data::CutsceneInitPosType>::end(&data::enumStrToVal(std::string const&,data::CutsceneInitPosType &)::m);
    v8 = (char *)(v2 + 208);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::CutsceneInitPosType> >::_Self *)(v2 + 176),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::CutsceneInitPosType> >::_Self *)(v2 + 208));
    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
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
        3u,
        "./src/json_data_auto/ConfigCutscene.cpp",
        "enumStrToVal",
        123);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 304),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::CutsceneInitPosType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::CutsceneInitPosType> > *const)(v2 + 176));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 84) & 0xFFFFFFF8) >> 3));
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

// Line 131: range 0000000013B45616-0000000013B45684
const char *__cdecl data::getDescription(data::CutsceneInitPosType e)
{
  const char *result; // rax

  switch ( e )
  {
    case FREE_1:
      result = (const char *)&unk_1AC8E000;
      break;
    case RELATIVE_TO_LOCAL_AVATAR:
      result = (const char *)&unk_1AC8E040;
      break;
    case RELATIVE_TO_INTEE_1:
      result = (const char *)&unk_1AC8E0A0;
      break;
    case Other_10:
      result = (const char *)&unk_1AC8DD00;
      break;
    case RELATIVE_TO_LOCAL_AVATAR_WITH_ROTATION:
      result = (const char *)&unk_1AC8E100;
      break;
    case RELATIVE_TO_ENTITY_WITH_ROTATION:
      result = (const char *)&unk_1AC8E140;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 153: range 0000000013B45686-0000000013B45F14
bool __cdecl data::ConfigCutscenePreTask::fromJson(data::ConfigCutscenePreTask *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::string *p_target_weather; // rsi
  const Json::Value *duration_ptr; // [rsp+18h] [rbp-218h]
  const Json::Value *target_day_time_ptr; // [rsp+20h] [rbp-210h]
  const Json::Value *target_weather_ptr; // [rsp+28h] [rbp-208h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigCutscenePreTask::fromJson;
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
    "duration",
    (const std::allocator<char> *)(v2 + 48));
  duration_ptr = jsonValueFind(jval, (const std::string *)(v2 + 96));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( duration_ptr && !fromJson<float>(duration_ptr, &this->duration) )
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
      "./src/json_data_auto/ConfigCutscene.cpp",
      "fromJson",
      163);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[30])"fromJson for: duration fails!");
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
      "targetDayTime",
      (const std::allocator<char> *)(v2 + 64));
    target_day_time_ptr = jsonValueFind(jval, (const std::string *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( target_day_time_ptr && !fromJson<float>(target_day_time_ptr, &this->target_day_time) )
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
        "./src/json_data_auto/ConfigCutscene.cpp",
        "fromJson",
        175);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[35])"fromJson for: targetDayTime fails!");
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
        "targetWeather",
        (const std::allocator<char> *)(v2 + 80));
      p_target_weather = (std::string *)(v2 + 352);
      target_weather_ptr = jsonValueFind(jval, (const std::string *)(v2 + 352));
      std::string::~string((void *)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( target_weather_ptr
        && (p_target_weather = &this->target_weather, !fromJson<std::string>(target_weather_ptr, &this->target_weather)) )
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
          "./src/json_data_auto/ConfigCutscene.cpp",
          "fromJson",
          187);
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
          (common::milog::MiLogStream *const)(v2 + 416),
          (const char (*)[35])"fromJson for: targetWeather fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
        result = 0;
      }
      else
      {
        if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(&this->is_json_loaded, p_target_weather, &this->is_json_loaded);
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

// Line 195: range 0000000013B45F16-0000000013B460E4
int32_t __cdecl data::ConfigCutscenePreTask::getHashValue(const data::ConfigCutscenePreTask *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t result; // eax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:196";
  *(_QWORD *)(v2 + 16) = data::ConfigCutscenePreTask::getHashValue;
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
  common::tools::HashUtils::appendHash(this->duration, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->target_day_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_day_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->target_day_time);
  }
  common::tools::HashUtils::appendHash(this->target_day_time, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->target_weather, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v6 == (char *)v2 )
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

// Line 205: range 0000000013B460E5-0000000013B4631A
data::ConfigBaseCutscenePtr __cdecl data::createConfigBaseCutscene(const std::string *name)
{
  const std::map<std::string,std::shared_ptr<data::ConfigBaseCutscene>>::key_type *v1; // rsi
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseCutscene> > > *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool v5; // al
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseCutscene> > >::pointer v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  void (__fastcall *v9)(const std::string *, unsigned __int64); // rcx
  data::ConfigBaseCutscenePtr result; // rax
  char v11[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseCutscene> > > *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseCutscene> > > *)v3;
  }
  v2->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseCutscene> > >::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseCutscene> > >::_Base_ptr)"2 32 8 6 it:206 64 8 9 <unknown>";
  v2[2]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseCutscene> > >::_Base_ptr)data::createConfigBaseCutscene;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], v1);
  v2[4]._M_node = std::map<std::string,std::shared_ptr<data::ConfigBaseCutscene>>::find(
                    &data::g_ConfigBaseCutsceneMap[abi:cxx11],
                    v1)._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], v1);
  v2[8]._M_node = std::map<std::string,std::shared_ptr<data::ConfigBaseCutscene>>::end(&data::g_ConfigBaseCutsceneMap[abi:cxx11])._M_node;
  v5 = std::operator!=(v2 + 4, v2 + 8);
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
  {
    v6 = std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<data::ConfigBaseCutscene>>>::operator->(v2 + 4);
    v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigBaseCutscene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBaseCutscene,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v6->second);
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
    std::shared_ptr<data::ConfigBaseCutscene>::shared_ptr((std::shared_ptr<data::ConfigBaseCutscene> *const)name, 0LL);
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseCutscene> > >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigBaseCutscene,(__gnu_cxx::_Lock_policy)2>::element_type *)name;
  return result;
};

// Line 212: range 0000000013B4631C-0000000013B4713B
void __cdecl data::ConfigBaseCutscene::foreachMember(
        data::ConfigBaseCutscene *const this,
        std::function<void(std::any&)> *p_func)
{
  std::any *v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5[1120]; // [rsp+10h] [rbp-460h] BYREF

  v2 = (std::any *)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1088LL);
    if ( v3 )
      v2 = (std::any *)v3;
  }
  v2->_M_manager = (void (*)(std::any::_Op, const std::any *, std::any::_Arg *))1102416563;
  v2->_M_storage._M_ptr = "33 32 16 12 type_any:213 64 16 20 pre_task_cfg_any:215 96 16 16 can_skip_any:217 128 16 26 can"
                          "_skip_if_played_any:219 160 16 22 force_can_skip_any:221 192 16 27 skip_general_dialog_any:223"
                          " 224 16 11 can_any:225 256 16 26 clear_black_screen_any:227 288 16 28 fade_out_when_finish_any"
                          ":229 320 16 23 direct_transmit_any:231 352 16 22 delay_transmit_any:233 384 16 21 lua_data_pat"
                          "h_any:235 416 16 16 res_path_any:237 448 16 22 cast_list_path_any:239 480 16 18 entity_ban_any"
                          ":241 512 16 25 ban_gadget_effect_any:243 544 16 22 start_pos_type_any:245 576 16 20 start_offs"
                          "et_any:247 608 16 20 need_xzeuler_any:249 640 16 19 need_yeuler_any:251 672 16 19 keep_camera_"
                          "any:253 704 16 22 use_target_pos_any:255 736 16 18 target_pos_any:257 768 16 31 modify_last_po"
                          "se_offset_any:259 800 16 27 attack_mode_recover_any:261 832 16 23 crowd_lod0_list_any:263 864 "
                          "16 34 enable_camera_displacement_any:265 896 16 25 entity_runtime_id_any:267 928 16 33 clear_a"
                          "vatar_local_gadget_any:269 960 16 26 disable_gpuculling_any:271 992 16 23 can_player_loop_any:"
                          "273 1024 16 21 main_quest_id_any:275 1056 16 35 disable_avatar_local_gadget_any:277";
  v2[1]._M_manager = (void (*)(std::any::_Op, const std::any *, std::any::_Arg *))data::ConfigBaseCutscene::foreachMember;
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
  v4[536862753] = -202178560;
  std::any::any<data::CutsceneType &,data::CutsceneType,std::any::_Manager_internal<data::CutsceneType>,true,true>(
    v2 + 2,
    &this->type);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 2);
  std::any::any<data::ConfigCutscenePreTask &,data::ConfigCutscenePreTask,std::any::_Manager_external<data::ConfigCutscenePreTask>,true,true>(
    v2 + 4,
    &this->pre_task_cfg);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 4);
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(v2 + 6, &this->can_skip);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 6);
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(v2 + 8, &this->can_skip_if_played);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 8);
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(v2 + 10, &this->force_can_skip);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 10);
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(v2 + 12, &this->skip_general_dialog);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 12);
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(v2 + 14, &this->can);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 14);
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(v2 + 16, &this->clear_black_screen);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 16);
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>(v2 + 18, &this->fade_out_when_finish);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 18);
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(v2 + 20, &this->direct_transmit);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 20);
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>(v2 + 22, &this->delay_transmit);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 22);
  std::any::any<std::string &,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 24,
    &this->lua_data_path);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 24);
  std::any::any<std::string &,std::string,std::any::_Manager_external<std::string>,true,true>(v2 + 26, &this->res_path);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 26);
  std::any::any<std::string &,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 28,
    &this->cast_list_path);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 28);
  std::any::any<std::string &,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 30,
    &this->entity_ban);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 30);
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(v2 + 32, &this->ban_gadget_effect);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 32);
  std::any::any<data::CutsceneInitPosType &,data::CutsceneInitPosType,std::any::_Manager_internal<data::CutsceneInitPosType>,true,true>(
    v2 + 34,
    &this->start_pos_type);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 34);
  std::any::any<data::Vector &,data::Vector,std::any::_Manager_external<data::Vector>,true,true>(
    v2 + 36,
    &this->start_offset);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 36);
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(v2 + 38, &this->need_xzeuler);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 38);
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(v2 + 40, &this->need_yeuler);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 40);
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(v2 + 42, &this->keep_camera);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 42);
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(v2 + 44, &this->use_target_pos);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 44);
  std::any::any<data::Vector &,data::Vector,std::any::_Manager_external<data::Vector>,true,true>(
    v2 + 46,
    &this->target_pos);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 46);
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(v2 + 48, &this->modify_last_pose_offset);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 48);
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(v2 + 50, &this->attack_mode_recover);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 50);
  std::any::any<std::vector<int> &,std::vector<int>,std::any::_Manager_external<std::vector<int>>,true,true>(
    v2 + 52,
    &this->crowd_lod0_list);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 52);
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(v2 + 54, &this->enable_camera_displacement);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 54);
  std::any::any<unsigned int &,unsigned int,std::any::_Manager_internal<unsigned int>,true,true>(
    v2 + 56,
    &this->entity_runtime_id);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 56);
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(v2 + 58, &this->clear_avatar_local_gadget);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 58);
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(v2 + 60, &this->disable_gpuculling);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 60);
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(v2 + 62, &this->can_player_loop);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 62);
  std::any::any<unsigned int &,unsigned int,std::any::_Manager_internal<unsigned int>,true,true>(
    v2 + 64,
    &this->main_quest_id);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 64);
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(v2 + 66, &this->disable_avatar_local_gadget);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 66);
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
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8080) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 136) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    v2->_M_manager = (void (*)(std::any::_Op, const std::any *, std::any::_Arg *))1172321806;
    __asan_stack_free_5(v2, 1088LL, v5);
  }
};

// Line 282: range 0000000013B4713C-0000000013B47186
std::shared_ptr<data::ConfigBaseCutscene> __cdecl data::ConfigBaseCutscene::clone(data::ConfigBaseCutscene *const this)
{
  data::ConfigBaseCutscene *v1; // rsi
  std::shared_ptr<data::ConfigBaseCutscene> result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigBaseCutscene,data::ConfigBaseCutscene&>(
    (common::tools::perf::allocator<data::ConfigBaseCutscene,data::ConfigBaseCutscene> *)this,
    v1);
  result._M_ptr = this;
  return result;
};

// Line 286: range 0000000013B47188-0000000013B4C6CA
bool __cdecl data::ConfigBaseCutscene::fromJson(data::ConfigBaseCutscene *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r15
  char v6; // al
  bool v7; // r15
  __int64 v8; // rsi
  __int64 v9; // rdx
  bool v10; // bl
  Json::Value *type_ptr; // [rsp+18h] [rbp-1478h]
  const Json::Value *pre_task_cfg_ptr; // [rsp+20h] [rbp-1470h]
  const Json::Value *can_skip_ptr; // [rsp+28h] [rbp-1468h]
  const Json::Value *can_skip_if_played_ptr; // [rsp+30h] [rbp-1460h]
  const Json::Value *force_can_skip_ptr; // [rsp+38h] [rbp-1458h]
  const Json::Value *skip_general_dialog_ptr; // [rsp+40h] [rbp-1450h]
  const Json::Value *can_ptr; // [rsp+48h] [rbp-1448h]
  const Json::Value *clear_black_screen_ptr; // [rsp+50h] [rbp-1440h]
  const Json::Value *fade_out_when_finish_ptr; // [rsp+58h] [rbp-1438h]
  const Json::Value *direct_transmit_ptr; // [rsp+60h] [rbp-1430h]
  const Json::Value *delay_transmit_ptr; // [rsp+68h] [rbp-1428h]
  const Json::Value *lua_data_path_ptr; // [rsp+70h] [rbp-1420h]
  const Json::Value *res_path_ptr; // [rsp+78h] [rbp-1418h]
  const Json::Value *cast_list_path_ptr; // [rsp+80h] [rbp-1410h]
  const Json::Value *entity_ban_ptr; // [rsp+88h] [rbp-1408h]
  const Json::Value *ban_gadget_effect_ptr; // [rsp+90h] [rbp-1400h]
  Json::Value *start_pos_type_ptr; // [rsp+98h] [rbp-13F8h]
  const Json::Value *start_offset_ptr; // [rsp+A0h] [rbp-13F0h]
  const Json::Value *need_xzeuler_ptr; // [rsp+A8h] [rbp-13E8h]
  const Json::Value *need_yeuler_ptr; // [rsp+B0h] [rbp-13E0h]
  const Json::Value *keep_camera_ptr; // [rsp+B8h] [rbp-13D8h]
  const Json::Value *use_target_pos_ptr; // [rsp+C0h] [rbp-13D0h]
  const Json::Value *target_pos_ptr; // [rsp+C8h] [rbp-13C8h]
  const Json::Value *modify_last_pose_offset_ptr; // [rsp+D0h] [rbp-13C0h]
  const Json::Value *attack_mode_recover_ptr; // [rsp+D8h] [rbp-13B8h]
  const Json::Value *crowd_lod0_list_ptr; // [rsp+E0h] [rbp-13B0h]
  const Json::Value *enable_camera_displacement_ptr; // [rsp+E8h] [rbp-13A8h]
  const Json::Value *entity_runtime_id_ptr; // [rsp+F0h] [rbp-13A0h]
  const Json::Value *clear_avatar_local_gadget_ptr; // [rsp+F8h] [rbp-1398h]
  const Json::Value *disable_gpuculling_ptr; // [rsp+100h] [rbp-1390h]
  const Json::Value *can_player_loop_ptr; // [rsp+108h] [rbp-1388h]
  const Json::Value *main_quest_id_ptr; // [rsp+110h] [rbp-1380h]
  const Json::Value *disable_avatar_local_gadget_ptr; // [rsp+118h] [rbp-1378h]
  char v45[4976]; // [rsp+120h] [rbp-1370h] BYREF

  v2 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_7(4928LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "101 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 "
                        "9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 <unk"
                        "nown> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 288 1 9 <unknown> "
                        "304 1 9 <unknown> 320 1 9 <unknown> 336 1 9 <unknown> 352 1 9 <unknown> 368 1 9 <unknown> 384 1 "
                        "9 <unknown> 400 1 9 <unknown> 416 1 9 <unknown> 432 1 9 <unknown> 448 1 9 <unknown> 464 1 9 <unk"
                        "nown> 480 1 9 <unknown> 496 1 9 <unknown> 512 1 9 <unknown> 528 1 9 <unknown> 544 1 9 <unknown> "
                        "560 1 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 83"
                        "2 32 9 <unknown> 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 <unknown> 1"
                        "152 32 9 <unknown> 1216 32 9 <unknown> 1280 32 9 <unknown> 1344 32 9 <unknown> 1408 32 9 <unknow"
                        "n> 1472 32 9 <unknown> 1536 32 9 <unknown> 1600 32 9 <unknown> 1664 32 9 <unknown> 1728 32 9 <un"
                        "known> 1792 32 9 <unknown> 1856 32 9 <unknown> 1920 32 9 <unknown> 1984 32 9 <unknown> 2048 32 9"
                        " <unknown> 2112 32 9 <unknown> 2176 32 9 <unknown> 2240 32 9 <unknown> 2304 32 9 <unknown> 2368 "
                        "32 9 <unknown> 2432 32 9 <unknown> 2496 32 9 <unknown> 2560 32 9 <unknown> 2624 32 9 <unknown> 2"
                        "688 32 9 <unknown> 2752 32 9 <unknown> 2816 32 9 <unknown> 2880 32 9 <unknown> 2944 32 9 <unknow"
                        "n> 3008 32 9 <unknown> 3072 32 9 <unknown> 3136 32 9 <unknown> 3200 32 9 <unknown> 3264 32 9 <un"
                        "known> 3328 32 9 <unknown> 3392 32 9 <unknown> 3456 32 9 <unknown> 3520 32 9 <unknown> 3584 32 9"
                        " <unknown> 3648 32 9 <unknown> 3712 32 9 <unknown> 3776 32 9 <unknown> 3840 32 9 <unknown> 3904 "
                        "32 9 <unknown> 3968 32 9 <unknown> 4032 32 9 <unknown> 4096 32 9 <unknown> 4160 32 9 <unknown> 4"
                        "224 32 9 <unknown> 4288 32 9 <unknown> 4352 32 9 <unknown> 4416 32 9 <unknown> 4480 32 9 <unknow"
                        "n> 4544 32 9 <unknown> 4608 32 9 <unknown> 4672 32 9 <unknown> 4736 32 9 <unknown> 4800 32 9 <un"
                        "known> 4864 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBaseCutscene::fromJson;
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
  v4[536862873] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 576),
    "type",
    (const std::allocator<char> *)(v2 + 48));
  type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 576));
  std::string::~string((void *)(v2 + 576));
  *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( !type_ptr )
    goto LABEL_11;
  *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v2 + 640) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 671) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 671) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 640, 32LL);
  }
  Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 640), (Json::Value_0 *)type_ptr);
  v5 = !data::enumStrToVal((const std::string *)(v2 + 640), &this->type);
  std::string::~string((void *)(v2 + 640));
  *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
  if ( v5 )
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
      3u,
      "./src/json_data_auto/ConfigCutscene.cpp",
      "fromJson",
      296);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      (common::milog::MiLogStream *const)(v2 + 704),
      (const char (*)[26])"fromJson for: type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
    v6 = 0;
  }
  else
  {
LABEL_11:
    *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 768),
      "preTaskCfg",
      (const std::allocator<char> *)(v2 + 64));
    pre_task_cfg_ptr = jsonValueFind(jval, (const std::string *)(v2 + 768));
    std::string::~string((void *)(v2 + 768));
    *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( pre_task_cfg_ptr && !data::ConfigCutscenePreTask::fromJson(&this->pre_task_cfg, pre_task_cfg_ptr) )
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
        3u,
        "./src/json_data_auto/ConfigCutscene.cpp",
        "fromJson",
        308);
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
        (common::milog::MiLogStream *const)(v2 + 832),
        (const char (*)[32])"fromJson for: preTaskCfg fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 832));
      v6 = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 896),
        "canSkip",
        (const std::allocator<char> *)(v2 + 80));
      can_skip_ptr = jsonValueFind(jval, (const std::string *)(v2 + 896));
      std::string::~string((void *)(v2 + 896));
      *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( can_skip_ptr && !fromJson<bool>(can_skip_ptr, &this->can_skip) )
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
          3u,
          "./src/json_data_auto/ConfigCutscene.cpp",
          "fromJson",
          320);
        common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
          (common::milog::MiLogStream *const)(v2 + 960),
          (const char (*)[29])"fromJson for: canSkip fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 960));
        v6 = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 1024),
          "canSkipIfPlayed",
          (const std::allocator<char> *)(v2 + 96));
        can_skip_if_played_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1024));
        std::string::~string((void *)(v2 + 1024));
        *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( can_skip_if_played_ptr && !fromJson<bool>(can_skip_if_played_ptr, &this->can_skip_if_played) )
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
            "./src/json_data_auto/ConfigCutscene.cpp",
            "fromJson",
            332);
          common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
            (common::milog::MiLogStream *const)(v2 + 1088),
            (const char (*)[37])"fromJson for: canSkipIfPlayed fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1088));
          v6 = 0;
        }
        else
        {
          *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 112);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1152),
            "forceCanSkip",
            (const std::allocator<char> *)(v2 + 112));
          force_can_skip_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1152));
          std::string::~string((void *)(v2 + 1152));
          *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( force_can_skip_ptr && !fromJson<bool>(force_can_skip_ptr, &this->force_can_skip) )
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
              3u,
              "./src/json_data_auto/ConfigCutscene.cpp",
              "fromJson",
              344);
            common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              (common::milog::MiLogStream *const)(v2 + 1216),
              (const char (*)[34])"fromJson for: forceCanSkip fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1216));
            v6 = 0;
          }
          else
          {
            *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 128);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1280),
              "skipGeneralDialog",
              (const std::allocator<char> *)(v2 + 128));
            skip_general_dialog_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1280));
            std::string::~string((void *)(v2 + 1280));
            *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 128);
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
            if ( skip_general_dialog_ptr && !fromJson<bool>(skip_general_dialog_ptr, &this->skip_general_dialog) )
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
                3u,
                "./src/json_data_auto/ConfigCutscene.cpp",
                "fromJson",
                356);
              common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                (common::milog::MiLogStream *const)(v2 + 1344),
                (const char (*)[39])"fromJson for: skipGeneralDialog fails!");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1344));
              v6 = 0;
            }
            else
            {
              *(_DWORD *)(((v2 + 1408) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 144);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1408),
                off_1AC8F2A0,
                (const std::allocator<char> *)(v2 + 144));
              can_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1408));
              std::string::~string((void *)(v2 + 1408));
              *(_DWORD *)(((v2 + 1408) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 144);
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
              if ( can_ptr && !fromJson<bool>(can_ptr, &this->can) )
              {
                *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 1472) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1503) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 1503) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 1472, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 1472),
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/json_data_auto/ConfigCutscene.cpp",
                  "fromJson",
                  368);
                common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                  (common::milog::MiLogStream *const)(v2 + 1472),
                  (const char (*)[25])"fromJson for: can fails!");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1472));
                v6 = 0;
              }
              else
              {
                *(_DWORD *)(((v2 + 1536) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 160);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1536),
                  "clearBlackScreen",
                  (const std::allocator<char> *)(v2 + 160));
                clear_black_screen_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1536));
                std::string::~string((void *)(v2 + 1536));
                *(_DWORD *)(((v2 + 1536) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 160);
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                if ( clear_black_screen_ptr && !fromJson<bool>(clear_black_screen_ptr, &this->clear_black_screen) )
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
                    3u,
                    "./src/json_data_auto/ConfigCutscene.cpp",
                    "fromJson",
                    380);
                  common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                    (common::milog::MiLogStream *const)(v2 + 1600),
                    (const char (*)[38])"fromJson for: clearBlackScreen fails!");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1600));
                  v6 = 0;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1664) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 176);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1664),
                    "fadeOutWhenFinish",
                    (const std::allocator<char> *)(v2 + 176));
                  fade_out_when_finish_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1664));
                  std::string::~string((void *)(v2 + 1664));
                  *(_DWORD *)(((v2 + 1664) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 176);
                  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                  if ( fade_out_when_finish_ptr
                    && !fromJson<float>(fade_out_when_finish_ptr, &this->fade_out_when_finish) )
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
                      3u,
                      "./src/json_data_auto/ConfigCutscene.cpp",
                      "fromJson",
                      392);
                    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                      (common::milog::MiLogStream *const)(v2 + 1728),
                      (const char (*)[39])"fromJson for: fadeOutWhenFinish fails!");
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1728));
                    v6 = 0;
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 1792) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 192);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 1792),
                      "directTransmit",
                      (const std::allocator<char> *)(v2 + 192));
                    direct_transmit_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1792));
                    std::string::~string((void *)(v2 + 1792));
                    *(_DWORD *)(((v2 + 1792) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 192);
                    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                    if ( direct_transmit_ptr && !fromJson<bool>(direct_transmit_ptr, &this->direct_transmit) )
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
                        3u,
                        "./src/json_data_auto/ConfigCutscene.cpp",
                        "fromJson",
                        404);
                      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                        (common::milog::MiLogStream *const)(v2 + 1856),
                        (const char (*)[36])"fromJson for: directTransmit fails!");
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1856));
                      v6 = 0;
                    }
                    else
                    {
                      *(_DWORD *)(((v2 + 1920) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 208);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 1920),
                        "delayTransmit",
                        (const std::allocator<char> *)(v2 + 208));
                      delay_transmit_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1920));
                      std::string::~string((void *)(v2 + 1920));
                      *(_DWORD *)(((v2 + 1920) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 208);
                      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                      if ( delay_transmit_ptr && !fromJson<float>(delay_transmit_ptr, &this->delay_transmit) )
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
                          3u,
                          "./src/json_data_auto/ConfigCutscene.cpp",
                          "fromJson",
                          416);
                        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                          (common::milog::MiLogStream *const)(v2 + 1984),
                          (const char (*)[35])"fromJson for: delayTransmit fails!");
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1984));
                        v6 = 0;
                      }
                      else
                      {
                        *(_DWORD *)(((v2 + 2048) >> 3) + 0x7FFF8000) = 0;
                        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 224);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 2048),
                          "luaDataPath",
                          (const std::allocator<char> *)(v2 + 224));
                        lua_data_path_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2048));
                        std::string::~string((void *)(v2 + 2048));
                        *(_DWORD *)(((v2 + 2048) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 224);
                        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                        if ( lua_data_path_ptr && !fromJson<std::string>(lua_data_path_ptr, &this->lua_data_path) )
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
                            3u,
                            "./src/json_data_auto/ConfigCutscene.cpp",
                            "fromJson",
                            428);
                          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                            (common::milog::MiLogStream *const)(v2 + 2112),
                            (const char (*)[33])"fromJson for: luaDataPath fails!");
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2112));
                          v6 = 0;
                        }
                        else
                        {
                          *(_DWORD *)(((v2 + 2176) >> 3) + 0x7FFF8000) = 0;
                          *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
                          std::allocator<char>::allocator(v2 + 240);
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)(v2 + 2176),
                            "resPath",
                            (const std::allocator<char> *)(v2 + 240));
                          res_path_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2176));
                          std::string::~string((void *)(v2 + 2176));
                          *(_DWORD *)(((v2 + 2176) >> 3) + 0x7FFF8000) = -117901064;
                          std::allocator<char>::~allocator(v2 + 240);
                          *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                          if ( res_path_ptr && !fromJson<std::string>(res_path_ptr, &this->res_path) )
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
                              3u,
                              "./src/json_data_auto/ConfigCutscene.cpp",
                              "fromJson",
                              440);
                            common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                              (common::milog::MiLogStream *const)(v2 + 2240),
                              (const char (*)[29])"fromJson for: resPath fails!");
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2240));
                            v6 = 0;
                          }
                          else
                          {
                            *(_DWORD *)(((v2 + 2304) >> 3) + 0x7FFF8000) = 0;
                            *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
                            std::allocator<char>::allocator(v2 + 256);
                            std::string::basic_string<std::allocator<char>>(
                              (std::string *const)(v2 + 2304),
                              "castListPath",
                              (const std::allocator<char> *)(v2 + 256));
                            cast_list_path_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2304));
                            std::string::~string((void *)(v2 + 2304));
                            *(_DWORD *)(((v2 + 2304) >> 3) + 0x7FFF8000) = -117901064;
                            std::allocator<char>::~allocator(v2 + 256);
                            *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                            if ( cast_list_path_ptr && !fromJson<std::string>(cast_list_path_ptr, &this->cast_list_path) )
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
                                3u,
                                "./src/json_data_auto/ConfigCutscene.cpp",
                                "fromJson",
                                452);
                              common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                                (common::milog::MiLogStream *const)(v2 + 2368),
                                (const char (*)[34])"fromJson for: castListPath fails!");
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2368));
                              v6 = 0;
                            }
                            else
                            {
                              *(_DWORD *)(((v2 + 2432) >> 3) + 0x7FFF8000) = 0;
                              *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
                              std::allocator<char>::allocator(v2 + 272);
                              std::string::basic_string<std::allocator<char>>(
                                (std::string *const)(v2 + 2432),
                                "entityBan",
                                (const std::allocator<char> *)(v2 + 272));
                              entity_ban_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2432));
                              std::string::~string((void *)(v2 + 2432));
                              *(_DWORD *)(((v2 + 2432) >> 3) + 0x7FFF8000) = -117901064;
                              std::allocator<char>::~allocator(v2 + 272);
                              *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                              if ( entity_ban_ptr && !fromJson<std::string>(entity_ban_ptr, &this->entity_ban) )
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
                                  3u,
                                  "./src/json_data_auto/ConfigCutscene.cpp",
                                  "fromJson",
                                  464);
                                common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                                  (common::milog::MiLogStream *const)(v2 + 2496),
                                  (const char (*)[31])"fromJson for: entityBan fails!");
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2496));
                                v6 = 0;
                              }
                              else
                              {
                                *(_DWORD *)(((v2 + 2560) >> 3) + 0x7FFF8000) = 0;
                                *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 1;
                                std::allocator<char>::allocator(v2 + 288);
                                std::string::basic_string<std::allocator<char>>(
                                  (std::string *const)(v2 + 2560),
                                  "banGadgetEffect",
                                  (const std::allocator<char> *)(v2 + 288));
                                ban_gadget_effect_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2560));
                                std::string::~string((void *)(v2 + 2560));
                                *(_DWORD *)(((v2 + 2560) >> 3) + 0x7FFF8000) = -117901064;
                                std::allocator<char>::~allocator(v2 + 288);
                                *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
                                if ( ban_gadget_effect_ptr
                                  && !fromJson<bool>(ban_gadget_effect_ptr, &this->ban_gadget_effect) )
                                {
                                  *(_DWORD *)(((v2 + 2624) >> 3) + 0x7FFF8000) = 0;
                                  if ( *(char *)(((v2 + 2624) >> 3) + 0x7FFF8000) < 0
                                    || *(_BYTE *)(((v2 + 2655) >> 3) + 0x7FFF8000) != 0
                                    && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 2655) >> 3) + 0x7FFF8000) )
                                  {
                                    __asan_report_store_n(v2 + 2624, 32LL);
                                  }
                                  common::milog::MiLogStream::create(
                                    (common::milog::MiLogStream *)(v2 + 2624),
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    3u,
                                    "./src/json_data_auto/ConfigCutscene.cpp",
                                    "fromJson",
                                    476);
                                  common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                                    (common::milog::MiLogStream *const)(v2 + 2624),
                                    (const char (*)[37])"fromJson for: banGadgetEffect fails!");
                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2624));
                                  v6 = 0;
                                }
                                else
                                {
                                  *(_DWORD *)(((v2 + 2688) >> 3) + 0x7FFF8000) = 0;
                                  *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 1;
                                  std::allocator<char>::allocator(v2 + 304);
                                  std::string::basic_string<std::allocator<char>>(
                                    (std::string *const)(v2 + 2688),
                                    "startPosType",
                                    (const std::allocator<char> *)(v2 + 304));
                                  start_pos_type_ptr = (Json::Value *)jsonValueFind(
                                                                        jval,
                                                                        (const std::string *)(v2 + 2688));
                                  std::string::~string((void *)(v2 + 2688));
                                  *(_DWORD *)(((v2 + 2688) >> 3) + 0x7FFF8000) = -117901064;
                                  std::allocator<char>::~allocator(v2 + 304);
                                  *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
                                  if ( !start_pos_type_ptr )
                                    goto LABEL_93;
                                  *(_DWORD *)(((v2 + 2752) >> 3) + 0x7FFF8000) = 0;
                                  if ( *(char *)(((v2 + 2752) >> 3) + 0x7FFF8000) < 0
                                    || *(_BYTE *)(((v2 + 2783) >> 3) + 0x7FFF8000) != 0
                                    && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 2783) >> 3) + 0x7FFF8000) )
                                  {
                                    __asan_report_store_n(v2 + 2752, 32LL);
                                  }
                                  Json::Value::asString[abi:cxx11](
                                    (Json::String *)(v2 + 2752),
                                    (Json::Value_0 *)start_pos_type_ptr);
                                  v7 = !data::enumStrToVal((const std::string *)(v2 + 2752), &this->start_pos_type);
                                  std::string::~string((void *)(v2 + 2752));
                                  *(_DWORD *)(((v2 + 2752) >> 3) + 0x7FFF8000) = -117901064;
                                  if ( v7 )
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
                                      "./src/json_data_auto/ConfigCutscene.cpp",
                                      "fromJson",
                                      488);
                                    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                                      (common::milog::MiLogStream *const)(v2 + 2816),
                                      (const char (*)[34])"fromJson for: startPosType fails!");
                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2816));
                                    v6 = 0;
                                  }
                                  else
                                  {
LABEL_93:
                                    *(_DWORD *)(((v2 + 2880) >> 3) + 0x7FFF8000) = 0;
                                    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 1;
                                    std::allocator<char>::allocator(v2 + 320);
                                    std::string::basic_string<std::allocator<char>>(
                                      (std::string *const)(v2 + 2880),
                                      "startOffset",
                                      (const std::allocator<char> *)(v2 + 320));
                                    start_offset_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2880));
                                    std::string::~string((void *)(v2 + 2880));
                                    *(_DWORD *)(((v2 + 2880) >> 3) + 0x7FFF8000) = -117901064;
                                    std::allocator<char>::~allocator(v2 + 320);
                                    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
                                    if ( start_offset_ptr
                                      && !data::Vector::fromJson(&this->start_offset, start_offset_ptr) )
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
                                        "./src/json_data_auto/ConfigCutscene.cpp",
                                        "fromJson",
                                        500);
                                      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                        (common::milog::MiLogStream *const)(v2 + 2944),
                                        (const char (*)[33])"fromJson for: startOffset fails!");
                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2944));
                                      v6 = 0;
                                    }
                                    else
                                    {
                                      *(_DWORD *)(((v2 + 3008) >> 3) + 0x7FFF8000) = 0;
                                      *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 1;
                                      std::allocator<char>::allocator(v2 + 336);
                                      std::string::basic_string<std::allocator<char>>(
                                        (std::string *const)(v2 + 3008),
                                        "needXZEuler",
                                        (const std::allocator<char> *)(v2 + 336));
                                      need_xzeuler_ptr = jsonValueFind(jval, (const std::string *)(v2 + 3008));
                                      std::string::~string((void *)(v2 + 3008));
                                      *(_DWORD *)(((v2 + 3008) >> 3) + 0x7FFF8000) = -117901064;
                                      std::allocator<char>::~allocator(v2 + 336);
                                      *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
                                      if ( need_xzeuler_ptr && !fromJson<bool>(need_xzeuler_ptr, &this->need_xzeuler) )
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
                                          "./src/json_data_auto/ConfigCutscene.cpp",
                                          "fromJson",
                                          512);
                                        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                          (common::milog::MiLogStream *const)(v2 + 3072),
                                          (const char (*)[33])"fromJson for: needXZEuler fails!");
                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3072));
                                        v6 = 0;
                                      }
                                      else
                                      {
                                        *(_DWORD *)(((v2 + 3136) >> 3) + 0x7FFF8000) = 0;
                                        *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 1;
                                        std::allocator<char>::allocator(v2 + 352);
                                        std::string::basic_string<std::allocator<char>>(
                                          (std::string *const)(v2 + 3136),
                                          "needYEuler",
                                          (const std::allocator<char> *)(v2 + 352));
                                        need_yeuler_ptr = jsonValueFind(jval, (const std::string *)(v2 + 3136));
                                        std::string::~string((void *)(v2 + 3136));
                                        *(_DWORD *)(((v2 + 3136) >> 3) + 0x7FFF8000) = -117901064;
                                        std::allocator<char>::~allocator(v2 + 352);
                                        *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
                                        if ( need_yeuler_ptr && !fromJson<bool>(need_yeuler_ptr, &this->need_yeuler) )
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
                                            "./src/json_data_auto/ConfigCutscene.cpp",
                                            "fromJson",
                                            524);
                                          common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                                            (common::milog::MiLogStream *const)(v2 + 3200),
                                            (const char (*)[32])"fromJson for: needYEuler fails!");
                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3200));
                                          v6 = 0;
                                        }
                                        else
                                        {
                                          *(_DWORD *)(((v2 + 3264) >> 3) + 0x7FFF8000) = 0;
                                          *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = 1;
                                          std::allocator<char>::allocator(v2 + 368);
                                          std::string::basic_string<std::allocator<char>>(
                                            (std::string *const)(v2 + 3264),
                                            "keepCamera",
                                            (const std::allocator<char> *)(v2 + 368));
                                          keep_camera_ptr = jsonValueFind(jval, (const std::string *)(v2 + 3264));
                                          std::string::~string((void *)(v2 + 3264));
                                          *(_DWORD *)(((v2 + 3264) >> 3) + 0x7FFF8000) = -117901064;
                                          std::allocator<char>::~allocator(v2 + 368);
                                          *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
                                          if ( keep_camera_ptr && !fromJson<bool>(keep_camera_ptr, &this->keep_camera) )
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
                                              "./src/json_data_auto/ConfigCutscene.cpp",
                                              "fromJson",
                                              536);
                                            common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                                              (common::milog::MiLogStream *const)(v2 + 3328),
                                              (const char (*)[32])"fromJson for: keepCamera fails!");
                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3328));
                                            v6 = 0;
                                          }
                                          else
                                          {
                                            *(_DWORD *)(((v2 + 3392) >> 3) + 0x7FFF8000) = 0;
                                            *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 1;
                                            std::allocator<char>::allocator(v2 + 384);
                                            std::string::basic_string<std::allocator<char>>(
                                              (std::string *const)(v2 + 3392),
                                              "useTargetPos",
                                              (const std::allocator<char> *)(v2 + 384));
                                            use_target_pos_ptr = jsonValueFind(jval, (const std::string *)(v2 + 3392));
                                            std::string::~string((void *)(v2 + 3392));
                                            *(_DWORD *)(((v2 + 3392) >> 3) + 0x7FFF8000) = -117901064;
                                            std::allocator<char>::~allocator(v2 + 384);
                                            *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
                                            if ( use_target_pos_ptr
                                              && !fromJson<bool>(use_target_pos_ptr, &this->use_target_pos) )
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
                                                "./src/json_data_auto/ConfigCutscene.cpp",
                                                "fromJson",
                                                548);
                                              common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                                                (common::milog::MiLogStream *const)(v2 + 3456),
                                                (const char (*)[34])"fromJson for: useTargetPos fails!");
                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3456));
                                              v6 = 0;
                                            }
                                            else
                                            {
                                              *(_DWORD *)(((v2 + 3520) >> 3) + 0x7FFF8000) = 0;
                                              *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = 1;
                                              std::allocator<char>::allocator(v2 + 400);
                                              std::string::basic_string<std::allocator<char>>(
                                                (std::string *const)(v2 + 3520),
                                                "targetPos",
                                                (const std::allocator<char> *)(v2 + 400));
                                              target_pos_ptr = jsonValueFind(jval, (const std::string *)(v2 + 3520));
                                              std::string::~string((void *)(v2 + 3520));
                                              *(_DWORD *)(((v2 + 3520) >> 3) + 0x7FFF8000) = -117901064;
                                              std::allocator<char>::~allocator(v2 + 400);
                                              *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
                                              if ( target_pos_ptr
                                                && !data::Vector::fromJson(&this->target_pos, target_pos_ptr) )
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
                                                  "./src/json_data_auto/ConfigCutscene.cpp",
                                                  "fromJson",
                                                  560);
                                                common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                                                  (common::milog::MiLogStream *const)(v2 + 3584),
                                                  (const char (*)[31])"fromJson for: targetPos fails!");
                                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3584));
                                                v6 = 0;
                                              }
                                              else
                                              {
                                                *(_DWORD *)(((v2 + 3648) >> 3) + 0x7FFF8000) = 0;
                                                *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = 1;
                                                std::allocator<char>::allocator(v2 + 416);
                                                std::string::basic_string<std::allocator<char>>(
                                                  (std::string *const)(v2 + 3648),
                                                  "modifyLastPoseOffset",
                                                  (const std::allocator<char> *)(v2 + 416));
                                                modify_last_pose_offset_ptr = jsonValueFind(
                                                                                jval,
                                                                                (const std::string *)(v2 + 3648));
                                                std::string::~string((void *)(v2 + 3648));
                                                *(_DWORD *)(((v2 + 3648) >> 3) + 0x7FFF8000) = -117901064;
                                                std::allocator<char>::~allocator(v2 + 416);
                                                *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
                                                if ( modify_last_pose_offset_ptr
                                                  && !fromJson<bool>(
                                                        modify_last_pose_offset_ptr,
                                                        &this->modify_last_pose_offset) )
                                                {
                                                  *(_DWORD *)(((v2 + 3712) >> 3) + 0x7FFF8000) = 0;
                                                  if ( *(char *)(((v2 + 3712) >> 3) + 0x7FFF8000) < 0
                                                    || *(_BYTE *)(((v2 + 3743) >> 3) + 0x7FFF8000) != 0
                                                    && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 3743) >> 3)
                                                                                         + 0x7FFF8000) )
                                                  {
                                                    __asan_report_store_n(v2 + 3712, 32LL);
                                                  }
                                                  common::milog::MiLogStream::create(
                                                    (common::milog::MiLogStream *)(v2 + 3712),
                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                    3u,
                                                    "./src/json_data_auto/ConfigCutscene.cpp",
                                                    "fromJson",
                                                    572);
                                                  common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                                                    (common::milog::MiLogStream *const)(v2 + 3712),
                                                    (const char (*)[42])"fromJson for: modifyLastPoseOffset fails!");
                                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3712));
                                                  v6 = 0;
                                                }
                                                else
                                                {
                                                  *(_DWORD *)(((v2 + 3776) >> 3) + 0x7FFF8000) = 0;
                                                  *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = 1;
                                                  std::allocator<char>::allocator(v2 + 432);
                                                  std::string::basic_string<std::allocator<char>>(
                                                    (std::string *const)(v2 + 3776),
                                                    "attackModeRecover",
                                                    (const std::allocator<char> *)(v2 + 432));
                                                  attack_mode_recover_ptr = jsonValueFind(
                                                                              jval,
                                                                              (const std::string *)(v2 + 3776));
                                                  std::string::~string((void *)(v2 + 3776));
                                                  *(_DWORD *)(((v2 + 3776) >> 3) + 0x7FFF8000) = -117901064;
                                                  std::allocator<char>::~allocator(v2 + 432);
                                                  *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = -8;
                                                  if ( attack_mode_recover_ptr
                                                    && !fromJson<bool>(
                                                          attack_mode_recover_ptr,
                                                          &this->attack_mode_recover) )
                                                  {
                                                    *(_DWORD *)(((v2 + 3840) >> 3) + 0x7FFF8000) = 0;
                                                    if ( *(char *)(((v2 + 3840) >> 3) + 0x7FFF8000) < 0
                                                      || *(_BYTE *)(((v2 + 3871) >> 3) + 0x7FFF8000) != 0
                                                      && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 3871) >> 3)
                                                                                           + 0x7FFF8000) )
                                                    {
                                                      __asan_report_store_n(v2 + 3840, 32LL);
                                                    }
                                                    common::milog::MiLogStream::create(
                                                      (common::milog::MiLogStream *)(v2 + 3840),
                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                      3u,
                                                      "./src/json_data_auto/ConfigCutscene.cpp",
                                                      "fromJson",
                                                      584);
                                                    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                                      (common::milog::MiLogStream *const)(v2 + 3840),
                                                      (const char (*)[39])"fromJson for: attackModeRecover fails!");
                                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3840));
                                                    v6 = 0;
                                                  }
                                                  else
                                                  {
                                                    *(_DWORD *)(((v2 + 3904) >> 3) + 0x7FFF8000) = 0;
                                                    *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = 1;
                                                    std::allocator<char>::allocator(v2 + 448);
                                                    std::string::basic_string<std::allocator<char>>(
                                                      (std::string *const)(v2 + 3904),
                                                      "crowdLOD0List",
                                                      (const std::allocator<char> *)(v2 + 448));
                                                    crowd_lod0_list_ptr = jsonValueFind(
                                                                            jval,
                                                                            (const std::string *)(v2 + 3904));
                                                    std::string::~string((void *)(v2 + 3904));
                                                    *(_DWORD *)(((v2 + 3904) >> 3) + 0x7FFF8000) = -117901064;
                                                    std::allocator<char>::~allocator(v2 + 448);
                                                    *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = -8;
                                                    if ( crowd_lod0_list_ptr
                                                      && !data::arrFromJson(crowd_lod0_list_ptr, &this->crowd_lod0_list) )
                                                    {
                                                      *(_DWORD *)(((v2 + 3968) >> 3) + 0x7FFF8000) = 0;
                                                      if ( *(char *)(((v2 + 3968) >> 3) + 0x7FFF8000) < 0
                                                        || *(_BYTE *)(((v2 + 3999) >> 3) + 0x7FFF8000) != 0
                                                        && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 3999) >> 3)
                                                                                             + 0x7FFF8000) )
                                                      {
                                                        __asan_report_store_n(v2 + 3968, 32LL);
                                                      }
                                                      common::milog::MiLogStream::create(
                                                        (common::milog::MiLogStream *)(v2 + 3968),
                                                        &common::milog::MiLogDefault::default_log_obj_,
                                                        3u,
                                                        "./src/json_data_auto/ConfigCutscene.cpp",
                                                        "fromJson",
                                                        596);
                                                      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                                                        (common::milog::MiLogStream *const)(v2 + 3968),
                                                        (const char (*)[35])"fromJson for: crowdLOD0List fails!");
                                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3968));
                                                      v6 = 0;
                                                    }
                                                    else
                                                    {
                                                      *(_DWORD *)(((v2 + 4032) >> 3) + 0x7FFF8000) = 0;
                                                      *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = 1;
                                                      std::allocator<char>::allocator(v2 + 464);
                                                      std::string::basic_string<std::allocator<char>>(
                                                        (std::string *const)(v2 + 4032),
                                                        "enableCameraDisplacement",
                                                        (const std::allocator<char> *)(v2 + 464));
                                                      enable_camera_displacement_ptr = jsonValueFind(
                                                                                         jval,
                                                                                         (const std::string *)(v2 + 4032));
                                                      std::string::~string((void *)(v2 + 4032));
                                                      *(_DWORD *)(((v2 + 4032) >> 3) + 0x7FFF8000) = -117901064;
                                                      std::allocator<char>::~allocator(v2 + 464);
                                                      *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = -8;
                                                      if ( enable_camera_displacement_ptr
                                                        && !fromJson<bool>(
                                                              enable_camera_displacement_ptr,
                                                              &this->enable_camera_displacement) )
                                                      {
                                                        *(_DWORD *)(((v2 + 4096) >> 3) + 0x7FFF8000) = 0;
                                                        if ( *(char *)(((v2 + 4096) >> 3) + 0x7FFF8000) < 0
                                                          || *(_BYTE *)(((v2 + 4127) >> 3) + 0x7FFF8000) != 0
                                                          && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 4127) >> 3)
                                                                                               + 0x7FFF8000) )
                                                        {
                                                          __asan_report_store_n(v2 + 4096, 32LL);
                                                        }
                                                        common::milog::MiLogStream::create(
                                                          (common::milog::MiLogStream *)(v2 + 4096),
                                                          &common::milog::MiLogDefault::default_log_obj_,
                                                          3u,
                                                          "./src/json_data_auto/ConfigCutscene.cpp",
                                                          "fromJson",
                                                          608);
                                                        common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                                                          (common::milog::MiLogStream *const)(v2 + 4096),
                                                          (const char (*)[46])"fromJson for: enableCameraDisplacement fails!");
                                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4096));
                                                        v6 = 0;
                                                      }
                                                      else
                                                      {
                                                        *(_DWORD *)(((v2 + 4160) >> 3) + 0x7FFF8000) = 0;
                                                        *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = 1;
                                                        std::allocator<char>::allocator(v2 + 480);
                                                        std::string::basic_string<std::allocator<char>>(
                                                          (std::string *const)(v2 + 4160),
                                                          "entityRuntimeID",
                                                          (const std::allocator<char> *)(v2 + 480));
                                                        entity_runtime_id_ptr = jsonValueFind(
                                                                                  jval,
                                                                                  (const std::string *)(v2 + 4160));
                                                        std::string::~string((void *)(v2 + 4160));
                                                        *(_DWORD *)(((v2 + 4160) >> 3) + 0x7FFF8000) = -117901064;
                                                        std::allocator<char>::~allocator(v2 + 480);
                                                        *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = -8;
                                                        if ( entity_runtime_id_ptr
                                                          && !fromJson<unsigned int>(
                                                                entity_runtime_id_ptr,
                                                                &this->entity_runtime_id) )
                                                        {
                                                          *(_DWORD *)(((v2 + 4224) >> 3) + 0x7FFF8000) = 0;
                                                          if ( *(char *)(((v2 + 4224) >> 3) + 0x7FFF8000) < 0
                                                            || *(_BYTE *)(((v2 + 4255) >> 3) + 0x7FFF8000) != 0
                                                            && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 4255) >> 3)
                                                                                                 + 0x7FFF8000) )
                                                          {
                                                            __asan_report_store_n(v2 + 4224, 32LL);
                                                          }
                                                          common::milog::MiLogStream::create(
                                                            (common::milog::MiLogStream *)(v2 + 4224),
                                                            &common::milog::MiLogDefault::default_log_obj_,
                                                            3u,
                                                            "./src/json_data_auto/ConfigCutscene.cpp",
                                                            "fromJson",
                                                            620);
                                                          common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                                                            (common::milog::MiLogStream *const)(v2 + 4224),
                                                            (const char (*)[37])"fromJson for: entityRuntimeID fails!");
                                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4224));
                                                          v6 = 0;
                                                        }
                                                        else
                                                        {
                                                          *(_DWORD *)(((v2 + 4288) >> 3) + 0x7FFF8000) = 0;
                                                          *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = 1;
                                                          std::allocator<char>::allocator(v2 + 496);
                                                          std::string::basic_string<std::allocator<char>>(
                                                            (std::string *const)(v2 + 4288),
                                                            "clearAvatarLocalGadget",
                                                            (const std::allocator<char> *)(v2 + 496));
                                                          clear_avatar_local_gadget_ptr = jsonValueFind(
                                                                                            jval,
                                                                                            (const std::string *)(v2 + 4288));
                                                          std::string::~string((void *)(v2 + 4288));
                                                          *(_DWORD *)(((v2 + 4288) >> 3) + 0x7FFF8000) = -117901064;
                                                          std::allocator<char>::~allocator(v2 + 496);
                                                          *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = -8;
                                                          if ( clear_avatar_local_gadget_ptr
                                                            && !fromJson<bool>(
                                                                  clear_avatar_local_gadget_ptr,
                                                                  &this->clear_avatar_local_gadget) )
                                                          {
                                                            *(_DWORD *)(((v2 + 4352) >> 3) + 0x7FFF8000) = 0;
                                                            if ( *(char *)(((v2 + 4352) >> 3) + 0x7FFF8000) < 0
                                                              || *(_BYTE *)(((v2 + 4383) >> 3) + 0x7FFF8000) != 0
                                                              && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 4383) >> 3) + 0x7FFF8000) )
                                                            {
                                                              __asan_report_store_n(v2 + 4352, 32LL);
                                                            }
                                                            common::milog::MiLogStream::create(
                                                              (common::milog::MiLogStream *)(v2 + 4352),
                                                              &common::milog::MiLogDefault::default_log_obj_,
                                                              3u,
                                                              "./src/json_data_auto/ConfigCutscene.cpp",
                                                              "fromJson",
                                                              632);
                                                            common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                                                              (common::milog::MiLogStream *const)(v2 + 4352),
                                                              (const char (*)[44])"fromJson for: clearAvatarLocalGadget fails!");
                                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4352));
                                                            v6 = 0;
                                                          }
                                                          else
                                                          {
                                                            *(_DWORD *)(((v2 + 4416) >> 3) + 0x7FFF8000) = 0;
                                                            *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = 1;
                                                            std::allocator<char>::allocator(v2 + 512);
                                                            std::string::basic_string<std::allocator<char>>(
                                                              (std::string *const)(v2 + 4416),
                                                              "disableGPUCulling",
                                                              (const std::allocator<char> *)(v2 + 512));
                                                            disable_gpuculling_ptr = jsonValueFind(
                                                                                       jval,
                                                                                       (const std::string *)(v2 + 4416));
                                                            std::string::~string((void *)(v2 + 4416));
                                                            *(_DWORD *)(((v2 + 4416) >> 3) + 0x7FFF8000) = -117901064;
                                                            std::allocator<char>::~allocator(v2 + 512);
                                                            *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = -8;
                                                            if ( disable_gpuculling_ptr
                                                              && !fromJson<bool>(
                                                                    disable_gpuculling_ptr,
                                                                    &this->disable_gpuculling) )
                                                            {
                                                              *(_DWORD *)(((v2 + 4480) >> 3) + 0x7FFF8000) = 0;
                                                              if ( *(char *)(((v2 + 4480) >> 3) + 0x7FFF8000) < 0
                                                                || *(_BYTE *)(((v2 + 4511) >> 3) + 0x7FFF8000) != 0
                                                                && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 4511) >> 3) + 0x7FFF8000) )
                                                              {
                                                                __asan_report_store_n(v2 + 4480, 32LL);
                                                              }
                                                              common::milog::MiLogStream::create(
                                                                (common::milog::MiLogStream *)(v2 + 4480),
                                                                &common::milog::MiLogDefault::default_log_obj_,
                                                                3u,
                                                                "./src/json_data_auto/ConfigCutscene.cpp",
                                                                "fromJson",
                                                                644);
                                                              common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                                                (common::milog::MiLogStream *const)(v2 + 4480),
                                                                (const char (*)[39])"fromJson for: disableGPUCulling fails!");
                                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4480));
                                                              v6 = 0;
                                                            }
                                                            else
                                                            {
                                                              *(_DWORD *)(((v2 + 4544) >> 3) + 0x7FFF8000) = 0;
                                                              *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = 1;
                                                              std::allocator<char>::allocator(v2 + 528);
                                                              std::string::basic_string<std::allocator<char>>(
                                                                (std::string *const)(v2 + 4544),
                                                                "canPlayerLoop",
                                                                (const std::allocator<char> *)(v2 + 528));
                                                              can_player_loop_ptr = jsonValueFind(
                                                                                      jval,
                                                                                      (const std::string *)(v2 + 4544));
                                                              std::string::~string((void *)(v2 + 4544));
                                                              *(_DWORD *)(((v2 + 4544) >> 3) + 0x7FFF8000) = -117901064;
                                                              std::allocator<char>::~allocator(v2 + 528);
                                                              *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = -8;
                                                              if ( can_player_loop_ptr
                                                                && !fromJson<bool>(
                                                                      can_player_loop_ptr,
                                                                      &this->can_player_loop) )
                                                              {
                                                                *(_DWORD *)(((v2 + 4608) >> 3) + 0x7FFF8000) = 0;
                                                                if ( *(char *)(((v2 + 4608) >> 3) + 0x7FFF8000) < 0
                                                                  || *(_BYTE *)(((v2 + 4639) >> 3) + 0x7FFF8000) != 0
                                                                  && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 4639) >> 3) + 0x7FFF8000) )
                                                                {
                                                                  __asan_report_store_n(v2 + 4608, 32LL);
                                                                }
                                                                common::milog::MiLogStream::create(
                                                                  (common::milog::MiLogStream *)(v2 + 4608),
                                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                                  3u,
                                                                  "./src/json_data_auto/ConfigCutscene.cpp",
                                                                  "fromJson",
                                                                  656);
                                                                common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                                                                  (common::milog::MiLogStream *const)(v2 + 4608),
                                                                  (const char (*)[35])"fromJson for: canPlayerLoop fails!");
                                                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4608));
                                                                v6 = 0;
                                                              }
                                                              else
                                                              {
                                                                *(_DWORD *)(((v2 + 4672) >> 3) + 0x7FFF8000) = 0;
                                                                *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = 1;
                                                                std::allocator<char>::allocator(v2 + 544);
                                                                std::string::basic_string<std::allocator<char>>(
                                                                  (std::string *const)(v2 + 4672),
                                                                  "mainQuestId",
                                                                  (const std::allocator<char> *)(v2 + 544));
                                                                main_quest_id_ptr = jsonValueFind(
                                                                                      jval,
                                                                                      (const std::string *)(v2 + 4672));
                                                                std::string::~string((void *)(v2 + 4672));
                                                                *(_DWORD *)(((v2 + 4672) >> 3) + 0x7FFF8000) = -117901064;
                                                                std::allocator<char>::~allocator(v2 + 544);
                                                                *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = -8;
                                                                if ( main_quest_id_ptr
                                                                  && !fromJson<unsigned int>(
                                                                        main_quest_id_ptr,
                                                                        &this->main_quest_id) )
                                                                {
                                                                  *(_DWORD *)(((v2 + 4736) >> 3) + 0x7FFF8000) = 0;
                                                                  if ( *(char *)(((v2 + 4736) >> 3) + 0x7FFF8000) < 0
                                                                    || *(_BYTE *)(((v2 + 4767) >> 3) + 0x7FFF8000) != 0
                                                                    && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 4767) >> 3) + 0x7FFF8000) )
                                                                  {
                                                                    __asan_report_store_n(v2 + 4736, 32LL);
                                                                  }
                                                                  common::milog::MiLogStream::create(
                                                                    (common::milog::MiLogStream *)(v2 + 4736),
                                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                                    3u,
                                                                    "./src/json_data_auto/ConfigCutscene.cpp",
                                                                    "fromJson",
                                                                    668);
                                                                  common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                                                    (common::milog::MiLogStream *const)(v2 + 4736),
                                                                    (const char (*)[33])"fromJson for: mainQuestId fails!");
                                                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4736));
                                                                  v6 = 0;
                                                                }
                                                                else
                                                                {
                                                                  *(_DWORD *)(((v2 + 4800) >> 3) + 0x7FFF8000) = 0;
                                                                  *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = 1;
                                                                  std::allocator<char>::allocator(v2 + 560);
                                                                  std::string::basic_string<std::allocator<char>>(
                                                                    (std::string *const)(v2 + 4800),
                                                                    "disableAvatarLocalGadget",
                                                                    (const std::allocator<char> *)(v2 + 560));
                                                                  disable_avatar_local_gadget_ptr = jsonValueFind(jval, (const std::string *)(v2 + 4800));
                                                                  std::string::~string((void *)(v2 + 4800));
                                                                  *(_DWORD *)(((v2 + 4800) >> 3) + 0x7FFF8000) = -117901064;
                                                                  std::allocator<char>::~allocator(v2 + 560);
                                                                  *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = -8;
                                                                  if ( disable_avatar_local_gadget_ptr
                                                                    && !fromJson<bool>(
                                                                          disable_avatar_local_gadget_ptr,
                                                                          &this->disable_avatar_local_gadget) )
                                                                  {
                                                                    *(_DWORD *)(((v2 + 4864) >> 3) + 0x7FFF8000) = 0;
                                                                    if ( *(char *)(((v2 + 4864) >> 3) + 0x7FFF8000) < 0
                                                                      || *(_BYTE *)(((v2 + 4895) >> 3) + 0x7FFF8000) != 0
                                                                      && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 4895) >> 3) + 0x7FFF8000) )
                                                                    {
                                                                      __asan_report_store_n(v2 + 4864, 32LL);
                                                                    }
                                                                    common::milog::MiLogStream::create(
                                                                      (common::milog::MiLogStream *)(v2 + 4864),
                                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                                      3u,
                                                                      "./src/json_data_auto/ConfigCutscene.cpp",
                                                                      "fromJson",
                                                                      680);
                                                                    common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                                                                      (common::milog::MiLogStream *const)(v2 + 4864),
                                                                      (const char (*)[46])"fromJson for: disableAvatarLocalGadget fails!");
                                                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4864));
                                                                    v6 = 0;
                                                                  }
                                                                  else
                                                                  {
                                                                    v8 = ((_BYTE)this + 65) & 7;
                                                                    v9 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3)
                                                                                   + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
                                                                    if ( (_BYTE)v9 )
                                                                      __asan_report_store1(
                                                                        &this->is_json_loaded,
                                                                        v8,
                                                                        v9);
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
  v10 = v6;
  if ( v45 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 88) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF805C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8064) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF806C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8074) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF807C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8084) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF808C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8094) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF809C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80A4) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80AC) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80B4) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80BC) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80C4) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80CC) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80D4) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80DC) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80E4) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80EC) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80F4) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80FC) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8104) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF810C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8114) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF811C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8124) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF812C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8134) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF813C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8144) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF814C) = 0LL;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF81DC) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81E4) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF81EC) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81F4) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF81FC) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8204) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF820C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8214) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF821C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8224) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF822C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8234) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF823C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8244) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF824C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8254) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF825C) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8264) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_7(v2, 4928LL, v45);
  }
  return v10;
};

// Line 687: range 0000000013B4C6CC-0000000013B4D02E
data::ConfigBaseCutscenePtr __cdecl data::ConfigBaseCutscene::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigBaseCutscenePtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<data::ConfigBaseCutscene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  char v11; // cl
  const Json::Value *jval_ptr; // [rsp+18h] [rbp-208h]
  char v13[512]; // [rsp+20h] [rbp-200h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 48 1 9 <unknown> 64 16 7 ptr:700 96 32 9 <unknown> 160 32 9 <unknown> 224 32 13 type_name:694 "
                        "288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBaseCutscene::parseFromJson;
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
        "./src/json_data_auto/ConfigCutscene.cpp",
        "parseFromJson",
        697);
      common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[46])"fromJson for: ConfigBaseCutscene $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigBaseCutscene>::shared_ptr((std::shared_ptr<data::ConfigBaseCutscene> *const)jval, 0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigBaseCutscene((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigBaseCutscene>((const std::shared_ptr<data::ConfigBaseCutscene> *)(v2 + 64), 0LL) )
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
          "./src/json_data_auto/ConfigCutscene.cpp",
          "parseFromJson",
          703);
        v6 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
               (common::milog::MiLogStream *const)(v2 + 352),
               (const char (*)[44])"create ConfigBaseCutscene fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 224));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
        *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigBaseCutscene>::shared_ptr(
          (std::shared_ptr<data::ConfigBaseCutscene> *const)jval,
          0LL);
      }
      else
      {
        v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigBaseCutscene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBaseCutscene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
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
            "./src/json_data_auto/ConfigCutscene.cpp",
            "parseFromJson",
            708);
          v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                 (common::milog::MiLogStream *const)(v2 + 416),
                 (const std::string *)(v2 + 224));
          common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
          *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigBaseCutscene>::shared_ptr(
            (std::shared_ptr<data::ConfigBaseCutscene> *const)jval,
            0LL);
        }
        else
        {
          v10 = std::__shared_ptr_access<data::ConfigBaseCutscene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBaseCutscene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          v11 = *(_BYTE *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000);
          if ( v11 != 0 && (((unsigned __int8)v10 + 65) & 7) >= v11 )
          {
            LOBYTE(v1) = v11 != 0;
            __asan_report_store1(&v10->is_json_loaded, v1, v10);
          }
          v10->is_json_loaded = 1;
          std::shared_ptr<data::ConfigBaseCutscene>::shared_ptr(
            (std::shared_ptr<data::ConfigBaseCutscene> *const)jval,
            (std::shared_ptr<data::ConfigBaseCutscene> *)(v2 + 64));
        }
      }
      std::shared_ptr<data::ConfigBaseCutscene>::~shared_ptr((std::shared_ptr<data::ConfigBaseCutscene> *const)(v2 + 64));
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
      "./src/json_data_auto/ConfigCutscene.cpp",
      "parseFromJson",
      691);
    common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[51])"jsonValueFind for: ConfigBaseCutscene $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigBaseCutscene>::shared_ptr((std::shared_ptr<data::ConfigBaseCutscene> *const)jval, 0LL);
  }
  if ( v13 == (char *)v2 )
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
  result._M_ptr = (std::__shared_ptr<data::ConfigBaseCutscene,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 716: range 0000000013B4D030-0000000013B4DA33
int32_t __cdecl data::ConfigBaseCutscene::getHashValue(const data::ConfigBaseCutscene *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // eax
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rdx
  int32_t v18; // eax
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rdx
  int32_t v25; // eax
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rdx
  int32_t ArrHashValue; // eax
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // rdx
  int32_t result; // eax
  char v36[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:717";
  *(_QWORD *)(v2 + 16) = data::ConfigBaseCutscene::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->type);
  }
  common::tools::HashUtils::appendHash(this->type, (int32_t *)(v2 + 32));
  HashValue = data::ConfigCutscenePreTask::getHashValue(&this->pre_task_cfg);
  common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->can_skip >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->can_skip, v2 + 32, &this->can_skip);
  common::tools::HashUtils::appendHash(this->can_skip, (int32_t *)(v2 + 32));
  v6 = ((_BYTE)this + 81) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->can_skip_if_played >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->can_skip_if_played >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_load1(&this->can_skip_if_played, v6, v7);
  common::tools::HashUtils::appendHash(this->can_skip_if_played, (int32_t *)(v2 + 32));
  v8 = ((_BYTE)this + 82) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->force_can_skip >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->force_can_skip >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_load1(&this->force_can_skip, v8, v9);
  common::tools::HashUtils::appendHash(this->force_can_skip, (int32_t *)(v2 + 32));
  v10 = ((_BYTE)this + 83) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&this->skip_general_dialog >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&this->skip_general_dialog >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_load1(&this->skip_general_dialog, v10, v11);
  common::tools::HashUtils::appendHash(this->skip_general_dialog, (int32_t *)(v2 + 32));
  v12 = ((_BYTE)this + 84) & 7;
  v13 = (*(_BYTE *)(((unsigned __int64)&this->can >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((unsigned __int64)&this->can >> 3) + 0x7FFF8000));
  if ( (_BYTE)v13 )
    __asan_report_load1(&this->can, v12, v13);
  common::tools::HashUtils::appendHash(this->can, (int32_t *)(v2 + 32));
  v14 = ((_BYTE)this + 85) & 7;
  v15 = (*(_BYTE *)(((unsigned __int64)&this->clear_black_screen >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v14 >= *(_BYTE *)(((unsigned __int64)&this->clear_black_screen >> 3) + 0x7FFF8000));
  if ( (_BYTE)v15 )
    __asan_report_load1(&this->clear_black_screen, v14, v15);
  common::tools::HashUtils::appendHash(this->clear_black_screen, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->fade_out_when_finish >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fade_out_when_finish >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->fade_out_when_finish);
  }
  common::tools::HashUtils::appendHash(this->fade_out_when_finish, (int32_t *)(v2 + 32));
  v16 = ((_BYTE)this + 92) & 7;
  v17 = (*(_BYTE *)(((unsigned __int64)&this->direct_transmit >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v16 >= *(_BYTE *)(((unsigned __int64)&this->direct_transmit >> 3) + 0x7FFF8000));
  if ( (_BYTE)v17 )
    __asan_report_load1(&this->direct_transmit, v16, v17);
  common::tools::HashUtils::appendHash(this->direct_transmit, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->delay_transmit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->delay_transmit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->delay_transmit);
  }
  common::tools::HashUtils::appendHash(this->delay_transmit, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->lua_data_path, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->res_path, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->cast_list_path, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->entity_ban, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->ban_gadget_effect >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->ban_gadget_effect, v2 + 32, &this->ban_gadget_effect);
  common::tools::HashUtils::appendHash(this->ban_gadget_effect, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->start_pos_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_pos_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->start_pos_type);
  }
  common::tools::HashUtils::appendHash(this->start_pos_type, (int32_t *)(v2 + 32));
  v18 = data::Vector::getHashValue(&this->start_offset);
  common::tools::HashUtils::appendHash(v18, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->need_xzeuler >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->need_xzeuler, v2 + 32, &this->need_xzeuler);
  common::tools::HashUtils::appendHash(this->need_xzeuler, (int32_t *)(v2 + 32));
  v19 = ((_BYTE)this + 1) & 7;
  v20 = (*(_BYTE *)(((unsigned __int64)&this->need_yeuler >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v19 >= *(_BYTE *)(((unsigned __int64)&this->need_yeuler >> 3) + 0x7FFF8000));
  if ( (_BYTE)v20 )
    __asan_report_load1(&this->need_yeuler, v19, v20);
  common::tools::HashUtils::appendHash(this->need_yeuler, (int32_t *)(v2 + 32));
  v21 = ((_BYTE)this + 2) & 7;
  v22 = (*(_BYTE *)(((unsigned __int64)&this->keep_camera >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v21 >= *(_BYTE *)(((unsigned __int64)&this->keep_camera >> 3) + 0x7FFF8000));
  if ( (_BYTE)v22 )
    __asan_report_load1(&this->keep_camera, v21, v22);
  common::tools::HashUtils::appendHash(this->keep_camera, (int32_t *)(v2 + 32));
  v23 = ((_BYTE)this + 3) & 7;
  v24 = (*(_BYTE *)(((unsigned __int64)&this->use_target_pos >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v23 >= *(_BYTE *)(((unsigned __int64)&this->use_target_pos >> 3) + 0x7FFF8000));
  if ( (_BYTE)v24 )
    __asan_report_load1(&this->use_target_pos, v23, v24);
  common::tools::HashUtils::appendHash(this->use_target_pos, (int32_t *)(v2 + 32));
  v25 = data::Vector::getHashValue(&this->target_pos);
  common::tools::HashUtils::appendHash(v25, (int32_t *)(v2 + 32));
  v26 = ((_BYTE)this + 20) & 7;
  v27 = (*(_BYTE *)(((unsigned __int64)&this->modify_last_pose_offset >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v26 >= *(_BYTE *)(((unsigned __int64)&this->modify_last_pose_offset >> 3) + 0x7FFF8000));
  if ( (_BYTE)v27 )
    __asan_report_load1(&this->modify_last_pose_offset, v26, v27);
  common::tools::HashUtils::appendHash(this->modify_last_pose_offset, (int32_t *)(v2 + 32));
  v28 = ((_BYTE)this + 21) & 7;
  v29 = (*(_BYTE *)(((unsigned __int64)&this->attack_mode_recover >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v28 >= *(_BYTE *)(((unsigned __int64)&this->attack_mode_recover >> 3) + 0x7FFF8000));
  if ( (_BYTE)v29 )
    __asan_report_load1(&this->attack_mode_recover, v28, v29);
  common::tools::HashUtils::appendHash(this->attack_mode_recover, (int32_t *)(v2 + 32));
  ArrHashValue = data::getArrHashValue(&this->crowd_lod0_list);
  common::tools::HashUtils::appendHash(ArrHashValue, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->enable_camera_displacement >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->enable_camera_displacement, v2 + 32, &this->enable_camera_displacement);
  common::tools::HashUtils::appendHash(this->enable_camera_displacement, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_runtime_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entity_runtime_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->entity_runtime_id);
  }
  common::tools::HashUtils::appendHash(this->entity_runtime_id, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->clear_avatar_local_gadget >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->clear_avatar_local_gadget, v2 + 32, &this->clear_avatar_local_gadget);
  common::tools::HashUtils::appendHash(this->clear_avatar_local_gadget, (int32_t *)(v2 + 32));
  v31 = ((_BYTE)this + 57) & 7;
  v32 = (*(_BYTE *)(((unsigned __int64)&this->disable_gpuculling >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v31 >= *(_BYTE *)(((unsigned __int64)&this->disable_gpuculling >> 3) + 0x7FFF8000));
  if ( (_BYTE)v32 )
    __asan_report_load1(&this->disable_gpuculling, v31, v32);
  common::tools::HashUtils::appendHash(this->disable_gpuculling, (int32_t *)(v2 + 32));
  v33 = ((_BYTE)this + 58) & 7;
  v34 = (*(_BYTE *)(((unsigned __int64)&this->can_player_loop >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v33 >= *(_BYTE *)(((unsigned __int64)&this->can_player_loop >> 3) + 0x7FFF8000));
  if ( (_BYTE)v34 )
    __asan_report_load1(&this->can_player_loop, v33, v34);
  common::tools::HashUtils::appendHash(this->can_player_loop, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->main_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->main_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->main_quest_id);
  }
  common::tools::HashUtils::appendHash(this->main_quest_id, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->disable_avatar_local_gadget >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->disable_avatar_local_gadget, v2 + 32, &this->disable_avatar_local_gadget);
  common::tools::HashUtils::appendHash(this->disable_avatar_local_gadget, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v36 == (char *)v2 )
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

// Line 758: range 0000000013C1A022-0000000013C1A263
void __cdecl data::ConfigTimelineRegister::ConfigTimelineRegister(data::ConfigTimelineRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigBaseCutscene> *v4; // rax
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
  *(_QWORD *)(v1 + 16) = data::ConfigTimelineRegister::ConfigTimelineRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigTimeline>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigTimeline",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigBaseCutscene>>::operator[](
         &data::g_ConfigBaseCutsceneMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigBaseCutscene>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigBaseCutscene>::operator=<data::ConfigTimeline>(
    v4,
    (std::shared_ptr<data::ConfigTimeline> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigTimeline>::~shared_ptr((std::shared_ptr<data::ConfigTimeline> *const)(v1 + 64));
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

// Line 761: range 0000000013B4DA34-0000000013B4DDB1
void __cdecl data::ConfigTimeline::foreachMember(
        data::ConfigTimeline *const this,
        std::function<void(std::any&)> *p_func)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5[272]; // [rsp+10h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 16 17 sync_load_any:763 64 16 24 fade_in_duration_any:765 96 16 25 fade_out_duration_any:76"
                        "7 128 16 16 force_gc_any:769 160 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigTimeline::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862726] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 160), p_func);
  data::ConfigBaseCutscene::foreachMember(
    (data::ConfigBaseCutscene *const)this,
    (std::function<void(std::any&)> *)(v2 + 160));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 160));
  *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>((std::any *const)(v2 + 32), &this->sync_load);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 32));
  *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>(
    (std::any *const)(v2 + 64),
    &this->fade_in_duration);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 64));
  *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>(
    (std::any *const)(v2 + 96),
    &this->fade_out_duration);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 96));
  *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>((std::any *const)(v2 + 128), &this->force_gc);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 128));
  std::any::~any((std::any *const)(v2 + 128));
  std::any::~any((std::any *const)(v2 + 96));
  std::any::~any((std::any *const)(v2 + 64));
  std::any::~any((std::any *const)(v2 + 32));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 774: range 0000000013B4DDB2-0000000013B4DEC2
std::shared_ptr<data::ConfigBaseCutscene> __cdecl data::ConfigTimeline::clone(data::ConfigTimeline *const this)
{
  data::ConfigTimeline *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigBaseCutscene> result; // rax
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
  *(_QWORD *)(v2 + 16) = data::ConfigTimeline::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigTimeline,data::ConfigTimeline&>(
    (common::tools::perf::allocator<data::ConfigTimeline,data::ConfigTimeline> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigBaseCutscene>::shared_ptr<data::ConfigTimeline,void>(
    (std::shared_ptr<data::ConfigBaseCutscene> *const)this,
    (std::shared_ptr<data::ConfigTimeline> *)(v2 + 32));
  std::shared_ptr<data::ConfigTimeline>::~shared_ptr((std::shared_ptr<data::ConfigTimeline> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigBaseCutscene,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 778: range 0000000013B4DEC4-0000000013B4DF07
data::ConfigTimelinePtr __cdecl data::ConfigTimelineFactory::create(data::ConfigTimelineFactory *const this)
{
  data::ConfigTimelinePtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigTimeline>();
  result._M_ptr = (std::__shared_ptr<data::ConfigTimeline,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 780: range 0000000013B4DF08-0000000013B4EB5B
bool __cdecl data::ConfigTimeline::fromJson(data::ConfigTimeline *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *sync_load_ptr; // [rsp+10h] [rbp-2E0h]
  const Json::Value *fade_in_duration_ptr; // [rsp+18h] [rbp-2D8h]
  const Json::Value *fade_out_duration_ptr; // [rsp+20h] [rbp-2D0h]
  const Json::Value *force_gc_ptr; // [rsp+28h] [rbp-2C8h]
  char v12[704]; // [rsp+30h] [rbp-2C0h] BYREF

  v2 = (unsigned __int64)v12;
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
  *(_QWORD *)(v2 + 16) = data::ConfigTimeline::fromJson;
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
  if ( !data::ConfigBaseCutscene::fromJson((data::ConfigBaseCutscene *const)this, jval) )
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
      3u,
      "./src/json_data_auto/ConfigCutscene.cpp",
      "fromJson",
      783);
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
      (common::milog::MiLogStream *const)(v2 + 96),
      (const char (*)[40])"fromJson for: ConfigBaseCutscene fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 32);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 160),
      "syncLoad",
      (const std::allocator<char> *)(v2 + 32));
    sync_load_ptr = jsonValueFind(jval, (const std::string *)(v2 + 160));
    std::string::~string((void *)(v2 + 160));
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 32);
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    if ( sync_load_ptr && !fromJson<bool>(sync_load_ptr, &this->sync_load) )
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
        3u,
        "./src/json_data_auto/ConfigCutscene.cpp",
        "fromJson",
        795);
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        (common::milog::MiLogStream *const)(v2 + 224),
        (const char (*)[30])"fromJson for: syncLoad fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
      result = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 48);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 288),
        "fadeInDuration",
        (const std::allocator<char> *)(v2 + 48));
      fade_in_duration_ptr = jsonValueFind(jval, (const std::string *)(v2 + 288));
      std::string::~string((void *)(v2 + 288));
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 48);
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( fade_in_duration_ptr && !fromJson<float>(fade_in_duration_ptr, &this->fade_in_duration) )
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
          "./src/json_data_auto/ConfigCutscene.cpp",
          "fromJson",
          807);
        common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
          (common::milog::MiLogStream *const)(v2 + 352),
          (const char (*)[36])"fromJson for: fadeInDuration fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
        result = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 64);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 416),
          "fadeOutDuration",
          (const std::allocator<char> *)(v2 + 64));
        fade_out_duration_ptr = jsonValueFind(jval, (const std::string *)(v2 + 416));
        std::string::~string((void *)(v2 + 416));
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 64);
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
        if ( fade_out_duration_ptr && !fromJson<float>(fade_out_duration_ptr, &this->fade_out_duration) )
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
            "./src/json_data_auto/ConfigCutscene.cpp",
            "fromJson",
            819);
          common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
            (common::milog::MiLogStream *const)(v2 + 480),
            (const char (*)[37])"fromJson for: fadeOutDuration fails!");
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
            "forceGC",
            (const std::allocator<char> *)(v2 + 80));
          force_gc_ptr = jsonValueFind(jval, (const std::string *)(v2 + 544));
          std::string::~string((void *)(v2 + 544));
          *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 80);
          *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
          if ( force_gc_ptr && !fromJson<bool>(force_gc_ptr, &this->force_gc) )
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
              "./src/json_data_auto/ConfigCutscene.cpp",
              "fromJson",
              831);
            common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              (common::milog::MiLogStream *const)(v2 + 608),
              (const char (*)[29])"fromJson for: forceGC fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
            result = 0;
          }
          else
          {
            v6 = ((_BYTE)this + 65) & 7;
            v7 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
            if ( (_BYTE)v7 )
              __asan_report_store1(&this->is_json_loaded, v6, v7);
            this->is_json_loaded = 1;
            result = 1;
          }
        }
      }
    }
  }
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
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

// Line 838: range 0000000013B4EB5C-0000000013B4F6AF
data::ConfigTimelinePtr __cdecl data::ConfigTimeline::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigTimelinePtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<data::ConfigTimeline,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  char v11; // cl
  const Json::Value *jval_ptr; // [rsp+18h] [rbp-268h]
  char v13[608]; // [rsp+20h] [rbp-260h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 12 base_ptr:851 96 16 7 ptr:857 128 32 9 <unknown> 192 32 9 <unknown> "
                        "256 32 13 type_name:845 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigTimeline::parseFromJson;
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
        "./src/json_data_auto/ConfigCutscene.cpp",
        "parseFromJson",
        848);
      common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[42])"fromJson for: ConfigTimeline $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigTimeline>::shared_ptr((std::shared_ptr<data::ConfigTimeline> *const)jval, 0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigBaseCutscene((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigBaseCutscene>((const std::shared_ptr<data::ConfigBaseCutscene> *)(v2 + 64), 0LL) )
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
          "./src/json_data_auto/ConfigCutscene.cpp",
          "parseFromJson",
          854);
        v6 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[44])"create ConfigBaseCutscene fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigTimeline>::shared_ptr((std::shared_ptr<data::ConfigTimeline> *const)jval, 0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigTimeline,data::ConfigBaseCutscene>((const std::shared_ptr<data::ConfigBaseCutscene> *)(v2 + 96));
        if ( std::operator==<data::ConfigTimeline>((const std::shared_ptr<data::ConfigTimeline> *)(v2 + 96), 0LL) )
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
            "./src/json_data_auto/ConfigCutscene.cpp",
            "parseFromJson",
            860);
          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[33])"cast to ConfigTimelinePtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigTimeline>::shared_ptr((std::shared_ptr<data::ConfigTimeline> *const)jval, 0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigTimeline,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigTimeline,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
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
              "./src/json_data_auto/ConfigCutscene.cpp",
              "parseFromJson",
              865);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigTimeline>::shared_ptr((std::shared_ptr<data::ConfigTimeline> *const)jval, 0LL);
          }
          else
          {
            v10 = std::__shared_ptr_access<data::ConfigTimeline,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigTimeline,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000);
            if ( v11 != 0 && (((unsigned __int8)v10 + 65) & 7) >= v11 )
            {
              LOBYTE(v1) = v11 != 0;
              __asan_report_store1(&v10->is_json_loaded, v1, v10);
            }
            v10->is_json_loaded = 1;
            std::shared_ptr<data::ConfigTimeline>::shared_ptr(
              (std::shared_ptr<data::ConfigTimeline> *const)jval,
              (std::shared_ptr<data::ConfigTimeline> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigTimeline>::~shared_ptr((std::shared_ptr<data::ConfigTimeline> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigBaseCutscene>::~shared_ptr((std::shared_ptr<data::ConfigBaseCutscene> *const)(v2 + 64));
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
      "./src/json_data_auto/ConfigCutscene.cpp",
      "parseFromJson",
      842);
    common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[47])"jsonValueFind for: ConfigTimeline $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigTimeline>::shared_ptr((std::shared_ptr<data::ConfigTimeline> *const)jval, 0LL);
  }
  if ( v13 == (char *)v2 )
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
  result._M_ptr = (std::__shared_ptr<data::ConfigTimeline,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 873: range 0000000013B4F6B0-0000000013B4F92E
int32_t __cdecl data::ConfigTimeline::getHashValue(const data::ConfigTimeline *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // edx
  char v6; // al
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  int32_t result; // eax
  char v12[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:874";
  *(_QWORD *)(v2 + 16) = data::ConfigTimeline::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigBaseCutscene::getHashValue((const data::ConfigBaseCutscene *const)this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  v7 = ((_BYTE)this + 66) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->sync_load >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->sync_load >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_load1(&this->sync_load, v7, v8);
  common::tools::HashUtils::appendHash(this->sync_load, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->fade_in_duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fade_in_duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->fade_in_duration);
  }
  common::tools::HashUtils::appendHash(this->fade_in_duration, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->fade_out_duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fade_out_duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->fade_out_duration);
  }
  common::tools::HashUtils::appendHash(this->fade_out_duration, (int32_t *)(v2 + 32));
  v9 = ((_BYTE)this + 76) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->force_gc >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->force_gc >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_load1(&this->force_gc, v9, v10);
  common::tools::HashUtils::appendHash(this->force_gc, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v12 == (char *)v2 )
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

// Line 883: range 0000000013B4F92F-0000000013B4FBAC
const char *__cdecl data::enumValToStr(data::CutsceneIndexType e)
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
  if ( e == Other_6 )
  {
    result = "Other";
  }
  else
  {
    if ( e > Other_6 )
      goto LABEL_22;
    if ( e == CUTSCENE_0 )
    {
      result = "CUTSCENE";
      goto LABEL_17;
    }
    if ( e == VIDEO )
    {
      result = "VIDEO";
    }
    else
    {
LABEL_22:
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
        "./src/json_data_auto/ConfigCutscene.cpp",
        "enumValToStr",
        893);
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
      result = byte_1ABBC960;
    }
  }
LABEL_17:
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

// Line 899: range 0000000013B4FBAD-0000000013B5048E
bool __cdecl data::enumStrToVal(const std::string *s, data::CutsceneIndexType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::CutsceneIndexType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::CutsceneIndexType> >::pointer v11; // rax
  data::CutsceneIndexType second; // ecx
  char v13; // dl
  data::CutsceneIndexType *ea; // [rsp+10h] [rbp-220h]
  char v15[528]; // [rsp+20h] [rbp-210h] BYREF

  ea = e;
  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 8 6"
                        " it:911 160 8 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 120 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = -234556924;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862733] = -218103808;
  v4[536862734] = -202116109;
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
      "./src/json_data_auto/ConfigCutscene.cpp",
      "enumStrToVal",
      902);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::CutsceneIndexType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::CutsceneIndexType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::CutsceneIndexType>::pair<char const(&)[9],data::CutsceneIndexType,true>(
        (std::pair<const std::string,data::CutsceneIndexType> *const)(v2 + 320),
        (const char (*)[9])"CUTSCENE",
        (data::CutsceneIndexType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "CUTSCENE");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::CutsceneIndexType>::pair<char const(&)[6],data::CutsceneIndexType,true>(
        (std::pair<const std::string,data::CutsceneIndexType> *const)(v2 + 360),
        (const char (*)[6])"VIDEO",
        (data::CutsceneIndexType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "VIDEO");
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::CutsceneIndexType>::pair<char const(&)[6],data::CutsceneIndexType,true>(
        (std::pair<const std::string,data::CutsceneIndexType> *const)(v2 + 400),
        (const char (*)[6])"Other",
        (data::CutsceneIndexType *)(v2 + 112));
      std::allocator<std::pair<std::string const,data::CutsceneIndexType>>::allocator((std::allocator<std::pair<const std::string,data::CutsceneIndexType> > *const)(v2 + 64));
      std::map<std::string,data::CutsceneIndexType>::map(
        &data::enumStrToVal(std::string const&,data::CutsceneIndexType &)::m,
        (std::initializer_list<std::pair<const std::string,data::CutsceneIndexType> >)__PAIR128__(3LL, v2 + 320),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::CutsceneIndexType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::CutsceneIndexType &)::m);
      e = (data::CutsceneIndexType *)&data::enumStrToVal(std::string const&,data::CutsceneIndexType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::CutsceneIndexType>::~map,
        &data::enumStrToVal(std::string const&,data::CutsceneIndexType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::CutsceneIndexType>>::~allocator((std::allocator<std::pair<const std::string,data::CutsceneIndexType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::CutsceneIndexType> *)(v2 + 440);
            i != (std::pair<const std::string,data::CutsceneIndexType> *)(v2 + 320);
            std::pair<std::string const,data::CutsceneIndexType>::~pair(i) )
      {
        --i;
      }
      v7 = ((v2 + 320) >> 3) + 2147450880;
      *(_DWORD *)v7 = -117901064;
      *(_DWORD *)(v7 + 4) = -117901064;
      *(_DWORD *)(v7 + 8) = -117901064;
      *(_WORD *)(v7 + 12) = -1800;
      *(_BYTE *)(v7 + 14) = -8;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, e);
    *(std::map<std::string,data::CutsceneIndexType>::iterator *)(v2 + 128) = std::map<std::string,data::CutsceneIndexType>::find(
                                                                               &data::enumStrToVal(std::string const&,data::CutsceneIndexType &)::m,
                                                                               s);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, s);
    *(std::map<std::string,data::CutsceneIndexType>::iterator *)(v2 + 160) = std::map<std::string,data::CutsceneIndexType>::end(&data::enumStrToVal(std::string const&,data::CutsceneIndexType &)::m);
    v8 = (char *)(v2 + 160);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::CutsceneIndexType> >::_Self *)(v2 + 128),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::CutsceneIndexType> >::_Self *)(v2 + 160));
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
    {
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 32 + 63) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 256, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 256),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigCutscene.cpp",
        "enumStrToVal",
        914);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 256),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::CutsceneIndexType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::CutsceneIndexType> > *const)(v2 + 128));
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

// Line 922: range 0000000013B5048F-0000000013B504D3
const char *__cdecl data::getDescription(data::CutsceneIndexType e)
{
  if ( e == Other_6 )
    return (const char *)&unk_1AC8DD00;
  if ( e > Other_6 )
    return "unknown enum value!";
  if ( e == CUTSCENE_0 )
    return (const char *)&unk_1AC90C20;
  if ( e == VIDEO )
    return (const char *)&unk_1AC90C60;
  else
    return "unknown enum value!";
};

// Line 938: range 0000000013B504D4-0000000013B5082E
bool __cdecl data::VideoPlatformSetting::fromJson(data::VideoPlatformSetting *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *video_volume_coefficient_ptr; // [rsp+18h] [rbp-E8h]
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
  *(_QWORD *)(v2 + 16) = data::VideoPlatformSetting::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 64),
    "videoVolumeCoefficient",
    (const std::allocator<char> *)(v2 + 48));
  video_volume_coefficient_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( video_volume_coefficient_ptr && !fromJson<float>(video_volume_coefficient_ptr, (float *)this) )
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
      "./src/json_data_auto/ConfigCutscene.cpp",
      "fromJson",
      948);
    common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[44])"fromJson for: videoVolumeCoefficient fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    result = 0;
  }
  else
  {
    v6 = ((_BYTE)this + 4) & 7;
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

// Line 956: range 0000000013B50830-0000000013B5099B
int32_t __cdecl data::VideoPlatformSetting::getHashValue(const data::VideoPlatformSetting *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t result; // eax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:957";
  *(_QWORD *)(v2 + 16) = data::VideoPlatformSetting::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  common::tools::HashUtils::appendHash(this->video_volume_coefficient, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v6 == (char *)v2 )
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

// Line 963: range 0000000013B5099C-0000000013B515AB
bool __cdecl data::mapFromJson(const Json::Value *jval, data::VideoPlatformSettingMap *m)
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
  const Json::Value *v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rdx
  data::VideoPlatformSetting *v14; // r8
  common::milog::MiLogStream *v15; // rax
  int v16; // r14d
  std::pair<std::__detail::_Node_iterator<std::pair<const std::string,data::VideoPlatformSetting>,false,true>,bool> v17; // rax
  common::milog::MiLogStream *v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  int v21; // edx
  char v24[752]; // [rsp+20h] [rbp-2F0h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(704LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 48 8 9 value:975 80 16 7 cit:965 112 16 9 <unknown> 144 32 7 key:968 208 32 9 <unknown> 272 3"
                        "2 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 40 12 tmp_jval:964 544 40 12 key_jval:96"
                        "7 624 40 14 value_jval:974";
  *(_QWORD *)(v3 + 16) = data::mapFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = -234881024;
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
  v5[536862735] = -234881024;
  v5[536862736] = -218959118;
  v5[536862738] = -218959360;
  v5[536862739] = 62194;
  v5[536862740] = -218103808;
  v5[536862741] = -202116109;
  Json::Value::Value((Json::Value *)(v3 + 464), jval);
  if ( *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  Json::Value::begin((Json::Value_0 *const)(v3 + 464));
  while ( 1 )
  {
    *(_WORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
    if ( *(_WORD *)(((v3 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    Json::Value::end((Json::Value_0 *const)(v3 + 464));
    v6 = Json::ValueIteratorBase::operator!=(
           (const Json::ValueIteratorBase *const)(v3 + 80),
           (const Json::ValueIteratorBase::SelfType *)(v3 + 112));
    *(_WORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = -1800;
    if ( !v6 )
      break;
    v7 = ((v3 + 544) >> 3) + 2147450880;
    *(_DWORD *)v7 = 0;
    *(_BYTE *)(v7 + 4) = 0;
    if ( *(char *)(((v3 + 544) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 583) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 71) & 7) >= *(_BYTE *)(((v3 + 583) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 544, 40LL);
    }
    Json::ValueIteratorBase::key((Json::ValueIteratorBase *)(v3 + 544));
    *(_DWORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 144);
    if ( !fromJson<std::string>((const Json::Value *)(v3 + 544), (std::string *)(v3 + 144)) )
    {
      *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 208) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 47) & 7) >= *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 208, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 208),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigCutscene.cpp",
        "mapFromJson",
        971);
      v8 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             (common::milog::MiLogStream *const)(v3 + 208),
             (const char (*)[21])"key fromJson fails: ");
      *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 272) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 111) & 7) >= *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 272, 32LL);
      }
      Json::Value::asString[abi:cxx11]((Json::String *)(v3 + 272), (Json::Value_0 *)(v3 + 544));
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
      v10 = ((v3 + 624) >> 3) + 2147450880;
      *(_DWORD *)v10 = 0;
      *(_BYTE *)(v10 + 4) = 0;
      v11 = Json::ValueIterator::operator*((Json::ValueIterator *const)(v3 + 80));
      Json::Value::Value((Json::Value *)(v3 + 624), v11);
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 48, v11);
      *(_DWORD *)(v3 + 48) = 1065353216;
      v12 = ((_BYTE)v3 - 64 + 116) & 7;
      v13 = (*(_BYTE *)(((v3 + 52) >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((v3 + 52) >> 3) + 0x7FFF8000));
      if ( (_BYTE)v13 )
        __asan_report_store1(v3 + 52, v12, v13);
      *(_BYTE *)(v3 + 52) = 0;
      if ( !data::VideoPlatformSetting::fromJson(
              (data::VideoPlatformSetting *const)(v3 + 48),
              (const Json::Value *)(v3 + 624)) )
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
          "./src/json_data_auto/ConfigCutscene.cpp",
          "mapFromJson",
          978);
        v15 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)(v3 + 336),
                (const char (*)[28])"value fromJson fails, key: ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, (const std::string *)(v3 + 144));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
        *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v16 = 0;
      }
      else
      {
        v17 = std::unordered_map<std::string,data::VideoPlatformSetting>::emplace<std::string&,data::VideoPlatformSetting&>(
                m,
                (std::string *)(v3 + 144),
                (data::VideoPlatformSetting *)(v3 + 48),
                (std::string *)(v3 + 144),
                v14);
        if ( !v17.second )
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
            "./src/json_data_auto/ConfigCutscene.cpp",
            "mapFromJson",
            983);
          v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 400),
                  (const char (*)[16])"key duplicate: ");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, (const std::string *)(v3 + 144));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 400));
          *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
          v2 = 0;
          v16 = 0;
        }
        else
        {
          v16 = 1;
        }
      }
      Json::Value::~Value((Json::Value_0 *const)(v3 + 624));
      v9 = v16 == 1;
    }
    std::string::~string((void *)(v3 + 144));
    Json::Value::~Value((Json::Value_0 *const)(v3 + 544));
    v19 = ((v3 + 544) >> 3) + 2147450880;
    *(_DWORD *)v19 = -117901064;
    *(_BYTE *)(v19 + 4) = -8;
    *(_DWORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = -117901064;
    v20 = ((v3 + 624) >> 3) + 2147450880;
    *(_DWORD *)v20 = -117901064;
    *(_BYTE *)(v20 + 4) = -8;
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( !v9 )
    {
      v21 = 0;
      goto LABEL_36;
    }
    Json::ValueIterator::operator++((Json::ValueIterator *const)(v3 + 80));
  }
  v21 = 1;
LABEL_36:
  *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) = -1800;
  if ( v21 == 1 )
    v2 = 1;
  Json::Value::~Value((Json::Value_0 *const)(v3 + 464));
  if ( v24 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 88) & 0xFFFFFFF8) >> 3));
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
  }
  return v2;
};

// Line 992: range 0000000013B515AC-0000000013B51853
int32_t __cdecl data::getMapHashValue(const data::VideoPlatformSettingMap *map)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::VideoPlatformSetting>,false,true>::reference v7; // [rsp+18h] [rbp-B8h]
  std::tuple_element<0,std::pair<const std::string,data::VideoPlatformSetting> >::type *key; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<const std::string,data::VideoPlatformSetting> >::type *val; // [rsp+28h] [rbp-A8h]
  char v10[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:993 64 8 15 __for_begin:994 96 8 13 __for_end:994";
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
  *(std::unordered_map<std::string,data::VideoPlatformSetting>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::VideoPlatformSetting>::begin(map);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<std::string,data::VideoPlatformSetting>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::VideoPlatformSetting>::end(map);
  while ( std::__detail::operator!=<std::pair<std::string const,data::VideoPlatformSetting>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::VideoPlatformSetting>,true> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::VideoPlatformSetting>,true> *)(v2 + 96)) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::VideoPlatformSetting>,false,true>::operator*((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::VideoPlatformSetting>,false,true> *const)(v2 + 64));
    key = std::get<0ul,std::string const,data::VideoPlatformSetting>(v7);
    val = (std::tuple_element<1,const std::pair<const std::string,data::VideoPlatformSetting> >::type *)std::get<1ul,std::string const,data::VideoPlatformSetting>(v7);
    common::tools::HashUtils::appendHash(key, (int32_t *)(v2 + 48));
    HashValue = data::VideoPlatformSetting::getHashValue(val);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    std::__detail::_Node_const_iterator<std::pair<std::string const,data::VideoPlatformSetting>,false,true>::operator++((std::__detail::_Node_const_iterator<std::pair<const std::string,data::VideoPlatformSetting>,false,true> *const)(v2 + 64));
  }
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 48);
  result = *(_DWORD *)(v2 + 48);
  if ( v10 == (char *)v2 )
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

// Line 1005: range 0000000013B51854-0000000013B51AB3
const char *__cdecl data::enumValToStr(data::ConfigVideoEventType e)
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
  if ( e == PLAY_AUDIO )
  {
    result = "PLAY_AUDIO";
  }
  else if ( e == SHOW_OR_HIDE_NAME_CARD_DIALOG )
  {
    result = "SHOW_OR_HIDE_NAME_CARD_DIALOG";
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
      "./src/json_data_auto/ConfigCutscene.cpp",
      "enumValToStr",
      1013);
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
    result = byte_1ABBC960;
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

// Line 1019: range 0000000013B51AB4-0000000013B522EB
bool __cdecl data::enumStrToVal(const std::string *s, data::ConfigVideoEventType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::ConfigVideoEventType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::ConfigVideoEventType> >::pointer v11; // rax
  data::ConfigVideoEventType second; // ecx
  char v13; // dl
  data::ConfigVideoEventType *ea; // [rsp+10h] [rbp-1E0h]
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
  *(_QWORD *)(v2 + 8) = "9 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 8 7 it:1030 144 8 9 <u"
                        "nknown> 176 32 9 <unknown> 240 32 9 <unknown> 304 80 9 <unknown>";
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
      "./src/json_data_auto/ConfigCutscene.cpp",
      "enumStrToVal",
      1022);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 176),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::ConfigVideoEventType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::ConfigVideoEventType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::ConfigVideoEventType>::pair<char const(&)[11],data::ConfigVideoEventType,true>(
        (std::pair<const std::string,data::ConfigVideoEventType> *const)(v2 + 304),
        (const char (*)[11])"PLAY_AUDIO",
        (data::ConfigVideoEventType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "PLAY_AUDIO");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::ConfigVideoEventType>::pair<char const(&)[30],data::ConfigVideoEventType,true>(
        (std::pair<const std::string,data::ConfigVideoEventType> *const)(v2 + 344),
        (const char (*)[30])"SHOW_OR_HIDE_NAME_CARD_DIALOG",
        (data::ConfigVideoEventType *)(v2 + 96));
      std::allocator<std::pair<std::string const,data::ConfigVideoEventType>>::allocator((std::allocator<std::pair<const std::string,data::ConfigVideoEventType> > *const)(v2 + 64));
      std::map<std::string,data::ConfigVideoEventType>::map(
        &data::enumStrToVal(std::string const&,data::ConfigVideoEventType &)::m,
        (std::initializer_list<std::pair<const std::string,data::ConfigVideoEventType> >)__PAIR128__(2LL, v2 + 304),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::ConfigVideoEventType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::ConfigVideoEventType &)::m);
      e = (data::ConfigVideoEventType *)&data::enumStrToVal(std::string const&,data::ConfigVideoEventType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::ConfigVideoEventType>::~map,
        &data::enumStrToVal(std::string const&,data::ConfigVideoEventType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::ConfigVideoEventType>>::~allocator((std::allocator<std::pair<const std::string,data::ConfigVideoEventType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::ConfigVideoEventType> *)(v2 + 384);
            i != (std::pair<const std::string,data::ConfigVideoEventType> *)(v2 + 304);
            std::pair<std::string const,data::ConfigVideoEventType>::~pair(i) )
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
    *(std::map<std::string,data::ConfigVideoEventType>::iterator *)(v2 + 112) = std::map<std::string,data::ConfigVideoEventType>::find(
                                                                                  &data::enumStrToVal(std::string const&,data::ConfigVideoEventType &)::m,
                                                                                  s);
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 144, s);
    *(std::map<std::string,data::ConfigVideoEventType>::iterator *)(v2 + 144) = std::map<std::string,data::ConfigVideoEventType>::end(&data::enumStrToVal(std::string const&,data::ConfigVideoEventType &)::m);
    v8 = (char *)(v2 + 144);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ConfigVideoEventType> >::_Self *)(v2 + 112),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ConfigVideoEventType> >::_Self *)(v2 + 144));
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
        "./src/json_data_auto/ConfigCutscene.cpp",
        "enumStrToVal",
        1033);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 240),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::ConfigVideoEventType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::ConfigVideoEventType> > *const)(v2 + 112));
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

// Line 1041: range 0000000013B522EC-0000000013B5231B
const char *__cdecl data::getDescription(data::ConfigVideoEventType e)
{
  if ( e == PLAY_AUDIO )
    return (const char *)&unk_1AC90FC0;
  if ( e == SHOW_OR_HIDE_NAME_CARD_DIALOG )
    return (const char *)&unk_1AC91000;
  return "unknown enum value!";
};

// Line 1055: range 0000000013B5231C-0000000013B52551
data::ConfigVideoCommonEventPtr __cdecl data::createConfigVideoCommonEvent(const std::string *name)
{
  const std::map<std::string,std::shared_ptr<data::ConfigVideoCommonEvent>>::key_type *v1; // rsi
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigVideoCommonEvent> > > *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool v5; // al
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigVideoCommonEvent> > >::pointer v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  void (__fastcall *v9)(const std::string *, unsigned __int64); // rcx
  data::ConfigVideoCommonEventPtr result; // rax
  char v11[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigVideoCommonEvent> > > *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigVideoCommonEvent> > > *)v3;
  }
  v2->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigVideoCommonEvent> > >::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigVideoCommonEvent> > >::_Base_ptr)"2 32 8 7 it:1056 64 8 9 <unknown>";
  v2[2]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigVideoCommonEvent> > >::_Base_ptr)data::createConfigVideoCommonEvent;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], v1);
  v2[4]._M_node = std::map<std::string,std::shared_ptr<data::ConfigVideoCommonEvent>>::find(
                    &data::g_ConfigVideoCommonEventMap[abi:cxx11],
                    v1)._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], v1);
  v2[8]._M_node = std::map<std::string,std::shared_ptr<data::ConfigVideoCommonEvent>>::end(&data::g_ConfigVideoCommonEventMap[abi:cxx11])._M_node;
  v5 = std::operator!=(v2 + 4, v2 + 8);
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
  {
    v6 = std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<data::ConfigVideoCommonEvent>>>::operator->(v2 + 4);
    v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigVideoCommonEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigVideoCommonEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v6->second);
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
    std::shared_ptr<data::ConfigVideoCommonEvent>::shared_ptr(
      (std::shared_ptr<data::ConfigVideoCommonEvent> *const)name,
      0LL);
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigVideoCommonEvent> > >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigVideoCommonEvent,(__gnu_cxx::_Lock_policy)2>::element_type *)name;
  return result;
};

// Line 1062: range 0000000013B52552-0000000013B5265E
void __cdecl data::ConfigVideoCommonEvent::foreachMember(
        data::ConfigVideoCommonEvent *const this,
        std::function<void(std::any&)> *p_func)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 19 event_type_any:1063";
  *(_QWORD *)(v2 + 16) = data::ConfigVideoCommonEvent::foreachMember;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::any::any<data::ConfigVideoEventType &,data::ConfigVideoEventType,std::any::_Manager_internal<data::ConfigVideoEventType>,true,true>(
    (std::any *const)(v2 + 32),
    &this->event_type);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 32));
  std::any::~any((std::any *const)(v2 + 32));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1068: range 0000000013B52660-0000000013B526AA
std::shared_ptr<data::ConfigVideoCommonEvent> __cdecl data::ConfigVideoCommonEvent::clone(
        data::ConfigVideoCommonEvent *const this)
{
  data::ConfigVideoCommonEvent *v1; // rsi
  std::shared_ptr<data::ConfigVideoCommonEvent> result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigVideoCommonEvent,data::ConfigVideoCommonEvent&>(
    (common::tools::perf::allocator<data::ConfigVideoCommonEvent,data::ConfigVideoCommonEvent> *)this,
    v1);
  result._M_ptr = this;
  return result;
};

// Line 1072: range 0000000013B526AC-0000000013B52B0E
bool __cdecl data::ConfigVideoCommonEvent::fromJson(data::ConfigVideoCommonEvent *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r14
  bool result; // al
  __int64 v7; // rsi
  __int64 v8; // rdx
  Json::Value *event_type_ptr; // [rsp+18h] [rbp-138h]
  char v10[304]; // [rsp+20h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigVideoCommonEvent::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 64),
    "eventType",
    (const std::allocator<char> *)(v2 + 48));
  event_type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( !event_type_ptr )
    goto LABEL_11;
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v2 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 128, 32LL);
  }
  Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 128), (Json::Value_0 *)event_type_ptr);
  v5 = !data::enumStrToVal((const std::string *)(v2 + 128), &this->event_type);
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  if ( v5 )
  {
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
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
      "./src/json_data_auto/ConfigCutscene.cpp",
      "fromJson",
      1082);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[31])"fromJson for: eventType fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = 0;
  }
  else
  {
LABEL_11:
    v7 = ((_BYTE)this + 28) & 7;
    v8 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
    if ( (_BYTE)v8 )
      __asan_report_store1(&this->is_json_loaded, v7, v8);
    this->is_json_loaded = 1;
    result = 1;
  }
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1089: range 0000000013B52B10-0000000013B5346C
data::ConfigVideoCommonEventPtr __cdecl data::ConfigVideoCommonEvent::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigVideoCommonEventPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<data::ConfigVideoCommonEvent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  char v11; // cl
  const Json::Value *jval_ptr; // [rsp+18h] [rbp-208h]
  char v13[512]; // [rsp+20h] [rbp-200h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 48 1 9 <unknown> 64 16 8 ptr:1102 96 32 9 <unknown> 160 32 9 <unknown> 224 32 14 type_name:109"
                        "6 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigVideoCommonEvent::parseFromJson;
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
        "./src/json_data_auto/ConfigCutscene.cpp",
        "parseFromJson",
        1099);
      common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[50])"fromJson for: ConfigVideoCommonEvent $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigVideoCommonEvent>::shared_ptr(
        (std::shared_ptr<data::ConfigVideoCommonEvent> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigVideoCommonEvent((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigVideoCommonEvent>(
             (const std::shared_ptr<data::ConfigVideoCommonEvent> *)(v2 + 64),
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
          "./src/json_data_auto/ConfigCutscene.cpp",
          "parseFromJson",
          1105);
        v6 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
               (common::milog::MiLogStream *const)(v2 + 352),
               (const char (*)[48])"create ConfigVideoCommonEvent fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 224));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
        *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigVideoCommonEvent>::shared_ptr(
          (std::shared_ptr<data::ConfigVideoCommonEvent> *const)jval,
          0LL);
      }
      else
      {
        v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigVideoCommonEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigVideoCommonEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
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
            "./src/json_data_auto/ConfigCutscene.cpp",
            "parseFromJson",
            1110);
          v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                 (common::milog::MiLogStream *const)(v2 + 416),
                 (const std::string *)(v2 + 224));
          common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
          *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigVideoCommonEvent>::shared_ptr(
            (std::shared_ptr<data::ConfigVideoCommonEvent> *const)jval,
            0LL);
        }
        else
        {
          v10 = std::__shared_ptr_access<data::ConfigVideoCommonEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigVideoCommonEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          v11 = *(_BYTE *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000);
          if ( v11 != 0 && (((unsigned __int8)v10 + 28) & 7) >= v11 )
          {
            LOBYTE(v1) = v11 != 0;
            __asan_report_store1(&v10->is_json_loaded, v1, v10);
          }
          v10->is_json_loaded = 1;
          std::shared_ptr<data::ConfigVideoCommonEvent>::shared_ptr(
            (std::shared_ptr<data::ConfigVideoCommonEvent> *const)jval,
            (std::shared_ptr<data::ConfigVideoCommonEvent> *)(v2 + 64));
        }
      }
      std::shared_ptr<data::ConfigVideoCommonEvent>::~shared_ptr((std::shared_ptr<data::ConfigVideoCommonEvent> *const)(v2 + 64));
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
      "./src/json_data_auto/ConfigCutscene.cpp",
      "parseFromJson",
      1093);
    common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[55])"jsonValueFind for: ConfigVideoCommonEvent $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigVideoCommonEvent>::shared_ptr(
      (std::shared_ptr<data::ConfigVideoCommonEvent> *const)jval,
      0LL);
  }
  if ( v13 == (char *)v2 )
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
  result._M_ptr = (std::__shared_ptr<data::ConfigVideoCommonEvent,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 1118: range 0000000013B5346E-0000000013B535D4
int32_t __cdecl data::ConfigVideoCommonEvent::getHashValue(const data::ConfigVideoCommonEvent *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t result; // eax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1119";
  *(_QWORD *)(v2 + 16) = data::ConfigVideoCommonEvent::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->event_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->event_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->event_type);
  }
  common::tools::HashUtils::appendHash(this->event_type, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v6 == (char *)v2 )
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

// Line 1128: range 0000000013C1AADC-0000000013C1AD1D
void __cdecl data::ConfigVideoPlayAudioEventRegister::ConfigVideoPlayAudioEventRegister(
        data::ConfigVideoPlayAudioEventRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigVideoCommonEvent> *v4; // rax
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
  *(_QWORD *)(v1 + 16) = data::ConfigVideoPlayAudioEventRegister::ConfigVideoPlayAudioEventRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigVideoPlayAudioEvent>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigVideoPlayAudioEvent",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigVideoCommonEvent>>::operator[](
         &data::g_ConfigVideoCommonEventMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigVideoCommonEvent>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigVideoCommonEvent>::operator=<data::ConfigVideoPlayAudioEvent>(
    v4,
    (std::shared_ptr<data::ConfigVideoPlayAudioEvent> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigVideoPlayAudioEvent>::~shared_ptr((std::shared_ptr<data::ConfigVideoPlayAudioEvent> *const)(v1 + 64));
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

// Line 1131: range 0000000013B535D6-0000000013B537A6
void __cdecl data::ConfigVideoPlayAudioEvent::foreachMember(
        data::ConfigVideoPlayAudioEvent *const this,
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
  *(_QWORD *)(v2 + 8) = "2 32 16 23 audio_event_id_any:1133 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigVideoPlayAudioEvent::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 64), p_func);
  data::ConfigVideoCommonEvent::foreachMember(this, (std::function<void(std::any&)> *)(v2 + 64));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<unsigned int &,unsigned int,std::any::_Manager_internal<unsigned int>,true,true>(
    (std::any *const)(v2 + 32),
    &this->audio_event_id);
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

// Line 1138: range 0000000013B537A8-0000000013B538B8
std::shared_ptr<data::ConfigVideoCommonEvent> __cdecl data::ConfigVideoPlayAudioEvent::clone(
        data::ConfigVideoPlayAudioEvent *const this)
{
  data::ConfigVideoPlayAudioEvent *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigVideoCommonEvent> result; // rax
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
  *(_QWORD *)(v2 + 16) = data::ConfigVideoPlayAudioEvent::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigVideoPlayAudioEvent,data::ConfigVideoPlayAudioEvent&>(
    (common::tools::perf::allocator<data::ConfigVideoPlayAudioEvent,data::ConfigVideoPlayAudioEvent> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigVideoCommonEvent>::shared_ptr<data::ConfigVideoPlayAudioEvent,void>(
    (std::shared_ptr<data::ConfigVideoCommonEvent> *const)this,
    (std::shared_ptr<data::ConfigVideoPlayAudioEvent> *)(v2 + 32));
  std::shared_ptr<data::ConfigVideoPlayAudioEvent>::~shared_ptr((std::shared_ptr<data::ConfigVideoPlayAudioEvent> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = this;
  return result;
};

// Line 1142: range 0000000013B538BA-0000000013B538FD
data::ConfigVideoPlayAudioEventPtr __cdecl data::ConfigVideoPlayAudioEventFactory::create(
        data::ConfigVideoPlayAudioEventFactory *const this)
{
  data::ConfigVideoPlayAudioEventPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigVideoPlayAudioEvent>();
  result._M_ptr = (std::__shared_ptr<data::ConfigVideoPlayAudioEvent,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1144: range 0000000013B538FE-0000000013B53D87
bool __cdecl data::ConfigVideoPlayAudioEvent::fromJson(
        data::ConfigVideoPlayAudioEvent *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *audio_event_id_ptr; // [rsp+18h] [rbp-128h]
  char v9[288]; // [rsp+20h] [rbp-120h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigVideoPlayAudioEvent::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  if ( !data::ConfigVideoCommonEvent::fromJson(this, jval) )
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
      "./src/json_data_auto/ConfigCutscene.cpp",
      "fromJson",
      1147);
    common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
      (common::milog::MiLogStream *const)(v2 + 64),
      (const char (*)[44])"fromJson for: ConfigVideoCommonEvent fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 128),
      "audioEventId",
      (const std::allocator<char> *)(v2 + 48));
    audio_event_id_ptr = jsonValueFind(jval, (const std::string *)(v2 + 128));
    std::string::~string((void *)(v2 + 128));
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( audio_event_id_ptr && !fromJson<unsigned int>(audio_event_id_ptr, &this->audio_event_id) )
    {
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
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
        "./src/json_data_auto/ConfigCutscene.cpp",
        "fromJson",
        1159);
      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
        (common::milog::MiLogStream *const)(v2 + 192),
        (const char (*)[34])"fromJson for: audioEventId fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      result = 0;
    }
    else
    {
      v6 = ((_BYTE)this + 28) & 7;
      v7 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
      if ( (_BYTE)v7 )
        __asan_report_store1(&this->is_json_loaded, v6, v7);
      this->is_json_loaded = 1;
      result = 1;
    }
  }
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1166: range 0000000013B53D88-0000000013B548D5
data::ConfigVideoPlayAudioEventPtr __cdecl data::ConfigVideoPlayAudioEvent::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigVideoPlayAudioEventPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<data::ConfigVideoPlayAudioEvent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  char v11; // cl
  const Json::Value *jval_ptr; // [rsp+18h] [rbp-268h]
  char v13[608]; // [rsp+20h] [rbp-260h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 13 base_ptr:1179 96 16 8 ptr:1185 128 32 9 <unknown> 192 32 9 <unknown"
                        "> 256 32 14 type_name:1173 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigVideoPlayAudioEvent::parseFromJson;
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
        "./src/json_data_auto/ConfigCutscene.cpp",
        "parseFromJson",
        1176);
      common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[53])"fromJson for: ConfigVideoPlayAudioEvent $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigVideoPlayAudioEvent>::shared_ptr(
        (std::shared_ptr<data::ConfigVideoPlayAudioEvent> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigVideoCommonEvent((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigVideoCommonEvent>(
             (const std::shared_ptr<data::ConfigVideoCommonEvent> *)(v2 + 64),
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
          "./src/json_data_auto/ConfigCutscene.cpp",
          "parseFromJson",
          1182);
        v6 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[48])"create ConfigVideoCommonEvent fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigVideoPlayAudioEvent>::shared_ptr(
          (std::shared_ptr<data::ConfigVideoPlayAudioEvent> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigVideoPlayAudioEvent,data::ConfigVideoCommonEvent>((const std::shared_ptr<data::ConfigVideoCommonEvent> *)(v2 + 96));
        if ( std::operator==<data::ConfigVideoPlayAudioEvent>(
               (const std::shared_ptr<data::ConfigVideoPlayAudioEvent> *)(v2 + 96),
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
            "./src/json_data_auto/ConfigCutscene.cpp",
            "parseFromJson",
            1188);
          common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[44])"cast to ConfigVideoPlayAudioEventPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigVideoPlayAudioEvent>::shared_ptr(
            (std::shared_ptr<data::ConfigVideoPlayAudioEvent> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigVideoPlayAudioEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigVideoPlayAudioEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
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
              "./src/json_data_auto/ConfigCutscene.cpp",
              "parseFromJson",
              1193);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigVideoPlayAudioEvent>::shared_ptr(
              (std::shared_ptr<data::ConfigVideoPlayAudioEvent> *const)jval,
              0LL);
          }
          else
          {
            v10 = std::__shared_ptr_access<data::ConfigVideoPlayAudioEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigVideoPlayAudioEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000);
            if ( v11 != 0 && (((unsigned __int8)v10 + 28) & 7) >= v11 )
            {
              LOBYTE(v1) = v11 != 0;
              __asan_report_store1(&v10->is_json_loaded, v1, v10);
            }
            v10->is_json_loaded = 1;
            std::shared_ptr<data::ConfigVideoPlayAudioEvent>::shared_ptr(
              (std::shared_ptr<data::ConfigVideoPlayAudioEvent> *const)jval,
              (std::shared_ptr<data::ConfigVideoPlayAudioEvent> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigVideoPlayAudioEvent>::~shared_ptr((std::shared_ptr<data::ConfigVideoPlayAudioEvent> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigVideoCommonEvent>::~shared_ptr((std::shared_ptr<data::ConfigVideoCommonEvent> *const)(v2 + 64));
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
      "./src/json_data_auto/ConfigCutscene.cpp",
      "parseFromJson",
      1170);
    common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[58])"jsonValueFind for: ConfigVideoPlayAudioEvent $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigVideoPlayAudioEvent>::shared_ptr(
      (std::shared_ptr<data::ConfigVideoPlayAudioEvent> *const)jval,
      0LL);
  }
  if ( v13 == (char *)v2 )
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
  result._M_ptr = (std::__shared_ptr<data::ConfigVideoPlayAudioEvent,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 1201: range 0000000013B548D6-0000000013B54A47
int32_t __cdecl data::ConfigVideoPlayAudioEvent::getHashValue(const data::ConfigVideoPlayAudioEvent *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1202";
  *(_QWORD *)(v2 + 16) = data::ConfigVideoPlayAudioEvent::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigVideoCommonEvent::getHashValue(this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  if ( *(_BYTE *)(((unsigned __int64)&this->audio_event_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->audio_event_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->audio_event_id);
  }
  common::tools::HashUtils::appendHash(this->audio_event_id, (int32_t *)(v2 + 32));
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

// Line 1211: range 0000000013C1AD96-0000000013C1AFD7
void __cdecl data::ConfigVideoShowNameCardDialogEventRegister::ConfigVideoShowNameCardDialogEventRegister(
        data::ConfigVideoShowNameCardDialogEventRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigVideoCommonEvent> *v4; // rax
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
  *(_QWORD *)(v1 + 16) = data::ConfigVideoShowNameCardDialogEventRegister::ConfigVideoShowNameCardDialogEventRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigVideoShowNameCardDialogEvent>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigVideoShowNameCardDialogEvent",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigVideoCommonEvent>>::operator[](
         &data::g_ConfigVideoCommonEventMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigVideoCommonEvent>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigVideoCommonEvent>::operator=<data::ConfigVideoShowNameCardDialogEvent>(
    v4,
    (std::shared_ptr<data::ConfigVideoShowNameCardDialogEvent> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigVideoShowNameCardDialogEvent>::~shared_ptr((std::shared_ptr<data::ConfigVideoShowNameCardDialogEvent> *const)(v1 + 64));
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

// Line 1214: range 0000000013B54A48-0000000013B54C9E
void __cdecl data::ConfigVideoShowNameCardDialogEvent::foreachMember(
        data::ConfigVideoShowNameCardDialogEvent *const this,
        std::function<void(std::any&)> *p_func)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  char v5[208]; // [rsp+10h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 20 prefab_path_any:1216 64 16 20 enable_show_any:1218 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigVideoShowNameCardDialogEvent::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862724] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 96), p_func);
  data::ConfigVideoCommonEvent::foreachMember(this, (std::function<void(std::any&)> *)(v2 + 96));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<std::string &,std::string,std::any::_Manager_external<std::string>,true,true>(
    (std::any *const)(v2 + 32),
    &this->prefab_path);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 32));
  *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>((std::any *const)(v2 + 64), &this->enable_show);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 64));
  std::any::~any((std::any *const)(v2 + 64));
  std::any::~any((std::any *const)(v2 + 32));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 1223: range 0000000013B54CA0-0000000013B54DB0
std::shared_ptr<data::ConfigVideoCommonEvent> __cdecl data::ConfigVideoShowNameCardDialogEvent::clone(
        data::ConfigVideoShowNameCardDialogEvent *const this)
{
  data::ConfigVideoShowNameCardDialogEvent *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigVideoCommonEvent> result; // rax
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
  *(_QWORD *)(v2 + 16) = data::ConfigVideoShowNameCardDialogEvent::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigVideoShowNameCardDialogEvent,data::ConfigVideoShowNameCardDialogEvent&>(
    (common::tools::perf::allocator<data::ConfigVideoShowNameCardDialogEvent,data::ConfigVideoShowNameCardDialogEvent> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigVideoCommonEvent>::shared_ptr<data::ConfigVideoShowNameCardDialogEvent,void>(
    (std::shared_ptr<data::ConfigVideoCommonEvent> *const)this,
    (std::shared_ptr<data::ConfigVideoShowNameCardDialogEvent> *)(v2 + 32));
  std::shared_ptr<data::ConfigVideoShowNameCardDialogEvent>::~shared_ptr((std::shared_ptr<data::ConfigVideoShowNameCardDialogEvent> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = this;
  return result;
};

// Line 1227: range 0000000013B54DB2-0000000013B54DF5
data::ConfigVideoShowNameCardDialogEventPtr __cdecl data::ConfigVideoShowNameCardDialogEventFactory::create(
        data::ConfigVideoShowNameCardDialogEventFactory *const this)
{
  data::ConfigVideoShowNameCardDialogEventPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigVideoShowNameCardDialogEvent>();
  result._M_ptr = (std::__shared_ptr<data::ConfigVideoShowNameCardDialogEvent,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1229: range 0000000013B54DF6-0000000013B55503
bool __cdecl data::ConfigVideoShowNameCardDialogEvent::fromJson(
        data::ConfigVideoShowNameCardDialogEvent *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *prefab_path_ptr; // [rsp+10h] [rbp-1B0h]
  const Json::Value *enable_show_ptr; // [rsp+18h] [rbp-1A8h]
  char v10[416]; // [rsp+20h] [rbp-1A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 1 9 <unknown> 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256 "
                        "32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigVideoShowNameCardDialogEvent::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -202116109;
  if ( !data::ConfigVideoCommonEvent::fromJson(this, jval) )
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
      "./src/json_data_auto/ConfigCutscene.cpp",
      "fromJson",
      1232);
    common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
      (common::milog::MiLogStream *const)(v2 + 64),
      (const char (*)[44])"fromJson for: ConfigVideoCommonEvent fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 32);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 128),
      "prefabPath",
      (const std::allocator<char> *)(v2 + 32));
    prefab_path_ptr = jsonValueFind(jval, (const std::string *)(v2 + 128));
    std::string::~string((void *)(v2 + 128));
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 32);
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    if ( prefab_path_ptr && !fromJson<std::string>(prefab_path_ptr, &this->prefab_path) )
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
        "./src/json_data_auto/ConfigCutscene.cpp",
        "fromJson",
        1244);
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
        (common::milog::MiLogStream *const)(v2 + 192),
        (const char (*)[32])"fromJson for: prefabPath fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      result = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 48);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 256),
        "enableShow",
        (const std::allocator<char> *)(v2 + 48));
      enable_show_ptr = jsonValueFind(jval, (const std::string *)(v2 + 256));
      std::string::~string((void *)(v2 + 256));
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 48);
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( enable_show_ptr && !fromJson<bool>(enable_show_ptr, &this->enable_show) )
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
          "./src/json_data_auto/ConfigCutscene.cpp",
          "fromJson",
          1256);
        common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
          (common::milog::MiLogStream *const)(v2 + 320),
          (const char (*)[32])"fromJson for: enableShow fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
        result = 0;
      }
      else
      {
        v6 = ((_BYTE)this + 28) & 7;
        v7 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
        if ( (_BYTE)v7 )
          __asan_report_store1(&this->is_json_loaded, v6, v7);
        this->is_json_loaded = 1;
        result = 1;
      }
    }
  }
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF802C) = 0;
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
  }
  return result;
};

// Line 1263: range 0000000013B55504-0000000013B56051
data::ConfigVideoShowNameCardDialogEventPtr __cdecl data::ConfigVideoShowNameCardDialogEvent::parseFromJson(
        const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigVideoShowNameCardDialogEventPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<data::ConfigVideoShowNameCardDialogEvent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  char v11; // cl
  const Json::Value *jval_ptr; // [rsp+18h] [rbp-268h]
  char v13[608]; // [rsp+20h] [rbp-260h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 13 base_ptr:1276 96 16 8 ptr:1282 128 32 9 <unknown> 192 32 9 <unknown"
                        "> 256 32 14 type_name:1270 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigVideoShowNameCardDialogEvent::parseFromJson;
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
        "./src/json_data_auto/ConfigCutscene.cpp",
        "parseFromJson",
        1273);
      common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[62])"fromJson for: ConfigVideoShowNameCardDialogEvent $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigVideoShowNameCardDialogEvent>::shared_ptr(
        (std::shared_ptr<data::ConfigVideoShowNameCardDialogEvent> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigVideoCommonEvent((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigVideoCommonEvent>(
             (const std::shared_ptr<data::ConfigVideoCommonEvent> *)(v2 + 64),
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
          "./src/json_data_auto/ConfigCutscene.cpp",
          "parseFromJson",
          1279);
        v6 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[48])"create ConfigVideoCommonEvent fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigVideoShowNameCardDialogEvent>::shared_ptr(
          (std::shared_ptr<data::ConfigVideoShowNameCardDialogEvent> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigVideoShowNameCardDialogEvent,data::ConfigVideoCommonEvent>((const std::shared_ptr<data::ConfigVideoCommonEvent> *)(v2 + 96));
        if ( std::operator==<data::ConfigVideoShowNameCardDialogEvent>(
               (const std::shared_ptr<data::ConfigVideoShowNameCardDialogEvent> *)(v2 + 96),
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
            "./src/json_data_auto/ConfigCutscene.cpp",
            "parseFromJson",
            1285);
          common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[53])"cast to ConfigVideoShowNameCardDialogEventPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigVideoShowNameCardDialogEvent>::shared_ptr(
            (std::shared_ptr<data::ConfigVideoShowNameCardDialogEvent> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigVideoShowNameCardDialogEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigVideoShowNameCardDialogEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
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
              "./src/json_data_auto/ConfigCutscene.cpp",
              "parseFromJson",
              1290);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigVideoShowNameCardDialogEvent>::shared_ptr(
              (std::shared_ptr<data::ConfigVideoShowNameCardDialogEvent> *const)jval,
              0LL);
          }
          else
          {
            v10 = std::__shared_ptr_access<data::ConfigVideoShowNameCardDialogEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigVideoShowNameCardDialogEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000);
            if ( v11 != 0 && (((unsigned __int8)v10 + 28) & 7) >= v11 )
            {
              LOBYTE(v1) = v11 != 0;
              __asan_report_store1(&v10->is_json_loaded, v1, v10);
            }
            v10->is_json_loaded = 1;
            std::shared_ptr<data::ConfigVideoShowNameCardDialogEvent>::shared_ptr(
              (std::shared_ptr<data::ConfigVideoShowNameCardDialogEvent> *const)jval,
              (std::shared_ptr<data::ConfigVideoShowNameCardDialogEvent> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigVideoShowNameCardDialogEvent>::~shared_ptr((std::shared_ptr<data::ConfigVideoShowNameCardDialogEvent> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigVideoCommonEvent>::~shared_ptr((std::shared_ptr<data::ConfigVideoCommonEvent> *const)(v2 + 64));
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
      "./src/json_data_auto/ConfigCutscene.cpp",
      "parseFromJson",
      1267);
    common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[67])"jsonValueFind for: ConfigVideoShowNameCardDialogEvent $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigVideoShowNameCardDialogEvent>::shared_ptr(
      (std::shared_ptr<data::ConfigVideoShowNameCardDialogEvent> *const)jval,
      0LL);
  }
  if ( v13 == (char *)v2 )
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
  result._M_ptr = (std::__shared_ptr<data::ConfigVideoShowNameCardDialogEvent,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 1298: range 0000000013B56052-0000000013B561DF
int32_t __cdecl data::ConfigVideoShowNameCardDialogEvent::getHashValue(
        const data::ConfigVideoShowNameCardDialogEvent *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1299";
  *(_QWORD *)(v2 + 16) = data::ConfigVideoShowNameCardDialogEvent::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigVideoCommonEvent::getHashValue(this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  common::tools::HashUtils::appendHash(&this->prefab_path, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->enable_show >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->enable_show, v2 + 32, &this->enable_show);
  common::tools::HashUtils::appendHash(this->enable_show, (int32_t *)(v2 + 32));
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

// Line 1306: range 0000000013B561E0-0000000013B56541
bool __cdecl data::vecFromJson(const Json::Value *jval, data::ConfigVideoEventList *v)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // eax
  int v6; // r14d
  bool result; // al
  int v8; // [rsp+0h] [rbp-E0h]
  char v9; // [rsp+8h] [rbp-D8h]
  bool v10; // [rsp+Fh] [rbp-D1h]
  uint32_t i; // [rsp+24h] [rbp-BCh]
  const Json::Value *elem_jval; // [rsp+28h] [rbp-B8h]
  char v13[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 13 elem_ptr:1312 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::vecFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  for ( i = 0; i < Json::Value::size((const Json::Value_0 *const)jval); ++i )
  {
    elem_jval = (const Json::Value *)Json::Value::operator[]((Json::Value *)jval, i, v8, v9);
    if ( Json::Value::isNull((const Json::Value_0 *const)elem_jval) )
    {
      v5 = 0;
    }
    else
    {
      *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::ConfigVideoCommonEvent::parseFromJson((const Json::Value *)(v2 + 32));
      if ( std::operator==<data::ConfigVideoCommonEvent>(
             (const std::shared_ptr<data::ConfigVideoCommonEvent> *)(v2 + 32),
             0LL) )
      {
        *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
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
          "./src/json_data_auto/ConfigCutscene.cpp",
          "vecFromJson",
          1315);
        common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
          (common::milog::MiLogStream *const)(v2 + 64),
          (const char (*)[42])"elem_ptr is nullptr: ConfigVideoEventList");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
        *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
        v10 = 0;
        v6 = 0;
      }
      else
      {
        std::vector<std::shared_ptr<data::ConfigVideoCommonEvent>>::push_back(
          v,
          (const std::vector<std::shared_ptr<data::ConfigVideoCommonEvent>>::value_type *)(v2 + 32));
        v6 = 1;
      }
      std::shared_ptr<data::ConfigVideoCommonEvent>::~shared_ptr((std::shared_ptr<data::ConfigVideoCommonEvent> *const)(v2 + 32));
      if ( v6 == 1 )
        v5 = 2;
      else
        v5 = 1;
    }
    *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -1800;
    if ( v5 && v5 != 2 )
      goto LABEL_22;
  }
  v10 = 1;
LABEL_22:
  result = v10;
  if ( v13 == (char *)v2 )
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

// Line 1325: range 0000000013B56542-0000000013B567FD
int32_t __cdecl data::getVecHashValue(const data::ConfigVideoEventList *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  int32_t v7; // eax
  int32_t result; // eax
  const std::shared_ptr<data::ConfigVideoCommonEvent> *elem; // [rsp+18h] [rbp-A8h]
  char v10[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 hash_code:1326 64 8 16 __for_begin:1327 96 8 14 __for_end:1327";
  *(_QWORD *)(v2 + 16) = data::getVecHashValue;
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
  *(std::vector<std::shared_ptr<data::ConfigVideoCommonEvent>>::const_iterator *)(v2 + 64) = std::vector<std::shared_ptr<data::ConfigVideoCommonEvent>>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<std::shared_ptr<data::ConfigVideoCommonEvent>>::const_iterator *)(v2 + 96) = std::vector<std::shared_ptr<data::ConfigVideoCommonEvent>>::end(vec);
  while ( __gnu_cxx::operator!=<std::shared_ptr<data::ConfigVideoCommonEvent> const*,std::vector<std::shared_ptr<data::ConfigVideoCommonEvent>>>(
            (const __gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigVideoCommonEvent>*,std::vector<std::shared_ptr<data::ConfigVideoCommonEvent>> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigVideoCommonEvent>*,std::vector<std::shared_ptr<data::ConfigVideoCommonEvent>> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<std::shared_ptr<data::ConfigVideoCommonEvent> const*,std::vector<std::shared_ptr<data::ConfigVideoCommonEvent>>>::operator*((const __gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigVideoCommonEvent>*,std::vector<std::shared_ptr<data::ConfigVideoCommonEvent>> > *const)(v2 + 64));
    if ( std::operator!=<data::ConfigVideoCommonEvent>(0LL, elem) )
    {
      v5 = (unsigned __int64)std::__shared_ptr_access<data::ConfigVideoCommonEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigVideoCommonEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)elem);
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8(v5);
      v6 = *(_QWORD *)v5 + 56LL;
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8(*(_QWORD *)v5 + 56LL);
      v7 = (*(__int64 (__fastcall **)(unsigned __int64))v6)(v5);
      common::tools::HashUtils::appendHash(v7, (int32_t *)(v2 + 48));
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<data::ConfigVideoCommonEvent> const*,std::vector<std::shared_ptr<data::ConfigVideoCommonEvent>>>::operator++((__gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigVideoCommonEvent>*,std::vector<std::shared_ptr<data::ConfigVideoCommonEvent>> > *const)(v2 + 64));
  }
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 48);
  result = *(_DWORD *)(v2 + 48);
  if ( v10 == (char *)v2 )
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

// Line 1339: range 0000000013B567FE-0000000013B58943
bool __cdecl data::ConfigVideo::fromJson(data::ConfigVideo *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  data::ConfigVideoEventList *p_event_list; // rsi
  bool v7; // bl
  const Json::Value *hero_diff_ptr; // [rsp+18h] [rbp-808h]
  const Json::Value *video_name_ptr; // [rsp+20h] [rbp-800h]
  const Json::Value *video_name_other_ptr; // [rsp+28h] [rbp-7F8h]
  const Json::Value *subtitle_id_ptr; // [rsp+30h] [rbp-7F0h]
  const Json::Value *subtitle_id_other_ptr; // [rsp+38h] [rbp-7E8h]
  const Json::Value *can_skip_ptr; // [rsp+40h] [rbp-7E0h]
  const Json::Value *can_skip_if_played_ptr; // [rsp+48h] [rbp-7D8h]
  const Json::Value *bg_color_ptr; // [rsp+50h] [rbp-7D0h]
  const Json::Value *fade_in_duration_ptr; // [rsp+58h] [rbp-7C8h]
  const Json::Value *fade_out_duration_ptr; // [rsp+60h] [rbp-7C0h]
  const Json::Value *video_screen_adaptation_ptr; // [rsp+68h] [rbp-7B8h]
  const Json::Value *platform_settings_ptr; // [rsp+70h] [rbp-7B0h]
  const Json::Value *event_list_ptr; // [rsp+78h] [rbp-7A8h]
  char v23[1952]; // [rsp+80h] [rbp-7A0h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1920LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "39 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 <unkn"
                        "own> 224 1 9 <unknown> 240 1 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown"
                        "> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown>"
                        " 768 32 9 <unknown> 832 32 9 <unknown> 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown>"
                        " 1088 32 9 <unknown> 1152 32 9 <unknown> 1216 32 9 <unknown> 1280 32 9 <unknown> 1344 32 9 <unkn"
                        "own> 1408 32 9 <unknown> 1472 32 9 <unknown> 1536 32 9 <unknown> 1600 32 9 <unknown> 1664 32 9 <"
                        "unknown> 1728 32 9 <unknown> 1792 32 9 <unknown> 1856 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigVideo::fromJson;
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
  v4[536862773] = -218959118;
  v4[536862775] = -218959118;
  v4[536862777] = -218959118;
  v4[536862779] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 256),
    "heroDiff",
    (const std::allocator<char> *)(v2 + 48));
  hero_diff_ptr = jsonValueFind(jval, (const std::string *)(v2 + 256));
  std::string::~string((void *)(v2 + 256));
  *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( hero_diff_ptr && !fromJson<bool>(hero_diff_ptr, &this->hero_diff) )
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
      "./src/json_data_auto/ConfigCutscene.cpp",
      "fromJson",
      1349);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      (common::milog::MiLogStream *const)(v2 + 320),
      (const char (*)[30])"fromJson for: heroDiff fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
    v5 = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 384),
      "videoName",
      (const std::allocator<char> *)(v2 + 64));
    video_name_ptr = jsonValueFind(jval, (const std::string *)(v2 + 384));
    std::string::~string((void *)(v2 + 384));
    *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( video_name_ptr && !fromJson<std::string>(video_name_ptr, &this->video_name) )
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
        "./src/json_data_auto/ConfigCutscene.cpp",
        "fromJson",
        1361);
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
        (common::milog::MiLogStream *const)(v2 + 448),
        (const char (*)[31])"fromJson for: videoName fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
      v5 = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 512),
        "videoNameOther",
        (const std::allocator<char> *)(v2 + 80));
      video_name_other_ptr = jsonValueFind(jval, (const std::string *)(v2 + 512));
      std::string::~string((void *)(v2 + 512));
      *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( video_name_other_ptr && !fromJson<std::string>(video_name_other_ptr, &this->video_name_other) )
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
          3u,
          "./src/json_data_auto/ConfigCutscene.cpp",
          "fromJson",
          1373);
        common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
          (common::milog::MiLogStream *const)(v2 + 576),
          (const char (*)[36])"fromJson for: videoNameOther fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
        v5 = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 640),
          "subtitleId",
          (const std::allocator<char> *)(v2 + 96));
        subtitle_id_ptr = jsonValueFind(jval, (const std::string *)(v2 + 640));
        std::string::~string((void *)(v2 + 640));
        *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( subtitle_id_ptr && !fromJson<unsigned int>(subtitle_id_ptr, &this->subtitle_id) )
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
            3u,
            "./src/json_data_auto/ConfigCutscene.cpp",
            "fromJson",
            1385);
          common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
            (common::milog::MiLogStream *const)(v2 + 704),
            (const char (*)[32])"fromJson for: subtitleId fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
          v5 = 0;
        }
        else
        {
          *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 112);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 768),
            "subtitleIdOther",
            (const std::allocator<char> *)(v2 + 112));
          subtitle_id_other_ptr = jsonValueFind(jval, (const std::string *)(v2 + 768));
          std::string::~string((void *)(v2 + 768));
          *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( subtitle_id_other_ptr && !fromJson<unsigned int>(subtitle_id_other_ptr, &this->subtitle_id_other) )
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
              3u,
              "./src/json_data_auto/ConfigCutscene.cpp",
              "fromJson",
              1397);
            common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              (common::milog::MiLogStream *const)(v2 + 832),
              (const char (*)[37])"fromJson for: subtitleIdOther fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 832));
            v5 = 0;
          }
          else
          {
            *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 128);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 896),
              "canSkip",
              (const std::allocator<char> *)(v2 + 128));
            can_skip_ptr = jsonValueFind(jval, (const std::string *)(v2 + 896));
            std::string::~string((void *)(v2 + 896));
            *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 128);
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
            if ( can_skip_ptr && !fromJson<bool>(can_skip_ptr, &this->can_skip) )
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
                3u,
                "./src/json_data_auto/ConfigCutscene.cpp",
                "fromJson",
                1409);
              common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                (common::milog::MiLogStream *const)(v2 + 960),
                (const char (*)[29])"fromJson for: canSkip fails!");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 960));
              v5 = 0;
            }
            else
            {
              *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 144);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1024),
                "canSkipIfPlayed",
                (const std::allocator<char> *)(v2 + 144));
              can_skip_if_played_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1024));
              std::string::~string((void *)(v2 + 1024));
              *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 144);
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
              if ( can_skip_if_played_ptr && !fromJson<bool>(can_skip_if_played_ptr, &this->can_skip_if_played) )
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
                  "./src/json_data_auto/ConfigCutscene.cpp",
                  "fromJson",
                  1421);
                common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                  (common::milog::MiLogStream *const)(v2 + 1088),
                  (const char (*)[37])"fromJson for: canSkipIfPlayed fails!");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1088));
                v5 = 0;
              }
              else
              {
                *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 160);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1152),
                  "bgColor",
                  (const std::allocator<char> *)(v2 + 160));
                bg_color_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1152));
                std::string::~string((void *)(v2 + 1152));
                *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 160);
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                if ( bg_color_ptr && !data::ColorVector::fromJson(&this->bg_color, bg_color_ptr) )
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
                    3u,
                    "./src/json_data_auto/ConfigCutscene.cpp",
                    "fromJson",
                    1433);
                  common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                    (common::milog::MiLogStream *const)(v2 + 1216),
                    (const char (*)[29])"fromJson for: bgColor fails!");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1216));
                  v5 = 0;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 176);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1280),
                    "fadeInDuration",
                    (const std::allocator<char> *)(v2 + 176));
                  fade_in_duration_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1280));
                  std::string::~string((void *)(v2 + 1280));
                  *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 176);
                  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                  if ( fade_in_duration_ptr && !fromJson<float>(fade_in_duration_ptr, &this->fade_in_duration) )
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
                      3u,
                      "./src/json_data_auto/ConfigCutscene.cpp",
                      "fromJson",
                      1445);
                    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                      (common::milog::MiLogStream *const)(v2 + 1344),
                      (const char (*)[36])"fromJson for: fadeInDuration fails!");
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1344));
                    v5 = 0;
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 1408) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 192);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 1408),
                      "fadeOutDuration",
                      (const std::allocator<char> *)(v2 + 192));
                    fade_out_duration_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1408));
                    std::string::~string((void *)(v2 + 1408));
                    *(_DWORD *)(((v2 + 1408) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 192);
                    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                    if ( fade_out_duration_ptr && !fromJson<float>(fade_out_duration_ptr, &this->fade_out_duration) )
                    {
                      *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 1472) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 1503) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 1503) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 1472, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 1472),
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/json_data_auto/ConfigCutscene.cpp",
                        "fromJson",
                        1457);
                      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                        (common::milog::MiLogStream *const)(v2 + 1472),
                        (const char (*)[37])"fromJson for: fadeOutDuration fails!");
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1472));
                      v5 = 0;
                    }
                    else
                    {
                      *(_DWORD *)(((v2 + 1536) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 208);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 1536),
                        "videoScreenAdaptation",
                        (const std::allocator<char> *)(v2 + 208));
                      video_screen_adaptation_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1536));
                      std::string::~string((void *)(v2 + 1536));
                      *(_DWORD *)(((v2 + 1536) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 208);
                      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                      if ( video_screen_adaptation_ptr
                        && !fromJson<unsigned int>(video_screen_adaptation_ptr, &this->video_screen_adaptation) )
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
                          3u,
                          "./src/json_data_auto/ConfigCutscene.cpp",
                          "fromJson",
                          1469);
                        common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                          (common::milog::MiLogStream *const)(v2 + 1600),
                          (const char (*)[43])"fromJson for: videoScreenAdaptation fails!");
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1600));
                        v5 = 0;
                      }
                      else
                      {
                        *(_DWORD *)(((v2 + 1664) >> 3) + 0x7FFF8000) = 0;
                        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 224);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 1664),
                          "platformSettings",
                          (const std::allocator<char> *)(v2 + 224));
                        platform_settings_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1664));
                        std::string::~string((void *)(v2 + 1664));
                        *(_DWORD *)(((v2 + 1664) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 224);
                        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                        if ( platform_settings_ptr
                          && !data::mapFromJson(platform_settings_ptr, &this->platform_settings) )
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
                            3u,
                            "./src/json_data_auto/ConfigCutscene.cpp",
                            "fromJson",
                            1481);
                          common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                            (common::milog::MiLogStream *const)(v2 + 1728),
                            (const char (*)[38])"fromJson for: platformSettings fails!");
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1728));
                          v5 = 0;
                        }
                        else
                        {
                          *(_DWORD *)(((v2 + 1792) >> 3) + 0x7FFF8000) = 0;
                          *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
                          std::allocator<char>::allocator(v2 + 240);
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)(v2 + 1792),
                            "eventList",
                            (const std::allocator<char> *)(v2 + 240));
                          p_event_list = (data::ConfigVideoEventList *)(v2 + 1792);
                          event_list_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1792));
                          std::string::~string((void *)(v2 + 1792));
                          *(_DWORD *)(((v2 + 1792) >> 3) + 0x7FFF8000) = -117901064;
                          std::allocator<char>::~allocator(v2 + 240);
                          *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                          if ( event_list_ptr
                            && (p_event_list = &this->event_list, !data::vecFromJson(event_list_ptr, &this->event_list)) )
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
                              3u,
                              "./src/json_data_auto/ConfigCutscene.cpp",
                              "fromJson",
                              1493);
                            common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                              (common::milog::MiLogStream *const)(v2 + 1856),
                              (const char (*)[31])"fromJson for: eventList fails!");
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1856));
                            v5 = 0;
                          }
                          else
                          {
                            if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
                              __asan_report_store1(&this->is_json_loaded, p_event_list, &this->is_json_loaded);
                            this->is_json_loaded = 1;
                            v5 = 1;
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
  v7 = v5;
  if ( v23 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8034) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8054) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF805C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8064) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF806C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8074) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF807C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8084) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF808C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8094) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF809C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80A4) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80AC) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80B4) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80BC) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80C4) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80CC) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80D4) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80DC) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80E4) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80EC) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1920LL, v23);
  }
  return v7;
};

// Line 1501: range 0000000013B58944-0000000013B58D50
int32_t __cdecl data::ConfigVideo::getHashValue(const data::ConfigVideo *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  __int64 v5; // rsi
  __int64 v6; // rdx
  int32_t HashValue; // eax
  int32_t MapHashValue; // eax
  int32_t VecHashValue; // eax
  int32_t result; // eax
  char v11[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1502";
  *(_QWORD *)(v2 + 16) = data::ConfigVideo::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(this, v1, this);
  common::tools::HashUtils::appendHash(this->hero_diff, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->video_name, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->video_name_other, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->subtitle_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->subtitle_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->subtitle_id);
  }
  common::tools::HashUtils::appendHash(this->subtitle_id, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->subtitle_id_other >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->subtitle_id_other >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->subtitle_id_other);
  }
  common::tools::HashUtils::appendHash(this->subtitle_id_other, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->can_skip >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->can_skip, v2 + 32, &this->can_skip);
  common::tools::HashUtils::appendHash(this->can_skip, (int32_t *)(v2 + 32));
  v5 = ((_BYTE)this + 81) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->can_skip_if_played >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->can_skip_if_played >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(&this->can_skip_if_played, v5, v6);
  common::tools::HashUtils::appendHash(this->can_skip_if_played, (int32_t *)(v2 + 32));
  HashValue = data::ColorVector::getHashValue(&this->bg_color);
  common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->fade_in_duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fade_in_duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->fade_in_duration);
  }
  common::tools::HashUtils::appendHash(this->fade_in_duration, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->fade_out_duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fade_out_duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->fade_out_duration);
  }
  common::tools::HashUtils::appendHash(this->fade_out_duration, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->video_screen_adaptation >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->video_screen_adaptation >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->video_screen_adaptation);
  }
  common::tools::HashUtils::appendHash(this->video_screen_adaptation, (int32_t *)(v2 + 32));
  MapHashValue = data::getMapHashValue(&this->platform_settings);
  common::tools::HashUtils::appendHash(MapHashValue, (int32_t *)(v2 + 32));
  VecHashValue = data::getVecHashValue(&this->event_list);
  common::tools::HashUtils::appendHash(VecHashValue, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v11 == (char *)v2 )
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

// Line 1521: range 0000000013B58D52-0000000013B59BF5
bool __cdecl data::ConfigCutsceneContext::fromJson(data::ConfigCutsceneContext *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r14
  bool result; // al
  unsigned __int64 v7; // rax
  void (__fastcall **v8)(unsigned __int64, unsigned __int64); // rdx
  void (__fastcall *v9)(unsigned __int64, unsigned __int64); // rcx
  std::shared_ptr<data::ConfigTimeline> *v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  const Json::Value *v13; // rsi
  char v14; // [rsp+Fh] [rbp-341h]
  Json::Value *type_ptr; // [rsp+20h] [rbp-330h]
  const Json::Value *enable_force_streaming_ptr; // [rsp+28h] [rbp-328h]
  const Json::Value *cutscene_config_ptr; // [rsp+30h] [rbp-320h]
  const Json::Value *video_config_ptr; // [rsp+38h] [rbp-318h]
  char v20[784]; // [rsp+40h] [rbp-310h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(736LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "15 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 16 9 <unknown> 128 16 "
                        "9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9"
                        " <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigCutsceneContext::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234753535;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -218959118;
  v4[536862740] = -218959118;
  v4[536862742] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 160),
    "type",
    (const std::allocator<char> *)(v2 + 32));
  type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 160));
  std::string::~string((void *)(v2 + 160));
  *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( !type_ptr )
    goto LABEL_11;
  *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 224, 32LL);
  }
  Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 224), (Json::Value_0 *)type_ptr);
  v5 = !data::enumStrToVal((const std::string *)(v2 + 224), &this->type);
  std::string::~string((void *)(v2 + 224));
  *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
  if ( v5 )
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
      "./src/json_data_auto/ConfigCutscene.cpp",
      "fromJson",
      1531);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      (common::milog::MiLogStream *const)(v2 + 288),
      (const char (*)[26])"fromJson for: type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
    result = 0;
  }
  else
  {
LABEL_11:
    *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 352),
      "enableForceStreaming",
      (const std::allocator<char> *)(v2 + 48));
    enable_force_streaming_ptr = jsonValueFind(jval, (const std::string *)(v2 + 352));
    std::string::~string((void *)(v2 + 352));
    *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( enable_force_streaming_ptr && !fromJson<bool>(enable_force_streaming_ptr, &this->enable_force_streaming) )
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
        "./src/json_data_auto/ConfigCutscene.cpp",
        "fromJson",
        1543);
      common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
        (common::milog::MiLogStream *const)(v2 + 416),
        (const char (*)[42])"fromJson for: enableForceStreaming fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
      result = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 480),
        "cutsceneConfig",
        (const std::allocator<char> *)(v2 + 64));
      cutscene_config_ptr = jsonValueFind(jval, (const std::string *)(v2 + 480));
      std::string::~string((void *)(v2 + 480));
      *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( cutscene_config_ptr )
      {
        *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
        v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigTimelineFactory,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigTimelineFactory,(__gnu_cxx::_Lock_policy)2,false,false> *const)&data::ConfigTimelineFactory::instance_ptr);
        if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load8(v7);
        v8 = *(void (__fastcall ***)(unsigned __int64, unsigned __int64))v7;
        if ( *(_BYTE *)((*(_QWORD *)v7 >> 3) + 0x7FFF8000LL) )
          v7 = __asan_report_load8(*(_QWORD *)v7);
        v9 = *v8;
        if ( *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) )
          v7 = __asan_report_store16();
        v9(v2 + 128, v7);
        v10 = std::shared_ptr<data::ConfigTimeline>::operator=(
                &this->cutscene_config,
                (std::shared_ptr<data::ConfigTimeline> *)(v2 + 128));
        if ( std::operator==<data::ConfigTimeline>(v10, 0LL) )
          goto LABEL_32;
        v11 = (unsigned __int64)std::__shared_ptr_access<data::ConfigTimeline,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigTimeline,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cutscene_config);
        if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
          v11 = __asan_report_load8(v11);
        v12 = *(_QWORD *)v11 + 48LL;
        if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
          v11 = __asan_report_load8(*(_QWORD *)v11 + 48LL);
        if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64, const Json::Value *))v12)(v11, cutscene_config_ptr) != 1 )
LABEL_32:
          v14 = 1;
        else
          v14 = 0;
        std::shared_ptr<data::ConfigTimeline>::~shared_ptr((std::shared_ptr<data::ConfigTimeline> *const)(v2 + 128));
        *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -1800;
        if ( v14 )
        {
          *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 544) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 544, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 544),
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/json_data_auto/ConfigCutscene.cpp",
            "fromJson",
            1557);
          common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
            (common::milog::MiLogStream *const)(v2 + 544),
            (const char (*)[36])"fromJson for: cutsceneConfig fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
          *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
        }
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        common::tools::perf::make_shared<data::ConfigTimeline>();
        std::shared_ptr<data::ConfigTimeline>::operator=(
          &this->cutscene_config,
          (std::shared_ptr<data::ConfigTimeline> *)(v2 + 96));
        std::shared_ptr<data::ConfigTimeline>::~shared_ptr((std::shared_ptr<data::ConfigTimeline> *const)(v2 + 96));
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -1800;
      }
      *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 608),
        "videoConfig",
        (const std::allocator<char> *)(v2 + 80));
      v13 = (const Json::Value *)(v2 + 608);
      video_config_ptr = jsonValueFind(jval, (const std::string *)(v2 + 608));
      std::string::~string((void *)(v2 + 608));
      *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( video_config_ptr
        && (v13 = video_config_ptr, !data::ConfigVideo::fromJson(&this->video_config, video_config_ptr)) )
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
          3u,
          "./src/json_data_auto/ConfigCutscene.cpp",
          "fromJson",
          1568);
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
          (common::milog::MiLogStream *const)(v2 + 672),
          (const char (*)[33])"fromJson for: videoConfig fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
        result = 0;
      }
      else
      {
        if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(&this->is_json_loaded, v13, &this->is_json_loaded);
        this->is_json_loaded = 1;
        result = 1;
      }
    }
  }
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8050) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8058) = 0;
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

// Line 1576: range 0000000013B59BF6-0000000013B59E54
int32_t __cdecl data::ConfigCutsceneContext::getHashValue(const data::ConfigCutsceneContext *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  __int64 v5; // rsi
  __int64 v6; // rdx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  int32_t v9; // eax
  int32_t HashValue; // eax
  int32_t result; // eax
  char v12[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1577";
  *(_QWORD *)(v2 + 16) = data::ConfigCutsceneContext::getHashValue;
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
  common::tools::HashUtils::appendHash(this->type, (int32_t *)(v2 + 32));
  v5 = ((_BYTE)this + 4) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->enable_force_streaming >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->enable_force_streaming >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(&this->enable_force_streaming, v5, v6);
  common::tools::HashUtils::appendHash(this->enable_force_streaming, (int32_t *)(v2 + 32));
  if ( std::operator!=<data::ConfigTimeline>(0LL, &this->cutscene_config) )
  {
    v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigTimeline,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigTimeline,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->cutscene_config);
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8(v7);
    v8 = *(_QWORD *)v7 + 56LL;
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8(*(_QWORD *)v7 + 56LL);
    v9 = (*(__int64 (__fastcall **)(unsigned __int64))v8)(v7);
    common::tools::HashUtils::appendHash(v9, (int32_t *)(v2 + 32));
  }
  HashValue = data::ConfigVideo::getHashValue(&this->video_config);
  common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v12 == (char *)v2 )
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

// Line 1589: range 0000000013B59E55-0000000013B5AC6E
bool __cdecl data::mapFromJson(const Json::Value *jval, data::ConfigCutsceneContextMap *m)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // al
  unsigned __int64 v6; // rax
  common::milog::MiLogStream *v7; // r14
  _BOOL4 v8; // r14d
  common::milog::MiLogStream *v9; // rax
  unsigned __int64 v10; // rax
  const Json::Value *v11; // rax
  unsigned __int64 v12; // rax
  data::ConfigCutsceneContext *v13; // r8
  common::milog::MiLogStream *v14; // rax
  int v15; // r14d
  std::pair<std::__detail::_Node_iterator<std::pair<int const,data::ConfigCutsceneContext>,false,false>,bool> v16; // rax
  common::milog::MiLogStream *v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  int v21; // edx
  bool v23; // [rsp+Fh] [rbp-461h]
  char v24[1104]; // [rsp+20h] [rbp-450h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1056LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "13 48 4 8 key:1594 64 16 8 cit:1591 96 16 9 <unknown> 128 32 12 key_str:1595 192 32 9 <unknown> "
                        "256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 40 13 tmp_jval:1"
                        "590 592 40 13 key_jval:1593 672 40 15 value_jval:1606 752 240 10 value:1607";
  *(_QWORD *)(v2 + 16) = data::mapFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -218959360;
  v4[536862738] = 62194;
  v4[536862739] = -234881024;
  v4[536862740] = -218959118;
  v4[536862742] = -218959360;
  v4[536862743] = 62194;
  v4[536862751] = -202116109;
  v4[536862752] = -202116109;
  Json::Value::Value((Json::Value *)(v2 + 512), jval);
  if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  Json::Value::begin((Json::Value_0 *const)(v2 + 512));
  while ( 1 )
  {
    *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    Json::Value::end((Json::Value_0 *const)(v2 + 512));
    v5 = Json::ValueIteratorBase::operator!=(
           (const Json::ValueIteratorBase *const)(v2 + 64),
           (const Json::ValueIteratorBase::SelfType *)(v2 + 96));
    *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -1800;
    if ( !v5 )
      break;
    v6 = ((v2 + 592) >> 3) + 2147450880;
    *(_DWORD *)v6 = 0;
    *(_BYTE *)(v6 + 4) = 0;
    if ( *(char *)(((v2 + 592) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 631) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 119) & 7) >= *(_BYTE *)(((v2 + 631) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 592, 40LL);
    }
    Json::ValueIteratorBase::key((Json::ValueIteratorBase *)(v2 + 592));
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 128);
    if ( !fromJson<std::string>((const Json::Value *)(v2 + 592), (std::string *)(v2 + 128)) )
    {
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
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
        "./src/json_data_auto/ConfigCutscene.cpp",
        "mapFromJson",
        1598);
      v7 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             (common::milog::MiLogStream *const)(v2 + 192),
             (const char (*)[21])"key fromJson fails: ");
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 256, 32LL);
      }
      Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 256), (Json::Value_0 *)(v2 + 592));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, (const std::string *)(v2 + 256));
      std::string::~string((void *)(v2 + 256));
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
      v23 = 0;
      v8 = 0;
    }
    else if ( common::tools::StringUtils::strToNum<int>((const std::string *)(v2 + 128), (int *)(v2 + 48), 1) )
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
        "./src/json_data_auto/ConfigCutscene.cpp",
        "mapFromJson",
        1603);
      v9 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
             (common::milog::MiLogStream *const)(v2 + 320),
             (const char (*)[17])"strToNum fails: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, (const std::string *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      v23 = 0;
      v8 = 0;
    }
    else
    {
      v10 = ((v2 + 672) >> 3) + 2147450880;
      *(_DWORD *)v10 = 0;
      *(_BYTE *)(v10 + 4) = 0;
      v11 = Json::ValueIterator::operator*((Json::ValueIterator *const)(v2 + 64));
      Json::Value::Value((Json::Value *)(v2 + 672), v11);
      v12 = ((v2 + 752) >> 3) + 2147450880;
      *(_DWORD *)v12 = 0;
      *(_DWORD *)(v12 + 4) = 0;
      *(_DWORD *)(v12 + 8) = 0;
      *(_DWORD *)(v12 + 12) = 0;
      *(_DWORD *)(v12 + 16) = 0;
      *(_DWORD *)(v12 + 20) = 0;
      *(_DWORD *)(v12 + 24) = 0;
      *(_WORD *)(v12 + 28) = 0;
      data::ConfigCutsceneContext::ConfigCutsceneContext((data::ConfigCutsceneContext *const)(v2 + 752));
      if ( !data::ConfigCutsceneContext::fromJson(
              (data::ConfigCutsceneContext *const)(v2 + 752),
              (const Json::Value *)(v2 + 672)) )
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
          "./src/json_data_auto/ConfigCutscene.cpp",
          "mapFromJson",
          1610);
        v14 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)(v2 + 384),
                (const char (*)[28])"value fromJson fails, key: ");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v14, (const int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        v23 = 0;
        v15 = 0;
      }
      else
      {
        v16 = std::unordered_map<int,data::ConfigCutsceneContext>::emplace<int &,data::ConfigCutsceneContext&>(
                m,
                (int *)(v2 + 48),
                (data::ConfigCutsceneContext *)(v2 + 752),
                (int *)(v2 + 48),
                v13);
        if ( !v16.second )
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
            3u,
            "./src/json_data_auto/ConfigCutscene.cpp",
            "mapFromJson",
            1615);
          v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 448),
                  (const char (*)[16])"key duplicate: ");
          common::milog::MiLogStream::operator<<<int,(int *)0>(v17, (const int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          v23 = 0;
          v15 = 0;
        }
        else
        {
          v15 = 1;
        }
      }
      data::ConfigCutsceneContext::~ConfigCutsceneContext((data::ConfigCutsceneContext *const)(v2 + 752));
      Json::Value::~Value((Json::Value_0 *const)(v2 + 672));
      v8 = v15 == 1;
    }
    std::string::~string((void *)(v2 + 128));
    Json::Value::~Value((Json::Value_0 *const)(v2 + 592));
    v18 = ((v2 + 592) >> 3) + 2147450880;
    *(_DWORD *)v18 = -117901064;
    *(_BYTE *)(v18 + 4) = -8;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
    v19 = ((v2 + 672) >> 3) + 2147450880;
    *(_DWORD *)v19 = -117901064;
    *(_BYTE *)(v19 + 4) = -8;
    v20 = ((v2 + 752) >> 3) + 2147450880;
    *(_DWORD *)v20 = -117901064;
    *(_DWORD *)(v20 + 4) = -117901064;
    *(_DWORD *)(v20 + 8) = -117901064;
    *(_DWORD *)(v20 + 12) = -117901064;
    *(_DWORD *)(v20 + 16) = -117901064;
    *(_DWORD *)(v20 + 20) = -117901064;
    *(_DWORD *)(v20 + 24) = -117901064;
    *(_WORD *)(v20 + 28) = -1800;
    if ( !v8 )
    {
      v21 = 0;
      goto LABEL_36;
    }
    Json::ValueIterator::operator++((Json::ValueIterator *const)(v2 + 64));
  }
  v21 = 1;
LABEL_36:
  *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -1800;
  if ( v21 == 1 )
    v23 = 1;
  Json::Value::~Value((Json::Value_0 *const)(v2 + 512));
  if ( v24 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8054) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF805C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8064) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF806C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8074) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF807C) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1056LL, v24);
  }
  return v23;
};

// Line 1624: range 0000000013B5AC6F-0000000013B5AF3F
int32_t __cdecl data::getMapHashValue(const data::ConfigCutsceneContextMap *map)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<int const,data::ConfigCutsceneContext>,false,false>::reference v7; // [rsp+18h] [rbp-B8h]
  int32_t *key; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<int const,data::ConfigCutsceneContext> >::type *val; // [rsp+28h] [rbp-A8h]
  char v10[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 hash_code:1625 64 8 16 __for_begin:1626 96 8 14 __for_end:1626";
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
  *(std::unordered_map<int,data::ConfigCutsceneContext>::const_iterator *)(v2 + 64) = std::unordered_map<int,data::ConfigCutsceneContext>::begin(map);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<int,data::ConfigCutsceneContext>::const_iterator *)(v2 + 96) = std::unordered_map<int,data::ConfigCutsceneContext>::end(map);
  while ( std::__detail::operator!=<std::pair<int const,data::ConfigCutsceneContext>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<int const,data::ConfigCutsceneContext>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<int const,data::ConfigCutsceneContext>,false> *)(v2 + 96)) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<int const,data::ConfigCutsceneContext>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<int const,data::ConfigCutsceneContext>,false,false> *const)(v2 + 64));
    key = std::get<0ul,int const,data::ConfigCutsceneContext>(v7);
    val = (std::tuple_element<1,const std::pair<int const,data::ConfigCutsceneContext> >::type *)std::get<1ul,int const,data::ConfigCutsceneContext>(v7);
    if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)key & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(key);
    }
    common::tools::HashUtils::appendHash(*key, (int32_t *)(v2 + 48));
    HashValue = data::ConfigCutsceneContext::getHashValue(val);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    std::__detail::_Node_const_iterator<std::pair<int const,data::ConfigCutsceneContext>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<int const,data::ConfigCutsceneContext>,false,false> *const)(v2 + 64));
  }
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 48);
  result = *(_DWORD *)(v2 + 48);
  if ( v10 == (char *)v2 )
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

// Line 1638: range 0000000013B5AF40-0000000013B5B52B
bool __cdecl data::ConfigCutsceneIndex::fromJson(data::ConfigCutsceneIndex *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  data::ConfigCutsceneContextMap *p_platform; // rsi
  const Json::Value *normal_ptr; // [rsp+10h] [rbp-170h]
  const Json::Value *platform_ptr; // [rsp+18h] [rbp-168h]
  char v10[352]; // [rsp+20h] [rbp-160h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 1 9 <unknown> 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigCutsceneIndex::fromJson;
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
    "normal",
    (const std::allocator<char> *)(v2 + 32));
  normal_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( normal_ptr && !data::ConfigCutsceneContext::fromJson(&this->normal, normal_ptr) )
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
      "./src/json_data_auto/ConfigCutscene.cpp",
      "fromJson",
      1648);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[28])"fromJson for: normal fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    result = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 192),
      "platform",
      (const std::allocator<char> *)(v2 + 48));
    p_platform = (data::ConfigCutsceneContextMap *)(v2 + 192);
    platform_ptr = jsonValueFind(jval, (const std::string *)(v2 + 192));
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( platform_ptr && (p_platform = &this->platform, !data::mapFromJson(platform_ptr, &this->platform)) )
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
        "./src/json_data_auto/ConfigCutscene.cpp",
        "fromJson",
        1660);
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        (common::milog::MiLogStream *const)(v2 + 256),
        (const char (*)[30])"fromJson for: platform fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_json_loaded, p_platform, &this->is_json_loaded);
      this->is_json_loaded = 1;
      result = 1;
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

// Line 1668: range 0000000013B5B52C-0000000013B5B689
int32_t __cdecl data::ConfigCutsceneIndex::getHashValue(const data::ConfigCutsceneIndex *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // eax
  int32_t MapHashValue; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1669";
  *(_QWORD *)(v2 + 16) = data::ConfigCutsceneIndex::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  HashValue = data::ConfigCutsceneContext::getHashValue(&this->normal);
  common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 32));
  MapHashValue = data::getMapHashValue(&this->platform);
  common::tools::HashUtils::appendHash(MapHashValue, (int32_t *)(v2 + 32));
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

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/ConfigCommonType.cpp

// Line 19: range 000000001210C810-000000001210CAA9
const char *__cdecl data::enumValToStr(data::PlayMode e)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  const char *result; // rax
  const char *v5; // rsi
  common::milog::MiLogStream *v6; // rdi
  data::PlayMode v7; // ecx
  char v8; // al
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v10;
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
    case PLAY_MODE_ALL:
      result = "PLAY_MODE_ALL";
      break;
    case PLAY_MODE_SINGLE:
      result = "PLAY_MODE_SINGLE";
      break;
    case PLAY_MODE_MULTIPLE:
      result = "PLAY_MODE_MULTIPLE";
      break;
    case PLAY_MODE_HOST:
      result = "PLAY_MODE_HOST";
      break;
    case PLAY_MODE_GUEST:
      result = "PLAY_MODE_GUEST";
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
        "./src/json_data_auto/ComponentDefines/ConfigCommonType.cpp",
        "enumValToStr",
        33);
      v5 = "invalid e:";
      v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
             (common::milog::MiLogStream *const)(v1 + 64),
             (const char (*)[11])"invalid e:");
      v7 = e;
      v8 = *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000);
      if ( v8 != 0 && v8 <= 3 )
      {
        v6 = (common::milog::MiLogStream *)(v1 + 48);
        LOBYTE(v5) = v8 != 0;
        __asan_report_store4(v1 + 48, v5);
      }
      *(_DWORD *)(v1 + 48) = v7;
      common::milog::MiLogStream::operator<<<int,(int *)0>(v6, (const int *)(v1 + 48));
      *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 64));
      result = (const char *)&unk_1A891C40;
      break;
  }
  if ( v10 == (char *)v1 )
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

// Line 39: range 000000001210CAAA-000000001210D514
bool __cdecl data::enumStrToVal(const std::string *s, data::PlayMode *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::PlayMode> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::PlayMode> >::pointer v11; // rax
  data::PlayMode second; // ecx
  char v13; // dl
  data::PlayMode *ea; // [rsp+10h] [rbp-2A0h]
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
      "./src/json_data_auto/ComponentDefines/ConfigCommonType.cpp",
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::PlayMode &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::PlayMode &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::PlayMode>::pair<char const(&)[14],data::PlayMode,true>(
        (std::pair<const std::string,data::PlayMode> *const)(v2 + 336),
        (const char (*)[14])"PLAY_MODE_ALL",
        (data::PlayMode *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "PLAY_MODE_ALL");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::PlayMode>::pair<char const(&)[17],data::PlayMode,true>(
        (std::pair<const std::string,data::PlayMode> *const)(v2 + 376),
        (const char (*)[17])"PLAY_MODE_SINGLE",
        (data::PlayMode *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "PLAY_MODE_SINGLE");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::PlayMode>::pair<char const(&)[19],data::PlayMode,true>(
        (std::pair<const std::string,data::PlayMode> *const)(v2 + 416),
        (const char (*)[19])"PLAY_MODE_MULTIPLE",
        (data::PlayMode *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "PLAY_MODE_MULTIPLE");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::PlayMode>::pair<char const(&)[15],data::PlayMode,true>(
        (std::pair<const std::string,data::PlayMode> *const)(v2 + 456),
        (const char (*)[15])"PLAY_MODE_HOST",
        (data::PlayMode *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "PLAY_MODE_HOST");
      *(_DWORD *)(v2 + 128) = 4;
      std::pair<std::string const,data::PlayMode>::pair<char const(&)[16],data::PlayMode,true>(
        (std::pair<const std::string,data::PlayMode> *const)(v2 + 496),
        (const char (*)[16])"PLAY_MODE_GUEST",
        (data::PlayMode *)(v2 + 128));
      std::allocator<std::pair<std::string const,data::PlayMode>>::allocator((std::allocator<std::pair<const std::string,data::PlayMode> > *const)(v2 + 48));
      std::map<std::string,data::PlayMode>::map(
        &data::enumStrToVal(std::string const&,data::PlayMode &)::m,
        (std::initializer_list<std::pair<const std::string,data::PlayMode> >)__PAIR128__(5LL, v2 + 336),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::PlayMode>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::PlayMode &)::m);
      e = (data::PlayMode *)&data::enumStrToVal(std::string const&,data::PlayMode &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::PlayMode>::~map,
        &data::enumStrToVal(std::string const&,data::PlayMode &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::PlayMode>>::~allocator((std::allocator<std::pair<const std::string,data::PlayMode> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::PlayMode> *)(v2 + 536);
            i != (std::pair<const std::string,data::PlayMode> *)(v2 + 336);
            std::pair<std::string const,data::PlayMode>::~pair(i) )
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
    *(std::map<std::string,data::PlayMode>::iterator *)(v2 + 144) = std::map<std::string,data::PlayMode>::find(
                                                                      &data::enumStrToVal(std::string const&,data::PlayMode &)::m,
                                                                      s);
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, s);
    *(std::map<std::string,data::PlayMode>::iterator *)(v2 + 176) = std::map<std::string,data::PlayMode>::end(&data::enumStrToVal(std::string const&,data::PlayMode &)::m);
    v8 = (char *)(v2 + 176);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::PlayMode> >::_Self *)(v2 + 144),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::PlayMode> >::_Self *)(v2 + 176));
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
        "./src/json_data_auto/ComponentDefines/ConfigCommonType.cpp",
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
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::PlayMode>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::PlayMode> > *const)(v2 + 144));
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

// Line 64: range 000000001210D515-000000001210D57B
const char *__cdecl data::getDescription(data::PlayMode e)
{
  const char *result; // rax

  switch ( e )
  {
    case PLAY_MODE_ALL:
      result = (const char *)&unk_1A8BAFE0;
      break;
    case PLAY_MODE_SINGLE:
      result = (const char *)&unk_1A90A1E0;
      break;
    case PLAY_MODE_MULTIPLE:
      result = (const char *)&unk_1A90A220;
      break;
    case PLAY_MODE_HOST:
      result = (const char *)&unk_1A90A260;
      break;
    case PLAY_MODE_GUEST:
      result = (const char *)&unk_1A90A2A0;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 83: range 000000001210D57C-000000001210D849
const char *__cdecl data::enumValToStr(data::LogicType e)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  const char *result; // rax
  const char *v5; // rsi
  common::milog::MiLogStream *v6; // rdi
  data::LogicType v7; // ecx
  char v8; // al
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v10;
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
    case LOGIC_NONE:
      result = "LOGIC_NONE";
      break;
    case LOGIC_AND:
      result = "LOGIC_AND";
      break;
    case LOGIC_OR:
      result = "LOGIC_OR";
      break;
    case LOGIC_NOT:
      result = "LOGIC_NOT";
      break;
    case LOGIC_A_AND_ETCOR:
      result = "LOGIC_A_AND_ETCOR";
      break;
    case LOGIC_A_AND_B_AND_ETCOR:
      result = "LOGIC_A_AND_B_AND_ETCOR";
      break;
    case LOGIC_A_OR_ETCAND:
      result = "LOGIC_A_OR_ETCAND";
      break;
    case LOGIC_A_OR_B_OR_ETCAND:
      result = "LOGIC_A_OR_B_OR_ETCAND";
      break;
    case LOGIC_A_AND_B_OR_ETCAND:
      result = "LOGIC_A_AND_B_OR_ETCAND";
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
        "./src/json_data_auto/ComponentDefines/ConfigCommonType.cpp",
        "enumValToStr",
        105);
      v5 = "invalid e:";
      v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
             (common::milog::MiLogStream *const)(v1 + 64),
             (const char (*)[11])"invalid e:");
      v7 = e;
      v8 = *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000);
      if ( v8 != 0 && v8 <= 3 )
      {
        v6 = (common::milog::MiLogStream *)(v1 + 48);
        LOBYTE(v5) = v8 != 0;
        __asan_report_store4(v1 + 48, v5);
      }
      *(_DWORD *)(v1 + 48) = v7;
      common::milog::MiLogStream::operator<<<int,(int *)0>(v6, (const int *)(v1 + 48));
      *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 64));
      result = (const char *)&unk_1A891C40;
      break;
  }
  if ( v10 == (char *)v1 )
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

// Line 111: range 000000001210D84A-000000001210E4CA
bool __cdecl data::enumStrToVal(const std::string *s, data::LogicType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::LogicType> *i; // r14
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::LogicType> >::pointer v10; // rax
  data::LogicType second; // ecx
  char v12; // dl
  data::LogicType *ea; // [rsp+10h] [rbp-380h]
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
                        "wn> 208 8 6 it:129 240 8 9 <unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 360 9 <unknown>";
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
      "./src/json_data_auto/ComponentDefines/ConfigCommonType.cpp",
      "enumStrToVal",
      114);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 272),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 272));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::LogicType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::LogicType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::LogicType>::pair<char const(&)[11],data::LogicType,true>(
        (std::pair<const std::string,data::LogicType> *const)(v2 + 400),
        (const char (*)[11])"LOGIC_NONE",
        (data::LogicType *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "LOGIC_NONE");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::LogicType>::pair<char const(&)[10],data::LogicType,true>(
        (std::pair<const std::string,data::LogicType> *const)(v2 + 440),
        (const char (*)[10])"LOGIC_AND",
        (data::LogicType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "LOGIC_AND");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::LogicType>::pair<char const(&)[9],data::LogicType,true>(
        (std::pair<const std::string,data::LogicType> *const)(v2 + 480),
        (const char (*)[9])"LOGIC_OR",
        (data::LogicType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "LOGIC_OR");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::LogicType>::pair<char const(&)[10],data::LogicType,true>(
        (std::pair<const std::string,data::LogicType> *const)(v2 + 520),
        (const char (*)[10])"LOGIC_NOT",
        (data::LogicType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "LOGIC_NOT");
      *(_DWORD *)(v2 + 128) = 4;
      std::pair<std::string const,data::LogicType>::pair<char const(&)[18],data::LogicType,true>(
        (std::pair<const std::string,data::LogicType> *const)(v2 + 560),
        (const char (*)[18])"LOGIC_A_AND_ETCOR",
        (data::LogicType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "LOGIC_A_AND_ETCOR");
      *(_DWORD *)(v2 + 144) = 5;
      std::pair<std::string const,data::LogicType>::pair<char const(&)[24],data::LogicType,true>(
        (std::pair<const std::string,data::LogicType> *const)(v2 + 600),
        (const char (*)[24])"LOGIC_A_AND_B_AND_ETCOR",
        (data::LogicType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "LOGIC_A_AND_B_AND_ETCOR");
      *(_DWORD *)(v2 + 160) = 6;
      std::pair<std::string const,data::LogicType>::pair<char const(&)[18],data::LogicType,true>(
        (std::pair<const std::string,data::LogicType> *const)(v2 + 640),
        (const char (*)[18])"LOGIC_A_OR_ETCAND",
        (data::LogicType *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, "LOGIC_A_OR_ETCAND");
      *(_DWORD *)(v2 + 176) = 7;
      std::pair<std::string const,data::LogicType>::pair<char const(&)[23],data::LogicType,true>(
        (std::pair<const std::string,data::LogicType> *const)(v2 + 680),
        (const char (*)[23])"LOGIC_A_OR_B_OR_ETCAND",
        (data::LogicType *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, "LOGIC_A_OR_B_OR_ETCAND");
      *(_DWORD *)(v2 + 192) = 8;
      std::pair<std::string const,data::LogicType>::pair<char const(&)[24],data::LogicType,true>(
        (std::pair<const std::string,data::LogicType> *const)(v2 + 720),
        (const char (*)[24])"LOGIC_A_AND_B_OR_ETCAND",
        (data::LogicType *)(v2 + 192));
      std::allocator<std::pair<std::string const,data::LogicType>>::allocator((std::allocator<std::pair<const std::string,data::LogicType> > *const)(v2 + 48));
      std::map<std::string,data::LogicType>::map(
        &data::enumStrToVal(std::string const&,data::LogicType &)::m,
        (std::initializer_list<std::pair<const std::string,data::LogicType> >)__PAIR128__(9LL, v2 + 400),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::LogicType>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::LogicType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::LogicType>::~map,
        &data::enumStrToVal(std::string const&,data::LogicType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::LogicType>>::~allocator((std::allocator<std::pair<const std::string,data::LogicType> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::LogicType> *)(v2 + 760);
            i != (std::pair<const std::string,data::LogicType> *)(v2 + 400);
            std::pair<std::string const,data::LogicType>::~pair(i) )
      {
        --i;
      }
      e = (data::LogicType *)360;
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
    *(std::map<std::string,data::LogicType>::iterator *)(v2 + 208) = std::map<std::string,data::LogicType>::find(
                                                                       &data::enumStrToVal(std::string const&,data::LogicType &)::m,
                                                                       s);
    *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 240, s);
    *(std::map<std::string,data::LogicType>::iterator *)(v2 + 240) = std::map<std::string,data::LogicType>::end(&data::enumStrToVal(std::string const&,data::LogicType &)::m);
    v7 = (char *)(v2 + 240);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::LogicType> >::_Self *)(v2 + 208),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::LogicType> >::_Self *)(v2 + 240));
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
        "./src/json_data_auto/ComponentDefines/ConfigCommonType.cpp",
        "enumStrToVal",
        132);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 336),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 336));
      result = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::LogicType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::LogicType> > *const)(v2 + 208));
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

// Line 140: range 000000001210E4CB-000000001210E555
const char *__cdecl data::getDescription(data::LogicType e)
{
  const char *result; // rax

  switch ( e )
  {
    case LOGIC_NONE:
      result = (const char *)&unk_1A8C3620;
      break;
    case LOGIC_AND:
      result = (const char *)&unk_1A90A6A0;
      break;
    case LOGIC_OR:
      result = (const char *)&unk_1A90A6E0;
      break;
    case LOGIC_NOT:
      result = (const char *)&unk_1A90A720;
      break;
    case LOGIC_A_AND_ETCOR:
      result = (const char *)&unk_1A90A760;
      break;
    case LOGIC_A_AND_B_AND_ETCOR:
      result = (const char *)&unk_1A90A7C0;
      break;
    case LOGIC_A_OR_ETCAND:
      result = (const char *)&unk_1A90A820;
      break;
    case LOGIC_A_OR_B_OR_ETCAND:
      result = (const char *)&unk_1A90A880;
      break;
    case LOGIC_A_AND_B_OR_ETCAND:
      result = (const char *)&unk_1A90A8E0;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 167: range 000000001210E556-000000001210E7F4
const char *__cdecl data::enumValToStr(data::BanGroupType e)
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
    case BAN_GROUP_INVALID:
      result = "BAN_GROUP_INVALID";
      break;
    case BAN_GROUP_COMMON:
      result = "BAN_GROUP_COMMON";
      break;
    case BAN_GROUP_TRANSPORT_ONLY:
      result = "BAN_GROUP_TRANSPORT_ONLY";
      break;
    case BAN_GROUP_TRANSPORT_MAP:
      result = "BAN_GROUP_TRANSPORT_MAP";
      break;
    case BAN_GROUP_TRANSPOR_GOTO_SCENE:
      result = "BAN_GROUP_TRANSPOR_GOTO_SCENE";
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
        "./src/json_data_auto/ComponentDefines/ConfigCommonType.cpp",
        "enumValToStr",
        181);
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

// Line 187: range 000000001210E7F5-000000001210F25F
bool __cdecl data::enumStrToVal(const std::string *s, data::BanGroupType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::BanGroupType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::BanGroupType> >::pointer v11; // rax
  data::BanGroupType second; // ecx
  char v13; // dl
  data::BanGroupType *ea; // [rsp+10h] [rbp-2A0h]
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
                        "<unknown> 128 4 9 <unknown> 144 8 6 it:201 176 8 9 <unknown> 208 32 9 <unknown> 272 32 9 <unknow"
                        "n> 336 200 9 <unknown>";
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
      "./src/json_data_auto/ComponentDefines/ConfigCommonType.cpp",
      "enumStrToVal",
      190);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 208),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 208));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::BanGroupType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::BanGroupType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::BanGroupType>::pair<char const(&)[18],data::BanGroupType,true>(
        (std::pair<const std::string,data::BanGroupType> *const)(v2 + 336),
        (const char (*)[18])"BAN_GROUP_INVALID",
        (data::BanGroupType *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "BAN_GROUP_INVALID");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::BanGroupType>::pair<char const(&)[17],data::BanGroupType,true>(
        (std::pair<const std::string,data::BanGroupType> *const)(v2 + 376),
        (const char (*)[17])"BAN_GROUP_COMMON",
        (data::BanGroupType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "BAN_GROUP_COMMON");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::BanGroupType>::pair<char const(&)[25],data::BanGroupType,true>(
        (std::pair<const std::string,data::BanGroupType> *const)(v2 + 416),
        (const char (*)[25])"BAN_GROUP_TRANSPORT_ONLY",
        (data::BanGroupType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "BAN_GROUP_TRANSPORT_ONLY");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::BanGroupType>::pair<char const(&)[24],data::BanGroupType,true>(
        (std::pair<const std::string,data::BanGroupType> *const)(v2 + 456),
        (const char (*)[24])"BAN_GROUP_TRANSPORT_MAP",
        (data::BanGroupType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "BAN_GROUP_TRANSPORT_MAP");
      *(_DWORD *)(v2 + 128) = 4;
      std::pair<std::string const,data::BanGroupType>::pair<char const(&)[30],data::BanGroupType,true>(
        (std::pair<const std::string,data::BanGroupType> *const)(v2 + 496),
        (const char (*)[30])"BAN_GROUP_TRANSPOR_GOTO_SCENE",
        (data::BanGroupType *)(v2 + 128));
      std::allocator<std::pair<std::string const,data::BanGroupType>>::allocator((std::allocator<std::pair<const std::string,data::BanGroupType> > *const)(v2 + 48));
      std::map<std::string,data::BanGroupType>::map(
        &data::enumStrToVal(std::string const&,data::BanGroupType &)::m,
        (std::initializer_list<std::pair<const std::string,data::BanGroupType> >)__PAIR128__(5LL, v2 + 336),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::BanGroupType>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::BanGroupType &)::m);
      e = (data::BanGroupType *)&data::enumStrToVal(std::string const&,data::BanGroupType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::BanGroupType>::~map,
        &data::enumStrToVal(std::string const&,data::BanGroupType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::BanGroupType>>::~allocator((std::allocator<std::pair<const std::string,data::BanGroupType> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::BanGroupType> *)(v2 + 536);
            i != (std::pair<const std::string,data::BanGroupType> *)(v2 + 336);
            std::pair<std::string const,data::BanGroupType>::~pair(i) )
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
    *(std::map<std::string,data::BanGroupType>::iterator *)(v2 + 144) = std::map<std::string,data::BanGroupType>::find(
                                                                          &data::enumStrToVal(std::string const&,data::BanGroupType &)::m,
                                                                          s);
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, s);
    *(std::map<std::string,data::BanGroupType>::iterator *)(v2 + 176) = std::map<std::string,data::BanGroupType>::end(&data::enumStrToVal(std::string const&,data::BanGroupType &)::m);
    v8 = (char *)(v2 + 176);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::BanGroupType> >::_Self *)(v2 + 144),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::BanGroupType> >::_Self *)(v2 + 176));
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
        "./src/json_data_auto/ComponentDefines/ConfigCommonType.cpp",
        "enumStrToVal",
        204);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 272),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 272));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::BanGroupType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::BanGroupType> > *const)(v2 + 144));
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

// Line 212: range 000000001210F260-000000001210F2C5
const char *__cdecl data::getDescription(data::BanGroupType e)
{
  const char *result; // rax

  switch ( e )
  {
    case BAN_GROUP_INVALID:
      result = (const char *)&unk_1A8AECE0;
      break;
    case BAN_GROUP_COMMON:
      result = (const char *)&unk_1A90ABC0;
      break;
    case BAN_GROUP_TRANSPORT_ONLY:
      result = (const char *)&unk_1A90AC00;
      break;
    case BAN_GROUP_TRANSPORT_MAP:
      result = (const char *)&unk_1A90AC40;
      break;
    case BAN_GROUP_TRANSPOR_GOTO_SCENE:
      result = (const char *)&unk_1A90AC80;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 231: range 000000001210F2C6-000000001210F564
const char *__cdecl data::enumValToStr(data::BanType e)
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
    case BAN_INVALID:
      result = "BAN_INVALID";
      break;
    case BAN_TRANSPORT:
      result = "BAN_TRANSPORT";
      break;
    case BAN_GOTO_SCENE:
      result = "BAN_GOTO_SCENE";
      break;
    case BAN_NPC_INTERACTION:
      result = "BAN_NPC_INTERACTION";
      break;
    case BAN_GOTO_MULTIPLAYER:
      result = "BAN_GOTO_MULTIPLAYER";
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
        "./src/json_data_auto/ComponentDefines/ConfigCommonType.cpp",
        "enumValToStr",
        245);
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

// Line 251: range 000000001210F565-000000001210FFCF
bool __cdecl data::enumStrToVal(const std::string *s, data::BanType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::BanType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::BanType> >::pointer v11; // rax
  data::BanType second; // ecx
  char v13; // dl
  data::BanType *ea; // [rsp+10h] [rbp-2A0h]
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
                        "<unknown> 128 4 9 <unknown> 144 8 6 it:265 176 8 9 <unknown> 208 32 9 <unknown> 272 32 9 <unknow"
                        "n> 336 200 9 <unknown>";
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
      "./src/json_data_auto/ComponentDefines/ConfigCommonType.cpp",
      "enumStrToVal",
      254);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 208),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 208));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::BanType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::BanType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::BanType>::pair<char const(&)[12],data::BanType,true>(
        (std::pair<const std::string,data::BanType> *const)(v2 + 336),
        (const char (*)[12])"BAN_INVALID",
        (data::BanType *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "BAN_INVALID");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::BanType>::pair<char const(&)[14],data::BanType,true>(
        (std::pair<const std::string,data::BanType> *const)(v2 + 376),
        (const char (*)[14])"BAN_TRANSPORT",
        (data::BanType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "BAN_TRANSPORT");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::BanType>::pair<char const(&)[15],data::BanType,true>(
        (std::pair<const std::string,data::BanType> *const)(v2 + 416),
        (const char (*)[15])"BAN_GOTO_SCENE",
        (data::BanType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "BAN_GOTO_SCENE");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::BanType>::pair<char const(&)[20],data::BanType,true>(
        (std::pair<const std::string,data::BanType> *const)(v2 + 456),
        (const char (*)[20])"BAN_NPC_INTERACTION",
        (data::BanType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "BAN_NPC_INTERACTION");
      *(_DWORD *)(v2 + 128) = 4;
      std::pair<std::string const,data::BanType>::pair<char const(&)[21],data::BanType,true>(
        (std::pair<const std::string,data::BanType> *const)(v2 + 496),
        (const char (*)[21])"BAN_GOTO_MULTIPLAYER",
        (data::BanType *)(v2 + 128));
      std::allocator<std::pair<std::string const,data::BanType>>::allocator((std::allocator<std::pair<const std::string,data::BanType> > *const)(v2 + 48));
      std::map<std::string,data::BanType>::map(
        &data::enumStrToVal(std::string const&,data::BanType &)::m,
        (std::initializer_list<std::pair<const std::string,data::BanType> >)__PAIR128__(5LL, v2 + 336),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::BanType>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::BanType &)::m);
      e = (data::BanType *)&data::enumStrToVal(std::string const&,data::BanType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::BanType>::~map,
        &data::enumStrToVal(std::string const&,data::BanType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::BanType>>::~allocator((std::allocator<std::pair<const std::string,data::BanType> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::BanType> *)(v2 + 536);
            i != (std::pair<const std::string,data::BanType> *)(v2 + 336);
            std::pair<std::string const,data::BanType>::~pair(i) )
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
    *(std::map<std::string,data::BanType>::iterator *)(v2 + 144) = std::map<std::string,data::BanType>::find(
                                                                     &data::enumStrToVal(std::string const&,data::BanType &)::m,
                                                                     s);
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, s);
    *(std::map<std::string,data::BanType>::iterator *)(v2 + 176) = std::map<std::string,data::BanType>::end(&data::enumStrToVal(std::string const&,data::BanType &)::m);
    v8 = (char *)(v2 + 176);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::BanType> >::_Self *)(v2 + 144),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::BanType> >::_Self *)(v2 + 176));
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
        "./src/json_data_auto/ComponentDefines/ConfigCommonType.cpp",
        "enumStrToVal",
        268);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 272),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 272));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::BanType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::BanType> > *const)(v2 + 144));
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

// Line 276: range 000000001210FFD0-0000000012110035
const char *__cdecl data::getDescription(data::BanType e)
{
  const char *result; // rax

  switch ( e )
  {
    case BAN_INVALID:
      result = (const char *)&unk_1A8AECE0;
      break;
    case BAN_TRANSPORT:
      result = (const char *)&unk_1A90AF20;
      break;
    case BAN_GOTO_SCENE:
      result = (const char *)&unk_1A90AF60;
      break;
    case BAN_NPC_INTERACTION:
      result = (const char *)&unk_1A90AF60;
      break;
    case BAN_GOTO_MULTIPLAYER:
      result = (const char *)&unk_1A90AF60;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 295: range 0000000012110036-00000000121102D4
const char *__cdecl data::enumValToStr(data::OrderingType e)
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
    case Less:
      result = "Less";
      break;
    case Equal:
      result = "Equal";
      break;
    case Greater:
      result = "Greater";
      break;
    case LessOrEqual:
      result = "LessOrEqual";
      break;
    case GreaterOrEqual:
      result = "GreaterOrEqual";
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
        "./src/json_data_auto/ComponentDefines/ConfigCommonType.cpp",
        "enumValToStr",
        309);
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

// Line 315: range 00000000121102D5-0000000012110D3F
bool __cdecl data::enumStrToVal(const std::string *s, data::OrderingType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::OrderingType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::OrderingType> >::pointer v11; // rax
  data::OrderingType second; // ecx
  char v13; // dl
  data::OrderingType *ea; // [rsp+10h] [rbp-2A0h]
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
                        "<unknown> 128 4 9 <unknown> 144 8 6 it:329 176 8 9 <unknown> 208 32 9 <unknown> 272 32 9 <unknow"
                        "n> 336 200 9 <unknown>";
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
      "./src/json_data_auto/ComponentDefines/ConfigCommonType.cpp",
      "enumStrToVal",
      318);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 208),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 208));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::OrderingType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::OrderingType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::OrderingType>::pair<char const(&)[5],data::OrderingType,true>(
        (std::pair<const std::string,data::OrderingType> *const)(v2 + 336),
        (const char (*)[5])"Less",
        (data::OrderingType *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "Less");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::OrderingType>::pair<char const(&)[6],data::OrderingType,true>(
        (std::pair<const std::string,data::OrderingType> *const)(v2 + 376),
        (const char (*)[6])"Equal",
        (data::OrderingType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "Equal");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::OrderingType>::pair<char const(&)[8],data::OrderingType,true>(
        (std::pair<const std::string,data::OrderingType> *const)(v2 + 416),
        (const char (*)[8])"Greater",
        (data::OrderingType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "Greater");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::OrderingType>::pair<char const(&)[12],data::OrderingType,true>(
        (std::pair<const std::string,data::OrderingType> *const)(v2 + 456),
        (const char (*)[12])"LessOrEqual",
        (data::OrderingType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "LessOrEqual");
      *(_DWORD *)(v2 + 128) = 4;
      std::pair<std::string const,data::OrderingType>::pair<char const(&)[15],data::OrderingType,true>(
        (std::pair<const std::string,data::OrderingType> *const)(v2 + 496),
        (const char (*)[15])"GreaterOrEqual",
        (data::OrderingType *)(v2 + 128));
      std::allocator<std::pair<std::string const,data::OrderingType>>::allocator((std::allocator<std::pair<const std::string,data::OrderingType> > *const)(v2 + 48));
      std::map<std::string,data::OrderingType>::map(
        &data::enumStrToVal(std::string const&,data::OrderingType &)::m,
        (std::initializer_list<std::pair<const std::string,data::OrderingType> >)__PAIR128__(5LL, v2 + 336),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::OrderingType>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::OrderingType &)::m);
      e = (data::OrderingType *)&data::enumStrToVal(std::string const&,data::OrderingType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::OrderingType>::~map,
        &data::enumStrToVal(std::string const&,data::OrderingType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::OrderingType>>::~allocator((std::allocator<std::pair<const std::string,data::OrderingType> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::OrderingType> *)(v2 + 536);
            i != (std::pair<const std::string,data::OrderingType> *)(v2 + 336);
            std::pair<std::string const,data::OrderingType>::~pair(i) )
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
    *(std::map<std::string,data::OrderingType>::iterator *)(v2 + 144) = std::map<std::string,data::OrderingType>::find(
                                                                          &data::enumStrToVal(std::string const&,data::OrderingType &)::m,
                                                                          s);
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, s);
    *(std::map<std::string,data::OrderingType>::iterator *)(v2 + 176) = std::map<std::string,data::OrderingType>::end(&data::enumStrToVal(std::string const&,data::OrderingType &)::m);
    v8 = (char *)(v2 + 176);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::OrderingType> >::_Self *)(v2 + 144),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::OrderingType> >::_Self *)(v2 + 176));
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
        "./src/json_data_auto/ComponentDefines/ConfigCommonType.cpp",
        "enumStrToVal",
        332);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 272),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 272));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::OrderingType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::OrderingType> > *const)(v2 + 144));
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

// Line 340: range 0000000012110D40-0000000012110DA5
const char *__cdecl data::getDescription(data::OrderingType e)
{
  const char *result; // rax

  switch ( e )
  {
    case Less:
      result = (const char *)&unk_1A8AE840;
      break;
    case Equal:
      result = (const char *)&unk_1A8AE780;
      break;
    case Greater:
      result = (const char *)&unk_1A8AE800;
      break;
    case LessOrEqual:
      result = (const char *)&unk_1A8AE8C0;
      break;
    case GreaterOrEqual:
      result = (const char *)&unk_1A8AE880;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 359: range 0000000012110DA6-0000000012111114
const char *__cdecl data::enumValToStr(data::NPCBodyType e)
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
    case NONE_21:
      result = "NONE";
      break;
    case AVATAR_MALE:
      result = "AVATAR_MALE";
      break;
    case AVATAR_LADY:
      result = "AVATAR_LADY";
      break;
    case AVATAR_BOY:
      result = "AVATAR_BOY";
      break;
    case AVATAR_GIRL:
      result = "AVATAR_GIRL";
      break;
    case AVATAR_LOLI:
      result = "AVATAR_LOLI";
      break;
    case AVATAR_PAIMON:
      result = "AVATAR_PAIMON";
      break;
    case NPC_MALE:
      result = "NPC_MALE";
      break;
    case NPC_FEMALE:
      result = "NPC_FEMALE";
      break;
    case NPC_MUSCLEMAN:
      result = "NPC_MUSCLEMAN";
      break;
    case NPC_ELDER:
      result = "NPC_ELDER";
      break;
    case NPC_CHILD:
      result = "NPC_CHILD";
      break;
    case Barbara:
      result = "Barbara";
      break;
    case Bennett:
      result = "Bennett";
      break;
    case Chongyun:
      result = "Chongyun";
      break;
    case Noel:
      result = "Noel";
      break;
    case Diona:
      result = "Diona";
      break;
    case Sayu:
      result = "Sayu";
      break;
    case Tohma:
      result = "Tohma";
      break;
    case Beidou:
      result = "Beidou";
      break;
    case Gorou:
      result = "Gorou";
      break;
    case Ningguang:
      result = "Ningguang";
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
        "./src/json_data_auto/ComponentDefines/ConfigCommonType.cpp",
        "enumValToStr",
        407);
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

// Line 413: range 0000000012111115-00000000121124B7
bool __cdecl data::enumStrToVal(const std::string *s, data::NPCBodyType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  std::pair<const std::string,data::NPCBodyType> *i; // r14
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::NPCBodyType> >::pointer v10; // rax
  data::NPCBodyType second; // ecx
  char v12; // dl
  bool v13; // bl
  data::NPCBodyType *ea; // [rsp+10h] [rbp-6A0h]
  char v16[1680]; // [rsp+20h] [rbp-690h] BYREF

  ea = e;
  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1632LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "29 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 4 9"
                        " <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unknown> 208 4 9 <unkn"
                        "own> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 4 9 <unknown> 288 4 9 <unknown> 3"
                        "04 4 9 <unknown> 320 4 9 <unknown> 336 4 9 <unknown> 352 4 9 <unknown> 368 4 9 <unknown> 384 4 9"
                        " <unknown> 400 4 9 <unknown> 416 4 9 <unknown> 432 8 6 it:444 464 8 9 <unknown> 496 32 9 <unknow"
                        "n> 560 32 9 <unknown> 624 880 9 <unknown>";
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
  v4[536862728] = -234556924;
  v4[536862729] = -234556924;
  v4[536862730] = -234556924;
  v4[536862731] = -234556924;
  v4[536862732] = -234556924;
  v4[536862733] = 61956;
  v4[536862733] = -234881024;
  v4[536862734] = 62194;
  v4[536862734] = -234881024;
  v4[536862735] = 62194;
  v4[536862736] = -219021312;
  v4[536862737] = 62194;
  v4[536862738] = -219021312;
  v4[536862739] = 62194;
  v4[536862767] = -202116109;
  v4[536862768] = -202116109;
  v4[536862769] = -202116109;
  v4[536862770] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
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
      "./src/json_data_auto/ComponentDefines/ConfigCommonType.cpp",
      "enumStrToVal",
      416);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 496),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 496));
    v5 = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::NPCBodyType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::NPCBodyType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::NPCBodyType>::pair<char const(&)[5],data::NPCBodyType,true>(
        (std::pair<const std::string,data::NPCBodyType> *const)(v2 + 624),
        (const char (*)[5])"NONE",
        (data::NPCBodyType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "NONE");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::NPCBodyType>::pair<char const(&)[12],data::NPCBodyType,true>(
        (std::pair<const std::string,data::NPCBodyType> *const)(v2 + 664),
        (const char (*)[12])"AVATAR_MALE",
        (data::NPCBodyType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "AVATAR_MALE");
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::NPCBodyType>::pair<char const(&)[12],data::NPCBodyType,true>(
        (std::pair<const std::string,data::NPCBodyType> *const)(v2 + 704),
        (const char (*)[12])"AVATAR_LADY",
        (data::NPCBodyType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "AVATAR_LADY");
      *(_DWORD *)(v2 + 128) = 3;
      std::pair<std::string const,data::NPCBodyType>::pair<char const(&)[11],data::NPCBodyType,true>(
        (std::pair<const std::string,data::NPCBodyType> *const)(v2 + 744),
        (const char (*)[11])"AVATAR_BOY",
        (data::NPCBodyType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "AVATAR_BOY");
      *(_DWORD *)(v2 + 144) = 4;
      std::pair<std::string const,data::NPCBodyType>::pair<char const(&)[12],data::NPCBodyType,true>(
        (std::pair<const std::string,data::NPCBodyType> *const)(v2 + 784),
        (const char (*)[12])"AVATAR_GIRL",
        (data::NPCBodyType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "AVATAR_GIRL");
      *(_DWORD *)(v2 + 160) = 5;
      std::pair<std::string const,data::NPCBodyType>::pair<char const(&)[12],data::NPCBodyType,true>(
        (std::pair<const std::string,data::NPCBodyType> *const)(v2 + 824),
        (const char (*)[12])"AVATAR_LOLI",
        (data::NPCBodyType *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, "AVATAR_LOLI");
      *(_DWORD *)(v2 + 176) = 6;
      std::pair<std::string const,data::NPCBodyType>::pair<char const(&)[14],data::NPCBodyType,true>(
        (std::pair<const std::string,data::NPCBodyType> *const)(v2 + 864),
        (const char (*)[14])"AVATAR_PAIMON",
        (data::NPCBodyType *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, "AVATAR_PAIMON");
      *(_DWORD *)(v2 + 192) = 7;
      std::pair<std::string const,data::NPCBodyType>::pair<char const(&)[9],data::NPCBodyType,true>(
        (std::pair<const std::string,data::NPCBodyType> *const)(v2 + 904),
        (const char (*)[9])"NPC_MALE",
        (data::NPCBodyType *)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 208, "NPC_MALE");
      *(_DWORD *)(v2 + 208) = 8;
      std::pair<std::string const,data::NPCBodyType>::pair<char const(&)[11],data::NPCBodyType,true>(
        (std::pair<const std::string,data::NPCBodyType> *const)(v2 + 944),
        (const char (*)[11])"NPC_FEMALE",
        (data::NPCBodyType *)(v2 + 208));
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 224, "NPC_FEMALE");
      *(_DWORD *)(v2 + 224) = 9;
      std::pair<std::string const,data::NPCBodyType>::pair<char const(&)[14],data::NPCBodyType,true>(
        (std::pair<const std::string,data::NPCBodyType> *const)(v2 + 984),
        (const char (*)[14])"NPC_MUSCLEMAN",
        (data::NPCBodyType *)(v2 + 224));
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 240, "NPC_MUSCLEMAN");
      *(_DWORD *)(v2 + 240) = 10;
      std::pair<std::string const,data::NPCBodyType>::pair<char const(&)[10],data::NPCBodyType,true>(
        (std::pair<const std::string,data::NPCBodyType> *const)(v2 + 1024),
        (const char (*)[10])"NPC_ELDER",
        (data::NPCBodyType *)(v2 + 240));
      if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 256, "NPC_ELDER");
      *(_DWORD *)(v2 + 256) = 11;
      std::pair<std::string const,data::NPCBodyType>::pair<char const(&)[10],data::NPCBodyType,true>(
        (std::pair<const std::string,data::NPCBodyType> *const)(v2 + 1064),
        (const char (*)[10])"NPC_CHILD",
        (data::NPCBodyType *)(v2 + 256));
      if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 272, "NPC_CHILD");
      *(_DWORD *)(v2 + 272) = 12;
      std::pair<std::string const,data::NPCBodyType>::pair<char const(&)[8],data::NPCBodyType,true>(
        (std::pair<const std::string,data::NPCBodyType> *const)(v2 + 1104),
        (const char (*)[8])"Barbara",
        (data::NPCBodyType *)(v2 + 272));
      if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 288, "Barbara");
      *(_DWORD *)(v2 + 288) = 13;
      std::pair<std::string const,data::NPCBodyType>::pair<char const(&)[8],data::NPCBodyType,true>(
        (std::pair<const std::string,data::NPCBodyType> *const)(v2 + 1144),
        (const char (*)[8])"Bennett",
        (data::NPCBodyType *)(v2 + 288));
      if ( *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 304, "Bennett");
      *(_DWORD *)(v2 + 304) = 14;
      std::pair<std::string const,data::NPCBodyType>::pair<char const(&)[9],data::NPCBodyType,true>(
        (std::pair<const std::string,data::NPCBodyType> *const)(v2 + 1184),
        (const char (*)[9])"Chongyun",
        (data::NPCBodyType *)(v2 + 304));
      if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 320, "Chongyun");
      *(_DWORD *)(v2 + 320) = 15;
      std::pair<std::string const,data::NPCBodyType>::pair<char const(&)[5],data::NPCBodyType,true>(
        (std::pair<const std::string,data::NPCBodyType> *const)(v2 + 1224),
        (const char (*)[5])"Noel",
        (data::NPCBodyType *)(v2 + 320));
      if ( *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 336, "Noel");
      *(_DWORD *)(v2 + 336) = 16;
      std::pair<std::string const,data::NPCBodyType>::pair<char const(&)[6],data::NPCBodyType,true>(
        (std::pair<const std::string,data::NPCBodyType> *const)(v2 + 1264),
        (const char (*)[6])"Diona",
        (data::NPCBodyType *)(v2 + 336));
      if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 352, "Diona");
      *(_DWORD *)(v2 + 352) = 17;
      std::pair<std::string const,data::NPCBodyType>::pair<char const(&)[5],data::NPCBodyType,true>(
        (std::pair<const std::string,data::NPCBodyType> *const)(v2 + 1304),
        (const char (*)[5])"Sayu",
        (data::NPCBodyType *)(v2 + 352));
      if ( *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 368, "Sayu");
      *(_DWORD *)(v2 + 368) = 18;
      std::pair<std::string const,data::NPCBodyType>::pair<char const(&)[6],data::NPCBodyType,true>(
        (std::pair<const std::string,data::NPCBodyType> *const)(v2 + 1344),
        (const char (*)[6])"Tohma",
        (data::NPCBodyType *)(v2 + 368));
      if ( *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 384, "Tohma");
      *(_DWORD *)(v2 + 384) = 19;
      std::pair<std::string const,data::NPCBodyType>::pair<char const(&)[7],data::NPCBodyType,true>(
        (std::pair<const std::string,data::NPCBodyType> *const)(v2 + 1384),
        (const char (*)[7])"Beidou",
        (data::NPCBodyType *)(v2 + 384));
      if ( *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 400, "Beidou");
      *(_DWORD *)(v2 + 400) = 20;
      std::pair<std::string const,data::NPCBodyType>::pair<char const(&)[6],data::NPCBodyType,true>(
        (std::pair<const std::string,data::NPCBodyType> *const)(v2 + 1424),
        (const char (*)[6])"Gorou",
        (data::NPCBodyType *)(v2 + 400));
      if ( *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 416, "Gorou");
      *(_DWORD *)(v2 + 416) = 21;
      std::pair<std::string const,data::NPCBodyType>::pair<char const(&)[10],data::NPCBodyType,true>(
        (std::pair<const std::string,data::NPCBodyType> *const)(v2 + 1464),
        (const char (*)[10])"Ningguang",
        (data::NPCBodyType *)(v2 + 416));
      std::allocator<std::pair<std::string const,data::NPCBodyType>>::allocator((std::allocator<std::pair<const std::string,data::NPCBodyType> > *const)(v2 + 64));
      std::map<std::string,data::NPCBodyType>::map(
        &data::enumStrToVal(std::string const&,data::NPCBodyType &)::m,
        (std::initializer_list<std::pair<const std::string,data::NPCBodyType> >)__PAIR128__(22LL, v2 + 624),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::NPCBodyType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::NPCBodyType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::NPCBodyType>::~map,
        &data::enumStrToVal(std::string const&,data::NPCBodyType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::NPCBodyType>>::~allocator((std::allocator<std::pair<const std::string,data::NPCBodyType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::NPCBodyType> *)(v2 + 1504);
            i != (std::pair<const std::string,data::NPCBodyType> *)(v2 + 624);
            std::pair<std::string const,data::NPCBodyType>::~pair(i) )
      {
        --i;
      }
      e = (data::NPCBodyType *)880;
      __asan_poison_stack_memory(v2 + 624, 880LL);
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
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 432, e);
    *(std::map<std::string,data::NPCBodyType>::iterator *)(v2 + 432) = std::map<std::string,data::NPCBodyType>::find(
                                                                         &data::enumStrToVal(std::string const&,data::NPCBodyType &)::m,
                                                                         s);
    *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 464, s);
    *(std::map<std::string,data::NPCBodyType>::iterator *)(v2 + 464) = std::map<std::string,data::NPCBodyType>::end(&data::enumStrToVal(std::string const&,data::NPCBodyType &)::m);
    v7 = (char *)(v2 + 464);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::NPCBodyType> >::_Self *)(v2 + 432),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::NPCBodyType> >::_Self *)(v2 + 464));
    *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
    {
      *(_DWORD *)(((v2 + 560) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 560) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 591) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 591) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 560, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 560),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ComponentDefines/ConfigCommonType.cpp",
        "enumStrToVal",
        447);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 560),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 560));
      v5 = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::NPCBodyType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::NPCBodyType> > *const)(v2 + 432));
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
      v5 = 1;
    }
  }
  v13 = v5;
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80C4) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 204) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1632LL, v16);
  }
  return v13;
};

// Line 455: range 00000000121124B8-00000000121125D2
const char *__cdecl data::getDescription(data::NPCBodyType e)
{
  const char *result; // rax

  switch ( e )
  {
    case NONE_21:
      result = (const char *)&unk_1A8C3620;
      break;
    case AVATAR_MALE:
      result = (const char *)&unk_1A90B920;
      break;
    case AVATAR_LADY:
      result = (const char *)&unk_1A90B960;
      break;
    case AVATAR_BOY:
      result = (const char *)&unk_1A90B9A0;
      break;
    case AVATAR_GIRL:
      result = (const char *)&unk_1A90B9E0;
      break;
    case AVATAR_LOLI:
      result = (const char *)&unk_1A90BA20;
      break;
    case AVATAR_PAIMON:
      result = (const char *)&unk_1A90BA60;
      break;
    case NPC_MALE:
      result = (const char *)&unk_1A90BAA0;
      break;
    case NPC_FEMALE:
      result = (const char *)&unk_1A90BAE0;
      break;
    case NPC_MUSCLEMAN:
      result = (const char *)&unk_1A90BB20;
      break;
    case NPC_ELDER:
      result = (const char *)&unk_1A90BB60;
      break;
    case NPC_CHILD:
      result = (const char *)&unk_1A90BBA0;
      break;
    case Barbara:
      result = (const char *)&unk_1A90BBE0;
      break;
    case Bennett:
      result = (const char *)&unk_1A90BC20;
      break;
    case Chongyun:
      result = (const char *)&unk_1A90BC60;
      break;
    case Noel:
      result = (const char *)&unk_1A90BCA0;
      break;
    case Diona:
      result = (const char *)&unk_1A90BCE0;
      break;
    case Sayu:
      result = (const char *)&unk_1A90BD20;
      break;
    case Tohma:
      result = (const char *)&unk_1A90BD60;
      break;
    case Beidou:
      result = (const char *)&unk_1A90BDA0;
      break;
    case Gorou:
      result = (const char *)&unk_1A90BDE0;
      break;
    case Ningguang:
      result = (const char *)&unk_1A90BE20;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 508: range 00000000121125D3-000000001211282C
const char *__cdecl data::enumValToStr(data::NPCSpecialType e)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  const char *result; // rax
  const char *v5; // rsi
  common::milog::MiLogStream *v6; // rdi
  data::NPCSpecialType v7; // ecx
  char v8; // al
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v10;
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
    if ( e == NPC_SPECIAL_ARANARA )
    {
      result = "NPC_SPECIAL_ARANARA";
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
        "./src/json_data_auto/ComponentDefines/ConfigCommonType.cpp",
        "enumValToStr",
        516);
      v5 = "invalid e:";
      v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
             (common::milog::MiLogStream *const)(v1 + 64),
             (const char (*)[11])"invalid e:");
      v7 = e;
      v8 = *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000);
      if ( v8 != 0 && v8 <= 3 )
      {
        v6 = (common::milog::MiLogStream *)(v1 + 48);
        LOBYTE(v5) = v8 != 0;
        __asan_report_store4(v1 + 48, v5);
      }
      *(_DWORD *)(v1 + 48) = v7;
      common::milog::MiLogStream::operator<<<int,(int *)0>(v6, (const int *)(v1 + 48));
      *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 64));
      result = (const char *)&unk_1A891C40;
    }
  }
  else
  {
    result = "NPC_SPECIAL_NONE";
  }
  if ( v10 == (char *)v1 )
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

// Line 522: range 000000001211282D-0000000012113064
bool __cdecl data::enumStrToVal(const std::string *s, data::NPCSpecialType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::NPCSpecialType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::NPCSpecialType> >::pointer v11; // rax
  data::NPCSpecialType second; // ecx
  char v13; // dl
  data::NPCSpecialType *ea; // [rsp+10h] [rbp-1E0h]
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
  *(_QWORD *)(v2 + 8) = "9 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 8 6 it:533 144 8 9 <un"
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
      "./src/json_data_auto/ComponentDefines/ConfigCommonType.cpp",
      "enumStrToVal",
      525);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 176),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::NPCSpecialType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::NPCSpecialType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::NPCSpecialType>::pair<char const(&)[17],data::NPCSpecialType,true>(
        (std::pair<const std::string,data::NPCSpecialType> *const)(v2 + 304),
        (const char (*)[17])"NPC_SPECIAL_NONE",
        (data::NPCSpecialType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "NPC_SPECIAL_NONE");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::NPCSpecialType>::pair<char const(&)[20],data::NPCSpecialType,true>(
        (std::pair<const std::string,data::NPCSpecialType> *const)(v2 + 344),
        (const char (*)[20])"NPC_SPECIAL_ARANARA",
        (data::NPCSpecialType *)(v2 + 96));
      std::allocator<std::pair<std::string const,data::NPCSpecialType>>::allocator((std::allocator<std::pair<const std::string,data::NPCSpecialType> > *const)(v2 + 64));
      std::map<std::string,data::NPCSpecialType>::map(
        &data::enumStrToVal(std::string const&,data::NPCSpecialType &)::m,
        (std::initializer_list<std::pair<const std::string,data::NPCSpecialType> >)__PAIR128__(2LL, v2 + 304),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::NPCSpecialType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::NPCSpecialType &)::m);
      e = (data::NPCSpecialType *)&data::enumStrToVal(std::string const&,data::NPCSpecialType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::NPCSpecialType>::~map,
        &data::enumStrToVal(std::string const&,data::NPCSpecialType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::NPCSpecialType>>::~allocator((std::allocator<std::pair<const std::string,data::NPCSpecialType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::NPCSpecialType> *)(v2 + 384);
            i != (std::pair<const std::string,data::NPCSpecialType> *)(v2 + 304);
            std::pair<std::string const,data::NPCSpecialType>::~pair(i) )
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
    *(std::map<std::string,data::NPCSpecialType>::iterator *)(v2 + 112) = std::map<std::string,data::NPCSpecialType>::find(
                                                                            &data::enumStrToVal(std::string const&,data::NPCSpecialType &)::m,
                                                                            s);
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 144, s);
    *(std::map<std::string,data::NPCSpecialType>::iterator *)(v2 + 144) = std::map<std::string,data::NPCSpecialType>::end(&data::enumStrToVal(std::string const&,data::NPCSpecialType &)::m);
    v8 = (char *)(v2 + 144);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::NPCSpecialType> >::_Self *)(v2 + 112),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::NPCSpecialType> >::_Self *)(v2 + 144));
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
        "./src/json_data_auto/ComponentDefines/ConfigCommonType.cpp",
        "enumStrToVal",
        536);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 240),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::NPCSpecialType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::NPCSpecialType> > *const)(v2 + 112));
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

// Line 544: range 0000000012113065-0000000012113094
const char *__cdecl data::getDescription(data::NPCSpecialType e)
{
  if ( e == NPC_SPECIAL_NONE )
    return (const char *)&unk_1A90BFE0;
  if ( e == NPC_SPECIAL_ARANARA )
    return (const char *)&unk_1A90C020;
  return "unknown enum value!";
};

// Line 557: range 0000000012113095-0000000012113346
const char *__cdecl data::enumValToStr(data::FeatureTagEnum e)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  const char *result; // rax
  const char *v5; // rsi
  common::milog::MiLogStream *v6; // rdi
  data::FeatureTagEnum v7; // ecx
  char v8; // al
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v10;
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
    case FEATURE_TAG_NONE:
      result = "FEATURE_TAG_NONE";
      break;
    case FEATURE_TAG_AVATAR:
      result = "FEATURE_TAG_AVATAR";
      break;
    case FEATURE_TAG_HUMAN:
      result = "FEATURE_TAG_HUMAN";
      break;
    case FEATURE_TAG_ARANARA:
      result = "FEATURE_TAG_ARANARA";
      break;
    case FEATURE_TAG_MONSTER:
      result = "FEATURE_TAG_MONSTER";
      break;
    case FEATURE_TAG_ANIMAL:
      result = "FEATURE_TAG_ANIMAL";
      break;
    case FEATURE_TAG_NAHIDA_INTER:
      result = "FEATURE_TAG_NAHIDA_INTER";
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
        "./src/json_data_auto/ComponentDefines/ConfigCommonType.cpp",
        "enumValToStr",
        575);
      v5 = "invalid e:";
      v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
             (common::milog::MiLogStream *const)(v1 + 64),
             (const char (*)[11])"invalid e:");
      v7 = e;
      v8 = *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000);
      if ( v8 != 0 && v8 <= 3 )
      {
        v6 = (common::milog::MiLogStream *)(v1 + 48);
        LOBYTE(v5) = v8 != 0;
        __asan_report_store4(v1 + 48, v5);
      }
      *(_DWORD *)(v1 + 48) = v7;
      common::milog::MiLogStream::operator<<<int,(int *)0>(v6, (const int *)(v1 + 48));
      *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 64));
      result = (const char *)&unk_1A891C40;
      break;
  }
  if ( v10 == (char *)v1 )
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

// Line 581: range 0000000012113347-0000000012113EAA
bool __cdecl data::enumStrToVal(const std::string *s, data::FeatureTagEnum *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::FeatureTagEnum> *i; // r14
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::FeatureTagEnum> >::pointer v10; // rax
  data::FeatureTagEnum second; // ecx
  char v12; // dl
  data::FeatureTagEnum *ea; // [rsp+10h] [rbp-320h]
  char v14[784]; // [rsp+20h] [rbp-310h] BYREF

  ea = e;
  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(736LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "14 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 4 9"
                        " <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 8 6 it:597 224 8 9 <unknown"
                        "> 256 32 9 <unknown> 320 32 9 <unknown> 384 280 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = -234556924;
  v4[536862724] = -234556924;
  v4[536862725] = -234556924;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862740] = -218103808;
  v4[536862741] = -202116109;
  v4[536862742] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
  {
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
      "./src/json_data_auto/ComponentDefines/ConfigCommonType.cpp",
      "enumStrToVal",
      584);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 256),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::FeatureTagEnum &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::FeatureTagEnum &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::FeatureTagEnum>::pair<char const(&)[17],data::FeatureTagEnum,true>(
        (std::pair<const std::string,data::FeatureTagEnum> *const)(v2 + 384),
        (const char (*)[17])"FEATURE_TAG_NONE",
        (data::FeatureTagEnum *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "FEATURE_TAG_NONE");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::FeatureTagEnum>::pair<char const(&)[19],data::FeatureTagEnum,true>(
        (std::pair<const std::string,data::FeatureTagEnum> *const)(v2 + 424),
        (const char (*)[19])"FEATURE_TAG_AVATAR",
        (data::FeatureTagEnum *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "FEATURE_TAG_AVATAR");
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::FeatureTagEnum>::pair<char const(&)[18],data::FeatureTagEnum,true>(
        (std::pair<const std::string,data::FeatureTagEnum> *const)(v2 + 464),
        (const char (*)[18])"FEATURE_TAG_HUMAN",
        (data::FeatureTagEnum *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "FEATURE_TAG_HUMAN");
      *(_DWORD *)(v2 + 128) = 3;
      std::pair<std::string const,data::FeatureTagEnum>::pair<char const(&)[20],data::FeatureTagEnum,true>(
        (std::pair<const std::string,data::FeatureTagEnum> *const)(v2 + 504),
        (const char (*)[20])"FEATURE_TAG_ARANARA",
        (data::FeatureTagEnum *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "FEATURE_TAG_ARANARA");
      *(_DWORD *)(v2 + 144) = 4;
      std::pair<std::string const,data::FeatureTagEnum>::pair<char const(&)[20],data::FeatureTagEnum,true>(
        (std::pair<const std::string,data::FeatureTagEnum> *const)(v2 + 544),
        (const char (*)[20])"FEATURE_TAG_MONSTER",
        (data::FeatureTagEnum *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "FEATURE_TAG_MONSTER");
      *(_DWORD *)(v2 + 160) = 5;
      std::pair<std::string const,data::FeatureTagEnum>::pair<char const(&)[19],data::FeatureTagEnum,true>(
        (std::pair<const std::string,data::FeatureTagEnum> *const)(v2 + 584),
        (const char (*)[19])"FEATURE_TAG_ANIMAL",
        (data::FeatureTagEnum *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, "FEATURE_TAG_ANIMAL");
      *(_DWORD *)(v2 + 176) = 6;
      std::pair<std::string const,data::FeatureTagEnum>::pair<char const(&)[25],data::FeatureTagEnum,true>(
        (std::pair<const std::string,data::FeatureTagEnum> *const)(v2 + 624),
        (const char (*)[25])"FEATURE_TAG_NAHIDA_INTER",
        (data::FeatureTagEnum *)(v2 + 176));
      std::allocator<std::pair<std::string const,data::FeatureTagEnum>>::allocator((std::allocator<std::pair<const std::string,data::FeatureTagEnum> > *const)(v2 + 64));
      std::map<std::string,data::FeatureTagEnum>::map(
        &data::enumStrToVal(std::string const&,data::FeatureTagEnum &)::m,
        (std::initializer_list<std::pair<const std::string,data::FeatureTagEnum> >)__PAIR128__(7LL, v2 + 384),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::FeatureTagEnum>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::FeatureTagEnum &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::FeatureTagEnum>::~map,
        &data::enumStrToVal(std::string const&,data::FeatureTagEnum &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::FeatureTagEnum>>::~allocator((std::allocator<std::pair<const std::string,data::FeatureTagEnum> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::FeatureTagEnum> *)(v2 + 664);
            i != (std::pair<const std::string,data::FeatureTagEnum> *)(v2 + 384);
            std::pair<std::string const,data::FeatureTagEnum>::~pair(i) )
      {
        --i;
      }
      e = (data::FeatureTagEnum *)280;
      __asan_poison_stack_memory(v2 + 384, 280LL);
      *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, e);
    *(std::map<std::string,data::FeatureTagEnum>::iterator *)(v2 + 192) = std::map<std::string,data::FeatureTagEnum>::find(
                                                                            &data::enumStrToVal(std::string const&,data::FeatureTagEnum &)::m,
                                                                            s);
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 224, s);
    *(std::map<std::string,data::FeatureTagEnum>::iterator *)(v2 + 224) = std::map<std::string,data::FeatureTagEnum>::end(&data::enumStrToVal(std::string const&,data::FeatureTagEnum &)::m);
    v7 = (char *)(v2 + 224);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::FeatureTagEnum> >::_Self *)(v2 + 192),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::FeatureTagEnum> >::_Self *)(v2 + 224));
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
    {
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
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
        "./src/json_data_auto/ComponentDefines/ConfigCommonType.cpp",
        "enumStrToVal",
        600);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 320),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      result = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::FeatureTagEnum>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::FeatureTagEnum> > *const)(v2 + 192));
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
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

// Line 608: range 0000000012113EAB-0000000012113F23
const char *__cdecl data::getDescription(data::FeatureTagEnum e)
{
  const char *result; // rax

  switch ( e )
  {
    case FEATURE_TAG_NONE:
      result = (const char *)&unk_1A8C3620;
      break;
    case FEATURE_TAG_AVATAR:
      result = (const char *)&unk_1A8E0980;
      break;
    case FEATURE_TAG_HUMAN:
      result = (const char *)&unk_1A90C340;
      break;
    case FEATURE_TAG_ARANARA:
      result = (const char *)&unk_1A90C020;
      break;
    case FEATURE_TAG_MONSTER:
      result = (const char *)&unk_1A8CA420;
      break;
    case FEATURE_TAG_ANIMAL:
      result = (const char *)&unk_1A90C380;
      break;
    case FEATURE_TAG_NAHIDA_INTER:
      result = (const char *)&unk_1A90C3C0;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 631: range 0000000012113F24-00000000121141CE
const char *__cdecl data::enumValToStr(data::CombatEndType e)
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
    case COMBAT_END_NONE:
      result = "COMBAT_END_NONE";
      break;
    case COMBAT_END_TOWER_HALF_LEVEL_END:
      result = "COMBAT_END_TOWER_HALF_LEVEL_END";
      break;
    case COMBAT_END_TOWER_LEVEL_END:
      result = "COMBAT_END_TOWER_LEVEL_END";
      break;
    case COMBAT_END_DUNGEON_SETTLE:
      result = "COMBAT_END_DUNGEON_SETTLE";
      break;
    case COMBAT_END_CRYSTAL_LINK_HALF_LEVEL_END:
      result = "COMBAT_END_CRYSTAL_LINK_HALF_LEVEL_END";
      break;
    case COMBAT_END_COUNT:
      result = "COMBAT_END_COUNT";
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
        "./src/json_data_auto/ComponentDefines/ConfigCommonType.cpp",
        "enumValToStr",
        647);
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

// Line 653: range 00000000121141CF-0000000012114CD7
bool __cdecl data::enumStrToVal(const std::string *s, data::CombatEndType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::CombatEndType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::CombatEndType> >::pointer v11; // rax
  data::CombatEndType second; // ecx
  char v13; // dl
  data::CombatEndType *ea; // [rsp+10h] [rbp-2E0h]
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
                        " <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 8 6 it:668 208 8 9 <unknown> 240 32 9 <unknow"
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
      "./src/json_data_auto/ComponentDefines/ConfigCommonType.cpp",
      "enumStrToVal",
      656);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 240),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::CombatEndType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::CombatEndType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::CombatEndType>::pair<char const(&)[16],data::CombatEndType,true>(
        (std::pair<const std::string,data::CombatEndType> *const)(v2 + 368),
        (const char (*)[16])"COMBAT_END_NONE",
        (data::CombatEndType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "COMBAT_END_NONE");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::CombatEndType>::pair<char const(&)[32],data::CombatEndType,true>(
        (std::pair<const std::string,data::CombatEndType> *const)(v2 + 408),
        (const char (*)[32])"COMBAT_END_TOWER_HALF_LEVEL_END",
        (data::CombatEndType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "COMBAT_END_TOWER_HALF_LEVEL_END");
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::CombatEndType>::pair<char const(&)[27],data::CombatEndType,true>(
        (std::pair<const std::string,data::CombatEndType> *const)(v2 + 448),
        (const char (*)[27])"COMBAT_END_TOWER_LEVEL_END",
        (data::CombatEndType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "COMBAT_END_TOWER_LEVEL_END");
      *(_DWORD *)(v2 + 128) = 3;
      std::pair<std::string const,data::CombatEndType>::pair<char const(&)[26],data::CombatEndType,true>(
        (std::pair<const std::string,data::CombatEndType> *const)(v2 + 488),
        (const char (*)[26])"COMBAT_END_DUNGEON_SETTLE",
        (data::CombatEndType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "COMBAT_END_DUNGEON_SETTLE");
      *(_DWORD *)(v2 + 144) = 4;
      std::pair<std::string const,data::CombatEndType>::pair<char const(&)[39],data::CombatEndType,true>(
        (std::pair<const std::string,data::CombatEndType> *const)(v2 + 528),
        (const char (*)[39])"COMBAT_END_CRYSTAL_LINK_HALF_LEVEL_END",
        (data::CombatEndType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "COMBAT_END_CRYSTAL_LINK_HALF_LEVEL_END");
      *(_DWORD *)(v2 + 160) = 5;
      std::pair<std::string const,data::CombatEndType>::pair<char const(&)[17],data::CombatEndType,true>(
        (std::pair<const std::string,data::CombatEndType> *const)(v2 + 568),
        (const char (*)[17])"COMBAT_END_COUNT",
        (data::CombatEndType *)(v2 + 160));
      std::allocator<std::pair<std::string const,data::CombatEndType>>::allocator((std::allocator<std::pair<const std::string,data::CombatEndType> > *const)(v2 + 64));
      std::map<std::string,data::CombatEndType>::map(
        &data::enumStrToVal(std::string const&,data::CombatEndType &)::m,
        (std::initializer_list<std::pair<const std::string,data::CombatEndType> >)__PAIR128__(6LL, v2 + 368),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::CombatEndType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::CombatEndType &)::m);
      e = (data::CombatEndType *)&data::enumStrToVal(std::string const&,data::CombatEndType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::CombatEndType>::~map,
        &data::enumStrToVal(std::string const&,data::CombatEndType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::CombatEndType>>::~allocator((std::allocator<std::pair<const std::string,data::CombatEndType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::CombatEndType> *)(v2 + 608);
            i != (std::pair<const std::string,data::CombatEndType> *)(v2 + 368);
            std::pair<std::string const,data::CombatEndType>::~pair(i) )
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
    *(std::map<std::string,data::CombatEndType>::iterator *)(v2 + 176) = std::map<std::string,data::CombatEndType>::find(
                                                                           &data::enumStrToVal(std::string const&,data::CombatEndType &)::m,
                                                                           s);
    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 208, s);
    *(std::map<std::string,data::CombatEndType>::iterator *)(v2 + 208) = std::map<std::string,data::CombatEndType>::end(&data::enumStrToVal(std::string const&,data::CombatEndType &)::m);
    v8 = (char *)(v2 + 208);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::CombatEndType> >::_Self *)(v2 + 176),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::CombatEndType> >::_Self *)(v2 + 208));
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
        "./src/json_data_auto/ComponentDefines/ConfigCommonType.cpp",
        "enumStrToVal",
        671);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 304),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::CombatEndType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::CombatEndType> > *const)(v2 + 176));
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

// Line 679: range 0000000012114CD8-0000000012114D46
const char *__cdecl data::getDescription(data::CombatEndType e)
{
  const char *result; // rax

  switch ( e )
  {
    case COMBAT_END_NONE:
      result = (const char *)&unk_1A8C3620;
      break;
    case COMBAT_END_TOWER_HALF_LEVEL_END:
      result = (const char *)&unk_1A90C6E0;
      break;
    case COMBAT_END_TOWER_LEVEL_END:
      result = (const char *)&unk_1A90C720;
      break;
    case COMBAT_END_DUNGEON_SETTLE:
      result = (const char *)&unk_1A90C760;
      break;
    case COMBAT_END_CRYSTAL_LINK_HALF_LEVEL_END:
      result = (const char *)&unk_1A90C7A0;
      break;
    case COMBAT_END_COUNT:
      result = (const char *)&unk_1A90C7E0;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 700: range 0000000012114D47-0000000012114FA6
const char *__cdecl data::enumValToStr(data::ModifierTag e)
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
    if ( e == Corruption_0 )
    {
      result = "Corruption";
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
        "./src/json_data_auto/ComponentDefines/ConfigCommonType.cpp",
        "enumValToStr",
        708);
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
    result = "None";
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

// Line 714: range 0000000012114FA7-00000000121157DE
bool __cdecl data::enumStrToVal(const std::string *s, data::ModifierTag *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::ModifierTag> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::ModifierTag> >::pointer v11; // rax
  data::ModifierTag second; // ecx
  char v13; // dl
  data::ModifierTag *ea; // [rsp+10h] [rbp-1E0h]
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
  *(_QWORD *)(v2 + 8) = "9 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 8 6 it:725 144 8 9 <un"
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
      "./src/json_data_auto/ComponentDefines/ConfigCommonType.cpp",
      "enumStrToVal",
      717);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 176),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::ModifierTag &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::ModifierTag &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::ModifierTag>::pair<char const(&)[5],data::ModifierTag,true>(
        (std::pair<const std::string,data::ModifierTag> *const)(v2 + 304),
        (const char (*)[5])"None",
        (data::ModifierTag *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "None");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::ModifierTag>::pair<char const(&)[11],data::ModifierTag,true>(
        (std::pair<const std::string,data::ModifierTag> *const)(v2 + 344),
        (const char (*)[11])"Corruption",
        (data::ModifierTag *)(v2 + 96));
      std::allocator<std::pair<std::string const,data::ModifierTag>>::allocator((std::allocator<std::pair<const std::string,data::ModifierTag> > *const)(v2 + 64));
      std::map<std::string,data::ModifierTag>::map(
        &data::enumStrToVal(std::string const&,data::ModifierTag &)::m,
        (std::initializer_list<std::pair<const std::string,data::ModifierTag> >)__PAIR128__(2LL, v2 + 304),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::ModifierTag>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::ModifierTag &)::m);
      e = (data::ModifierTag *)&data::enumStrToVal(std::string const&,data::ModifierTag &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::ModifierTag>::~map,
        &data::enumStrToVal(std::string const&,data::ModifierTag &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::ModifierTag>>::~allocator((std::allocator<std::pair<const std::string,data::ModifierTag> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::ModifierTag> *)(v2 + 384);
            i != (std::pair<const std::string,data::ModifierTag> *)(v2 + 304);
            std::pair<std::string const,data::ModifierTag>::~pair(i) )
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
    *(std::map<std::string,data::ModifierTag>::iterator *)(v2 + 112) = std::map<std::string,data::ModifierTag>::find(
                                                                         &data::enumStrToVal(std::string const&,data::ModifierTag &)::m,
                                                                         s);
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 144, s);
    *(std::map<std::string,data::ModifierTag>::iterator *)(v2 + 144) = std::map<std::string,data::ModifierTag>::end(&data::enumStrToVal(std::string const&,data::ModifierTag &)::m);
    v8 = (char *)(v2 + 144);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ModifierTag> >::_Self *)(v2 + 112),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ModifierTag> >::_Self *)(v2 + 144));
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
        "./src/json_data_auto/ComponentDefines/ConfigCommonType.cpp",
        "enumStrToVal",
        728);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 240),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::ModifierTag>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::ModifierTag> > *const)(v2 + 112));
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

// Line 736: range 00000000121157DF-000000001211580E
const char *__cdecl data::getDescription(data::ModifierTag e)
{
  if ( e == None_37 )
    return "None";
  if ( e == Corruption_0 )
    return (const char *)&unk_1A90C920;
  return "unknown enum value!";
};

// Line 749: range 000000001211580F-0000000012115AEB
bool __cdecl data::arrFromJson(const Json::Value *jval, data::ModifierTagArray *v)
{
  bool v2; // r15
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int v6; // eax
  bool result; // al
  std::vector<data::ModifierTag> *va; // [rsp+0h] [rbp-D0h]
  Json::Value *jvala; // [rsp+8h] [rbp-C8h]
  uint32_t i; // [rsp+14h] [rbp-BCh]
  const Json::Value *elem_jval; // [rsp+18h] [rbp-B8h]
  char v12[176]; // [rsp+20h] [rbp-B0h] BYREF

  jvala = (Json::Value *)jval;
  LODWORD(va) = (_DWORD)v;
  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 8 elem:755 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = data::arrFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862723] = -202116109;
  for ( i = 0; i < Json::Value::size((const Json::Value_0 *const)jvala); ++i )
  {
    elem_jval = (const Json::Value *)Json::Value::operator[](jvala, i, (int)va, (char)jvala);
    if ( Json::Value::isNull((const Json::Value_0 *const)elem_jval) )
    {
      v6 = 0;
    }
    else
    {
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      if ( !fromJson<data::ModifierTag>(elem_jval, (data::ModifierTag *)(v3 + 48)) )
      {
        *(_DWORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 64, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 64),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ComponentDefines/ConfigCommonType.cpp",
          "arrFromJson",
          758);
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 64),
          (const char (*)[16])"fromJson fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
        *(_DWORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v6 = 1;
      }
      else
      {
        std::vector<data::ModifierTag>::push_back(va, (const std::vector<data::ModifierTag>::value_type *)(v3 + 48));
        v6 = 2;
      }
    }
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v6 && v6 != 2 )
      goto LABEL_17;
  }
  v2 = 1;
LABEL_17:
  result = v2;
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 768: range 0000000012115AEC-0000000012115D6D
int32_t __cdecl data::getArrHashValue(const data::ModifierTagArray *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ModifierTag *v5; // rax
  int32_t result; // eax
  int32_t *elem; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:769 64 8 15 __for_begin:770 96 8 13 __for_end:770";
  *(_QWORD *)(v2 + 16) = data::getArrHashValue;
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
  *(std::vector<data::ModifierTag>::const_iterator *)(v2 + 64) = std::vector<data::ModifierTag>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::ModifierTag>::const_iterator *)(v2 + 96) = std::vector<data::ModifierTag>::end(vec);
  while ( __gnu_cxx::operator!=<data::ModifierTag const*,std::vector<data::ModifierTag>>(
            (const __gnu_cxx::__normal_iterator<const data::ModifierTag*,std::vector<data::ModifierTag> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::ModifierTag*,std::vector<data::ModifierTag> > *)(v2 + 96)) )
  {
    v5 = (data::ModifierTag *)__gnu_cxx::__normal_iterator<data::ModifierTag const*,std::vector<data::ModifierTag>>::operator*((const __gnu_cxx::__normal_iterator<const data::ModifierTag*,std::vector<data::ModifierTag> > *const)(v2 + 64));
    elem = (int32_t *)v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    common::tools::HashUtils::appendHash(*elem, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::ModifierTag const*,std::vector<data::ModifierTag>>::operator++((__gnu_cxx::__normal_iterator<const data::ModifierTag*,std::vector<data::ModifierTag> > *const)(v2 + 64));
  }
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 48);
  result = *(_DWORD *)(v2 + 48);
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

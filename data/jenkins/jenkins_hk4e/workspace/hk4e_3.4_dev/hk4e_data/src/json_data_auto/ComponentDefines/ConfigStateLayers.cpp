// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp

// Line 19: range 00000000115EEE21-00000000115EF117
const char *__cdecl data::enumValToStr(data::ActionPanelState e)
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
    case Normal_18:
      result = "Normal";
      break;
    case Jump:
      result = "Jump";
      break;
    case Climb:
      result = "Climb";
      break;
    case Fly_1:
      result = off_1A804E40;
      break;
    case Aim:
      result = off_1A804E80;
      break;
    case FastAim:
      result = "FastAim";
      break;
    case Swim:
      result = "Swim";
      break;
    case Ladder:
      result = "Ladder";
      break;
    case Squat:
      result = "Squat";
      break;
    case CombatAir:
      result = "CombatAir";
      break;
    case Perform:
      result = "Perform";
      break;
    case CloseAll:
      result = "CloseAll";
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
        "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
        "enumValToStr",
        47);
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
      result = (const char *)&unk_1A7E0BE0;
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

// Line 53: range 00000000115EF118-00000000115EFF9D
bool __cdecl data::enumStrToVal(const std::string *s, data::ActionPanelState *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::ActionPanelState> *i; // r14
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::ActionPanelState> >::pointer v10; // rax
  data::ActionPanelState second; // ecx
  char v12; // dl
  data::ActionPanelState *ea; // [rsp+10h] [rbp-420h]
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
                        "wn> 208 4 9 <unknown> 224 4 9 <unknown> 240 4 9 <unknown> 256 8 5 it:74 288 8 9 <unknown> 320 32"
                        " 9 <unknown> 384 32 9 <unknown> 448 480 9 <unknown>";
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
      "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
      "enumStrToVal",
      56);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 320),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::ActionPanelState &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::ActionPanelState &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::ActionPanelState>::pair<char const(&)[7],data::ActionPanelState,true>(
        (std::pair<const std::string,data::ActionPanelState> *const)(v2 + 448),
        (const char (*)[7])"Normal",
        (data::ActionPanelState *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "Normal");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::ActionPanelState>::pair<char const(&)[5],data::ActionPanelState,true>(
        (std::pair<const std::string,data::ActionPanelState> *const)(v2 + 488),
        (const char (*)[5])"Jump",
        (data::ActionPanelState *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "Jump");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::ActionPanelState>::pair<char const(&)[6],data::ActionPanelState,true>(
        (std::pair<const std::string,data::ActionPanelState> *const)(v2 + 528),
        (const char (*)[6])"Climb",
        (data::ActionPanelState *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "Climb");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::ActionPanelState>::pair<char const(&)[4],data::ActionPanelState,true>(
        (std::pair<const std::string,data::ActionPanelState> *const)(v2 + 568),
        (const char (*)[4])off_1A804E40,
        (data::ActionPanelState *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, off_1A804E40);
      *(_DWORD *)(v2 + 128) = 4;
      std::pair<std::string const,data::ActionPanelState>::pair<char const(&)[4],data::ActionPanelState,true>(
        (std::pair<const std::string,data::ActionPanelState> *const)(v2 + 608),
        (const char (*)[4])off_1A804E80,
        (data::ActionPanelState *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, off_1A804E80);
      *(_DWORD *)(v2 + 144) = 5;
      std::pair<std::string const,data::ActionPanelState>::pair<char const(&)[8],data::ActionPanelState,true>(
        (std::pair<const std::string,data::ActionPanelState> *const)(v2 + 648),
        (const char (*)[8])"FastAim",
        (data::ActionPanelState *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "FastAim");
      *(_DWORD *)(v2 + 160) = 6;
      std::pair<std::string const,data::ActionPanelState>::pair<char const(&)[5],data::ActionPanelState,true>(
        (std::pair<const std::string,data::ActionPanelState> *const)(v2 + 688),
        (const char (*)[5])"Swim",
        (data::ActionPanelState *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, "Swim");
      *(_DWORD *)(v2 + 176) = 7;
      std::pair<std::string const,data::ActionPanelState>::pair<char const(&)[7],data::ActionPanelState,true>(
        (std::pair<const std::string,data::ActionPanelState> *const)(v2 + 728),
        (const char (*)[7])"Ladder",
        (data::ActionPanelState *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, "Ladder");
      *(_DWORD *)(v2 + 192) = 8;
      std::pair<std::string const,data::ActionPanelState>::pair<char const(&)[6],data::ActionPanelState,true>(
        (std::pair<const std::string,data::ActionPanelState> *const)(v2 + 768),
        (const char (*)[6])"Squat",
        (data::ActionPanelState *)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 208, "Squat");
      *(_DWORD *)(v2 + 208) = 9;
      std::pair<std::string const,data::ActionPanelState>::pair<char const(&)[10],data::ActionPanelState,true>(
        (std::pair<const std::string,data::ActionPanelState> *const)(v2 + 808),
        (const char (*)[10])"CombatAir",
        (data::ActionPanelState *)(v2 + 208));
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 224, "CombatAir");
      *(_DWORD *)(v2 + 224) = 10;
      std::pair<std::string const,data::ActionPanelState>::pair<char const(&)[8],data::ActionPanelState,true>(
        (std::pair<const std::string,data::ActionPanelState> *const)(v2 + 848),
        (const char (*)[8])"Perform",
        (data::ActionPanelState *)(v2 + 224));
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 240, "Perform");
      *(_DWORD *)(v2 + 240) = 11;
      std::pair<std::string const,data::ActionPanelState>::pair<char const(&)[9],data::ActionPanelState,true>(
        (std::pair<const std::string,data::ActionPanelState> *const)(v2 + 888),
        (const char (*)[9])"CloseAll",
        (data::ActionPanelState *)(v2 + 240));
      std::allocator<std::pair<std::string const,data::ActionPanelState>>::allocator((std::allocator<std::pair<const std::string,data::ActionPanelState> > *const)(v2 + 48));
      std::map<std::string,data::ActionPanelState>::map(
        &data::enumStrToVal(std::string const&,data::ActionPanelState &)::m,
        (std::initializer_list<std::pair<const std::string,data::ActionPanelState> >)__PAIR128__(12LL, v2 + 448),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::ActionPanelState>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::ActionPanelState &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::ActionPanelState>::~map,
        &data::enumStrToVal(std::string const&,data::ActionPanelState &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::ActionPanelState>>::~allocator((std::allocator<std::pair<const std::string,data::ActionPanelState> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::ActionPanelState> *)(v2 + 928);
            i != (std::pair<const std::string,data::ActionPanelState> *)(v2 + 448);
            std::pair<std::string const,data::ActionPanelState>::~pair(i) )
      {
        --i;
      }
      e = (data::ActionPanelState *)480;
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
    *(std::map<std::string,data::ActionPanelState>::iterator *)(v2 + 256) = std::map<std::string,data::ActionPanelState>::find(
                                                                              &data::enumStrToVal(std::string const&,data::ActionPanelState &)::m,
                                                                              s);
    *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 288, s);
    *(std::map<std::string,data::ActionPanelState>::iterator *)(v2 + 288) = std::map<std::string,data::ActionPanelState>::end(&data::enumStrToVal(std::string const&,data::ActionPanelState &)::m);
    v7 = (char *)(v2 + 288);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ActionPanelState> >::_Self *)(v2 + 256),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ActionPanelState> >::_Self *)(v2 + 288));
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
        "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
        "enumStrToVal",
        77);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 384),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      result = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::ActionPanelState>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::ActionPanelState> > *const)(v2 + 256));
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

// Line 85: range 00000000115EFF9E-00000000115F0046
const char *__cdecl data::getDescription(data::ActionPanelState e)
{
  const char *result; // rax

  switch ( e )
  {
    case Normal_18:
      result = (const char *)&unk_1A805280;
      break;
    case Jump:
      result = (const char *)&unk_1A8052C0;
      break;
    case Climb:
      result = (const char *)&unk_1A805300;
      break;
    case Fly_1:
      result = (const char *)&unk_1A805340;
      break;
    case Aim:
      result = (const char *)&unk_1A805380;
      break;
    case FastAim:
      result = (const char *)&unk_1A8053C0;
      break;
    case Swim:
      result = (const char *)&unk_1A805420;
      break;
    case Ladder:
      result = (const char *)&unk_1A805460;
      break;
    case Squat:
      result = (const char *)&unk_1A8054A0;
      break;
    case CombatAir:
      result = (const char *)&unk_1A8054E0;
      break;
    case Perform:
      result = (const char *)&unk_1A805520;
      break;
    case CloseAll:
      result = (const char *)&unk_1A805560;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 118: range 00000000115F0047-00000000115F02F1
const char *__cdecl data::enumValToStr(data::MoveType e)
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
    case normalMove:
      result = "normalMove";
      break;
    case combatMove:
      result = "combatMove";
      break;
    case combatAir:
      result = "combatAir";
      break;
    case combatSkillAir:
      result = "combatSkillAir";
      break;
    case performMove:
      result = "performMove";
      break;
    case combatSkillMove:
      result = "combatSkillMove";
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
        "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
        "enumValToStr",
        134);
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
      result = (const char *)&unk_1A7E0BE0;
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

// Line 140: range 00000000115F02F2-00000000115F0DFA
bool __cdecl data::enumStrToVal(const std::string *s, data::MoveType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::MoveType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::MoveType> >::pointer v11; // rax
  data::MoveType second; // ecx
  char v13; // dl
  data::MoveType *ea; // [rsp+10h] [rbp-2E0h]
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
                        " <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 8 6 it:155 208 8 9 <unknown> 240 32 9 <unknow"
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
      "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
      "enumStrToVal",
      143);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 240),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::MoveType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::MoveType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::MoveType>::pair<char const(&)[11],data::MoveType,true>(
        (std::pair<const std::string,data::MoveType> *const)(v2 + 368),
        (const char (*)[11])"normalMove",
        (data::MoveType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "normalMove");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::MoveType>::pair<char const(&)[11],data::MoveType,true>(
        (std::pair<const std::string,data::MoveType> *const)(v2 + 408),
        (const char (*)[11])"combatMove",
        (data::MoveType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "combatMove");
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::MoveType>::pair<char const(&)[10],data::MoveType,true>(
        (std::pair<const std::string,data::MoveType> *const)(v2 + 448),
        (const char (*)[10])"combatAir",
        (data::MoveType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "combatAir");
      *(_DWORD *)(v2 + 128) = 3;
      std::pair<std::string const,data::MoveType>::pair<char const(&)[15],data::MoveType,true>(
        (std::pair<const std::string,data::MoveType> *const)(v2 + 488),
        (const char (*)[15])"combatSkillAir",
        (data::MoveType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "combatSkillAir");
      *(_DWORD *)(v2 + 144) = 4;
      std::pair<std::string const,data::MoveType>::pair<char const(&)[12],data::MoveType,true>(
        (std::pair<const std::string,data::MoveType> *const)(v2 + 528),
        (const char (*)[12])"performMove",
        (data::MoveType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "performMove");
      *(_DWORD *)(v2 + 160) = 5;
      std::pair<std::string const,data::MoveType>::pair<char const(&)[16],data::MoveType,true>(
        (std::pair<const std::string,data::MoveType> *const)(v2 + 568),
        (const char (*)[16])"combatSkillMove",
        (data::MoveType *)(v2 + 160));
      std::allocator<std::pair<std::string const,data::MoveType>>::allocator((std::allocator<std::pair<const std::string,data::MoveType> > *const)(v2 + 64));
      std::map<std::string,data::MoveType>::map(
        &data::enumStrToVal(std::string const&,data::MoveType &)::m,
        (std::initializer_list<std::pair<const std::string,data::MoveType> >)__PAIR128__(6LL, v2 + 368),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::MoveType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::MoveType &)::m);
      e = (data::MoveType *)&data::enumStrToVal(std::string const&,data::MoveType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::MoveType>::~map,
        &data::enumStrToVal(std::string const&,data::MoveType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::MoveType>>::~allocator((std::allocator<std::pair<const std::string,data::MoveType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::MoveType> *)(v2 + 608);
            i != (std::pair<const std::string,data::MoveType> *)(v2 + 368);
            std::pair<std::string const,data::MoveType>::~pair(i) )
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
    *(std::map<std::string,data::MoveType>::iterator *)(v2 + 176) = std::map<std::string,data::MoveType>::find(
                                                                      &data::enumStrToVal(std::string const&,data::MoveType &)::m,
                                                                      s);
    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 208, s);
    *(std::map<std::string,data::MoveType>::iterator *)(v2 + 208) = std::map<std::string,data::MoveType>::end(&data::enumStrToVal(std::string const&,data::MoveType &)::m);
    v8 = (char *)(v2 + 208);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::MoveType> >::_Self *)(v2 + 176),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::MoveType> >::_Self *)(v2 + 208));
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
        "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
        "enumStrToVal",
        158);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 304),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::MoveType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::MoveType> > *const)(v2 + 176));
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

// Line 166: range 00000000115F0DFB-00000000115F0E69
const char *__cdecl data::getDescription(data::MoveType e)
{
  const char *result; // rax

  switch ( e )
  {
    case normalMove:
      result = (const char *)&unk_1A805880;
      break;
    case combatMove:
      result = (const char *)&unk_1A8058C0;
      break;
    case combatAir:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case combatSkillAir:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case performMove:
      result = (const char *)&unk_1A7E0BE0;
      break;
    case combatSkillMove:
      result = (const char *)&unk_1A805900;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 187: range 00000000115F0E6A-00000000115F10E7
const char *__cdecl data::enumValToStr(data::StateCameraType e)
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
  if ( e == combatBeHit )
  {
    result = "combatBeHit";
  }
  else
  {
    if ( e > combatBeHit )
      goto LABEL_22;
    if ( e == normalMove_0 )
    {
      result = "normalMove";
      goto LABEL_17;
    }
    if ( e == combatNormal )
    {
      result = "combatNormal";
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
        "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
        "enumValToStr",
        197);
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
      result = (const char *)&unk_1A7E0BE0;
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

// Line 203: range 00000000115F10E8-00000000115F19C9
bool __cdecl data::enumStrToVal(const std::string *s, data::StateCameraType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::StateCameraType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::StateCameraType> >::pointer v11; // rax
  data::StateCameraType second; // ecx
  char v13; // dl
  data::StateCameraType *ea; // [rsp+10h] [rbp-220h]
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
                        " it:215 160 8 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 120 9 <unknown>";
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
      "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
      "enumStrToVal",
      206);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::StateCameraType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::StateCameraType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::StateCameraType>::pair<char const(&)[11],data::StateCameraType,true>(
        (std::pair<const std::string,data::StateCameraType> *const)(v2 + 320),
        (const char (*)[11])"normalMove",
        (data::StateCameraType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "normalMove");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::StateCameraType>::pair<char const(&)[13],data::StateCameraType,true>(
        (std::pair<const std::string,data::StateCameraType> *const)(v2 + 360),
        (const char (*)[13])"combatNormal",
        (data::StateCameraType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "combatNormal");
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::StateCameraType>::pair<char const(&)[12],data::StateCameraType,true>(
        (std::pair<const std::string,data::StateCameraType> *const)(v2 + 400),
        (const char (*)[12])"combatBeHit",
        (data::StateCameraType *)(v2 + 112));
      std::allocator<std::pair<std::string const,data::StateCameraType>>::allocator((std::allocator<std::pair<const std::string,data::StateCameraType> > *const)(v2 + 64));
      std::map<std::string,data::StateCameraType>::map(
        &data::enumStrToVal(std::string const&,data::StateCameraType &)::m,
        (std::initializer_list<std::pair<const std::string,data::StateCameraType> >)__PAIR128__(3LL, v2 + 320),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::StateCameraType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::StateCameraType &)::m);
      e = (data::StateCameraType *)&data::enumStrToVal(std::string const&,data::StateCameraType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::StateCameraType>::~map,
        &data::enumStrToVal(std::string const&,data::StateCameraType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::StateCameraType>>::~allocator((std::allocator<std::pair<const std::string,data::StateCameraType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::StateCameraType> *)(v2 + 440);
            i != (std::pair<const std::string,data::StateCameraType> *)(v2 + 320);
            std::pair<std::string const,data::StateCameraType>::~pair(i) )
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
    *(std::map<std::string,data::StateCameraType>::iterator *)(v2 + 128) = std::map<std::string,data::StateCameraType>::find(
                                                                             &data::enumStrToVal(std::string const&,data::StateCameraType &)::m,
                                                                             s);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, s);
    *(std::map<std::string,data::StateCameraType>::iterator *)(v2 + 160) = std::map<std::string,data::StateCameraType>::end(&data::enumStrToVal(std::string const&,data::StateCameraType &)::m);
    v8 = (char *)(v2 + 160);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::StateCameraType> >::_Self *)(v2 + 128),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::StateCameraType> >::_Self *)(v2 + 160));
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
        "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
        "enumStrToVal",
        218);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 256),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::StateCameraType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::StateCameraType> > *const)(v2 + 128));
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

// Line 226: range 00000000115F19CA-00000000115F1A0E
const char *__cdecl data::getDescription(data::StateCameraType e)
{
  if ( e == combatBeHit )
    return (const char *)&unk_1A805AE0;
  if ( e > combatBeHit )
    return "unknown enum value!";
  if ( e == normalMove_0 )
    return (const char *)&unk_1A805880;
  if ( e == combatNormal )
    return (const char *)&unk_1A805AA0;
  else
    return "unknown enum value!";
};

// Line 242: range 00000000115F1A10-00000000115F229E
bool __cdecl data::ConfigAnimatorBoolean::fromJson(data::ConfigAnimatorBoolean *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  float *p_normalize_end; // rsi
  const Json::Value *name_ptr; // [rsp+18h] [rbp-218h]
  const Json::Value *normalize_start_ptr; // [rsp+20h] [rbp-210h]
  const Json::Value *normalize_end_ptr; // [rsp+28h] [rbp-208h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigAnimatorBoolean::fromJson;
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
    "name",
    (const std::allocator<char> *)(v2 + 48));
  name_ptr = jsonValueFind(jval, (const std::string *)(v2 + 96));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( name_ptr && !fromJson<std::string>(name_ptr, &this->name) )
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
      "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
      "fromJson",
      252);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[26])"fromJson for: name fails!");
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
      "normalizeStart",
      (const std::allocator<char> *)(v2 + 64));
    normalize_start_ptr = jsonValueFind(jval, (const std::string *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( normalize_start_ptr && !fromJson<float>(normalize_start_ptr, &this->normalize_start) )
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
        "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
        "fromJson",
        264);
      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[36])"fromJson for: normalizeStart fails!");
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
        "normalizeEnd",
        (const std::allocator<char> *)(v2 + 80));
      p_normalize_end = (float *)(v2 + 352);
      normalize_end_ptr = jsonValueFind(jval, (const std::string *)(v2 + 352));
      std::string::~string((void *)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( normalize_end_ptr
        && (p_normalize_end = &this->normalize_end, !fromJson<float>(normalize_end_ptr, &this->normalize_end)) )
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
          "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
          "fromJson",
          276);
        common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
          (common::milog::MiLogStream *const)(v2 + 416),
          (const char (*)[34])"fromJson for: normalizeEnd fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
        result = 0;
      }
      else
      {
        if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(&this->is_json_loaded, p_normalize_end, &this->is_json_loaded);
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

// Line 284: range 00000000115F22A0-00000000115F246F
int32_t __cdecl data::ConfigAnimatorBoolean::getHashValue(const data::ConfigAnimatorBoolean *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:285";
  *(_QWORD *)(v2 + 16) = data::ConfigAnimatorBoolean::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  common::tools::HashUtils::appendHash(&this->name, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->normalize_start >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->normalize_start >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->normalize_start);
  }
  common::tools::HashUtils::appendHash(this->normalize_start, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->normalize_end >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->normalize_end >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->normalize_end);
  }
  common::tools::HashUtils::appendHash(this->normalize_end, (int32_t *)(v2 + 32));
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

// Line 294: range 00000000115F2470-00000000115F2F8A
bool __cdecl data::ConfigAnimatorFloat::fromJson(data::ConfigAnimatorFloat *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *name_ptr; // [rsp+10h] [rbp-2A0h]
  const Json::Value *normalize_start_ptr; // [rsp+18h] [rbp-298h]
  const Json::Value *normalize_end_ptr; // [rsp+20h] [rbp-290h]
  const Json::Value *value_ptr; // [rsp+28h] [rbp-288h]
  char v12[640]; // [rsp+30h] [rbp-280h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(608LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "12 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 32 9 <unknown> 160 32 "
                        "9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9"
                        " <unknown> 544 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigAnimatorFloat::fromJson;
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
  v4[536862738] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    "name",
    (const std::allocator<char> *)(v2 + 32));
  name_ptr = jsonValueFind(jval, (const std::string *)(v2 + 96));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( name_ptr && !fromJson<std::string>(name_ptr, &this->name) )
  {
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
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
      "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
      "fromJson",
      304);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[26])"fromJson for: name fails!");
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
      "normalizeStart",
      (const std::allocator<char> *)(v2 + 48));
    normalize_start_ptr = jsonValueFind(jval, (const std::string *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( normalize_start_ptr && !fromJson<float>(normalize_start_ptr, &this->normalize_start) )
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
        "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
        "fromJson",
        316);
      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[36])"fromJson for: normalizeStart fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 352),
        "normalizeEnd",
        (const std::allocator<char> *)(v2 + 64));
      normalize_end_ptr = jsonValueFind(jval, (const std::string *)(v2 + 352));
      std::string::~string((void *)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( normalize_end_ptr && !fromJson<float>(normalize_end_ptr, &this->normalize_end) )
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
          3u,
          "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
          "fromJson",
          328);
        common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
          (common::milog::MiLogStream *const)(v2 + 416),
          (const char (*)[34])"fromJson for: normalizeEnd fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
        result = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 480),
          "value",
          (const std::allocator<char> *)(v2 + 80));
        value_ptr = jsonValueFind(jval, (const std::string *)(v2 + 480));
        std::string::~string((void *)(v2 + 480));
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( value_ptr && !fromJson<float>(value_ptr, &this->value) )
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
            3u,
            "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
            "fromJson",
            340);
          common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            (common::milog::MiLogStream *const)(v2 + 544),
            (const char (*)[27])"fromJson for: value fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
          result = 0;
        }
        else
        {
          v6 = ((_BYTE)this + 44) & 7;
          v7 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
          if ( (_BYTE)v7 )
            __asan_report_store1(&this->is_json_loaded, v6, v7);
          this->is_json_loaded = 1;
          result = 1;
        }
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = 0;
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

// Line 348: range 00000000115F2F8C-00000000115F31A6
int32_t __cdecl data::ConfigAnimatorFloat::getHashValue(const data::ConfigAnimatorFloat *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:349";
  *(_QWORD *)(v2 + 16) = data::ConfigAnimatorFloat::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  common::tools::HashUtils::appendHash(&this->name, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->normalize_start >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->normalize_start >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->normalize_start);
  }
  common::tools::HashUtils::appendHash(this->normalize_start, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->normalize_end >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->normalize_end >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->normalize_end);
  }
  common::tools::HashUtils::appendHash(this->normalize_end, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->value);
  }
  common::tools::HashUtils::appendHash(this->value, (int32_t *)(v2 + 32));
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

// Line 358: range 00000000115F31A7-00000000115F3553
bool __cdecl data::vecFromJson(const Json::Value *jval, data::ConfigAnimatorBooleanList *v)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int v5; // eax
  unsigned __int64 v6; // rax
  int v7; // r14d
  data::ConfigAnimatorBoolean *v8; // rdx
  unsigned __int64 v9; // rdx
  bool result; // al
  int v11; // [rsp+0h] [rbp-120h]
  char v12; // [rsp+8h] [rbp-118h]
  bool v13; // [rsp+Fh] [rbp-111h]
  uint32_t i; // [rsp+24h] [rbp-FCh]
  const Json::Value *elem_jval; // [rsp+28h] [rbp-F8h]
  char v16[240]; // [rsp+30h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 32 9 <unknown> 112 48 8 elem:364";
  *(_QWORD *)(v2 + 16) = data::vecFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -219021312;
  v4[536862723] = 62194;
  v4[536862725] = -202116109;
  for ( i = 0; i < Json::Value::size((const Json::Value_0 *const)jval); ++i )
  {
    elem_jval = (const Json::Value *)Json::Value::operator[]((Json::Value *)jval, i, v11, v12);
    if ( Json::Value::isNull((const Json::Value_0 *const)elem_jval) )
    {
      v5 = 0;
    }
    else
    {
      v6 = ((v2 + 112) >> 3) + 2147450880;
      *(_DWORD *)v6 = 0;
      *(_WORD *)(v6 + 4) = 0;
      data::ConfigAnimatorBoolean::ConfigAnimatorBoolean((data::ConfigAnimatorBoolean *const)(v2 + 112));
      if ( !data::ConfigAnimatorBoolean::fromJson((data::ConfigAnimatorBoolean *const)(v2 + 112), elem_jval) )
      {
        *(_DWORD *)(((v2 + 48) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 79) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 79) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 48, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 48),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
          "vecFromJson",
          367);
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v2 + 48),
          (const char (*)[16])"fromJson fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 48));
        *(_DWORD *)(((v2 + 48) >> 3) + 0x7FFF8000) = -117901064;
        v13 = 0;
        v7 = 0;
      }
      else
      {
        v8 = std::move<data::ConfigAnimatorBoolean &>((data::ConfigAnimatorBoolean *)(v2 + 112));
        std::vector<data::ConfigAnimatorBoolean>::emplace_back<data::ConfigAnimatorBoolean>(v, v8, v8);
        v7 = 1;
      }
      data::ConfigAnimatorBoolean::~ConfigAnimatorBoolean((data::ConfigAnimatorBoolean *const)(v2 + 112));
      if ( v7 == 1 )
        v5 = 2;
      else
        v5 = 1;
    }
    v9 = ((v2 + 112) >> 3) + 2147450880;
    *(_DWORD *)v9 = -117901064;
    *(_WORD *)(v9 + 4) = -1800;
    if ( v5 && v5 != 2 )
      goto LABEL_20;
  }
  v13 = 1;
LABEL_20:
  result = v13;
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 377: range 00000000115F3554-00000000115F37A0
int32_t __cdecl data::getVecHashValue(const data::ConfigAnimatorBooleanList *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  __gnu_cxx::__normal_iterator<const data::ConfigAnimatorBoolean*,std::vector<data::ConfigAnimatorBoolean> >::reference elem; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:378 64 8 15 __for_begin:379 96 8 13 __for_end:379";
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
  *(std::vector<data::ConfigAnimatorBoolean>::const_iterator *)(v2 + 64) = std::vector<data::ConfigAnimatorBoolean>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::ConfigAnimatorBoolean>::const_iterator *)(v2 + 96) = std::vector<data::ConfigAnimatorBoolean>::end(vec);
  while ( __gnu_cxx::operator!=<data::ConfigAnimatorBoolean const*,std::vector<data::ConfigAnimatorBoolean>>(
            (const __gnu_cxx::__normal_iterator<const data::ConfigAnimatorBoolean*,std::vector<data::ConfigAnimatorBoolean> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::ConfigAnimatorBoolean*,std::vector<data::ConfigAnimatorBoolean> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<data::ConfigAnimatorBoolean const*,std::vector<data::ConfigAnimatorBoolean>>::operator*((const __gnu_cxx::__normal_iterator<const data::ConfigAnimatorBoolean*,std::vector<data::ConfigAnimatorBoolean> > *const)(v2 + 64));
    HashValue = data::ConfigAnimatorBoolean::getHashValue(elem);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::ConfigAnimatorBoolean const*,std::vector<data::ConfigAnimatorBoolean>>::operator++((__gnu_cxx::__normal_iterator<const data::ConfigAnimatorBoolean*,std::vector<data::ConfigAnimatorBoolean> > *const)(v2 + 64));
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

// Line 387: range 00000000115F37A1-00000000115F3B4D
bool __cdecl data::vecFromJson(const Json::Value *jval, data::ConfigAnimatorFloatList *v)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int v5; // eax
  unsigned __int64 v6; // rax
  int v7; // r14d
  data::ConfigAnimatorFloat *v8; // rdx
  unsigned __int64 v9; // rdx
  bool result; // al
  int v11; // [rsp+0h] [rbp-120h]
  char v12; // [rsp+8h] [rbp-118h]
  bool v13; // [rsp+Fh] [rbp-111h]
  uint32_t i; // [rsp+24h] [rbp-FCh]
  const Json::Value *elem_jval; // [rsp+28h] [rbp-F8h]
  char v16[240]; // [rsp+30h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 32 9 <unknown> 112 48 8 elem:393";
  *(_QWORD *)(v2 + 16) = data::vecFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -219021312;
  v4[536862723] = 62194;
  v4[536862725] = -202116109;
  for ( i = 0; i < Json::Value::size((const Json::Value_0 *const)jval); ++i )
  {
    elem_jval = (const Json::Value *)Json::Value::operator[]((Json::Value *)jval, i, v11, v12);
    if ( Json::Value::isNull((const Json::Value_0 *const)elem_jval) )
    {
      v5 = 0;
    }
    else
    {
      v6 = ((v2 + 112) >> 3) + 2147450880;
      *(_DWORD *)v6 = 0;
      *(_WORD *)(v6 + 4) = 0;
      data::ConfigAnimatorFloat::ConfigAnimatorFloat((data::ConfigAnimatorFloat *const)(v2 + 112));
      if ( !data::ConfigAnimatorFloat::fromJson((data::ConfigAnimatorFloat *const)(v2 + 112), elem_jval) )
      {
        *(_DWORD *)(((v2 + 48) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 79) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 79) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 48, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 48),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
          "vecFromJson",
          396);
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v2 + 48),
          (const char (*)[16])"fromJson fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 48));
        *(_DWORD *)(((v2 + 48) >> 3) + 0x7FFF8000) = -117901064;
        v13 = 0;
        v7 = 0;
      }
      else
      {
        v8 = std::move<data::ConfigAnimatorFloat &>((data::ConfigAnimatorFloat *)(v2 + 112));
        std::vector<data::ConfigAnimatorFloat>::emplace_back<data::ConfigAnimatorFloat>(v, v8, v8);
        v7 = 1;
      }
      data::ConfigAnimatorFloat::~ConfigAnimatorFloat((data::ConfigAnimatorFloat *const)(v2 + 112));
      if ( v7 == 1 )
        v5 = 2;
      else
        v5 = 1;
    }
    v9 = ((v2 + 112) >> 3) + 2147450880;
    *(_DWORD *)v9 = -117901064;
    *(_WORD *)(v9 + 4) = -1800;
    if ( v5 && v5 != 2 )
      goto LABEL_20;
  }
  v13 = 1;
LABEL_20:
  result = v13;
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 406: range 00000000115F3B4E-00000000115F3D9A
int32_t __cdecl data::getVecHashValue(const data::ConfigAnimatorFloatList *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  __gnu_cxx::__normal_iterator<const data::ConfigAnimatorFloat*,std::vector<data::ConfigAnimatorFloat> >::reference elem; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:407 64 8 15 __for_begin:408 96 8 13 __for_end:408";
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
  *(std::vector<data::ConfigAnimatorFloat>::const_iterator *)(v2 + 64) = std::vector<data::ConfigAnimatorFloat>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::ConfigAnimatorFloat>::const_iterator *)(v2 + 96) = std::vector<data::ConfigAnimatorFloat>::end(vec);
  while ( __gnu_cxx::operator!=<data::ConfigAnimatorFloat const*,std::vector<data::ConfigAnimatorFloat>>(
            (const __gnu_cxx::__normal_iterator<const data::ConfigAnimatorFloat*,std::vector<data::ConfigAnimatorFloat> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::ConfigAnimatorFloat*,std::vector<data::ConfigAnimatorFloat> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<data::ConfigAnimatorFloat const*,std::vector<data::ConfigAnimatorFloat>>::operator*((const __gnu_cxx::__normal_iterator<const data::ConfigAnimatorFloat*,std::vector<data::ConfigAnimatorFloat> > *const)(v2 + 64));
    HashValue = data::ConfigAnimatorFloat::getHashValue(elem);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::ConfigAnimatorFloat const*,std::vector<data::ConfigAnimatorFloat>>::operator++((__gnu_cxx::__normal_iterator<const data::ConfigAnimatorFloat*,std::vector<data::ConfigAnimatorFloat> > *const)(v2 + 64));
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

// Line 417: range 00000000115F3D9C-00000000115F4384
bool __cdecl data::ConfigCanChangeAvatar::fromJson(data::ConfigCanChangeAvatar *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *normalize_start_ptr; // [rsp+10h] [rbp-170h]
  const Json::Value *normalize_end_ptr; // [rsp+18h] [rbp-168h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigCanChangeAvatar::fromJson;
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
    "normalizeStart",
    (const std::allocator<char> *)(v2 + 32));
  normalize_start_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( normalize_start_ptr && !fromJson<float>(normalize_start_ptr, &this->normalize_start) )
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
      "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
      "fromJson",
      427);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[36])"fromJson for: normalizeStart fails!");
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
      "normalizeEnd",
      (const std::allocator<char> *)(v2 + 48));
    normalize_end_ptr = jsonValueFind(jval, (const std::string *)(v2 + 192));
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( normalize_end_ptr && !fromJson<float>(normalize_end_ptr, &this->normalize_end) )
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
        "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
        "fromJson",
        439);
      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
        (common::milog::MiLogStream *const)(v2 + 256),
        (const char (*)[34])"fromJson for: normalizeEnd fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      v6 = ((_BYTE)this + 8) & 7;
      v7 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
      if ( (_BYTE)v7 )
        __asan_report_store1(&this->is_json_loaded, v6, v7);
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

// Line 447: range 00000000115F4386-00000000115F4544
int32_t __cdecl data::ConfigCanChangeAvatar::getHashValue(const data::ConfigCanChangeAvatar *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:448";
  *(_QWORD *)(v2 + 16) = data::ConfigCanChangeAvatar::getHashValue;
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
  common::tools::HashUtils::appendHash(this->normalize_start, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->normalize_end >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->normalize_end >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->normalize_end);
  }
  common::tools::HashUtils::appendHash(this->normalize_end, (int32_t *)(v2 + 32));
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

// Line 455: range 00000000115F4545-00000000115F48E7
bool __cdecl data::vecFromJson(const Json::Value *jval, data::ConfigCanChangeAvatarList *v)
{
  bool v2; // r15
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int v6; // eax
  __int64 v7; // rsi
  data::ConfigCanChangeAvatar *v8; // rdx
  bool result; // al
  std::vector<data::ConfigCanChangeAvatar> *va; // [rsp+0h] [rbp-D0h]
  Json::Value *jvala; // [rsp+8h] [rbp-C8h]
  uint32_t i; // [rsp+14h] [rbp-BCh]
  const Json::Value *elem_jval; // [rsp+18h] [rbp-B8h]
  char v14[176]; // [rsp+20h] [rbp-B0h] BYREF

  jvala = (Json::Value *)jval;
  LODWORD(va) = (_DWORD)v;
  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 12 8 elem:461 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = data::vecFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219020288;
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
      *(_WORD *)(((v3 + 32) >> 3) + 0x7FFF8000) = 1024;
      if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 32, i);
      *(_DWORD *)(v3 + 32) = 0;
      v7 = (((_BYTE)v3 + 36) & 7u) + 3;
      if ( *(_BYTE *)(((v3 + 36) >> 3) + 0x7FFF8000) != 0
        && (char)(((v3 + 36) & 7) + 3) >= *(_BYTE *)(((v3 + 36) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v3 + 36, v7);
      }
      *(_DWORD *)(v3 + 36) = 1065353216;
      if ( *(char *)(((v3 + 40) >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(v3 + 40, v7, v3 + 40);
      *(_BYTE *)(v3 + 40) = 0;
      if ( !data::ConfigCanChangeAvatar::fromJson((data::ConfigCanChangeAvatar *const)(v3 + 32), elem_jval) )
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
          "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
          "vecFromJson",
          464);
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
        v8 = std::move<data::ConfigCanChangeAvatar &>((data::ConfigCanChangeAvatar *)(v3 + 32));
        std::vector<data::ConfigCanChangeAvatar>::emplace_back<data::ConfigCanChangeAvatar>(va, v8, v8);
        v6 = 2;
      }
    }
    *(_WORD *)(((v3 + 32) >> 3) + 0x7FFF8000) = -1800;
    if ( v6 && v6 != 2 )
      goto LABEL_23;
  }
  v2 = 1;
LABEL_23:
  result = v2;
  if ( v14 == (char *)v3 )
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

// Line 474: range 00000000115F48E8-00000000115F4B34
int32_t __cdecl data::getVecHashValue(const data::ConfigCanChangeAvatarList *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  __gnu_cxx::__normal_iterator<const data::ConfigCanChangeAvatar*,std::vector<data::ConfigCanChangeAvatar> >::reference elem; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:475 64 8 15 __for_begin:476 96 8 13 __for_end:476";
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
  *(std::vector<data::ConfigCanChangeAvatar>::const_iterator *)(v2 + 64) = std::vector<data::ConfigCanChangeAvatar>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::ConfigCanChangeAvatar>::const_iterator *)(v2 + 96) = std::vector<data::ConfigCanChangeAvatar>::end(vec);
  while ( __gnu_cxx::operator!=<data::ConfigCanChangeAvatar const*,std::vector<data::ConfigCanChangeAvatar>>(
            (const __gnu_cxx::__normal_iterator<const data::ConfigCanChangeAvatar*,std::vector<data::ConfigCanChangeAvatar> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::ConfigCanChangeAvatar*,std::vector<data::ConfigCanChangeAvatar> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<data::ConfigCanChangeAvatar const*,std::vector<data::ConfigCanChangeAvatar>>::operator*((const __gnu_cxx::__normal_iterator<const data::ConfigCanChangeAvatar*,std::vector<data::ConfigCanChangeAvatar> > *const)(v2 + 64));
    HashValue = data::ConfigCanChangeAvatar::getHashValue(elem);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::ConfigCanChangeAvatar const*,std::vector<data::ConfigCanChangeAvatar>>::operator++((__gnu_cxx::__normal_iterator<const data::ConfigCanChangeAvatar*,std::vector<data::ConfigCanChangeAvatar> > *const)(v2 + 64));
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

// Line 485: range 00000000115F4B36-00000000115F58D8
bool __cdecl data::ConfigEquipReattach::fromJson(data::ConfigEquipReattach *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *equip_ptr; // [rsp+18h] [rbp-348h]
  const Json::Value *target_point_ptr; // [rsp+20h] [rbp-340h]
  const Json::Value *normalize_start_ptr; // [rsp+28h] [rbp-338h]
  const Json::Value *normalize_end_ptr; // [rsp+30h] [rbp-330h]
  const Json::Value *range_time_ptr; // [rsp+38h] [rbp-328h]
  char v13[800]; // [rsp+40h] [rbp-320h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(768LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "15 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 32 "
                        "9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9"
                        " <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigEquipReattach::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862739] = -218959118;
  v4[536862741] = -218959118;
  v4[536862743] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 128),
    "equip",
    (const std::allocator<char> *)(v2 + 48));
  equip_ptr = jsonValueFind(jval, (const std::string *)(v2 + 128));
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( equip_ptr && !fromJson<std::string>(equip_ptr, &this->equip) )
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
      "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
      "fromJson",
      495);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[27])"fromJson for: equip fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 256),
      "targetPoint",
      (const std::allocator<char> *)(v2 + 64));
    target_point_ptr = jsonValueFind(jval, (const std::string *)(v2 + 256));
    std::string::~string((void *)(v2 + 256));
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( target_point_ptr && !fromJson<std::string>(target_point_ptr, &this->target_point) )
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
        "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
        "fromJson",
        507);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[33])"fromJson for: targetPoint fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      result = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 384),
        "normalizeStart",
        (const std::allocator<char> *)(v2 + 80));
      normalize_start_ptr = jsonValueFind(jval, (const std::string *)(v2 + 384));
      std::string::~string((void *)(v2 + 384));
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( normalize_start_ptr && !fromJson<float>(normalize_start_ptr, &this->normalize_start) )
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
          "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
          "fromJson",
          519);
        common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
          (common::milog::MiLogStream *const)(v2 + 448),
          (const char (*)[36])"fromJson for: normalizeStart fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
        result = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 512),
          "normalizeEnd",
          (const std::allocator<char> *)(v2 + 96));
        normalize_end_ptr = jsonValueFind(jval, (const std::string *)(v2 + 512));
        std::string::~string((void *)(v2 + 512));
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( normalize_end_ptr && !fromJson<float>(normalize_end_ptr, &this->normalize_end) )
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
            "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
            "fromJson",
            531);
          common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            (common::milog::MiLogStream *const)(v2 + 576),
            (const char (*)[34])"fromJson for: normalizeEnd fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
          result = 0;
        }
        else
        {
          *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 112);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 640),
            "rangeTime",
            (const std::allocator<char> *)(v2 + 112));
          range_time_ptr = jsonValueFind(jval, (const std::string *)(v2 + 640));
          std::string::~string((void *)(v2 + 640));
          *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( range_time_ptr && !fromJson<bool>(range_time_ptr, &this->range_time) )
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
              3u,
              "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
              "fromJson",
              543);
            common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              (common::milog::MiLogStream *const)(v2 + 704),
              (const char (*)[31])"fromJson for: rangeTime fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
            result = 0;
          }
          else
          {
            v6 = ((_BYTE)this + 73) & 7;
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
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8034) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8054) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF805C) = 0;
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
  }
  return result;
};

// Line 551: range 00000000115F58DA-00000000115F5B0E
int32_t __cdecl data::ConfigEquipReattach::getHashValue(const data::ConfigEquipReattach *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:552";
  *(_QWORD *)(v2 + 16) = data::ConfigEquipReattach::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  common::tools::HashUtils::appendHash(&this->equip, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->target_point, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->normalize_start >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->normalize_start >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->normalize_start);
  }
  common::tools::HashUtils::appendHash(this->normalize_start, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->normalize_end >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->normalize_end >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->normalize_end);
  }
  common::tools::HashUtils::appendHash(this->normalize_end, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->range_time >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->range_time, (((_BYTE)this + 68) & 7u) + 3, &this->range_time);
  common::tools::HashUtils::appendHash(this->range_time, (int32_t *)(v2 + 32));
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

// Line 562: range 00000000115F5B0F-00000000115F5EE0
bool __cdecl data::vecFromJson(const Json::Value *jval, data::ConfigEquipReattachList *v)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int v5; // edx
  unsigned __int64 v6; // rax
  int v7; // r14d
  data::ConfigEquipReattach *v8; // rdx
  unsigned __int64 v9; // rax
  bool result; // al
  int v11; // [rsp+0h] [rbp-140h]
  char v12; // [rsp+8h] [rbp-138h]
  bool v13; // [rsp+Fh] [rbp-131h]
  uint32_t i; // [rsp+24h] [rbp-11Ch]
  const Json::Value *elem_jval; // [rsp+28h] [rbp-118h]
  char v16[272]; // [rsp+30h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 32 9 <unknown> 112 80 8 elem:568";
  *(_QWORD *)(v2 + 16) = data::vecFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -219021312;
  v4[536862723] = 62194;
  v4[536862726] = -202116109;
  for ( i = 0; i < Json::Value::size((const Json::Value_0 *const)jval); ++i )
  {
    elem_jval = (const Json::Value *)Json::Value::operator[]((Json::Value *)jval, i, v11, v12);
    if ( Json::Value::isNull((const Json::Value_0 *const)elem_jval) )
    {
      v5 = 0;
    }
    else
    {
      v6 = ((v2 + 112) >> 3) + 2147450880;
      *(_DWORD *)v6 = 0;
      *(_DWORD *)(v6 + 4) = 0;
      *(_WORD *)(v6 + 8) = 0;
      data::ConfigEquipReattach::ConfigEquipReattach((data::ConfigEquipReattach *const)(v2 + 112));
      if ( !data::ConfigEquipReattach::fromJson((data::ConfigEquipReattach *const)(v2 + 112), elem_jval) )
      {
        *(_DWORD *)(((v2 + 48) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 79) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 32 + 111) & 7) >= *(_BYTE *)(((v2 + 79) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 48, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 48),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
          "vecFromJson",
          571);
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v2 + 48),
          (const char (*)[16])"fromJson fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 48));
        *(_DWORD *)(((v2 + 48) >> 3) + 0x7FFF8000) = -117901064;
        v13 = 0;
        v7 = 0;
      }
      else
      {
        v8 = std::move<data::ConfigEquipReattach &>((data::ConfigEquipReattach *)(v2 + 112));
        std::vector<data::ConfigEquipReattach>::emplace_back<data::ConfigEquipReattach>(v, v8, v8);
        v7 = 1;
      }
      data::ConfigEquipReattach::~ConfigEquipReattach((data::ConfigEquipReattach *const)(v2 + 112));
      if ( v7 == 1 )
        v5 = 2;
      else
        v5 = 1;
    }
    v9 = ((v2 + 112) >> 3) + 2147450880;
    *(_DWORD *)v9 = -117901064;
    *(_DWORD *)(v9 + 4) = -117901064;
    *(_WORD *)(v9 + 8) = -1800;
    if ( v5 && v5 != 2 )
      goto LABEL_20;
  }
  v13 = 1;
LABEL_20:
  result = v13;
  if ( v16 == (char *)v2 )
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
  return result;
};

// Line 581: range 00000000115F5EE1-00000000115F612D
int32_t __cdecl data::getVecHashValue(const data::ConfigEquipReattachList *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  __gnu_cxx::__normal_iterator<const data::ConfigEquipReattach*,std::vector<data::ConfigEquipReattach> >::reference elem; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:582 64 8 15 __for_begin:583 96 8 13 __for_end:583";
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
  *(std::vector<data::ConfigEquipReattach>::const_iterator *)(v2 + 64) = std::vector<data::ConfigEquipReattach>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::ConfigEquipReattach>::const_iterator *)(v2 + 96) = std::vector<data::ConfigEquipReattach>::end(vec);
  while ( __gnu_cxx::operator!=<data::ConfigEquipReattach const*,std::vector<data::ConfigEquipReattach>>(
            (const __gnu_cxx::__normal_iterator<const data::ConfigEquipReattach*,std::vector<data::ConfigEquipReattach> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::ConfigEquipReattach*,std::vector<data::ConfigEquipReattach> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<data::ConfigEquipReattach const*,std::vector<data::ConfigEquipReattach>>::operator*((const __gnu_cxx::__normal_iterator<const data::ConfigEquipReattach*,std::vector<data::ConfigEquipReattach> > *const)(v2 + 64));
    HashValue = data::ConfigEquipReattach::getHashValue(elem);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::ConfigEquipReattach const*,std::vector<data::ConfigEquipReattach>>::operator++((__gnu_cxx::__normal_iterator<const data::ConfigEquipReattach*,std::vector<data::ConfigEquipReattach> > *const)(v2 + 64));
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

// Line 592: range 00000000115F612E-00000000115F6363
data::ConfigBaseStateIDInfoPtr __cdecl data::createConfigBaseStateIDInfo(const std::string *name)
{
  const std::map<std::string,std::shared_ptr<data::ConfigBaseStateIDInfo>>::key_type *v1; // rsi
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseStateIDInfo> > > *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool v5; // al
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseStateIDInfo> > >::pointer v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  void (__fastcall *v9)(const std::string *, unsigned __int64); // rcx
  data::ConfigBaseStateIDInfoPtr result; // rax
  char v11[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseStateIDInfo> > > *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseStateIDInfo> > > *)v3;
  }
  v2->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseStateIDInfo> > >::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseStateIDInfo> > >::_Base_ptr)"2 32 8 6 it:593 64 8 9 <unknown>";
  v2[2]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseStateIDInfo> > >::_Base_ptr)data::createConfigBaseStateIDInfo;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], v1);
  v2[4]._M_node = std::map<std::string,std::shared_ptr<data::ConfigBaseStateIDInfo>>::find(
                    &data::g_ConfigBaseStateIDInfoMap[abi:cxx11],
                    v1)._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], v1);
  v2[8]._M_node = std::map<std::string,std::shared_ptr<data::ConfigBaseStateIDInfo>>::end(&data::g_ConfigBaseStateIDInfoMap[abi:cxx11])._M_node;
  v5 = std::operator!=(v2 + 4, v2 + 8);
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
  {
    v6 = std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<data::ConfigBaseStateIDInfo>>>::operator->(v2 + 4);
    v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigBaseStateIDInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBaseStateIDInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v6->second);
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
    std::shared_ptr<data::ConfigBaseStateIDInfo>::shared_ptr(
      (std::shared_ptr<data::ConfigBaseStateIDInfo> *const)name,
      0LL);
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseStateIDInfo> > >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigBaseStateIDInfo,(__gnu_cxx::_Lock_policy)2>::element_type *)name;
  return result;
};

// Line 599: range 00000000115F6364-00000000115F6470
void __cdecl data::ConfigBaseStateIDInfo::foreachMember(
        data::ConfigBaseStateIDInfo *const this,
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
  *(_QWORD *)(v2 + 8) = "1 32 16 16 priority_any:600";
  *(_QWORD *)(v2 + 16) = data::ConfigBaseStateIDInfo::foreachMember;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::any::any<int &,int,std::any::_Manager_internal<int>,true,true>((std::any *const)(v2 + 32), &this->priority);
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

// Line 605: range 00000000115F6472-00000000115F64BC
std::shared_ptr<data::ConfigBaseStateIDInfo> __cdecl data::ConfigBaseStateIDInfo::clone(
        data::ConfigBaseStateIDInfo *const this)
{
  data::ConfigBaseStateIDInfo *v1; // rsi
  std::shared_ptr<data::ConfigBaseStateIDInfo> result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigBaseStateIDInfo,data::ConfigBaseStateIDInfo&>(
    (common::tools::perf::allocator<data::ConfigBaseStateIDInfo,data::ConfigBaseStateIDInfo> *)this,
    v1);
  result._M_ptr = this;
  return result;
};

// Line 609: range 00000000115F64BE-00000000115F681C
bool __cdecl data::ConfigBaseStateIDInfo::fromJson(data::ConfigBaseStateIDInfo *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *priority_ptr; // [rsp+18h] [rbp-E8h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigBaseStateIDInfo::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 64),
    "priority",
    (const std::allocator<char> *)(v2 + 48));
  priority_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( priority_ptr && !fromJson<int>(priority_ptr, &this->priority) )
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
      "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
      "fromJson",
      619);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[30])"fromJson for: priority fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
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

// Line 626: range 00000000115F681E-00000000115F717A
data::ConfigBaseStateIDInfoPtr __cdecl data::ConfigBaseStateIDInfo::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigBaseStateIDInfoPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<data::ConfigBaseStateIDInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
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
  *(_QWORD *)(v2 + 8) = "8 48 1 9 <unknown> 64 16 7 ptr:639 96 32 9 <unknown> 160 32 9 <unknown> 224 32 13 type_name:633 "
                        "288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBaseStateIDInfo::parseFromJson;
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
        "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
        "parseFromJson",
        636);
      common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[49])"fromJson for: ConfigBaseStateIDInfo $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigBaseStateIDInfo>::shared_ptr(
        (std::shared_ptr<data::ConfigBaseStateIDInfo> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigBaseStateIDInfo((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigBaseStateIDInfo>(
             (const std::shared_ptr<data::ConfigBaseStateIDInfo> *)(v2 + 64),
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
          "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
          "parseFromJson",
          642);
        v6 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
               (common::milog::MiLogStream *const)(v2 + 352),
               (const char (*)[47])"create ConfigBaseStateIDInfo fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 224));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
        *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigBaseStateIDInfo>::shared_ptr(
          (std::shared_ptr<data::ConfigBaseStateIDInfo> *const)jval,
          0LL);
      }
      else
      {
        v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigBaseStateIDInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBaseStateIDInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
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
            "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
            "parseFromJson",
            647);
          v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                 (common::milog::MiLogStream *const)(v2 + 416),
                 (const std::string *)(v2 + 224));
          common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
          *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigBaseStateIDInfo>::shared_ptr(
            (std::shared_ptr<data::ConfigBaseStateIDInfo> *const)jval,
            0LL);
        }
        else
        {
          v10 = std::__shared_ptr_access<data::ConfigBaseStateIDInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBaseStateIDInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          v11 = *(_BYTE *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000);
          if ( v11 != 0 && (((unsigned __int8)v10 + 28) & 7) >= v11 )
          {
            LOBYTE(v1) = v11 != 0;
            __asan_report_store1(&v10->is_json_loaded, v1, v10);
          }
          v10->is_json_loaded = 1;
          std::shared_ptr<data::ConfigBaseStateIDInfo>::shared_ptr(
            (std::shared_ptr<data::ConfigBaseStateIDInfo> *const)jval,
            (std::shared_ptr<data::ConfigBaseStateIDInfo> *)(v2 + 64));
        }
      }
      std::shared_ptr<data::ConfigBaseStateIDInfo>::~shared_ptr((std::shared_ptr<data::ConfigBaseStateIDInfo> *const)(v2 + 64));
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
      "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
      "parseFromJson",
      630);
    common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[54])"jsonValueFind for: ConfigBaseStateIDInfo $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigBaseStateIDInfo>::shared_ptr(
      (std::shared_ptr<data::ConfigBaseStateIDInfo> *const)jval,
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
  result._M_ptr = (std::__shared_ptr<data::ConfigBaseStateIDInfo,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 655: range 00000000115F717C-00000000115F72E2
int32_t __cdecl data::ConfigBaseStateIDInfo::getHashValue(const data::ConfigBaseStateIDInfo *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:656";
  *(_QWORD *)(v2 + 16) = data::ConfigBaseStateIDInfo::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->priority);
  }
  common::tools::HashUtils::appendHash(this->priority, (int32_t *)(v2 + 32));
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

// Line 665: range 0000000011693D50-0000000011693F91
void __cdecl data::ConfigNormalStateIDInfoRegister::ConfigNormalStateIDInfoRegister(
        data::ConfigNormalStateIDInfoRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigBaseStateIDInfo> *v4; // rax
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
  *(_QWORD *)(v1 + 16) = data::ConfigNormalStateIDInfoRegister::ConfigNormalStateIDInfoRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigNormalStateIDInfo>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigNormalStateIDInfo",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigBaseStateIDInfo>>::operator[](
         &data::g_ConfigBaseStateIDInfoMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigBaseStateIDInfo>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigBaseStateIDInfo>::operator=<data::ConfigNormalStateIDInfo>(
    v4,
    (std::shared_ptr<data::ConfigNormalStateIDInfo> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigNormalStateIDInfo>::~shared_ptr((std::shared_ptr<data::ConfigNormalStateIDInfo> *const)(v1 + 64));
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

// Line 668: range 00000000115F72E4-00000000115F7D67
void __cdecl data::ConfigNormalStateIDInfo::foreachMember(
        data::ConfigNormalStateIDInfo *const this,
        std::function<void(std::any&)> *p_func)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5[720]; // [rsp+10h] [rbp-2D0h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(672LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "19 32 16 23 animator_states_any:670 64 16 17 move_type_any:672 96 16 28 combat_move_on_water_any"
                        ":674 128 16 20 can_do_skill_any:676 160 16 26 can_do_skill_start_any:678 192 16 24 can_do_skill_"
                        "end_any:680 224 16 21 can_sync_move_any:682 256 16 36 culling_model_always_animate_any:684 288 1"
                        "6 18 add_endure_any:686 320 16 18 mass_ratio_any:688 352 16 39 reset_animator_trigger_on_enter_a"
                        "ny:690 384 16 38 reset_animator_trigger_on_exit_any:692 416 16 28 set_animator_boolean_any:694 4"
                        "48 16 26 set_animator_float_any:696 480 16 23 enable_rag_doll_any:698 512 16 31 need_face_to_ani"
                        "m_param_any:700 544 16 18 enable_ccd_any:702 576 16 41 handle_animator_state_immediately_any:704"
                        " 608 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigNormalStateIDInfo::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
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
  v4[536862740] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 608), p_func);
  data::ConfigBaseStateIDInfo::foreachMember(this, (std::function<void(std::any&)> *)(v2 + 608));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 608));
  *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<std::unordered_map<std::string,std::vector<std::string>> &,std::unordered_map<std::string,std::vector<std::string>>,std::any::_Manager_external<std::unordered_map<std::string,std::vector<std::string>>>,true,true>(
    (std::any *const)(v2 + 32),
    &this->animator_states);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 32));
  *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
  std::any::any<data::MoveType &,data::MoveType,std::any::_Manager_internal<data::MoveType>,true,true>(
    (std::any *const)(v2 + 64),
    &this->move_type);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 64));
  *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(
    (std::any *const)(v2 + 96),
    &this->combat_move_on_water);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 96));
  *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(
    (std::any *const)(v2 + 128),
    &this->can_do_skill);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 128));
  *(_WORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>(
    (std::any *const)(v2 + 160),
    &this->can_do_skill_start);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 160));
  *(_WORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>(
    (std::any *const)(v2 + 192),
    &this->can_do_skill_end);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 192));
  *(_WORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(
    (std::any *const)(v2 + 224),
    &this->can_sync_move);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 224));
  *(_WORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(
    (std::any *const)(v2 + 256),
    &this->culling_model_always_animate);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 256));
  *(_WORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>(
    (std::any *const)(v2 + 288),
    &this->add_endure);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 288));
  *(_WORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>(
    (std::any *const)(v2 + 320),
    &this->mass_ratio);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 320));
  *(_WORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
  std::any::any<std::vector<std::string> &,std::vector<std::string>,std::any::_Manager_external<std::vector<std::string>>,true,true>(
    (std::any *const)(v2 + 352),
    &this->reset_animator_trigger_on_enter);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 352));
  *(_WORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
  std::any::any<std::vector<std::string> &,std::vector<std::string>,std::any::_Manager_external<std::vector<std::string>>,true,true>(
    (std::any *const)(v2 + 384),
    &this->reset_animator_trigger_on_exit);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 384));
  *(_WORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
  std::any::any<std::vector<data::ConfigAnimatorBoolean> &,std::vector<data::ConfigAnimatorBoolean>,std::any::_Manager_external<std::vector<data::ConfigAnimatorBoolean>>,true,true>(
    (std::any *const)(v2 + 416),
    &this->set_animator_boolean);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 416));
  *(_WORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
  std::any::any<std::vector<data::ConfigAnimatorFloat> &,std::vector<data::ConfigAnimatorFloat>,std::any::_Manager_external<std::vector<data::ConfigAnimatorFloat>>,true,true>(
    (std::any *const)(v2 + 448),
    &this->set_animator_float);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 448));
  *(_WORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(
    (std::any *const)(v2 + 480),
    &this->enable_rag_doll);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 480));
  *(_WORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(
    (std::any *const)(v2 + 512),
    &this->need_face_to_anim_param);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 512));
  *(_WORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>((std::any *const)(v2 + 544), &this->enable_ccd);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 544));
  *(_WORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(
    (std::any *const)(v2 + 576),
    &this->handle_animator_state_immediately);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 576));
  std::any::~any((std::any *const)(v2 + 576));
  std::any::~any((std::any *const)(v2 + 544));
  std::any::~any((std::any *const)(v2 + 512));
  std::any::~any((std::any *const)(v2 + 480));
  std::any::~any((std::any *const)(v2 + 448));
  std::any::~any((std::any *const)(v2 + 416));
  std::any::~any((std::any *const)(v2 + 384));
  std::any::~any((std::any *const)(v2 + 352));
  std::any::~any((std::any *const)(v2 + 320));
  std::any::~any((std::any *const)(v2 + 288));
  std::any::~any((std::any *const)(v2 + 256));
  std::any::~any((std::any *const)(v2 + 224));
  std::any::~any((std::any *const)(v2 + 192));
  std::any::~any((std::any *const)(v2 + 160));
  std::any::~any((std::any *const)(v2 + 128));
  std::any::~any((std::any *const)(v2 + 96));
  std::any::~any((std::any *const)(v2 + 64));
  std::any::~any((std::any *const)(v2 + 32));
  if ( v5 == (char *)v2 )
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
};

// Line 709: range 00000000115F7D68-00000000115F7E78
std::shared_ptr<data::ConfigBaseStateIDInfo> __cdecl data::ConfigNormalStateIDInfo::clone(
        data::ConfigNormalStateIDInfo *const this)
{
  data::ConfigNormalStateIDInfo *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigBaseStateIDInfo> result; // rax
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
  *(_QWORD *)(v2 + 16) = data::ConfigNormalStateIDInfo::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigNormalStateIDInfo,data::ConfigNormalStateIDInfo&>(
    (common::tools::perf::allocator<data::ConfigNormalStateIDInfo,data::ConfigNormalStateIDInfo> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigBaseStateIDInfo>::shared_ptr<data::ConfigNormalStateIDInfo,void>(
    (std::shared_ptr<data::ConfigBaseStateIDInfo> *const)this,
    (std::shared_ptr<data::ConfigNormalStateIDInfo> *)(v2 + 32));
  std::shared_ptr<data::ConfigNormalStateIDInfo>::~shared_ptr((std::shared_ptr<data::ConfigNormalStateIDInfo> *const)(v2 + 32));
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

// Line 713: range 00000000115F7E7A-00000000115FAE6E
bool __cdecl data::ConfigNormalStateIDInfo::fromJson(
        data::ConfigNormalStateIDInfo *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  bool v6; // r15
  __int64 v7; // rsi
  __int64 v8; // rdx
  bool v9; // bl
  const Json::Value *animator_states_ptr; // [rsp+10h] [rbp-B80h]
  Json::Value *move_type_ptr; // [rsp+18h] [rbp-B78h]
  const Json::Value *combat_move_on_water_ptr; // [rsp+20h] [rbp-B70h]
  const Json::Value *can_do_skill_ptr; // [rsp+28h] [rbp-B68h]
  const Json::Value *can_do_skill_start_ptr; // [rsp+30h] [rbp-B60h]
  const Json::Value *can_do_skill_end_ptr; // [rsp+38h] [rbp-B58h]
  const Json::Value *can_sync_move_ptr; // [rsp+40h] [rbp-B50h]
  const Json::Value *culling_model_always_animate_ptr; // [rsp+48h] [rbp-B48h]
  const Json::Value *add_endure_ptr; // [rsp+50h] [rbp-B40h]
  const Json::Value *mass_ratio_ptr; // [rsp+58h] [rbp-B38h]
  const Json::Value *reset_animator_trigger_on_enter_ptr; // [rsp+60h] [rbp-B30h]
  const Json::Value *reset_animator_trigger_on_exit_ptr; // [rsp+68h] [rbp-B28h]
  const Json::Value *set_animator_boolean_ptr; // [rsp+70h] [rbp-B20h]
  const Json::Value *set_animator_float_ptr; // [rsp+78h] [rbp-B18h]
  const Json::Value *enable_rag_doll_ptr; // [rsp+80h] [rbp-B10h]
  const Json::Value *need_face_to_anim_param_ptr; // [rsp+88h] [rbp-B08h]
  const Json::Value *enable_ccd_ptr; // [rsp+90h] [rbp-B00h]
  const Json::Value *handle_animator_state_immediately_ptr; // [rsp+98h] [rbp-AF8h]
  char v29[2800]; // [rsp+A0h] [rbp-AF0h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(2752LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "56 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unkno"
                        "wn> 208 1 9 <unknown> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 28"
                        "8 1 9 <unknown> 304 1 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 3"
                        "2 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 32"
                        " 9 <unknown> 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 <unknown> 1152 "
                        "32 9 <unknown> 1216 32 9 <unknown> 1280 32 9 <unknown> 1344 32 9 <unknown> 1408 32 9 <unknown> 1"
                        "472 32 9 <unknown> 1536 32 9 <unknown> 1600 32 9 <unknown> 1664 32 9 <unknown> 1728 32 9 <unknow"
                        "n> 1792 32 9 <unknown> 1856 32 9 <unknown> 1920 32 9 <unknown> 1984 32 9 <unknown> 2048 32 9 <un"
                        "known> 2112 32 9 <unknown> 2176 32 9 <unknown> 2240 32 9 <unknown> 2304 32 9 <unknown> 2368 32 9"
                        " <unknown> 2432 32 9 <unknown> 2496 32 9 <unknown> 2560 32 9 <unknown> 2624 32 9 <unknown> 2688 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigNormalStateIDInfo::fromJson;
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
  v4[536862805] = -202116109;
  if ( !data::ConfigBaseStateIDInfo::fromJson(this, jval) )
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
      "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
      "fromJson",
      716);
    common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
      (common::milog::MiLogStream *const)(v2 + 320),
      (const char (*)[43])"fromJson for: ConfigBaseStateIDInfo fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
    v5 = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 32);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 384),
      "animatorStates",
      (const std::allocator<char> *)(v2 + 32));
    animator_states_ptr = jsonValueFind(jval, (const std::string *)(v2 + 384));
    std::string::~string((void *)(v2 + 384));
    *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 32);
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    if ( animator_states_ptr && !data::mapFromJson(animator_states_ptr, &this->animator_states) )
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
        "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
        "fromJson",
        728);
      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
        (common::milog::MiLogStream *const)(v2 + 448),
        (const char (*)[36])"fromJson for: animatorStates fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
      v5 = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 48);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 512),
        "moveType",
        (const std::allocator<char> *)(v2 + 48));
      move_type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 512));
      std::string::~string((void *)(v2 + 512));
      *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 48);
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( !move_type_ptr )
        goto LABEL_20;
      *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 576) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 576, 32LL);
      }
      Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 576), (Json::Value_0 *)move_type_ptr);
      v6 = !data::enumStrToVal((const std::string *)(v2 + 576), &this->move_type);
      std::string::~string((void *)(v2 + 576));
      *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
      if ( v6 )
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
          3u,
          "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
          "fromJson",
          740);
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
          (common::milog::MiLogStream *const)(v2 + 640),
          (const char (*)[30])"fromJson for: moveType fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 640));
        v5 = 0;
      }
      else
      {
LABEL_20:
        *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 64);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 704),
          "combatMoveOnWater",
          (const std::allocator<char> *)(v2 + 64));
        combat_move_on_water_ptr = jsonValueFind(jval, (const std::string *)(v2 + 704));
        std::string::~string((void *)(v2 + 704));
        *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 64);
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
        if ( combat_move_on_water_ptr && !fromJson<bool>(combat_move_on_water_ptr, &this->combat_move_on_water) )
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
            3u,
            "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
            "fromJson",
            752);
          common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            (common::milog::MiLogStream *const)(v2 + 768),
            (const char (*)[39])"fromJson for: combatMoveOnWater fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 768));
          v5 = 0;
        }
        else
        {
          *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 80);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 832),
            "canDoSkill",
            (const std::allocator<char> *)(v2 + 80));
          can_do_skill_ptr = jsonValueFind(jval, (const std::string *)(v2 + 832));
          std::string::~string((void *)(v2 + 832));
          *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 80);
          *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
          if ( can_do_skill_ptr && !fromJson<bool>(can_do_skill_ptr, &this->can_do_skill) )
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
              "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
              "fromJson",
              764);
            common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              (common::milog::MiLogStream *const)(v2 + 896),
              (const char (*)[32])"fromJson for: canDoSkill fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 896));
            v5 = 0;
          }
          else
          {
            *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 96);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 960),
              "canDoSkillStart",
              (const std::allocator<char> *)(v2 + 96));
            can_do_skill_start_ptr = jsonValueFind(jval, (const std::string *)(v2 + 960));
            std::string::~string((void *)(v2 + 960));
            *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 96);
            *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
            if ( can_do_skill_start_ptr && !fromJson<float>(can_do_skill_start_ptr, &this->can_do_skill_start) )
            {
              *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 1024) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 1055) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 1055) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 1024, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 1024),
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
                "fromJson",
                776);
              common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                (common::milog::MiLogStream *const)(v2 + 1024),
                (const char (*)[37])"fromJson for: canDoSkillStart fails!");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1024));
              v5 = 0;
            }
            else
            {
              *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 112);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1088),
                "canDoSkillEnd",
                (const std::allocator<char> *)(v2 + 112));
              can_do_skill_end_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1088));
              std::string::~string((void *)(v2 + 1088));
              *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 112);
              *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
              if ( can_do_skill_end_ptr && !fromJson<float>(can_do_skill_end_ptr, &this->can_do_skill_end) )
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
                  3u,
                  "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
                  "fromJson",
                  788);
                common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                  (common::milog::MiLogStream *const)(v2 + 1152),
                  (const char (*)[35])"fromJson for: canDoSkillEnd fails!");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1152));
                v5 = 0;
              }
              else
              {
                *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 128);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1216),
                  "canSyncMove",
                  (const std::allocator<char> *)(v2 + 128));
                can_sync_move_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1216));
                std::string::~string((void *)(v2 + 1216));
                *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 128);
                *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
                if ( can_sync_move_ptr && !fromJson<bool>(can_sync_move_ptr, &this->can_sync_move) )
                {
                  *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 1280) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 1311) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 1311) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 1280, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 1280),
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
                    "fromJson",
                    800);
                  common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    (common::milog::MiLogStream *const)(v2 + 1280),
                    (const char (*)[33])"fromJson for: canSyncMove fails!");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1280));
                  v5 = 0;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 144);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1344),
                    "cullingModelAlwaysAnimate",
                    (const std::allocator<char> *)(v2 + 144));
                  culling_model_always_animate_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1344));
                  std::string::~string((void *)(v2 + 1344));
                  *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 144);
                  *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
                  if ( culling_model_always_animate_ptr
                    && !fromJson<bool>(culling_model_always_animate_ptr, &this->culling_model_always_animate) )
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
                      "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
                      "fromJson",
                      812);
                    common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                      (common::milog::MiLogStream *const)(v2 + 1408),
                      (const char (*)[47])"fromJson for: cullingModelAlwaysAnimate fails!");
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1408));
                    v5 = 0;
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 160);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 1472),
                      "addEndure",
                      (const std::allocator<char> *)(v2 + 160));
                    add_endure_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1472));
                    std::string::~string((void *)(v2 + 1472));
                    *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 160);
                    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                    if ( add_endure_ptr && !fromJson<float>(add_endure_ptr, &this->add_endure) )
                    {
                      *(_DWORD *)(((v2 + 1536) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 1536) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 1567) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 1567) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 1536, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 1536),
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
                        "fromJson",
                        824);
                      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                        (common::milog::MiLogStream *const)(v2 + 1536),
                        (const char (*)[31])"fromJson for: addEndure fails!");
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1536));
                      v5 = 0;
                    }
                    else
                    {
                      *(_DWORD *)(((v2 + 1600) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 176);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 1600),
                        "massRatio",
                        (const std::allocator<char> *)(v2 + 176));
                      mass_ratio_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1600));
                      std::string::~string((void *)(v2 + 1600));
                      *(_DWORD *)(((v2 + 1600) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 176);
                      *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                      if ( mass_ratio_ptr && !fromJson<float>(mass_ratio_ptr, &this->mass_ratio) )
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
                          "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
                          "fromJson",
                          836);
                        common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                          (common::milog::MiLogStream *const)(v2 + 1664),
                          (const char (*)[31])"fromJson for: massRatio fails!");
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1664));
                        v5 = 0;
                      }
                      else
                      {
                        *(_DWORD *)(((v2 + 1728) >> 3) + 0x7FFF8000) = 0;
                        *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 192);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 1728),
                          "resetAnimatorTriggerOnEnter",
                          (const std::allocator<char> *)(v2 + 192));
                        reset_animator_trigger_on_enter_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1728));
                        std::string::~string((void *)(v2 + 1728));
                        *(_DWORD *)(((v2 + 1728) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 192);
                        *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                        if ( reset_animator_trigger_on_enter_ptr
                          && !data::vecFromJson(
                                reset_animator_trigger_on_enter_ptr,
                                &this->reset_animator_trigger_on_enter) )
                        {
                          *(_DWORD *)(((v2 + 1792) >> 3) + 0x7FFF8000) = 0;
                          if ( *(char *)(((v2 + 1792) >> 3) + 0x7FFF8000) < 0
                            || *(_BYTE *)(((v2 + 1823) >> 3) + 0x7FFF8000) != 0
                            && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 1823) >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_store_n(v2 + 1792, 32LL);
                          }
                          common::milog::MiLogStream::create(
                            (common::milog::MiLogStream *)(v2 + 1792),
                            &common::milog::MiLogDefault::default_log_obj_,
                            3u,
                            "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
                            "fromJson",
                            848);
                          common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                            (common::milog::MiLogStream *const)(v2 + 1792),
                            (const char (*)[49])"fromJson for: resetAnimatorTriggerOnEnter fails!");
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1792));
                          v5 = 0;
                        }
                        else
                        {
                          *(_DWORD *)(((v2 + 1856) >> 3) + 0x7FFF8000) = 0;
                          *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
                          std::allocator<char>::allocator(v2 + 208);
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)(v2 + 1856),
                            "resetAnimatorTriggerOnExit",
                            (const std::allocator<char> *)(v2 + 208));
                          reset_animator_trigger_on_exit_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1856));
                          std::string::~string((void *)(v2 + 1856));
                          *(_DWORD *)(((v2 + 1856) >> 3) + 0x7FFF8000) = -117901064;
                          std::allocator<char>::~allocator(v2 + 208);
                          *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                          if ( reset_animator_trigger_on_exit_ptr
                            && !data::vecFromJson(
                                  reset_animator_trigger_on_exit_ptr,
                                  &this->reset_animator_trigger_on_exit) )
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
                              "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
                              "fromJson",
                              860);
                            common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                              (common::milog::MiLogStream *const)(v2 + 1920),
                              (const char (*)[48])"fromJson for: resetAnimatorTriggerOnExit fails!");
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1920));
                            v5 = 0;
                          }
                          else
                          {
                            *(_DWORD *)(((v2 + 1984) >> 3) + 0x7FFF8000) = 0;
                            *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
                            std::allocator<char>::allocator(v2 + 224);
                            std::string::basic_string<std::allocator<char>>(
                              (std::string *const)(v2 + 1984),
                              "setAnimatorBoolean",
                              (const std::allocator<char> *)(v2 + 224));
                            set_animator_boolean_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1984));
                            std::string::~string((void *)(v2 + 1984));
                            *(_DWORD *)(((v2 + 1984) >> 3) + 0x7FFF8000) = -117901064;
                            std::allocator<char>::~allocator(v2 + 224);
                            *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                            if ( set_animator_boolean_ptr
                              && !data::vecFromJson(set_animator_boolean_ptr, &this->set_animator_boolean) )
                            {
                              *(_DWORD *)(((v2 + 2048) >> 3) + 0x7FFF8000) = 0;
                              if ( *(char *)(((v2 + 2048) >> 3) + 0x7FFF8000) < 0
                                || *(_BYTE *)(((v2 + 2079) >> 3) + 0x7FFF8000) != 0
                                && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 2079) >> 3) + 0x7FFF8000) )
                              {
                                __asan_report_store_n(v2 + 2048, 32LL);
                              }
                              common::milog::MiLogStream::create(
                                (common::milog::MiLogStream *)(v2 + 2048),
                                &common::milog::MiLogDefault::default_log_obj_,
                                3u,
                                "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
                                "fromJson",
                                872);
                              common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                                (common::milog::MiLogStream *const)(v2 + 2048),
                                (const char (*)[40])"fromJson for: setAnimatorBoolean fails!");
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2048));
                              v5 = 0;
                            }
                            else
                            {
                              *(_DWORD *)(((v2 + 2112) >> 3) + 0x7FFF8000) = 0;
                              *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
                              std::allocator<char>::allocator(v2 + 240);
                              std::string::basic_string<std::allocator<char>>(
                                (std::string *const)(v2 + 2112),
                                "setAnimatorFloat",
                                (const std::allocator<char> *)(v2 + 240));
                              set_animator_float_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2112));
                              std::string::~string((void *)(v2 + 2112));
                              *(_DWORD *)(((v2 + 2112) >> 3) + 0x7FFF8000) = -117901064;
                              std::allocator<char>::~allocator(v2 + 240);
                              *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                              if ( set_animator_float_ptr
                                && !data::vecFromJson(set_animator_float_ptr, &this->set_animator_float) )
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
                                  "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
                                  "fromJson",
                                  884);
                                common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                                  (common::milog::MiLogStream *const)(v2 + 2176),
                                  (const char (*)[38])"fromJson for: setAnimatorFloat fails!");
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2176));
                                v5 = 0;
                              }
                              else
                              {
                                *(_DWORD *)(((v2 + 2240) >> 3) + 0x7FFF8000) = 0;
                                *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
                                std::allocator<char>::allocator(v2 + 256);
                                std::string::basic_string<std::allocator<char>>(
                                  (std::string *const)(v2 + 2240),
                                  "enableRagDoll",
                                  (const std::allocator<char> *)(v2 + 256));
                                enable_rag_doll_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2240));
                                std::string::~string((void *)(v2 + 2240));
                                *(_DWORD *)(((v2 + 2240) >> 3) + 0x7FFF8000) = -117901064;
                                std::allocator<char>::~allocator(v2 + 256);
                                *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                                if ( enable_rag_doll_ptr && !fromJson<bool>(enable_rag_doll_ptr, &this->enable_rag_doll) )
                                {
                                  *(_DWORD *)(((v2 + 2304) >> 3) + 0x7FFF8000) = 0;
                                  if ( *(char *)(((v2 + 2304) >> 3) + 0x7FFF8000) < 0
                                    || *(_BYTE *)(((v2 + 2335) >> 3) + 0x7FFF8000) != 0
                                    && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 2335) >> 3) + 0x7FFF8000) )
                                  {
                                    __asan_report_store_n(v2 + 2304, 32LL);
                                  }
                                  common::milog::MiLogStream::create(
                                    (common::milog::MiLogStream *)(v2 + 2304),
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    3u,
                                    "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
                                    "fromJson",
                                    896);
                                  common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                                    (common::milog::MiLogStream *const)(v2 + 2304),
                                    (const char (*)[35])"fromJson for: enableRagDoll fails!");
                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2304));
                                  v5 = 0;
                                }
                                else
                                {
                                  *(_DWORD *)(((v2 + 2368) >> 3) + 0x7FFF8000) = 0;
                                  *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
                                  std::allocator<char>::allocator(v2 + 272);
                                  std::string::basic_string<std::allocator<char>>(
                                    (std::string *const)(v2 + 2368),
                                    "needFaceToAnimParam",
                                    (const std::allocator<char> *)(v2 + 272));
                                  need_face_to_anim_param_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2368));
                                  std::string::~string((void *)(v2 + 2368));
                                  *(_DWORD *)(((v2 + 2368) >> 3) + 0x7FFF8000) = -117901064;
                                  std::allocator<char>::~allocator(v2 + 272);
                                  *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                                  if ( need_face_to_anim_param_ptr
                                    && !fromJson<bool>(need_face_to_anim_param_ptr, &this->need_face_to_anim_param) )
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
                                      "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
                                      "fromJson",
                                      908);
                                    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                                      (common::milog::MiLogStream *const)(v2 + 2432),
                                      (const char (*)[41])"fromJson for: needFaceToAnimParam fails!");
                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2432));
                                    v5 = 0;
                                  }
                                  else
                                  {
                                    *(_DWORD *)(((v2 + 2496) >> 3) + 0x7FFF8000) = 0;
                                    *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 1;
                                    std::allocator<char>::allocator(v2 + 288);
                                    std::string::basic_string<std::allocator<char>>(
                                      (std::string *const)(v2 + 2496),
                                      "enableCCD",
                                      (const std::allocator<char> *)(v2 + 288));
                                    enable_ccd_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2496));
                                    std::string::~string((void *)(v2 + 2496));
                                    *(_DWORD *)(((v2 + 2496) >> 3) + 0x7FFF8000) = -117901064;
                                    std::allocator<char>::~allocator(v2 + 288);
                                    *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
                                    if ( enable_ccd_ptr && !fromJson<bool>(enable_ccd_ptr, &this->enable_ccd) )
                                    {
                                      *(_DWORD *)(((v2 + 2560) >> 3) + 0x7FFF8000) = 0;
                                      if ( *(char *)(((v2 + 2560) >> 3) + 0x7FFF8000) < 0
                                        || *(_BYTE *)(((v2 + 2591) >> 3) + 0x7FFF8000) != 0
                                        && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 2591) >> 3) + 0x7FFF8000) )
                                      {
                                        __asan_report_store_n(v2 + 2560, 32LL);
                                      }
                                      common::milog::MiLogStream::create(
                                        (common::milog::MiLogStream *)(v2 + 2560),
                                        &common::milog::MiLogDefault::default_log_obj_,
                                        3u,
                                        "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
                                        "fromJson",
                                        920);
                                      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                                        (common::milog::MiLogStream *const)(v2 + 2560),
                                        (const char (*)[31])"fromJson for: enableCCD fails!");
                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2560));
                                      v5 = 0;
                                    }
                                    else
                                    {
                                      *(_DWORD *)(((v2 + 2624) >> 3) + 0x7FFF8000) = 0;
                                      *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 1;
                                      std::allocator<char>::allocator(v2 + 304);
                                      std::string::basic_string<std::allocator<char>>(
                                        (std::string *const)(v2 + 2624),
                                        "handleAnimatorStateImmediately",
                                        (const std::allocator<char> *)(v2 + 304));
                                      handle_animator_state_immediately_ptr = jsonValueFind(
                                                                                jval,
                                                                                (const std::string *)(v2 + 2624));
                                      std::string::~string((void *)(v2 + 2624));
                                      *(_DWORD *)(((v2 + 2624) >> 3) + 0x7FFF8000) = -117901064;
                                      std::allocator<char>::~allocator(v2 + 304);
                                      *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
                                      if ( handle_animator_state_immediately_ptr
                                        && !fromJson<bool>(
                                              handle_animator_state_immediately_ptr,
                                              &this->handle_animator_state_immediately) )
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
                                          "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
                                          "fromJson",
                                          932);
                                        common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                                          (common::milog::MiLogStream *const)(v2 + 2688),
                                          (const char (*)[52])"fromJson for: handleAnimatorStateImmediately fails!");
                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2688));
                                        v5 = 0;
                                      }
                                      else
                                      {
                                        v7 = ((_BYTE)this + 28) & 7;
                                        v8 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
                                        if ( (_BYTE)v8 )
                                          __asan_report_store1(&this->is_json_loaded, v7, v8);
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
            }
          }
        }
      }
    }
  }
  v9 = v5;
  if ( v29 == (char *)v2 )
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF805C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8064) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF806C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8074) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF807C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8084) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF808C) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8154) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 2752LL, v29);
  }
  return v9;
};

// Line 939: range 00000000115FAE70-00000000115FB9BD
data::ConfigNormalStateIDInfoPtr __cdecl data::ConfigNormalStateIDInfo::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigNormalStateIDInfoPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<data::ConfigNormalStateIDInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 12 base_ptr:952 96 16 7 ptr:958 128 32 9 <unknown> 192 32 9 <unknown> "
                        "256 32 13 type_name:946 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigNormalStateIDInfo::parseFromJson;
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
        "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
        "parseFromJson",
        949);
      common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[51])"fromJson for: ConfigNormalStateIDInfo $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigNormalStateIDInfo>::shared_ptr(
        (std::shared_ptr<data::ConfigNormalStateIDInfo> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigBaseStateIDInfo((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigBaseStateIDInfo>(
             (const std::shared_ptr<data::ConfigBaseStateIDInfo> *)(v2 + 64),
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
          "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
          "parseFromJson",
          955);
        v6 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[47])"create ConfigBaseStateIDInfo fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigNormalStateIDInfo>::shared_ptr(
          (std::shared_ptr<data::ConfigNormalStateIDInfo> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigNormalStateIDInfo,data::ConfigBaseStateIDInfo>((const std::shared_ptr<data::ConfigBaseStateIDInfo> *)(v2 + 96));
        if ( std::operator==<data::ConfigNormalStateIDInfo>(
               (const std::shared_ptr<data::ConfigNormalStateIDInfo> *)(v2 + 96),
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
            "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
            "parseFromJson",
            961);
          common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[42])"cast to ConfigNormalStateIDInfoPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigNormalStateIDInfo>::shared_ptr(
            (std::shared_ptr<data::ConfigNormalStateIDInfo> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigNormalStateIDInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigNormalStateIDInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
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
              "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
              "parseFromJson",
              966);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigNormalStateIDInfo>::shared_ptr(
              (std::shared_ptr<data::ConfigNormalStateIDInfo> *const)jval,
              0LL);
          }
          else
          {
            v10 = std::__shared_ptr_access<data::ConfigNormalStateIDInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigNormalStateIDInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000);
            if ( v11 != 0 && (((unsigned __int8)v10 + 28) & 7) >= v11 )
            {
              LOBYTE(v1) = v11 != 0;
              __asan_report_store1(&v10->is_json_loaded, v1, v10);
            }
            v10->is_json_loaded = 1;
            std::shared_ptr<data::ConfigNormalStateIDInfo>::shared_ptr(
              (std::shared_ptr<data::ConfigNormalStateIDInfo> *const)jval,
              (std::shared_ptr<data::ConfigNormalStateIDInfo> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigNormalStateIDInfo>::~shared_ptr((std::shared_ptr<data::ConfigNormalStateIDInfo> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigBaseStateIDInfo>::~shared_ptr((std::shared_ptr<data::ConfigBaseStateIDInfo> *const)(v2 + 64));
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
      "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
      "parseFromJson",
      943);
    common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[56])"jsonValueFind for: ConfigNormalStateIDInfo $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigNormalStateIDInfo>::shared_ptr(
      (std::shared_ptr<data::ConfigNormalStateIDInfo> *const)jval,
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
  result._M_ptr = (std::__shared_ptr<data::ConfigNormalStateIDInfo,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 974: range 00000000115FB9BE-00000000115FBF9D
int32_t __cdecl data::ConfigNormalStateIDInfo::getHashValue(const data::ConfigNormalStateIDInfo *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // edx
  char v6; // al
  int32_t MapHashValue; // eax
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdx
  int32_t VecHashValue; // eax
  int32_t v15; // eax
  int32_t v16; // eax
  int32_t v17; // eax
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rdx
  int32_t result; // eax
  char v25[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:975";
  *(_QWORD *)(v2 + 16) = data::ConfigNormalStateIDInfo::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigBaseStateIDInfo::getHashValue(this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  MapHashValue = data::getMapHashValue(&this->animator_states);
  common::tools::HashUtils::appendHash(MapHashValue, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->move_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->move_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->move_type);
  }
  common::tools::HashUtils::appendHash(this->move_type, (int32_t *)(v2 + 32));
  v8 = ((_BYTE)this + 92) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->combat_move_on_water >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->combat_move_on_water >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_load1(&this->combat_move_on_water, v8, v9);
  common::tools::HashUtils::appendHash(this->combat_move_on_water, (int32_t *)(v2 + 32));
  v10 = ((_BYTE)this + 93) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&this->can_do_skill >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&this->can_do_skill >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_load1(&this->can_do_skill, v10, v11);
  common::tools::HashUtils::appendHash(this->can_do_skill, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->can_do_skill_start >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->can_do_skill_start >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->can_do_skill_start);
  }
  common::tools::HashUtils::appendHash(this->can_do_skill_start, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->can_do_skill_end >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->can_do_skill_end >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->can_do_skill_end);
  }
  common::tools::HashUtils::appendHash(this->can_do_skill_end, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->can_sync_move >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->can_sync_move, (((_BYTE)this + 100) & 7u) + 3, &this->can_sync_move);
  common::tools::HashUtils::appendHash(this->can_sync_move, (int32_t *)(v2 + 32));
  v12 = ((_BYTE)this + 105) & 7;
  v13 = (*(_BYTE *)(((unsigned __int64)&this->culling_model_always_animate >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((unsigned __int64)&this->culling_model_always_animate >> 3) + 0x7FFF8000));
  if ( (_BYTE)v13 )
    __asan_report_load1(&this->culling_model_always_animate, v12, v13);
  common::tools::HashUtils::appendHash(this->culling_model_always_animate, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->add_endure >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->add_endure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->add_endure);
  }
  common::tools::HashUtils::appendHash(this->add_endure, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->mass_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mass_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->mass_ratio);
  }
  common::tools::HashUtils::appendHash(this->mass_ratio, (int32_t *)(v2 + 32));
  VecHashValue = data::getVecHashValue(&this->reset_animator_trigger_on_enter);
  common::tools::HashUtils::appendHash(VecHashValue, (int32_t *)(v2 + 32));
  v15 = data::getVecHashValue(&this->reset_animator_trigger_on_exit);
  common::tools::HashUtils::appendHash(v15, (int32_t *)(v2 + 32));
  v16 = data::getVecHashValue(&this->set_animator_boolean);
  common::tools::HashUtils::appendHash(v16, (int32_t *)(v2 + 32));
  v17 = data::getVecHashValue(&this->set_animator_float);
  common::tools::HashUtils::appendHash(v17, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->enable_rag_doll >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->enable_rag_doll, v2 + 32, &this->enable_rag_doll);
  common::tools::HashUtils::appendHash(this->enable_rag_doll, (int32_t *)(v2 + 32));
  v18 = ((_BYTE)this - 39) & 7;
  v19 = (*(_BYTE *)(((unsigned __int64)&this->need_face_to_anim_param >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v18 >= *(_BYTE *)(((unsigned __int64)&this->need_face_to_anim_param >> 3) + 0x7FFF8000));
  if ( (_BYTE)v19 )
    __asan_report_load1(&this->need_face_to_anim_param, v18, v19);
  common::tools::HashUtils::appendHash(this->need_face_to_anim_param, (int32_t *)(v2 + 32));
  v20 = ((_BYTE)this - 38) & 7;
  v21 = (*(_BYTE *)(((unsigned __int64)&this->enable_ccd >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v20 >= *(_BYTE *)(((unsigned __int64)&this->enable_ccd >> 3) + 0x7FFF8000));
  if ( (_BYTE)v21 )
    __asan_report_load1(&this->enable_ccd, v20, v21);
  common::tools::HashUtils::appendHash(this->enable_ccd, (int32_t *)(v2 + 32));
  v22 = ((_BYTE)this - 37) & 7;
  v23 = (*(_BYTE *)(((unsigned __int64)&this->handle_animator_state_immediately >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v22 >= *(_BYTE *)(((unsigned __int64)&this->handle_animator_state_immediately >> 3) + 0x7FFF8000));
  if ( (_BYTE)v23 )
    __asan_report_load1(&this->handle_animator_state_immediately, v22, v23);
  common::tools::HashUtils::appendHash(this->handle_animator_state_immediately, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v25 == (char *)v2 )
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

// Line 999: range 00000000115FBF9E-00000000115FD1E1
bool __cdecl data::ConfigStateSubEquip::fromJson(data::ConfigStateSubEquip *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  data::ConfigEquipReattachList *p_sub_equip_reattach; // rsi
  bool v7; // bl
  const Json::Value *battou_all_sub_on_start_ptr; // [rsp+18h] [rbp-478h]
  const Json::Value *sheathe_all_sub_on_start_ptr; // [rsp+20h] [rbp-470h]
  const Json::Value *sheathe_all_sub_on_end_ptr; // [rsp+28h] [rbp-468h]
  const Json::Value *battou_sub_on_start_ptr; // [rsp+30h] [rbp-460h]
  const Json::Value *sheathe_sub_on_start_ptr; // [rsp+38h] [rbp-458h]
  const Json::Value *sheathe_sub_on_end_ptr; // [rsp+40h] [rbp-450h]
  const Json::Value *sub_equip_reattach_ptr; // [rsp+48h] [rbp-448h]
  char v17[1088]; // [rsp+50h] [rbp-440h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1056LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "21 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <"
                        "unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <u"
                        "nknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigStateSubEquip::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862724] = -234753535;
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
  v4[536862752] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 160),
    "battouAllSubOnStart",
    (const std::allocator<char> *)(v2 + 48));
  battou_all_sub_on_start_ptr = jsonValueFind(jval, (const std::string *)(v2 + 160));
  std::string::~string((void *)(v2 + 160));
  *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( battou_all_sub_on_start_ptr && !fromJson<bool>(battou_all_sub_on_start_ptr, &this->battou_all_sub_on_start) )
  {
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
      "fromJson",
      1009);
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      (common::milog::MiLogStream *const)(v2 + 224),
      (const char (*)[41])"fromJson for: battouAllSubOnStart fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
    v5 = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 288),
      "sheatheAllSubOnStart",
      (const std::allocator<char> *)(v2 + 64));
    sheathe_all_sub_on_start_ptr = jsonValueFind(jval, (const std::string *)(v2 + 288));
    std::string::~string((void *)(v2 + 288));
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( sheathe_all_sub_on_start_ptr && !fromJson<bool>(sheathe_all_sub_on_start_ptr, &this->sheathe_all_sub_on_start) )
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
        "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
        "fromJson",
        1021);
      common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
        (common::milog::MiLogStream *const)(v2 + 352),
        (const char (*)[42])"fromJson for: sheatheAllSubOnStart fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
      v5 = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 416),
        "sheatheAllSubOnEnd",
        (const std::allocator<char> *)(v2 + 80));
      sheathe_all_sub_on_end_ptr = jsonValueFind(jval, (const std::string *)(v2 + 416));
      std::string::~string((void *)(v2 + 416));
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( sheathe_all_sub_on_end_ptr && !fromJson<bool>(sheathe_all_sub_on_end_ptr, &this->sheathe_all_sub_on_end) )
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
          3u,
          "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
          "fromJson",
          1033);
        common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
          (common::milog::MiLogStream *const)(v2 + 480),
          (const char (*)[40])"fromJson for: sheatheAllSubOnEnd fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
        v5 = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 544),
          "battouSubOnStart",
          (const std::allocator<char> *)(v2 + 96));
        battou_sub_on_start_ptr = jsonValueFind(jval, (const std::string *)(v2 + 544));
        std::string::~string((void *)(v2 + 544));
        *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( battou_sub_on_start_ptr && !data::vecFromJson(battou_sub_on_start_ptr, &this->battou_sub_on_start) )
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
            "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
            "fromJson",
            1045);
          common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
            (common::milog::MiLogStream *const)(v2 + 608),
            (const char (*)[38])"fromJson for: battouSubOnStart fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
          v5 = 0;
        }
        else
        {
          *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 112);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 672),
            "sheatheSubOnStart",
            (const std::allocator<char> *)(v2 + 112));
          sheathe_sub_on_start_ptr = jsonValueFind(jval, (const std::string *)(v2 + 672));
          std::string::~string((void *)(v2 + 672));
          *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( sheathe_sub_on_start_ptr && !data::vecFromJson(sheathe_sub_on_start_ptr, &this->sheathe_sub_on_start) )
          {
            *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 736) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 736, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 736),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
              "fromJson",
              1057);
            common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              (common::milog::MiLogStream *const)(v2 + 736),
              (const char (*)[39])"fromJson for: sheatheSubOnStart fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 736));
            v5 = 0;
          }
          else
          {
            *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 128);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 800),
              "sheatheSubOnEnd",
              (const std::allocator<char> *)(v2 + 128));
            sheathe_sub_on_end_ptr = jsonValueFind(jval, (const std::string *)(v2 + 800));
            std::string::~string((void *)(v2 + 800));
            *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 128);
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
            if ( sheathe_sub_on_end_ptr && !data::vecFromJson(sheathe_sub_on_end_ptr, &this->sheathe_sub_on_end) )
            {
              *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 864) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 895) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 895) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 864, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 864),
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
                "fromJson",
                1069);
              common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                (common::milog::MiLogStream *const)(v2 + 864),
                (const char (*)[37])"fromJson for: sheatheSubOnEnd fails!");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 864));
              v5 = 0;
            }
            else
            {
              *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 144);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 928),
                "subEquipReattach",
                (const std::allocator<char> *)(v2 + 144));
              p_sub_equip_reattach = (data::ConfigEquipReattachList *)(v2 + 928);
              sub_equip_reattach_ptr = jsonValueFind(jval, (const std::string *)(v2 + 928));
              std::string::~string((void *)(v2 + 928));
              *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 144);
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
              if ( sub_equip_reattach_ptr
                && (p_sub_equip_reattach = &this->sub_equip_reattach,
                    !data::vecFromJson(sub_equip_reattach_ptr, &this->sub_equip_reattach)) )
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
                  3u,
                  "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
                  "fromJson",
                  1081);
                common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                  (common::milog::MiLogStream *const)(v2 + 992),
                  (const char (*)[38])"fromJson for: subEquipReattach fails!");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 992));
                v5 = 0;
              }
              else
              {
                if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
                  __asan_report_store1(&this->is_json_loaded, p_sub_equip_reattach, &this->is_json_loaded);
                this->is_json_loaded = 1;
                v5 = 1;
              }
            }
          }
        }
      }
    }
  }
  v7 = v5;
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8058) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8068) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8078) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8080) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1056LL, v17);
  }
  return v7;
};

// Line 1089: range 00000000115FD1E2-00000000115FD467
int32_t __cdecl data::ConfigStateSubEquip::getHashValue(const data::ConfigStateSubEquip *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  int32_t VecHashValue; // eax
  int32_t v10; // eax
  int32_t v11; // eax
  int32_t v12; // eax
  int32_t result; // eax
  char v14[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1090";
  *(_QWORD *)(v2 + 16) = data::ConfigStateSubEquip::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(this, v1, this);
  common::tools::HashUtils::appendHash(this->battou_all_sub_on_start, (int32_t *)(v2 + 32));
  v5 = ((_BYTE)this + 1) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->sheathe_all_sub_on_start >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->sheathe_all_sub_on_start >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(&this->sheathe_all_sub_on_start, v5, v6);
  common::tools::HashUtils::appendHash(this->sheathe_all_sub_on_start, (int32_t *)(v2 + 32));
  v7 = ((_BYTE)this + 2) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->sheathe_all_sub_on_end >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->sheathe_all_sub_on_end >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_load1(&this->sheathe_all_sub_on_end, v7, v8);
  common::tools::HashUtils::appendHash(this->sheathe_all_sub_on_end, (int32_t *)(v2 + 32));
  VecHashValue = data::getVecHashValue(&this->battou_sub_on_start);
  common::tools::HashUtils::appendHash(VecHashValue, (int32_t *)(v2 + 32));
  v10 = data::getVecHashValue(&this->sheathe_sub_on_start);
  common::tools::HashUtils::appendHash(v10, (int32_t *)(v2 + 32));
  v11 = data::getVecHashValue(&this->sheathe_sub_on_end);
  common::tools::HashUtils::appendHash(v11, (int32_t *)(v2 + 32));
  v12 = data::getVecHashValue(&this->sub_equip_reattach);
  common::tools::HashUtils::appendHash(v12, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v14 == (char *)v2 )
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

// Line 1102: range 00000000115FD468-00000000115FD6C7
const char *__cdecl data::enumValToStr(data::MoveControlType e)
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
    if ( e == Strafe )
    {
      result = "Strafe";
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
        "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
        "enumValToStr",
        1110);
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
      result = (const char *)&unk_1A7E0BE0;
    }
  }
  else
  {
    result = "Normal";
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

// Line 1116: range 00000000115FD6C8-00000000115FDEFF
bool __cdecl data::enumStrToVal(const std::string *s, data::MoveControlType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::MoveControlType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::MoveControlType> >::pointer v11; // rax
  data::MoveControlType second; // ecx
  char v13; // dl
  data::MoveControlType *ea; // [rsp+10h] [rbp-1E0h]
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
  *(_QWORD *)(v2 + 8) = "9 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 8 7 it:1127 144 8 9 <u"
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
      "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
      "enumStrToVal",
      1119);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 176),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::MoveControlType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::MoveControlType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::MoveControlType>::pair<char const(&)[7],data::MoveControlType,true>(
        (std::pair<const std::string,data::MoveControlType> *const)(v2 + 304),
        (const char (*)[7])"Normal",
        (data::MoveControlType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "Normal");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::MoveControlType>::pair<char const(&)[7],data::MoveControlType,true>(
        (std::pair<const std::string,data::MoveControlType> *const)(v2 + 344),
        (const char (*)[7])"Strafe",
        (data::MoveControlType *)(v2 + 96));
      std::allocator<std::pair<std::string const,data::MoveControlType>>::allocator((std::allocator<std::pair<const std::string,data::MoveControlType> > *const)(v2 + 64));
      std::map<std::string,data::MoveControlType>::map(
        &data::enumStrToVal(std::string const&,data::MoveControlType &)::m,
        (std::initializer_list<std::pair<const std::string,data::MoveControlType> >)__PAIR128__(2LL, v2 + 304),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::MoveControlType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::MoveControlType &)::m);
      e = (data::MoveControlType *)&data::enumStrToVal(std::string const&,data::MoveControlType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::MoveControlType>::~map,
        &data::enumStrToVal(std::string const&,data::MoveControlType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::MoveControlType>>::~allocator((std::allocator<std::pair<const std::string,data::MoveControlType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::MoveControlType> *)(v2 + 384);
            i != (std::pair<const std::string,data::MoveControlType> *)(v2 + 304);
            std::pair<std::string const,data::MoveControlType>::~pair(i) )
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
    *(std::map<std::string,data::MoveControlType>::iterator *)(v2 + 112) = std::map<std::string,data::MoveControlType>::find(
                                                                             &data::enumStrToVal(std::string const&,data::MoveControlType &)::m,
                                                                             s);
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 144, s);
    *(std::map<std::string,data::MoveControlType>::iterator *)(v2 + 144) = std::map<std::string,data::MoveControlType>::end(&data::enumStrToVal(std::string const&,data::MoveControlType &)::m);
    v8 = (char *)(v2 + 144);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::MoveControlType> >::_Self *)(v2 + 112),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::MoveControlType> >::_Self *)(v2 + 144));
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
        "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
        "enumStrToVal",
        1130);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 240),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::MoveControlType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::MoveControlType> > *const)(v2 + 112));
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

// Line 1138: range 00000000115FDF00-00000000115FDF2F
const char *__cdecl data::getDescription(data::MoveControlType e)
{
  if ( e == Normal_19 )
    return (const char *)&unk_1A807E60;
  if ( e == Strafe )
    return (const char *)&unk_1A807EA0;
  return "unknown enum value!";
};

// Line 1154: range 00000000116941BC-00000000116943FD
void __cdecl data::ConfigAvatarStateIDInfoRegister::ConfigAvatarStateIDInfoRegister(
        data::ConfigAvatarStateIDInfoRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigBaseStateIDInfo> *v4; // rax
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
  *(_QWORD *)(v1 + 16) = data::ConfigAvatarStateIDInfoRegister::ConfigAvatarStateIDInfoRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigAvatarStateIDInfo>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigAvatarStateIDInfo",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigBaseStateIDInfo>>::operator[](
         &data::g_ConfigBaseStateIDInfoMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigBaseStateIDInfo>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigBaseStateIDInfo>::operator=<data::ConfigAvatarStateIDInfo>(
    v4,
    (std::shared_ptr<data::ConfigAvatarStateIDInfo> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigAvatarStateIDInfo>::~shared_ptr((std::shared_ptr<data::ConfigAvatarStateIDInfo> *const)(v1 + 64));
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

// Line 1157: range 00000000115FDF30-00000000115FEBDC
void __cdecl data::ConfigAvatarStateIDInfo::foreachMember(
        data::ConfigAvatarStateIDInfo *const this,
        std::function<void(std::any&)> *p_func)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5[848]; // [rsp+10h] [rbp-350h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(800LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "23 32 16 20 camera_type_any:1159 64 16 21 camera_param_any:1161 96 16 26 can_change_avatar_any:1"
                        "163 128 16 27 can_support_change_any:1165 160 16 27 action_panel_state_any:1167 192 16 23 equip_"
                        "reattach_any:1169 224 16 26 jump_cancel_start_any:1171 256 16 24 jump_cancel_end_any:1173 288 16"
                        " 28 sprint_cancel_start_any:1175 320 16 26 sprint_cancel_end_any:1177 352 16 25 fly_cancel_start"
                        "_any:1179 384 16 23 fly_cancel_end_any:1181 416 16 35 animator_trigger_on_landed_any:1183 448 16"
                        " 24 battou_on_start_any:1185 480 16 40 battou_on_start_normalized_time_any:1187 512 16 25 sheath"
                        "e_on_start_any:1189 544 16 23 sheathe_on_end_any:1191 576 16 26 ignore_pre_sheath_any:1193 608 1"
                        "6 31 enable_combat_to_climb_any:1195 640 16 26 enable_lean_layer_any:1197 672 16 38 enable_hit_a"
                        "ir_retreat_in_air_any:1199 704 16 25 sub_equip_config_any:1201 736 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigAvatarStateIDInfo::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
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
  v4[536862744] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 736), p_func);
  data::ConfigNormalStateIDInfo::foreachMember(
    (data::ConfigNormalStateIDInfo *const)this,
    (std::function<void(std::any&)> *)(v2 + 736));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 736));
  *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<data::StateCameraType &,data::StateCameraType,std::any::_Manager_internal<data::StateCameraType>,true,true>(
    (std::any *const)(v2 + 32),
    &this->camera_type);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 32));
  *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
  std::any::any<data::ConfigStateCameraParam &,data::ConfigStateCameraParam,std::any::_Manager_external<data::ConfigStateCameraParam>,true,true>(
    (std::any *const)(v2 + 64),
    &this->camera_param);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 64));
  *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  std::any::any<std::vector<data::ConfigCanChangeAvatar> &,std::vector<data::ConfigCanChangeAvatar>,std::any::_Manager_external<std::vector<data::ConfigCanChangeAvatar>>,true,true>(
    (std::any *const)(v2 + 96),
    &this->can_change_avatar);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 96));
  *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(
    (std::any *const)(v2 + 128),
    &this->can_support_change);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 128));
  *(_WORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
  std::any::any<data::ActionPanelState &,data::ActionPanelState,std::any::_Manager_internal<data::ActionPanelState>,true,true>(
    (std::any *const)(v2 + 160),
    &this->action_panel_state);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 160));
  *(_WORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
  std::any::any<std::vector<data::ConfigEquipReattach> &,std::vector<data::ConfigEquipReattach>,std::any::_Manager_external<std::vector<data::ConfigEquipReattach>>,true,true>(
    (std::any *const)(v2 + 192),
    &this->equip_reattach);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 192));
  *(_WORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>(
    (std::any *const)(v2 + 224),
    &this->jump_cancel_start);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 224));
  *(_WORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>(
    (std::any *const)(v2 + 256),
    &this->jump_cancel_end);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 256));
  *(_WORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>(
    (std::any *const)(v2 + 288),
    &this->sprint_cancel_start);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 288));
  *(_WORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>(
    (std::any *const)(v2 + 320),
    &this->sprint_cancel_end);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 320));
  *(_WORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>(
    (std::any *const)(v2 + 352),
    &this->fly_cancel_start);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 352));
  *(_WORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>(
    (std::any *const)(v2 + 384),
    &this->fly_cancel_end);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 384));
  *(_WORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
  std::any::any<std::string &,std::string,std::any::_Manager_external<std::string>,true,true>(
    (std::any *const)(v2 + 416),
    &this->animator_trigger_on_landed);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 416));
  *(_WORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(
    (std::any *const)(v2 + 448),
    &this->battou_on_start);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 448));
  *(_WORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>(
    (std::any *const)(v2 + 480),
    &this->battou_on_start_normalized_time);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 480));
  *(_WORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(
    (std::any *const)(v2 + 512),
    &this->sheathe_on_start);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 512));
  *(_WORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(
    (std::any *const)(v2 + 544),
    &this->sheathe_on_end);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 544));
  *(_WORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(
    (std::any *const)(v2 + 576),
    &this->ignore_pre_sheath);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 576));
  *(_WORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(
    (std::any *const)(v2 + 608),
    &this->enable_combat_to_climb);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 608));
  *(_WORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(
    (std::any *const)(v2 + 640),
    &this->enable_lean_layer);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 640));
  *(_WORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(
    (std::any *const)(v2 + 672),
    &this->enable_hit_air_retreat_in_air);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 672));
  *(_WORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
  std::any::any<data::ConfigStateSubEquip &,data::ConfigStateSubEquip,std::any::_Manager_external<data::ConfigStateSubEquip>,true,true>(
    (std::any *const)(v2 + 704),
    &this->sub_equip_config);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 704));
  std::any::~any((std::any *const)(v2 + 704));
  std::any::~any((std::any *const)(v2 + 672));
  std::any::~any((std::any *const)(v2 + 640));
  std::any::~any((std::any *const)(v2 + 608));
  std::any::~any((std::any *const)(v2 + 576));
  std::any::~any((std::any *const)(v2 + 544));
  std::any::~any((std::any *const)(v2 + 512));
  std::any::~any((std::any *const)(v2 + 480));
  std::any::~any((std::any *const)(v2 + 448));
  std::any::~any((std::any *const)(v2 + 416));
  std::any::~any((std::any *const)(v2 + 384));
  std::any::~any((std::any *const)(v2 + 352));
  std::any::~any((std::any *const)(v2 + 320));
  std::any::~any((std::any *const)(v2 + 288));
  std::any::~any((std::any *const)(v2 + 256));
  std::any::~any((std::any *const)(v2 + 224));
  std::any::~any((std::any *const)(v2 + 192));
  std::any::~any((std::any *const)(v2 + 160));
  std::any::~any((std::any *const)(v2 + 128));
  std::any::~any((std::any *const)(v2 + 96));
  std::any::~any((std::any *const)(v2 + 64));
  std::any::~any((std::any *const)(v2 + 32));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF805C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 100) & 0xFFFFFFF8) >> 3));
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8060) = -168430091;
  }
};

// Line 1206: range 00000000115FEBDE-00000000115FECEE
std::shared_ptr<data::ConfigBaseStateIDInfo> __cdecl data::ConfigAvatarStateIDInfo::clone(
        data::ConfigAvatarStateIDInfo *const this)
{
  data::ConfigAvatarStateIDInfo *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigBaseStateIDInfo> result; // rax
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
  *(_QWORD *)(v2 + 16) = data::ConfigAvatarStateIDInfo::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigAvatarStateIDInfo,data::ConfigAvatarStateIDInfo&>(
    (common::tools::perf::allocator<data::ConfigAvatarStateIDInfo,data::ConfigAvatarStateIDInfo> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigBaseStateIDInfo>::shared_ptr<data::ConfigAvatarStateIDInfo,void>(
    (std::shared_ptr<data::ConfigBaseStateIDInfo> *const)this,
    (std::shared_ptr<data::ConfigAvatarStateIDInfo> *)(v2 + 32));
  std::shared_ptr<data::ConfigAvatarStateIDInfo>::~shared_ptr((std::shared_ptr<data::ConfigAvatarStateIDInfo> *const)(v2 + 32));
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

// Line 1210: range 00000000115FECF0-00000000115FED33
data::ConfigAvatarStateIDInfoPtr __cdecl data::ConfigAvatarStateIDInfoFactory::create(
        data::ConfigAvatarStateIDInfoFactory *const this)
{
  data::ConfigAvatarStateIDInfoPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigAvatarStateIDInfo>();
  result._M_ptr = (std::__shared_ptr<data::ConfigAvatarStateIDInfo,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1212: range 00000000115FED34-0000000011602850
bool __cdecl data::ConfigAvatarStateIDInfo::fromJson(
        data::ConfigAvatarStateIDInfo *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  bool v6; // r15
  bool v7; // r15
  __int64 v8; // rsi
  __int64 v9; // rdx
  bool v10; // bl
  Json::Value *camera_type_ptr; // [rsp+10h] [rbp-E20h]
  const Json::Value *camera_param_ptr; // [rsp+18h] [rbp-E18h]
  const Json::Value *can_change_avatar_ptr; // [rsp+20h] [rbp-E10h]
  const Json::Value *can_support_change_ptr; // [rsp+28h] [rbp-E08h]
  Json::Value *action_panel_state_ptr; // [rsp+30h] [rbp-E00h]
  const Json::Value *equip_reattach_ptr; // [rsp+38h] [rbp-DF8h]
  const Json::Value *jump_cancel_start_ptr; // [rsp+40h] [rbp-DF0h]
  const Json::Value *jump_cancel_end_ptr; // [rsp+48h] [rbp-DE8h]
  const Json::Value *sprint_cancel_start_ptr; // [rsp+50h] [rbp-DE0h]
  const Json::Value *sprint_cancel_end_ptr; // [rsp+58h] [rbp-DD8h]
  const Json::Value *fly_cancel_start_ptr; // [rsp+60h] [rbp-DD0h]
  const Json::Value *fly_cancel_end_ptr; // [rsp+68h] [rbp-DC8h]
  const Json::Value *animator_trigger_on_landed_ptr; // [rsp+70h] [rbp-DC0h]
  const Json::Value *battou_on_start_ptr; // [rsp+78h] [rbp-DB8h]
  const Json::Value *battou_on_start_normalized_time_ptr; // [rsp+80h] [rbp-DB0h]
  const Json::Value *sheathe_on_start_ptr; // [rsp+88h] [rbp-DA8h]
  const Json::Value *sheathe_on_end_ptr; // [rsp+90h] [rbp-DA0h]
  const Json::Value *ignore_pre_sheath_ptr; // [rsp+98h] [rbp-D98h]
  const Json::Value *enable_combat_to_climb_ptr; // [rsp+A0h] [rbp-D90h]
  const Json::Value *enable_lean_layer_ptr; // [rsp+A8h] [rbp-D88h]
  const Json::Value *enable_hit_air_retreat_in_air_ptr; // [rsp+B0h] [rbp-D80h]
  const Json::Value *sub_equip_config_ptr; // [rsp+B8h] [rbp-D78h]
  char v34[3440]; // [rsp+C0h] [rbp-D70h] BYREF

  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(3392LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "69 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unkno"
                        "wn> 208 1 9 <unknown> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 28"
                        "8 1 9 <unknown> 304 1 9 <unknown> 320 1 9 <unknown> 336 1 9 <unknown> 352 1 9 <unknown> 368 1 9 "
                        "<unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <"
                        "unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 32 9 <unknown> 896 32 9 <unknown> 960 32 9 <u"
                        "nknown> 1024 32 9 <unknown> 1088 32 9 <unknown> 1152 32 9 <unknown> 1216 32 9 <unknown> 1280 32 "
                        "9 <unknown> 1344 32 9 <unknown> 1408 32 9 <unknown> 1472 32 9 <unknown> 1536 32 9 <unknown> 1600"
                        " 32 9 <unknown> 1664 32 9 <unknown> 1728 32 9 <unknown> 1792 32 9 <unknown> 1856 32 9 <unknown> "
                        "1920 32 9 <unknown> 1984 32 9 <unknown> 2048 32 9 <unknown> 2112 32 9 <unknown> 2176 32 9 <unkno"
                        "wn> 2240 32 9 <unknown> 2304 32 9 <unknown> 2368 32 9 <unknown> 2432 32 9 <unknown> 2496 32 9 <u"
                        "nknown> 2560 32 9 <unknown> 2624 32 9 <unknown> 2688 32 9 <unknown> 2752 32 9 <unknown> 2816 32 "
                        "9 <unknown> 2880 32 9 <unknown> 2944 32 9 <unknown> 3008 32 9 <unknown> 3072 32 9 <unknown> 3136"
                        " 32 9 <unknown> 3200 32 9 <unknown> 3264 32 9 <unknown> 3328 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigAvatarStateIDInfo::fromJson;
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
  v4[536862825] = -202116109;
  if ( !data::ConfigNormalStateIDInfo::fromJson((data::ConfigNormalStateIDInfo *const)this, jval) )
  {
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
      "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
      "fromJson",
      1215);
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
      (common::milog::MiLogStream *const)(v2 + 384),
      (const char (*)[45])"fromJson for: ConfigNormalStateIDInfo fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
    v5 = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 32);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 448),
      "cameraType",
      (const std::allocator<char> *)(v2 + 32));
    camera_type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 448));
    std::string::~string((void *)(v2 + 448));
    *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 32);
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    if ( !camera_type_ptr )
      goto LABEL_15;
    *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 512, 32LL);
    }
    Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 512), (Json::Value_0 *)camera_type_ptr);
    v6 = !data::enumStrToVal((const std::string *)(v2 + 512), &this->camera_type);
    std::string::~string((void *)(v2 + 512));
    *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
    if ( v6 )
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
        "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
        "fromJson",
        1227);
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
        (common::milog::MiLogStream *const)(v2 + 576),
        (const char (*)[32])"fromJson for: cameraType fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
      v5 = 0;
    }
    else
    {
LABEL_15:
      *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 48);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 640),
        "cameraParam",
        (const std::allocator<char> *)(v2 + 48));
      camera_param_ptr = jsonValueFind(jval, (const std::string *)(v2 + 640));
      std::string::~string((void *)(v2 + 640));
      *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 48);
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( camera_param_ptr && !data::ConfigStateCameraParam::fromJson(&this->camera_param, camera_param_ptr) )
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
          "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
          "fromJson",
          1239);
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
          (common::milog::MiLogStream *const)(v2 + 704),
          (const char (*)[33])"fromJson for: cameraParam fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
        v5 = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 64);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 768),
          "canChangeAvatar",
          (const std::allocator<char> *)(v2 + 64));
        can_change_avatar_ptr = jsonValueFind(jval, (const std::string *)(v2 + 768));
        std::string::~string((void *)(v2 + 768));
        *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 64);
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
        if ( can_change_avatar_ptr && !data::vecFromJson(can_change_avatar_ptr, &this->can_change_avatar) )
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
            "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
            "fromJson",
            1251);
          common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
            (common::milog::MiLogStream *const)(v2 + 832),
            (const char (*)[37])"fromJson for: canChangeAvatar fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 832));
          v5 = 0;
        }
        else
        {
          *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 80);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 896),
            "canSupportChange",
            (const std::allocator<char> *)(v2 + 80));
          can_support_change_ptr = jsonValueFind(jval, (const std::string *)(v2 + 896));
          std::string::~string((void *)(v2 + 896));
          *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 80);
          *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
          if ( can_support_change_ptr && !fromJson<bool>(can_support_change_ptr, &this->can_support_change) )
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
              "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
              "fromJson",
              1263);
            common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              (common::milog::MiLogStream *const)(v2 + 960),
              (const char (*)[38])"fromJson for: canSupportChange fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 960));
            v5 = 0;
          }
          else
          {
            *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 96);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1024),
              "actionPanelState",
              (const std::allocator<char> *)(v2 + 96));
            action_panel_state_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 1024));
            std::string::~string((void *)(v2 + 1024));
            *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 96);
            *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
            if ( !action_panel_state_ptr )
              goto LABEL_37;
            *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 1088) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 1119) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 1119) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 1088, 32LL);
            }
            Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 1088), (Json::Value_0 *)action_panel_state_ptr);
            v7 = !data::enumStrToVal((const std::string *)(v2 + 1088), &this->action_panel_state);
            std::string::~string((void *)(v2 + 1088));
            *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -117901064;
            if ( v7 )
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
                3u,
                "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
                "fromJson",
                1275);
              common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                (common::milog::MiLogStream *const)(v2 + 1152),
                (const char (*)[38])"fromJson for: actionPanelState fails!");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1152));
              v5 = 0;
            }
            else
            {
LABEL_37:
              *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 112);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1216),
                "equipReattach",
                (const std::allocator<char> *)(v2 + 112));
              equip_reattach_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1216));
              std::string::~string((void *)(v2 + 1216));
              *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 112);
              *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
              if ( equip_reattach_ptr && !data::vecFromJson(equip_reattach_ptr, &this->equip_reattach) )
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
                  "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
                  "fromJson",
                  1287);
                common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                  (common::milog::MiLogStream *const)(v2 + 1280),
                  (const char (*)[35])"fromJson for: equipReattach fails!");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1280));
                v5 = 0;
              }
              else
              {
                *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 128);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1344),
                  "jumpCancelStart",
                  (const std::allocator<char> *)(v2 + 128));
                jump_cancel_start_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1344));
                std::string::~string((void *)(v2 + 1344));
                *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 128);
                *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
                if ( jump_cancel_start_ptr && !fromJson<float>(jump_cancel_start_ptr, &this->jump_cancel_start) )
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
                    "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
                    "fromJson",
                    1299);
                  common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                    (common::milog::MiLogStream *const)(v2 + 1408),
                    (const char (*)[37])"fromJson for: jumpCancelStart fails!");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1408));
                  v5 = 0;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 144);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1472),
                    "jumpCancelEnd",
                    (const std::allocator<char> *)(v2 + 144));
                  jump_cancel_end_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1472));
                  std::string::~string((void *)(v2 + 1472));
                  *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 144);
                  *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
                  if ( jump_cancel_end_ptr && !fromJson<float>(jump_cancel_end_ptr, &this->jump_cancel_end) )
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
                      "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
                      "fromJson",
                      1311);
                    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                      (common::milog::MiLogStream *const)(v2 + 1536),
                      (const char (*)[35])"fromJson for: jumpCancelEnd fails!");
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1536));
                    v5 = 0;
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 1600) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 160);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 1600),
                      "sprintCancelStart",
                      (const std::allocator<char> *)(v2 + 160));
                    sprint_cancel_start_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1600));
                    std::string::~string((void *)(v2 + 1600));
                    *(_DWORD *)(((v2 + 1600) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 160);
                    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                    if ( sprint_cancel_start_ptr
                      && !fromJson<float>(sprint_cancel_start_ptr, &this->sprint_cancel_start) )
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
                        "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
                        "fromJson",
                        1323);
                      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                        (common::milog::MiLogStream *const)(v2 + 1664),
                        (const char (*)[39])"fromJson for: sprintCancelStart fails!");
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1664));
                      v5 = 0;
                    }
                    else
                    {
                      *(_DWORD *)(((v2 + 1728) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 176);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 1728),
                        "sprintCancelEnd",
                        (const std::allocator<char> *)(v2 + 176));
                      sprint_cancel_end_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1728));
                      std::string::~string((void *)(v2 + 1728));
                      *(_DWORD *)(((v2 + 1728) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 176);
                      *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                      if ( sprint_cancel_end_ptr && !fromJson<float>(sprint_cancel_end_ptr, &this->sprint_cancel_end) )
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
                          "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
                          "fromJson",
                          1335);
                        common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                          (common::milog::MiLogStream *const)(v2 + 1792),
                          (const char (*)[37])"fromJson for: sprintCancelEnd fails!");
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1792));
                        v5 = 0;
                      }
                      else
                      {
                        *(_DWORD *)(((v2 + 1856) >> 3) + 0x7FFF8000) = 0;
                        *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 192);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 1856),
                          "flyCancelStart",
                          (const std::allocator<char> *)(v2 + 192));
                        fly_cancel_start_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1856));
                        std::string::~string((void *)(v2 + 1856));
                        *(_DWORD *)(((v2 + 1856) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 192);
                        *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                        if ( fly_cancel_start_ptr && !fromJson<float>(fly_cancel_start_ptr, &this->fly_cancel_start) )
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
                            "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
                            "fromJson",
                            1347);
                          common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                            (common::milog::MiLogStream *const)(v2 + 1920),
                            (const char (*)[36])"fromJson for: flyCancelStart fails!");
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1920));
                          v5 = 0;
                        }
                        else
                        {
                          *(_DWORD *)(((v2 + 1984) >> 3) + 0x7FFF8000) = 0;
                          *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
                          std::allocator<char>::allocator(v2 + 208);
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)(v2 + 1984),
                            "flyCancelEnd",
                            (const std::allocator<char> *)(v2 + 208));
                          fly_cancel_end_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1984));
                          std::string::~string((void *)(v2 + 1984));
                          *(_DWORD *)(((v2 + 1984) >> 3) + 0x7FFF8000) = -117901064;
                          std::allocator<char>::~allocator(v2 + 208);
                          *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                          if ( fly_cancel_end_ptr && !fromJson<float>(fly_cancel_end_ptr, &this->fly_cancel_end) )
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
                              "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
                              "fromJson",
                              1359);
                            common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                              (common::milog::MiLogStream *const)(v2 + 2048),
                              (const char (*)[34])"fromJson for: flyCancelEnd fails!");
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2048));
                            v5 = 0;
                          }
                          else
                          {
                            *(_DWORD *)(((v2 + 2112) >> 3) + 0x7FFF8000) = 0;
                            *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
                            std::allocator<char>::allocator(v2 + 224);
                            std::string::basic_string<std::allocator<char>>(
                              (std::string *const)(v2 + 2112),
                              "animatorTriggerOnLanded",
                              (const std::allocator<char> *)(v2 + 224));
                            animator_trigger_on_landed_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2112));
                            std::string::~string((void *)(v2 + 2112));
                            *(_DWORD *)(((v2 + 2112) >> 3) + 0x7FFF8000) = -117901064;
                            std::allocator<char>::~allocator(v2 + 224);
                            *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                            if ( animator_trigger_on_landed_ptr
                              && !fromJson<std::string>(
                                    animator_trigger_on_landed_ptr,
                                    &this->animator_trigger_on_landed) )
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
                                "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
                                "fromJson",
                                1371);
                              common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                                (common::milog::MiLogStream *const)(v2 + 2176),
                                (const char (*)[45])"fromJson for: animatorTriggerOnLanded fails!");
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2176));
                              v5 = 0;
                            }
                            else
                            {
                              *(_DWORD *)(((v2 + 2240) >> 3) + 0x7FFF8000) = 0;
                              *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
                              std::allocator<char>::allocator(v2 + 240);
                              std::string::basic_string<std::allocator<char>>(
                                (std::string *const)(v2 + 2240),
                                "battouOnStart",
                                (const std::allocator<char> *)(v2 + 240));
                              battou_on_start_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2240));
                              std::string::~string((void *)(v2 + 2240));
                              *(_DWORD *)(((v2 + 2240) >> 3) + 0x7FFF8000) = -117901064;
                              std::allocator<char>::~allocator(v2 + 240);
                              *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                              if ( battou_on_start_ptr && !fromJson<bool>(battou_on_start_ptr, &this->battou_on_start) )
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
                                  "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
                                  "fromJson",
                                  1383);
                                common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                                  (common::milog::MiLogStream *const)(v2 + 2304),
                                  (const char (*)[35])"fromJson for: battouOnStart fails!");
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2304));
                                v5 = 0;
                              }
                              else
                              {
                                *(_DWORD *)(((v2 + 2368) >> 3) + 0x7FFF8000) = 0;
                                *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
                                std::allocator<char>::allocator(v2 + 256);
                                std::string::basic_string<std::allocator<char>>(
                                  (std::string *const)(v2 + 2368),
                                  "battouOnStartNormalizedTime",
                                  (const std::allocator<char> *)(v2 + 256));
                                battou_on_start_normalized_time_ptr = jsonValueFind(
                                                                        jval,
                                                                        (const std::string *)(v2 + 2368));
                                std::string::~string((void *)(v2 + 2368));
                                *(_DWORD *)(((v2 + 2368) >> 3) + 0x7FFF8000) = -117901064;
                                std::allocator<char>::~allocator(v2 + 256);
                                *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                                if ( battou_on_start_normalized_time_ptr
                                  && !fromJson<float>(
                                        battou_on_start_normalized_time_ptr,
                                        &this->battou_on_start_normalized_time) )
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
                                    "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
                                    "fromJson",
                                    1395);
                                  common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                                    (common::milog::MiLogStream *const)(v2 + 2432),
                                    (const char (*)[49])"fromJson for: battouOnStartNormalizedTime fails!");
                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2432));
                                  v5 = 0;
                                }
                                else
                                {
                                  *(_DWORD *)(((v2 + 2496) >> 3) + 0x7FFF8000) = 0;
                                  *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
                                  std::allocator<char>::allocator(v2 + 272);
                                  std::string::basic_string<std::allocator<char>>(
                                    (std::string *const)(v2 + 2496),
                                    "sheatheOnStart",
                                    (const std::allocator<char> *)(v2 + 272));
                                  sheathe_on_start_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2496));
                                  std::string::~string((void *)(v2 + 2496));
                                  *(_DWORD *)(((v2 + 2496) >> 3) + 0x7FFF8000) = -117901064;
                                  std::allocator<char>::~allocator(v2 + 272);
                                  *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                                  if ( sheathe_on_start_ptr
                                    && !fromJson<bool>(sheathe_on_start_ptr, &this->sheathe_on_start) )
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
                                      "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
                                      "fromJson",
                                      1407);
                                    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                                      (common::milog::MiLogStream *const)(v2 + 2560),
                                      (const char (*)[36])"fromJson for: sheatheOnStart fails!");
                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2560));
                                    v5 = 0;
                                  }
                                  else
                                  {
                                    *(_DWORD *)(((v2 + 2624) >> 3) + 0x7FFF8000) = 0;
                                    *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 1;
                                    std::allocator<char>::allocator(v2 + 288);
                                    std::string::basic_string<std::allocator<char>>(
                                      (std::string *const)(v2 + 2624),
                                      "sheatheOnEnd",
                                      (const std::allocator<char> *)(v2 + 288));
                                    sheathe_on_end_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2624));
                                    std::string::~string((void *)(v2 + 2624));
                                    *(_DWORD *)(((v2 + 2624) >> 3) + 0x7FFF8000) = -117901064;
                                    std::allocator<char>::~allocator(v2 + 288);
                                    *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
                                    if ( sheathe_on_end_ptr
                                      && !fromJson<bool>(sheathe_on_end_ptr, &this->sheathe_on_end) )
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
                                        "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
                                        "fromJson",
                                        1419);
                                      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                                        (common::milog::MiLogStream *const)(v2 + 2688),
                                        (const char (*)[34])"fromJson for: sheatheOnEnd fails!");
                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2688));
                                      v5 = 0;
                                    }
                                    else
                                    {
                                      *(_DWORD *)(((v2 + 2752) >> 3) + 0x7FFF8000) = 0;
                                      *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 1;
                                      std::allocator<char>::allocator(v2 + 304);
                                      std::string::basic_string<std::allocator<char>>(
                                        (std::string *const)(v2 + 2752),
                                        "ignorePreSheath",
                                        (const std::allocator<char> *)(v2 + 304));
                                      ignore_pre_sheath_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2752));
                                      std::string::~string((void *)(v2 + 2752));
                                      *(_DWORD *)(((v2 + 2752) >> 3) + 0x7FFF8000) = -117901064;
                                      std::allocator<char>::~allocator(v2 + 304);
                                      *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
                                      if ( ignore_pre_sheath_ptr
                                        && !fromJson<bool>(ignore_pre_sheath_ptr, &this->ignore_pre_sheath) )
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
                                          "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
                                          "fromJson",
                                          1431);
                                        common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                                          (common::milog::MiLogStream *const)(v2 + 2816),
                                          (const char (*)[37])"fromJson for: ignorePreSheath fails!");
                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2816));
                                        v5 = 0;
                                      }
                                      else
                                      {
                                        *(_DWORD *)(((v2 + 2880) >> 3) + 0x7FFF8000) = 0;
                                        *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 1;
                                        std::allocator<char>::allocator(v2 + 320);
                                        std::string::basic_string<std::allocator<char>>(
                                          (std::string *const)(v2 + 2880),
                                          "enableCombatToClimb",
                                          (const std::allocator<char> *)(v2 + 320));
                                        enable_combat_to_climb_ptr = jsonValueFind(
                                                                       jval,
                                                                       (const std::string *)(v2 + 2880));
                                        std::string::~string((void *)(v2 + 2880));
                                        *(_DWORD *)(((v2 + 2880) >> 3) + 0x7FFF8000) = -117901064;
                                        std::allocator<char>::~allocator(v2 + 320);
                                        *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
                                        if ( enable_combat_to_climb_ptr
                                          && !fromJson<bool>(enable_combat_to_climb_ptr, &this->enable_combat_to_climb) )
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
                                            "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
                                            "fromJson",
                                            1443);
                                          common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                                            (common::milog::MiLogStream *const)(v2 + 2944),
                                            (const char (*)[41])"fromJson for: enableCombatToClimb fails!");
                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2944));
                                          v5 = 0;
                                        }
                                        else
                                        {
                                          *(_DWORD *)(((v2 + 3008) >> 3) + 0x7FFF8000) = 0;
                                          *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 1;
                                          std::allocator<char>::allocator(v2 + 336);
                                          std::string::basic_string<std::allocator<char>>(
                                            (std::string *const)(v2 + 3008),
                                            "enableLeanLayer",
                                            (const std::allocator<char> *)(v2 + 336));
                                          enable_lean_layer_ptr = jsonValueFind(jval, (const std::string *)(v2 + 3008));
                                          std::string::~string((void *)(v2 + 3008));
                                          *(_DWORD *)(((v2 + 3008) >> 3) + 0x7FFF8000) = -117901064;
                                          std::allocator<char>::~allocator(v2 + 336);
                                          *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
                                          if ( enable_lean_layer_ptr
                                            && !fromJson<bool>(enable_lean_layer_ptr, &this->enable_lean_layer) )
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
                                              "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
                                              "fromJson",
                                              1455);
                                            common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                                              (common::milog::MiLogStream *const)(v2 + 3072),
                                              (const char (*)[37])"fromJson for: enableLeanLayer fails!");
                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3072));
                                            v5 = 0;
                                          }
                                          else
                                          {
                                            *(_DWORD *)(((v2 + 3136) >> 3) + 0x7FFF8000) = 0;
                                            *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 1;
                                            std::allocator<char>::allocator(v2 + 352);
                                            std::string::basic_string<std::allocator<char>>(
                                              (std::string *const)(v2 + 3136),
                                              "enableHitAirRetreatInAir",
                                              (const std::allocator<char> *)(v2 + 352));
                                            enable_hit_air_retreat_in_air_ptr = jsonValueFind(
                                                                                  jval,
                                                                                  (const std::string *)(v2 + 3136));
                                            std::string::~string((void *)(v2 + 3136));
                                            *(_DWORD *)(((v2 + 3136) >> 3) + 0x7FFF8000) = -117901064;
                                            std::allocator<char>::~allocator(v2 + 352);
                                            *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
                                            if ( enable_hit_air_retreat_in_air_ptr
                                              && !fromJson<bool>(
                                                    enable_hit_air_retreat_in_air_ptr,
                                                    &this->enable_hit_air_retreat_in_air) )
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
                                                "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
                                                "fromJson",
                                                1467);
                                              common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                                                (common::milog::MiLogStream *const)(v2 + 3200),
                                                (const char (*)[46])"fromJson for: enableHitAirRetreatInAir fails!");
                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3200));
                                              v5 = 0;
                                            }
                                            else
                                            {
                                              *(_DWORD *)(((v2 + 3264) >> 3) + 0x7FFF8000) = 0;
                                              *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = 1;
                                              std::allocator<char>::allocator(v2 + 368);
                                              std::string::basic_string<std::allocator<char>>(
                                                (std::string *const)(v2 + 3264),
                                                "subEquipConfig",
                                                (const std::allocator<char> *)(v2 + 368));
                                              sub_equip_config_ptr = jsonValueFind(
                                                                       jval,
                                                                       (const std::string *)(v2 + 3264));
                                              std::string::~string((void *)(v2 + 3264));
                                              *(_DWORD *)(((v2 + 3264) >> 3) + 0x7FFF8000) = -117901064;
                                              std::allocator<char>::~allocator(v2 + 368);
                                              *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
                                              if ( sub_equip_config_ptr
                                                && !data::ConfigStateSubEquip::fromJson(
                                                      &this->sub_equip_config,
                                                      sub_equip_config_ptr) )
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
                                                  "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
                                                  "fromJson",
                                                  1479);
                                                common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                                                  (common::milog::MiLogStream *const)(v2 + 3328),
                                                  (const char (*)[36])"fromJson for: subEquipConfig fails!");
                                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3328));
                                                v5 = 0;
                                              }
                                              else
                                              {
                                                v8 = ((_BYTE)this + 28) & 7;
                                                v9 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3)
                                                               + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
                                                if ( (_BYTE)v9 )
                                                  __asan_report_store1(&this->is_json_loaded, v8, v9);
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
  v10 = v5;
  if ( v34 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8054) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF805C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8064) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF806C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8074) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF807C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8084) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF808C) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF81A4) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 3392LL, v34);
  }
  return v10;
};

// Line 1486: range 0000000011602852-000000001160339F
data::ConfigAvatarStateIDInfoPtr __cdecl data::ConfigAvatarStateIDInfo::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigAvatarStateIDInfoPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<data::ConfigAvatarStateIDInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 13 base_ptr:1499 96 16 8 ptr:1505 128 32 9 <unknown> 192 32 9 <unknown"
                        "> 256 32 14 type_name:1493 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigAvatarStateIDInfo::parseFromJson;
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
        "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
        "parseFromJson",
        1496);
      common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[51])"fromJson for: ConfigAvatarStateIDInfo $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigAvatarStateIDInfo>::shared_ptr(
        (std::shared_ptr<data::ConfigAvatarStateIDInfo> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigBaseStateIDInfo((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigBaseStateIDInfo>(
             (const std::shared_ptr<data::ConfigBaseStateIDInfo> *)(v2 + 64),
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
          "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
          "parseFromJson",
          1502);
        v6 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[47])"create ConfigBaseStateIDInfo fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigAvatarStateIDInfo>::shared_ptr(
          (std::shared_ptr<data::ConfigAvatarStateIDInfo> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigAvatarStateIDInfo,data::ConfigBaseStateIDInfo>((const std::shared_ptr<data::ConfigBaseStateIDInfo> *)(v2 + 96));
        if ( std::operator==<data::ConfigAvatarStateIDInfo>(
               (const std::shared_ptr<data::ConfigAvatarStateIDInfo> *)(v2 + 96),
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
            "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
            "parseFromJson",
            1508);
          common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[42])"cast to ConfigAvatarStateIDInfoPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigAvatarStateIDInfo>::shared_ptr(
            (std::shared_ptr<data::ConfigAvatarStateIDInfo> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigAvatarStateIDInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigAvatarStateIDInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
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
              "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
              "parseFromJson",
              1513);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigAvatarStateIDInfo>::shared_ptr(
              (std::shared_ptr<data::ConfigAvatarStateIDInfo> *const)jval,
              0LL);
          }
          else
          {
            v10 = std::__shared_ptr_access<data::ConfigAvatarStateIDInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigAvatarStateIDInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000);
            if ( v11 != 0 && (((unsigned __int8)v10 + 28) & 7) >= v11 )
            {
              LOBYTE(v1) = v11 != 0;
              __asan_report_store1(&v10->is_json_loaded, v1, v10);
            }
            v10->is_json_loaded = 1;
            std::shared_ptr<data::ConfigAvatarStateIDInfo>::shared_ptr(
              (std::shared_ptr<data::ConfigAvatarStateIDInfo> *const)jval,
              (std::shared_ptr<data::ConfigAvatarStateIDInfo> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigAvatarStateIDInfo>::~shared_ptr((std::shared_ptr<data::ConfigAvatarStateIDInfo> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigBaseStateIDInfo>::~shared_ptr((std::shared_ptr<data::ConfigBaseStateIDInfo> *const)(v2 + 64));
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
      "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
      "parseFromJson",
      1490);
    common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[56])"jsonValueFind for: ConfigAvatarStateIDInfo $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigAvatarStateIDInfo>::shared_ptr(
      (std::shared_ptr<data::ConfigAvatarStateIDInfo> *const)jval,
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
  result._M_ptr = (std::__shared_ptr<data::ConfigAvatarStateIDInfo,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 1521: range 00000000116033A0-0000000011603AFD
int32_t __cdecl data::ConfigAvatarStateIDInfo::getHashValue(const data::ConfigAvatarStateIDInfo *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // edx
  char v6; // al
  int32_t v7; // eax
  int32_t VecHashValue; // eax
  int32_t v9; // eax
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rdx
  int32_t v20; // eax
  int32_t result; // eax
  char v22[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1522";
  *(_QWORD *)(v2 + 16) = data::ConfigAvatarStateIDInfo::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigNormalStateIDInfo::getHashValue((const data::ConfigNormalStateIDInfo *const)this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  if ( *(_BYTE *)(((unsigned __int64)&this->camera_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->camera_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->camera_type);
  }
  common::tools::HashUtils::appendHash(this->camera_type, (int32_t *)(v2 + 32));
  v7 = data::ConfigStateCameraParam::getHashValue(&this->camera_param);
  common::tools::HashUtils::appendHash(v7, (int32_t *)(v2 + 32));
  VecHashValue = data::getVecHashValue(&this->can_change_avatar);
  common::tools::HashUtils::appendHash(VecHashValue, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->can_support_change >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->can_support_change, v2 + 32, &this->can_support_change);
  common::tools::HashUtils::appendHash(this->can_support_change, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->action_panel_state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->action_panel_state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->action_panel_state);
  }
  common::tools::HashUtils::appendHash(this->action_panel_state, (int32_t *)(v2 + 32));
  v9 = data::getVecHashValue(&this->equip_reattach);
  common::tools::HashUtils::appendHash(v9, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->jump_cancel_start >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->jump_cancel_start >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->jump_cancel_start);
  }
  common::tools::HashUtils::appendHash(this->jump_cancel_start, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->jump_cancel_end >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->jump_cancel_end >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->jump_cancel_end);
  }
  common::tools::HashUtils::appendHash(this->jump_cancel_end, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->sprint_cancel_start >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sprint_cancel_start >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->sprint_cancel_start);
  }
  common::tools::HashUtils::appendHash(this->sprint_cancel_start, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->sprint_cancel_end >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sprint_cancel_end >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->sprint_cancel_end);
  }
  common::tools::HashUtils::appendHash(this->sprint_cancel_end, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->fly_cancel_start >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fly_cancel_start >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->fly_cancel_start);
  }
  common::tools::HashUtils::appendHash(this->fly_cancel_start, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->fly_cancel_end >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fly_cancel_end >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->fly_cancel_end);
  }
  common::tools::HashUtils::appendHash(this->fly_cancel_end, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->animator_trigger_on_landed, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->battou_on_start >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->battou_on_start, v2 + 32, &this->battou_on_start);
  common::tools::HashUtils::appendHash(this->battou_on_start, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->battou_on_start_normalized_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->battou_on_start_normalized_time >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->battou_on_start_normalized_time);
  }
  common::tools::HashUtils::appendHash(this->battou_on_start_normalized_time, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->sheathe_on_start >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->sheathe_on_start, (((_BYTE)this + 108) & 7u) + 3, &this->sheathe_on_start);
  common::tools::HashUtils::appendHash(this->sheathe_on_start, (int32_t *)(v2 + 32));
  v10 = ((_BYTE)this + 113) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&this->sheathe_on_end >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&this->sheathe_on_end >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_load1(&this->sheathe_on_end, v10, v11);
  common::tools::HashUtils::appendHash(this->sheathe_on_end, (int32_t *)(v2 + 32));
  v12 = ((_BYTE)this + 114) & 7;
  v13 = (*(_BYTE *)(((unsigned __int64)&this->ignore_pre_sheath >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((unsigned __int64)&this->ignore_pre_sheath >> 3) + 0x7FFF8000));
  if ( (_BYTE)v13 )
    __asan_report_load1(&this->ignore_pre_sheath, v12, v13);
  common::tools::HashUtils::appendHash(this->ignore_pre_sheath, (int32_t *)(v2 + 32));
  v14 = ((_BYTE)this + 115) & 7;
  v15 = (*(_BYTE *)(((unsigned __int64)&this->enable_combat_to_climb >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v14 >= *(_BYTE *)(((unsigned __int64)&this->enable_combat_to_climb >> 3) + 0x7FFF8000));
  if ( (_BYTE)v15 )
    __asan_report_load1(&this->enable_combat_to_climb, v14, v15);
  common::tools::HashUtils::appendHash(this->enable_combat_to_climb, (int32_t *)(v2 + 32));
  v16 = ((_BYTE)this + 116) & 7;
  v17 = (*(_BYTE *)(((unsigned __int64)&this->enable_lean_layer >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v16 >= *(_BYTE *)(((unsigned __int64)&this->enable_lean_layer >> 3) + 0x7FFF8000));
  if ( (_BYTE)v17 )
    __asan_report_load1(&this->enable_lean_layer, v16, v17);
  common::tools::HashUtils::appendHash(this->enable_lean_layer, (int32_t *)(v2 + 32));
  v18 = ((_BYTE)this + 117) & 7;
  v19 = (*(_BYTE *)(((unsigned __int64)&this->enable_hit_air_retreat_in_air >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v18 >= *(_BYTE *)(((unsigned __int64)&this->enable_hit_air_retreat_in_air >> 3) + 0x7FFF8000));
  if ( (_BYTE)v19 )
    __asan_report_load1(&this->enable_hit_air_retreat_in_air, v18, v19);
  common::tools::HashUtils::appendHash(this->enable_hit_air_retreat_in_air, (int32_t *)(v2 + 32));
  v20 = data::ConfigStateSubEquip::getHashValue(&this->sub_equip_config);
  common::tools::HashUtils::appendHash(v20, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v22 == (char *)v2 )
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

// Line 1549: range 0000000011603AFE-0000000011603D7B
const char *__cdecl data::enumValToStr(data::BlendMoveType e)
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
  if ( e == BlendMove3D )
  {
    result = "BlendMove3D";
  }
  else
  {
    if ( e > BlendMove3D )
      goto LABEL_22;
    if ( e == None_55 )
    {
      result = "None";
      goto LABEL_17;
    }
    if ( e == BlendMove )
    {
      result = "BlendMove";
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
        "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
        "enumValToStr",
        1559);
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
      result = (const char *)&unk_1A7E0BE0;
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

// Line 1565: range 0000000011603D7C-000000001160465D
bool __cdecl data::enumStrToVal(const std::string *s, data::BlendMoveType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::BlendMoveType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::BlendMoveType> >::pointer v11; // rax
  data::BlendMoveType second; // ecx
  char v13; // dl
  data::BlendMoveType *ea; // [rsp+10h] [rbp-220h]
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 8 7"
                        " it:1577 160 8 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 120 9 <unknown>";
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
      "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
      "enumStrToVal",
      1568);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::BlendMoveType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::BlendMoveType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::BlendMoveType>::pair<char const(&)[5],data::BlendMoveType,true>(
        (std::pair<const std::string,data::BlendMoveType> *const)(v2 + 320),
        (const char (*)[5])"None",
        (data::BlendMoveType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "None");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::BlendMoveType>::pair<char const(&)[10],data::BlendMoveType,true>(
        (std::pair<const std::string,data::BlendMoveType> *const)(v2 + 360),
        (const char (*)[10])"BlendMove",
        (data::BlendMoveType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "BlendMove");
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::BlendMoveType>::pair<char const(&)[12],data::BlendMoveType,true>(
        (std::pair<const std::string,data::BlendMoveType> *const)(v2 + 400),
        (const char (*)[12])"BlendMove3D",
        (data::BlendMoveType *)(v2 + 112));
      std::allocator<std::pair<std::string const,data::BlendMoveType>>::allocator((std::allocator<std::pair<const std::string,data::BlendMoveType> > *const)(v2 + 64));
      std::map<std::string,data::BlendMoveType>::map(
        &data::enumStrToVal(std::string const&,data::BlendMoveType &)::m,
        (std::initializer_list<std::pair<const std::string,data::BlendMoveType> >)__PAIR128__(3LL, v2 + 320),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::BlendMoveType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::BlendMoveType &)::m);
      e = (data::BlendMoveType *)&data::enumStrToVal(std::string const&,data::BlendMoveType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::BlendMoveType>::~map,
        &data::enumStrToVal(std::string const&,data::BlendMoveType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::BlendMoveType>>::~allocator((std::allocator<std::pair<const std::string,data::BlendMoveType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::BlendMoveType> *)(v2 + 440);
            i != (std::pair<const std::string,data::BlendMoveType> *)(v2 + 320);
            std::pair<std::string const,data::BlendMoveType>::~pair(i) )
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
    *(std::map<std::string,data::BlendMoveType>::iterator *)(v2 + 128) = std::map<std::string,data::BlendMoveType>::find(
                                                                           &data::enumStrToVal(std::string const&,data::BlendMoveType &)::m,
                                                                           s);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, s);
    *(std::map<std::string,data::BlendMoveType>::iterator *)(v2 + 160) = std::map<std::string,data::BlendMoveType>::end(&data::enumStrToVal(std::string const&,data::BlendMoveType &)::m);
    v8 = (char *)(v2 + 160);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::BlendMoveType> >::_Self *)(v2 + 128),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::BlendMoveType> >::_Self *)(v2 + 160));
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
        "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
        "enumStrToVal",
        1580);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 256),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::BlendMoveType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::BlendMoveType> > *const)(v2 + 128));
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

// Line 1588: range 000000001160465E-00000000116046A2
const char *__cdecl data::getDescription(data::BlendMoveType e)
{
  if ( e == BlendMove3D )
    return (const char *)&unk_1A809980;
  if ( e > BlendMove3D )
    return "unknown enum value!";
  if ( e == None_55 )
    return (const char *)&unk_1A809900;
  if ( e == BlendMove )
    return (const char *)&unk_1A809940;
  else
    return "unknown enum value!";
};

// Line 1606: range 00000000116949D0-0000000011694C11
void __cdecl data::ConfigMonsterStateIDInfoRegister::ConfigMonsterStateIDInfoRegister(
        data::ConfigMonsterStateIDInfoRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigBaseStateIDInfo> *v4; // rax
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
  *(_QWORD *)(v1 + 16) = data::ConfigMonsterStateIDInfoRegister::ConfigMonsterStateIDInfoRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigMonsterStateIDInfo>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigMonsterStateIDInfo",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigBaseStateIDInfo>>::operator[](
         &data::g_ConfigBaseStateIDInfoMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigBaseStateIDInfo>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigBaseStateIDInfo>::operator=<data::ConfigMonsterStateIDInfo>(
    v4,
    (std::shared_ptr<data::ConfigMonsterStateIDInfo> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigMonsterStateIDInfo>::~shared_ptr((std::shared_ptr<data::ConfigMonsterStateIDInfo> *const)(v1 + 64));
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

// Line 1609: range 00000000116046A4-0000000011604DCE
void __cdecl data::ConfigMonsterStateIDInfo::foreachMember(
        data::ConfigMonsterStateIDInfo *const this,
        std::function<void(std::any&)> *p_func)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5[496]; // [rsp+10h] [rbp-1F0h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(448LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "12 32 16 32 enable_bone_follow_move_any:1611 64 16 18 can_steer_any:1613 96 16 19 auto_steer_any"
                        ":1615 128 16 29 follow_anim_rotation_any:1617 160 16 29 gravity_adjust_scale_any:1619 192 16 27 "
                        "force_set_air_move_any:1621 224 16 36 remote_force_close_air_move_any:1623 256 16 38 remote_forc"
                        "e_use_animator_vel_any:1625 288 16 19 blend_move_any:1627 320 16 27 blend_smooth_speed_any:1629 "
                        "352 16 34 air_move_follow_animation_any:1631 384 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigMonsterStateIDInfo::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
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
  v4[536862733] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 384), p_func);
  data::ConfigNormalStateIDInfo::foreachMember(
    (data::ConfigNormalStateIDInfo *const)this,
    (std::function<void(std::any&)> *)(v2 + 384));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 384));
  *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(
    (std::any *const)(v2 + 32),
    &this->enable_bone_follow_move);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 32));
  *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>((std::any *const)(v2 + 64), &this->can_steer);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 64));
  *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>((std::any *const)(v2 + 96), &this->auto_steer);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 96));
  *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(
    (std::any *const)(v2 + 128),
    &this->follow_anim_rotation);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 128));
  *(_WORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>(
    (std::any *const)(v2 + 160),
    &this->gravity_adjust_scale);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 160));
  *(_WORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(
    (std::any *const)(v2 + 192),
    &this->force_set_air_move);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 192));
  *(_WORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(
    (std::any *const)(v2 + 224),
    &this->remote_force_close_air_move);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 224));
  *(_WORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(
    (std::any *const)(v2 + 256),
    &this->remote_force_use_animator_vel);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 256));
  *(_WORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
  std::any::any<data::BlendMoveType &,data::BlendMoveType,std::any::_Manager_internal<data::BlendMoveType>,true,true>(
    (std::any *const)(v2 + 288),
    &this->blend_move);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 288));
  *(_WORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>(
    (std::any *const)(v2 + 320),
    &this->blend_smooth_speed);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 320));
  *(_WORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(
    (std::any *const)(v2 + 352),
    &this->air_move_follow_animation);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 352));
  std::any::~any((std::any *const)(v2 + 352));
  std::any::~any((std::any *const)(v2 + 320));
  std::any::~any((std::any *const)(v2 + 288));
  std::any::~any((std::any *const)(v2 + 256));
  std::any::~any((std::any *const)(v2 + 224));
  std::any::~any((std::any *const)(v2 + 192));
  std::any::~any((std::any *const)(v2 + 160));
  std::any::~any((std::any *const)(v2 + 128));
  std::any::~any((std::any *const)(v2 + 96));
  std::any::~any((std::any *const)(v2 + 64));
  std::any::~any((std::any *const)(v2 + 32));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
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
  }
};

// Line 1636: range 0000000011604DD0-0000000011604EE0
std::shared_ptr<data::ConfigBaseStateIDInfo> __cdecl data::ConfigMonsterStateIDInfo::clone(
        data::ConfigMonsterStateIDInfo *const this)
{
  data::ConfigMonsterStateIDInfo *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigBaseStateIDInfo> result; // rax
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
  *(_QWORD *)(v2 + 16) = data::ConfigMonsterStateIDInfo::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigMonsterStateIDInfo,data::ConfigMonsterStateIDInfo&>(
    (common::tools::perf::allocator<data::ConfigMonsterStateIDInfo,data::ConfigMonsterStateIDInfo> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigBaseStateIDInfo>::shared_ptr<data::ConfigMonsterStateIDInfo,void>(
    (std::shared_ptr<data::ConfigBaseStateIDInfo> *const)this,
    (std::shared_ptr<data::ConfigMonsterStateIDInfo> *)(v2 + 32));
  std::shared_ptr<data::ConfigMonsterStateIDInfo>::~shared_ptr((std::shared_ptr<data::ConfigMonsterStateIDInfo> *const)(v2 + 32));
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

// Line 1640: range 0000000011604EE2-0000000011604F25
data::ConfigMonsterStateIDInfoPtr __cdecl data::ConfigMonsterStateIDInfoFactory::create(
        data::ConfigMonsterStateIDInfoFactory *const this)
{
  data::ConfigMonsterStateIDInfoPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigMonsterStateIDInfo>();
  result._M_ptr = (std::__shared_ptr<data::ConfigMonsterStateIDInfo,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1642: range 0000000011604F26-0000000011606DB5
bool __cdecl data::ConfigMonsterStateIDInfo::fromJson(
        data::ConfigMonsterStateIDInfo *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  bool v6; // r15
  __int64 v7; // rsi
  __int64 v8; // rdx
  bool v9; // bl
  const Json::Value *enable_bone_follow_move_ptr; // [rsp+18h] [rbp-768h]
  const Json::Value *can_steer_ptr; // [rsp+20h] [rbp-760h]
  const Json::Value *auto_steer_ptr; // [rsp+28h] [rbp-758h]
  const Json::Value *follow_anim_rotation_ptr; // [rsp+30h] [rbp-750h]
  const Json::Value *gravity_adjust_scale_ptr; // [rsp+38h] [rbp-748h]
  const Json::Value *force_set_air_move_ptr; // [rsp+40h] [rbp-740h]
  const Json::Value *remote_force_close_air_move_ptr; // [rsp+48h] [rbp-738h]
  const Json::Value *remote_force_use_animator_vel_ptr; // [rsp+50h] [rbp-730h]
  Json::Value *blend_move_ptr; // [rsp+58h] [rbp-728h]
  const Json::Value *blend_smooth_speed_ptr; // [rsp+60h] [rbp-720h]
  const Json::Value *air_move_follow_animation_ptr; // [rsp+68h] [rbp-718h]
  char v22[1808]; // [rsp+70h] [rbp-710h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1760LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "35 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 <unkn"
                        "own> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unkno"
                        "wn> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknow"
                        "n> 864 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <unkno"
                        "wn> 1184 32 9 <unknown> 1248 32 9 <unknown> 1312 32 9 <unknown> 1376 32 9 <unknown> 1440 32 9 <u"
                        "nknown> 1504 32 9 <unknown> 1568 32 9 <unknown> 1632 32 9 <unknown> 1696 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigMonsterStateIDInfo::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862724] = -234753535;
  v4[536862725] = -234753535;
  v4[536862726] = -234753535;
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
  v4[536862774] = -202116109;
  if ( !data::ConfigNormalStateIDInfo::fromJson((data::ConfigNormalStateIDInfo *const)this, jval) )
  {
    if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
      "fromJson",
      1645);
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
      (common::milog::MiLogStream *const)(v2 + 224),
      (const char (*)[45])"fromJson for: ConfigNormalStateIDInfo fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
    v5 = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 288),
      "enableBoneFollowMove",
      (const std::allocator<char> *)(v2 + 48));
    enable_bone_follow_move_ptr = jsonValueFind(jval, (const std::string *)(v2 + 288));
    std::string::~string((void *)(v2 + 288));
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( enable_bone_follow_move_ptr && !fromJson<bool>(enable_bone_follow_move_ptr, &this->enable_bone_follow_move) )
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
        "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
        "fromJson",
        1657);
      common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
        (common::milog::MiLogStream *const)(v2 + 352),
        (const char (*)[42])"fromJson for: enableBoneFollowMove fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
      v5 = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 416),
        "canSteer",
        (const std::allocator<char> *)(v2 + 64));
      can_steer_ptr = jsonValueFind(jval, (const std::string *)(v2 + 416));
      std::string::~string((void *)(v2 + 416));
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( can_steer_ptr && !fromJson<bool>(can_steer_ptr, &this->can_steer) )
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
          3u,
          "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
          "fromJson",
          1669);
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
          (common::milog::MiLogStream *const)(v2 + 480),
          (const char (*)[30])"fromJson for: canSteer fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
        v5 = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 544),
          "autoSteer",
          (const std::allocator<char> *)(v2 + 80));
        auto_steer_ptr = jsonValueFind(jval, (const std::string *)(v2 + 544));
        std::string::~string((void *)(v2 + 544));
        *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( auto_steer_ptr && !fromJson<bool>(auto_steer_ptr, &this->auto_steer) )
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
            "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
            "fromJson",
            1681);
          common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            (common::milog::MiLogStream *const)(v2 + 608),
            (const char (*)[31])"fromJson for: autoSteer fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
          v5 = 0;
        }
        else
        {
          *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 96);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 672),
            "followAnimRotation",
            (const std::allocator<char> *)(v2 + 96));
          follow_anim_rotation_ptr = jsonValueFind(jval, (const std::string *)(v2 + 672));
          std::string::~string((void *)(v2 + 672));
          *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 96);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( follow_anim_rotation_ptr && !fromJson<bool>(follow_anim_rotation_ptr, &this->follow_anim_rotation) )
          {
            *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 736) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 736, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 736),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
              "fromJson",
              1693);
            common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              (common::milog::MiLogStream *const)(v2 + 736),
              (const char (*)[40])"fromJson for: followAnimRotation fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 736));
            v5 = 0;
          }
          else
          {
            *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 112);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 800),
              "gravityAdjustScale",
              (const std::allocator<char> *)(v2 + 112));
            gravity_adjust_scale_ptr = jsonValueFind(jval, (const std::string *)(v2 + 800));
            std::string::~string((void *)(v2 + 800));
            *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 112);
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
            if ( gravity_adjust_scale_ptr && !fromJson<float>(gravity_adjust_scale_ptr, &this->gravity_adjust_scale) )
            {
              *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 864) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 895) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 895) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 864, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 864),
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
                "fromJson",
                1705);
              common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                (common::milog::MiLogStream *const)(v2 + 864),
                (const char (*)[40])"fromJson for: gravityAdjustScale fails!");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 864));
              v5 = 0;
            }
            else
            {
              *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 128);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 928),
                "forceSetAirMove",
                (const std::allocator<char> *)(v2 + 128));
              force_set_air_move_ptr = jsonValueFind(jval, (const std::string *)(v2 + 928));
              std::string::~string((void *)(v2 + 928));
              *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 128);
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
              if ( force_set_air_move_ptr && !fromJson<bool>(force_set_air_move_ptr, &this->force_set_air_move) )
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
                  3u,
                  "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
                  "fromJson",
                  1717);
                common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                  (common::milog::MiLogStream *const)(v2 + 992),
                  (const char (*)[37])"fromJson for: forceSetAirMove fails!");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 992));
                v5 = 0;
              }
              else
              {
                *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 144);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1056),
                  "remoteForceCloseAirMove",
                  (const std::allocator<char> *)(v2 + 144));
                remote_force_close_air_move_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1056));
                std::string::~string((void *)(v2 + 1056));
                *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 144);
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
                if ( remote_force_close_air_move_ptr
                  && !fromJson<bool>(remote_force_close_air_move_ptr, &this->remote_force_close_air_move) )
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
                    3u,
                    "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
                    "fromJson",
                    1729);
                  common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                    (common::milog::MiLogStream *const)(v2 + 1120),
                    (const char (*)[45])"fromJson for: remoteForceCloseAirMove fails!");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1120));
                  v5 = 0;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 160);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1184),
                    "remoteForceUseAnimatorVel",
                    (const std::allocator<char> *)(v2 + 160));
                  remote_force_use_animator_vel_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1184));
                  std::string::~string((void *)(v2 + 1184));
                  *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 160);
                  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                  if ( remote_force_use_animator_vel_ptr
                    && !fromJson<bool>(remote_force_use_animator_vel_ptr, &this->remote_force_use_animator_vel) )
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
                      "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
                      "fromJson",
                      1741);
                    common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                      (common::milog::MiLogStream *const)(v2 + 1248),
                      (const char (*)[47])"fromJson for: remoteForceUseAnimatorVel fails!");
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1248));
                    v5 = 0;
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 176);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 1312),
                      "blendMove",
                      (const std::allocator<char> *)(v2 + 176));
                    blend_move_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 1312));
                    std::string::~string((void *)(v2 + 1312));
                    *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 176);
                    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                    if ( !blend_move_ptr )
                      goto LABEL_55;
                    *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 1376) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 1407) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 1407) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 1376, 32LL);
                    }
                    Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 1376), (Json::Value_0 *)blend_move_ptr);
                    v6 = !data::enumStrToVal((const std::string *)(v2 + 1376), &this->blend_move);
                    std::string::~string((void *)(v2 + 1376));
                    *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = -117901064;
                    if ( v6 )
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
                        3u,
                        "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
                        "fromJson",
                        1753);
                      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                        (common::milog::MiLogStream *const)(v2 + 1440),
                        (const char (*)[31])"fromJson for: blendMove fails!");
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1440));
                      v5 = 0;
                    }
                    else
                    {
LABEL_55:
                      *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 192);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 1504),
                        "blendSmoothSpeed",
                        (const std::allocator<char> *)(v2 + 192));
                      blend_smooth_speed_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1504));
                      std::string::~string((void *)(v2 + 1504));
                      *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 192);
                      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                      if ( blend_smooth_speed_ptr && !fromJson<float>(blend_smooth_speed_ptr, &this->blend_smooth_speed) )
                      {
                        *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v2 + 1568) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v2 + 1599) >> 3) + 0x7FFF8000) != 0
                          && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 1599) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v2 + 1568, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v2 + 1568),
                          &common::milog::MiLogDefault::default_log_obj_,
                          3u,
                          "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
                          "fromJson",
                          1765);
                        common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                          (common::milog::MiLogStream *const)(v2 + 1568),
                          (const char (*)[38])"fromJson for: blendSmoothSpeed fails!");
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1568));
                        v5 = 0;
                      }
                      else
                      {
                        *(_DWORD *)(((v2 + 1632) >> 3) + 0x7FFF8000) = 0;
                        *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 208);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 1632),
                          "airMoveFollowAnimation",
                          (const std::allocator<char> *)(v2 + 208));
                        air_move_follow_animation_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1632));
                        std::string::~string((void *)(v2 + 1632));
                        *(_DWORD *)(((v2 + 1632) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 208);
                        *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                        if ( air_move_follow_animation_ptr
                          && !fromJson<bool>(air_move_follow_animation_ptr, &this->air_move_follow_animation) )
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
                            3u,
                            "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
                            "fromJson",
                            1777);
                          common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                            (common::milog::MiLogStream *const)(v2 + 1696),
                            (const char (*)[44])"fromJson for: airMoveFollowAnimation fails!");
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1696));
                          v5 = 0;
                        }
                        else
                        {
                          v7 = ((_BYTE)this + 28) & 7;
                          v8 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
                          if ( (_BYTE)v8 )
                            __asan_report_store1(&this->is_json_loaded, v7, v8);
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
  v9 = v5;
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8058) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8068) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8078) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8080) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8088) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8090) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8098) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80A0) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80A8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80B0) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80B8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80C0) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80C8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80D0) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80D8) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1760LL, v22);
  }
  return v9;
};

// Line 1784: range 0000000011606DB6-0000000011607903
data::ConfigMonsterStateIDInfoPtr __cdecl data::ConfigMonsterStateIDInfo::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigMonsterStateIDInfoPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<data::ConfigMonsterStateIDInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 13 base_ptr:1797 96 16 8 ptr:1803 128 32 9 <unknown> 192 32 9 <unknown"
                        "> 256 32 14 type_name:1791 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigMonsterStateIDInfo::parseFromJson;
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
        "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
        "parseFromJson",
        1794);
      common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[52])"fromJson for: ConfigMonsterStateIDInfo $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigMonsterStateIDInfo>::shared_ptr(
        (std::shared_ptr<data::ConfigMonsterStateIDInfo> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigBaseStateIDInfo((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigBaseStateIDInfo>(
             (const std::shared_ptr<data::ConfigBaseStateIDInfo> *)(v2 + 64),
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
          "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
          "parseFromJson",
          1800);
        v6 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[47])"create ConfigBaseStateIDInfo fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigMonsterStateIDInfo>::shared_ptr(
          (std::shared_ptr<data::ConfigMonsterStateIDInfo> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigMonsterStateIDInfo,data::ConfigBaseStateIDInfo>((const std::shared_ptr<data::ConfigBaseStateIDInfo> *)(v2 + 96));
        if ( std::operator==<data::ConfigMonsterStateIDInfo>(
               (const std::shared_ptr<data::ConfigMonsterStateIDInfo> *)(v2 + 96),
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
            "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
            "parseFromJson",
            1806);
          common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[43])"cast to ConfigMonsterStateIDInfoPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigMonsterStateIDInfo>::shared_ptr(
            (std::shared_ptr<data::ConfigMonsterStateIDInfo> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigMonsterStateIDInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigMonsterStateIDInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
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
              "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
              "parseFromJson",
              1811);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigMonsterStateIDInfo>::shared_ptr(
              (std::shared_ptr<data::ConfigMonsterStateIDInfo> *const)jval,
              0LL);
          }
          else
          {
            v10 = std::__shared_ptr_access<data::ConfigMonsterStateIDInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigMonsterStateIDInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000);
            if ( v11 != 0 && (((unsigned __int8)v10 + 28) & 7) >= v11 )
            {
              LOBYTE(v1) = v11 != 0;
              __asan_report_store1(&v10->is_json_loaded, v1, v10);
            }
            v10->is_json_loaded = 1;
            std::shared_ptr<data::ConfigMonsterStateIDInfo>::shared_ptr(
              (std::shared_ptr<data::ConfigMonsterStateIDInfo> *const)jval,
              (std::shared_ptr<data::ConfigMonsterStateIDInfo> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigMonsterStateIDInfo>::~shared_ptr((std::shared_ptr<data::ConfigMonsterStateIDInfo> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigBaseStateIDInfo>::~shared_ptr((std::shared_ptr<data::ConfigBaseStateIDInfo> *const)(v2 + 64));
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
      "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
      "parseFromJson",
      1788);
    common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[57])"jsonValueFind for: ConfigMonsterStateIDInfo $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigMonsterStateIDInfo>::shared_ptr(
      (std::shared_ptr<data::ConfigMonsterStateIDInfo> *const)jval,
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
  result._M_ptr = (std::__shared_ptr<data::ConfigMonsterStateIDInfo,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 1819: range 0000000011607904-0000000011607DC9
int32_t __cdecl data::ConfigMonsterStateIDInfo::getHashValue(const data::ConfigMonsterStateIDInfo *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // edx
  char v6; // al
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rdx
  int32_t result; // eax
  char v22[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1820";
  *(_QWORD *)(v2 + 16) = data::ConfigMonsterStateIDInfo::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigNormalStateIDInfo::getHashValue((const data::ConfigNormalStateIDInfo *const)this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  v7 = ((_BYTE)this - 36) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->enable_bone_follow_move >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->enable_bone_follow_move >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_load1(&this->enable_bone_follow_move, v7, v8);
  common::tools::HashUtils::appendHash(this->enable_bone_follow_move, (int32_t *)(v2 + 32));
  v9 = ((_BYTE)this - 35) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->can_steer >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->can_steer >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_load1(&this->can_steer, v9, v10);
  common::tools::HashUtils::appendHash(this->can_steer, (int32_t *)(v2 + 32));
  v11 = ((_BYTE)this - 34) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->auto_steer >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&this->auto_steer >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_load1(&this->auto_steer, v11, v12);
  common::tools::HashUtils::appendHash(this->auto_steer, (int32_t *)(v2 + 32));
  v13 = ((_BYTE)this - 33) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&this->follow_anim_rotation >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&this->follow_anim_rotation >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_load1(&this->follow_anim_rotation, v13, v14);
  common::tools::HashUtils::appendHash(this->follow_anim_rotation, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->gravity_adjust_scale >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gravity_adjust_scale >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->gravity_adjust_scale);
  }
  common::tools::HashUtils::appendHash(this->gravity_adjust_scale, (int32_t *)(v2 + 32));
  v15 = ((_BYTE)this - 28) & 7;
  v16 = (*(_BYTE *)(((unsigned __int64)&this->force_set_air_move >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v15 >= *(_BYTE *)(((unsigned __int64)&this->force_set_air_move >> 3) + 0x7FFF8000));
  if ( (_BYTE)v16 )
    __asan_report_load1(&this->force_set_air_move, v15, v16);
  common::tools::HashUtils::appendHash(this->force_set_air_move, (int32_t *)(v2 + 32));
  v17 = ((_BYTE)this - 27) & 7;
  v18 = (*(_BYTE *)(((unsigned __int64)&this->remote_force_close_air_move >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v17 >= *(_BYTE *)(((unsigned __int64)&this->remote_force_close_air_move >> 3) + 0x7FFF8000));
  if ( (_BYTE)v18 )
    __asan_report_load1(&this->remote_force_close_air_move, v17, v18);
  common::tools::HashUtils::appendHash(this->remote_force_close_air_move, (int32_t *)(v2 + 32));
  v19 = ((_BYTE)this - 26) & 7;
  v20 = (*(_BYTE *)(((unsigned __int64)&this->remote_force_use_animator_vel >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v19 >= *(_BYTE *)(((unsigned __int64)&this->remote_force_use_animator_vel >> 3) + 0x7FFF8000));
  if ( (_BYTE)v20 )
    __asan_report_load1(&this->remote_force_use_animator_vel, v19, v20);
  common::tools::HashUtils::appendHash(this->remote_force_use_animator_vel, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->blend_move >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->blend_move >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->blend_move);
  }
  common::tools::HashUtils::appendHash(this->blend_move, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->blend_smooth_speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->blend_smooth_speed >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->blend_smooth_speed);
  }
  common::tools::HashUtils::appendHash(this->blend_smooth_speed, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->air_move_follow_animation >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(
      &this->air_move_follow_animation,
      (((_BYTE)this - 20) & 7u) + 3,
      &this->air_move_follow_animation);
  common::tools::HashUtils::appendHash(this->air_move_follow_animation, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v22 == (char *)v2 )
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

// Line 1839: range 0000000011694C8A-0000000011694ECB
void __cdecl data::ConfigNpcStateIDInfoRegister::ConfigNpcStateIDInfoRegister(
        data::ConfigNpcStateIDInfoRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigBaseStateIDInfo> *v4; // rax
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
  *(_QWORD *)(v1 + 16) = data::ConfigNpcStateIDInfoRegister::ConfigNpcStateIDInfoRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigNpcStateIDInfo>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigNpcStateIDInfo",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigBaseStateIDInfo>>::operator[](
         &data::g_ConfigBaseStateIDInfoMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigBaseStateIDInfo>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigBaseStateIDInfo>::operator=<data::ConfigNpcStateIDInfo>(
    v4,
    (std::shared_ptr<data::ConfigNpcStateIDInfo> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigNpcStateIDInfo>::~shared_ptr((std::shared_ptr<data::ConfigNpcStateIDInfo> *const)(v1 + 64));
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

// Line 1842: range 0000000011607DCA-0000000011607F9D
void __cdecl data::ConfigNpcStateIDInfo::foreachMember(
        data::ConfigNpcStateIDInfo *const this,
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
  *(_QWORD *)(v2 + 8) = "2 32 16 21 can_be_inter_any:1844 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigNpcStateIDInfo::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 64), p_func);
  data::ConfigNormalStateIDInfo::foreachMember(
    (data::ConfigNormalStateIDInfo *const)this,
    (std::function<void(std::any&)> *)(v2 + 64));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(
    (std::any *const)(v2 + 32),
    &this->can_be_inter);
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

// Line 1849: range 0000000011607F9E-00000000116080AE
std::shared_ptr<data::ConfigBaseStateIDInfo> __cdecl data::ConfigNpcStateIDInfo::clone(
        data::ConfigNpcStateIDInfo *const this)
{
  data::ConfigNpcStateIDInfo *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigBaseStateIDInfo> result; // rax
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
  *(_QWORD *)(v2 + 16) = data::ConfigNpcStateIDInfo::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigNpcStateIDInfo,data::ConfigNpcStateIDInfo&>(
    (common::tools::perf::allocator<data::ConfigNpcStateIDInfo,data::ConfigNpcStateIDInfo> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigBaseStateIDInfo>::shared_ptr<data::ConfigNpcStateIDInfo,void>(
    (std::shared_ptr<data::ConfigBaseStateIDInfo> *const)this,
    (std::shared_ptr<data::ConfigNpcStateIDInfo> *)(v2 + 32));
  std::shared_ptr<data::ConfigNpcStateIDInfo>::~shared_ptr((std::shared_ptr<data::ConfigNpcStateIDInfo> *const)(v2 + 32));
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

// Line 1853: range 00000000116080B0-00000000116080F3
data::ConfigNpcStateIDInfoPtr __cdecl data::ConfigNpcStateIDInfoFactory::create(
        data::ConfigNpcStateIDInfoFactory *const this)
{
  data::ConfigNpcStateIDInfoPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigNpcStateIDInfo>();
  result._M_ptr = (std::__shared_ptr<data::ConfigNpcStateIDInfo,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1855: range 00000000116080F4-0000000011608580
bool __cdecl data::ConfigNpcStateIDInfo::fromJson(data::ConfigNpcStateIDInfo *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *can_be_inter_ptr; // [rsp+18h] [rbp-128h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigNpcStateIDInfo::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  if ( !data::ConfigNormalStateIDInfo::fromJson((data::ConfigNormalStateIDInfo *const)this, jval) )
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
      "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
      "fromJson",
      1858);
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
      (common::milog::MiLogStream *const)(v2 + 64),
      (const char (*)[45])"fromJson for: ConfigNormalStateIDInfo fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 128),
      "canBeInter",
      (const std::allocator<char> *)(v2 + 48));
    can_be_inter_ptr = jsonValueFind(jval, (const std::string *)(v2 + 128));
    std::string::~string((void *)(v2 + 128));
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( can_be_inter_ptr && !fromJson<bool>(can_be_inter_ptr, &this->can_be_inter) )
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
        "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
        "fromJson",
        1870);
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
        (common::milog::MiLogStream *const)(v2 + 192),
        (const char (*)[32])"fromJson for: canBeInter fails!");
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

// Line 1877: range 0000000011608582-00000000116090CF
data::ConfigNpcStateIDInfoPtr __cdecl data::ConfigNpcStateIDInfo::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigNpcStateIDInfoPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<data::ConfigNpcStateIDInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 13 base_ptr:1890 96 16 8 ptr:1896 128 32 9 <unknown> 192 32 9 <unknown"
                        "> 256 32 14 type_name:1884 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigNpcStateIDInfo::parseFromJson;
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
        "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
        "parseFromJson",
        1887);
      common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[48])"fromJson for: ConfigNpcStateIDInfo $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigNpcStateIDInfo>::shared_ptr(
        (std::shared_ptr<data::ConfigNpcStateIDInfo> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigBaseStateIDInfo((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigBaseStateIDInfo>(
             (const std::shared_ptr<data::ConfigBaseStateIDInfo> *)(v2 + 64),
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
          "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
          "parseFromJson",
          1893);
        v6 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[47])"create ConfigBaseStateIDInfo fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigNpcStateIDInfo>::shared_ptr(
          (std::shared_ptr<data::ConfigNpcStateIDInfo> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigNpcStateIDInfo,data::ConfigBaseStateIDInfo>((const std::shared_ptr<data::ConfigBaseStateIDInfo> *)(v2 + 96));
        if ( std::operator==<data::ConfigNpcStateIDInfo>(
               (const std::shared_ptr<data::ConfigNpcStateIDInfo> *)(v2 + 96),
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
            "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
            "parseFromJson",
            1899);
          common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[39])"cast to ConfigNpcStateIDInfoPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigNpcStateIDInfo>::shared_ptr(
            (std::shared_ptr<data::ConfigNpcStateIDInfo> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigNpcStateIDInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigNpcStateIDInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
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
              "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
              "parseFromJson",
              1904);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigNpcStateIDInfo>::shared_ptr(
              (std::shared_ptr<data::ConfigNpcStateIDInfo> *const)jval,
              0LL);
          }
          else
          {
            v10 = std::__shared_ptr_access<data::ConfigNpcStateIDInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigNpcStateIDInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000);
            if ( v11 != 0 && (((unsigned __int8)v10 + 28) & 7) >= v11 )
            {
              LOBYTE(v1) = v11 != 0;
              __asan_report_store1(&v10->is_json_loaded, v1, v10);
            }
            v10->is_json_loaded = 1;
            std::shared_ptr<data::ConfigNpcStateIDInfo>::shared_ptr(
              (std::shared_ptr<data::ConfigNpcStateIDInfo> *const)jval,
              (std::shared_ptr<data::ConfigNpcStateIDInfo> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigNpcStateIDInfo>::~shared_ptr((std::shared_ptr<data::ConfigNpcStateIDInfo> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigBaseStateIDInfo>::~shared_ptr((std::shared_ptr<data::ConfigBaseStateIDInfo> *const)(v2 + 64));
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
      "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
      "parseFromJson",
      1881);
    common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[53])"jsonValueFind for: ConfigNpcStateIDInfo $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigNpcStateIDInfo>::shared_ptr(
      (std::shared_ptr<data::ConfigNpcStateIDInfo> *const)jval,
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
  result._M_ptr = (std::__shared_ptr<data::ConfigNpcStateIDInfo,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 1912: range 00000000116090D0-000000001160924F
int32_t __cdecl data::ConfigNpcStateIDInfo::getHashValue(const data::ConfigNpcStateIDInfo *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // edx
  char v6; // al
  __int64 v7; // rsi
  __int64 v8; // rdx
  int32_t result; // eax
  char v10[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1913";
  *(_QWORD *)(v2 + 16) = data::ConfigNpcStateIDInfo::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigNormalStateIDInfo::getHashValue((const data::ConfigNormalStateIDInfo *const)this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  v7 = ((_BYTE)this - 36) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->can_be_inter >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->can_be_inter >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_load1(&this->can_be_inter, v7, v8);
  common::tools::HashUtils::appendHash(this->can_be_inter, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v10 == (char *)v2 )
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

// Line 1919: range 0000000011609250-0000000011609E45
bool __cdecl data::mapFromJson(const Json::Value *jval, data::ConfigNormalStateIDInfos *m)
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
  std::shared_ptr<data::ConfigNormalStateIDInfo> *v12; // r8
  common::milog::MiLogStream *v13; // rax
  int v14; // r14d
  std::pair<std::__detail::_Node_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigNormalStateIDInfo> >,false,true>,bool> v15; // rax
  common::milog::MiLogStream *v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  int v19; // edx
  char v21[752]; // [rsp+20h] [rbp-2F0h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(704LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 48 16 8 cit:1921 80 16 9 <unknown> 112 16 10 value:1931 144 32 8 key:1924 208 32 9 <unknown> "
                        "272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 40 13 tmp_jval:1920 544 40 13 key_j"
                        "val:1923 624 40 15 value_jval:1930";
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
  v5[536862735] = -234881024;
  v5[536862736] = -218959118;
  v5[536862738] = -218959360;
  v5[536862739] = 62194;
  v5[536862740] = -218103808;
  v5[536862741] = -202116109;
  Json::Value::Value((Json::Value *)(v3 + 464), jval);
  if ( *(_WORD *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  Json::Value::begin((Json::Value_0 *const)(v3 + 464));
  while ( 1 )
  {
    *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) = 0;
    if ( *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    Json::Value::end((Json::Value_0 *const)(v3 + 464));
    v6 = Json::ValueIteratorBase::operator!=(
           (const Json::ValueIteratorBase *const)(v3 + 48),
           (const Json::ValueIteratorBase::SelfType *)(v3 + 80));
    *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) = -1800;
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
        "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
        "mapFromJson",
        1927);
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
      v11 = Json::ValueIterator::operator*((Json::ValueIterator *const)(v3 + 48));
      Json::Value::Value((Json::Value *)(v3 + 624), v11);
      *(_WORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v3 + 112) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::ConfigNormalStateIDInfo::parseFromJson((const Json::Value *)(v3 + 112));
      if ( std::operator==<data::ConfigNormalStateIDInfo>(
             (const std::shared_ptr<data::ConfigNormalStateIDInfo> *)(v3 + 112),
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
          "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
          "mapFromJson",
          1934);
        v13 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)(v3 + 336),
                (const char (*)[28])"value fromJson fails, key: ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, (const std::string *)(v3 + 144));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
        *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v14 = 0;
      }
      else
      {
        v15 = std::unordered_map<std::string,std::shared_ptr<data::ConfigNormalStateIDInfo>>::emplace<std::string&,std::shared_ptr<data::ConfigNormalStateIDInfo>&>(
                m,
                (std::string *)(v3 + 144),
                (std::shared_ptr<data::ConfigNormalStateIDInfo> *)(v3 + 112),
                (std::string *)(v3 + 144),
                v12);
        if ( !v15.second )
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
            "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
            "mapFromJson",
            1939);
          v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 400),
                  (const char (*)[16])"key duplicate: ");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, (const std::string *)(v3 + 144));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 400));
          *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
          v2 = 0;
          v14 = 0;
        }
        else
        {
          v14 = 1;
        }
      }
      std::shared_ptr<data::ConfigNormalStateIDInfo>::~shared_ptr((std::shared_ptr<data::ConfigNormalStateIDInfo> *const)(v3 + 112));
      Json::Value::~Value((Json::Value_0 *const)(v3 + 624));
      v9 = v14 == 1;
    }
    std::string::~string((void *)(v3 + 144));
    Json::Value::~Value((Json::Value_0 *const)(v3 + 544));
    v17 = ((v3 + 544) >> 3) + 2147450880;
    *(_DWORD *)v17 = -117901064;
    *(_BYTE *)(v17 + 4) = -8;
    *(_DWORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = -117901064;
    v18 = ((v3 + 624) >> 3) + 2147450880;
    *(_DWORD *)v18 = -117901064;
    *(_BYTE *)(v18 + 4) = -8;
    *(_WORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = -1800;
    if ( !v9 )
    {
      v19 = 0;
      goto LABEL_34;
    }
    Json::ValueIterator::operator++((Json::ValueIterator *const)(v3 + 48));
  }
  v19 = 1;
LABEL_34:
  *(_WORD *)(((v3 + 48) >> 3) + 0x7FFF8000) = -1800;
  if ( v19 == 1 )
    v2 = 1;
  Json::Value::~Value((Json::Value_0 *const)(v3 + 464));
  if ( v21 == (char *)v3 )
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

// Line 1948: range 0000000011609E46-000000001160A155
int32_t __cdecl data::getMapHashValue(const data::ConfigNormalStateIDInfos *map)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  int32_t v7; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigNormalStateIDInfo> >,false,true>::reference v9; // [rsp+18h] [rbp-B8h]
  std::tuple_element<0,std::pair<const std::string,std::shared_ptr<data::ConfigNormalStateIDInfo> > >::type *key; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<const std::string,std::shared_ptr<data::ConfigNormalStateIDInfo> > >::type *val; // [rsp+28h] [rbp-A8h]
  char v12[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 hash_code:1949 64 8 16 __for_begin:1950 96 8 14 __for_end:1950";
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
  *(std::unordered_map<std::string,std::shared_ptr<data::ConfigNormalStateIDInfo>>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,std::shared_ptr<data::ConfigNormalStateIDInfo>>::begin(map);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<std::string,std::shared_ptr<data::ConfigNormalStateIDInfo>>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,std::shared_ptr<data::ConfigNormalStateIDInfo>>::end(map);
  while ( std::__detail::operator!=<std::pair<std::string const,std::shared_ptr<data::ConfigNormalStateIDInfo>>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::shared_ptr<data::ConfigNormalStateIDInfo> >,true> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::shared_ptr<data::ConfigNormalStateIDInfo> >,true> *)(v2 + 96)) )
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<std::string const,std::shared_ptr<data::ConfigNormalStateIDInfo>>,false,true>::operator*((const std::__detail::_Node_const_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigNormalStateIDInfo> >,false,true> *const)(v2 + 64));
    key = std::get<0ul,std::string const,std::shared_ptr<data::ConfigNormalStateIDInfo>>(v9);
    val = (std::tuple_element<1,const std::pair<const std::string,std::shared_ptr<data::ConfigNormalStateIDInfo> > >::type *)std::get<1ul,std::string const,std::shared_ptr<data::ConfigNormalStateIDInfo>>(v9);
    common::tools::HashUtils::appendHash(key, (int32_t *)(v2 + 48));
    if ( std::operator!=<data::ConfigNormalStateIDInfo>(0LL, val) )
    {
      v5 = (unsigned __int64)std::__shared_ptr_access<data::ConfigNormalStateIDInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigNormalStateIDInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)val);
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8(v5);
      v6 = *(_QWORD *)v5 + 56LL;
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8(*(_QWORD *)v5 + 56LL);
      v7 = (*(__int64 (__fastcall **)(unsigned __int64))v6)(v5);
      common::tools::HashUtils::appendHash(v7, (int32_t *)(v2 + 48));
    }
    std::__detail::_Node_const_iterator<std::pair<std::string const,std::shared_ptr<data::ConfigNormalStateIDInfo>>,false,true>::operator++((std::__detail::_Node_const_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigNormalStateIDInfo> >,false,true> *const)(v2 + 64));
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

// Line 1965: range 000000001160A156-000000001160A38B
data::ConfigBaseStateLayerPtr __cdecl data::createConfigBaseStateLayer(const std::string *name)
{
  const std::map<std::string,std::shared_ptr<data::ConfigBaseStateLayer>>::key_type *v1; // rsi
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseStateLayer> > > *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool v5; // al
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseStateLayer> > >::pointer v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  void (__fastcall *v9)(const std::string *, unsigned __int64); // rcx
  data::ConfigBaseStateLayerPtr result; // rax
  char v11[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseStateLayer> > > *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseStateLayer> > > *)v3;
  }
  v2->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseStateLayer> > >::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseStateLayer> > >::_Base_ptr)"2 32 8 7 it:1966 64 8 9 <unknown>";
  v2[2]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseStateLayer> > >::_Base_ptr)data::createConfigBaseStateLayer;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], v1);
  v2[4]._M_node = std::map<std::string,std::shared_ptr<data::ConfigBaseStateLayer>>::find(
                    &data::g_ConfigBaseStateLayerMap[abi:cxx11],
                    v1)._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], v1);
  v2[8]._M_node = std::map<std::string,std::shared_ptr<data::ConfigBaseStateLayer>>::end(&data::g_ConfigBaseStateLayerMap[abi:cxx11])._M_node;
  v5 = std::operator!=(v2 + 4, v2 + 8);
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
  {
    v6 = std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<data::ConfigBaseStateLayer>>>::operator->(v2 + 4);
    v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigBaseStateLayer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBaseStateLayer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v6->second);
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
    std::shared_ptr<data::ConfigBaseStateLayer>::shared_ptr(
      (std::shared_ptr<data::ConfigBaseStateLayer> *const)name,
      0LL);
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseStateLayer> > >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigBaseStateLayer,(__gnu_cxx::_Lock_policy)2>::element_type *)name;
  return result;
};

// Line 1972: range 000000001160A38C-000000001160A515
void __cdecl data::ConfigBaseStateLayer::foreachMember(
        data::ConfigBaseStateLayer *const this,
        std::function<void(std::any&)> *p_func)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 20 layer_index_any:1973 64 16 25 layer_index_name_any:1975";
  *(_QWORD *)(v2 + 16) = data::ConfigBaseStateLayer::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::any::any<int &,int,std::any::_Manager_internal<int>,true,true>((std::any *const)(v2 + 32), &this->layer_index);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 32));
  std::any::any<std::string &,std::string,std::any::_Manager_external<std::string>,true,true>(
    (std::any *const)(v2 + 64),
    &this->layer_index_name);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 64));
  std::any::~any((std::any *const)(v2 + 64));
  std::any::~any((std::any *const)(v2 + 32));
  if ( v5 == (char *)v2 )
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
};

// Line 1980: range 000000001160A516-000000001160A560
std::shared_ptr<data::ConfigBaseStateLayer> __cdecl data::ConfigBaseStateLayer::clone(
        data::ConfigBaseStateLayer *const this)
{
  data::ConfigBaseStateLayer *v1; // rsi
  std::shared_ptr<data::ConfigBaseStateLayer> result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigBaseStateLayer,data::ConfigBaseStateLayer&>(
    (common::tools::perf::allocator<data::ConfigBaseStateLayer,data::ConfigBaseStateLayer> *)this,
    v1);
  result._M_ptr = this;
  return result;
};

// Line 1984: range 000000001160A562-000000001160AB49
bool __cdecl data::ConfigBaseStateLayer::fromJson(data::ConfigBaseStateLayer *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::string *p_layer_index_name; // rsi
  const Json::Value *layer_index_ptr; // [rsp+10h] [rbp-170h]
  const Json::Value *layer_index_name_ptr; // [rsp+18h] [rbp-168h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigBaseStateLayer::fromJson;
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
    "layerIndex",
    (const std::allocator<char> *)(v2 + 32));
  layer_index_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( layer_index_ptr && !fromJson<int>(layer_index_ptr, &this->layer_index) )
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
      "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
      "fromJson",
      1994);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[32])"fromJson for: layerIndex fails!");
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
      "layerIndexName",
      (const std::allocator<char> *)(v2 + 48));
    p_layer_index_name = (std::string *)(v2 + 192);
    layer_index_name_ptr = jsonValueFind(jval, (const std::string *)(v2 + 192));
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( layer_index_name_ptr
      && (p_layer_index_name = &this->layer_index_name,
          !fromJson<std::string>(layer_index_name_ptr, &this->layer_index_name)) )
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
        "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
        "fromJson",
        2006);
      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
        (common::milog::MiLogStream *const)(v2 + 256),
        (const char (*)[36])"fromJson for: layerIndexName fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_json_loaded, p_layer_index_name, &this->is_json_loaded);
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

// Line 2013: range 000000001160AB4A-000000001160B49F
data::ConfigBaseStateLayerPtr __cdecl data::ConfigBaseStateLayer::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigBaseStateLayerPtr result; // rax
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
  *(_QWORD *)(v2 + 8) = "8 48 1 9 <unknown> 64 16 8 ptr:2026 96 32 9 <unknown> 160 32 9 <unknown> 224 32 14 type_name:202"
                        "0 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBaseStateLayer::parseFromJson;
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
        "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
        "parseFromJson",
        2023);
      common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[48])"fromJson for: ConfigBaseStateLayer $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigBaseStateLayer>::shared_ptr(
        (std::shared_ptr<data::ConfigBaseStateLayer> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigBaseStateLayer((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigBaseStateLayer>(
             (const std::shared_ptr<data::ConfigBaseStateLayer> *)(v2 + 64),
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
          "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
          "parseFromJson",
          2029);
        v6 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
               (common::milog::MiLogStream *const)(v2 + 352),
               (const char (*)[46])"create ConfigBaseStateLayer fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 224));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
        *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigBaseStateLayer>::shared_ptr(
          (std::shared_ptr<data::ConfigBaseStateLayer> *const)jval,
          0LL);
      }
      else
      {
        v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigBaseStateLayer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBaseStateLayer,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
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
            "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
            "parseFromJson",
            2034);
          v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                 (common::milog::MiLogStream *const)(v2 + 416),
                 (const std::string *)(v2 + 224));
          common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
          *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigBaseStateLayer>::shared_ptr(
            (std::shared_ptr<data::ConfigBaseStateLayer> *const)jval,
            0LL);
        }
        else
        {
          v10 = (__int64)std::__shared_ptr_access<data::ConfigBaseStateLayer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBaseStateLayer,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          v11 = *(_BYTE *)(((unsigned __int64)(v10 + 64) >> 3) + 0x7FFF8000);
          LOBYTE(v1) = v11 != 0;
          v12 = v11 < 0;
          if ( v12 )
            v10 = __asan_report_store1(v10 + 64, v1, v12);
          *(_BYTE *)(v10 + 64) = 1;
          std::shared_ptr<data::ConfigBaseStateLayer>::shared_ptr(
            (std::shared_ptr<data::ConfigBaseStateLayer> *const)jval,
            (std::shared_ptr<data::ConfigBaseStateLayer> *)(v2 + 64));
        }
      }
      std::shared_ptr<data::ConfigBaseStateLayer>::~shared_ptr((std::shared_ptr<data::ConfigBaseStateLayer> *const)(v2 + 64));
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
      "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
      "parseFromJson",
      2017);
    common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[53])"jsonValueFind for: ConfigBaseStateLayer $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigBaseStateLayer>::shared_ptr(
      (std::shared_ptr<data::ConfigBaseStateLayer> *const)jval,
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
  result._M_ptr = (std::__shared_ptr<data::ConfigBaseStateLayer,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 2042: range 000000001160B4A0-000000001160B61E
int32_t __cdecl data::ConfigBaseStateLayer::getHashValue(const data::ConfigBaseStateLayer *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:2043";
  *(_QWORD *)(v2 + 16) = data::ConfigBaseStateLayer::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->layer_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->layer_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->layer_index);
  }
  common::tools::HashUtils::appendHash(this->layer_index, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->layer_index_name, (int32_t *)(v2 + 32));
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

// Line 2053: range 0000000011694F94-00000000116951D5
void __cdecl data::ConfigNormalStateLayerRegister::ConfigNormalStateLayerRegister(
        data::ConfigNormalStateLayerRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigBaseStateLayer> *v4; // rax
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
  *(_QWORD *)(v1 + 16) = data::ConfigNormalStateLayerRegister::ConfigNormalStateLayerRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigNormalStateLayer>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigNormalStateLayer",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigBaseStateLayer>>::operator[](
         &data::g_ConfigBaseStateLayerMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigBaseStateLayer>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigBaseStateLayer>::operator=<data::ConfigNormalStateLayer>(
    v4,
    (std::shared_ptr<data::ConfigNormalStateLayer> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigNormalStateLayer>::~shared_ptr((std::shared_ptr<data::ConfigNormalStateLayer> *const)(v1 + 64));
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

// Line 2056: range 000000001160B620-000000001160B7F0
void __cdecl data::ConfigNormalStateLayer::foreachMember(
        data::ConfigNormalStateLayer *const this,
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
  *(_QWORD *)(v2 + 8) = "2 32 16 18 state_ids_any:2058 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigNormalStateLayer::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 64), p_func);
  data::ConfigBaseStateLayer::foreachMember(this, (std::function<void(std::any&)> *)(v2 + 64));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<std::unordered_map<std::string,std::shared_ptr<data::ConfigNormalStateIDInfo>> &,std::unordered_map<std::string,std::shared_ptr<data::ConfigNormalStateIDInfo>>,std::any::_Manager_external<std::unordered_map<std::string,std::shared_ptr<data::ConfigNormalStateIDInfo>>>,true,true>(
    (std::any *const)(v2 + 32),
    &this->state_ids);
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

// Line 2063: range 000000001160B7F2-000000001160B902
std::shared_ptr<data::ConfigBaseStateLayer> __cdecl data::ConfigNormalStateLayer::clone(
        data::ConfigNormalStateLayer *const this)
{
  data::ConfigNormalStateLayer *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigBaseStateLayer> result; // rax
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
  *(_QWORD *)(v2 + 16) = data::ConfigNormalStateLayer::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigNormalStateLayer,data::ConfigNormalStateLayer&>(
    (common::tools::perf::allocator<data::ConfigNormalStateLayer,data::ConfigNormalStateLayer> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigBaseStateLayer>::shared_ptr<data::ConfigNormalStateLayer,void>(
    (std::shared_ptr<data::ConfigBaseStateLayer> *const)this,
    (std::shared_ptr<data::ConfigNormalStateLayer> *)(v2 + 32));
  std::shared_ptr<data::ConfigNormalStateLayer>::~shared_ptr((std::shared_ptr<data::ConfigNormalStateLayer> *const)(v2 + 32));
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

// Line 2067: range 000000001160B904-000000001160B947
data::ConfigNormalStateLayerPtr __cdecl data::ConfigNormalStateLayerFactory::create(
        data::ConfigNormalStateLayerFactory *const this)
{
  data::ConfigNormalStateLayerPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigNormalStateLayer>();
  result._M_ptr = (std::__shared_ptr<data::ConfigNormalStateLayer,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 2069: range 000000001160B948-000000001160BDCC
bool __cdecl data::ConfigNormalStateLayer::fromJson(data::ConfigNormalStateLayer *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  data::ConfigNormalStateIDInfos *p_state_ids; // rsi
  const Json::Value *state_ids_ptr; // [rsp+18h] [rbp-128h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigNormalStateLayer::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  if ( !data::ConfigBaseStateLayer::fromJson(this, jval) )
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
      "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
      "fromJson",
      2072);
    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
      (common::milog::MiLogStream *const)(v2 + 64),
      (const char (*)[42])"fromJson for: ConfigBaseStateLayer fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 128),
      "stateIDs",
      (const std::allocator<char> *)(v2 + 48));
    p_state_ids = (data::ConfigNormalStateIDInfos *)(v2 + 128);
    state_ids_ptr = jsonValueFind(jval, (const std::string *)(v2 + 128));
    std::string::~string((void *)(v2 + 128));
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( state_ids_ptr && (p_state_ids = &this->state_ids, !data::mapFromJson(state_ids_ptr, &this->state_ids)) )
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
        "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
        "fromJson",
        2084);
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        (common::milog::MiLogStream *const)(v2 + 192),
        (const char (*)[30])"fromJson for: stateIDs fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      result = 0;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_json_loaded, p_state_ids, &this->is_json_loaded);
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

// Line 2091: range 000000001160BDCE-000000001160C914
data::ConfigNormalStateLayerPtr __cdecl data::ConfigNormalStateLayer::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigNormalStateLayerPtr result; // rax
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 13 base_ptr:2104 96 16 8 ptr:2110 128 32 9 <unknown> 192 32 9 <unknown"
                        "> 256 32 14 type_name:2098 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigNormalStateLayer::parseFromJson;
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
        "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
        "parseFromJson",
        2101);
      common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[50])"fromJson for: ConfigNormalStateLayer $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigNormalStateLayer>::shared_ptr(
        (std::shared_ptr<data::ConfigNormalStateLayer> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigBaseStateLayer((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigBaseStateLayer>(
             (const std::shared_ptr<data::ConfigBaseStateLayer> *)(v2 + 64),
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
          "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
          "parseFromJson",
          2107);
        v6 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[46])"create ConfigBaseStateLayer fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigNormalStateLayer>::shared_ptr(
          (std::shared_ptr<data::ConfigNormalStateLayer> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigNormalStateLayer,data::ConfigBaseStateLayer>((const std::shared_ptr<data::ConfigBaseStateLayer> *)(v2 + 96));
        if ( std::operator==<data::ConfigNormalStateLayer>(
               (const std::shared_ptr<data::ConfigNormalStateLayer> *)(v2 + 96),
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
            "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
            "parseFromJson",
            2113);
          common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[41])"cast to ConfigNormalStateLayerPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigNormalStateLayer>::shared_ptr(
            (std::shared_ptr<data::ConfigNormalStateLayer> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigNormalStateLayer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigNormalStateLayer,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
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
              "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
              "parseFromJson",
              2118);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigNormalStateLayer>::shared_ptr(
              (std::shared_ptr<data::ConfigNormalStateLayer> *const)jval,
              0LL);
          }
          else
          {
            v10 = (__int64)std::__shared_ptr_access<data::ConfigNormalStateLayer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigNormalStateLayer,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)(v10 + 64) >> 3) + 0x7FFF8000);
            LOBYTE(v1) = v11 != 0;
            v12 = v11 < 0;
            if ( v12 )
              v10 = __asan_report_store1(v10 + 64, v1, v12);
            *(_BYTE *)(v10 + 64) = 1;
            std::shared_ptr<data::ConfigNormalStateLayer>::shared_ptr(
              (std::shared_ptr<data::ConfigNormalStateLayer> *const)jval,
              (std::shared_ptr<data::ConfigNormalStateLayer> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigNormalStateLayer>::~shared_ptr((std::shared_ptr<data::ConfigNormalStateLayer> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigBaseStateLayer>::~shared_ptr((std::shared_ptr<data::ConfigBaseStateLayer> *const)(v2 + 64));
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
      "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
      "parseFromJson",
      2095);
    common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[55])"jsonValueFind for: ConfigNormalStateLayer $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigNormalStateLayer>::shared_ptr(
      (std::shared_ptr<data::ConfigNormalStateLayer> *const)jval,
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
  result._M_ptr = (std::__shared_ptr<data::ConfigNormalStateLayer,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 2126: range 000000001160C916-000000001160CA5F
int32_t __cdecl data::ConfigNormalStateLayer::getHashValue(const data::ConfigNormalStateLayer *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // edx
  char v6; // al
  int32_t MapHashValue; // eax
  int32_t result; // eax
  char v9[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:2127";
  *(_QWORD *)(v2 + 16) = data::ConfigNormalStateLayer::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigBaseStateLayer::getHashValue(this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  MapHashValue = data::getMapHashValue(&this->state_ids);
  common::tools::HashUtils::appendHash(MapHashValue, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v9 == (char *)v2 )
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

// Line 2133: range 000000001160CA60-000000001160D655
bool __cdecl data::mapFromJson(const Json::Value *jval, data::ConfigStateLayers *m)
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
  std::shared_ptr<data::ConfigBaseStateLayer> *v12; // r8
  common::milog::MiLogStream *v13; // rax
  int v14; // r14d
  std::pair<std::__detail::_Node_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseStateLayer> >,false,true>,bool> v15; // rax
  common::milog::MiLogStream *v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  int v19; // edx
  char v21[752]; // [rsp+20h] [rbp-2F0h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(704LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 48 16 8 cit:2135 80 16 9 <unknown> 112 16 10 value:2145 144 32 8 key:2138 208 32 9 <unknown> "
                        "272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 40 13 tmp_jval:2134 544 40 13 key_j"
                        "val:2137 624 40 15 value_jval:2144";
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
  v5[536862735] = -234881024;
  v5[536862736] = -218959118;
  v5[536862738] = -218959360;
  v5[536862739] = 62194;
  v5[536862740] = -218103808;
  v5[536862741] = -202116109;
  Json::Value::Value((Json::Value *)(v3 + 464), jval);
  if ( *(_WORD *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  Json::Value::begin((Json::Value_0 *const)(v3 + 464));
  while ( 1 )
  {
    *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) = 0;
    if ( *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    Json::Value::end((Json::Value_0 *const)(v3 + 464));
    v6 = Json::ValueIteratorBase::operator!=(
           (const Json::ValueIteratorBase *const)(v3 + 48),
           (const Json::ValueIteratorBase::SelfType *)(v3 + 80));
    *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) = -1800;
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
        "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
        "mapFromJson",
        2141);
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
      v11 = Json::ValueIterator::operator*((Json::ValueIterator *const)(v3 + 48));
      Json::Value::Value((Json::Value *)(v3 + 624), v11);
      *(_WORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v3 + 112) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::ConfigBaseStateLayer::parseFromJson((const Json::Value *)(v3 + 112));
      if ( std::operator==<data::ConfigBaseStateLayer>(
             (const std::shared_ptr<data::ConfigBaseStateLayer> *)(v3 + 112),
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
          "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
          "mapFromJson",
          2148);
        v13 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)(v3 + 336),
                (const char (*)[28])"value fromJson fails, key: ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, (const std::string *)(v3 + 144));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
        *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v14 = 0;
      }
      else
      {
        v15 = std::unordered_map<std::string,std::shared_ptr<data::ConfigBaseStateLayer>>::emplace<std::string&,std::shared_ptr<data::ConfigBaseStateLayer>&>(
                m,
                (std::string *)(v3 + 144),
                (std::shared_ptr<data::ConfigBaseStateLayer> *)(v3 + 112),
                (std::string *)(v3 + 144),
                v12);
        if ( !v15.second )
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
            "./src/json_data_auto/ComponentDefines/ConfigStateLayers.cpp",
            "mapFromJson",
            2153);
          v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 400),
                  (const char (*)[16])"key duplicate: ");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, (const std::string *)(v3 + 144));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 400));
          *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
          v2 = 0;
          v14 = 0;
        }
        else
        {
          v14 = 1;
        }
      }
      std::shared_ptr<data::ConfigBaseStateLayer>::~shared_ptr((std::shared_ptr<data::ConfigBaseStateLayer> *const)(v3 + 112));
      Json::Value::~Value((Json::Value_0 *const)(v3 + 624));
      v9 = v14 == 1;
    }
    std::string::~string((void *)(v3 + 144));
    Json::Value::~Value((Json::Value_0 *const)(v3 + 544));
    v17 = ((v3 + 544) >> 3) + 2147450880;
    *(_DWORD *)v17 = -117901064;
    *(_BYTE *)(v17 + 4) = -8;
    *(_DWORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = -117901064;
    v18 = ((v3 + 624) >> 3) + 2147450880;
    *(_DWORD *)v18 = -117901064;
    *(_BYTE *)(v18 + 4) = -8;
    *(_WORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = -1800;
    if ( !v9 )
    {
      v19 = 0;
      goto LABEL_34;
    }
    Json::ValueIterator::operator++((Json::ValueIterator *const)(v3 + 48));
  }
  v19 = 1;
LABEL_34:
  *(_WORD *)(((v3 + 48) >> 3) + 0x7FFF8000) = -1800;
  if ( v19 == 1 )
    v2 = 1;
  Json::Value::~Value((Json::Value_0 *const)(v3 + 464));
  if ( v21 == (char *)v3 )
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

// Line 2162: range 000000001160D656-000000001160D965
int32_t __cdecl data::getMapHashValue(const data::ConfigStateLayers *map)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  int32_t v7; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseStateLayer> >,false,true>::reference v9; // [rsp+18h] [rbp-B8h]
  std::tuple_element<0,std::pair<const std::string,std::shared_ptr<data::ConfigBaseStateLayer> > >::type *key; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<const std::string,std::shared_ptr<data::ConfigBaseStateLayer> > >::type *val; // [rsp+28h] [rbp-A8h]
  char v12[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 hash_code:2163 64 8 16 __for_begin:2164 96 8 14 __for_end:2164";
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
  *(std::unordered_map<std::string,std::shared_ptr<data::ConfigBaseStateLayer>>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,std::shared_ptr<data::ConfigBaseStateLayer>>::begin(map);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<std::string,std::shared_ptr<data::ConfigBaseStateLayer>>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,std::shared_ptr<data::ConfigBaseStateLayer>>::end(map);
  while ( std::__detail::operator!=<std::pair<std::string const,std::shared_ptr<data::ConfigBaseStateLayer>>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::shared_ptr<data::ConfigBaseStateLayer> >,true> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::shared_ptr<data::ConfigBaseStateLayer> >,true> *)(v2 + 96)) )
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<std::string const,std::shared_ptr<data::ConfigBaseStateLayer>>,false,true>::operator*((const std::__detail::_Node_const_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseStateLayer> >,false,true> *const)(v2 + 64));
    key = std::get<0ul,std::string const,std::shared_ptr<data::ConfigBaseStateLayer>>(v9);
    val = (std::tuple_element<1,const std::pair<const std::string,std::shared_ptr<data::ConfigBaseStateLayer> > >::type *)std::get<1ul,std::string const,std::shared_ptr<data::ConfigBaseStateLayer>>(v9);
    common::tools::HashUtils::appendHash(key, (int32_t *)(v2 + 48));
    if ( std::operator!=<data::ConfigBaseStateLayer>(0LL, val) )
    {
      v5 = (unsigned __int64)std::__shared_ptr_access<data::ConfigBaseStateLayer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBaseStateLayer,(__gnu_cxx::_Lock_policy)2,false,false> *const)val);
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8(v5);
      v6 = *(_QWORD *)v5 + 56LL;
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8(*(_QWORD *)v5 + 56LL);
      v7 = (*(__int64 (__fastcall **)(unsigned __int64))v6)(v5);
      common::tools::HashUtils::appendHash(v7, (int32_t *)(v2 + 48));
    }
    std::__detail::_Node_const_iterator<std::pair<std::string const,std::shared_ptr<data::ConfigBaseStateLayer>>,false,true>::operator++((std::__detail::_Node_const_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseStateLayer> >,false,true> *const)(v2 + 64));
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

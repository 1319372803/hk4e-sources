// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp

// Line 19: range 000000000FE27900-000000000FE27C7A
const char *__cdecl data::enumValToStr(data::AbilityTargetting e)
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
    case Self_0:
      result = "Self";
      break;
    case Caster:
      result = "Caster";
      break;
    case Target:
      result = "Target";
      break;
    case SelfAttackTarget:
      result = "SelfAttackTarget";
      break;
    case Other_7:
      result = "Other";
      break;
    case Applier:
      result = "Applier";
      break;
    case Owner_1:
      result = "Owner";
      break;
    case CurTeamAvatars:
      result = "CurTeamAvatars";
      break;
    case CurLocalAvatar:
      result = "CurLocalAvatar";
      break;
    case OriginOwner_1:
      result = "OriginOwner";
      break;
    case Team_0:
      result = "Team";
      break;
    case TargetOwner:
      result = "TargetOwner";
      break;
    case TargetOriginOwner:
      result = "TargetOriginOwner";
      break;
    case AllPlayerAvatars:
      result = "AllPlayerAvatars";
      break;
    case AllTeams_0:
      result = "AllTeams";
      break;
    case RemoteTeams:
      result = "RemoteTeams";
      break;
    case TargetTeam:
      result = "TargetTeam";
      break;
    case CasterOwner:
      result = "CasterOwner";
      break;
    case CasterOriginOwner:
      result = "CasterOriginOwner";
      break;
    case MPLevel_0:
      result = "MPLevel";
      break;
    case Vehicle_0:
      result = "Vehicle";
      break;
    case PropOwner:
      result = "PropOwner";
      break;
    case ApplierOriginOnwer:
      result = "ApplierOriginOnwer";
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
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
        "enumValToStr",
        69);
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
      result = byte_1A5DA060;
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

// Line 75: range 000000000FE27C7B-000000000FE290F6
bool __cdecl data::enumStrToVal(const std::string *s, data::AbilityTargetting *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  std::pair<const std::string,data::AbilityTargetting> *i; // r14
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::AbilityTargetting> >::pointer v10; // rax
  data::AbilityTargetting second; // ecx
  char v12; // dl
  bool v13; // bl
  data::AbilityTargetting *ea; // [rsp+10h] [rbp-6E0h]
  char v16[1744]; // [rsp+20h] [rbp-6D0h] BYREF

  ea = e;
  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1696LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "30 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 4 9"
                        " <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unknown> 208 4 9 <unkn"
                        "own> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 4 9 <unknown> 288 4 9 <unknown> 3"
                        "04 4 9 <unknown> 320 4 9 <unknown> 336 4 9 <unknown> 352 4 9 <unknown> 368 4 9 <unknown> 384 4 9"
                        " <unknown> 400 4 9 <unknown> 416 4 9 <unknown> 432 4 9 <unknown> 448 8 6 it:107 480 8 9 <unknown"
                        "> 512 32 9 <unknown> 576 32 9 <unknown> 640 920 9 <unknown>";
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
  v4[536862733] = -234556924;
  v4[536862734] = -218959360;
  v4[536862735] = -218959360;
  v4[536862737] = -218959118;
  v4[536862739] = -218959118;
  v4[536862768] = -218103808;
  v4[536862769] = -202116109;
  v4[536862770] = -202116109;
  v4[536862771] = -202116109;
  v4[536862772] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
  {
    if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 96 + 127) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 512, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 512),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
      "enumStrToVal",
      78);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 512),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
    v5 = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::AbilityTargetting &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::AbilityTargetting &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::AbilityTargetting>::pair<char const(&)[5],data::AbilityTargetting,true>(
        (std::pair<const std::string,data::AbilityTargetting> *const)(v2 + 640),
        (const char (*)[5])"Self",
        (data::AbilityTargetting *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "Self");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::AbilityTargetting>::pair<char const(&)[7],data::AbilityTargetting,true>(
        (std::pair<const std::string,data::AbilityTargetting> *const)(v2 + 680),
        (const char (*)[7])"Caster",
        (data::AbilityTargetting *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "Caster");
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::AbilityTargetting>::pair<char const(&)[7],data::AbilityTargetting,true>(
        (std::pair<const std::string,data::AbilityTargetting> *const)(v2 + 720),
        (const char (*)[7])"Target",
        (data::AbilityTargetting *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "Target");
      *(_DWORD *)(v2 + 128) = 3;
      std::pair<std::string const,data::AbilityTargetting>::pair<char const(&)[17],data::AbilityTargetting,true>(
        (std::pair<const std::string,data::AbilityTargetting> *const)(v2 + 760),
        (const char (*)[17])"SelfAttackTarget",
        (data::AbilityTargetting *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "SelfAttackTarget");
      *(_DWORD *)(v2 + 144) = 4;
      std::pair<std::string const,data::AbilityTargetting>::pair<char const(&)[6],data::AbilityTargetting,true>(
        (std::pair<const std::string,data::AbilityTargetting> *const)(v2 + 800),
        (const char (*)[6])"Other",
        (data::AbilityTargetting *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "Other");
      *(_DWORD *)(v2 + 160) = 5;
      std::pair<std::string const,data::AbilityTargetting>::pair<char const(&)[8],data::AbilityTargetting,true>(
        (std::pair<const std::string,data::AbilityTargetting> *const)(v2 + 840),
        (const char (*)[8])"Applier",
        (data::AbilityTargetting *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, "Applier");
      *(_DWORD *)(v2 + 176) = 6;
      std::pair<std::string const,data::AbilityTargetting>::pair<char const(&)[6],data::AbilityTargetting,true>(
        (std::pair<const std::string,data::AbilityTargetting> *const)(v2 + 880),
        (const char (*)[6])"Owner",
        (data::AbilityTargetting *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, "Owner");
      *(_DWORD *)(v2 + 192) = 7;
      std::pair<std::string const,data::AbilityTargetting>::pair<char const(&)[15],data::AbilityTargetting,true>(
        (std::pair<const std::string,data::AbilityTargetting> *const)(v2 + 920),
        (const char (*)[15])"CurTeamAvatars",
        (data::AbilityTargetting *)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 208, "CurTeamAvatars");
      *(_DWORD *)(v2 + 208) = 8;
      std::pair<std::string const,data::AbilityTargetting>::pair<char const(&)[15],data::AbilityTargetting,true>(
        (std::pair<const std::string,data::AbilityTargetting> *const)(v2 + 960),
        (const char (*)[15])"CurLocalAvatar",
        (data::AbilityTargetting *)(v2 + 208));
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 224, "CurLocalAvatar");
      *(_DWORD *)(v2 + 224) = 9;
      std::pair<std::string const,data::AbilityTargetting>::pair<char const(&)[12],data::AbilityTargetting,true>(
        (std::pair<const std::string,data::AbilityTargetting> *const)(v2 + 1000),
        (const char (*)[12])"OriginOwner",
        (data::AbilityTargetting *)(v2 + 224));
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 240, "OriginOwner");
      *(_DWORD *)(v2 + 240) = 10;
      std::pair<std::string const,data::AbilityTargetting>::pair<char const(&)[5],data::AbilityTargetting,true>(
        (std::pair<const std::string,data::AbilityTargetting> *const)(v2 + 1040),
        (const char (*)[5])"Team",
        (data::AbilityTargetting *)(v2 + 240));
      if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 256, "Team");
      *(_DWORD *)(v2 + 256) = 11;
      std::pair<std::string const,data::AbilityTargetting>::pair<char const(&)[12],data::AbilityTargetting,true>(
        (std::pair<const std::string,data::AbilityTargetting> *const)(v2 + 1080),
        (const char (*)[12])"TargetOwner",
        (data::AbilityTargetting *)(v2 + 256));
      if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 272, "TargetOwner");
      *(_DWORD *)(v2 + 272) = 12;
      std::pair<std::string const,data::AbilityTargetting>::pair<char const(&)[18],data::AbilityTargetting,true>(
        (std::pair<const std::string,data::AbilityTargetting> *const)(v2 + 1120),
        (const char (*)[18])"TargetOriginOwner",
        (data::AbilityTargetting *)(v2 + 272));
      if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 288, "TargetOriginOwner");
      *(_DWORD *)(v2 + 288) = 13;
      std::pair<std::string const,data::AbilityTargetting>::pair<char const(&)[17],data::AbilityTargetting,true>(
        (std::pair<const std::string,data::AbilityTargetting> *const)(v2 + 1160),
        (const char (*)[17])"AllPlayerAvatars",
        (data::AbilityTargetting *)(v2 + 288));
      if ( *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 304, "AllPlayerAvatars");
      *(_DWORD *)(v2 + 304) = 14;
      std::pair<std::string const,data::AbilityTargetting>::pair<char const(&)[9],data::AbilityTargetting,true>(
        (std::pair<const std::string,data::AbilityTargetting> *const)(v2 + 1200),
        (const char (*)[9])"AllTeams",
        (data::AbilityTargetting *)(v2 + 304));
      if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 320, "AllTeams");
      *(_DWORD *)(v2 + 320) = 15;
      std::pair<std::string const,data::AbilityTargetting>::pair<char const(&)[12],data::AbilityTargetting,true>(
        (std::pair<const std::string,data::AbilityTargetting> *const)(v2 + 1240),
        (const char (*)[12])"RemoteTeams",
        (data::AbilityTargetting *)(v2 + 320));
      if ( *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 336, "RemoteTeams");
      *(_DWORD *)(v2 + 336) = 16;
      std::pair<std::string const,data::AbilityTargetting>::pair<char const(&)[11],data::AbilityTargetting,true>(
        (std::pair<const std::string,data::AbilityTargetting> *const)(v2 + 1280),
        (const char (*)[11])"TargetTeam",
        (data::AbilityTargetting *)(v2 + 336));
      if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 352, "TargetTeam");
      *(_DWORD *)(v2 + 352) = 17;
      std::pair<std::string const,data::AbilityTargetting>::pair<char const(&)[12],data::AbilityTargetting,true>(
        (std::pair<const std::string,data::AbilityTargetting> *const)(v2 + 1320),
        (const char (*)[12])"CasterOwner",
        (data::AbilityTargetting *)(v2 + 352));
      if ( *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 368, "CasterOwner");
      *(_DWORD *)(v2 + 368) = 18;
      std::pair<std::string const,data::AbilityTargetting>::pair<char const(&)[18],data::AbilityTargetting,true>(
        (std::pair<const std::string,data::AbilityTargetting> *const)(v2 + 1360),
        (const char (*)[18])"CasterOriginOwner",
        (data::AbilityTargetting *)(v2 + 368));
      if ( *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 384, "CasterOriginOwner");
      *(_DWORD *)(v2 + 384) = 19;
      std::pair<std::string const,data::AbilityTargetting>::pair<char const(&)[8],data::AbilityTargetting,true>(
        (std::pair<const std::string,data::AbilityTargetting> *const)(v2 + 1400),
        (const char (*)[8])"MPLevel",
        (data::AbilityTargetting *)(v2 + 384));
      if ( *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 400, "MPLevel");
      *(_DWORD *)(v2 + 400) = 20;
      std::pair<std::string const,data::AbilityTargetting>::pair<char const(&)[8],data::AbilityTargetting,true>(
        (std::pair<const std::string,data::AbilityTargetting> *const)(v2 + 1440),
        (const char (*)[8])"Vehicle",
        (data::AbilityTargetting *)(v2 + 400));
      if ( *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 416, "Vehicle");
      *(_DWORD *)(v2 + 416) = 21;
      std::pair<std::string const,data::AbilityTargetting>::pair<char const(&)[10],data::AbilityTargetting,true>(
        (std::pair<const std::string,data::AbilityTargetting> *const)(v2 + 1480),
        (const char (*)[10])"PropOwner",
        (data::AbilityTargetting *)(v2 + 416));
      if ( *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 432, "PropOwner");
      *(_DWORD *)(v2 + 432) = 22;
      std::pair<std::string const,data::AbilityTargetting>::pair<char const(&)[19],data::AbilityTargetting,true>(
        (std::pair<const std::string,data::AbilityTargetting> *const)(v2 + 1520),
        (const char (*)[19])"ApplierOriginOnwer",
        (data::AbilityTargetting *)(v2 + 432));
      std::allocator<std::pair<std::string const,data::AbilityTargetting>>::allocator((std::allocator<std::pair<const std::string,data::AbilityTargetting> > *const)(v2 + 64));
      std::map<std::string,data::AbilityTargetting>::map(
        &data::enumStrToVal(std::string const&,data::AbilityTargetting &)::m,
        (std::initializer_list<std::pair<const std::string,data::AbilityTargetting> >)__PAIR128__(23LL, v2 + 640),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::AbilityTargetting>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::AbilityTargetting &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::AbilityTargetting>::~map,
        &data::enumStrToVal(std::string const&,data::AbilityTargetting &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::AbilityTargetting>>::~allocator((std::allocator<std::pair<const std::string,data::AbilityTargetting> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::AbilityTargetting> *)(v2 + 1560);
            i != (std::pair<const std::string,data::AbilityTargetting> *)(v2 + 640);
            std::pair<std::string const,data::AbilityTargetting>::~pair(i) )
      {
        --i;
      }
      e = (data::AbilityTargetting *)920;
      __asan_poison_stack_memory(v2 + 640, 920LL);
      *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = -8;
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
    *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 448, e);
    *(std::map<std::string,data::AbilityTargetting>::iterator *)(v2 + 448) = std::map<std::string,data::AbilityTargetting>::find(
                                                                               &data::enumStrToVal(std::string const&,data::AbilityTargetting &)::m,
                                                                               s);
    *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 480, s);
    *(std::map<std::string,data::AbilityTargetting>::iterator *)(v2 + 480) = std::map<std::string,data::AbilityTargetting>::end(&data::enumStrToVal(std::string const&,data::AbilityTargetting &)::m);
    v7 = (char *)(v2 + 480);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::AbilityTargetting> >::_Self *)(v2 + 448),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::AbilityTargetting> >::_Self *)(v2 + 480));
    *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
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
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
        "enumStrToVal",
        110);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 576),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
      v5 = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::AbilityTargetting>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::AbilityTargetting> > *const)(v2 + 448));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80CC) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862741) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450956 - (((_DWORD)v4 + 2147450964) & 0xFFFFFFF8) + 136) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1696LL, v16);
  }
  return v13;
};

// Line 118: range 000000000FE290F7-000000000FE2921D
const char *__cdecl data::getDescription(data::AbilityTargetting e)
{
  const char *result; // rax

  switch ( e )
  {
    case Self_0:
      result = "Ability/Modifier owner, notice modifier can be applyied to other target.";
      break;
    case Caster:
      result = "Ability owner, always point to the *Caster* of this ability.";
      break;
    case Target:
      result = "target, conditionally points to target on events like BeingHit/EvadeSucess.";
      break;
    case SelfAttackTarget:
      result = "SelfAttackTarget, points to self's attack target";
      break;
    case Other_7:
      result = "other";
      break;
    case Applier:
      result = "modifier applier";
      break;
    case Owner_1:
      result = "owner entity";
      break;
    case CurTeamAvatars:
      result = "cur team avatars";
      break;
    case CurLocalAvatar:
      result = "cur local avatar";
      break;
    case OriginOwner_1:
      result = "origial owner entity";
      break;
    case Team_0:
      result = "Team Entity";
      break;
    case TargetOwner:
      result = "target owner";
      break;
    case TargetOriginOwner:
      result = "target origin owner";
      break;
    case AllPlayerAvatars:
      result = "all player avatars";
      break;
    case AllTeams_0:
      result = "All Teams Entities";
      break;
    case RemoteTeams:
      result = "Remote Teams Entities";
      break;
    case TargetTeam:
      result = "Target Team Entity";
      break;
    case CasterOwner:
      result = "Caster Owner";
      break;
    case CasterOriginOwner:
      result = "Caster Origin Owner";
      break;
    case MPLevel_0:
      result = "MPLevel entity";
      break;
    case Vehicle_0:
      result = "the Vehicle added in version 1.6";
      break;
    case PropOwner:
      result = "self propowner, only used for gadget which created using propowner.";
      break;
    case ApplierOriginOnwer:
      result = "applier's originowner, if originOwner is null, return self";
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 173: range 000000000FE2921E-000000000FE294BC
const char *__cdecl data::enumValToStr(data::RelationalOperator e)
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
    case Greater_1:
      result = "Greater";
      break;
    case GreaterOrEqual_0:
      result = "GreaterOrEqual";
      break;
    case Equal_1:
      result = "Equal";
      break;
    case Lesser:
      result = "Lesser";
      break;
    case LesserOrEqual:
      result = "LesserOrEqual";
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
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
        "enumValToStr",
        187);
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
      result = byte_1A5DA060;
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

// Line 193: range 000000000FE294BD-000000000FE29F27
bool __cdecl data::enumStrToVal(const std::string *s, data::RelationalOperator *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::RelationalOperator> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::RelationalOperator> >::pointer v11; // rax
  data::RelationalOperator second; // ecx
  char v13; // dl
  data::RelationalOperator *ea; // [rsp+10h] [rbp-2A0h]
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
                        "<unknown> 128 4 9 <unknown> 144 8 6 it:207 176 8 9 <unknown> 208 32 9 <unknown> 272 32 9 <unknow"
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
      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
      "enumStrToVal",
      196);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 208),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 208));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::RelationalOperator &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::RelationalOperator &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::RelationalOperator>::pair<char const(&)[8],data::RelationalOperator,true>(
        (std::pair<const std::string,data::RelationalOperator> *const)(v2 + 336),
        (const char (*)[8])"Greater",
        (data::RelationalOperator *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "Greater");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::RelationalOperator>::pair<char const(&)[15],data::RelationalOperator,true>(
        (std::pair<const std::string,data::RelationalOperator> *const)(v2 + 376),
        (const char (*)[15])"GreaterOrEqual",
        (data::RelationalOperator *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "GreaterOrEqual");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::RelationalOperator>::pair<char const(&)[6],data::RelationalOperator,true>(
        (std::pair<const std::string,data::RelationalOperator> *const)(v2 + 416),
        (const char (*)[6])"Equal",
        (data::RelationalOperator *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "Equal");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::RelationalOperator>::pair<char const(&)[7],data::RelationalOperator,true>(
        (std::pair<const std::string,data::RelationalOperator> *const)(v2 + 456),
        (const char (*)[7])"Lesser",
        (data::RelationalOperator *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "Lesser");
      *(_DWORD *)(v2 + 128) = 4;
      std::pair<std::string const,data::RelationalOperator>::pair<char const(&)[14],data::RelationalOperator,true>(
        (std::pair<const std::string,data::RelationalOperator> *const)(v2 + 496),
        (const char (*)[14])"LesserOrEqual",
        (data::RelationalOperator *)(v2 + 128));
      std::allocator<std::pair<std::string const,data::RelationalOperator>>::allocator((std::allocator<std::pair<const std::string,data::RelationalOperator> > *const)(v2 + 48));
      std::map<std::string,data::RelationalOperator>::map(
        &data::enumStrToVal(std::string const&,data::RelationalOperator &)::m,
        (std::initializer_list<std::pair<const std::string,data::RelationalOperator> >)__PAIR128__(5LL, v2 + 336),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::RelationalOperator>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::RelationalOperator &)::m);
      e = (data::RelationalOperator *)&data::enumStrToVal(std::string const&,data::RelationalOperator &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::RelationalOperator>::~map,
        &data::enumStrToVal(std::string const&,data::RelationalOperator &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::RelationalOperator>>::~allocator((std::allocator<std::pair<const std::string,data::RelationalOperator> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::RelationalOperator> *)(v2 + 536);
            i != (std::pair<const std::string,data::RelationalOperator> *)(v2 + 336);
            std::pair<std::string const,data::RelationalOperator>::~pair(i) )
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
    *(std::map<std::string,data::RelationalOperator>::iterator *)(v2 + 144) = std::map<std::string,data::RelationalOperator>::find(
                                                                                &data::enumStrToVal(std::string const&,data::RelationalOperator &)::m,
                                                                                s);
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, s);
    *(std::map<std::string,data::RelationalOperator>::iterator *)(v2 + 176) = std::map<std::string,data::RelationalOperator>::end(&data::enumStrToVal(std::string const&,data::RelationalOperator &)::m);
    v8 = (char *)(v2 + 176);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::RelationalOperator> >::_Self *)(v2 + 144),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::RelationalOperator> >::_Self *)(v2 + 176));
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
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
        "enumStrToVal",
        210);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 272),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 272));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::RelationalOperator>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::RelationalOperator> > *const)(v2 + 144));
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

// Line 218: range 000000000FE29F28-000000000FE29F8D
const char *__cdecl data::getDescription(data::RelationalOperator e)
{
  const char *result; // rax

  switch ( e )
  {
    case Greater_1:
      result = (const char *)&unk_1A6D6A60;
      break;
    case GreaterOrEqual_0:
      result = (const char *)&unk_1A6D6AA0;
      break;
    case Equal_1:
      result = (const char *)&unk_1A6D6AE0;
      break;
    case Lesser:
      result = (const char *)&unk_1A6D6B20;
      break;
    case LesserOrEqual:
      result = (const char *)&unk_1A6D6B60;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 237: range 000000000FE29F8E-000000000FE2A229
const char *__cdecl data::enumValToStr(data::MixinTargetting e)
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
  if ( e == All_8 )
  {
    result = off_1A689B40;
  }
  else
  {
    if ( e <= All_8 )
    {
      switch ( e )
      {
        case Enemy_0:
          result = "Enemy";
          goto LABEL_19;
        case None_46:
          result = "None";
          goto LABEL_19;
        case Allied:
          result = "Allied";
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
      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
      "enumValToStr",
      249);
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
    result = byte_1A5DA060;
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

// Line 255: range 000000000FE2A22A-000000000FE2ABAE
bool __cdecl data::enumStrToVal(const std::string *s, data::MixinTargetting *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::MixinTargetting> *i; // r14
  _DWORD *v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::MixinTargetting> >::pointer v11; // rax
  data::MixinTargetting second; // ecx
  char v13; // dl
  data::MixinTargetting *ea; // [rsp+10h] [rbp-260h]
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
                        "<unknown> 128 8 6 it:268 160 8 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 160 9 <unknown>";
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
      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
      "enumStrToVal",
      258);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::MixinTargetting &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::MixinTargetting &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::MixinTargetting>::pair<char const(&)[5],data::MixinTargetting,true>(
        (std::pair<const std::string,data::MixinTargetting> *const)(v2 + 320),
        (const char (*)[5])"None",
        (data::MixinTargetting *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "None");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::MixinTargetting>::pair<char const(&)[7],data::MixinTargetting,true>(
        (std::pair<const std::string,data::MixinTargetting> *const)(v2 + 360),
        (const char (*)[7])"Allied",
        (data::MixinTargetting *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "Allied");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::MixinTargetting>::pair<char const(&)[6],data::MixinTargetting,true>(
        (std::pair<const std::string,data::MixinTargetting> *const)(v2 + 400),
        (const char (*)[6])"Enemy",
        (data::MixinTargetting *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "Enemy");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::MixinTargetting>::pair<char const(&)[4],data::MixinTargetting,true>(
        (std::pair<const std::string,data::MixinTargetting> *const)(v2 + 440),
        (const char (*)[4])off_1A689B40,
        (data::MixinTargetting *)(v2 + 112));
      std::allocator<std::pair<std::string const,data::MixinTargetting>>::allocator((std::allocator<std::pair<const std::string,data::MixinTargetting> > *const)(v2 + 48));
      std::map<std::string,data::MixinTargetting>::map(
        &data::enumStrToVal(std::string const&,data::MixinTargetting &)::m,
        (std::initializer_list<std::pair<const std::string,data::MixinTargetting> >)__PAIR128__(4LL, v2 + 320),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::MixinTargetting>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::MixinTargetting &)::m);
      e = (data::MixinTargetting *)&data::enumStrToVal(std::string const&,data::MixinTargetting &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::MixinTargetting>::~map,
        &data::enumStrToVal(std::string const&,data::MixinTargetting &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::MixinTargetting>>::~allocator((std::allocator<std::pair<const std::string,data::MixinTargetting> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::MixinTargetting> *)(v2 + 480);
            i != (std::pair<const std::string,data::MixinTargetting> *)(v2 + 320);
            std::pair<std::string const,data::MixinTargetting>::~pair(i) )
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
    *(std::map<std::string,data::MixinTargetting>::iterator *)(v2 + 128) = std::map<std::string,data::MixinTargetting>::find(
                                                                             &data::enumStrToVal(std::string const&,data::MixinTargetting &)::m,
                                                                             s);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, s);
    *(std::map<std::string,data::MixinTargetting>::iterator *)(v2 + 160) = std::map<std::string,data::MixinTargetting>::end(&data::enumStrToVal(std::string const&,data::MixinTargetting &)::m);
    v8 = (char *)(v2 + 160);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::MixinTargetting> >::_Self *)(v2 + 128),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::MixinTargetting> >::_Self *)(v2 + 160));
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
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
        "enumStrToVal",
        271);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 256),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::MixinTargetting>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::MixinTargetting> > *const)(v2 + 128));
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

// Line 279: range 000000000FE2ABAF-000000000FE2AC08
const char *__cdecl data::getDescription(data::MixinTargetting e)
{
  if ( e == All_8 )
    return off_1A689B40;
  if ( e <= All_8 )
  {
    switch ( e )
    {
      case Enemy_0:
        return "Enemy";
      case None_46:
        return "None";
      case Allied:
        return "Allied";
    }
  }
  return "unknown enum value!";
};

// Line 296: range 000000000FE2AC09-000000000FE2AE68
const char *__cdecl data::enumValToStr(data::PropertyType e)
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
    if ( e == Actor )
    {
      result = "Actor";
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
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
        "enumValToStr",
        304);
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
      result = byte_1A5DA060;
    }
  }
  else
  {
    result = "Entity";
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

// Line 310: range 000000000FE2AE69-000000000FE2B6A0
bool __cdecl data::enumStrToVal(const std::string *s, data::PropertyType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::PropertyType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::PropertyType> >::pointer v11; // rax
  data::PropertyType second; // ecx
  char v13; // dl
  data::PropertyType *ea; // [rsp+10h] [rbp-1E0h]
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
  *(_QWORD *)(v2 + 8) = "9 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 8 6 it:321 144 8 9 <un"
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
      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
      "enumStrToVal",
      313);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 176),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::PropertyType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::PropertyType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::PropertyType>::pair<char const(&)[7],data::PropertyType,true>(
        (std::pair<const std::string,data::PropertyType> *const)(v2 + 304),
        (const char (*)[7])"Entity",
        (data::PropertyType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "Entity");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::PropertyType>::pair<char const(&)[6],data::PropertyType,true>(
        (std::pair<const std::string,data::PropertyType> *const)(v2 + 344),
        (const char (*)[6])"Actor",
        (data::PropertyType *)(v2 + 96));
      std::allocator<std::pair<std::string const,data::PropertyType>>::allocator((std::allocator<std::pair<const std::string,data::PropertyType> > *const)(v2 + 64));
      std::map<std::string,data::PropertyType>::map(
        &data::enumStrToVal(std::string const&,data::PropertyType &)::m,
        (std::initializer_list<std::pair<const std::string,data::PropertyType> >)__PAIR128__(2LL, v2 + 304),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::PropertyType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::PropertyType &)::m);
      e = (data::PropertyType *)&data::enumStrToVal(std::string const&,data::PropertyType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::PropertyType>::~map,
        &data::enumStrToVal(std::string const&,data::PropertyType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::PropertyType>>::~allocator((std::allocator<std::pair<const std::string,data::PropertyType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::PropertyType> *)(v2 + 384);
            i != (std::pair<const std::string,data::PropertyType> *)(v2 + 304);
            std::pair<std::string const,data::PropertyType>::~pair(i) )
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
    *(std::map<std::string,data::PropertyType>::iterator *)(v2 + 112) = std::map<std::string,data::PropertyType>::find(
                                                                          &data::enumStrToVal(std::string const&,data::PropertyType &)::m,
                                                                          s);
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 144, s);
    *(std::map<std::string,data::PropertyType>::iterator *)(v2 + 144) = std::map<std::string,data::PropertyType>::end(&data::enumStrToVal(std::string const&,data::PropertyType &)::m);
    v8 = (char *)(v2 + 144);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::PropertyType> >::_Self *)(v2 + 112),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::PropertyType> >::_Self *)(v2 + 144));
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
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
        "enumStrToVal",
        324);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 240),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::PropertyType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::PropertyType> > *const)(v2 + 112));
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

// Line 332: range 000000000FE2B6A1-000000000FE2B6D0
const char *__cdecl data::getDescription(data::PropertyType e)
{
  if ( e == Entity )
    return byte_1A5DA060;
  if ( e == Actor )
    return byte_1A5DA060;
  return "unknown enum value!";
};

// Line 345: range 000000000FE2B6D1-000000000FE2B96C
const char *__cdecl data::enumValToStr(data::StackMethod e)
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
  if ( e == OneMinusMultiplied )
  {
    result = "OneMinusMultiplied";
  }
  else
  {
    if ( e <= OneMinusMultiplied )
    {
      switch ( e )
      {
        case Multiplied:
          result = "Multiplied";
          goto LABEL_19;
        case Top:
          result = off_1A6D6E40;
          goto LABEL_19;
        case Sum:
          result = off_1A6D6E80;
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
      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
      "enumValToStr",
      357);
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
    result = byte_1A5DA060;
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

// Line 363: range 000000000FE2B96D-000000000FE2C2F1
bool __cdecl data::enumStrToVal(const std::string *s, data::StackMethod *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::StackMethod> *i; // r14
  _DWORD *v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::StackMethod> >::pointer v11; // rax
  data::StackMethod second; // ecx
  char v13; // dl
  data::StackMethod *ea; // [rsp+10h] [rbp-260h]
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
                        "<unknown> 128 8 6 it:376 160 8 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 160 9 <unknown>";
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
      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
      "enumStrToVal",
      366);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::StackMethod &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::StackMethod &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::StackMethod>::pair<char const(&)[4],data::StackMethod,true>(
        (std::pair<const std::string,data::StackMethod> *const)(v2 + 320),
        (const char (*)[4])off_1A6D6E40,
        (data::StackMethod *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, off_1A6D6E40);
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::StackMethod>::pair<char const(&)[4],data::StackMethod,true>(
        (std::pair<const std::string,data::StackMethod> *const)(v2 + 360),
        (const char (*)[4])off_1A6D6E80,
        (data::StackMethod *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, off_1A6D6E80);
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::StackMethod>::pair<char const(&)[11],data::StackMethod,true>(
        (std::pair<const std::string,data::StackMethod> *const)(v2 + 400),
        (const char (*)[11])"Multiplied",
        (data::StackMethod *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "Multiplied");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::StackMethod>::pair<char const(&)[19],data::StackMethod,true>(
        (std::pair<const std::string,data::StackMethod> *const)(v2 + 440),
        (const char (*)[19])"OneMinusMultiplied",
        (data::StackMethod *)(v2 + 112));
      std::allocator<std::pair<std::string const,data::StackMethod>>::allocator((std::allocator<std::pair<const std::string,data::StackMethod> > *const)(v2 + 48));
      std::map<std::string,data::StackMethod>::map(
        &data::enumStrToVal(std::string const&,data::StackMethod &)::m,
        (std::initializer_list<std::pair<const std::string,data::StackMethod> >)__PAIR128__(4LL, v2 + 320),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::StackMethod>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::StackMethod &)::m);
      e = (data::StackMethod *)&data::enumStrToVal(std::string const&,data::StackMethod &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::StackMethod>::~map,
        &data::enumStrToVal(std::string const&,data::StackMethod &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::StackMethod>>::~allocator((std::allocator<std::pair<const std::string,data::StackMethod> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::StackMethod> *)(v2 + 480);
            i != (std::pair<const std::string,data::StackMethod> *)(v2 + 320);
            std::pair<std::string const,data::StackMethod>::~pair(i) )
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
    *(std::map<std::string,data::StackMethod>::iterator *)(v2 + 128) = std::map<std::string,data::StackMethod>::find(
                                                                         &data::enumStrToVal(std::string const&,data::StackMethod &)::m,
                                                                         s);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, s);
    *(std::map<std::string,data::StackMethod>::iterator *)(v2 + 160) = std::map<std::string,data::StackMethod>::end(&data::enumStrToVal(std::string const&,data::StackMethod &)::m);
    v8 = (char *)(v2 + 160);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::StackMethod> >::_Self *)(v2 + 128),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::StackMethod> >::_Self *)(v2 + 160));
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
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
        "enumStrToVal",
        379);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 256),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::StackMethod>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::StackMethod> > *const)(v2 + 128));
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

// Line 387: range 000000000FE2C2F2-000000000FE2C34B
const char *__cdecl data::getDescription(data::StackMethod e)
{
  if ( e == OneMinusMultiplied )
    return "(1-a) * (1-b)";
  if ( e <= OneMinusMultiplied )
  {
    switch ( e )
    {
      case Multiplied:
        return "a * b";
      case Top:
        return (const char *)&off_1A6D7020;
      case Sum:
        return "a + b";
    }
  }
  return "unknown enum value!";
};

// Line 404: range 000000000FE2C34C-000000000FE2C628
bool __cdecl data::vecFromJson(const Json::Value *jval, data::AbilityStateList *v)
{
  bool v2; // r15
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int v6; // eax
  bool result; // al
  std::vector<data::AbilityState> *va; // [rsp+0h] [rbp-D0h]
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
  *(_QWORD *)(v3 + 8) = "2 32 8 8 elem:410 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = data::vecFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
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
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 0;
      if ( !fromJson<data::AbilityState>(elem_jval, (data::AbilityState *)(v3 + 32)) )
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
          "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
          "vecFromJson",
          413);
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
        std::vector<data::AbilityState>::push_back(va, (const std::vector<data::AbilityState>::value_type *)(v3 + 32));
        v6 = 2;
      }
    }
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
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

// Line 423: range 000000000FE2C629-000000000FE2C894
int32_t __cdecl data::getVecHashValue(const data::AbilityStateList *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  __gnu_cxx::__normal_iterator<const data::AbilityState*,std::vector<data::AbilityState> >::reference v5; // rax
  int32_t result; // eax
  const data::AbilityState *elem; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:424 64 8 15 __for_begin:425 96 8 13 __for_end:425";
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
  *(std::vector<data::AbilityState>::const_iterator *)(v2 + 64) = std::vector<data::AbilityState>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::AbilityState>::const_iterator *)(v2 + 96) = std::vector<data::AbilityState>::end(vec);
  while ( __gnu_cxx::operator!=<data::AbilityState const*,std::vector<data::AbilityState>>(
            (const __gnu_cxx::__normal_iterator<const data::AbilityState*,std::vector<data::AbilityState> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::AbilityState*,std::vector<data::AbilityState> > *)(v2 + 96)) )
  {
    v5 = __gnu_cxx::__normal_iterator<data::AbilityState const*,std::vector<data::AbilityState>>::operator*((const __gnu_cxx::__normal_iterator<const data::AbilityState*,std::vector<data::AbilityState> > *const)(v2 + 64));
    elem = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v5);
    common::tools::HashUtils::appendHash(*elem, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::AbilityState const*,std::vector<data::AbilityState>>::operator++((__gnu_cxx::__normal_iterator<const data::AbilityState*,std::vector<data::AbilityState> > *const)(v2 + 64));
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

// Line 433: range 000000000FE2C895-000000000FE2CB71
bool __cdecl data::arrFromJson(const Json::Value *jval, data::AbilityStateArray *v)
{
  bool v2; // r15
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int v6; // eax
  bool result; // al
  std::vector<data::AbilityState> *va; // [rsp+0h] [rbp-D0h]
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
  *(_QWORD *)(v3 + 8) = "2 32 8 8 elem:439 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = data::arrFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
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
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 0;
      if ( !fromJson<data::AbilityState>(elem_jval, (data::AbilityState *)(v3 + 32)) )
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
          "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
          "arrFromJson",
          442);
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
        std::vector<data::AbilityState>::push_back(va, (const std::vector<data::AbilityState>::value_type *)(v3 + 32));
        v6 = 2;
      }
    }
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
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

// Line 452: range 000000000FE2CB72-000000000FE2CDDD
int32_t __cdecl data::getArrHashValue(const data::AbilityStateArray *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  __gnu_cxx::__normal_iterator<const data::AbilityState*,std::vector<data::AbilityState> >::reference v5; // rax
  int32_t result; // eax
  const data::AbilityState *elem; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:453 64 8 15 __for_begin:454 96 8 13 __for_end:454";
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
  *(std::vector<data::AbilityState>::const_iterator *)(v2 + 64) = std::vector<data::AbilityState>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::AbilityState>::const_iterator *)(v2 + 96) = std::vector<data::AbilityState>::end(vec);
  while ( __gnu_cxx::operator!=<data::AbilityState const*,std::vector<data::AbilityState>>(
            (const __gnu_cxx::__normal_iterator<const data::AbilityState*,std::vector<data::AbilityState> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::AbilityState*,std::vector<data::AbilityState> > *)(v2 + 96)) )
  {
    v5 = __gnu_cxx::__normal_iterator<data::AbilityState const*,std::vector<data::AbilityState>>::operator*((const __gnu_cxx::__normal_iterator<const data::AbilityState*,std::vector<data::AbilityState> > *const)(v2 + 64));
    elem = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v5);
    common::tools::HashUtils::appendHash(*elem, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::AbilityState const*,std::vector<data::AbilityState>>::operator++((__gnu_cxx::__normal_iterator<const data::AbilityState*,std::vector<data::AbilityState> > *const)(v2 + 64));
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

// Line 464: range 000000000FE2CDDE-000000000FE2CDF1
int32_t __cdecl data::DynamicArgument::getHashValue(const data::DynamicArgument *const this)
{
  return 0;
};

// Line 470: range 000000000FE2CDF2-000000000FE2DA6F
bool __cdecl data::mapFromJson(const Json::Value *jval, data::DynamicArgumentMap *m)
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
  unsigned __int64 v12; // rax
  data::DynamicArgument *v13; // r8
  common::milog::MiLogStream *v14; // rax
  int v15; // r14d
  std::pair<std::__detail::_Node_iterator<std::pair<const std::string,data::DynamicArgument>,false,true>,bool> v16; // rax
  common::milog::MiLogStream *v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  int v21; // edx
  char v24[784]; // [rsp+20h] [rbp-310h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(736LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 48 16 7 cit:472 80 16 9 <unknown> 112 24 9 value:482 176 32 7 key:475 240 32 9 <unknown> 304 "
                        "32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496 40 12 tmp_jval:471 576 40 12 key_jval:4"
                        "74 656 40 14 value_jval:481";
  *(_QWORD *)(v3 + 16) = data::mapFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = 62194;
  v5[536862723] = 62194;
  v5[536862724] = -218959360;
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
  v5[536862736] = -234881024;
  v5[536862737] = -218959118;
  v5[536862739] = -218959360;
  v5[536862740] = 62194;
  v5[536862741] = -218103808;
  v5[536862742] = -202116109;
  Json::Value::Value((Json::Value *)(v3 + 496), jval);
  if ( *(_WORD *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  Json::Value::begin((Json::Value_0 *const)(v3 + 496));
  while ( 1 )
  {
    *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) = 0;
    if ( *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    Json::Value::end((Json::Value_0 *const)(v3 + 496));
    v6 = Json::ValueIteratorBase::operator!=(
           (const Json::ValueIteratorBase *const)(v3 + 48),
           (const Json::ValueIteratorBase::SelfType *)(v3 + 80));
    *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) = -1800;
    if ( !v6 )
      break;
    v7 = ((v3 + 576) >> 3) + 2147450880;
    *(_DWORD *)v7 = 0;
    *(_BYTE *)(v7 + 4) = 0;
    if ( *(char *)(((v3 + 576) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 615) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 103) & 7) >= *(_BYTE *)(((v3 + 615) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 576, 40LL);
    }
    Json::ValueIteratorBase::key((Json::ValueIteratorBase *)(v3 + 576));
    *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 176);
    if ( !fromJson<std::string>((const Json::Value *)(v3 + 576), (std::string *)(v3 + 176)) )
    {
      *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 32 + 47) & 7) >= *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 240, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 240),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
        "mapFromJson",
        478);
      v8 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             (common::milog::MiLogStream *const)(v3 + 240),
             (const char (*)[21])"key fromJson fails: ");
      *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 304) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 32 + 111) & 7) >= *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 304, 32LL);
      }
      Json::Value::asString[abi:cxx11]((Json::String *)(v3 + 304), (Json::Value_0 *)(v3 + 576));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v3 + 304));
      std::string::~string((void *)(v3 + 304));
      *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 240));
      *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
      v9 = 0;
    }
    else
    {
      v10 = ((v3 + 656) >> 3) + 2147450880;
      *(_DWORD *)v10 = 0;
      *(_BYTE *)(v10 + 4) = 0;
      v11 = Json::ValueIterator::operator*((Json::ValueIterator *const)(v3 + 48));
      Json::Value::Value((Json::Value *)(v3 + 656), v11);
      v12 = ((v3 + 112) >> 3) + 2147450880;
      *(_WORD *)v12 = 0;
      *(_BYTE *)(v12 + 2) = 0;
      if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 112, v11);
      *(_QWORD *)(v3 + 112) = 0LL;
      if ( *(_BYTE *)(((v3 + 120) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 120, v11);
      *(_QWORD *)(v3 + 120) = 0LL;
      if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(v3 + 128, v11, v3 + 128);
      *(_BYTE *)(v3 + 128) = 0;
      if ( !data::DynamicArgument::fromJson((data::DynamicArgument *const)(v3 + 112), (const Json::Value *)(v3 + 656)) )
      {
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
          3u,
          "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
          "mapFromJson",
          485);
        v14 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)(v3 + 368),
                (const char (*)[28])"value fromJson fails, key: ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, (const std::string *)(v3 + 176));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 368));
        *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v15 = 0;
      }
      else
      {
        v16 = std::unordered_map<std::string,data::DynamicArgument>::emplace<std::string&,data::DynamicArgument&>(
                m,
                (std::string *)(v3 + 176),
                (data::DynamicArgument *)(v3 + 112),
                (std::string *)(v3 + 176),
                v13);
        if ( !v16.second )
        {
          *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 432) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 432, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 432),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
            "mapFromJson",
            490);
          v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 432),
                  (const char (*)[16])"key duplicate: ");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, (const std::string *)(v3 + 176));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
          *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = -117901064;
          v2 = 0;
          v15 = 0;
        }
        else
        {
          v15 = 1;
        }
      }
      data::DynamicArgument::~DynamicArgument((data::DynamicArgument *const)(v3 + 112));
      Json::Value::~Value((Json::Value_0 *const)(v3 + 656));
      v9 = v15 == 1;
    }
    std::string::~string((void *)(v3 + 176));
    Json::Value::~Value((Json::Value_0 *const)(v3 + 576));
    v18 = ((v3 + 576) >> 3) + 2147450880;
    *(_DWORD *)v18 = -117901064;
    *(_BYTE *)(v18 + 4) = -8;
    *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -117901064;
    v19 = ((v3 + 656) >> 3) + 2147450880;
    *(_DWORD *)v19 = -117901064;
    *(_BYTE *)(v19 + 4) = -8;
    v20 = ((v3 + 112) >> 3) + 2147450880;
    *(_WORD *)v20 = -1800;
    *(_BYTE *)(v20 + 2) = -8;
    if ( !v9 )
    {
      v21 = 0;
      goto LABEL_38;
    }
    Json::ValueIterator::operator++((Json::ValueIterator *const)(v3 + 48));
  }
  v21 = 1;
LABEL_38:
  *(_WORD *)(((v3 + 48) >> 3) + 0x7FFF8000) = -1800;
  if ( v21 == 1 )
    v2 = 1;
  Json::Value::~Value((Json::Value_0 *const)(v3 + 496));
  if ( v24 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8054) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 92) & 0xFFFFFFF8) >> 3));
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8058) = -168430091;
  }
  return v2;
};

// Line 499: range 000000000FE2DA70-000000000FE2DD17
int32_t __cdecl data::getMapHashValue(const data::DynamicArgumentMap *map)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::DynamicArgument>,false,true>::reference v7; // [rsp+18h] [rbp-B8h]
  std::tuple_element<0,std::pair<const std::string,data::DynamicArgument> >::type *key; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<const std::string,data::DynamicArgument> >::type *val; // [rsp+28h] [rbp-A8h]
  char v10[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:500 64 8 15 __for_begin:501 96 8 13 __for_end:501";
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
  *(std::unordered_map<std::string,data::DynamicArgument>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::DynamicArgument>::begin(map);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<std::string,data::DynamicArgument>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::DynamicArgument>::end(map);
  while ( std::__detail::operator!=<std::pair<std::string const,data::DynamicArgument>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::DynamicArgument>,true> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::DynamicArgument>,true> *)(v2 + 96)) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::DynamicArgument>,false,true>::operator*((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::DynamicArgument>,false,true> *const)(v2 + 64));
    key = std::get<0ul,std::string const,data::DynamicArgument>(v7);
    val = (std::tuple_element<1,const std::pair<const std::string,data::DynamicArgument> >::type *)std::get<1ul,std::string const,data::DynamicArgument>(v7);
    common::tools::HashUtils::appendHash(key, (int32_t *)(v2 + 48));
    HashValue = data::DynamicArgument::getHashValue(val);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    std::__detail::_Node_const_iterator<std::pair<std::string const,data::DynamicArgument>,false,true>::operator++((std::__detail::_Node_const_iterator<std::pair<const std::string,data::DynamicArgument>,false,true> *const)(v2 + 64));
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

// Line 513: range 000000000FE2DD18-000000000FE2E06D
bool __cdecl data::TargettingOption::fromJson(data::TargettingOption *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const Json::Value *v5; // rsi
  bool result; // al
  const Json::Value *range_ptr; // [rsp+18h] [rbp-E8h]
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
  *(_QWORD *)(v2 + 16) = data::TargettingOption::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 64),
    "range",
    (const std::allocator<char> *)(v2 + 48));
  v5 = (const Json::Value *)(v2 + 64);
  range_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( range_ptr && (v5 = range_ptr, !data::DynamicFloat::fromJson(&this->range, range_ptr)) )
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
      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
      "fromJson",
      523);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[27])"fromJson for: range fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    result = 0;
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_json_loaded, v5, &this->is_json_loaded);
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

// Line 531: range 000000000FE2E06E-000000000FE2E1A8
int32_t __cdecl data::TargettingOption::getHashValue(const data::TargettingOption *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:532";
  *(_QWORD *)(v2 + 16) = data::TargettingOption::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  HashValue = data::DynamicFloat::getHashValue(&this->range);
  common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 32));
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

// Line 538: range 000000000FE2E1A9-000000000FE2E453
const char *__cdecl data::enumValToStr(data::SelectTargetsSortType e)
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
    case Default_10:
      result = "Default";
      break;
    case Reversed:
      result = "Reversed";
      break;
    case Nearest:
      result = "Nearest";
      break;
    case Random:
      result = "Random";
      break;
    case HigherScore:
      result = "HigherScore";
      break;
    case LowHpRatio:
      result = "LowHpRatio";
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
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
        "enumValToStr",
        554);
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
      result = byte_1A5DA060;
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

// Line 560: range 000000000FE2E454-000000000FE2EF5C
bool __cdecl data::enumStrToVal(const std::string *s, data::SelectTargetsSortType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::SelectTargetsSortType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::SelectTargetsSortType> >::pointer v11; // rax
  data::SelectTargetsSortType second; // ecx
  char v13; // dl
  data::SelectTargetsSortType *ea; // [rsp+10h] [rbp-2E0h]
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
                        " <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 8 6 it:575 208 8 9 <unknown> 240 32 9 <unknow"
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
      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
      "enumStrToVal",
      563);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 240),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::SelectTargetsSortType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::SelectTargetsSortType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::SelectTargetsSortType>::pair<char const(&)[8],data::SelectTargetsSortType,true>(
        (std::pair<const std::string,data::SelectTargetsSortType> *const)(v2 + 368),
        (const char (*)[8])"Default",
        (data::SelectTargetsSortType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "Default");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::SelectTargetsSortType>::pair<char const(&)[9],data::SelectTargetsSortType,true>(
        (std::pair<const std::string,data::SelectTargetsSortType> *const)(v2 + 408),
        (const char (*)[9])"Reversed",
        (data::SelectTargetsSortType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "Reversed");
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::SelectTargetsSortType>::pair<char const(&)[8],data::SelectTargetsSortType,true>(
        (std::pair<const std::string,data::SelectTargetsSortType> *const)(v2 + 448),
        (const char (*)[8])"Nearest",
        (data::SelectTargetsSortType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "Nearest");
      *(_DWORD *)(v2 + 128) = 3;
      std::pair<std::string const,data::SelectTargetsSortType>::pair<char const(&)[7],data::SelectTargetsSortType,true>(
        (std::pair<const std::string,data::SelectTargetsSortType> *const)(v2 + 488),
        (const char (*)[7])"Random",
        (data::SelectTargetsSortType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "Random");
      *(_DWORD *)(v2 + 144) = 4;
      std::pair<std::string const,data::SelectTargetsSortType>::pair<char const(&)[12],data::SelectTargetsSortType,true>(
        (std::pair<const std::string,data::SelectTargetsSortType> *const)(v2 + 528),
        (const char (*)[12])"HigherScore",
        (data::SelectTargetsSortType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "HigherScore");
      *(_DWORD *)(v2 + 160) = 5;
      std::pair<std::string const,data::SelectTargetsSortType>::pair<char const(&)[11],data::SelectTargetsSortType,true>(
        (std::pair<const std::string,data::SelectTargetsSortType> *const)(v2 + 568),
        (const char (*)[11])"LowHpRatio",
        (data::SelectTargetsSortType *)(v2 + 160));
      std::allocator<std::pair<std::string const,data::SelectTargetsSortType>>::allocator((std::allocator<std::pair<const std::string,data::SelectTargetsSortType> > *const)(v2 + 64));
      std::map<std::string,data::SelectTargetsSortType>::map(
        &data::enumStrToVal(std::string const&,data::SelectTargetsSortType &)::m,
        (std::initializer_list<std::pair<const std::string,data::SelectTargetsSortType> >)__PAIR128__(6LL, v2 + 368),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::SelectTargetsSortType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::SelectTargetsSortType &)::m);
      e = (data::SelectTargetsSortType *)&data::enumStrToVal(std::string const&,data::SelectTargetsSortType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::SelectTargetsSortType>::~map,
        &data::enumStrToVal(std::string const&,data::SelectTargetsSortType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::SelectTargetsSortType>>::~allocator((std::allocator<std::pair<const std::string,data::SelectTargetsSortType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::SelectTargetsSortType> *)(v2 + 608);
            i != (std::pair<const std::string,data::SelectTargetsSortType> *)(v2 + 368);
            std::pair<std::string const,data::SelectTargetsSortType>::~pair(i) )
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
    *(std::map<std::string,data::SelectTargetsSortType>::iterator *)(v2 + 176) = std::map<std::string,data::SelectTargetsSortType>::find(
                                                                                   &data::enumStrToVal(std::string const&,data::SelectTargetsSortType &)::m,
                                                                                   s);
    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 208, s);
    *(std::map<std::string,data::SelectTargetsSortType>::iterator *)(v2 + 208) = std::map<std::string,data::SelectTargetsSortType>::end(&data::enumStrToVal(std::string const&,data::SelectTargetsSortType &)::m);
    v8 = (char *)(v2 + 208);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::SelectTargetsSortType> >::_Self *)(v2 + 176),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::SelectTargetsSortType> >::_Self *)(v2 + 208));
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
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
        "enumStrToVal",
        578);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 304),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::SelectTargetsSortType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::SelectTargetsSortType> > *const)(v2 + 176));
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

// Line 586: range 000000000FE2EF5D-000000000FE2EFCB
const char *__cdecl data::getDescription(data::SelectTargetsSortType e)
{
  const char *result; // rax

  switch ( e )
  {
    case Default_10:
      result = (const char *)&unk_1A6D75A0;
      break;
    case Reversed:
      result = (const char *)&unk_1A6D75E0;
      break;
    case Nearest:
      result = (const char *)&unk_1A6D7620;
      break;
    case Random:
      result = (const char *)&unk_1A6D7660;
      break;
    case HigherScore:
      result = (const char *)&unk_1A6D76A0;
      break;
    case LowHpRatio:
      result = (const char *)&unk_1A6D76E0;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 608: range 000000000FE2EFCC-000000000FE2F201
data::SelectTargetsPtr __cdecl data::createSelectTargets(const std::string *name)
{
  const std::map<std::string,std::shared_ptr<data::SelectTargets>>::key_type *v1; // rsi
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::SelectTargets> > > *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool v5; // al
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::SelectTargets> > >::pointer v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  void (__fastcall *v9)(const std::string *, unsigned __int64); // rcx
  data::SelectTargetsPtr result; // rax
  char v11[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::SelectTargets> > > *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::SelectTargets> > > *)v3;
  }
  v2->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::SelectTargets> > >::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::SelectTargets> > >::_Base_ptr)"2 32 8 6 it:609 64 8 9 <unknown>";
  v2[2]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::SelectTargets> > >::_Base_ptr)data::createSelectTargets;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], v1);
  v2[4]._M_node = std::map<std::string,std::shared_ptr<data::SelectTargets>>::find(
                    &data::g_SelectTargetsMap[abi:cxx11],
                    v1)._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], v1);
  v2[8]._M_node = std::map<std::string,std::shared_ptr<data::SelectTargets>>::end(&data::g_SelectTargetsMap[abi:cxx11])._M_node;
  v5 = std::operator!=(v2 + 4, v2 + 8);
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
  {
    v6 = std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<data::SelectTargets>>>::operator->(v2 + 4);
    v7 = (unsigned __int64)std::__shared_ptr_access<data::SelectTargets,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SelectTargets,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v6->second);
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
    std::shared_ptr<data::SelectTargets>::shared_ptr((std::shared_ptr<data::SelectTargets> *const)name, 0LL);
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::SelectTargets> > >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<data::SelectTargets,(__gnu_cxx::_Lock_policy)2>::element_type *)name;
  return result;
};

// Line 615: range 000000000FE2F202-000000000FE2F3F6
void __cdecl data::SelectTargets::foreachMember(
        data::SelectTargets *const this,
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
  v2->_M_storage._M_ptr = "3 32 16 17 top_limit_any:616 64 16 28 entity_type_priority_any:618 96 16 17 sort_type_any:620";
  v2[1]._M_manager = (void (*)(std::any::_Op, const std::any *, std::any::_Arg *))data::SelectTargets::foreachMember;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  std::any::any<int &,int,std::any::_Manager_internal<int>,true,true>(v2 + 2, &this->top_limit);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 2);
  std::any::any<std::vector<data::EntityType> &,std::vector<data::EntityType>,std::any::_Manager_external<std::vector<data::EntityType>>,true,true>(
    v2 + 4,
    &this->entity_type_priority);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 4);
  std::any::any<data::SelectTargetsSortType &,data::SelectTargetsSortType,std::any::_Manager_internal<data::SelectTargetsSortType>,true,true>(
    v2 + 6,
    &this->sort_type);
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

// Line 625: range 000000000FE2F3F8-000000000FE2F442
std::shared_ptr<data::SelectTargets> __cdecl data::SelectTargets::clone(data::SelectTargets *const this)
{
  data::SelectTargets *v1; // rsi
  std::shared_ptr<data::SelectTargets> result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::SelectTargets,data::SelectTargets&>(
    (common::tools::perf::allocator<data::SelectTargets,data::SelectTargets> *)this,
    v1);
  result._M_ptr = this;
  return result;
};

// Line 629: range 000000000FE2F444-000000000FE2FDD8
bool __cdecl data::SelectTargets::fromJson(data::SelectTargets *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  bool v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rdx
  const Json::Value *top_limit_ptr; // [rsp+18h] [rbp-268h]
  const Json::Value *entity_type_priority_ptr; // [rsp+20h] [rbp-260h]
  Json::Value *sort_type_ptr; // [rsp+28h] [rbp-258h]
  char v12[592]; // [rsp+30h] [rbp-250h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(544LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 3"
                        "2 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::SelectTargets::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    "topLimit",
    (const std::allocator<char> *)(v2 + 48));
  top_limit_ptr = jsonValueFind(jval, (const std::string *)(v2 + 96));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( top_limit_ptr && !fromJson<int>(top_limit_ptr, &this->top_limit) )
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
      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
      "fromJson",
      639);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[30])"fromJson for: topLimit fails!");
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
      "entityTypePriority",
      (const std::allocator<char> *)(v2 + 64));
    entity_type_priority_ptr = jsonValueFind(jval, (const std::string *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( entity_type_priority_ptr && !data::arrFromJson(entity_type_priority_ptr, &this->entity_type_priority) )
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
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
        "fromJson",
        651);
      common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[40])"fromJson for: entityTypePriority fails!");
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
        "sortType",
        (const std::allocator<char> *)(v2 + 80));
      sort_type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 352));
      std::string::~string((void *)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( !sort_type_ptr )
        goto LABEL_21;
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 416, 32LL);
      }
      Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 416), (Json::Value_0 *)sort_type_ptr);
      v6 = !data::enumStrToVal((const std::string *)(v2 + 416), &this->sort_type);
      std::string::~string((void *)(v2 + 416));
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
      if ( v6 )
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
          "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
          "fromJson",
          663);
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
          (common::milog::MiLogStream *const)(v2 + 480),
          (const char (*)[30])"fromJson for: sortType fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
        result = 0;
      }
      else
      {
LABEL_21:
        v7 = ((_BYTE)this + 60) & 7;
        v8 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
        if ( (_BYTE)v8 )
          __asan_report_store1(&this->is_json_loaded, v7, v8);
        this->is_json_loaded = 1;
        result = 1;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
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

// Line 670: range 000000000FE2FDDA-000000000FE30736
data::SelectTargetsPtr __cdecl data::SelectTargets::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::SelectTargetsPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<data::SelectTargets,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
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
  *(_QWORD *)(v2 + 8) = "8 48 1 9 <unknown> 64 16 7 ptr:683 96 32 9 <unknown> 160 32 9 <unknown> 224 32 13 type_name:677 "
                        "288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::SelectTargets::parseFromJson;
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
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
        "parseFromJson",
        680);
      common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[41])"fromJson for: SelectTargets $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::SelectTargets>::shared_ptr((std::shared_ptr<data::SelectTargets> *const)jval, 0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createSelectTargets((const std::string *)(v2 + 64));
      if ( std::operator==<data::SelectTargets>((const std::shared_ptr<data::SelectTargets> *)(v2 + 64), 0LL) )
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
          "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
          "parseFromJson",
          686);
        v6 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
               (common::milog::MiLogStream *const)(v2 + 352),
               (const char (*)[39])"create SelectTargets fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 224));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
        *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::SelectTargets>::shared_ptr((std::shared_ptr<data::SelectTargets> *const)jval, 0LL);
      }
      else
      {
        v7 = (unsigned __int64)std::__shared_ptr_access<data::SelectTargets,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SelectTargets,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
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
            "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
            "parseFromJson",
            691);
          v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                 (common::milog::MiLogStream *const)(v2 + 416),
                 (const std::string *)(v2 + 224));
          common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
          *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::SelectTargets>::shared_ptr((std::shared_ptr<data::SelectTargets> *const)jval, 0LL);
        }
        else
        {
          v10 = std::__shared_ptr_access<data::SelectTargets,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SelectTargets,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          v11 = *(_BYTE *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000);
          if ( v11 != 0 && (((unsigned __int8)v10 + 60) & 7) >= v11 )
          {
            LOBYTE(v1) = v11 != 0;
            __asan_report_store1(&v10->is_json_loaded, v1, v10);
          }
          v10->is_json_loaded = 1;
          std::shared_ptr<data::SelectTargets>::shared_ptr(
            (std::shared_ptr<data::SelectTargets> *const)jval,
            (std::shared_ptr<data::SelectTargets> *)(v2 + 64));
        }
      }
      std::shared_ptr<data::SelectTargets>::~shared_ptr((std::shared_ptr<data::SelectTargets> *const)(v2 + 64));
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
      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
      "parseFromJson",
      674);
    common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[46])"jsonValueFind for: SelectTargets $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::SelectTargets>::shared_ptr((std::shared_ptr<data::SelectTargets> *const)jval, 0LL);
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
  result._M_ptr = (std::__shared_ptr<data::SelectTargets,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 699: range 000000000FE30738-000000000FE30908
int32_t __cdecl data::SelectTargets::getHashValue(const data::SelectTargets *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t ArrHashValue; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:700";
  *(_QWORD *)(v2 + 16) = data::SelectTargets::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->top_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->top_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->top_limit);
  }
  common::tools::HashUtils::appendHash(this->top_limit, (int32_t *)(v2 + 32));
  ArrHashValue = data::getArrHashValue(&this->entity_type_priority);
  common::tools::HashUtils::appendHash(ArrHashValue, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->sort_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sort_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->sort_type);
  }
  common::tools::HashUtils::appendHash(this->sort_type, (int32_t *)(v2 + 32));
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

// Line 711: range 000000001015A29E-000000001015A4DF
void __cdecl data::SelectTargetsByShapeRegister::SelectTargetsByShapeRegister(
        data::SelectTargetsByShapeRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::SelectTargets> *v4; // rax
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
  *(_QWORD *)(v1 + 16) = data::SelectTargetsByShapeRegister::SelectTargetsByShapeRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::SelectTargetsByShape>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "SelectTargetsByShape",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::SelectTargets>>::operator[](
         &data::g_SelectTargetsMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::SelectTargets>>::key_type *)(v1 + 96));
  std::shared_ptr<data::SelectTargets>::operator=<data::SelectTargetsByShape>(
    v4,
    (std::shared_ptr<data::SelectTargetsByShape> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::SelectTargetsByShape>::~shared_ptr((std::shared_ptr<data::SelectTargetsByShape> *const)(v1 + 64));
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

// Line 714: range 000000000FE3090A-000000000FE30CEB
void __cdecl data::SelectTargetsByShape::foreachMember(
        data::SelectTargetsByShape *const this,
        std::function<void(std::any&)> *p_func)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5[304]; // [rsp+10h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 16 18 shape_name_any:716 64 16 23 center_based_on_any:718 96 16 24 camp_target_type_any:720"
                        " 128 16 21 camp_based_on_any:722 160 16 18 size_ratio_any:724 192 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::SelectTargetsByShape::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862727] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 192), p_func);
  data::SelectTargets::foreachMember(this, (std::function<void(std::any&)> *)(v2 + 192));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 192));
  *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<std::string &,std::string,std::any::_Manager_external<std::string>,true,true>(
    (std::any *const)(v2 + 32),
    &this->shape_name);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 32));
  *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
  std::any::any<data::AbilityTargetting &,data::AbilityTargetting,std::any::_Manager_internal<data::AbilityTargetting>,true,true>(
    (std::any *const)(v2 + 64),
    &this->center_based_on);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 64));
  *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  std::any::any<data::TargetType &,data::TargetType,std::any::_Manager_internal<data::TargetType>,true,true>(
    (std::any *const)(v2 + 96),
    &this->camp_target_type);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 96));
  *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  std::any::any<data::AbilityTargetting &,data::AbilityTargetting,std::any::_Manager_internal<data::AbilityTargetting>,true,true>(
    (std::any *const)(v2 + 128),
    &this->camp_based_on);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 128));
  *(_WORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
  std::any::any<data::DynamicFloat &,data::DynamicFloat,std::any::_Manager_external<data::DynamicFloat>,true,true>(
    (std::any *const)(v2 + 160),
    &this->size_ratio);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 160));
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
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 729: range 000000000FE30CEC-000000000FE30DFC
std::shared_ptr<data::SelectTargets> __cdecl data::SelectTargetsByShape::clone(data::SelectTargetsByShape *const this)
{
  data::SelectTargetsByShape *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::SelectTargets> result; // rax
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
  *(_QWORD *)(v2 + 16) = data::SelectTargetsByShape::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::SelectTargetsByShape,data::SelectTargetsByShape&>(
    (common::tools::perf::allocator<data::SelectTargetsByShape,data::SelectTargetsByShape> *)(v2 + 32),
    v1);
  std::shared_ptr<data::SelectTargets>::shared_ptr<data::SelectTargetsByShape,void>(
    (std::shared_ptr<data::SelectTargets> *const)this,
    (std::shared_ptr<data::SelectTargetsByShape> *)(v2 + 32));
  std::shared_ptr<data::SelectTargetsByShape>::~shared_ptr((std::shared_ptr<data::SelectTargetsByShape> *const)(v2 + 32));
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

// Line 733: range 000000000FE30DFE-000000000FE30E41
data::SelectTargetsByShapePtr __cdecl data::SelectTargetsByShapeFactory::create(
        data::SelectTargetsByShapeFactory *const this)
{
  data::SelectTargetsByShapePtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::SelectTargetsByShape>();
  result._M_ptr = (std::__shared_ptr<data::SelectTargetsByShape,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 735: range 000000000FE30E42-000000000FE32020
bool __cdecl data::SelectTargetsByShape::fromJson(data::SelectTargetsByShape *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  bool v6; // r14
  bool v7; // r14
  bool v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rdx
  const Json::Value *shape_name_ptr; // [rsp+18h] [rbp-458h]
  Json::Value *center_based_on_ptr; // [rsp+20h] [rbp-450h]
  Json::Value *camp_target_type_ptr; // [rsp+28h] [rbp-448h]
  Json::Value *camp_based_on_ptr; // [rsp+30h] [rbp-440h]
  const Json::Value *size_ratio_ptr; // [rsp+38h] [rbp-438h]
  char v16[1072]; // [rsp+40h] [rbp-430h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(1024LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "19 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 32 "
                        "9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9"
                        " <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 "
                        "<unknown> 832 32 9 <unknown> 896 32 9 <unknown> 960 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::SelectTargetsByShape::fromJson;
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
  v4[536862743] = -218959118;
  v4[536862745] = -218959118;
  v4[536862747] = -218959118;
  v4[536862749] = -218959118;
  v4[536862751] = -202116109;
  if ( !data::SelectTargets::fromJson(this, jval) )
  {
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
      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
      "fromJson",
      738);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[35])"fromJson for: SelectTargets fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 192),
      "shapeName",
      (const std::allocator<char> *)(v2 + 48));
    shape_name_ptr = jsonValueFind(jval, (const std::string *)(v2 + 192));
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( shape_name_ptr && !fromJson<std::string>(shape_name_ptr, &this->shape_name) )
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
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
        "fromJson",
        750);
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
        (common::milog::MiLogStream *const)(v2 + 256),
        (const char (*)[31])"fromJson for: shapeName fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 320),
        "centerBasedOn",
        (const std::allocator<char> *)(v2 + 64));
      center_based_on_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 320));
      std::string::~string((void *)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( !center_based_on_ptr )
        goto LABEL_20;
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 384) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 384, 32LL);
      }
      Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 384), (Json::Value_0 *)center_based_on_ptr);
      v6 = !data::enumStrToVal((const std::string *)(v2 + 384), &this->center_based_on);
      std::string::~string((void *)(v2 + 384));
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
      if ( v6 )
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
          "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
          "fromJson",
          762);
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
          (common::milog::MiLogStream *const)(v2 + 448),
          (const char (*)[35])"fromJson for: centerBasedOn fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
        result = 0;
      }
      else
      {
LABEL_20:
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 512),
          "campTargetType",
          (const std::allocator<char> *)(v2 + 80));
        camp_target_type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 512));
        std::string::~string((void *)(v2 + 512));
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( !camp_target_type_ptr )
          goto LABEL_27;
        *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 576) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 576, 32LL);
        }
        Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 576), (Json::Value_0 *)camp_target_type_ptr);
        v7 = !data::enumStrToVal((const std::string *)(v2 + 576), &this->camp_target_type);
        std::string::~string((void *)(v2 + 576));
        *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
        if ( v7 )
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
            "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
            "fromJson",
            774);
          common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
            (common::milog::MiLogStream *const)(v2 + 640),
            (const char (*)[36])"fromJson for: campTargetType fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 640));
          result = 0;
        }
        else
        {
LABEL_27:
          *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 96);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 704),
            "campBasedOn",
            (const std::allocator<char> *)(v2 + 96));
          camp_based_on_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 704));
          std::string::~string((void *)(v2 + 704));
          *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 96);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( !camp_based_on_ptr )
            goto LABEL_34;
          *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 768) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 768, 32LL);
          }
          Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 768), (Json::Value_0 *)camp_based_on_ptr);
          v8 = !data::enumStrToVal((const std::string *)(v2 + 768), &this->camp_based_on);
          std::string::~string((void *)(v2 + 768));
          *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
          if ( v8 )
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
              "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
              "fromJson",
              786);
            common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              (common::milog::MiLogStream *const)(v2 + 832),
              (const char (*)[33])"fromJson for: campBasedOn fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 832));
            result = 0;
          }
          else
          {
LABEL_34:
            *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 112);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 896),
              "sizeRatio",
              (const std::allocator<char> *)(v2 + 112));
            size_ratio_ptr = jsonValueFind(jval, (const std::string *)(v2 + 896));
            std::string::~string((void *)(v2 + 896));
            *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 112);
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
            if ( size_ratio_ptr && !data::DynamicFloat::fromJson(&this->size_ratio, size_ratio_ptr) )
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
                3u,
                "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
                "fromJson",
                798);
              common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                (common::milog::MiLogStream *const)(v2 + 960),
                (const char (*)[31])"fromJson for: sizeRatio fails!");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 960));
              result = 0;
            }
            else
            {
              v9 = ((_BYTE)this + 60) & 7;
              v10 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
              if ( (_BYTE)v10 )
                __asan_report_store1(&this->is_json_loaded, v9, v10);
              this->is_json_loaded = 1;
              result = 1;
            }
          }
        }
      }
    }
  }
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF807C) = 0;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8078) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 805: range 000000000FE32022-000000000FE32B6F
data::SelectTargetsByShapePtr __cdecl data::SelectTargetsByShape::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::SelectTargetsByShapePtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<data::SelectTargetsByShape,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 12 base_ptr:818 96 16 7 ptr:824 128 32 9 <unknown> 192 32 9 <unknown> "
                        "256 32 13 type_name:812 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::SelectTargetsByShape::parseFromJson;
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
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
        "parseFromJson",
        815);
      common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[48])"fromJson for: SelectTargetsByShape $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::SelectTargetsByShape>::shared_ptr(
        (std::shared_ptr<data::SelectTargetsByShape> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createSelectTargets((const std::string *)(v2 + 64));
      if ( std::operator==<data::SelectTargets>((const std::shared_ptr<data::SelectTargets> *)(v2 + 64), 0LL) )
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
          "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
          "parseFromJson",
          821);
        v6 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[39])"create SelectTargets fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::SelectTargetsByShape>::shared_ptr(
          (std::shared_ptr<data::SelectTargetsByShape> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::SelectTargetsByShape,data::SelectTargets>((const std::shared_ptr<data::SelectTargets> *)(v2 + 96));
        if ( std::operator==<data::SelectTargetsByShape>(
               (const std::shared_ptr<data::SelectTargetsByShape> *)(v2 + 96),
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
            "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
            "parseFromJson",
            827);
          common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[39])"cast to SelectTargetsByShapePtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::SelectTargetsByShape>::shared_ptr(
            (std::shared_ptr<data::SelectTargetsByShape> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::SelectTargetsByShape,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SelectTargetsByShape,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
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
              "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
              "parseFromJson",
              832);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::SelectTargetsByShape>::shared_ptr(
              (std::shared_ptr<data::SelectTargetsByShape> *const)jval,
              0LL);
          }
          else
          {
            v10 = std::__shared_ptr_access<data::SelectTargetsByShape,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SelectTargetsByShape,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000);
            if ( v11 != 0 && (((unsigned __int8)v10 + 60) & 7) >= v11 )
            {
              LOBYTE(v1) = v11 != 0;
              __asan_report_store1(&v10->is_json_loaded, v1, v10);
            }
            v10->is_json_loaded = 1;
            std::shared_ptr<data::SelectTargetsByShape>::shared_ptr(
              (std::shared_ptr<data::SelectTargetsByShape> *const)jval,
              (std::shared_ptr<data::SelectTargetsByShape> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::SelectTargetsByShape>::~shared_ptr((std::shared_ptr<data::SelectTargetsByShape> *const)(v2 + 96));
      }
      std::shared_ptr<data::SelectTargets>::~shared_ptr((std::shared_ptr<data::SelectTargets> *const)(v2 + 64));
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
      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
      "parseFromJson",
      809);
    common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[53])"jsonValueFind for: SelectTargetsByShape $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::SelectTargetsByShape>::shared_ptr(
      (std::shared_ptr<data::SelectTargetsByShape> *const)jval,
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
  result._M_ptr = (std::__shared_ptr<data::SelectTargetsByShape,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 840: range 000000000FE32B70-000000000FE32DB4
int32_t __cdecl data::SelectTargetsByShape::getHashValue(const data::SelectTargetsByShape *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // edx
  char v6; // al
  int32_t v7; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:841";
  *(_QWORD *)(v2 + 16) = data::SelectTargetsByShape::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::SelectTargets::getHashValue(this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  common::tools::HashUtils::appendHash(&this->shape_name, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->center_based_on >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->center_based_on >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->center_based_on);
  }
  common::tools::HashUtils::appendHash(this->center_based_on, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->camp_target_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->camp_target_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->camp_target_type);
  }
  common::tools::HashUtils::appendHash(this->camp_target_type, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->camp_based_on >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->camp_based_on >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->camp_based_on);
  }
  common::tools::HashUtils::appendHash(this->camp_based_on, (int32_t *)(v2 + 32));
  v7 = data::DynamicFloat::getHashValue(&this->size_ratio);
  common::tools::HashUtils::appendHash(v7, (int32_t *)(v2 + 32));
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

// Line 854: range 000000001015A558-000000001015A799
void __cdecl data::SelectTargetsByEquipPartsRegister::SelectTargetsByEquipPartsRegister(
        data::SelectTargetsByEquipPartsRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::SelectTargets> *v4; // rax
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
  *(_QWORD *)(v1 + 16) = data::SelectTargetsByEquipPartsRegister::SelectTargetsByEquipPartsRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::SelectTargetsByEquipParts>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "SelectTargetsByEquipParts",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::SelectTargets>>::operator[](
         &data::g_SelectTargetsMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::SelectTargets>>::key_type *)(v1 + 96));
  std::shared_ptr<data::SelectTargets>::operator=<data::SelectTargetsByEquipParts>(
    v4,
    (std::shared_ptr<data::SelectTargetsByEquipParts> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::SelectTargetsByEquipParts>::~shared_ptr((std::shared_ptr<data::SelectTargetsByEquipParts> *const)(v1 + 64));
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

// Line 857: range 000000000FE32DB6-000000000FE32F86
void __cdecl data::SelectTargetsByEquipParts::foreachMember(
        data::SelectTargetsByEquipParts *const this,
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
  *(_QWORD *)(v2 + 8) = "2 32 16 24 equip_part_names_any:859 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::SelectTargetsByEquipParts::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 64), p_func);
  data::SelectTargets::foreachMember(this, (std::function<void(std::any&)> *)(v2 + 64));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<std::vector<std::string> &,std::vector<std::string>,std::any::_Manager_external<std::vector<std::string>>,true,true>(
    (std::any *const)(v2 + 32),
    &this->equip_part_names);
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

// Line 864: range 000000000FE32F88-000000000FE33098
std::shared_ptr<data::SelectTargets> __cdecl data::SelectTargetsByEquipParts::clone(
        data::SelectTargetsByEquipParts *const this)
{
  data::SelectTargetsByEquipParts *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::SelectTargets> result; // rax
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
  *(_QWORD *)(v2 + 16) = data::SelectTargetsByEquipParts::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::SelectTargetsByEquipParts,data::SelectTargetsByEquipParts&>(
    (common::tools::perf::allocator<data::SelectTargetsByEquipParts,data::SelectTargetsByEquipParts> *)(v2 + 32),
    v1);
  std::shared_ptr<data::SelectTargets>::shared_ptr<data::SelectTargetsByEquipParts,void>(
    (std::shared_ptr<data::SelectTargets> *const)this,
    (std::shared_ptr<data::SelectTargetsByEquipParts> *)(v2 + 32));
  std::shared_ptr<data::SelectTargetsByEquipParts>::~shared_ptr((std::shared_ptr<data::SelectTargetsByEquipParts> *const)(v2 + 32));
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

// Line 868: range 000000000FE3309A-000000000FE330DD
data::SelectTargetsByEquipPartsPtr __cdecl data::SelectTargetsByEquipPartsFactory::create(
        data::SelectTargetsByEquipPartsFactory *const this)
{
  data::SelectTargetsByEquipPartsPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::SelectTargetsByEquipParts>();
  result._M_ptr = (std::__shared_ptr<data::SelectTargetsByEquipParts,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 870: range 000000000FE330DE-000000000FE33567
bool __cdecl data::SelectTargetsByEquipParts::fromJson(
        data::SelectTargetsByEquipParts *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *equip_part_names_ptr; // [rsp+18h] [rbp-128h]
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
  *(_QWORD *)(v2 + 16) = data::SelectTargetsByEquipParts::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  if ( !data::SelectTargets::fromJson(this, jval) )
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
      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
      "fromJson",
      873);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      (common::milog::MiLogStream *const)(v2 + 64),
      (const char (*)[35])"fromJson for: SelectTargets fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 128),
      "equipPartNames",
      (const std::allocator<char> *)(v2 + 48));
    equip_part_names_ptr = jsonValueFind(jval, (const std::string *)(v2 + 128));
    std::string::~string((void *)(v2 + 128));
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( equip_part_names_ptr && !data::vecFromJson(equip_part_names_ptr, &this->equip_part_names) )
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
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
        "fromJson",
        885);
      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
        (common::milog::MiLogStream *const)(v2 + 192),
        (const char (*)[36])"fromJson for: equipPartNames fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      result = 0;
    }
    else
    {
      v6 = ((_BYTE)this + 60) & 7;
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

// Line 892: range 000000000FE33568-000000000FE340B5
data::SelectTargetsByEquipPartsPtr __cdecl data::SelectTargetsByEquipParts::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::SelectTargetsByEquipPartsPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<data::SelectTargetsByEquipParts,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 12 base_ptr:905 96 16 7 ptr:911 128 32 9 <unknown> 192 32 9 <unknown> "
                        "256 32 13 type_name:899 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::SelectTargetsByEquipParts::parseFromJson;
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
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
        "parseFromJson",
        902);
      common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[53])"fromJson for: SelectTargetsByEquipParts $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::SelectTargetsByEquipParts>::shared_ptr(
        (std::shared_ptr<data::SelectTargetsByEquipParts> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createSelectTargets((const std::string *)(v2 + 64));
      if ( std::operator==<data::SelectTargets>((const std::shared_ptr<data::SelectTargets> *)(v2 + 64), 0LL) )
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
          "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
          "parseFromJson",
          908);
        v6 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[39])"create SelectTargets fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::SelectTargetsByEquipParts>::shared_ptr(
          (std::shared_ptr<data::SelectTargetsByEquipParts> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::SelectTargetsByEquipParts,data::SelectTargets>((const std::shared_ptr<data::SelectTargets> *)(v2 + 96));
        if ( std::operator==<data::SelectTargetsByEquipParts>(
               (const std::shared_ptr<data::SelectTargetsByEquipParts> *)(v2 + 96),
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
            "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
            "parseFromJson",
            914);
          common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[44])"cast to SelectTargetsByEquipPartsPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::SelectTargetsByEquipParts>::shared_ptr(
            (std::shared_ptr<data::SelectTargetsByEquipParts> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::SelectTargetsByEquipParts,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SelectTargetsByEquipParts,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
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
              "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
              "parseFromJson",
              919);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::SelectTargetsByEquipParts>::shared_ptr(
              (std::shared_ptr<data::SelectTargetsByEquipParts> *const)jval,
              0LL);
          }
          else
          {
            v10 = std::__shared_ptr_access<data::SelectTargetsByEquipParts,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SelectTargetsByEquipParts,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000);
            if ( v11 != 0 && (((unsigned __int8)v10 + 60) & 7) >= v11 )
            {
              LOBYTE(v1) = v11 != 0;
              __asan_report_store1(&v10->is_json_loaded, v1, v10);
            }
            v10->is_json_loaded = 1;
            std::shared_ptr<data::SelectTargetsByEquipParts>::shared_ptr(
              (std::shared_ptr<data::SelectTargetsByEquipParts> *const)jval,
              (std::shared_ptr<data::SelectTargetsByEquipParts> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::SelectTargetsByEquipParts>::~shared_ptr((std::shared_ptr<data::SelectTargetsByEquipParts> *const)(v2 + 96));
      }
      std::shared_ptr<data::SelectTargets>::~shared_ptr((std::shared_ptr<data::SelectTargets> *const)(v2 + 64));
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
      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
      "parseFromJson",
      896);
    common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[58])"jsonValueFind for: SelectTargetsByEquipParts $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::SelectTargetsByEquipParts>::shared_ptr(
      (std::shared_ptr<data::SelectTargetsByEquipParts> *const)jval,
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
  result._M_ptr = (std::__shared_ptr<data::SelectTargetsByEquipParts,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 927: range 000000000FE340B6-000000000FE341FF
int32_t __cdecl data::SelectTargetsByEquipParts::getHashValue(const data::SelectTargetsByEquipParts *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // edx
  char v6; // al
  int32_t VecHashValue; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:928";
  *(_QWORD *)(v2 + 16) = data::SelectTargetsByEquipParts::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::SelectTargets::getHashValue(this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  VecHashValue = data::getVecHashValue(&this->equip_part_names);
  common::tools::HashUtils::appendHash(VecHashValue, (int32_t *)(v2 + 32));
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

// Line 937: range 000000001015A7D6-000000001015AA17
void __cdecl data::SelectTargetsByChildrenRegister::SelectTargetsByChildrenRegister(
        data::SelectTargetsByChildrenRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::SelectTargets> *v4; // rax
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
  *(_QWORD *)(v1 + 16) = data::SelectTargetsByChildrenRegister::SelectTargetsByChildrenRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::SelectTargetsByChildren>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "SelectTargetsByChildren",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::SelectTargets>>::operator[](
         &data::g_SelectTargetsMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::SelectTargets>>::key_type *)(v1 + 96));
  std::shared_ptr<data::SelectTargets>::operator=<data::SelectTargetsByChildren>(
    v4,
    (std::shared_ptr<data::SelectTargetsByChildren> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::SelectTargetsByChildren>::~shared_ptr((std::shared_ptr<data::SelectTargetsByChildren> *const)(v1 + 64));
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

// Line 940: range 000000000FE34200-000000000FE343D0
void __cdecl data::SelectTargetsByChildren::foreachMember(
        data::SelectTargetsByChildren *const this,
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
  *(_QWORD *)(v2 + 8) = "2 32 16 17 config_id_any:942 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::SelectTargetsByChildren::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 64), p_func);
  data::SelectTargets::foreachMember(this, (std::function<void(std::any&)> *)(v2 + 64));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<unsigned int &,unsigned int,std::any::_Manager_internal<unsigned int>,true,true>(
    (std::any *const)(v2 + 32),
    &this->config_id);
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

// Line 947: range 000000000FE343D2-000000000FE344E2
std::shared_ptr<data::SelectTargets> __cdecl data::SelectTargetsByChildren::clone(
        data::SelectTargetsByChildren *const this)
{
  data::SelectTargetsByChildren *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::SelectTargets> result; // rax
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
  *(_QWORD *)(v2 + 16) = data::SelectTargetsByChildren::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::SelectTargetsByChildren,data::SelectTargetsByChildren&>(
    (common::tools::perf::allocator<data::SelectTargetsByChildren,data::SelectTargetsByChildren> *)(v2 + 32),
    v1);
  std::shared_ptr<data::SelectTargets>::shared_ptr<data::SelectTargetsByChildren,void>(
    (std::shared_ptr<data::SelectTargets> *const)this,
    (std::shared_ptr<data::SelectTargetsByChildren> *)(v2 + 32));
  std::shared_ptr<data::SelectTargetsByChildren>::~shared_ptr((std::shared_ptr<data::SelectTargetsByChildren> *const)(v2 + 32));
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

// Line 951: range 000000000FE344E4-000000000FE34527
data::SelectTargetsByChildrenPtr __cdecl data::SelectTargetsByChildrenFactory::create(
        data::SelectTargetsByChildrenFactory *const this)
{
  data::SelectTargetsByChildrenPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::SelectTargetsByChildren>();
  result._M_ptr = (std::__shared_ptr<data::SelectTargetsByChildren,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 953: range 000000000FE34528-000000000FE349B1
bool __cdecl data::SelectTargetsByChildren::fromJson(
        data::SelectTargetsByChildren *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *config_id_ptr; // [rsp+18h] [rbp-128h]
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
  *(_QWORD *)(v2 + 16) = data::SelectTargetsByChildren::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  if ( !data::SelectTargets::fromJson(this, jval) )
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
      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
      "fromJson",
      956);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      (common::milog::MiLogStream *const)(v2 + 64),
      (const char (*)[35])"fromJson for: SelectTargets fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 128),
      "configID",
      (const std::allocator<char> *)(v2 + 48));
    config_id_ptr = jsonValueFind(jval, (const std::string *)(v2 + 128));
    std::string::~string((void *)(v2 + 128));
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( config_id_ptr && !fromJson<unsigned int>(config_id_ptr, &this->config_id) )
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
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
        "fromJson",
        968);
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        (common::milog::MiLogStream *const)(v2 + 192),
        (const char (*)[30])"fromJson for: configID fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      result = 0;
    }
    else
    {
      v6 = ((_BYTE)this + 60) & 7;
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

// Line 975: range 000000000FE349B2-000000000FE354FF
data::SelectTargetsByChildrenPtr __cdecl data::SelectTargetsByChildren::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::SelectTargetsByChildrenPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<data::SelectTargetsByChildren,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 12 base_ptr:988 96 16 7 ptr:994 128 32 9 <unknown> 192 32 9 <unknown> "
                        "256 32 13 type_name:982 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::SelectTargetsByChildren::parseFromJson;
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
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
        "parseFromJson",
        985);
      common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[51])"fromJson for: SelectTargetsByChildren $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::SelectTargetsByChildren>::shared_ptr(
        (std::shared_ptr<data::SelectTargetsByChildren> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createSelectTargets((const std::string *)(v2 + 64));
      if ( std::operator==<data::SelectTargets>((const std::shared_ptr<data::SelectTargets> *)(v2 + 64), 0LL) )
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
          "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
          "parseFromJson",
          991);
        v6 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[39])"create SelectTargets fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::SelectTargetsByChildren>::shared_ptr(
          (std::shared_ptr<data::SelectTargetsByChildren> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::SelectTargetsByChildren,data::SelectTargets>((const std::shared_ptr<data::SelectTargets> *)(v2 + 96));
        if ( std::operator==<data::SelectTargetsByChildren>(
               (const std::shared_ptr<data::SelectTargetsByChildren> *)(v2 + 96),
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
            "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
            "parseFromJson",
            997);
          common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[42])"cast to SelectTargetsByChildrenPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::SelectTargetsByChildren>::shared_ptr(
            (std::shared_ptr<data::SelectTargetsByChildren> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::SelectTargetsByChildren,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SelectTargetsByChildren,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
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
              "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
              "parseFromJson",
              1002);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::SelectTargetsByChildren>::shared_ptr(
              (std::shared_ptr<data::SelectTargetsByChildren> *const)jval,
              0LL);
          }
          else
          {
            v10 = std::__shared_ptr_access<data::SelectTargetsByChildren,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SelectTargetsByChildren,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000);
            if ( v11 != 0 && (((unsigned __int8)v10 + 60) & 7) >= v11 )
            {
              LOBYTE(v1) = v11 != 0;
              __asan_report_store1(&v10->is_json_loaded, v1, v10);
            }
            v10->is_json_loaded = 1;
            std::shared_ptr<data::SelectTargetsByChildren>::shared_ptr(
              (std::shared_ptr<data::SelectTargetsByChildren> *const)jval,
              (std::shared_ptr<data::SelectTargetsByChildren> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::SelectTargetsByChildren>::~shared_ptr((std::shared_ptr<data::SelectTargetsByChildren> *const)(v2 + 96));
      }
      std::shared_ptr<data::SelectTargets>::~shared_ptr((std::shared_ptr<data::SelectTargets> *const)(v2 + 64));
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
      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
      "parseFromJson",
      979);
    common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[56])"jsonValueFind for: SelectTargetsByChildren $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::SelectTargetsByChildren>::shared_ptr(
      (std::shared_ptr<data::SelectTargetsByChildren> *const)jval,
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
  result._M_ptr = (std::__shared_ptr<data::SelectTargetsByChildren,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 1010: range 000000000FE35500-000000000FE35671
int32_t __cdecl data::SelectTargetsByChildren::getHashValue(const data::SelectTargetsByChildren *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1011";
  *(_QWORD *)(v2 + 16) = data::SelectTargetsByChildren::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::SelectTargets::getHashValue(this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->config_id);
  }
  common::tools::HashUtils::appendHash(this->config_id, (int32_t *)(v2 + 32));
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

// Line 1020: range 000000001015AA90-000000001015ACD1
void __cdecl data::SelectTargetsByChildrenEntityTypeRegister::SelectTargetsByChildrenEntityTypeRegister(
        data::SelectTargetsByChildrenEntityTypeRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::SelectTargets> *v4; // rax
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
  *(_QWORD *)(v1 + 16) = data::SelectTargetsByChildrenEntityTypeRegister::SelectTargetsByChildrenEntityTypeRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::SelectTargetsByChildrenEntityType>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "SelectTargetsByChildrenEntityType",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::SelectTargets>>::operator[](
         &data::g_SelectTargetsMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::SelectTargets>>::key_type *)(v1 + 96));
  std::shared_ptr<data::SelectTargets>::operator=<data::SelectTargetsByChildrenEntityType>(
    v4,
    (std::shared_ptr<data::SelectTargetsByChildrenEntityType> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::SelectTargetsByChildrenEntityType>::~shared_ptr((std::shared_ptr<data::SelectTargetsByChildrenEntityType> *const)(v1 + 64));
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

// Line 1023: range 000000000FE35672-000000000FE35842
void __cdecl data::SelectTargetsByChildrenEntityType::foreachMember(
        data::SelectTargetsByChildrenEntityType *const this,
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
  *(_QWORD *)(v2 + 8) = "2 32 16 20 entity_type_any:1025 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::SelectTargetsByChildrenEntityType::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 64), p_func);
  data::SelectTargets::foreachMember(this, (std::function<void(std::any&)> *)(v2 + 64));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<data::EntityType &,data::EntityType,std::any::_Manager_internal<data::EntityType>,true,true>(
    (std::any *const)(v2 + 32),
    &this->entity_type);
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

// Line 1030: range 000000000FE35844-000000000FE35954
std::shared_ptr<data::SelectTargets> __cdecl data::SelectTargetsByChildrenEntityType::clone(
        data::SelectTargetsByChildrenEntityType *const this)
{
  data::SelectTargetsByChildrenEntityType *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::SelectTargets> result; // rax
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
  *(_QWORD *)(v2 + 16) = data::SelectTargetsByChildrenEntityType::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::SelectTargetsByChildrenEntityType,data::SelectTargetsByChildrenEntityType&>(
    (common::tools::perf::allocator<data::SelectTargetsByChildrenEntityType,data::SelectTargetsByChildrenEntityType> *)(v2 + 32),
    v1);
  std::shared_ptr<data::SelectTargets>::shared_ptr<data::SelectTargetsByChildrenEntityType,void>(
    (std::shared_ptr<data::SelectTargets> *const)this,
    (std::shared_ptr<data::SelectTargetsByChildrenEntityType> *)(v2 + 32));
  std::shared_ptr<data::SelectTargetsByChildrenEntityType>::~shared_ptr((std::shared_ptr<data::SelectTargetsByChildrenEntityType> *const)(v2 + 32));
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

// Line 1034: range 000000000FE35956-000000000FE35999
data::SelectTargetsByChildrenEntityTypePtr __cdecl data::SelectTargetsByChildrenEntityTypeFactory::create(
        data::SelectTargetsByChildrenEntityTypeFactory *const this)
{
  data::SelectTargetsByChildrenEntityTypePtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::SelectTargetsByChildrenEntityType>();
  result._M_ptr = (std::__shared_ptr<data::SelectTargetsByChildrenEntityType,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1036: range 000000000FE3599A-000000000FE35F31
bool __cdecl data::SelectTargetsByChildrenEntityType::fromJson(
        data::SelectTargetsByChildrenEntityType *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  bool v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rdx
  Json::Value *entity_type_ptr; // [rsp+18h] [rbp-178h]
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
  *(_QWORD *)(v2 + 16) = data::SelectTargetsByChildrenEntityType::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -202116109;
  if ( !data::SelectTargets::fromJson(this, jval) )
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
      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
      "fromJson",
      1039);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      (common::milog::MiLogStream *const)(v2 + 64),
      (const char (*)[35])"fromJson for: SelectTargets fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 128),
      "entityType",
      (const std::allocator<char> *)(v2 + 48));
    entity_type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 128));
    std::string::~string((void *)(v2 + 128));
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( !entity_type_ptr )
      goto LABEL_15;
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 192, 32LL);
    }
    Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 192), (Json::Value_0 *)entity_type_ptr);
    v6 = !data::enumStrToVal((const std::string *)(v2 + 192), &this->entity_type);
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    if ( v6 )
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
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
        "fromJson",
        1051);
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
        (common::milog::MiLogStream *const)(v2 + 256),
        (const char (*)[32])"fromJson for: entityType fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
LABEL_15:
      v7 = ((_BYTE)this + 60) & 7;
      v8 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
      if ( (_BYTE)v8 )
        __asan_report_store1(&this->is_json_loaded, v7, v8);
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

// Line 1058: range 000000000FE35F32-000000000FE36A7F
data::SelectTargetsByChildrenEntityTypePtr __cdecl data::SelectTargetsByChildrenEntityType::parseFromJson(
        const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::SelectTargetsByChildrenEntityTypePtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<data::SelectTargetsByChildrenEntityType,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 13 base_ptr:1071 96 16 8 ptr:1077 128 32 9 <unknown> 192 32 9 <unknown"
                        "> 256 32 14 type_name:1065 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::SelectTargetsByChildrenEntityType::parseFromJson;
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
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
        "parseFromJson",
        1068);
      common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[61])"fromJson for: SelectTargetsByChildrenEntityType $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::SelectTargetsByChildrenEntityType>::shared_ptr(
        (std::shared_ptr<data::SelectTargetsByChildrenEntityType> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createSelectTargets((const std::string *)(v2 + 64));
      if ( std::operator==<data::SelectTargets>((const std::shared_ptr<data::SelectTargets> *)(v2 + 64), 0LL) )
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
          "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
          "parseFromJson",
          1074);
        v6 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[39])"create SelectTargets fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::SelectTargetsByChildrenEntityType>::shared_ptr(
          (std::shared_ptr<data::SelectTargetsByChildrenEntityType> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::SelectTargetsByChildrenEntityType,data::SelectTargets>((const std::shared_ptr<data::SelectTargets> *)(v2 + 96));
        if ( std::operator==<data::SelectTargetsByChildrenEntityType>(
               (const std::shared_ptr<data::SelectTargetsByChildrenEntityType> *)(v2 + 96),
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
            "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
            "parseFromJson",
            1080);
          common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[52])"cast to SelectTargetsByChildrenEntityTypePtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::SelectTargetsByChildrenEntityType>::shared_ptr(
            (std::shared_ptr<data::SelectTargetsByChildrenEntityType> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::SelectTargetsByChildrenEntityType,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SelectTargetsByChildrenEntityType,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
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
              "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
              "parseFromJson",
              1085);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::SelectTargetsByChildrenEntityType>::shared_ptr(
              (std::shared_ptr<data::SelectTargetsByChildrenEntityType> *const)jval,
              0LL);
          }
          else
          {
            v10 = std::__shared_ptr_access<data::SelectTargetsByChildrenEntityType,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SelectTargetsByChildrenEntityType,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000);
            if ( v11 != 0 && (((unsigned __int8)v10 + 60) & 7) >= v11 )
            {
              LOBYTE(v1) = v11 != 0;
              __asan_report_store1(&v10->is_json_loaded, v1, v10);
            }
            v10->is_json_loaded = 1;
            std::shared_ptr<data::SelectTargetsByChildrenEntityType>::shared_ptr(
              (std::shared_ptr<data::SelectTargetsByChildrenEntityType> *const)jval,
              (std::shared_ptr<data::SelectTargetsByChildrenEntityType> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::SelectTargetsByChildrenEntityType>::~shared_ptr((std::shared_ptr<data::SelectTargetsByChildrenEntityType> *const)(v2 + 96));
      }
      std::shared_ptr<data::SelectTargets>::~shared_ptr((std::shared_ptr<data::SelectTargets> *const)(v2 + 64));
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
      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
      "parseFromJson",
      1062);
    common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[66])"jsonValueFind for: SelectTargetsByChildrenEntityType $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::SelectTargetsByChildrenEntityType>::shared_ptr(
      (std::shared_ptr<data::SelectTargetsByChildrenEntityType> *const)jval,
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
  result._M_ptr = (std::__shared_ptr<data::SelectTargetsByChildrenEntityType,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 1093: range 000000000FE36A80-000000000FE36BF1
int32_t __cdecl data::SelectTargetsByChildrenEntityType::getHashValue(
        const data::SelectTargetsByChildrenEntityType *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1094";
  *(_QWORD *)(v2 + 16) = data::SelectTargetsByChildrenEntityType::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::SelectTargets::getHashValue(this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entity_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->entity_type);
  }
  common::tools::HashUtils::appendHash(this->entity_type, (int32_t *)(v2 + 32));
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

// Line 1103: range 000000001015AD4A-000000001015AF8B
void __cdecl data::SelectTargetsByTagRegister::SelectTargetsByTagRegister(data::SelectTargetsByTagRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::SelectTargets> *v4; // rax
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
  *(_QWORD *)(v1 + 16) = data::SelectTargetsByTagRegister::SelectTargetsByTagRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::SelectTargetsByTag>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "SelectTargetsByTag",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::SelectTargets>>::operator[](
         &data::g_SelectTargetsMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::SelectTargets>>::key_type *)(v1 + 96));
  std::shared_ptr<data::SelectTargets>::operator=<data::SelectTargetsByTag>(
    v4,
    (std::shared_ptr<data::SelectTargetsByTag> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::SelectTargetsByTag>::~shared_ptr((std::shared_ptr<data::SelectTargetsByTag> *const)(v1 + 64));
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

// Line 1106: range 000000000FE36BF2-000000000FE36DC2
void __cdecl data::SelectTargetsByTag::foreachMember(
        data::SelectTargetsByTag *const this,
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
  *(_QWORD *)(v2 + 8) = "2 32 16 12 tag_any:1108 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::SelectTargetsByTag::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 64), p_func);
  data::SelectTargets::foreachMember(this, (std::function<void(std::any&)> *)(v2 + 64));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<std::string &,std::string,std::any::_Manager_external<std::string>,true,true>(
    (std::any *const)(v2 + 32),
    &this->tag);
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

// Line 1113: range 000000000FE36DC4-000000000FE36ED4
std::shared_ptr<data::SelectTargets> __cdecl data::SelectTargetsByTag::clone(data::SelectTargetsByTag *const this)
{
  data::SelectTargetsByTag *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::SelectTargets> result; // rax
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
  *(_QWORD *)(v2 + 16) = data::SelectTargetsByTag::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::SelectTargetsByTag,data::SelectTargetsByTag&>(
    (common::tools::perf::allocator<data::SelectTargetsByTag,data::SelectTargetsByTag> *)(v2 + 32),
    v1);
  std::shared_ptr<data::SelectTargets>::shared_ptr<data::SelectTargetsByTag,void>(
    (std::shared_ptr<data::SelectTargets> *const)this,
    (std::shared_ptr<data::SelectTargetsByTag> *)(v2 + 32));
  std::shared_ptr<data::SelectTargetsByTag>::~shared_ptr((std::shared_ptr<data::SelectTargetsByTag> *const)(v2 + 32));
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

// Line 1117: range 000000000FE36ED6-000000000FE36F19
data::SelectTargetsByTagPtr __cdecl data::SelectTargetsByTagFactory::create(
        data::SelectTargetsByTagFactory *const this)
{
  data::SelectTargetsByTagPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::SelectTargetsByTag>();
  result._M_ptr = (std::__shared_ptr<data::SelectTargetsByTag,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1119: range 000000000FE36F1A-000000000FE373A3
bool __cdecl data::SelectTargetsByTag::fromJson(data::SelectTargetsByTag *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *tag_ptr; // [rsp+18h] [rbp-128h]
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
  *(_QWORD *)(v2 + 16) = data::SelectTargetsByTag::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  if ( !data::SelectTargets::fromJson(this, jval) )
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
      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
      "fromJson",
      1122);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      (common::milog::MiLogStream *const)(v2 + 64),
      (const char (*)[35])"fromJson for: SelectTargets fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 128),
      off_1A6BF240,
      (const std::allocator<char> *)(v2 + 48));
    tag_ptr = jsonValueFind(jval, (const std::string *)(v2 + 128));
    std::string::~string((void *)(v2 + 128));
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( tag_ptr && !fromJson<std::string>(tag_ptr, &this->tag) )
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
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
        "fromJson",
        1134);
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
        (common::milog::MiLogStream *const)(v2 + 192),
        (const char (*)[25])"fromJson for: tag fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      result = 0;
    }
    else
    {
      v6 = ((_BYTE)this + 60) & 7;
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

// Line 1141: range 000000000FE373A4-000000000FE37EF1
data::SelectTargetsByTagPtr __cdecl data::SelectTargetsByTag::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::SelectTargetsByTagPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<data::SelectTargetsByTag,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 13 base_ptr:1154 96 16 8 ptr:1160 128 32 9 <unknown> 192 32 9 <unknown"
                        "> 256 32 14 type_name:1148 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::SelectTargetsByTag::parseFromJson;
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
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
        "parseFromJson",
        1151);
      common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[46])"fromJson for: SelectTargetsByTag $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::SelectTargetsByTag>::shared_ptr((std::shared_ptr<data::SelectTargetsByTag> *const)jval, 0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createSelectTargets((const std::string *)(v2 + 64));
      if ( std::operator==<data::SelectTargets>((const std::shared_ptr<data::SelectTargets> *)(v2 + 64), 0LL) )
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
          "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
          "parseFromJson",
          1157);
        v6 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[39])"create SelectTargets fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::SelectTargetsByTag>::shared_ptr(
          (std::shared_ptr<data::SelectTargetsByTag> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::SelectTargetsByTag,data::SelectTargets>((const std::shared_ptr<data::SelectTargets> *)(v2 + 96));
        if ( std::operator==<data::SelectTargetsByTag>(
               (const std::shared_ptr<data::SelectTargetsByTag> *)(v2 + 96),
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
            "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
            "parseFromJson",
            1163);
          common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[37])"cast to SelectTargetsByTagPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::SelectTargetsByTag>::shared_ptr(
            (std::shared_ptr<data::SelectTargetsByTag> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::SelectTargetsByTag,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SelectTargetsByTag,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
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
              "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
              "parseFromJson",
              1168);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::SelectTargetsByTag>::shared_ptr(
              (std::shared_ptr<data::SelectTargetsByTag> *const)jval,
              0LL);
          }
          else
          {
            v10 = std::__shared_ptr_access<data::SelectTargetsByTag,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SelectTargetsByTag,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000);
            if ( v11 != 0 && (((unsigned __int8)v10 + 60) & 7) >= v11 )
            {
              LOBYTE(v1) = v11 != 0;
              __asan_report_store1(&v10->is_json_loaded, v1, v10);
            }
            v10->is_json_loaded = 1;
            std::shared_ptr<data::SelectTargetsByTag>::shared_ptr(
              (std::shared_ptr<data::SelectTargetsByTag> *const)jval,
              (std::shared_ptr<data::SelectTargetsByTag> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::SelectTargetsByTag>::~shared_ptr((std::shared_ptr<data::SelectTargetsByTag> *const)(v2 + 96));
      }
      std::shared_ptr<data::SelectTargets>::~shared_ptr((std::shared_ptr<data::SelectTargets> *const)(v2 + 64));
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
      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
      "parseFromJson",
      1145);
    common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[51])"jsonValueFind for: SelectTargetsByTag $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::SelectTargetsByTag>::shared_ptr((std::shared_ptr<data::SelectTargetsByTag> *const)jval, 0LL);
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
  result._M_ptr = (std::__shared_ptr<data::SelectTargetsByTag,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 1176: range 000000000FE37EF2-000000000FE38032
int32_t __cdecl data::SelectTargetsByTag::getHashValue(const data::SelectTargetsByTag *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1177";
  *(_QWORD *)(v2 + 16) = data::SelectTargetsByTag::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::SelectTargets::getHashValue(this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  common::tools::HashUtils::appendHash(&this->tag, (int32_t *)(v2 + 32));
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

// Line 1186: range 000000001015B004-000000001015B245
void __cdecl data::SelectTargetsByGrapplingHookRegister::SelectTargetsByGrapplingHookRegister(
        data::SelectTargetsByGrapplingHookRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::SelectTargets> *v4; // rax
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
  *(_QWORD *)(v1 + 16) = data::SelectTargetsByGrapplingHookRegister::SelectTargetsByGrapplingHookRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::SelectTargetsByGrapplingHook>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "SelectTargetsByGrapplingHook",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::SelectTargets>>::operator[](
         &data::g_SelectTargetsMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::SelectTargets>>::key_type *)(v1 + 96));
  std::shared_ptr<data::SelectTargets>::operator=<data::SelectTargetsByGrapplingHook>(
    v4,
    (std::shared_ptr<data::SelectTargetsByGrapplingHook> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::SelectTargetsByGrapplingHook>::~shared_ptr((std::shared_ptr<data::SelectTargetsByGrapplingHook> *const)(v1 + 64));
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

// Line 1189: range 000000000FE38034-000000000FE38167
void __cdecl data::SelectTargetsByGrapplingHook::foreachMember(
        data::SelectTargetsByGrapplingHook *const this,
        std::function<void(std::any&)> *p_func)
{
  std::function<void(std::any&)> *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v5[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (std::function<void(std::any&)> *)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::function<void(std::any&)> *)v3;
  }
  v2->_M_functor._M_unused._M_object = (void *)1102416563;
  *(_QWORD *)&v2->_M_functor._M_pod_data[8] = "1 32 32 9 <unknown>";
  v2->_M_manager = (std::_Function_base::_Manager_type)data::SelectTargetsByGrapplingHook::foreachMember;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  std::function<void ()(std::any &)>::function(v2 + 1, p_func);
  data::SelectTargets::foreachMember(this, v2 + 1);
  std::function<void ()(std::any &)>::~function(v2 + 1);
  if ( v5 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_functor._M_unused._M_object = (void *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1194: range 000000000FE38168-000000000FE38278
std::shared_ptr<data::SelectTargets> __cdecl data::SelectTargetsByGrapplingHook::clone(
        data::SelectTargetsByGrapplingHook *const this)
{
  data::SelectTargetsByGrapplingHook *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::SelectTargets> result; // rax
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
  *(_QWORD *)(v2 + 16) = data::SelectTargetsByGrapplingHook::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::SelectTargetsByGrapplingHook,data::SelectTargetsByGrapplingHook&>(
    (common::tools::perf::allocator<data::SelectTargetsByGrapplingHook,data::SelectTargetsByGrapplingHook> *)(v2 + 32),
    v1);
  std::shared_ptr<data::SelectTargets>::shared_ptr<data::SelectTargetsByGrapplingHook,void>(
    (std::shared_ptr<data::SelectTargets> *const)this,
    (std::shared_ptr<data::SelectTargetsByGrapplingHook> *)(v2 + 32));
  std::shared_ptr<data::SelectTargetsByGrapplingHook>::~shared_ptr((std::shared_ptr<data::SelectTargetsByGrapplingHook> *const)(v2 + 32));
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

// Line 1198: range 000000000FE3827A-000000000FE382BD
data::SelectTargetsByGrapplingHookPtr __cdecl data::SelectTargetsByGrapplingHookFactory::create(
        data::SelectTargetsByGrapplingHookFactory *const this)
{
  data::SelectTargetsByGrapplingHookPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::SelectTargetsByGrapplingHook>();
  result._M_ptr = (std::__shared_ptr<data::SelectTargetsByGrapplingHook,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1200: range 000000000FE382BE-000000000FE384D6
bool __cdecl data::SelectTargetsByGrapplingHook::fromJson(
        data::SelectTargetsByGrapplingHook *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  char v8[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::SelectTargetsByGrapplingHook::fromJson;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( !data::SelectTargets::fromJson(this, jval) )
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
      3u,
      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
      "fromJson",
      1203);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      (common::milog::MiLogStream *const)(v2 + 32),
      (const char (*)[35])"fromJson for: SelectTargets fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = 0;
  }
  else
  {
    v6 = ((_BYTE)this + 60) & 7;
    v7 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
    if ( (_BYTE)v7 )
      __asan_report_store1(&this->is_json_loaded, v6, v7);
    this->is_json_loaded = 1;
    result = 1;
  }
  if ( v8 == (char *)v2 )
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

// Line 1210: range 000000000FE384D8-000000000FE39025
data::SelectTargetsByGrapplingHookPtr __cdecl data::SelectTargetsByGrapplingHook::parseFromJson(
        const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::SelectTargetsByGrapplingHookPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<data::SelectTargetsByGrapplingHook,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 13 base_ptr:1223 96 16 8 ptr:1229 128 32 9 <unknown> 192 32 9 <unknown"
                        "> 256 32 14 type_name:1217 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::SelectTargetsByGrapplingHook::parseFromJson;
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
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
        "parseFromJson",
        1220);
      common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[56])"fromJson for: SelectTargetsByGrapplingHook $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::SelectTargetsByGrapplingHook>::shared_ptr(
        (std::shared_ptr<data::SelectTargetsByGrapplingHook> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createSelectTargets((const std::string *)(v2 + 64));
      if ( std::operator==<data::SelectTargets>((const std::shared_ptr<data::SelectTargets> *)(v2 + 64), 0LL) )
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
          "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
          "parseFromJson",
          1226);
        v6 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[39])"create SelectTargets fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::SelectTargetsByGrapplingHook>::shared_ptr(
          (std::shared_ptr<data::SelectTargetsByGrapplingHook> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::SelectTargetsByGrapplingHook,data::SelectTargets>((const std::shared_ptr<data::SelectTargets> *)(v2 + 96));
        if ( std::operator==<data::SelectTargetsByGrapplingHook>(
               (const std::shared_ptr<data::SelectTargetsByGrapplingHook> *)(v2 + 96),
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
            "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
            "parseFromJson",
            1232);
          common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[47])"cast to SelectTargetsByGrapplingHookPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::SelectTargetsByGrapplingHook>::shared_ptr(
            (std::shared_ptr<data::SelectTargetsByGrapplingHook> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::SelectTargetsByGrapplingHook,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SelectTargetsByGrapplingHook,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
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
              "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
              "parseFromJson",
              1237);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::SelectTargetsByGrapplingHook>::shared_ptr(
              (std::shared_ptr<data::SelectTargetsByGrapplingHook> *const)jval,
              0LL);
          }
          else
          {
            v10 = std::__shared_ptr_access<data::SelectTargetsByGrapplingHook,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SelectTargetsByGrapplingHook,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000);
            if ( v11 != 0 && (((unsigned __int8)v10 + 60) & 7) >= v11 )
            {
              LOBYTE(v1) = v11 != 0;
              __asan_report_store1(&v10->is_json_loaded, v1, v10);
            }
            v10->is_json_loaded = 1;
            std::shared_ptr<data::SelectTargetsByGrapplingHook>::shared_ptr(
              (std::shared_ptr<data::SelectTargetsByGrapplingHook> *const)jval,
              (std::shared_ptr<data::SelectTargetsByGrapplingHook> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::SelectTargetsByGrapplingHook>::~shared_ptr((std::shared_ptr<data::SelectTargetsByGrapplingHook> *const)(v2 + 96));
      }
      std::shared_ptr<data::SelectTargets>::~shared_ptr((std::shared_ptr<data::SelectTargets> *const)(v2 + 64));
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
      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
      "parseFromJson",
      1214);
    common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[61])"jsonValueFind for: SelectTargetsByGrapplingHook $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::SelectTargetsByGrapplingHook>::shared_ptr(
      (std::shared_ptr<data::SelectTargetsByGrapplingHook> *const)jval,
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
  result._M_ptr = (std::__shared_ptr<data::SelectTargetsByGrapplingHook,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 1245: range 000000000FE39026-000000000FE39045
int32_t __cdecl data::SelectTargetsByGrapplingHook::getHashValue(const data::SelectTargetsByGrapplingHook *const this)
{
  return data::SelectTargets::getHashValue(this);
};

// Line 1251: range 000000000FE39046-000000000FE392E1
const char *__cdecl data::enumValToStr(data::BitwiseOperator e)
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
  if ( e == XOR )
  {
    result = off_1A6D8F60;
  }
  else
  {
    if ( e <= XOR )
    {
      switch ( e )
      {
        case NOT:
          result = off_1A6D8F20;
          goto LABEL_19;
        case AND_0:
          result = off_1A6D8EA0;
          goto LABEL_19;
        case OR_0:
          result = "OR";
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
      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
      "enumValToStr",
      1263);
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
    result = byte_1A5DA060;
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

// Line 1269: range 000000000FE392E2-000000000FE39C66
bool __cdecl data::enumStrToVal(const std::string *s, data::BitwiseOperator *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::BitwiseOperator> *i; // r14
  _DWORD *v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::BitwiseOperator> >::pointer v11; // rax
  data::BitwiseOperator second; // ecx
  char v13; // dl
  data::BitwiseOperator *ea; // [rsp+10h] [rbp-260h]
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
                        "<unknown> 128 8 7 it:1282 160 8 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 160 9 <unknown>";
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
      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
      "enumStrToVal",
      1272);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::BitwiseOperator &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::BitwiseOperator &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::BitwiseOperator>::pair<char const(&)[4],data::BitwiseOperator,true>(
        (std::pair<const std::string,data::BitwiseOperator> *const)(v2 + 320),
        (const char (*)[4])off_1A6D8EA0,
        (data::BitwiseOperator *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, off_1A6D8EA0);
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::BitwiseOperator>::pair<char const(&)[3],data::BitwiseOperator,true>(
        (std::pair<const std::string,data::BitwiseOperator> *const)(v2 + 360),
        (const char (*)[3])"OR",
        (data::BitwiseOperator *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "OR");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::BitwiseOperator>::pair<char const(&)[4],data::BitwiseOperator,true>(
        (std::pair<const std::string,data::BitwiseOperator> *const)(v2 + 400),
        (const char (*)[4])off_1A6D8F20,
        (data::BitwiseOperator *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, off_1A6D8F20);
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::BitwiseOperator>::pair<char const(&)[4],data::BitwiseOperator,true>(
        (std::pair<const std::string,data::BitwiseOperator> *const)(v2 + 440),
        (const char (*)[4])off_1A6D8F60,
        (data::BitwiseOperator *)(v2 + 112));
      std::allocator<std::pair<std::string const,data::BitwiseOperator>>::allocator((std::allocator<std::pair<const std::string,data::BitwiseOperator> > *const)(v2 + 48));
      std::map<std::string,data::BitwiseOperator>::map(
        &data::enumStrToVal(std::string const&,data::BitwiseOperator &)::m,
        (std::initializer_list<std::pair<const std::string,data::BitwiseOperator> >)__PAIR128__(4LL, v2 + 320),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::BitwiseOperator>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::BitwiseOperator &)::m);
      e = (data::BitwiseOperator *)&data::enumStrToVal(std::string const&,data::BitwiseOperator &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::BitwiseOperator>::~map,
        &data::enumStrToVal(std::string const&,data::BitwiseOperator &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::BitwiseOperator>>::~allocator((std::allocator<std::pair<const std::string,data::BitwiseOperator> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::BitwiseOperator> *)(v2 + 480);
            i != (std::pair<const std::string,data::BitwiseOperator> *)(v2 + 320);
            std::pair<std::string const,data::BitwiseOperator>::~pair(i) )
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
    *(std::map<std::string,data::BitwiseOperator>::iterator *)(v2 + 128) = std::map<std::string,data::BitwiseOperator>::find(
                                                                             &data::enumStrToVal(std::string const&,data::BitwiseOperator &)::m,
                                                                             s);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, s);
    *(std::map<std::string,data::BitwiseOperator>::iterator *)(v2 + 160) = std::map<std::string,data::BitwiseOperator>::end(&data::enumStrToVal(std::string const&,data::BitwiseOperator &)::m);
    v8 = (char *)(v2 + 160);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::BitwiseOperator> >::_Self *)(v2 + 128),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::BitwiseOperator> >::_Self *)(v2 + 160));
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
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
        "enumStrToVal",
        1285);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 256),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::BitwiseOperator>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::BitwiseOperator> > *const)(v2 + 128));
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

// Line 1293: range 000000000FE39C67-000000000FE39CC0
const char *__cdecl data::getDescription(data::BitwiseOperator e)
{
  if ( e == XOR )
    return (const char *)&unk_1A6D9140;
  if ( e <= XOR )
  {
    switch ( e )
    {
      case NOT:
        return (const char *)&unk_1A6D9100;
      case AND_0:
        return (const char *)&unk_1A6D9080;
      case OR_0:
        return (const char *)&unk_1A6D90C0;
    }
  }
  return "unknown enum value!";
};

// Line 1313: range 000000001015B662-000000001015B8A3
void __cdecl data::SelectTargetsBySelfGroupRegister::SelectTargetsBySelfGroupRegister(
        data::SelectTargetsBySelfGroupRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::SelectTargets> *v4; // rax
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
  *(_QWORD *)(v1 + 16) = data::SelectTargetsBySelfGroupRegister::SelectTargetsBySelfGroupRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::SelectTargetsBySelfGroup>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "SelectTargetsBySelfGroup",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::SelectTargets>>::operator[](
         &data::g_SelectTargetsMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::SelectTargets>>::key_type *)(v1 + 96));
  std::shared_ptr<data::SelectTargets>::operator=<data::SelectTargetsBySelfGroup>(
    v4,
    (std::shared_ptr<data::SelectTargetsBySelfGroup> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::SelectTargetsBySelfGroup>::~shared_ptr((std::shared_ptr<data::SelectTargetsBySelfGroup> *const)(v1 + 64));
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

// Line 1316: range 000000000FE39CC2-000000000FE3A0A3
void __cdecl data::SelectTargetsBySelfGroup::foreachMember(
        data::SelectTargetsBySelfGroup *const this,
        std::function<void(std::any&)> *p_func)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5[304]; // [rsp+10h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 16 18 operation_any:1318 64 16 14 value_any:1320 96 16 22 dynamic_value_any:1322 128 16 19 "
                        "use_binary_any:1324 160 16 21 compare_type_any:1326 192 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::SelectTargetsBySelfGroup::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862727] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 192), p_func);
  data::SelectTargets::foreachMember(this, (std::function<void(std::any&)> *)(v2 + 192));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 192));
  *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<data::BitwiseOperator &,data::BitwiseOperator,std::any::_Manager_internal<data::BitwiseOperator>,true,true>(
    (std::any *const)(v2 + 32),
    &this->operation);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 32));
  *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
  std::any::any<unsigned int &,unsigned int,std::any::_Manager_internal<unsigned int>,true,true>(
    (std::any *const)(v2 + 64),
    &this->value);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 64));
  *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  std::any::any<data::DynamicInt &,data::DynamicInt,std::any::_Manager_external<data::DynamicInt>,true,true>(
    (std::any *const)(v2 + 96),
    &this->dynamic_value);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 96));
  *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>((std::any *const)(v2 + 128), &this->use_binary);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 128));
  *(_WORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
  std::any::any<data::RelationalOperator &,data::RelationalOperator,std::any::_Manager_internal<data::RelationalOperator>,true,true>(
    (std::any *const)(v2 + 160),
    &this->compare_type);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 160));
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
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1331: range 000000000FE3A0A4-000000000FE3A1B4
std::shared_ptr<data::SelectTargets> __cdecl data::SelectTargetsBySelfGroup::clone(
        data::SelectTargetsBySelfGroup *const this)
{
  data::SelectTargetsBySelfGroup *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::SelectTargets> result; // rax
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
  *(_QWORD *)(v2 + 16) = data::SelectTargetsBySelfGroup::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::SelectTargetsBySelfGroup,data::SelectTargetsBySelfGroup&>(
    (common::tools::perf::allocator<data::SelectTargetsBySelfGroup,data::SelectTargetsBySelfGroup> *)(v2 + 32),
    v1);
  std::shared_ptr<data::SelectTargets>::shared_ptr<data::SelectTargetsBySelfGroup,void>(
    (std::shared_ptr<data::SelectTargets> *const)this,
    (std::shared_ptr<data::SelectTargetsBySelfGroup> *)(v2 + 32));
  std::shared_ptr<data::SelectTargetsBySelfGroup>::~shared_ptr((std::shared_ptr<data::SelectTargetsBySelfGroup> *const)(v2 + 32));
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

// Line 1335: range 000000000FE3A1B6-000000000FE3A1F9
data::SelectTargetsBySelfGroupPtr __cdecl data::SelectTargetsBySelfGroupFactory::create(
        data::SelectTargetsBySelfGroupFactory *const this)
{
  data::SelectTargetsBySelfGroupPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::SelectTargetsBySelfGroup>();
  result._M_ptr = (std::__shared_ptr<data::SelectTargetsBySelfGroup,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1337: range 000000000FE3A1FA-000000000FE3B2DF
bool __cdecl data::SelectTargetsBySelfGroup::fromJson(
        data::SelectTargetsBySelfGroup *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  bool v6; // r14
  bool v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rdx
  Json::Value *operation_ptr; // [rsp+18h] [rbp-418h]
  const Json::Value *value_ptr; // [rsp+20h] [rbp-410h]
  const Json::Value *dynamic_value_ptr; // [rsp+28h] [rbp-408h]
  const Json::Value *use_binary_ptr; // [rsp+30h] [rbp-400h]
  Json::Value *compare_type_ptr; // [rsp+38h] [rbp-3F8h]
  char v15[1008]; // [rsp+40h] [rbp-3F0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(960LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "18 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 32 "
                        "9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9"
                        " <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 "
                        "<unknown> 832 32 9 <unknown> 896 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::SelectTargetsBySelfGroup::fromJson;
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
  v4[536862743] = -218959118;
  v4[536862745] = -218959118;
  v4[536862747] = -218959118;
  v4[536862749] = -202116109;
  if ( !data::SelectTargets::fromJson(this, jval) )
  {
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
      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
      "fromJson",
      1340);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[35])"fromJson for: SelectTargets fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 192),
      "operation",
      (const std::allocator<char> *)(v2 + 48));
    operation_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 192));
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( !operation_ptr )
      goto LABEL_15;
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 256, 32LL);
    }
    Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 256), (Json::Value_0 *)operation_ptr);
    v6 = !data::enumStrToVal((const std::string *)(v2 + 256), &this->operation);
    std::string::~string((void *)(v2 + 256));
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
    if ( v6 )
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
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
        "fromJson",
        1352);
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[31])"fromJson for: operation fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      result = 0;
    }
    else
    {
LABEL_15:
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 384),
        "value",
        (const std::allocator<char> *)(v2 + 64));
      value_ptr = jsonValueFind(jval, (const std::string *)(v2 + 384));
      std::string::~string((void *)(v2 + 384));
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( value_ptr && !fromJson<unsigned int>(value_ptr, &this->value) )
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
          "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
          "fromJson",
          1364);
        common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
          (common::milog::MiLogStream *const)(v2 + 448),
          (const char (*)[27])"fromJson for: value fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
        result = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 512),
          "dynamicValue",
          (const std::allocator<char> *)(v2 + 80));
        dynamic_value_ptr = jsonValueFind(jval, (const std::string *)(v2 + 512));
        std::string::~string((void *)(v2 + 512));
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( dynamic_value_ptr && !data::DynamicInt::fromJson(&this->dynamic_value, dynamic_value_ptr) )
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
            "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
            "fromJson",
            1376);
          common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            (common::milog::MiLogStream *const)(v2 + 576),
            (const char (*)[34])"fromJson for: dynamicValue fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
          result = 0;
        }
        else
        {
          *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 96);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 640),
            "useBinary",
            (const std::allocator<char> *)(v2 + 96));
          use_binary_ptr = jsonValueFind(jval, (const std::string *)(v2 + 640));
          std::string::~string((void *)(v2 + 640));
          *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 96);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( use_binary_ptr && !fromJson<bool>(use_binary_ptr, &this->use_binary) )
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
              "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
              "fromJson",
              1388);
            common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              (common::milog::MiLogStream *const)(v2 + 704),
              (const char (*)[31])"fromJson for: useBinary fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
            result = 0;
          }
          else
          {
            *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 112);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 768),
              "compareType",
              (const std::allocator<char> *)(v2 + 112));
            compare_type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 768));
            std::string::~string((void *)(v2 + 768));
            *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 112);
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
            if ( !compare_type_ptr )
              goto LABEL_37;
            *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 832) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 863) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 863) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 832, 32LL);
            }
            Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 832), (Json::Value_0 *)compare_type_ptr);
            v7 = !data::enumStrToVal((const std::string *)(v2 + 832), &this->compare_type);
            std::string::~string((void *)(v2 + 832));
            *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -117901064;
            if ( v7 )
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
                "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
                "fromJson",
                1400);
              common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                (common::milog::MiLogStream *const)(v2 + 896),
                (const char (*)[33])"fromJson for: compareType fails!");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 896));
              result = 0;
            }
            else
            {
LABEL_37:
              v8 = ((_BYTE)this + 60) & 7;
              v9 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
              if ( (_BYTE)v9 )
                __asan_report_store1(&this->is_json_loaded, v8, v9);
              this->is_json_loaded = 1;
              result = 1;
            }
          }
        }
      }
    }
  }
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8034) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8054) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF805C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8064) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF806C) = 0;
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

// Line 1407: range 000000000FE3B2E0-000000000FE3BE2D
data::SelectTargetsBySelfGroupPtr __cdecl data::SelectTargetsBySelfGroup::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::SelectTargetsBySelfGroupPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<data::SelectTargetsBySelfGroup,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 13 base_ptr:1420 96 16 8 ptr:1426 128 32 9 <unknown> 192 32 9 <unknown"
                        "> 256 32 14 type_name:1414 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::SelectTargetsBySelfGroup::parseFromJson;
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
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
        "parseFromJson",
        1417);
      common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[52])"fromJson for: SelectTargetsBySelfGroup $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::SelectTargetsBySelfGroup>::shared_ptr(
        (std::shared_ptr<data::SelectTargetsBySelfGroup> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createSelectTargets((const std::string *)(v2 + 64));
      if ( std::operator==<data::SelectTargets>((const std::shared_ptr<data::SelectTargets> *)(v2 + 64), 0LL) )
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
          "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
          "parseFromJson",
          1423);
        v6 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[39])"create SelectTargets fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::SelectTargetsBySelfGroup>::shared_ptr(
          (std::shared_ptr<data::SelectTargetsBySelfGroup> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::SelectTargetsBySelfGroup,data::SelectTargets>((const std::shared_ptr<data::SelectTargets> *)(v2 + 96));
        if ( std::operator==<data::SelectTargetsBySelfGroup>(
               (const std::shared_ptr<data::SelectTargetsBySelfGroup> *)(v2 + 96),
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
            "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
            "parseFromJson",
            1429);
          common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[43])"cast to SelectTargetsBySelfGroupPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::SelectTargetsBySelfGroup>::shared_ptr(
            (std::shared_ptr<data::SelectTargetsBySelfGroup> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::SelectTargetsBySelfGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SelectTargetsBySelfGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
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
              "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
              "parseFromJson",
              1434);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::SelectTargetsBySelfGroup>::shared_ptr(
              (std::shared_ptr<data::SelectTargetsBySelfGroup> *const)jval,
              0LL);
          }
          else
          {
            v10 = std::__shared_ptr_access<data::SelectTargetsBySelfGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SelectTargetsBySelfGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000);
            if ( v11 != 0 && (((unsigned __int8)v10 + 60) & 7) >= v11 )
            {
              LOBYTE(v1) = v11 != 0;
              __asan_report_store1(&v10->is_json_loaded, v1, v10);
            }
            v10->is_json_loaded = 1;
            std::shared_ptr<data::SelectTargetsBySelfGroup>::shared_ptr(
              (std::shared_ptr<data::SelectTargetsBySelfGroup> *const)jval,
              (std::shared_ptr<data::SelectTargetsBySelfGroup> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::SelectTargetsBySelfGroup>::~shared_ptr((std::shared_ptr<data::SelectTargetsBySelfGroup> *const)(v2 + 96));
      }
      std::shared_ptr<data::SelectTargets>::~shared_ptr((std::shared_ptr<data::SelectTargets> *const)(v2 + 64));
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
      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
      "parseFromJson",
      1411);
    common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[57])"jsonValueFind for: SelectTargetsBySelfGroup $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::SelectTargetsBySelfGroup>::shared_ptr(
      (std::shared_ptr<data::SelectTargetsBySelfGroup> *const)jval,
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
  result._M_ptr = (std::__shared_ptr<data::SelectTargetsBySelfGroup,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 1442: range 000000000FE3BE2E-000000000FE3C0AF
int32_t __cdecl data::SelectTargetsBySelfGroup::getHashValue(const data::SelectTargetsBySelfGroup *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // edx
  char v6; // al
  int32_t v7; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1443";
  *(_QWORD *)(v2 + 16) = data::SelectTargetsBySelfGroup::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::SelectTargets::getHashValue(this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  if ( *(_BYTE *)(((unsigned __int64)&this->operation >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->operation >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->operation);
  }
  common::tools::HashUtils::appendHash(this->operation, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->value);
  }
  common::tools::HashUtils::appendHash(this->value, (int32_t *)(v2 + 32));
  v7 = data::DynamicInt::getHashValue(&this->dynamic_value);
  common::tools::HashUtils::appendHash(v7, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->use_binary >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->use_binary, v2 + 32, &this->use_binary);
  common::tools::HashUtils::appendHash(this->use_binary, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->compare_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->compare_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->compare_type);
  }
  common::tools::HashUtils::appendHash(this->compare_type, (int32_t *)(v2 + 32));
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

// Line 1456: range 000000001015B91C-000000001015BB5D
void __cdecl data::SelectTargetsByLCTriggerRegister::SelectTargetsByLCTriggerRegister(
        data::SelectTargetsByLCTriggerRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::SelectTargets> *v4; // rax
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
  *(_QWORD *)(v1 + 16) = data::SelectTargetsByLCTriggerRegister::SelectTargetsByLCTriggerRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::SelectTargetsByLCTrigger>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "SelectTargetsByLCTrigger",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::SelectTargets>>::operator[](
         &data::g_SelectTargetsMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::SelectTargets>>::key_type *)(v1 + 96));
  std::shared_ptr<data::SelectTargets>::operator=<data::SelectTargetsByLCTrigger>(
    v4,
    (std::shared_ptr<data::SelectTargetsByLCTrigger> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::SelectTargetsByLCTrigger>::~shared_ptr((std::shared_ptr<data::SelectTargetsByLCTrigger> *const)(v1 + 64));
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

// Line 1459: range 000000000FE3C0B0-000000000FE3C280
void __cdecl data::SelectTargetsByLCTrigger::foreachMember(
        data::SelectTargetsByLCTrigger *const this,
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
  *(_QWORD *)(v2 + 8) = "2 32 16 25 camp_target_type_any:1461 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::SelectTargetsByLCTrigger::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 64), p_func);
  data::SelectTargets::foreachMember(this, (std::function<void(std::any&)> *)(v2 + 64));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<data::TargetType &,data::TargetType,std::any::_Manager_internal<data::TargetType>,true,true>(
    (std::any *const)(v2 + 32),
    &this->camp_target_type);
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

// Line 1466: range 000000000FE3C282-000000000FE3C392
std::shared_ptr<data::SelectTargets> __cdecl data::SelectTargetsByLCTrigger::clone(
        data::SelectTargetsByLCTrigger *const this)
{
  data::SelectTargetsByLCTrigger *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::SelectTargets> result; // rax
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
  *(_QWORD *)(v2 + 16) = data::SelectTargetsByLCTrigger::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::SelectTargetsByLCTrigger,data::SelectTargetsByLCTrigger&>(
    (common::tools::perf::allocator<data::SelectTargetsByLCTrigger,data::SelectTargetsByLCTrigger> *)(v2 + 32),
    v1);
  std::shared_ptr<data::SelectTargets>::shared_ptr<data::SelectTargetsByLCTrigger,void>(
    (std::shared_ptr<data::SelectTargets> *const)this,
    (std::shared_ptr<data::SelectTargetsByLCTrigger> *)(v2 + 32));
  std::shared_ptr<data::SelectTargetsByLCTrigger>::~shared_ptr((std::shared_ptr<data::SelectTargetsByLCTrigger> *const)(v2 + 32));
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

// Line 1470: range 000000000FE3C394-000000000FE3C3D7
data::SelectTargetsByLCTriggerPtr __cdecl data::SelectTargetsByLCTriggerFactory::create(
        data::SelectTargetsByLCTriggerFactory *const this)
{
  data::SelectTargetsByLCTriggerPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::SelectTargetsByLCTrigger>();
  result._M_ptr = (std::__shared_ptr<data::SelectTargetsByLCTrigger,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1472: range 000000000FE3C3D8-000000000FE3C96F
bool __cdecl data::SelectTargetsByLCTrigger::fromJson(
        data::SelectTargetsByLCTrigger *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  bool v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rdx
  Json::Value *camp_target_type_ptr; // [rsp+18h] [rbp-178h]
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
  *(_QWORD *)(v2 + 16) = data::SelectTargetsByLCTrigger::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -202116109;
  if ( !data::SelectTargets::fromJson(this, jval) )
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
      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
      "fromJson",
      1475);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      (common::milog::MiLogStream *const)(v2 + 64),
      (const char (*)[35])"fromJson for: SelectTargets fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 128),
      "campTargetType",
      (const std::allocator<char> *)(v2 + 48));
    camp_target_type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 128));
    std::string::~string((void *)(v2 + 128));
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( !camp_target_type_ptr )
      goto LABEL_15;
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 192, 32LL);
    }
    Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 192), (Json::Value_0 *)camp_target_type_ptr);
    v6 = !data::enumStrToVal((const std::string *)(v2 + 192), &this->camp_target_type);
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    if ( v6 )
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
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
        "fromJson",
        1487);
      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
        (common::milog::MiLogStream *const)(v2 + 256),
        (const char (*)[36])"fromJson for: campTargetType fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
LABEL_15:
      v7 = ((_BYTE)this + 60) & 7;
      v8 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
      if ( (_BYTE)v8 )
        __asan_report_store1(&this->is_json_loaded, v7, v8);
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

// Line 1494: range 000000000FE3C970-000000000FE3D4BD
data::SelectTargetsByLCTriggerPtr __cdecl data::SelectTargetsByLCTrigger::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::SelectTargetsByLCTriggerPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<data::SelectTargetsByLCTrigger,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 13 base_ptr:1507 96 16 8 ptr:1513 128 32 9 <unknown> 192 32 9 <unknown"
                        "> 256 32 14 type_name:1501 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::SelectTargetsByLCTrigger::parseFromJson;
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
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
        "parseFromJson",
        1504);
      common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[52])"fromJson for: SelectTargetsByLCTrigger $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::SelectTargetsByLCTrigger>::shared_ptr(
        (std::shared_ptr<data::SelectTargetsByLCTrigger> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createSelectTargets((const std::string *)(v2 + 64));
      if ( std::operator==<data::SelectTargets>((const std::shared_ptr<data::SelectTargets> *)(v2 + 64), 0LL) )
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
          "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
          "parseFromJson",
          1510);
        v6 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[39])"create SelectTargets fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::SelectTargetsByLCTrigger>::shared_ptr(
          (std::shared_ptr<data::SelectTargetsByLCTrigger> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::SelectTargetsByLCTrigger,data::SelectTargets>((const std::shared_ptr<data::SelectTargets> *)(v2 + 96));
        if ( std::operator==<data::SelectTargetsByLCTrigger>(
               (const std::shared_ptr<data::SelectTargetsByLCTrigger> *)(v2 + 96),
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
            "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
            "parseFromJson",
            1516);
          common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[43])"cast to SelectTargetsByLCTriggerPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::SelectTargetsByLCTrigger>::shared_ptr(
            (std::shared_ptr<data::SelectTargetsByLCTrigger> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::SelectTargetsByLCTrigger,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SelectTargetsByLCTrigger,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
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
              "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
              "parseFromJson",
              1521);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::SelectTargetsByLCTrigger>::shared_ptr(
              (std::shared_ptr<data::SelectTargetsByLCTrigger> *const)jval,
              0LL);
          }
          else
          {
            v10 = std::__shared_ptr_access<data::SelectTargetsByLCTrigger,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SelectTargetsByLCTrigger,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000);
            if ( v11 != 0 && (((unsigned __int8)v10 + 60) & 7) >= v11 )
            {
              LOBYTE(v1) = v11 != 0;
              __asan_report_store1(&v10->is_json_loaded, v1, v10);
            }
            v10->is_json_loaded = 1;
            std::shared_ptr<data::SelectTargetsByLCTrigger>::shared_ptr(
              (std::shared_ptr<data::SelectTargetsByLCTrigger> *const)jval,
              (std::shared_ptr<data::SelectTargetsByLCTrigger> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::SelectTargetsByLCTrigger>::~shared_ptr((std::shared_ptr<data::SelectTargetsByLCTrigger> *const)(v2 + 96));
      }
      std::shared_ptr<data::SelectTargets>::~shared_ptr((std::shared_ptr<data::SelectTargets> *const)(v2 + 64));
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
      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
      "parseFromJson",
      1498);
    common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[57])"jsonValueFind for: SelectTargetsByLCTrigger $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::SelectTargetsByLCTrigger>::shared_ptr(
      (std::shared_ptr<data::SelectTargetsByLCTrigger> *const)jval,
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
  result._M_ptr = (std::__shared_ptr<data::SelectTargetsByLCTrigger,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 1529: range 000000000FE3D4BE-000000000FE3D62F
int32_t __cdecl data::SelectTargetsByLCTrigger::getHashValue(const data::SelectTargetsByLCTrigger *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1530";
  *(_QWORD *)(v2 + 16) = data::SelectTargetsByLCTrigger::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::SelectTargets::getHashValue(this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  if ( *(_BYTE *)(((unsigned __int64)&this->camp_target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->camp_target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->camp_target_type);
  }
  common::tools::HashUtils::appendHash(this->camp_target_type, (int32_t *)(v2 + 32));
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

// Line 1539: range 000000001015BBD6-000000001015BE17
void __cdecl data::SelectTargetsByLCTriggerAllRegister::SelectTargetsByLCTriggerAllRegister(
        data::SelectTargetsByLCTriggerAllRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::SelectTargets> *v4; // rax
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
  *(_QWORD *)(v1 + 16) = data::SelectTargetsByLCTriggerAllRegister::SelectTargetsByLCTriggerAllRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::SelectTargetsByLCTriggerAll>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "SelectTargetsByLCTriggerAll",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::SelectTargets>>::operator[](
         &data::g_SelectTargetsMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::SelectTargets>>::key_type *)(v1 + 96));
  std::shared_ptr<data::SelectTargets>::operator=<data::SelectTargetsByLCTriggerAll>(
    v4,
    (std::shared_ptr<data::SelectTargetsByLCTriggerAll> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::SelectTargetsByLCTriggerAll>::~shared_ptr((std::shared_ptr<data::SelectTargetsByLCTriggerAll> *const)(v1 + 64));
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

// Line 1542: range 000000000FE3D630-000000000FE3D763
void __cdecl data::SelectTargetsByLCTriggerAll::foreachMember(
        data::SelectTargetsByLCTriggerAll *const this,
        std::function<void(std::any&)> *p_func)
{
  std::function<void(std::any&)> *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v5[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (std::function<void(std::any&)> *)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::function<void(std::any&)> *)v3;
  }
  v2->_M_functor._M_unused._M_object = (void *)1102416563;
  *(_QWORD *)&v2->_M_functor._M_pod_data[8] = "1 32 32 9 <unknown>";
  v2->_M_manager = (std::_Function_base::_Manager_type)data::SelectTargetsByLCTriggerAll::foreachMember;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  std::function<void ()(std::any &)>::function(v2 + 1, p_func);
  data::SelectTargets::foreachMember(this, v2 + 1);
  std::function<void ()(std::any &)>::~function(v2 + 1);
  if ( v5 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_functor._M_unused._M_object = (void *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1547: range 000000000FE3D764-000000000FE3D874
std::shared_ptr<data::SelectTargets> __cdecl data::SelectTargetsByLCTriggerAll::clone(
        data::SelectTargetsByLCTriggerAll *const this)
{
  data::SelectTargetsByLCTriggerAll *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::SelectTargets> result; // rax
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
  *(_QWORD *)(v2 + 16) = data::SelectTargetsByLCTriggerAll::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::SelectTargetsByLCTriggerAll,data::SelectTargetsByLCTriggerAll&>(
    (common::tools::perf::allocator<data::SelectTargetsByLCTriggerAll,data::SelectTargetsByLCTriggerAll> *)(v2 + 32),
    v1);
  std::shared_ptr<data::SelectTargets>::shared_ptr<data::SelectTargetsByLCTriggerAll,void>(
    (std::shared_ptr<data::SelectTargets> *const)this,
    (std::shared_ptr<data::SelectTargetsByLCTriggerAll> *)(v2 + 32));
  std::shared_ptr<data::SelectTargetsByLCTriggerAll>::~shared_ptr((std::shared_ptr<data::SelectTargetsByLCTriggerAll> *const)(v2 + 32));
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

// Line 1551: range 000000000FE3D876-000000000FE3D8B9
data::SelectTargetsByLCTriggerAllPtr __cdecl data::SelectTargetsByLCTriggerAllFactory::create(
        data::SelectTargetsByLCTriggerAllFactory *const this)
{
  data::SelectTargetsByLCTriggerAllPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::SelectTargetsByLCTriggerAll>();
  result._M_ptr = (std::__shared_ptr<data::SelectTargetsByLCTriggerAll,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1553: range 000000000FE3D8BA-000000000FE3DAD2
bool __cdecl data::SelectTargetsByLCTriggerAll::fromJson(
        data::SelectTargetsByLCTriggerAll *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  char v8[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::SelectTargetsByLCTriggerAll::fromJson;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( !data::SelectTargets::fromJson(this, jval) )
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
      3u,
      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
      "fromJson",
      1556);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      (common::milog::MiLogStream *const)(v2 + 32),
      (const char (*)[35])"fromJson for: SelectTargets fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = 0;
  }
  else
  {
    v6 = ((_BYTE)this + 60) & 7;
    v7 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
    if ( (_BYTE)v7 )
      __asan_report_store1(&this->is_json_loaded, v6, v7);
    this->is_json_loaded = 1;
    result = 1;
  }
  if ( v8 == (char *)v2 )
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

// Line 1563: range 000000000FE3DAD4-000000000FE3E621
data::SelectTargetsByLCTriggerAllPtr __cdecl data::SelectTargetsByLCTriggerAll::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::SelectTargetsByLCTriggerAllPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<data::SelectTargetsByLCTriggerAll,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 13 base_ptr:1576 96 16 8 ptr:1582 128 32 9 <unknown> 192 32 9 <unknown"
                        "> 256 32 14 type_name:1570 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::SelectTargetsByLCTriggerAll::parseFromJson;
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
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
        "parseFromJson",
        1573);
      common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[55])"fromJson for: SelectTargetsByLCTriggerAll $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::SelectTargetsByLCTriggerAll>::shared_ptr(
        (std::shared_ptr<data::SelectTargetsByLCTriggerAll> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createSelectTargets((const std::string *)(v2 + 64));
      if ( std::operator==<data::SelectTargets>((const std::shared_ptr<data::SelectTargets> *)(v2 + 64), 0LL) )
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
          "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
          "parseFromJson",
          1579);
        v6 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[39])"create SelectTargets fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::SelectTargetsByLCTriggerAll>::shared_ptr(
          (std::shared_ptr<data::SelectTargetsByLCTriggerAll> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::SelectTargetsByLCTriggerAll,data::SelectTargets>((const std::shared_ptr<data::SelectTargets> *)(v2 + 96));
        if ( std::operator==<data::SelectTargetsByLCTriggerAll>(
               (const std::shared_ptr<data::SelectTargetsByLCTriggerAll> *)(v2 + 96),
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
            "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
            "parseFromJson",
            1585);
          common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[46])"cast to SelectTargetsByLCTriggerAllPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::SelectTargetsByLCTriggerAll>::shared_ptr(
            (std::shared_ptr<data::SelectTargetsByLCTriggerAll> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::SelectTargetsByLCTriggerAll,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SelectTargetsByLCTriggerAll,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
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
              "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
              "parseFromJson",
              1590);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::SelectTargetsByLCTriggerAll>::shared_ptr(
              (std::shared_ptr<data::SelectTargetsByLCTriggerAll> *const)jval,
              0LL);
          }
          else
          {
            v10 = std::__shared_ptr_access<data::SelectTargetsByLCTriggerAll,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SelectTargetsByLCTriggerAll,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000);
            if ( v11 != 0 && (((unsigned __int8)v10 + 60) & 7) >= v11 )
            {
              LOBYTE(v1) = v11 != 0;
              __asan_report_store1(&v10->is_json_loaded, v1, v10);
            }
            v10->is_json_loaded = 1;
            std::shared_ptr<data::SelectTargetsByLCTriggerAll>::shared_ptr(
              (std::shared_ptr<data::SelectTargetsByLCTriggerAll> *const)jval,
              (std::shared_ptr<data::SelectTargetsByLCTriggerAll> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::SelectTargetsByLCTriggerAll>::~shared_ptr((std::shared_ptr<data::SelectTargetsByLCTriggerAll> *const)(v2 + 96));
      }
      std::shared_ptr<data::SelectTargets>::~shared_ptr((std::shared_ptr<data::SelectTargets> *const)(v2 + 64));
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
      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
      "parseFromJson",
      1567);
    common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[60])"jsonValueFind for: SelectTargetsByLCTriggerAll $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::SelectTargetsByLCTriggerAll>::shared_ptr(
      (std::shared_ptr<data::SelectTargetsByLCTriggerAll> *const)jval,
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
  result._M_ptr = (std::__shared_ptr<data::SelectTargetsByLCTriggerAll,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 1598: range 000000000FE3E622-000000000FE3E641
int32_t __cdecl data::SelectTargetsByLCTriggerAll::getHashValue(const data::SelectTargetsByLCTriggerAll *const this)
{
  return data::SelectTargets::getHashValue(this);
};

// Line 1605: range 000000000FE3E642-000000000FE3E693
bool __cdecl data::ConfigAbilityStateOption::fromJson(
        data::ConfigAbilityStateOption *const this,
        const Json::Value *jval)
{
  __int64 v2; // rsi
  __int64 v3; // rdx

  v2 = (unsigned __int8)this & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(this, v2, v3);
  this->is_json_loaded = 1;
  return 1;
};

// Line 1611: range 000000000FE3E694-000000000FE3E6A7
int32_t __cdecl data::ConfigAbilityStateOption::getHashValue(const data::ConfigAbilityStateOption *const this)
{
  return 0;
};

// Line 1618: range 000000000FE3E6A8-000000000FE3FFE4
bool __cdecl data::ConfigAbilityPropertyEntry::fromJson(
        data::ConfigAbilityPropertyEntry *const this,
        const Json::Value *jval)
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
  Json::Value *type_ptr; // [rsp+18h] [rbp-638h]
  const Json::Value *default_value_ptr; // [rsp+20h] [rbp-630h]
  const Json::Value *ceiling_ptr; // [rsp+28h] [rbp-628h]
  const Json::Value *floor_ptr; // [rsp+30h] [rbp-620h]
  Json::Value *stacking_ptr; // [rsp+38h] [rbp-618h]
  const Json::Value *succeed_ptr; // [rsp+40h] [rbp-610h]
  const Json::Value *use_tag_ptr; // [rsp+48h] [rbp-608h]
  const Json::Value *limited_tag_ceiling_ptr; // [rsp+50h] [rbp-600h]
  const Json::Value *limited_tag_floor_ptr; // [rsp+58h] [rbp-5F8h]
  char v21[1520]; // [rsp+60h] [rbp-5F0h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1472LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "29 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 32 9 <unknown> 256 32 9 <un"
                        "known> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unk"
                        "nown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 32 9 <unknown> 896 32 9 <unkn"
                        "own> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 <unknown> 1152 32 9 <unknown> 1216 32 9 <u"
                        "nknown> 1280 32 9 <unknown> 1344 32 9 <unknown> 1408 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigAbilityPropertyEntry::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862724] = -234753535;
  v4[536862725] = -234753535;
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
  v4[536862757] = -218959118;
  v4[536862759] = -218959118;
  v4[536862761] = -218959118;
  v4[536862763] = -218959118;
  v4[536862765] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 192),
    "Type",
    (const std::allocator<char> *)(v2 + 48));
  type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 192));
  std::string::~string((void *)(v2 + 192));
  *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( !type_ptr )
    goto LABEL_11;
  *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 256, 32LL);
  }
  Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 256), (Json::Value_0 *)type_ptr);
  v5 = !data::enumStrToVal((const std::string *)(v2 + 256), &this->type);
  std::string::~string((void *)(v2 + 256));
  *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
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
      3u,
      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
      "fromJson",
      1628);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      (common::milog::MiLogStream *const)(v2 + 320),
      (const char (*)[26])"fromJson for: Type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
    v6 = 0;
  }
  else
  {
LABEL_11:
    *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 384),
      "DefaultValue",
      (const std::allocator<char> *)(v2 + 64));
    default_value_ptr = jsonValueFind(jval, (const std::string *)(v2 + 384));
    std::string::~string((void *)(v2 + 384));
    *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( default_value_ptr && !fromJson<float>(default_value_ptr, &this->default_value) )
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
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
        "fromJson",
        1640);
      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
        (common::milog::MiLogStream *const)(v2 + 448),
        (const char (*)[34])"fromJson for: DefaultValue fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
      v6 = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 512),
        "Ceiling",
        (const std::allocator<char> *)(v2 + 80));
      ceiling_ptr = jsonValueFind(jval, (const std::string *)(v2 + 512));
      std::string::~string((void *)(v2 + 512));
      *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( ceiling_ptr && !fromJson<float>(ceiling_ptr, &this->ceiling) )
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
          "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
          "fromJson",
          1652);
        common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
          (common::milog::MiLogStream *const)(v2 + 576),
          (const char (*)[29])"fromJson for: Ceiling fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
        v6 = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 640),
          "Floor",
          (const std::allocator<char> *)(v2 + 96));
        floor_ptr = jsonValueFind(jval, (const std::string *)(v2 + 640));
        std::string::~string((void *)(v2 + 640));
        *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( floor_ptr && !fromJson<float>(floor_ptr, &this->floor) )
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
            "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
            "fromJson",
            1664);
          common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            (common::milog::MiLogStream *const)(v2 + 704),
            (const char (*)[27])"fromJson for: Floor fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
          v6 = 0;
        }
        else
        {
          *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 112);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 768),
            "Stacking",
            (const std::allocator<char> *)(v2 + 112));
          stacking_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 768));
          std::string::~string((void *)(v2 + 768));
          *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( !stacking_ptr )
            goto LABEL_33;
          *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 832) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 863) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 863) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 832, 32LL);
          }
          Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 832), (Json::Value_0 *)stacking_ptr);
          v7 = !data::enumStrToVal((const std::string *)(v2 + 832), &this->stacking);
          std::string::~string((void *)(v2 + 832));
          *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -117901064;
          if ( v7 )
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
              "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
              "fromJson",
              1676);
            common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              (common::milog::MiLogStream *const)(v2 + 896),
              (const char (*)[30])"fromJson for: Stacking fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 896));
            v6 = 0;
          }
          else
          {
LABEL_33:
            *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 128);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 960),
              "Succeed",
              (const std::allocator<char> *)(v2 + 128));
            succeed_ptr = jsonValueFind(jval, (const std::string *)(v2 + 960));
            std::string::~string((void *)(v2 + 960));
            *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 128);
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
            if ( succeed_ptr && !fromJson<bool>(succeed_ptr, &this->succeed) )
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
                "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
                "fromJson",
                1688);
              common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                (common::milog::MiLogStream *const)(v2 + 1024),
                (const char (*)[29])"fromJson for: Succeed fails!");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1024));
              v6 = 0;
            }
            else
            {
              *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 144);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1088),
                "UseTag",
                (const std::allocator<char> *)(v2 + 144));
              use_tag_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1088));
              std::string::~string((void *)(v2 + 1088));
              *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 144);
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
              if ( use_tag_ptr && !fromJson<bool>(use_tag_ptr, &this->use_tag) )
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
                  "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
                  "fromJson",
                  1700);
                common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                  (common::milog::MiLogStream *const)(v2 + 1152),
                  (const char (*)[28])"fromJson for: UseTag fails!");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1152));
                v6 = 0;
              }
              else
              {
                *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 160);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1216),
                  "LimitedTagCeiling",
                  (const std::allocator<char> *)(v2 + 160));
                limited_tag_ceiling_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1216));
                std::string::~string((void *)(v2 + 1216));
                *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 160);
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                if ( limited_tag_ceiling_ptr && !fromJson<float>(limited_tag_ceiling_ptr, &this->limited_tag_ceiling) )
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
                    "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
                    "fromJson",
                    1712);
                  common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                    (common::milog::MiLogStream *const)(v2 + 1280),
                    (const char (*)[39])"fromJson for: LimitedTagCeiling fails!");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1280));
                  v6 = 0;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 176);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1344),
                    "LimitedTagFloor",
                    (const std::allocator<char> *)(v2 + 176));
                  limited_tag_floor_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1344));
                  std::string::~string((void *)(v2 + 1344));
                  *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 176);
                  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                  if ( limited_tag_floor_ptr && !fromJson<float>(limited_tag_floor_ptr, &this->limited_tag_floor) )
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
                      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
                      "fromJson",
                      1724);
                    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                      (common::milog::MiLogStream *const)(v2 + 1408),
                      (const char (*)[37])"fromJson for: LimitedTagFloor fails!");
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1408));
                    v6 = 0;
                  }
                  else
                  {
                    v8 = ((_BYTE)this + 32) & 7;
                    v9 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
                    if ( (_BYTE)v9 )
                      __asan_report_store1(&this->is_json_loaded, v8, v9);
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
  v10 = v6;
  if ( v21 == (char *)v2 )
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF80B4) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1472LL, v21);
  }
  return v10;
};

// Line 1732: range 000000000FE3FFE6-000000000FE403D9
int32_t __cdecl data::ConfigAbilityPropertyEntry::getHashValue(const data::ConfigAbilityPropertyEntry *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  __int64 v5; // rsi
  __int64 v6; // rdx
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1733";
  *(_QWORD *)(v2 + 16) = data::ConfigAbilityPropertyEntry::getHashValue;
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
  common::tools::HashUtils::appendHash(this->type, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->default_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->default_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->default_value);
  }
  common::tools::HashUtils::appendHash(this->default_value, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->ceiling >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ceiling >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->ceiling);
  }
  common::tools::HashUtils::appendHash(this->ceiling, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->floor >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->floor >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->floor);
  }
  common::tools::HashUtils::appendHash(this->floor, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->stacking >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stacking >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->stacking);
  }
  common::tools::HashUtils::appendHash(this->stacking, (int32_t *)(v2 + 32));
  v5 = ((_BYTE)this + 20) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->succeed >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->succeed >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(&this->succeed, v5, v6);
  common::tools::HashUtils::appendHash(this->succeed, (int32_t *)(v2 + 32));
  v7 = ((_BYTE)this + 21) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->use_tag >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->use_tag >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_load1(&this->use_tag, v7, v8);
  common::tools::HashUtils::appendHash(this->use_tag, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->limited_tag_ceiling >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->limited_tag_ceiling >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->limited_tag_ceiling);
  }
  common::tools::HashUtils::appendHash(this->limited_tag_ceiling, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->limited_tag_floor >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->limited_tag_floor >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->limited_tag_floor);
  }
  common::tools::HashUtils::appendHash(this->limited_tag_floor, (int32_t *)(v2 + 32));
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

// Line 1747: range 000000000FE403DA-000000000FE411ED
bool __cdecl data::mapFromJson(const Json::Value *jval, data::ConfigAbilityPropertyEntryMap *m)
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
  unsigned __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rsi
  data::ConfigAbilityPropertyEntry *v20; // r8
  common::milog::MiLogStream *v21; // rax
  int v22; // r14d
  std::pair<std::__detail::_Node_iterator<std::pair<const std::string,data::ConfigAbilityPropertyEntry>,false,true>,bool> v23; // rax
  common::milog::MiLogStream *v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  int v28; // edx
  char v31[784]; // [rsp+20h] [rbp-310h] BYREF

  v3 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(736LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 32 16 8 cit:1749 64 16 9 <unknown> 96 32 8 key:1752 160 32 9 <unknown> 224 32 9 <unknown> 288"
                        " 32 9 <unknown> 352 32 9 <unknown> 416 36 10 value:1759 496 40 13 tmp_jval:1748 576 40 13 key_jv"
                        "al:1751 656 40 15 value_jval:1758";
  *(_QWORD *)(v3 + 16) = data::mapFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959356;
  v5[536862735] = 62194;
  v5[536862736] = -234881024;
  v5[536862737] = -218959118;
  v5[536862739] = -218959360;
  v5[536862740] = 62194;
  v5[536862741] = -218103808;
  v5[536862742] = -202116109;
  Json::Value::Value((Json::Value *)(v3 + 496), jval);
  if ( *(_WORD *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  Json::Value::begin((Json::Value_0 *const)(v3 + 496));
  while ( 1 )
  {
    *(_WORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = 0;
    if ( *(_WORD *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    Json::Value::end((Json::Value_0 *const)(v3 + 496));
    v6 = Json::ValueIteratorBase::operator!=(
           (const Json::ValueIteratorBase *const)(v3 + 32),
           (const Json::ValueIteratorBase::SelfType *)(v3 + 64));
    *(_WORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -1800;
    if ( !v6 )
      break;
    v7 = ((v3 + 576) >> 3) + 2147450880;
    *(_DWORD *)v7 = 0;
    *(_BYTE *)(v7 + 4) = 0;
    if ( *(char *)(((v3 + 576) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 615) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 103) & 7) >= *(_BYTE *)(((v3 + 615) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 576, 40LL);
    }
    Json::ValueIteratorBase::key((Json::ValueIteratorBase *)(v3 + 576));
    *(_DWORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 96);
    if ( !fromJson<std::string>((const Json::Value *)(v3 + 576), (std::string *)(v3 + 96)) )
    {
      *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 160) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 160, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 160),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
        "mapFromJson",
        1755);
      v8 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             (common::milog::MiLogStream *const)(v3 + 160),
             (const char (*)[21])"key fromJson fails: ");
      *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 224, 32LL);
      }
      Json::Value::asString[abi:cxx11]((Json::String *)(v3 + 224), (Json::Value_0 *)(v3 + 576));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v3 + 224));
      std::string::~string((void *)(v3 + 224));
      *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
      v9 = 0;
    }
    else
    {
      v10 = ((v3 + 656) >> 3) + 2147450880;
      *(_DWORD *)v10 = 0;
      *(_BYTE *)(v10 + 4) = 0;
      v11 = Json::ValueIterator::operator*((Json::ValueIterator *const)(v3 + 32));
      Json::Value::Value((Json::Value *)(v3 + 656), v11);
      v12 = ((v3 + 416) >> 3) + 2147450880;
      *(_DWORD *)v12 = 0;
      *(_BYTE *)(v12 + 4) = 4;
      if ( *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 416, v11);
      *(_DWORD *)(v3 + 416) = 0;
      v13 = (((_BYTE)v3 - 96 + 4) & 7u) + 3;
      if ( *(_BYTE *)(((v3 + 420) >> 3) + 0x7FFF8000) != 0
        && (char)(((v3 - 96 + 4) & 7) + 3) >= *(_BYTE *)(((v3 + 420) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v3 + 420, v13);
      }
      *(_DWORD *)(v3 + 420) = 0;
      if ( *(_BYTE *)(((v3 + 424) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 424) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 424, v13);
      *(_DWORD *)(v3 + 424) = 2139095039;
      v14 = (((_BYTE)v3 - 96 + 12) & 7u) + 3;
      if ( *(_BYTE *)(((v3 + 428) >> 3) + 0x7FFF8000) != 0
        && (char)(((v3 - 96 + 12) & 7) + 3) >= *(_BYTE *)(((v3 + 428) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v3 + 428, v14);
      }
      *(_DWORD *)(v3 + 428) = -8388609;
      if ( *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 432, v14);
      *(_DWORD *)(v3 + 432) = 1;
      v15 = ((_BYTE)v3 - 96 + 20) & 7;
      v16 = (*(_BYTE *)(((v3 + 436) >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v15 >= *(_BYTE *)(((v3 + 436) >> 3) + 0x7FFF8000));
      if ( (_BYTE)v16 )
        __asan_report_store1(v3 + 436, v15, v16);
      *(_BYTE *)(v3 + 436) = 0;
      v17 = ((_BYTE)v3 - 96 + 21) & 7;
      v18 = (*(_BYTE *)(((v3 + 437) >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v17 >= *(_BYTE *)(((v3 + 437) >> 3) + 0x7FFF8000));
      if ( (_BYTE)v18 )
        __asan_report_store1(v3 + 437, v17, v18);
      *(_BYTE *)(v3 + 437) = 0;
      if ( *(_BYTE *)(((v3 + 440) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 440) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 440, v17);
      *(_DWORD *)(v3 + 440) = 2139095039;
      v19 = (((_BYTE)v3 - 96 + 28) & 7u) + 3;
      if ( *(_BYTE *)(((v3 + 444) >> 3) + 0x7FFF8000) != 0
        && (char)(((v3 - 96 + 28) & 7) + 3) >= *(_BYTE *)(((v3 + 444) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v3 + 444, v19);
      }
      *(_DWORD *)(v3 + 444) = -8388609;
      if ( *(char *)(((v3 + 448) >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(v3 + 448, v19, v3 + 448);
      *(_BYTE *)(v3 + 448) = 0;
      if ( !data::ConfigAbilityPropertyEntry::fromJson(
              (data::ConfigAbilityPropertyEntry *const)(v3 + 416),
              (const Json::Value *)(v3 + 656)) )
      {
        *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 288) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 32 + 95) & 7) >= *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 288, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 288),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
          "mapFromJson",
          1762);
        v21 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)(v3 + 288),
                (const char (*)[28])"value fromJson fails, key: ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, (const std::string *)(v3 + 96));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
        *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v22 = 0;
      }
      else
      {
        v23 = std::unordered_map<std::string,data::ConfigAbilityPropertyEntry>::emplace<std::string&,data::ConfigAbilityPropertyEntry&>(
                m,
                (std::string *)(v3 + 96),
                (data::ConfigAbilityPropertyEntry *)(v3 + 416),
                (std::string *)(v3 + 96),
                v20);
        if ( !v23.second )
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
            3u,
            "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
            "mapFromJson",
            1767);
          v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 352),
                  (const char (*)[16])"key duplicate: ");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v24, (const std::string *)(v3 + 96));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
          *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
          v2 = 0;
          v22 = 0;
        }
        else
        {
          v22 = 1;
        }
      }
      Json::Value::~Value((Json::Value_0 *const)(v3 + 656));
      v9 = v22 == 1;
    }
    std::string::~string((void *)(v3 + 96));
    Json::Value::~Value((Json::Value_0 *const)(v3 + 576));
    v25 = ((v3 + 576) >> 3) + 2147450880;
    *(_DWORD *)v25 = -117901064;
    *(_BYTE *)(v25 + 4) = -8;
    *(_DWORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = -117901064;
    v26 = ((v3 + 656) >> 3) + 2147450880;
    *(_DWORD *)v26 = -117901064;
    *(_BYTE *)(v26 + 4) = -8;
    v27 = ((v3 + 416) >> 3) + 2147450880;
    *(_DWORD *)v27 = -117901064;
    *(_BYTE *)(v27 + 4) = -8;
    if ( !v9 )
    {
      v28 = 0;
      goto LABEL_52;
    }
    Json::ValueIterator::operator++((Json::ValueIterator *const)(v3 + 32));
  }
  v28 = 1;
LABEL_52:
  *(_WORD *)(((v3 + 32) >> 3) + 0x7FFF8000) = -1800;
  if ( v28 == 1 )
    v2 = 1;
  Json::Value::~Value((Json::Value_0 *const)(v3 + 496));
  if ( v31 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8054) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 92) & 0xFFFFFFF8) >> 3));
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8058) = -168430091;
  }
  return v2;
};

// Line 1776: range 000000000FE411EE-000000000FE41495
int32_t __cdecl data::getMapHashValue(const data::ConfigAbilityPropertyEntryMap *map)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::ConfigAbilityPropertyEntry>,false,true>::reference v7; // [rsp+18h] [rbp-B8h]
  std::tuple_element<0,std::pair<const std::string,data::ConfigAbilityPropertyEntry> >::type *key; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<const std::string,data::ConfigAbilityPropertyEntry> >::type *val; // [rsp+28h] [rbp-A8h]
  char v10[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 hash_code:1777 64 8 16 __for_begin:1778 96 8 14 __for_end:1778";
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
  *(std::unordered_map<std::string,data::ConfigAbilityPropertyEntry>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ConfigAbilityPropertyEntry>::begin(map);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<std::string,data::ConfigAbilityPropertyEntry>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::ConfigAbilityPropertyEntry>::end(map);
  while ( std::__detail::operator!=<std::pair<std::string const,data::ConfigAbilityPropertyEntry>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ConfigAbilityPropertyEntry>,true> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ConfigAbilityPropertyEntry>,true> *)(v2 + 96)) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::ConfigAbilityPropertyEntry>,false,true>::operator*((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::ConfigAbilityPropertyEntry>,false,true> *const)(v2 + 64));
    key = std::get<0ul,std::string const,data::ConfigAbilityPropertyEntry>(v7);
    val = (std::tuple_element<1,const std::pair<const std::string,data::ConfigAbilityPropertyEntry> >::type *)std::get<1ul,std::string const,data::ConfigAbilityPropertyEntry>(v7);
    common::tools::HashUtils::appendHash(key, (int32_t *)(v2 + 48));
    HashValue = data::ConfigAbilityPropertyEntry::getHashValue(val);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    std::__detail::_Node_const_iterator<std::pair<std::string const,data::ConfigAbilityPropertyEntry>,false,true>::operator++((std::__detail::_Node_const_iterator<std::pair<const std::string,data::ConfigAbilityPropertyEntry>,false,true> *const)(v2 + 64));
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

// Line 1790: range 000000000FE41496-000000000FE41A7E
bool __cdecl data::ConfigBuffDebuffAddition::fromJson(
        data::ConfigBuffDebuffAddition *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *addition_buff_debuffs_ptr; // [rsp+10h] [rbp-170h]
  const Json::Value *addition_ratio_ptr; // [rsp+18h] [rbp-168h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigBuffDebuffAddition::fromJson;
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
    "AdditionBuffDebuffs",
    (const std::allocator<char> *)(v2 + 32));
  addition_buff_debuffs_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( addition_buff_debuffs_ptr && !data::vecFromJson(addition_buff_debuffs_ptr, &this->addition_buff_debuffs) )
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
      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
      "fromJson",
      1800);
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[41])"fromJson for: AdditionBuffDebuffs fails!");
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
      "AdditionRatio",
      (const std::allocator<char> *)(v2 + 48));
    addition_ratio_ptr = jsonValueFind(jval, (const std::string *)(v2 + 192));
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( addition_ratio_ptr && !fromJson<float>(addition_ratio_ptr, &this->addition_ratio) )
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
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
        "fromJson",
        1812);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
        (common::milog::MiLogStream *const)(v2 + 256),
        (const char (*)[35])"fromJson for: AdditionRatio fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
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

// Line 1820: range 000000000FE41A80-000000000FE41C05
int32_t __cdecl data::ConfigBuffDebuffAddition::getHashValue(const data::ConfigBuffDebuffAddition *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t VecHashValue; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1821";
  *(_QWORD *)(v2 + 16) = data::ConfigBuffDebuffAddition::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  VecHashValue = data::getVecHashValue(&this->addition_buff_debuffs);
  common::tools::HashUtils::appendHash(VecHashValue, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->addition_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->addition_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->addition_ratio);
  }
  common::tools::HashUtils::appendHash(this->addition_ratio, (int32_t *)(v2 + 32));
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

// Line 1829: range 000000000FE41C06-000000000FE42494
bool __cdecl data::ConfigDebuffResistance::fromJson(data::ConfigDebuffResistance *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  float *p_duration_ratio; // rsi
  const Json::Value *immune_states_ptr; // [rsp+18h] [rbp-218h]
  const Json::Value *resistance_ratio_ptr; // [rsp+20h] [rbp-210h]
  const Json::Value *duration_ratio_ptr; // [rsp+28h] [rbp-208h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigDebuffResistance::fromJson;
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
    "ImmuneStates",
    (const std::allocator<char> *)(v2 + 48));
  immune_states_ptr = jsonValueFind(jval, (const std::string *)(v2 + 96));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( immune_states_ptr && !data::vecFromJson(immune_states_ptr, &this->immune_states) )
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
      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
      "fromJson",
      1839);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[34])"fromJson for: ImmuneStates fails!");
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
      "ResistanceRatio",
      (const std::allocator<char> *)(v2 + 64));
    resistance_ratio_ptr = jsonValueFind(jval, (const std::string *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( resistance_ratio_ptr && !fromJson<float>(resistance_ratio_ptr, &this->resistance_ratio) )
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
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
        "fromJson",
        1851);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[37])"fromJson for: ResistanceRatio fails!");
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
        "DurationRatio",
        (const std::allocator<char> *)(v2 + 80));
      p_duration_ratio = (float *)(v2 + 352);
      duration_ratio_ptr = jsonValueFind(jval, (const std::string *)(v2 + 352));
      std::string::~string((void *)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( duration_ratio_ptr
        && (p_duration_ratio = &this->duration_ratio, !fromJson<float>(duration_ratio_ptr, &this->duration_ratio)) )
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
          "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
          "fromJson",
          1863);
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
          (common::milog::MiLogStream *const)(v2 + 416),
          (const char (*)[35])"fromJson for: DurationRatio fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
        result = 0;
      }
      else
      {
        if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(&this->is_json_loaded, p_duration_ratio, &this->is_json_loaded);
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

// Line 1871: range 000000000FE42496-000000000FE4266E
int32_t __cdecl data::ConfigDebuffResistance::getHashValue(const data::ConfigDebuffResistance *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t VecHashValue; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1872";
  *(_QWORD *)(v2 + 16) = data::ConfigDebuffResistance::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  VecHashValue = data::getVecHashValue(&this->immune_states);
  common::tools::HashUtils::appendHash(VecHashValue, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->resistance_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->resistance_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->resistance_ratio);
  }
  common::tools::HashUtils::appendHash(this->resistance_ratio, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->duration_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->duration_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->duration_ratio);
  }
  common::tools::HashUtils::appendHash(this->duration_ratio, (int32_t *)(v2 + 32));
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

// Line 1881: range 000000000FE42670-000000000FE42EFE
bool __cdecl data::ConfigBuffDebuffResistance::fromJson(
        data::ConfigBuffDebuffResistance *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  float *p_duration_ratio; // rsi
  const Json::Value *resistance_buff_debuffs_ptr; // [rsp+18h] [rbp-218h]
  const Json::Value *resistance_ratio_ptr; // [rsp+20h] [rbp-210h]
  const Json::Value *duration_ratio_ptr; // [rsp+28h] [rbp-208h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigBuffDebuffResistance::fromJson;
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
    "ResistanceBuffDebuffs",
    (const std::allocator<char> *)(v2 + 48));
  resistance_buff_debuffs_ptr = jsonValueFind(jval, (const std::string *)(v2 + 96));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( resistance_buff_debuffs_ptr && !data::vecFromJson(resistance_buff_debuffs_ptr, &this->resistance_buff_debuffs) )
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
      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
      "fromJson",
      1891);
    common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[43])"fromJson for: ResistanceBuffDebuffs fails!");
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
      "ResistanceRatio",
      (const std::allocator<char> *)(v2 + 64));
    resistance_ratio_ptr = jsonValueFind(jval, (const std::string *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( resistance_ratio_ptr && !fromJson<float>(resistance_ratio_ptr, &this->resistance_ratio) )
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
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
        "fromJson",
        1903);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[37])"fromJson for: ResistanceRatio fails!");
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
        "DurationRatio",
        (const std::allocator<char> *)(v2 + 80));
      p_duration_ratio = (float *)(v2 + 352);
      duration_ratio_ptr = jsonValueFind(jval, (const std::string *)(v2 + 352));
      std::string::~string((void *)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( duration_ratio_ptr
        && (p_duration_ratio = &this->duration_ratio, !fromJson<float>(duration_ratio_ptr, &this->duration_ratio)) )
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
          "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
          "fromJson",
          1915);
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
          (common::milog::MiLogStream *const)(v2 + 416),
          (const char (*)[35])"fromJson for: DurationRatio fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
        result = 0;
      }
      else
      {
        if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(&this->is_json_loaded, p_duration_ratio, &this->is_json_loaded);
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

// Line 1923: range 000000000FE42F00-000000000FE430D8
int32_t __cdecl data::ConfigBuffDebuffResistance::getHashValue(const data::ConfigBuffDebuffResistance *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t VecHashValue; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1924";
  *(_QWORD *)(v2 + 16) = data::ConfigBuffDebuffResistance::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  VecHashValue = data::getVecHashValue(&this->resistance_buff_debuffs);
  common::tools::HashUtils::appendHash(VecHashValue, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->resistance_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->resistance_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->resistance_ratio);
  }
  common::tools::HashUtils::appendHash(this->resistance_ratio, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->duration_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->duration_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->duration_ratio);
  }
  common::tools::HashUtils::appendHash(this->duration_ratio, (int32_t *)(v2 + 32));
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

// Line 1933: range 000000000FE430DA-000000000FE436C2
bool __cdecl data::ConfigTimeSlow::fromJson(data::ConfigTimeSlow *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *duration_ptr; // [rsp+10h] [rbp-170h]
  const Json::Value *slow_ratio_ptr; // [rsp+18h] [rbp-168h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigTimeSlow::fromJson;
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
    "duration",
    (const std::allocator<char> *)(v2 + 32));
  duration_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( duration_ptr && !fromJson<float>(duration_ptr, &this->duration) )
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
      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
      "fromJson",
      1943);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[30])"fromJson for: duration fails!");
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
      "slowRatio",
      (const std::allocator<char> *)(v2 + 48));
    slow_ratio_ptr = jsonValueFind(jval, (const std::string *)(v2 + 192));
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( slow_ratio_ptr && !fromJson<float>(slow_ratio_ptr, &this->slow_ratio) )
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
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
        "fromJson",
        1955);
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
        (common::milog::MiLogStream *const)(v2 + 256),
        (const char (*)[31])"fromJson for: slowRatio fails!");
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

// Line 1963: range 000000000FE436C4-000000000FE43882
int32_t __cdecl data::ConfigTimeSlow::getHashValue(const data::ConfigTimeSlow *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1964";
  *(_QWORD *)(v2 + 16) = data::ConfigTimeSlow::getHashValue;
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
  common::tools::HashUtils::appendHash(this->duration, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->slow_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->slow_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->slow_ratio);
  }
  common::tools::HashUtils::appendHash(this->slow_ratio, (int32_t *)(v2 + 32));
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

// Line 1973: range 000000000FE43884-000000000FE43897
int32_t __cdecl data::BaseActionContainer::getHashValue(const data::BaseActionContainer *const this)
{
  return 0;
};

// Line 1979: range 000000000FE43898-000000000FE476BF
void __cdecl data::AbilityProperty::foreachMember(
        data::AbilityProperty *const this,
        std::function<void(std::any&)> *p_func)
{
  std::any *v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5[4896]; // [rsp+10h] [rbp-1320h] BYREF

  v2 = (std::any *)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_7(4864LL);
    if ( v3 )
      v2 = (std::any *)v3;
  }
  v2->_M_manager = (void (*)(std::any::_Op, const std::any *, std::any::_Arg *))1102416563;
  v2->_M_storage._M_ptr = a151321640Entit;
  v2[1]._M_manager = (void (*)(std::any::_Op, const std::any *, std::any::_Arg *))data::AbilityProperty::foreachMember;
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
  v4[536862775] = -219021312;
  v4[536862776] = -219021312;
  v4[536862777] = -219021312;
  v4[536862778] = -219021312;
  v4[536862779] = -219021312;
  v4[536862780] = -219021312;
  v4[536862781] = -219021312;
  v4[536862782] = -219021312;
  v4[536862783] = -219021312;
  v4[536862784] = -219021312;
  v4[536862785] = -219021312;
  v4[536862786] = -219021312;
  v4[536862787] = -219021312;
  v4[536862788] = -219021312;
  v4[536862789] = -219021312;
  v4[536862790] = -219021312;
  v4[536862791] = -219021312;
  v4[536862792] = -219021312;
  v4[536862793] = -219021312;
  v4[536862794] = -219021312;
  v4[536862795] = -219021312;
  v4[536862796] = -219021312;
  v4[536862797] = -219021312;
  v4[536862798] = -219021312;
  v4[536862799] = -219021312;
  v4[536862800] = -219021312;
  v4[536862801] = -219021312;
  v4[536862802] = -219021312;
  v4[536862803] = -219021312;
  v4[536862804] = -219021312;
  v4[536862805] = -219021312;
  v4[536862806] = -219021312;
  v4[536862807] = -219021312;
  v4[536862808] = -219021312;
  v4[536862809] = -219021312;
  v4[536862810] = -219021312;
  v4[536862811] = -219021312;
  v4[536862812] = -219021312;
  v4[536862813] = -219021312;
  v4[536862814] = -219021312;
  v4[536862815] = -219021312;
  v4[536862816] = -219021312;
  v4[536862817] = -219021312;
  v4[536862818] = -219021312;
  v4[536862819] = -219021312;
  v4[536862820] = -219021312;
  v4[536862821] = -219021312;
  v4[536862822] = -219021312;
  v4[536862823] = -219021312;
  v4[536862824] = -219021312;
  v4[536862825] = -219021312;
  v4[536862826] = -219021312;
  v4[536862827] = -219021312;
  v4[536862828] = -219021312;
  v4[536862829] = -219021312;
  v4[536862830] = -219021312;
  v4[536862831] = -219021312;
  v4[536862832] = -219021312;
  v4[536862833] = -219021312;
  v4[536862834] = -219021312;
  v4[536862835] = -219021312;
  v4[536862836] = -219021312;
  v4[536862837] = -219021312;
  v4[536862838] = -219021312;
  v4[536862839] = -219021312;
  v4[536862840] = -219021312;
  v4[536862841] = -219021312;
  v4[536862842] = -219021312;
  v4[536862843] = -219021312;
  v4[536862844] = -219021312;
  v4[536862845] = -219021312;
  v4[536862846] = -219021312;
  v4[536862847] = -219021312;
  v4[536862848] = -219021312;
  v4[536862849] = -219021312;
  v4[536862850] = -219021312;
  v4[536862851] = -219021312;
  v4[536862852] = -219021312;
  v4[536862853] = -219021312;
  v4[536862854] = -219021312;
  v4[536862855] = -219021312;
  v4[536862856] = -219021312;
  v4[536862857] = -219021312;
  v4[536862858] = -219021312;
  v4[536862859] = -219021312;
  v4[536862860] = -219021312;
  v4[536862861] = -219021312;
  v4[536862862] = -219021312;
  v4[536862863] = -219021312;
  v4[536862864] = -219021312;
  v4[536862865] = -219021312;
  v4[536862866] = -219021312;
  v4[536862867] = -219021312;
  v4[536862868] = -219021312;
  v4[536862869] = -219021312;
  v4[536862870] = -219021312;
  v4[536862871] = -202178560;
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 2,
    &this->ENTITY_CHARGE_SPEED_RATIO_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 2);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 4,
    &this->ENTITY_MASS_RATIO);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 4);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 6,
    &this->ENTITY_WEIGHT_RATIO);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 6);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 8,
    &this->ENTITY_LIFE_TIME_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 8);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 10,
    &this->ENTITY_ANIMATOR_MOVE_SPEED);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 10);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 12,
    &this->ENTITY_ANIMATOR_ATTACK_SPEED);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 12);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 14,
    &this->ENTITY_ANIMATOR_OVERALL_SPEED);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 14);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 16,
    &this->ENTITY_ANIMATOR_OVERALL_SPEED_MULTIPLIED);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 16);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 18,
    &this->ACTOR_ANI_DAMAGE_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 18);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 20,
    &this->ACTOR_ANI_DEFENCE_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 20);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 22,
    &this->ACTOR_MAX_STAMINA_RATIO);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 22);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 24,
    &this->ACTOR_MAX_STAMINA_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 24);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 26,
    &this->ACTOR_COST_STAMINA_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 26);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 28,
    &this->ACTOR_COST_STAMINA_RATIO);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 28);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 30,
    &this->ACTOR_RECOVER_STAMINA_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 30);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 32,
    &this->ACTOR_RECOVER_STAMINA_RATIO);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 32);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 34,
    &this->ACTOR_DEBUFF_DURATION_RATIO_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 34);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 36,
    &this->ACTOR_WEIGHT_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 36);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 38,
    &this->ACTOR_ENDURE_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 38);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 40,
    &this->ACTOR_TIME_SCALE_RATIO);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 40);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 42,
    &this->ACTOR_ADD_GRAVITY_SCALE);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 42);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 44,
    &this->ACTOR_RATIO_BULLET_MOVE_SPEED_RATIO);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 44);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 46,
    &this->ACTOR_RATIO_BULLET_MOVE_ANGULAR_VELOCITY_RATIO);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 46);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 48,
    &this->ACTOR_RATIO_BULLET_MOVE_SURROUND_RADIUS_RATIO);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 48);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 50,
    &this->ACTOR_ADSORBATE_PICK_RADIUS_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 50);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 52,
    &this->ACTOR_ENERGY_COST_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 52);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 54,
    &this->ACTOR_FALLING_DAMAGE_RATIO);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 54);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 56,
    &this->ACTOR_HP_THRESHOLD_RATIO);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 56);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 58,
    &this->ACTOR_FLY_BACK_SPEED_MAX_RATIO);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 58);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 60,
    &this->ACTOR_FLY_HORIZONTAL_SPEED_MAX_RATIO);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 60);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 62,
    &this->ACTOR_FLY_ROTATION_ANGULAR_VELOCITY_RATIO);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 62);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 64,
    &this->ACTOR_FLY_DOWN_SPEED_RATIO);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 64);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 66,
    &this->ACTOR_FLY_FORWARD_SPEED_MAX_RATIO);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 66);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 68,
    &this->ACTOR_FLY_OVERALL_SPEED_RATIO);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 68);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 70,
    &this->ACTOR_MAX_HP_RATIO);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 70);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 72,
    &this->ACTOR_MAX_HP_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 72);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 74,
    &this->ACTOR_DEFENCE_RATIO);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 74);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 76,
    &this->ACTOR_DEFENCE_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 76);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 78,
    &this->ACTOR_ATTACK_RATIO);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 78);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 80,
    &this->ACTOR_ATTACK_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 80);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 82,
    &this->ACTOR_CRITICAL_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 82);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 84,
    &this->ACTOR_ANTI_CRITICAL_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 84);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 86,
    &this->ACTOR_CRITICAL_HURT_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 86);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 88,
    &this->ACTOR_HIT_HEAD_DMG_RATIO);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 88);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 90,
    &this->ACTOR_CHARGE_EFFICIENCY_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 90);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 92,
    &this->ACTOR_ADD_HURT_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 92);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 94,
    &this->ACTOR_SUB_HURT_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 94);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 96,
    &this->ACTOR_HEAL_ADD_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 96);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 98,
    &this->ACTOR_HEALED_ADD_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 98);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 100,
    &this->ACTOR_EFFECT_HIT_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 100);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 102,
    &this->ACTOR_EFFECT_RESIST_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 102);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 104,
    &this->ACTOR_FREEZE_RESIST_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 104);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 106,
    &this->ACTOR_DIZZY_RESIST_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 106);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 108,
    &this->ACTOR_FREEZE_SHORTEN_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 108);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 110,
    &this->ACTOR_DIZZY_SHORTEN_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 110);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 112,
    &this->ACTOR_FIRE_ADD_HURT_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 112);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 114,
    &this->ACTOR_ELEC_ADD_HURT_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 114);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 116,
    &this->ACTOR_WATER_ADD_HURT_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 116);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 118,
    &this->ACTOR_GRASS_ADD_HURT_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 118);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 120,
    &this->ACTOR_WIND_ADD_HURT_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 120);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 122,
    &this->ACTOR_ICE_ADD_HURT_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 122);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 124,
    &this->ACTOR_ROCK_ADD_HURT_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 124);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 126,
    &this->ACTOR_PHYSICAL_ADD_HURT_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 126);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 128,
    &this->ACTOR_PHYSICAL_SUB_HURT_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 128);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 130,
    &this->ACTOR_FIRE_SUB_HURT_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 130);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 132,
    &this->ACTOR_ELEC_SUB_HURT_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 132);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 134,
    &this->ACTOR_WATER_SUB_HURT_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 134);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 136,
    &this->ACTOR_GRASS_SUB_HURT_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 136);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 138,
    &this->ACTOR_WIND_SUB_HURT_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 138);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 140,
    &this->ACTOR_ICE_SUB_HURT_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 140);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 142,
    &this->ACTOR_ROCK_SUB_HURT_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 142);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 144,
    &this->ACTOR_ELEM_ATTACK_ROCK_RATIO);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 144);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 146,
    &this->ACTOR_ELEM_DEFENSE_ROCK_RATIO);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 146);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 148,
    &this->ACTOR_ELEM_MASTERY_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 148);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 150,
    &this->ACTOR_ELEM_REACT_SWIRL_FIRE_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 150);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 152,
    &this->ACTOR_ELEM_REACT_SWIRL_ICE_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 152);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 154,
    &this->ACTOR_ELEM_REACT_SWIRL_WATER_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 154);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 156,
    &this->ACTOR_ELEM_REACT_SWIRL_ELECTRIC_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 156);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 158,
    &this->ACTOR_ELEM_REACT_SCONDUCT_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 158);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 160,
    &this->ACTOR_ELEM_REACT_STEAM_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 160);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 162,
    &this->ACTOR_ELEM_REACT_MELT_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 162);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 164,
    &this->ACTOR_ELEM_REACT_ELECTRIC_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 164);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 166,
    &this->ACTOR_ELEM_REACT_BURN_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 166);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 168,
    &this->ACTOR_ELEM_REACT_FREEZE_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 168);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 170,
    &this->ACTOR_ELEM_REACT_EXPLODE_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 170);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 172,
    &this->ACTOR_ELEM_REACT_FROZENBROKEN_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 172);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 174,
    &this->ACTOR_ELEM_REACT_OVERDOSE_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 174);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 176,
    &this->ACTOR_ELEM_REACT_OVERDOSE_ELECTRIC_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 176);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 178,
    &this->ACTOR_ELEM_REACT_OVERDOSE_GRASS_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 178);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 180,
    &this->ACTOR_ELEM_REACT_OVERGROW_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 180);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 182,
    &this->ACTOR_ELEM_REACT_OVERGROW_FIRE_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 182);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 184,
    &this->ACTOR_ELEM_REACT_OVERGROW_ELECTRIC_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 184);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 186,
    &this->ACTOR_ELEM_REACT_OVERGROW_VARIATION_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 186);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 188,
    &this->ACTOR_ELEM_REACT_OVERGROW_VARIATION_EXTRA_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 188);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 190,
    &this->ACTOR_DEFENCE_IGNORE_RATIO);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 190);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 192,
    &this->ACTOR_DEFENCE_IGNORE_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 192);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 194,
    &this->ACTOR_PHYSICAL_MUTE_HURT_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 194);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 196,
    &this->ACTOR_FIRE_MUTE_HURT_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 196);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 198,
    &this->ACTOR_ELEC_MUTE_HURT_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 198);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 200,
    &this->ACTOR_WATER_MUTE_HURT_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 200);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 202,
    &this->ACTOR_GRASS_MUTE_HURT_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 202);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 204,
    &this->ACTOR_WIND_MUTE_HURT_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 204);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 206,
    &this->ACTOR_ICE_MUTE_HURT_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 206);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 208,
    &this->ACTOR_ROCK_MUTE_HURT_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 208);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 210,
    &this->ACTOR_SKILL_CD_MINUS_RATIO);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 210);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 212,
    &this->ACTOR_SHIELD_COST_MINUS_RATIO);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 212);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 214,
    &this->ACTOR_ATTACK_EXTRA_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 214);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 216,
    &this->ACTOR_DEFENCE_EXTRA_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 216);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 218,
    &this->ACTOR_CRITICAL_EXTRA_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 218);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 220,
    &this->ACTOR_ANTI_CRITICAL_EXTRA_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 220);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 222,
    &this->ACTOR_CRITICAL_HURT_EXTRA_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 222);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 224,
    &this->ACTOR_CHARGE_EFFICIENCY_EXTRA_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 224);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 226,
    &this->ACTOR_ELEM_MASTERY_EXTRA_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 226);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 228,
    &this->ACTOR_PHYSICAL_SUB_HURT_EXTRA_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 228);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 230,
    &this->ACTOR_FIRE_ADD_HURT_EXTRA_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 230);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 232,
    &this->ACTOR_ELEC_ADD_HURT_EXTRA_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 232);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 234,
    &this->ACTOR_WATER_ADD_HURT_EXTRA_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 234);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 236,
    &this->ACTOR_GRASS_ADD_HURT_EXTRA_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 236);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 238,
    &this->ACTOR_WIND_ADD_HURT_EXTRA_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 238);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 240,
    &this->ACTOR_ICE_ADD_HURT_EXTRA_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 240);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 242,
    &this->ACTOR_ROCK_ADD_HURT_EXTRA_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 242);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 244,
    &this->ACTOR_FIRE_SUB_HURT_EXTRA_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 244);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 246,
    &this->ACTOR_ELEC_SUB_HURT_EXTRA_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 246);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 248,
    &this->ACTOR_WATER_SUB_HURT_EXTRA_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 248);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 250,
    &this->ACTOR_GRASS_SUB_HURT_EXTRA_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 250);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 252,
    &this->ACTOR_WIND_SUB_HURT_EXTRA_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 252);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 254,
    &this->ACTOR_ICE_SUB_HURT_EXTRA_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 254);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 256,
    &this->ACTOR_ROCK_SUB_HURT_EXTRA_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 256);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 258,
    &this->ACTOR_SKILL_CD_MINUS_EXTRA_RATIO);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 258);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 260,
    &this->ACTOR_SHIELD_COST_MINUS_EXTRA_RATIO);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 260);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 262,
    &this->ACTOR_PHYSICAL_ADD_HURT_EXTRA_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 262);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 264,
    &this->ACTOR_ELEM_REACT_CRITICAL_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 264);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 266,
    &this->ACTOR_ELEM_REACT_CRITICAL_HURT_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 266);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 268,
    &this->ACTOR_ELEM_REACT_EXPLODE_CRITICAL_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 268);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 270,
    &this->ACTOR_ELEM_REACT_EXPLODE_CRITICAL_HURT_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 270);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 272,
    &this->ACTOR_ELEM_REACT_SWIRL_CRITICAL_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 272);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 274,
    &this->ACTOR_ELEM_REACT_SWIRL_CRITICAL_HURT_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 274);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 276,
    &this->ACTOR_ELEM_REACT_ELECTRIC_CRITICAL_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 276);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 278,
    &this->ACTOR_ELEM_REACT_ELECTRIC_CRITICAL_HURT_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 278);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 280,
    &this->ACTOR_ELEM_REACT_SCONDUCT_CRITICAL_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 280);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 282,
    &this->ACTOR_ELEM_REACT_SCONDUCT_CRITICAL_HURT_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 282);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 284,
    &this->ACTOR_ELEM_REACT_BURN_CRITICAL_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 284);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 286,
    &this->ACTOR_ELEM_REACT_BURN_CRITICAL_HURT_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 286);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 288,
    &this->ACTOR_ELEM_REACT_FROZENBROKEN_CRITICAL_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 288);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 290,
    &this->ACTOR_ELEM_REACT_FROZENBROKEN_CRITICAL_HURT_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 290);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 292,
    &this->ACTOR_ELEM_REACT_OVERGROW_CRITICAL_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 292);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 294,
    &this->ACTOR_ELEM_REACT_OVERGROW_CRITICAL_HURT_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 294);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 296,
    &this->ACTOR_ELEM_REACT_OVERGROW_FIRE_CRITICAL_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 296);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 298,
    &this->ACTOR_ELEM_REACT_OVERGROW_FIRE_CRITICAL_HURT_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 298);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 300,
    &this->ACTOR_ELEM_REACT_OVERGROW_ELECTRIC_CRITICAL_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 300);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 302,
    &this->ACTOR_ELEM_REACT_OVERGROW_ELECTRIC_CRITICAL_HURT_DELTA);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 302);
  std::any::~any(v2 + 302);
  std::any::~any(v2 + 300);
  std::any::~any(v2 + 298);
  std::any::~any(v2 + 296);
  std::any::~any(v2 + 294);
  std::any::~any(v2 + 292);
  std::any::~any(v2 + 290);
  std::any::~any(v2 + 288);
  std::any::~any(v2 + 286);
  std::any::~any(v2 + 284);
  std::any::~any(v2 + 282);
  std::any::~any(v2 + 280);
  std::any::~any(v2 + 278);
  std::any::~any(v2 + 276);
  std::any::~any(v2 + 274);
  std::any::~any(v2 + 272);
  std::any::~any(v2 + 270);
  std::any::~any(v2 + 268);
  std::any::~any(v2 + 266);
  std::any::~any(v2 + 264);
  std::any::~any(v2 + 262);
  std::any::~any(v2 + 260);
  std::any::~any(v2 + 258);
  std::any::~any(v2 + 256);
  std::any::~any(v2 + 254);
  std::any::~any(v2 + 252);
  std::any::~any(v2 + 250);
  std::any::~any(v2 + 248);
  std::any::~any(v2 + 246);
  std::any::~any(v2 + 244);
  std::any::~any(v2 + 242);
  std::any::~any(v2 + 240);
  std::any::~any(v2 + 238);
  std::any::~any(v2 + 236);
  std::any::~any(v2 + 234);
  std::any::~any(v2 + 232);
  std::any::~any(v2 + 230);
  std::any::~any(v2 + 228);
  std::any::~any(v2 + 226);
  std::any::~any(v2 + 224);
  std::any::~any(v2 + 222);
  std::any::~any(v2 + 220);
  std::any::~any(v2 + 218);
  std::any::~any(v2 + 216);
  std::any::~any(v2 + 214);
  std::any::~any(v2 + 212);
  std::any::~any(v2 + 210);
  std::any::~any(v2 + 208);
  std::any::~any(v2 + 206);
  std::any::~any(v2 + 204);
  std::any::~any(v2 + 202);
  std::any::~any(v2 + 200);
  std::any::~any(v2 + 198);
  std::any::~any(v2 + 196);
  std::any::~any(v2 + 194);
  std::any::~any(v2 + 192);
  std::any::~any(v2 + 190);
  std::any::~any(v2 + 188);
  std::any::~any(v2 + 186);
  std::any::~any(v2 + 184);
  std::any::~any(v2 + 182);
  std::any::~any(v2 + 180);
  std::any::~any(v2 + 178);
  std::any::~any(v2 + 176);
  std::any::~any(v2 + 174);
  std::any::~any(v2 + 172);
  std::any::~any(v2 + 170);
  std::any::~any(v2 + 168);
  std::any::~any(v2 + 166);
  std::any::~any(v2 + 164);
  std::any::~any(v2 + 162);
  std::any::~any(v2 + 160);
  std::any::~any(v2 + 158);
  std::any::~any(v2 + 156);
  std::any::~any(v2 + 154);
  std::any::~any(v2 + 152);
  std::any::~any(v2 + 150);
  std::any::~any(v2 + 148);
  std::any::~any(v2 + 146);
  std::any::~any(v2 + 144);
  std::any::~any(v2 + 142);
  std::any::~any(v2 + 140);
  std::any::~any(v2 + 138);
  std::any::~any(v2 + 136);
  std::any::~any(v2 + 134);
  std::any::~any(v2 + 132);
  std::any::~any(v2 + 130);
  std::any::~any(v2 + 128);
  std::any::~any(v2 + 126);
  std::any::~any(v2 + 124);
  std::any::~any(v2 + 122);
  std::any::~any(v2 + 120);
  std::any::~any(v2 + 118);
  std::any::~any(v2 + 116);
  std::any::~any(v2 + 114);
  std::any::~any(v2 + 112);
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
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8258) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 608) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    v2->_M_manager = (void (*)(std::any::_Op, const std::any *, std::any::_Arg *))1172321806;
    __asan_stack_free_7(v2, 4864LL, v5);
  }
};

// Line 2286: range 000000000FE476C0-000000000FE48DE7
void __cdecl data::ElementDefine::foreachMember(
        data::ElementDefine *const this,
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
  v2->_M_storage._M_ptr = "55 32 16 29 ABILITY_BURNING_NAME_any:2287 64 16 25 ABILITY_WET_NAME_any:2289 96 16 25 ABILITY_"
                          "ICE_NAME_any:2291 128 16 27 ABILITY_STEAM_NAME_any:2293 160 16 29 ABILITY_EXPLODE_NAME_any:229"
                          "5 192 16 28 ABILITY_FREEZE_NAME_any:2297 224 16 28 ABILITY_FROZEN_NAME_any:2299 256 16 26 ABIL"
                          "ITY_MELT_NAME_any:2301 288 16 30 ABILITY_ELECTRIC_NAME_any:2303 320 16 26 ABILITY_ROCK_NAME_an"
                          "y:2305 352 16 30 PREFFIX_OVERLOAD_RATE_any:2307 384 16 31 SUFFIX_REACTION_DAMAGE_any:2309 416 "
                          "16 33 SUFFIX_REACTION_CRITICAL_any:2311 448 16 38 SUFFIX_REACTION_CRITICAL_HURT_any:2313 480 1"
                          "6 32 SUFFIX_ELEMENT_STRENGTH_any:2315 512 16 29 ABILITY_ICE_DURATION_any:2317 544 16 31 ABILIT"
                          "Y_ICE_DURABILITY_any:2319 576 16 26 ABILITY_WIND_NAME_any:2321 608 16 30 ABILITY_WIND_DURATION"
                          "_any:2323 640 16 32 ABILITY_WIND_DURABILITY_any:2325 672 16 36 ABILITY_STICK_ELECTRIC_NAME_any"
                          ":2327 704 16 40 ABILITY_STICK_ELECTRIC_DURATION_any:2329 736 16 42 ABILITY_STICK_ELECTRIC_DURA"
                          "BILITY_any:2331 768 16 37 ABILITY_STORM_LIGHTNING_NAME_any:2333 800 16 26 ABILITY_FIRE_NAME_an"
                          "y:2335 832 16 30 ABILITY_FIRE_DURATION_any:2337 864 16 32 ABILITY_FIRE_DURABILITY_any:2339 896"
                          " 16 36 ABILITY_SUPERCONDUCTOR_NAME_any:2341 928 16 42 ABILITY_SUPERCONDUCTOR_DURABILITY_any:23"
                          "43 960 16 32 ABILITY_SWIRL_FIRE_NAME_any:2345 992 16 31 ABILITY_SWIRL_ICE_NAME_any:2347 1024 1"
                          "6 33 ABILITY_SWIRL_WATER_NAME_any:2349 1056 16 36 ABILITY_SWIRL_ELECTRIC_NAME_any:2351 1088 16"
                          " 33 ABILITY_SWIRL_DURABILITY_any:2353 1120 16 36 ABILITY_STICK_ROCK_DURATION_any:2355 1152 16 "
                          "38 ABILITY_STICK_ROCK_DURABILITY_any:2357 1184 16 33 ABILITY_STICK_WATER_NAME_any:2359 1216 16"
                          " 37 ABILITY_STICK_WATER_DURATION_any:2361 1248 16 39 ABILITY_STICK_WATER_DURABILITY_any:2363 1"
                          "280 16 38 ABILITY_Crystallize_FIRE_NAME_any:2365 1312 16 37 ABILITY_Crystallize_ICE_NAME_any:2"
                          "367 1344 16 39 ABILITY_Crystallize_WATER_NAME_any:2369 1376 16 42 ABILITY_Crystallize_ELECTRIC"
                          "_NAME_any:2371 1408 16 35 ABILITY_FROZEN_BROKEN_NAME_any:2373 1440 16 33 ABILITY_STICK_GRASS_N"
                          "AME_any:2375 1472 16 37 ABILITY_STICK_GRASS_DURATION_any:2377 1504 16 39 ABILITY_STICK_GRASS_D"
                          "URABILITY_any:2379 1536 16 34 ABILITY_BURNING_FUEL_NAME_any:2381 1568 16 38 ABILITY_BURNING_FU"
                          "EL_DURATION_any:2383 1600 16 40 ABILITY_BURNING_FUEL_DURABILITY_any:2385 1632 16 30 ABILITY_OV"
                          "ERDOSE_BUFF_any:2387 1664 16 25 ABILITY_OVERGROW_any:2389 1696 16 39 ABILITY_OVERGROW_MUSHROOM"
                          "_FIRE_any:2391 1728 16 43 ABILITY_OVERGROW_MUSHROOM_ELECTRIC_any:2393 1760 16 36 ABILITY_OVERD"
                          "OSE_DURABILITY_any:2395";
  v2[1]._M_manager = (void (*)(std::any::_Op, const std::any *, std::any::_Arg *))data::ElementDefine::foreachMember;
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
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 2,
    &this->ABILITY_BURNING_NAME);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 2);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 4,
    &this->ABILITY_WET_NAME);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 4);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 6,
    &this->ABILITY_ICE_NAME);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 6);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 8,
    &this->ABILITY_STEAM_NAME);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 8);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 10,
    &this->ABILITY_EXPLODE_NAME);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 10);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 12,
    &this->ABILITY_FREEZE_NAME);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 12);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 14,
    &this->ABILITY_FROZEN_NAME);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 14);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 16,
    &this->ABILITY_MELT_NAME);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 16);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 18,
    &this->ABILITY_ELECTRIC_NAME);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 18);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 20,
    &this->ABILITY_ROCK_NAME);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 20);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 22,
    &this->PREFFIX_OVERLOAD_RATE);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 22);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 24,
    &this->SUFFIX_REACTION_DAMAGE);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 24);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 26,
    &this->SUFFIX_REACTION_CRITICAL);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 26);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 28,
    &this->SUFFIX_REACTION_CRITICAL_HURT);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 28);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 30,
    &this->SUFFIX_ELEMENT_STRENGTH);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 30);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 32,
    &this->ABILITY_ICE_DURATION);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 32);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 34,
    &this->ABILITY_ICE_DURABILITY);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 34);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 36,
    &this->ABILITY_WIND_NAME);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 36);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 38,
    &this->ABILITY_WIND_DURATION);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 38);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 40,
    &this->ABILITY_WIND_DURABILITY);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 40);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 42,
    &this->ABILITY_STICK_ELECTRIC_NAME);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 42);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 44,
    &this->ABILITY_STICK_ELECTRIC_DURATION);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 44);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 46,
    &this->ABILITY_STICK_ELECTRIC_DURABILITY);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 46);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 48,
    &this->ABILITY_STORM_LIGHTNING_NAME);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 48);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 50,
    &this->ABILITY_FIRE_NAME);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 50);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 52,
    &this->ABILITY_FIRE_DURATION);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 52);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 54,
    &this->ABILITY_FIRE_DURABILITY);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 54);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 56,
    &this->ABILITY_SUPERCONDUCTOR_NAME);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 56);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 58,
    &this->ABILITY_SUPERCONDUCTOR_DURABILITY);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 58);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 60,
    &this->ABILITY_SWIRL_FIRE_NAME);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 60);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 62,
    &this->ABILITY_SWIRL_ICE_NAME);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 62);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 64,
    &this->ABILITY_SWIRL_WATER_NAME);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 64);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 66,
    &this->ABILITY_SWIRL_ELECTRIC_NAME);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 66);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 68,
    &this->ABILITY_SWIRL_DURABILITY);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 68);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 70,
    &this->ABILITY_STICK_ROCK_DURATION);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 70);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 72,
    &this->ABILITY_STICK_ROCK_DURABILITY);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 72);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 74,
    &this->ABILITY_STICK_WATER_NAME);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 74);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 76,
    &this->ABILITY_STICK_WATER_DURATION);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 76);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 78,
    &this->ABILITY_STICK_WATER_DURABILITY);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 78);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 80,
    &this->ABILITY_Crystallize_FIRE_NAME);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 80);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 82,
    &this->ABILITY_Crystallize_ICE_NAME);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 82);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 84,
    &this->ABILITY_Crystallize_WATER_NAME);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 84);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 86,
    &this->ABILITY_Crystallize_ELECTRIC_NAME);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 86);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 88,
    &this->ABILITY_FROZEN_BROKEN_NAME);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 88);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 90,
    &this->ABILITY_STICK_GRASS_NAME);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 90);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 92,
    &this->ABILITY_STICK_GRASS_DURATION);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 92);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 94,
    &this->ABILITY_STICK_GRASS_DURABILITY);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 94);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 96,
    &this->ABILITY_BURNING_FUEL_NAME);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 96);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 98,
    &this->ABILITY_BURNING_FUEL_DURATION);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 98);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 100,
    &this->ABILITY_BURNING_FUEL_DURABILITY);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 100);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 102,
    &this->ABILITY_OVERDOSE_BUFF);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 102);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 104,
    &this->ABILITY_OVERGROW);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 104);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 106,
    &this->ABILITY_OVERGROW_MUSHROOM_FIRE);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 106);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 108,
    &this->ABILITY_OVERGROW_MUSHROOM_ELECTRIC);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 108);
  std::any::any<std::string const&,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 110,
    &this->ABILITY_OVERDOSE_DURABILITY);
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

// Line 2403: range 000000000FE48DE8-000000000FE49047
const char *__cdecl data::enumValToStr(data::AbilityCameraShotType e)
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
    if ( e == LEVEL_0 )
    {
      result = "LEVEL";
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
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
        "enumValToStr",
        2411);
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
      result = byte_1A5DA060;
    }
  }
  else
  {
    result = "AVATAR";
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

// Line 2417: range 000000000FE49048-000000000FE4987F
bool __cdecl data::enumStrToVal(const std::string *s, data::AbilityCameraShotType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::AbilityCameraShotType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::AbilityCameraShotType> >::pointer v11; // rax
  data::AbilityCameraShotType second; // ecx
  char v13; // dl
  data::AbilityCameraShotType *ea; // [rsp+10h] [rbp-1E0h]
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
  *(_QWORD *)(v2 + 8) = "9 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 8 7 it:2428 144 8 9 <u"
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
      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
      "enumStrToVal",
      2420);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 176),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::AbilityCameraShotType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::AbilityCameraShotType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::AbilityCameraShotType>::pair<char const(&)[7],data::AbilityCameraShotType,true>(
        (std::pair<const std::string,data::AbilityCameraShotType> *const)(v2 + 304),
        (const char (*)[7])"AVATAR",
        (data::AbilityCameraShotType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "AVATAR");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::AbilityCameraShotType>::pair<char const(&)[6],data::AbilityCameraShotType,true>(
        (std::pair<const std::string,data::AbilityCameraShotType> *const)(v2 + 344),
        (const char (*)[6])"LEVEL",
        (data::AbilityCameraShotType *)(v2 + 96));
      std::allocator<std::pair<std::string const,data::AbilityCameraShotType>>::allocator((std::allocator<std::pair<const std::string,data::AbilityCameraShotType> > *const)(v2 + 64));
      std::map<std::string,data::AbilityCameraShotType>::map(
        &data::enumStrToVal(std::string const&,data::AbilityCameraShotType &)::m,
        (std::initializer_list<std::pair<const std::string,data::AbilityCameraShotType> >)__PAIR128__(2LL, v2 + 304),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::AbilityCameraShotType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::AbilityCameraShotType &)::m);
      e = (data::AbilityCameraShotType *)&data::enumStrToVal(std::string const&,data::AbilityCameraShotType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::AbilityCameraShotType>::~map,
        &data::enumStrToVal(std::string const&,data::AbilityCameraShotType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::AbilityCameraShotType>>::~allocator((std::allocator<std::pair<const std::string,data::AbilityCameraShotType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::AbilityCameraShotType> *)(v2 + 384);
            i != (std::pair<const std::string,data::AbilityCameraShotType> *)(v2 + 304);
            std::pair<std::string const,data::AbilityCameraShotType>::~pair(i) )
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
    *(std::map<std::string,data::AbilityCameraShotType>::iterator *)(v2 + 112) = std::map<std::string,data::AbilityCameraShotType>::find(
                                                                                   &data::enumStrToVal(std::string const&,data::AbilityCameraShotType &)::m,
                                                                                   s);
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 144, s);
    *(std::map<std::string,data::AbilityCameraShotType>::iterator *)(v2 + 144) = std::map<std::string,data::AbilityCameraShotType>::end(&data::enumStrToVal(std::string const&,data::AbilityCameraShotType &)::m);
    v8 = (char *)(v2 + 144);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::AbilityCameraShotType> >::_Self *)(v2 + 112),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::AbilityCameraShotType> >::_Self *)(v2 + 144));
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
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
        "enumStrToVal",
        2431);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 240),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::AbilityCameraShotType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::AbilityCameraShotType> > *const)(v2 + 112));
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

// Line 2439: range 000000000FE49880-000000000FE498AF
const char *__cdecl data::getDescription(data::AbilityCameraShotType e)
{
  if ( e == AVATAR_0 )
    return (const char *)&unk_1A6DD180;
  if ( e == LEVEL_0 )
    return (const char *)&unk_1A6DD1C0;
  return "unknown enum value!";
};

// Line 2452: range 000000000FE498B0-000000000FE49B69
const char *__cdecl data::enumValToStr(data::SwitchSkillPriority e)
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
  if ( e == Quest )
  {
    result = "Quest";
  }
  else
  {
    if ( e <= Quest )
    {
      if ( e == Playmode )
      {
        result = "Playmode";
        goto LABEL_22;
      }
      if ( e == AvatarSpecial )
      {
        result = "AvatarSpecial";
        goto LABEL_22;
      }
      if ( e <= AvatarSpecial )
      {
        if ( e == Base )
        {
          result = "Base";
          goto LABEL_22;
        }
        if ( e == AvatarCommon )
        {
          result = "AvatarCommon";
          goto LABEL_22;
        }
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
      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
      "enumValToStr",
      2466);
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
    result = byte_1A5DA060;
  }
LABEL_22:
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

// Line 2472: range 000000000FE49B6A-000000000FE4A5D4
bool __cdecl data::enumStrToVal(const std::string *s, data::SwitchSkillPriority *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::SwitchSkillPriority> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::SwitchSkillPriority> >::pointer v11; // rax
  data::SwitchSkillPriority second; // ecx
  char v13; // dl
  data::SwitchSkillPriority *ea; // [rsp+10h] [rbp-2A0h]
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
                        "<unknown> 128 4 9 <unknown> 144 8 7 it:2486 176 8 9 <unknown> 208 32 9 <unknown> 272 32 9 <unkno"
                        "wn> 336 200 9 <unknown>";
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
      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
      "enumStrToVal",
      2475);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 208),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 208));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::SwitchSkillPriority &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::SwitchSkillPriority &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::SwitchSkillPriority>::pair<char const(&)[5],data::SwitchSkillPriority,true>(
        (std::pair<const std::string,data::SwitchSkillPriority> *const)(v2 + 336),
        (const char (*)[5])"Base",
        (data::SwitchSkillPriority *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "Base");
      *(_DWORD *)(v2 + 80) = 4;
      std::pair<std::string const,data::SwitchSkillPriority>::pair<char const(&)[13],data::SwitchSkillPriority,true>(
        (std::pair<const std::string,data::SwitchSkillPriority> *const)(v2 + 376),
        (const char (*)[13])"AvatarCommon",
        (data::SwitchSkillPriority *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "AvatarCommon");
      *(_DWORD *)(v2 + 96) = 5;
      std::pair<std::string const,data::SwitchSkillPriority>::pair<char const(&)[14],data::SwitchSkillPriority,true>(
        (std::pair<const std::string,data::SwitchSkillPriority> *const)(v2 + 416),
        (const char (*)[14])"AvatarSpecial",
        (data::SwitchSkillPriority *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "AvatarSpecial");
      *(_DWORD *)(v2 + 112) = 101;
      std::pair<std::string const,data::SwitchSkillPriority>::pair<char const(&)[9],data::SwitchSkillPriority,true>(
        (std::pair<const std::string,data::SwitchSkillPriority> *const)(v2 + 456),
        (const char (*)[9])"Playmode",
        (data::SwitchSkillPriority *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "Playmode");
      *(_DWORD *)(v2 + 128) = 102;
      std::pair<std::string const,data::SwitchSkillPriority>::pair<char const(&)[6],data::SwitchSkillPriority,true>(
        (std::pair<const std::string,data::SwitchSkillPriority> *const)(v2 + 496),
        (const char (*)[6])"Quest",
        (data::SwitchSkillPriority *)(v2 + 128));
      std::allocator<std::pair<std::string const,data::SwitchSkillPriority>>::allocator((std::allocator<std::pair<const std::string,data::SwitchSkillPriority> > *const)(v2 + 48));
      std::map<std::string,data::SwitchSkillPriority>::map(
        &data::enumStrToVal(std::string const&,data::SwitchSkillPriority &)::m,
        (std::initializer_list<std::pair<const std::string,data::SwitchSkillPriority> >)__PAIR128__(5LL, v2 + 336),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::SwitchSkillPriority>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::SwitchSkillPriority &)::m);
      e = (data::SwitchSkillPriority *)&data::enumStrToVal(std::string const&,data::SwitchSkillPriority &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::SwitchSkillPriority>::~map,
        &data::enumStrToVal(std::string const&,data::SwitchSkillPriority &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::SwitchSkillPriority>>::~allocator((std::allocator<std::pair<const std::string,data::SwitchSkillPriority> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::SwitchSkillPriority> *)(v2 + 536);
            i != (std::pair<const std::string,data::SwitchSkillPriority> *)(v2 + 336);
            std::pair<std::string const,data::SwitchSkillPriority>::~pair(i) )
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
    *(std::map<std::string,data::SwitchSkillPriority>::iterator *)(v2 + 144) = std::map<std::string,data::SwitchSkillPriority>::find(
                                                                                 &data::enumStrToVal(std::string const&,data::SwitchSkillPriority &)::m,
                                                                                 s);
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, s);
    *(std::map<std::string,data::SwitchSkillPriority>::iterator *)(v2 + 176) = std::map<std::string,data::SwitchSkillPriority>::end(&data::enumStrToVal(std::string const&,data::SwitchSkillPriority &)::m);
    v8 = (char *)(v2 + 176);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::SwitchSkillPriority> >::_Self *)(v2 + 144),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::SwitchSkillPriority> >::_Self *)(v2 + 176));
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
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbilityCommon.cpp",
        "enumStrToVal",
        2489);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 272),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 272));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::SwitchSkillPriority>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::SwitchSkillPriority> > *const)(v2 + 144));
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

// Line 2497: range 000000000FE4A5D5-000000000FE4A643
const char *__cdecl data::getDescription(data::SwitchSkillPriority e)
{
  if ( e == Quest )
    return (const char *)&unk_1A6DD560;
  if ( e <= Quest )
  {
    if ( e == Playmode )
      return (const char *)&unk_1A6DD520;
    if ( e == AvatarSpecial )
      return (const char *)&unk_1A6DD4C0;
    if ( e <= AvatarSpecial )
    {
      if ( e == Base )
        return (const char *)&unk_1A6DD420;
      if ( e == AvatarCommon )
        return (const char *)&unk_1A6DD460;
    }
  }
  return "unknown enum value!";
};
